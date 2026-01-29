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

#include <tencentcloud/iotexplorer/v20190423/IotexplorerClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Iotexplorer::V20190423;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-04-23";
    const string ENDPOINT = "iotexplorer.tencentcloudapi.com";
}

IotexplorerClient::IotexplorerClient(const Credential &credential, const string &region) :
    IotexplorerClient(credential, region, ClientProfile())
{
}

IotexplorerClient::IotexplorerClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


IotexplorerClient::ActivateTWeCallLicenseOutcome IotexplorerClient::ActivateTWeCallLicense(const ActivateTWeCallLicenseRequest &request)
{
    auto outcome = MakeRequest(request, "ActivateTWeCallLicense");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ActivateTWeCallLicenseResponse rsp = ActivateTWeCallLicenseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ActivateTWeCallLicenseOutcome(rsp);
        else
            return ActivateTWeCallLicenseOutcome(o.GetError());
    }
    else
    {
        return ActivateTWeCallLicenseOutcome(outcome.GetError());
    }
}

void IotexplorerClient::ActivateTWeCallLicenseAsync(const ActivateTWeCallLicenseRequest& request, const ActivateTWeCallLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ActivateTWeCallLicenseRequest&;
    using Resp = ActivateTWeCallLicenseResponse;

    DoRequestAsync<Req, Resp>(
        "ActivateTWeCallLicense", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::ActivateTWeCallLicenseOutcomeCallable IotexplorerClient::ActivateTWeCallLicenseCallable(const ActivateTWeCallLicenseRequest &request)
{
    const auto prom = std::make_shared<std::promise<ActivateTWeCallLicenseOutcome>>();
    ActivateTWeCallLicenseAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const ActivateTWeCallLicenseRequest&,
        ActivateTWeCallLicenseOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::BatchCreateTWeSeeRecognitionTaskOutcome IotexplorerClient::BatchCreateTWeSeeRecognitionTask(const BatchCreateTWeSeeRecognitionTaskRequest &request)
{
    auto outcome = MakeRequest(request, "BatchCreateTWeSeeRecognitionTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchCreateTWeSeeRecognitionTaskResponse rsp = BatchCreateTWeSeeRecognitionTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchCreateTWeSeeRecognitionTaskOutcome(rsp);
        else
            return BatchCreateTWeSeeRecognitionTaskOutcome(o.GetError());
    }
    else
    {
        return BatchCreateTWeSeeRecognitionTaskOutcome(outcome.GetError());
    }
}

void IotexplorerClient::BatchCreateTWeSeeRecognitionTaskAsync(const BatchCreateTWeSeeRecognitionTaskRequest& request, const BatchCreateTWeSeeRecognitionTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BatchCreateTWeSeeRecognitionTaskRequest&;
    using Resp = BatchCreateTWeSeeRecognitionTaskResponse;

    DoRequestAsync<Req, Resp>(
        "BatchCreateTWeSeeRecognitionTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::BatchCreateTWeSeeRecognitionTaskOutcomeCallable IotexplorerClient::BatchCreateTWeSeeRecognitionTaskCallable(const BatchCreateTWeSeeRecognitionTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<BatchCreateTWeSeeRecognitionTaskOutcome>>();
    BatchCreateTWeSeeRecognitionTaskAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const BatchCreateTWeSeeRecognitionTaskRequest&,
        BatchCreateTWeSeeRecognitionTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::BatchInvokeTWeSeeRecognitionTaskOutcome IotexplorerClient::BatchInvokeTWeSeeRecognitionTask(const BatchInvokeTWeSeeRecognitionTaskRequest &request)
{
    auto outcome = MakeRequest(request, "BatchInvokeTWeSeeRecognitionTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchInvokeTWeSeeRecognitionTaskResponse rsp = BatchInvokeTWeSeeRecognitionTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchInvokeTWeSeeRecognitionTaskOutcome(rsp);
        else
            return BatchInvokeTWeSeeRecognitionTaskOutcome(o.GetError());
    }
    else
    {
        return BatchInvokeTWeSeeRecognitionTaskOutcome(outcome.GetError());
    }
}

void IotexplorerClient::BatchInvokeTWeSeeRecognitionTaskAsync(const BatchInvokeTWeSeeRecognitionTaskRequest& request, const BatchInvokeTWeSeeRecognitionTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BatchInvokeTWeSeeRecognitionTaskRequest&;
    using Resp = BatchInvokeTWeSeeRecognitionTaskResponse;

    DoRequestAsync<Req, Resp>(
        "BatchInvokeTWeSeeRecognitionTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::BatchInvokeTWeSeeRecognitionTaskOutcomeCallable IotexplorerClient::BatchInvokeTWeSeeRecognitionTaskCallable(const BatchInvokeTWeSeeRecognitionTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<BatchInvokeTWeSeeRecognitionTaskOutcome>>();
    BatchInvokeTWeSeeRecognitionTaskAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const BatchInvokeTWeSeeRecognitionTaskRequest&,
        BatchInvokeTWeSeeRecognitionTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::BatchUpdateFirmwareOutcome IotexplorerClient::BatchUpdateFirmware(const BatchUpdateFirmwareRequest &request)
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

void IotexplorerClient::BatchUpdateFirmwareAsync(const BatchUpdateFirmwareRequest& request, const BatchUpdateFirmwareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

IotexplorerClient::BatchUpdateFirmwareOutcomeCallable IotexplorerClient::BatchUpdateFirmwareCallable(const BatchUpdateFirmwareRequest &request)
{
    const auto prom = std::make_shared<std::promise<BatchUpdateFirmwareOutcome>>();
    BatchUpdateFirmwareAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const BatchUpdateFirmwareRequest&,
        BatchUpdateFirmwareOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::BindCloudStorageUserOutcome IotexplorerClient::BindCloudStorageUser(const BindCloudStorageUserRequest &request)
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

void IotexplorerClient::BindCloudStorageUserAsync(const BindCloudStorageUserRequest& request, const BindCloudStorageUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

IotexplorerClient::BindCloudStorageUserOutcomeCallable IotexplorerClient::BindCloudStorageUserCallable(const BindCloudStorageUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<BindCloudStorageUserOutcome>>();
    BindCloudStorageUserAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const BindCloudStorageUserRequest&,
        BindCloudStorageUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::BindDevicesOutcome IotexplorerClient::BindDevices(const BindDevicesRequest &request)
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

void IotexplorerClient::BindDevicesAsync(const BindDevicesRequest& request, const BindDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BindDevicesRequest&;
    using Resp = BindDevicesResponse;

    DoRequestAsync<Req, Resp>(
        "BindDevices", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::BindDevicesOutcomeCallable IotexplorerClient::BindDevicesCallable(const BindDevicesRequest &request)
{
    const auto prom = std::make_shared<std::promise<BindDevicesOutcome>>();
    BindDevicesAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const BindDevicesRequest&,
        BindDevicesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::BindProductsOutcome IotexplorerClient::BindProducts(const BindProductsRequest &request)
{
    auto outcome = MakeRequest(request, "BindProducts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindProductsResponse rsp = BindProductsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindProductsOutcome(rsp);
        else
            return BindProductsOutcome(o.GetError());
    }
    else
    {
        return BindProductsOutcome(outcome.GetError());
    }
}

void IotexplorerClient::BindProductsAsync(const BindProductsRequest& request, const BindProductsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BindProductsRequest&;
    using Resp = BindProductsResponse;

    DoRequestAsync<Req, Resp>(
        "BindProducts", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::BindProductsOutcomeCallable IotexplorerClient::BindProductsCallable(const BindProductsRequest &request)
{
    const auto prom = std::make_shared<std::promise<BindProductsOutcome>>();
    BindProductsAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const BindProductsRequest&,
        BindProductsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::BindTWeTalkAIBotOutcome IotexplorerClient::BindTWeTalkAIBot(const BindTWeTalkAIBotRequest &request)
{
    auto outcome = MakeRequest(request, "BindTWeTalkAIBot");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindTWeTalkAIBotResponse rsp = BindTWeTalkAIBotResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindTWeTalkAIBotOutcome(rsp);
        else
            return BindTWeTalkAIBotOutcome(o.GetError());
    }
    else
    {
        return BindTWeTalkAIBotOutcome(outcome.GetError());
    }
}

void IotexplorerClient::BindTWeTalkAIBotAsync(const BindTWeTalkAIBotRequest& request, const BindTWeTalkAIBotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BindTWeTalkAIBotRequest&;
    using Resp = BindTWeTalkAIBotResponse;

    DoRequestAsync<Req, Resp>(
        "BindTWeTalkAIBot", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::BindTWeTalkAIBotOutcomeCallable IotexplorerClient::BindTWeTalkAIBotCallable(const BindTWeTalkAIBotRequest &request)
{
    const auto prom = std::make_shared<std::promise<BindTWeTalkAIBotOutcome>>();
    BindTWeTalkAIBotAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const BindTWeTalkAIBotRequest&,
        BindTWeTalkAIBotOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::CallDeviceActionAsyncOutcome IotexplorerClient::CallDeviceActionAsync(const CallDeviceActionAsyncRequest &request)
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

void IotexplorerClient::CallDeviceActionAsyncAsync(const CallDeviceActionAsyncRequest& request, const CallDeviceActionAsyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

IotexplorerClient::CallDeviceActionAsyncOutcomeCallable IotexplorerClient::CallDeviceActionAsyncCallable(const CallDeviceActionAsyncRequest &request)
{
    const auto prom = std::make_shared<std::promise<CallDeviceActionAsyncOutcome>>();
    CallDeviceActionAsyncAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const CallDeviceActionAsyncRequest&,
        CallDeviceActionAsyncOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::CallDeviceActionSyncOutcome IotexplorerClient::CallDeviceActionSync(const CallDeviceActionSyncRequest &request)
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

void IotexplorerClient::CallDeviceActionSyncAsync(const CallDeviceActionSyncRequest& request, const CallDeviceActionSyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

IotexplorerClient::CallDeviceActionSyncOutcomeCallable IotexplorerClient::CallDeviceActionSyncCallable(const CallDeviceActionSyncRequest &request)
{
    const auto prom = std::make_shared<std::promise<CallDeviceActionSyncOutcome>>();
    CallDeviceActionSyncAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const CallDeviceActionSyncRequest&,
        CallDeviceActionSyncOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::ChangeP2PRouteOutcome IotexplorerClient::ChangeP2PRoute(const ChangeP2PRouteRequest &request)
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

void IotexplorerClient::ChangeP2PRouteAsync(const ChangeP2PRouteRequest& request, const ChangeP2PRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

IotexplorerClient::ChangeP2PRouteOutcomeCallable IotexplorerClient::ChangeP2PRouteCallable(const ChangeP2PRouteRequest &request)
{
    const auto prom = std::make_shared<std::promise<ChangeP2PRouteOutcome>>();
    ChangeP2PRouteAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const ChangeP2PRouteRequest&,
        ChangeP2PRouteOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::CheckFirmwareUpdateOutcome IotexplorerClient::CheckFirmwareUpdate(const CheckFirmwareUpdateRequest &request)
{
    auto outcome = MakeRequest(request, "CheckFirmwareUpdate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckFirmwareUpdateResponse rsp = CheckFirmwareUpdateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckFirmwareUpdateOutcome(rsp);
        else
            return CheckFirmwareUpdateOutcome(o.GetError());
    }
    else
    {
        return CheckFirmwareUpdateOutcome(outcome.GetError());
    }
}

void IotexplorerClient::CheckFirmwareUpdateAsync(const CheckFirmwareUpdateRequest& request, const CheckFirmwareUpdateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CheckFirmwareUpdateRequest&;
    using Resp = CheckFirmwareUpdateResponse;

    DoRequestAsync<Req, Resp>(
        "CheckFirmwareUpdate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::CheckFirmwareUpdateOutcomeCallable IotexplorerClient::CheckFirmwareUpdateCallable(const CheckFirmwareUpdateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckFirmwareUpdateOutcome>>();
    CheckFirmwareUpdateAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const CheckFirmwareUpdateRequest&,
        CheckFirmwareUpdateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::ControlDeviceDataOutcome IotexplorerClient::ControlDeviceData(const ControlDeviceDataRequest &request)
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

void IotexplorerClient::ControlDeviceDataAsync(const ControlDeviceDataRequest& request, const ControlDeviceDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

IotexplorerClient::ControlDeviceDataOutcomeCallable IotexplorerClient::ControlDeviceDataCallable(const ControlDeviceDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<ControlDeviceDataOutcome>>();
    ControlDeviceDataAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const ControlDeviceDataRequest&,
        ControlDeviceDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::CreateAISearchTaskAsyncOutcome IotexplorerClient::CreateAISearchTaskAsync(const CreateAISearchTaskAsyncRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAISearchTaskAsync");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAISearchTaskAsyncResponse rsp = CreateAISearchTaskAsyncResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAISearchTaskAsyncOutcome(rsp);
        else
            return CreateAISearchTaskAsyncOutcome(o.GetError());
    }
    else
    {
        return CreateAISearchTaskAsyncOutcome(outcome.GetError());
    }
}

void IotexplorerClient::CreateAISearchTaskAsyncAsync(const CreateAISearchTaskAsyncRequest& request, const CreateAISearchTaskAsyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAISearchTaskAsyncRequest&;
    using Resp = CreateAISearchTaskAsyncResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAISearchTaskAsync", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::CreateAISearchTaskAsyncOutcomeCallable IotexplorerClient::CreateAISearchTaskAsyncCallable(const CreateAISearchTaskAsyncRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAISearchTaskAsyncOutcome>>();
    CreateAISearchTaskAsyncAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const CreateAISearchTaskAsyncRequest&,
        CreateAISearchTaskAsyncOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::CreateBatchProductionOutcome IotexplorerClient::CreateBatchProduction(const CreateBatchProductionRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBatchProduction");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBatchProductionResponse rsp = CreateBatchProductionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBatchProductionOutcome(rsp);
        else
            return CreateBatchProductionOutcome(o.GetError());
    }
    else
    {
        return CreateBatchProductionOutcome(outcome.GetError());
    }
}

void IotexplorerClient::CreateBatchProductionAsync(const CreateBatchProductionRequest& request, const CreateBatchProductionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateBatchProductionRequest&;
    using Resp = CreateBatchProductionResponse;

    DoRequestAsync<Req, Resp>(
        "CreateBatchProduction", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::CreateBatchProductionOutcomeCallable IotexplorerClient::CreateBatchProductionCallable(const CreateBatchProductionRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateBatchProductionOutcome>>();
    CreateBatchProductionAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const CreateBatchProductionRequest&,
        CreateBatchProductionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::CreateCloudStorageAIServiceOutcome IotexplorerClient::CreateCloudStorageAIService(const CreateCloudStorageAIServiceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCloudStorageAIService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCloudStorageAIServiceResponse rsp = CreateCloudStorageAIServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCloudStorageAIServiceOutcome(rsp);
        else
            return CreateCloudStorageAIServiceOutcome(o.GetError());
    }
    else
    {
        return CreateCloudStorageAIServiceOutcome(outcome.GetError());
    }
}

void IotexplorerClient::CreateCloudStorageAIServiceAsync(const CreateCloudStorageAIServiceRequest& request, const CreateCloudStorageAIServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCloudStorageAIServiceRequest&;
    using Resp = CreateCloudStorageAIServiceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCloudStorageAIService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::CreateCloudStorageAIServiceOutcomeCallable IotexplorerClient::CreateCloudStorageAIServiceCallable(const CreateCloudStorageAIServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCloudStorageAIServiceOutcome>>();
    CreateCloudStorageAIServiceAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const CreateCloudStorageAIServiceRequest&,
        CreateCloudStorageAIServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::CreateCloudStorageAIServiceTaskOutcome IotexplorerClient::CreateCloudStorageAIServiceTask(const CreateCloudStorageAIServiceTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCloudStorageAIServiceTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCloudStorageAIServiceTaskResponse rsp = CreateCloudStorageAIServiceTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCloudStorageAIServiceTaskOutcome(rsp);
        else
            return CreateCloudStorageAIServiceTaskOutcome(o.GetError());
    }
    else
    {
        return CreateCloudStorageAIServiceTaskOutcome(outcome.GetError());
    }
}

void IotexplorerClient::CreateCloudStorageAIServiceTaskAsync(const CreateCloudStorageAIServiceTaskRequest& request, const CreateCloudStorageAIServiceTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCloudStorageAIServiceTaskRequest&;
    using Resp = CreateCloudStorageAIServiceTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCloudStorageAIServiceTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::CreateCloudStorageAIServiceTaskOutcomeCallable IotexplorerClient::CreateCloudStorageAIServiceTaskCallable(const CreateCloudStorageAIServiceTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCloudStorageAIServiceTaskOutcome>>();
    CreateCloudStorageAIServiceTaskAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const CreateCloudStorageAIServiceTaskRequest&,
        CreateCloudStorageAIServiceTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::CreateDeviceOutcome IotexplorerClient::CreateDevice(const CreateDeviceRequest &request)
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

void IotexplorerClient::CreateDeviceAsync(const CreateDeviceRequest& request, const CreateDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDeviceRequest&;
    using Resp = CreateDeviceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDevice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::CreateDeviceOutcomeCallable IotexplorerClient::CreateDeviceCallable(const CreateDeviceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDeviceOutcome>>();
    CreateDeviceAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const CreateDeviceRequest&,
        CreateDeviceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::CreateDeviceChannelOutcome IotexplorerClient::CreateDeviceChannel(const CreateDeviceChannelRequest &request)
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

void IotexplorerClient::CreateDeviceChannelAsync(const CreateDeviceChannelRequest& request, const CreateDeviceChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

IotexplorerClient::CreateDeviceChannelOutcomeCallable IotexplorerClient::CreateDeviceChannelCallable(const CreateDeviceChannelRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDeviceChannelOutcome>>();
    CreateDeviceChannelAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const CreateDeviceChannelRequest&,
        CreateDeviceChannelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::CreateDeviceSDPAnswerOutcome IotexplorerClient::CreateDeviceSDPAnswer(const CreateDeviceSDPAnswerRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDeviceSDPAnswer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDeviceSDPAnswerResponse rsp = CreateDeviceSDPAnswerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDeviceSDPAnswerOutcome(rsp);
        else
            return CreateDeviceSDPAnswerOutcome(o.GetError());
    }
    else
    {
        return CreateDeviceSDPAnswerOutcome(outcome.GetError());
    }
}

void IotexplorerClient::CreateDeviceSDPAnswerAsync(const CreateDeviceSDPAnswerRequest& request, const CreateDeviceSDPAnswerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDeviceSDPAnswerRequest&;
    using Resp = CreateDeviceSDPAnswerResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDeviceSDPAnswer", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::CreateDeviceSDPAnswerOutcomeCallable IotexplorerClient::CreateDeviceSDPAnswerCallable(const CreateDeviceSDPAnswerRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDeviceSDPAnswerOutcome>>();
    CreateDeviceSDPAnswerAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const CreateDeviceSDPAnswerRequest&,
        CreateDeviceSDPAnswerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::CreateExternalSourceAIServiceTaskOutcome IotexplorerClient::CreateExternalSourceAIServiceTask(const CreateExternalSourceAIServiceTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateExternalSourceAIServiceTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateExternalSourceAIServiceTaskResponse rsp = CreateExternalSourceAIServiceTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateExternalSourceAIServiceTaskOutcome(rsp);
        else
            return CreateExternalSourceAIServiceTaskOutcome(o.GetError());
    }
    else
    {
        return CreateExternalSourceAIServiceTaskOutcome(outcome.GetError());
    }
}

void IotexplorerClient::CreateExternalSourceAIServiceTaskAsync(const CreateExternalSourceAIServiceTaskRequest& request, const CreateExternalSourceAIServiceTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateExternalSourceAIServiceTaskRequest&;
    using Resp = CreateExternalSourceAIServiceTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateExternalSourceAIServiceTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::CreateExternalSourceAIServiceTaskOutcomeCallable IotexplorerClient::CreateExternalSourceAIServiceTaskCallable(const CreateExternalSourceAIServiceTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateExternalSourceAIServiceTaskOutcome>>();
    CreateExternalSourceAIServiceTaskAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const CreateExternalSourceAIServiceTaskRequest&,
        CreateExternalSourceAIServiceTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::CreateFenceBindOutcome IotexplorerClient::CreateFenceBind(const CreateFenceBindRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFenceBind");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFenceBindResponse rsp = CreateFenceBindResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFenceBindOutcome(rsp);
        else
            return CreateFenceBindOutcome(o.GetError());
    }
    else
    {
        return CreateFenceBindOutcome(outcome.GetError());
    }
}

void IotexplorerClient::CreateFenceBindAsync(const CreateFenceBindRequest& request, const CreateFenceBindAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateFenceBindRequest&;
    using Resp = CreateFenceBindResponse;

    DoRequestAsync<Req, Resp>(
        "CreateFenceBind", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::CreateFenceBindOutcomeCallable IotexplorerClient::CreateFenceBindCallable(const CreateFenceBindRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateFenceBindOutcome>>();
    CreateFenceBindAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const CreateFenceBindRequest&,
        CreateFenceBindOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::CreateFreeCloudStorageOutcome IotexplorerClient::CreateFreeCloudStorage(const CreateFreeCloudStorageRequest &request)
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

void IotexplorerClient::CreateFreeCloudStorageAsync(const CreateFreeCloudStorageRequest& request, const CreateFreeCloudStorageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

IotexplorerClient::CreateFreeCloudStorageOutcomeCallable IotexplorerClient::CreateFreeCloudStorageCallable(const CreateFreeCloudStorageRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateFreeCloudStorageOutcome>>();
    CreateFreeCloudStorageAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const CreateFreeCloudStorageRequest&,
        CreateFreeCloudStorageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::CreateIotVideoCloudStorageOutcome IotexplorerClient::CreateIotVideoCloudStorage(const CreateIotVideoCloudStorageRequest &request)
{
    auto outcome = MakeRequest(request, "CreateIotVideoCloudStorage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateIotVideoCloudStorageResponse rsp = CreateIotVideoCloudStorageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateIotVideoCloudStorageOutcome(rsp);
        else
            return CreateIotVideoCloudStorageOutcome(o.GetError());
    }
    else
    {
        return CreateIotVideoCloudStorageOutcome(outcome.GetError());
    }
}

void IotexplorerClient::CreateIotVideoCloudStorageAsync(const CreateIotVideoCloudStorageRequest& request, const CreateIotVideoCloudStorageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateIotVideoCloudStorageRequest&;
    using Resp = CreateIotVideoCloudStorageResponse;

    DoRequestAsync<Req, Resp>(
        "CreateIotVideoCloudStorage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::CreateIotVideoCloudStorageOutcomeCallable IotexplorerClient::CreateIotVideoCloudStorageCallable(const CreateIotVideoCloudStorageRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateIotVideoCloudStorageOutcome>>();
    CreateIotVideoCloudStorageAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const CreateIotVideoCloudStorageRequest&,
        CreateIotVideoCloudStorageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::CreateLoRaFrequencyOutcome IotexplorerClient::CreateLoRaFrequency(const CreateLoRaFrequencyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLoRaFrequency");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLoRaFrequencyResponse rsp = CreateLoRaFrequencyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLoRaFrequencyOutcome(rsp);
        else
            return CreateLoRaFrequencyOutcome(o.GetError());
    }
    else
    {
        return CreateLoRaFrequencyOutcome(outcome.GetError());
    }
}

void IotexplorerClient::CreateLoRaFrequencyAsync(const CreateLoRaFrequencyRequest& request, const CreateLoRaFrequencyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateLoRaFrequencyRequest&;
    using Resp = CreateLoRaFrequencyResponse;

    DoRequestAsync<Req, Resp>(
        "CreateLoRaFrequency", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::CreateLoRaFrequencyOutcomeCallable IotexplorerClient::CreateLoRaFrequencyCallable(const CreateLoRaFrequencyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateLoRaFrequencyOutcome>>();
    CreateLoRaFrequencyAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const CreateLoRaFrequencyRequest&,
        CreateLoRaFrequencyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::CreateLoRaGatewayOutcome IotexplorerClient::CreateLoRaGateway(const CreateLoRaGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLoRaGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLoRaGatewayResponse rsp = CreateLoRaGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLoRaGatewayOutcome(rsp);
        else
            return CreateLoRaGatewayOutcome(o.GetError());
    }
    else
    {
        return CreateLoRaGatewayOutcome(outcome.GetError());
    }
}

void IotexplorerClient::CreateLoRaGatewayAsync(const CreateLoRaGatewayRequest& request, const CreateLoRaGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateLoRaGatewayRequest&;
    using Resp = CreateLoRaGatewayResponse;

    DoRequestAsync<Req, Resp>(
        "CreateLoRaGateway", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::CreateLoRaGatewayOutcomeCallable IotexplorerClient::CreateLoRaGatewayCallable(const CreateLoRaGatewayRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateLoRaGatewayOutcome>>();
    CreateLoRaGatewayAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const CreateLoRaGatewayRequest&,
        CreateLoRaGatewayOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::CreateOtaModuleOutcome IotexplorerClient::CreateOtaModule(const CreateOtaModuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateOtaModule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateOtaModuleResponse rsp = CreateOtaModuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateOtaModuleOutcome(rsp);
        else
            return CreateOtaModuleOutcome(o.GetError());
    }
    else
    {
        return CreateOtaModuleOutcome(outcome.GetError());
    }
}

void IotexplorerClient::CreateOtaModuleAsync(const CreateOtaModuleRequest& request, const CreateOtaModuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateOtaModuleRequest&;
    using Resp = CreateOtaModuleResponse;

    DoRequestAsync<Req, Resp>(
        "CreateOtaModule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::CreateOtaModuleOutcomeCallable IotexplorerClient::CreateOtaModuleCallable(const CreateOtaModuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateOtaModuleOutcome>>();
    CreateOtaModuleAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const CreateOtaModuleRequest&,
        CreateOtaModuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::CreatePositionFenceOutcome IotexplorerClient::CreatePositionFence(const CreatePositionFenceRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePositionFence");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePositionFenceResponse rsp = CreatePositionFenceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePositionFenceOutcome(rsp);
        else
            return CreatePositionFenceOutcome(o.GetError());
    }
    else
    {
        return CreatePositionFenceOutcome(outcome.GetError());
    }
}

void IotexplorerClient::CreatePositionFenceAsync(const CreatePositionFenceRequest& request, const CreatePositionFenceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreatePositionFenceRequest&;
    using Resp = CreatePositionFenceResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePositionFence", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::CreatePositionFenceOutcomeCallable IotexplorerClient::CreatePositionFenceCallable(const CreatePositionFenceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePositionFenceOutcome>>();
    CreatePositionFenceAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const CreatePositionFenceRequest&,
        CreatePositionFenceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::CreatePositionSpaceOutcome IotexplorerClient::CreatePositionSpace(const CreatePositionSpaceRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePositionSpace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePositionSpaceResponse rsp = CreatePositionSpaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePositionSpaceOutcome(rsp);
        else
            return CreatePositionSpaceOutcome(o.GetError());
    }
    else
    {
        return CreatePositionSpaceOutcome(outcome.GetError());
    }
}

void IotexplorerClient::CreatePositionSpaceAsync(const CreatePositionSpaceRequest& request, const CreatePositionSpaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreatePositionSpaceRequest&;
    using Resp = CreatePositionSpaceResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePositionSpace", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::CreatePositionSpaceOutcomeCallable IotexplorerClient::CreatePositionSpaceCallable(const CreatePositionSpaceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePositionSpaceOutcome>>();
    CreatePositionSpaceAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const CreatePositionSpaceRequest&,
        CreatePositionSpaceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::CreateProjectOutcome IotexplorerClient::CreateProject(const CreateProjectRequest &request)
{
    auto outcome = MakeRequest(request, "CreateProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateProjectResponse rsp = CreateProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateProjectOutcome(rsp);
        else
            return CreateProjectOutcome(o.GetError());
    }
    else
    {
        return CreateProjectOutcome(outcome.GetError());
    }
}

void IotexplorerClient::CreateProjectAsync(const CreateProjectRequest& request, const CreateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateProjectRequest&;
    using Resp = CreateProjectResponse;

    DoRequestAsync<Req, Resp>(
        "CreateProject", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::CreateProjectOutcomeCallable IotexplorerClient::CreateProjectCallable(const CreateProjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateProjectOutcome>>();
    CreateProjectAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const CreateProjectRequest&,
        CreateProjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::CreateStudioProductOutcome IotexplorerClient::CreateStudioProduct(const CreateStudioProductRequest &request)
{
    auto outcome = MakeRequest(request, "CreateStudioProduct");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateStudioProductResponse rsp = CreateStudioProductResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateStudioProductOutcome(rsp);
        else
            return CreateStudioProductOutcome(o.GetError());
    }
    else
    {
        return CreateStudioProductOutcome(outcome.GetError());
    }
}

void IotexplorerClient::CreateStudioProductAsync(const CreateStudioProductRequest& request, const CreateStudioProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateStudioProductRequest&;
    using Resp = CreateStudioProductResponse;

    DoRequestAsync<Req, Resp>(
        "CreateStudioProduct", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::CreateStudioProductOutcomeCallable IotexplorerClient::CreateStudioProductCallable(const CreateStudioProductRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateStudioProductOutcome>>();
    CreateStudioProductAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const CreateStudioProductRequest&,
        CreateStudioProductOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::CreateTRTCSignaturesWithRoomIdOutcome IotexplorerClient::CreateTRTCSignaturesWithRoomId(const CreateTRTCSignaturesWithRoomIdRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTRTCSignaturesWithRoomId");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTRTCSignaturesWithRoomIdResponse rsp = CreateTRTCSignaturesWithRoomIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTRTCSignaturesWithRoomIdOutcome(rsp);
        else
            return CreateTRTCSignaturesWithRoomIdOutcome(o.GetError());
    }
    else
    {
        return CreateTRTCSignaturesWithRoomIdOutcome(outcome.GetError());
    }
}

void IotexplorerClient::CreateTRTCSignaturesWithRoomIdAsync(const CreateTRTCSignaturesWithRoomIdRequest& request, const CreateTRTCSignaturesWithRoomIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTRTCSignaturesWithRoomIdRequest&;
    using Resp = CreateTRTCSignaturesWithRoomIdResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTRTCSignaturesWithRoomId", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::CreateTRTCSignaturesWithRoomIdOutcomeCallable IotexplorerClient::CreateTRTCSignaturesWithRoomIdCallable(const CreateTRTCSignaturesWithRoomIdRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTRTCSignaturesWithRoomIdOutcome>>();
    CreateTRTCSignaturesWithRoomIdAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const CreateTRTCSignaturesWithRoomIdRequest&,
        CreateTRTCSignaturesWithRoomIdOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::CreateTWeSeeRecognitionTaskOutcome IotexplorerClient::CreateTWeSeeRecognitionTask(const CreateTWeSeeRecognitionTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTWeSeeRecognitionTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTWeSeeRecognitionTaskResponse rsp = CreateTWeSeeRecognitionTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTWeSeeRecognitionTaskOutcome(rsp);
        else
            return CreateTWeSeeRecognitionTaskOutcome(o.GetError());
    }
    else
    {
        return CreateTWeSeeRecognitionTaskOutcome(outcome.GetError());
    }
}

void IotexplorerClient::CreateTWeSeeRecognitionTaskAsync(const CreateTWeSeeRecognitionTaskRequest& request, const CreateTWeSeeRecognitionTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTWeSeeRecognitionTaskRequest&;
    using Resp = CreateTWeSeeRecognitionTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTWeSeeRecognitionTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::CreateTWeSeeRecognitionTaskOutcomeCallable IotexplorerClient::CreateTWeSeeRecognitionTaskCallable(const CreateTWeSeeRecognitionTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTWeSeeRecognitionTaskOutcome>>();
    CreateTWeSeeRecognitionTaskAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const CreateTWeSeeRecognitionTaskRequest&,
        CreateTWeSeeRecognitionTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::CreateTWeSeeRecognitionTaskWithFileOutcome IotexplorerClient::CreateTWeSeeRecognitionTaskWithFile(const CreateTWeSeeRecognitionTaskWithFileRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTWeSeeRecognitionTaskWithFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTWeSeeRecognitionTaskWithFileResponse rsp = CreateTWeSeeRecognitionTaskWithFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTWeSeeRecognitionTaskWithFileOutcome(rsp);
        else
            return CreateTWeSeeRecognitionTaskWithFileOutcome(o.GetError());
    }
    else
    {
        return CreateTWeSeeRecognitionTaskWithFileOutcome(outcome.GetError());
    }
}

void IotexplorerClient::CreateTWeSeeRecognitionTaskWithFileAsync(const CreateTWeSeeRecognitionTaskWithFileRequest& request, const CreateTWeSeeRecognitionTaskWithFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTWeSeeRecognitionTaskWithFileRequest&;
    using Resp = CreateTWeSeeRecognitionTaskWithFileResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTWeSeeRecognitionTaskWithFile", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::CreateTWeSeeRecognitionTaskWithFileOutcomeCallable IotexplorerClient::CreateTWeSeeRecognitionTaskWithFileCallable(const CreateTWeSeeRecognitionTaskWithFileRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTWeSeeRecognitionTaskWithFileOutcome>>();
    CreateTWeSeeRecognitionTaskWithFileAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const CreateTWeSeeRecognitionTaskWithFileRequest&,
        CreateTWeSeeRecognitionTaskWithFileOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::CreateTWeSeeServiceOutcome IotexplorerClient::CreateTWeSeeService(const CreateTWeSeeServiceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTWeSeeService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTWeSeeServiceResponse rsp = CreateTWeSeeServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTWeSeeServiceOutcome(rsp);
        else
            return CreateTWeSeeServiceOutcome(o.GetError());
    }
    else
    {
        return CreateTWeSeeServiceOutcome(outcome.GetError());
    }
}

void IotexplorerClient::CreateTWeSeeServiceAsync(const CreateTWeSeeServiceRequest& request, const CreateTWeSeeServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTWeSeeServiceRequest&;
    using Resp = CreateTWeSeeServiceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTWeSeeService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::CreateTWeSeeServiceOutcomeCallable IotexplorerClient::CreateTWeSeeServiceCallable(const CreateTWeSeeServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTWeSeeServiceOutcome>>();
    CreateTWeSeeServiceAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const CreateTWeSeeServiceRequest&,
        CreateTWeSeeServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::CreateTWeTalkAIBotOutcome IotexplorerClient::CreateTWeTalkAIBot(const CreateTWeTalkAIBotRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTWeTalkAIBot");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTWeTalkAIBotResponse rsp = CreateTWeTalkAIBotResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTWeTalkAIBotOutcome(rsp);
        else
            return CreateTWeTalkAIBotOutcome(o.GetError());
    }
    else
    {
        return CreateTWeTalkAIBotOutcome(outcome.GetError());
    }
}

void IotexplorerClient::CreateTWeTalkAIBotAsync(const CreateTWeTalkAIBotRequest& request, const CreateTWeTalkAIBotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTWeTalkAIBotRequest&;
    using Resp = CreateTWeTalkAIBotResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTWeTalkAIBot", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::CreateTWeTalkAIBotOutcomeCallable IotexplorerClient::CreateTWeTalkAIBotCallable(const CreateTWeTalkAIBotRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTWeTalkAIBotOutcome>>();
    CreateTWeTalkAIBotAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const CreateTWeTalkAIBotRequest&,
        CreateTWeTalkAIBotOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::CreateTWeTalkProductConfigOutcome IotexplorerClient::CreateTWeTalkProductConfig(const CreateTWeTalkProductConfigRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTWeTalkProductConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTWeTalkProductConfigResponse rsp = CreateTWeTalkProductConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTWeTalkProductConfigOutcome(rsp);
        else
            return CreateTWeTalkProductConfigOutcome(o.GetError());
    }
    else
    {
        return CreateTWeTalkProductConfigOutcome(outcome.GetError());
    }
}

void IotexplorerClient::CreateTWeTalkProductConfigAsync(const CreateTWeTalkProductConfigRequest& request, const CreateTWeTalkProductConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTWeTalkProductConfigRequest&;
    using Resp = CreateTWeTalkProductConfigResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTWeTalkProductConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::CreateTWeTalkProductConfigOutcomeCallable IotexplorerClient::CreateTWeTalkProductConfigCallable(const CreateTWeTalkProductConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTWeTalkProductConfigOutcome>>();
    CreateTWeTalkProductConfigAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const CreateTWeTalkProductConfigRequest&,
        CreateTWeTalkProductConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::CreateTWeTalkProductConfigV2Outcome IotexplorerClient::CreateTWeTalkProductConfigV2(const CreateTWeTalkProductConfigV2Request &request)
{
    auto outcome = MakeRequest(request, "CreateTWeTalkProductConfigV2");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTWeTalkProductConfigV2Response rsp = CreateTWeTalkProductConfigV2Response();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTWeTalkProductConfigV2Outcome(rsp);
        else
            return CreateTWeTalkProductConfigV2Outcome(o.GetError());
    }
    else
    {
        return CreateTWeTalkProductConfigV2Outcome(outcome.GetError());
    }
}

void IotexplorerClient::CreateTWeTalkProductConfigV2Async(const CreateTWeTalkProductConfigV2Request& request, const CreateTWeTalkProductConfigV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTWeTalkProductConfigV2Request&;
    using Resp = CreateTWeTalkProductConfigV2Response;

    DoRequestAsync<Req, Resp>(
        "CreateTWeTalkProductConfigV2", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::CreateTWeTalkProductConfigV2OutcomeCallable IotexplorerClient::CreateTWeTalkProductConfigV2Callable(const CreateTWeTalkProductConfigV2Request &request)
{
    const auto prom = std::make_shared<std::promise<CreateTWeTalkProductConfigV2Outcome>>();
    CreateTWeTalkProductConfigV2Async(
    request,
    [prom](
        const IotexplorerClient*,
        const CreateTWeTalkProductConfigV2Request&,
        CreateTWeTalkProductConfigV2Outcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::CreateTopicPolicyOutcome IotexplorerClient::CreateTopicPolicy(const CreateTopicPolicyRequest &request)
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

void IotexplorerClient::CreateTopicPolicyAsync(const CreateTopicPolicyRequest& request, const CreateTopicPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTopicPolicyRequest&;
    using Resp = CreateTopicPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTopicPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::CreateTopicPolicyOutcomeCallable IotexplorerClient::CreateTopicPolicyCallable(const CreateTopicPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTopicPolicyOutcome>>();
    CreateTopicPolicyAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const CreateTopicPolicyRequest&,
        CreateTopicPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::CreateTopicRuleOutcome IotexplorerClient::CreateTopicRule(const CreateTopicRuleRequest &request)
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

void IotexplorerClient::CreateTopicRuleAsync(const CreateTopicRuleRequest& request, const CreateTopicRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTopicRuleRequest&;
    using Resp = CreateTopicRuleResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTopicRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::CreateTopicRuleOutcomeCallable IotexplorerClient::CreateTopicRuleCallable(const CreateTopicRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTopicRuleOutcome>>();
    CreateTopicRuleAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const CreateTopicRuleRequest&,
        CreateTopicRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::DeleteCloudStorageEventOutcome IotexplorerClient::DeleteCloudStorageEvent(const DeleteCloudStorageEventRequest &request)
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

void IotexplorerClient::DeleteCloudStorageEventAsync(const DeleteCloudStorageEventRequest& request, const DeleteCloudStorageEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

IotexplorerClient::DeleteCloudStorageEventOutcomeCallable IotexplorerClient::DeleteCloudStorageEventCallable(const DeleteCloudStorageEventRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCloudStorageEventOutcome>>();
    DeleteCloudStorageEventAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const DeleteCloudStorageEventRequest&,
        DeleteCloudStorageEventOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::DeleteDeviceOutcome IotexplorerClient::DeleteDevice(const DeleteDeviceRequest &request)
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

void IotexplorerClient::DeleteDeviceAsync(const DeleteDeviceRequest& request, const DeleteDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

IotexplorerClient::DeleteDeviceOutcomeCallable IotexplorerClient::DeleteDeviceCallable(const DeleteDeviceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDeviceOutcome>>();
    DeleteDeviceAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const DeleteDeviceRequest&,
        DeleteDeviceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::DeleteDevicesOutcome IotexplorerClient::DeleteDevices(const DeleteDevicesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDevices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDevicesResponse rsp = DeleteDevicesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDevicesOutcome(rsp);
        else
            return DeleteDevicesOutcome(o.GetError());
    }
    else
    {
        return DeleteDevicesOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DeleteDevicesAsync(const DeleteDevicesRequest& request, const DeleteDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDevicesRequest&;
    using Resp = DeleteDevicesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDevices", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::DeleteDevicesOutcomeCallable IotexplorerClient::DeleteDevicesCallable(const DeleteDevicesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDevicesOutcome>>();
    DeleteDevicesAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const DeleteDevicesRequest&,
        DeleteDevicesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::DeleteFenceBindOutcome IotexplorerClient::DeleteFenceBind(const DeleteFenceBindRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteFenceBind");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteFenceBindResponse rsp = DeleteFenceBindResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteFenceBindOutcome(rsp);
        else
            return DeleteFenceBindOutcome(o.GetError());
    }
    else
    {
        return DeleteFenceBindOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DeleteFenceBindAsync(const DeleteFenceBindRequest& request, const DeleteFenceBindAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteFenceBindRequest&;
    using Resp = DeleteFenceBindResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteFenceBind", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::DeleteFenceBindOutcomeCallable IotexplorerClient::DeleteFenceBindCallable(const DeleteFenceBindRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteFenceBindOutcome>>();
    DeleteFenceBindAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const DeleteFenceBindRequest&,
        DeleteFenceBindOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::DeleteLoRaFrequencyOutcome IotexplorerClient::DeleteLoRaFrequency(const DeleteLoRaFrequencyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLoRaFrequency");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLoRaFrequencyResponse rsp = DeleteLoRaFrequencyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLoRaFrequencyOutcome(rsp);
        else
            return DeleteLoRaFrequencyOutcome(o.GetError());
    }
    else
    {
        return DeleteLoRaFrequencyOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DeleteLoRaFrequencyAsync(const DeleteLoRaFrequencyRequest& request, const DeleteLoRaFrequencyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteLoRaFrequencyRequest&;
    using Resp = DeleteLoRaFrequencyResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteLoRaFrequency", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::DeleteLoRaFrequencyOutcomeCallable IotexplorerClient::DeleteLoRaFrequencyCallable(const DeleteLoRaFrequencyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteLoRaFrequencyOutcome>>();
    DeleteLoRaFrequencyAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const DeleteLoRaFrequencyRequest&,
        DeleteLoRaFrequencyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::DeleteLoRaGatewayOutcome IotexplorerClient::DeleteLoRaGateway(const DeleteLoRaGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLoRaGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLoRaGatewayResponse rsp = DeleteLoRaGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLoRaGatewayOutcome(rsp);
        else
            return DeleteLoRaGatewayOutcome(o.GetError());
    }
    else
    {
        return DeleteLoRaGatewayOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DeleteLoRaGatewayAsync(const DeleteLoRaGatewayRequest& request, const DeleteLoRaGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteLoRaGatewayRequest&;
    using Resp = DeleteLoRaGatewayResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteLoRaGateway", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::DeleteLoRaGatewayOutcomeCallable IotexplorerClient::DeleteLoRaGatewayCallable(const DeleteLoRaGatewayRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteLoRaGatewayOutcome>>();
    DeleteLoRaGatewayAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const DeleteLoRaGatewayRequest&,
        DeleteLoRaGatewayOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::DeleteOtaModuleOutcome IotexplorerClient::DeleteOtaModule(const DeleteOtaModuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteOtaModule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteOtaModuleResponse rsp = DeleteOtaModuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteOtaModuleOutcome(rsp);
        else
            return DeleteOtaModuleOutcome(o.GetError());
    }
    else
    {
        return DeleteOtaModuleOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DeleteOtaModuleAsync(const DeleteOtaModuleRequest& request, const DeleteOtaModuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteOtaModuleRequest&;
    using Resp = DeleteOtaModuleResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteOtaModule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::DeleteOtaModuleOutcomeCallable IotexplorerClient::DeleteOtaModuleCallable(const DeleteOtaModuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteOtaModuleOutcome>>();
    DeleteOtaModuleAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const DeleteOtaModuleRequest&,
        DeleteOtaModuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::DeletePositionFenceOutcome IotexplorerClient::DeletePositionFence(const DeletePositionFenceRequest &request)
{
    auto outcome = MakeRequest(request, "DeletePositionFence");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeletePositionFenceResponse rsp = DeletePositionFenceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeletePositionFenceOutcome(rsp);
        else
            return DeletePositionFenceOutcome(o.GetError());
    }
    else
    {
        return DeletePositionFenceOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DeletePositionFenceAsync(const DeletePositionFenceRequest& request, const DeletePositionFenceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeletePositionFenceRequest&;
    using Resp = DeletePositionFenceResponse;

    DoRequestAsync<Req, Resp>(
        "DeletePositionFence", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::DeletePositionFenceOutcomeCallable IotexplorerClient::DeletePositionFenceCallable(const DeletePositionFenceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeletePositionFenceOutcome>>();
    DeletePositionFenceAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const DeletePositionFenceRequest&,
        DeletePositionFenceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::DeletePositionSpaceOutcome IotexplorerClient::DeletePositionSpace(const DeletePositionSpaceRequest &request)
{
    auto outcome = MakeRequest(request, "DeletePositionSpace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeletePositionSpaceResponse rsp = DeletePositionSpaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeletePositionSpaceOutcome(rsp);
        else
            return DeletePositionSpaceOutcome(o.GetError());
    }
    else
    {
        return DeletePositionSpaceOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DeletePositionSpaceAsync(const DeletePositionSpaceRequest& request, const DeletePositionSpaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeletePositionSpaceRequest&;
    using Resp = DeletePositionSpaceResponse;

    DoRequestAsync<Req, Resp>(
        "DeletePositionSpace", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::DeletePositionSpaceOutcomeCallable IotexplorerClient::DeletePositionSpaceCallable(const DeletePositionSpaceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeletePositionSpaceOutcome>>();
    DeletePositionSpaceAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const DeletePositionSpaceRequest&,
        DeletePositionSpaceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::DeleteProjectOutcome IotexplorerClient::DeleteProject(const DeleteProjectRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteProjectResponse rsp = DeleteProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteProjectOutcome(rsp);
        else
            return DeleteProjectOutcome(o.GetError());
    }
    else
    {
        return DeleteProjectOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DeleteProjectAsync(const DeleteProjectRequest& request, const DeleteProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteProjectRequest&;
    using Resp = DeleteProjectResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteProject", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::DeleteProjectOutcomeCallable IotexplorerClient::DeleteProjectCallable(const DeleteProjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteProjectOutcome>>();
    DeleteProjectAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const DeleteProjectRequest&,
        DeleteProjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::DeleteStudioProductOutcome IotexplorerClient::DeleteStudioProduct(const DeleteStudioProductRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteStudioProduct");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteStudioProductResponse rsp = DeleteStudioProductResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteStudioProductOutcome(rsp);
        else
            return DeleteStudioProductOutcome(o.GetError());
    }
    else
    {
        return DeleteStudioProductOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DeleteStudioProductAsync(const DeleteStudioProductRequest& request, const DeleteStudioProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteStudioProductRequest&;
    using Resp = DeleteStudioProductResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteStudioProduct", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::DeleteStudioProductOutcomeCallable IotexplorerClient::DeleteStudioProductCallable(const DeleteStudioProductRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteStudioProductOutcome>>();
    DeleteStudioProductAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const DeleteStudioProductRequest&,
        DeleteStudioProductOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::DeleteTWeTalkAIBotOutcome IotexplorerClient::DeleteTWeTalkAIBot(const DeleteTWeTalkAIBotRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTWeTalkAIBot");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTWeTalkAIBotResponse rsp = DeleteTWeTalkAIBotResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTWeTalkAIBotOutcome(rsp);
        else
            return DeleteTWeTalkAIBotOutcome(o.GetError());
    }
    else
    {
        return DeleteTWeTalkAIBotOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DeleteTWeTalkAIBotAsync(const DeleteTWeTalkAIBotRequest& request, const DeleteTWeTalkAIBotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteTWeTalkAIBotRequest&;
    using Resp = DeleteTWeTalkAIBotResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteTWeTalkAIBot", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::DeleteTWeTalkAIBotOutcomeCallable IotexplorerClient::DeleteTWeTalkAIBotCallable(const DeleteTWeTalkAIBotRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteTWeTalkAIBotOutcome>>();
    DeleteTWeTalkAIBotAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const DeleteTWeTalkAIBotRequest&,
        DeleteTWeTalkAIBotOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::DeleteTWeTalkProductConfigV2Outcome IotexplorerClient::DeleteTWeTalkProductConfigV2(const DeleteTWeTalkProductConfigV2Request &request)
{
    auto outcome = MakeRequest(request, "DeleteTWeTalkProductConfigV2");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTWeTalkProductConfigV2Response rsp = DeleteTWeTalkProductConfigV2Response();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTWeTalkProductConfigV2Outcome(rsp);
        else
            return DeleteTWeTalkProductConfigV2Outcome(o.GetError());
    }
    else
    {
        return DeleteTWeTalkProductConfigV2Outcome(outcome.GetError());
    }
}

void IotexplorerClient::DeleteTWeTalkProductConfigV2Async(const DeleteTWeTalkProductConfigV2Request& request, const DeleteTWeTalkProductConfigV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteTWeTalkProductConfigV2Request&;
    using Resp = DeleteTWeTalkProductConfigV2Response;

    DoRequestAsync<Req, Resp>(
        "DeleteTWeTalkProductConfigV2", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::DeleteTWeTalkProductConfigV2OutcomeCallable IotexplorerClient::DeleteTWeTalkProductConfigV2Callable(const DeleteTWeTalkProductConfigV2Request &request)
{
    const auto prom = std::make_shared<std::promise<DeleteTWeTalkProductConfigV2Outcome>>();
    DeleteTWeTalkProductConfigV2Async(
    request,
    [prom](
        const IotexplorerClient*,
        const DeleteTWeTalkProductConfigV2Request&,
        DeleteTWeTalkProductConfigV2Outcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::DeleteTopicPolicyOutcome IotexplorerClient::DeleteTopicPolicy(const DeleteTopicPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTopicPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTopicPolicyResponse rsp = DeleteTopicPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTopicPolicyOutcome(rsp);
        else
            return DeleteTopicPolicyOutcome(o.GetError());
    }
    else
    {
        return DeleteTopicPolicyOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DeleteTopicPolicyAsync(const DeleteTopicPolicyRequest& request, const DeleteTopicPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteTopicPolicyRequest&;
    using Resp = DeleteTopicPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteTopicPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::DeleteTopicPolicyOutcomeCallable IotexplorerClient::DeleteTopicPolicyCallable(const DeleteTopicPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteTopicPolicyOutcome>>();
    DeleteTopicPolicyAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const DeleteTopicPolicyRequest&,
        DeleteTopicPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::DeleteTopicRuleOutcome IotexplorerClient::DeleteTopicRule(const DeleteTopicRuleRequest &request)
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

void IotexplorerClient::DeleteTopicRuleAsync(const DeleteTopicRuleRequest& request, const DeleteTopicRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteTopicRuleRequest&;
    using Resp = DeleteTopicRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteTopicRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::DeleteTopicRuleOutcomeCallable IotexplorerClient::DeleteTopicRuleCallable(const DeleteTopicRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteTopicRuleOutcome>>();
    DeleteTopicRuleAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const DeleteTopicRuleRequest&,
        DeleteTopicRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::DescribeAISearchTaskAsyncOutcome IotexplorerClient::DescribeAISearchTaskAsync(const DescribeAISearchTaskAsyncRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAISearchTaskAsync");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAISearchTaskAsyncResponse rsp = DescribeAISearchTaskAsyncResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAISearchTaskAsyncOutcome(rsp);
        else
            return DescribeAISearchTaskAsyncOutcome(o.GetError());
    }
    else
    {
        return DescribeAISearchTaskAsyncOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DescribeAISearchTaskAsyncAsync(const DescribeAISearchTaskAsyncRequest& request, const DescribeAISearchTaskAsyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAISearchTaskAsyncRequest&;
    using Resp = DescribeAISearchTaskAsyncResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAISearchTaskAsync", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::DescribeAISearchTaskAsyncOutcomeCallable IotexplorerClient::DescribeAISearchTaskAsyncCallable(const DescribeAISearchTaskAsyncRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAISearchTaskAsyncOutcome>>();
    DescribeAISearchTaskAsyncAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const DescribeAISearchTaskAsyncRequest&,
        DescribeAISearchTaskAsyncOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::DescribeActivateDeviceOutcome IotexplorerClient::DescribeActivateDevice(const DescribeActivateDeviceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeActivateDevice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeActivateDeviceResponse rsp = DescribeActivateDeviceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeActivateDeviceOutcome(rsp);
        else
            return DescribeActivateDeviceOutcome(o.GetError());
    }
    else
    {
        return DescribeActivateDeviceOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DescribeActivateDeviceAsync(const DescribeActivateDeviceRequest& request, const DescribeActivateDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeActivateDeviceRequest&;
    using Resp = DescribeActivateDeviceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeActivateDevice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::DescribeActivateDeviceOutcomeCallable IotexplorerClient::DescribeActivateDeviceCallable(const DescribeActivateDeviceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeActivateDeviceOutcome>>();
    DescribeActivateDeviceAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const DescribeActivateDeviceRequest&,
        DescribeActivateDeviceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::DescribeActivateLicenseServiceOutcome IotexplorerClient::DescribeActivateLicenseService(const DescribeActivateLicenseServiceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeActivateLicenseService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeActivateLicenseServiceResponse rsp = DescribeActivateLicenseServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeActivateLicenseServiceOutcome(rsp);
        else
            return DescribeActivateLicenseServiceOutcome(o.GetError());
    }
    else
    {
        return DescribeActivateLicenseServiceOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DescribeActivateLicenseServiceAsync(const DescribeActivateLicenseServiceRequest& request, const DescribeActivateLicenseServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeActivateLicenseServiceRequest&;
    using Resp = DescribeActivateLicenseServiceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeActivateLicenseService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::DescribeActivateLicenseServiceOutcomeCallable IotexplorerClient::DescribeActivateLicenseServiceCallable(const DescribeActivateLicenseServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeActivateLicenseServiceOutcome>>();
    DescribeActivateLicenseServiceAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const DescribeActivateLicenseServiceRequest&,
        DescribeActivateLicenseServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::DescribeBatchProductionOutcome IotexplorerClient::DescribeBatchProduction(const DescribeBatchProductionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBatchProduction");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBatchProductionResponse rsp = DescribeBatchProductionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBatchProductionOutcome(rsp);
        else
            return DescribeBatchProductionOutcome(o.GetError());
    }
    else
    {
        return DescribeBatchProductionOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DescribeBatchProductionAsync(const DescribeBatchProductionRequest& request, const DescribeBatchProductionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBatchProductionRequest&;
    using Resp = DescribeBatchProductionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBatchProduction", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::DescribeBatchProductionOutcomeCallable IotexplorerClient::DescribeBatchProductionCallable(const DescribeBatchProductionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBatchProductionOutcome>>();
    DescribeBatchProductionAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const DescribeBatchProductionRequest&,
        DescribeBatchProductionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::DescribeBindedProductsOutcome IotexplorerClient::DescribeBindedProducts(const DescribeBindedProductsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBindedProducts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBindedProductsResponse rsp = DescribeBindedProductsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBindedProductsOutcome(rsp);
        else
            return DescribeBindedProductsOutcome(o.GetError());
    }
    else
    {
        return DescribeBindedProductsOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DescribeBindedProductsAsync(const DescribeBindedProductsRequest& request, const DescribeBindedProductsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBindedProductsRequest&;
    using Resp = DescribeBindedProductsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBindedProducts", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::DescribeBindedProductsOutcomeCallable IotexplorerClient::DescribeBindedProductsCallable(const DescribeBindedProductsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBindedProductsOutcome>>();
    DescribeBindedProductsAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const DescribeBindedProductsRequest&,
        DescribeBindedProductsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::DescribeCloudStorageOutcome IotexplorerClient::DescribeCloudStorage(const DescribeCloudStorageRequest &request)
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

void IotexplorerClient::DescribeCloudStorageAsync(const DescribeCloudStorageRequest& request, const DescribeCloudStorageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

IotexplorerClient::DescribeCloudStorageOutcomeCallable IotexplorerClient::DescribeCloudStorageCallable(const DescribeCloudStorageRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudStorageOutcome>>();
    DescribeCloudStorageAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const DescribeCloudStorageRequest&,
        DescribeCloudStorageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::DescribeCloudStorageAIServiceOutcome IotexplorerClient::DescribeCloudStorageAIService(const DescribeCloudStorageAIServiceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudStorageAIService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudStorageAIServiceResponse rsp = DescribeCloudStorageAIServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudStorageAIServiceOutcome(rsp);
        else
            return DescribeCloudStorageAIServiceOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudStorageAIServiceOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DescribeCloudStorageAIServiceAsync(const DescribeCloudStorageAIServiceRequest& request, const DescribeCloudStorageAIServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudStorageAIServiceRequest&;
    using Resp = DescribeCloudStorageAIServiceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudStorageAIService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::DescribeCloudStorageAIServiceOutcomeCallable IotexplorerClient::DescribeCloudStorageAIServiceCallable(const DescribeCloudStorageAIServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudStorageAIServiceOutcome>>();
    DescribeCloudStorageAIServiceAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const DescribeCloudStorageAIServiceRequest&,
        DescribeCloudStorageAIServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::DescribeCloudStorageAIServiceCallbackOutcome IotexplorerClient::DescribeCloudStorageAIServiceCallback(const DescribeCloudStorageAIServiceCallbackRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudStorageAIServiceCallback");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudStorageAIServiceCallbackResponse rsp = DescribeCloudStorageAIServiceCallbackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudStorageAIServiceCallbackOutcome(rsp);
        else
            return DescribeCloudStorageAIServiceCallbackOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudStorageAIServiceCallbackOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DescribeCloudStorageAIServiceCallbackAsync(const DescribeCloudStorageAIServiceCallbackRequest& request, const DescribeCloudStorageAIServiceCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudStorageAIServiceCallbackRequest&;
    using Resp = DescribeCloudStorageAIServiceCallbackResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudStorageAIServiceCallback", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::DescribeCloudStorageAIServiceCallbackOutcomeCallable IotexplorerClient::DescribeCloudStorageAIServiceCallbackCallable(const DescribeCloudStorageAIServiceCallbackRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudStorageAIServiceCallbackOutcome>>();
    DescribeCloudStorageAIServiceCallbackAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const DescribeCloudStorageAIServiceCallbackRequest&,
        DescribeCloudStorageAIServiceCallbackOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::DescribeCloudStorageAIServiceTaskOutcome IotexplorerClient::DescribeCloudStorageAIServiceTask(const DescribeCloudStorageAIServiceTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudStorageAIServiceTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudStorageAIServiceTaskResponse rsp = DescribeCloudStorageAIServiceTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudStorageAIServiceTaskOutcome(rsp);
        else
            return DescribeCloudStorageAIServiceTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudStorageAIServiceTaskOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DescribeCloudStorageAIServiceTaskAsync(const DescribeCloudStorageAIServiceTaskRequest& request, const DescribeCloudStorageAIServiceTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudStorageAIServiceTaskRequest&;
    using Resp = DescribeCloudStorageAIServiceTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudStorageAIServiceTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::DescribeCloudStorageAIServiceTaskOutcomeCallable IotexplorerClient::DescribeCloudStorageAIServiceTaskCallable(const DescribeCloudStorageAIServiceTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudStorageAIServiceTaskOutcome>>();
    DescribeCloudStorageAIServiceTaskAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const DescribeCloudStorageAIServiceTaskRequest&,
        DescribeCloudStorageAIServiceTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::DescribeCloudStorageAIServiceTasksOutcome IotexplorerClient::DescribeCloudStorageAIServiceTasks(const DescribeCloudStorageAIServiceTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudStorageAIServiceTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudStorageAIServiceTasksResponse rsp = DescribeCloudStorageAIServiceTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudStorageAIServiceTasksOutcome(rsp);
        else
            return DescribeCloudStorageAIServiceTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudStorageAIServiceTasksOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DescribeCloudStorageAIServiceTasksAsync(const DescribeCloudStorageAIServiceTasksRequest& request, const DescribeCloudStorageAIServiceTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudStorageAIServiceTasksRequest&;
    using Resp = DescribeCloudStorageAIServiceTasksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudStorageAIServiceTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::DescribeCloudStorageAIServiceTasksOutcomeCallable IotexplorerClient::DescribeCloudStorageAIServiceTasksCallable(const DescribeCloudStorageAIServiceTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudStorageAIServiceTasksOutcome>>();
    DescribeCloudStorageAIServiceTasksAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const DescribeCloudStorageAIServiceTasksRequest&,
        DescribeCloudStorageAIServiceTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::DescribeCloudStorageDateOutcome IotexplorerClient::DescribeCloudStorageDate(const DescribeCloudStorageDateRequest &request)
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

void IotexplorerClient::DescribeCloudStorageDateAsync(const DescribeCloudStorageDateRequest& request, const DescribeCloudStorageDateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

IotexplorerClient::DescribeCloudStorageDateOutcomeCallable IotexplorerClient::DescribeCloudStorageDateCallable(const DescribeCloudStorageDateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudStorageDateOutcome>>();
    DescribeCloudStorageDateAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const DescribeCloudStorageDateRequest&,
        DescribeCloudStorageDateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::DescribeCloudStorageEventsOutcome IotexplorerClient::DescribeCloudStorageEvents(const DescribeCloudStorageEventsRequest &request)
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

void IotexplorerClient::DescribeCloudStorageEventsAsync(const DescribeCloudStorageEventsRequest& request, const DescribeCloudStorageEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

IotexplorerClient::DescribeCloudStorageEventsOutcomeCallable IotexplorerClient::DescribeCloudStorageEventsCallable(const DescribeCloudStorageEventsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudStorageEventsOutcome>>();
    DescribeCloudStorageEventsAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const DescribeCloudStorageEventsRequest&,
        DescribeCloudStorageEventsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::DescribeCloudStorageEventsWithAITasksOutcome IotexplorerClient::DescribeCloudStorageEventsWithAITasks(const DescribeCloudStorageEventsWithAITasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudStorageEventsWithAITasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudStorageEventsWithAITasksResponse rsp = DescribeCloudStorageEventsWithAITasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudStorageEventsWithAITasksOutcome(rsp);
        else
            return DescribeCloudStorageEventsWithAITasksOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudStorageEventsWithAITasksOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DescribeCloudStorageEventsWithAITasksAsync(const DescribeCloudStorageEventsWithAITasksRequest& request, const DescribeCloudStorageEventsWithAITasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudStorageEventsWithAITasksRequest&;
    using Resp = DescribeCloudStorageEventsWithAITasksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudStorageEventsWithAITasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::DescribeCloudStorageEventsWithAITasksOutcomeCallable IotexplorerClient::DescribeCloudStorageEventsWithAITasksCallable(const DescribeCloudStorageEventsWithAITasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudStorageEventsWithAITasksOutcome>>();
    DescribeCloudStorageEventsWithAITasksAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const DescribeCloudStorageEventsWithAITasksRequest&,
        DescribeCloudStorageEventsWithAITasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::DescribeCloudStorageMultiThumbnailOutcome IotexplorerClient::DescribeCloudStorageMultiThumbnail(const DescribeCloudStorageMultiThumbnailRequest &request)
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

void IotexplorerClient::DescribeCloudStorageMultiThumbnailAsync(const DescribeCloudStorageMultiThumbnailRequest& request, const DescribeCloudStorageMultiThumbnailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

IotexplorerClient::DescribeCloudStorageMultiThumbnailOutcomeCallable IotexplorerClient::DescribeCloudStorageMultiThumbnailCallable(const DescribeCloudStorageMultiThumbnailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudStorageMultiThumbnailOutcome>>();
    DescribeCloudStorageMultiThumbnailAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const DescribeCloudStorageMultiThumbnailRequest&,
        DescribeCloudStorageMultiThumbnailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::DescribeCloudStorageOrderOutcome IotexplorerClient::DescribeCloudStorageOrder(const DescribeCloudStorageOrderRequest &request)
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

void IotexplorerClient::DescribeCloudStorageOrderAsync(const DescribeCloudStorageOrderRequest& request, const DescribeCloudStorageOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

IotexplorerClient::DescribeCloudStorageOrderOutcomeCallable IotexplorerClient::DescribeCloudStorageOrderCallable(const DescribeCloudStorageOrderRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudStorageOrderOutcome>>();
    DescribeCloudStorageOrderAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const DescribeCloudStorageOrderRequest&,
        DescribeCloudStorageOrderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::DescribeCloudStoragePackageConsumeDetailsOutcome IotexplorerClient::DescribeCloudStoragePackageConsumeDetails(const DescribeCloudStoragePackageConsumeDetailsRequest &request)
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

void IotexplorerClient::DescribeCloudStoragePackageConsumeDetailsAsync(const DescribeCloudStoragePackageConsumeDetailsRequest& request, const DescribeCloudStoragePackageConsumeDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

IotexplorerClient::DescribeCloudStoragePackageConsumeDetailsOutcomeCallable IotexplorerClient::DescribeCloudStoragePackageConsumeDetailsCallable(const DescribeCloudStoragePackageConsumeDetailsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudStoragePackageConsumeDetailsOutcome>>();
    DescribeCloudStoragePackageConsumeDetailsAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const DescribeCloudStoragePackageConsumeDetailsRequest&,
        DescribeCloudStoragePackageConsumeDetailsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::DescribeCloudStoragePackageConsumeStatsOutcome IotexplorerClient::DescribeCloudStoragePackageConsumeStats(const DescribeCloudStoragePackageConsumeStatsRequest &request)
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

void IotexplorerClient::DescribeCloudStoragePackageConsumeStatsAsync(const DescribeCloudStoragePackageConsumeStatsRequest& request, const DescribeCloudStoragePackageConsumeStatsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

IotexplorerClient::DescribeCloudStoragePackageConsumeStatsOutcomeCallable IotexplorerClient::DescribeCloudStoragePackageConsumeStatsCallable(const DescribeCloudStoragePackageConsumeStatsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudStoragePackageConsumeStatsOutcome>>();
    DescribeCloudStoragePackageConsumeStatsAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const DescribeCloudStoragePackageConsumeStatsRequest&,
        DescribeCloudStoragePackageConsumeStatsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::DescribeCloudStorageStreamDataOutcome IotexplorerClient::DescribeCloudStorageStreamData(const DescribeCloudStorageStreamDataRequest &request)
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

void IotexplorerClient::DescribeCloudStorageStreamDataAsync(const DescribeCloudStorageStreamDataRequest& request, const DescribeCloudStorageStreamDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

IotexplorerClient::DescribeCloudStorageStreamDataOutcomeCallable IotexplorerClient::DescribeCloudStorageStreamDataCallable(const DescribeCloudStorageStreamDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudStorageStreamDataOutcome>>();
    DescribeCloudStorageStreamDataAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const DescribeCloudStorageStreamDataRequest&,
        DescribeCloudStorageStreamDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::DescribeCloudStorageThumbnailOutcome IotexplorerClient::DescribeCloudStorageThumbnail(const DescribeCloudStorageThumbnailRequest &request)
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

void IotexplorerClient::DescribeCloudStorageThumbnailAsync(const DescribeCloudStorageThumbnailRequest& request, const DescribeCloudStorageThumbnailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

IotexplorerClient::DescribeCloudStorageThumbnailOutcomeCallable IotexplorerClient::DescribeCloudStorageThumbnailCallable(const DescribeCloudStorageThumbnailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudStorageThumbnailOutcome>>();
    DescribeCloudStorageThumbnailAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const DescribeCloudStorageThumbnailRequest&,
        DescribeCloudStorageThumbnailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::DescribeCloudStorageThumbnailListOutcome IotexplorerClient::DescribeCloudStorageThumbnailList(const DescribeCloudStorageThumbnailListRequest &request)
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

void IotexplorerClient::DescribeCloudStorageThumbnailListAsync(const DescribeCloudStorageThumbnailListRequest& request, const DescribeCloudStorageThumbnailListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

IotexplorerClient::DescribeCloudStorageThumbnailListOutcomeCallable IotexplorerClient::DescribeCloudStorageThumbnailListCallable(const DescribeCloudStorageThumbnailListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudStorageThumbnailListOutcome>>();
    DescribeCloudStorageThumbnailListAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const DescribeCloudStorageThumbnailListRequest&,
        DescribeCloudStorageThumbnailListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::DescribeCloudStorageTimeOutcome IotexplorerClient::DescribeCloudStorageTime(const DescribeCloudStorageTimeRequest &request)
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

void IotexplorerClient::DescribeCloudStorageTimeAsync(const DescribeCloudStorageTimeRequest& request, const DescribeCloudStorageTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

IotexplorerClient::DescribeCloudStorageTimeOutcomeCallable IotexplorerClient::DescribeCloudStorageTimeCallable(const DescribeCloudStorageTimeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudStorageTimeOutcome>>();
    DescribeCloudStorageTimeAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const DescribeCloudStorageTimeRequest&,
        DescribeCloudStorageTimeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::DescribeCloudStorageUsersOutcome IotexplorerClient::DescribeCloudStorageUsers(const DescribeCloudStorageUsersRequest &request)
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

void IotexplorerClient::DescribeCloudStorageUsersAsync(const DescribeCloudStorageUsersRequest& request, const DescribeCloudStorageUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

IotexplorerClient::DescribeCloudStorageUsersOutcomeCallable IotexplorerClient::DescribeCloudStorageUsersCallable(const DescribeCloudStorageUsersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudStorageUsersOutcome>>();
    DescribeCloudStorageUsersAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const DescribeCloudStorageUsersRequest&,
        DescribeCloudStorageUsersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::DescribeCsReportCountDataInfoOutcome IotexplorerClient::DescribeCsReportCountDataInfo(const DescribeCsReportCountDataInfoRequest &request)
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

void IotexplorerClient::DescribeCsReportCountDataInfoAsync(const DescribeCsReportCountDataInfoRequest& request, const DescribeCsReportCountDataInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

IotexplorerClient::DescribeCsReportCountDataInfoOutcomeCallable IotexplorerClient::DescribeCsReportCountDataInfoCallable(const DescribeCsReportCountDataInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCsReportCountDataInfoOutcome>>();
    DescribeCsReportCountDataInfoAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const DescribeCsReportCountDataInfoRequest&,
        DescribeCsReportCountDataInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::DescribeDeviceOutcome IotexplorerClient::DescribeDevice(const DescribeDeviceRequest &request)
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

void IotexplorerClient::DescribeDeviceAsync(const DescribeDeviceRequest& request, const DescribeDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

IotexplorerClient::DescribeDeviceOutcomeCallable IotexplorerClient::DescribeDeviceCallable(const DescribeDeviceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDeviceOutcome>>();
    DescribeDeviceAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const DescribeDeviceRequest&,
        DescribeDeviceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::DescribeDeviceBindGatewayOutcome IotexplorerClient::DescribeDeviceBindGateway(const DescribeDeviceBindGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeviceBindGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceBindGatewayResponse rsp = DescribeDeviceBindGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceBindGatewayOutcome(rsp);
        else
            return DescribeDeviceBindGatewayOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceBindGatewayOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DescribeDeviceBindGatewayAsync(const DescribeDeviceBindGatewayRequest& request, const DescribeDeviceBindGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDeviceBindGatewayRequest&;
    using Resp = DescribeDeviceBindGatewayResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDeviceBindGateway", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::DescribeDeviceBindGatewayOutcomeCallable IotexplorerClient::DescribeDeviceBindGatewayCallable(const DescribeDeviceBindGatewayRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDeviceBindGatewayOutcome>>();
    DescribeDeviceBindGatewayAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const DescribeDeviceBindGatewayRequest&,
        DescribeDeviceBindGatewayOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::DescribeDeviceDataOutcome IotexplorerClient::DescribeDeviceData(const DescribeDeviceDataRequest &request)
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

void IotexplorerClient::DescribeDeviceDataAsync(const DescribeDeviceDataRequest& request, const DescribeDeviceDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

IotexplorerClient::DescribeDeviceDataOutcomeCallable IotexplorerClient::DescribeDeviceDataCallable(const DescribeDeviceDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDeviceDataOutcome>>();
    DescribeDeviceDataAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const DescribeDeviceDataRequest&,
        DescribeDeviceDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::DescribeDeviceDataHistoryOutcome IotexplorerClient::DescribeDeviceDataHistory(const DescribeDeviceDataHistoryRequest &request)
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

void IotexplorerClient::DescribeDeviceDataHistoryAsync(const DescribeDeviceDataHistoryRequest& request, const DescribeDeviceDataHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

IotexplorerClient::DescribeDeviceDataHistoryOutcomeCallable IotexplorerClient::DescribeDeviceDataHistoryCallable(const DescribeDeviceDataHistoryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDeviceDataHistoryOutcome>>();
    DescribeDeviceDataHistoryAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const DescribeDeviceDataHistoryRequest&,
        DescribeDeviceDataHistoryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::DescribeDeviceFirmWareOutcome IotexplorerClient::DescribeDeviceFirmWare(const DescribeDeviceFirmWareRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeviceFirmWare");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceFirmWareResponse rsp = DescribeDeviceFirmWareResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceFirmWareOutcome(rsp);
        else
            return DescribeDeviceFirmWareOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceFirmWareOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DescribeDeviceFirmWareAsync(const DescribeDeviceFirmWareRequest& request, const DescribeDeviceFirmWareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDeviceFirmWareRequest&;
    using Resp = DescribeDeviceFirmWareResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDeviceFirmWare", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::DescribeDeviceFirmWareOutcomeCallable IotexplorerClient::DescribeDeviceFirmWareCallable(const DescribeDeviceFirmWareRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDeviceFirmWareOutcome>>();
    DescribeDeviceFirmWareAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const DescribeDeviceFirmWareRequest&,
        DescribeDeviceFirmWareOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::DescribeDeviceFirmwaresOutcome IotexplorerClient::DescribeDeviceFirmwares(const DescribeDeviceFirmwaresRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeviceFirmwares");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceFirmwaresResponse rsp = DescribeDeviceFirmwaresResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceFirmwaresOutcome(rsp);
        else
            return DescribeDeviceFirmwaresOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceFirmwaresOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DescribeDeviceFirmwaresAsync(const DescribeDeviceFirmwaresRequest& request, const DescribeDeviceFirmwaresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDeviceFirmwaresRequest&;
    using Resp = DescribeDeviceFirmwaresResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDeviceFirmwares", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::DescribeDeviceFirmwaresOutcomeCallable IotexplorerClient::DescribeDeviceFirmwaresCallable(const DescribeDeviceFirmwaresRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDeviceFirmwaresOutcome>>();
    DescribeDeviceFirmwaresAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const DescribeDeviceFirmwaresRequest&,
        DescribeDeviceFirmwaresOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::DescribeDevicePackagesOutcome IotexplorerClient::DescribeDevicePackages(const DescribeDevicePackagesRequest &request)
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

void IotexplorerClient::DescribeDevicePackagesAsync(const DescribeDevicePackagesRequest& request, const DescribeDevicePackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

IotexplorerClient::DescribeDevicePackagesOutcomeCallable IotexplorerClient::DescribeDevicePackagesCallable(const DescribeDevicePackagesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDevicePackagesOutcome>>();
    DescribeDevicePackagesAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const DescribeDevicePackagesRequest&,
        DescribeDevicePackagesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::DescribeDevicePositionListOutcome IotexplorerClient::DescribeDevicePositionList(const DescribeDevicePositionListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDevicePositionList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDevicePositionListResponse rsp = DescribeDevicePositionListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDevicePositionListOutcome(rsp);
        else
            return DescribeDevicePositionListOutcome(o.GetError());
    }
    else
    {
        return DescribeDevicePositionListOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DescribeDevicePositionListAsync(const DescribeDevicePositionListRequest& request, const DescribeDevicePositionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDevicePositionListRequest&;
    using Resp = DescribeDevicePositionListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDevicePositionList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::DescribeDevicePositionListOutcomeCallable IotexplorerClient::DescribeDevicePositionListCallable(const DescribeDevicePositionListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDevicePositionListOutcome>>();
    DescribeDevicePositionListAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const DescribeDevicePositionListRequest&,
        DescribeDevicePositionListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::DescribeFenceBindListOutcome IotexplorerClient::DescribeFenceBindList(const DescribeFenceBindListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFenceBindList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFenceBindListResponse rsp = DescribeFenceBindListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFenceBindListOutcome(rsp);
        else
            return DescribeFenceBindListOutcome(o.GetError());
    }
    else
    {
        return DescribeFenceBindListOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DescribeFenceBindListAsync(const DescribeFenceBindListRequest& request, const DescribeFenceBindListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFenceBindListRequest&;
    using Resp = DescribeFenceBindListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFenceBindList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::DescribeFenceBindListOutcomeCallable IotexplorerClient::DescribeFenceBindListCallable(const DescribeFenceBindListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFenceBindListOutcome>>();
    DescribeFenceBindListAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const DescribeFenceBindListRequest&,
        DescribeFenceBindListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::DescribeFenceEventListOutcome IotexplorerClient::DescribeFenceEventList(const DescribeFenceEventListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFenceEventList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFenceEventListResponse rsp = DescribeFenceEventListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFenceEventListOutcome(rsp);
        else
            return DescribeFenceEventListOutcome(o.GetError());
    }
    else
    {
        return DescribeFenceEventListOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DescribeFenceEventListAsync(const DescribeFenceEventListRequest& request, const DescribeFenceEventListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFenceEventListRequest&;
    using Resp = DescribeFenceEventListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFenceEventList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::DescribeFenceEventListOutcomeCallable IotexplorerClient::DescribeFenceEventListCallable(const DescribeFenceEventListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFenceEventListOutcome>>();
    DescribeFenceEventListAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const DescribeFenceEventListRequest&,
        DescribeFenceEventListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::DescribeFirmwareOutcome IotexplorerClient::DescribeFirmware(const DescribeFirmwareRequest &request)
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

void IotexplorerClient::DescribeFirmwareAsync(const DescribeFirmwareRequest& request, const DescribeFirmwareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

IotexplorerClient::DescribeFirmwareOutcomeCallable IotexplorerClient::DescribeFirmwareCallable(const DescribeFirmwareRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFirmwareOutcome>>();
    DescribeFirmwareAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const DescribeFirmwareRequest&,
        DescribeFirmwareOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::DescribeFirmwareTaskOutcome IotexplorerClient::DescribeFirmwareTask(const DescribeFirmwareTaskRequest &request)
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

void IotexplorerClient::DescribeFirmwareTaskAsync(const DescribeFirmwareTaskRequest& request, const DescribeFirmwareTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

IotexplorerClient::DescribeFirmwareTaskOutcomeCallable IotexplorerClient::DescribeFirmwareTaskCallable(const DescribeFirmwareTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFirmwareTaskOutcome>>();
    DescribeFirmwareTaskAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const DescribeFirmwareTaskRequest&,
        DescribeFirmwareTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::DescribeFirmwareTaskDevicesOutcome IotexplorerClient::DescribeFirmwareTaskDevices(const DescribeFirmwareTaskDevicesRequest &request)
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

void IotexplorerClient::DescribeFirmwareTaskDevicesAsync(const DescribeFirmwareTaskDevicesRequest& request, const DescribeFirmwareTaskDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

IotexplorerClient::DescribeFirmwareTaskDevicesOutcomeCallable IotexplorerClient::DescribeFirmwareTaskDevicesCallable(const DescribeFirmwareTaskDevicesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFirmwareTaskDevicesOutcome>>();
    DescribeFirmwareTaskDevicesAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const DescribeFirmwareTaskDevicesRequest&,
        DescribeFirmwareTaskDevicesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::DescribeFirmwareTasksOutcome IotexplorerClient::DescribeFirmwareTasks(const DescribeFirmwareTasksRequest &request)
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

void IotexplorerClient::DescribeFirmwareTasksAsync(const DescribeFirmwareTasksRequest& request, const DescribeFirmwareTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

IotexplorerClient::DescribeFirmwareTasksOutcomeCallable IotexplorerClient::DescribeFirmwareTasksCallable(const DescribeFirmwareTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFirmwareTasksOutcome>>();
    DescribeFirmwareTasksAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const DescribeFirmwareTasksRequest&,
        DescribeFirmwareTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::DescribeFirmwareUpdateStatusOutcome IotexplorerClient::DescribeFirmwareUpdateStatus(const DescribeFirmwareUpdateStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFirmwareUpdateStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFirmwareUpdateStatusResponse rsp = DescribeFirmwareUpdateStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFirmwareUpdateStatusOutcome(rsp);
        else
            return DescribeFirmwareUpdateStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeFirmwareUpdateStatusOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DescribeFirmwareUpdateStatusAsync(const DescribeFirmwareUpdateStatusRequest& request, const DescribeFirmwareUpdateStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFirmwareUpdateStatusRequest&;
    using Resp = DescribeFirmwareUpdateStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFirmwareUpdateStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::DescribeFirmwareUpdateStatusOutcomeCallable IotexplorerClient::DescribeFirmwareUpdateStatusCallable(const DescribeFirmwareUpdateStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFirmwareUpdateStatusOutcome>>();
    DescribeFirmwareUpdateStatusAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const DescribeFirmwareUpdateStatusRequest&,
        DescribeFirmwareUpdateStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::DescribeFreeCloudStorageNumOutcome IotexplorerClient::DescribeFreeCloudStorageNum(const DescribeFreeCloudStorageNumRequest &request)
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

void IotexplorerClient::DescribeFreeCloudStorageNumAsync(const DescribeFreeCloudStorageNumRequest& request, const DescribeFreeCloudStorageNumAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

IotexplorerClient::DescribeFreeCloudStorageNumOutcomeCallable IotexplorerClient::DescribeFreeCloudStorageNumCallable(const DescribeFreeCloudStorageNumRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFreeCloudStorageNumOutcome>>();
    DescribeFreeCloudStorageNumAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const DescribeFreeCloudStorageNumRequest&,
        DescribeFreeCloudStorageNumOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::DescribeGatewayBindDevicesOutcome IotexplorerClient::DescribeGatewayBindDevices(const DescribeGatewayBindDevicesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGatewayBindDevices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGatewayBindDevicesResponse rsp = DescribeGatewayBindDevicesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGatewayBindDevicesOutcome(rsp);
        else
            return DescribeGatewayBindDevicesOutcome(o.GetError());
    }
    else
    {
        return DescribeGatewayBindDevicesOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DescribeGatewayBindDevicesAsync(const DescribeGatewayBindDevicesRequest& request, const DescribeGatewayBindDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeGatewayBindDevicesRequest&;
    using Resp = DescribeGatewayBindDevicesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGatewayBindDevices", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::DescribeGatewayBindDevicesOutcomeCallable IotexplorerClient::DescribeGatewayBindDevicesCallable(const DescribeGatewayBindDevicesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGatewayBindDevicesOutcome>>();
    DescribeGatewayBindDevicesAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const DescribeGatewayBindDevicesRequest&,
        DescribeGatewayBindDevicesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::DescribeGatewaySubDeviceListOutcome IotexplorerClient::DescribeGatewaySubDeviceList(const DescribeGatewaySubDeviceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGatewaySubDeviceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGatewaySubDeviceListResponse rsp = DescribeGatewaySubDeviceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGatewaySubDeviceListOutcome(rsp);
        else
            return DescribeGatewaySubDeviceListOutcome(o.GetError());
    }
    else
    {
        return DescribeGatewaySubDeviceListOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DescribeGatewaySubDeviceListAsync(const DescribeGatewaySubDeviceListRequest& request, const DescribeGatewaySubDeviceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeGatewaySubDeviceListRequest&;
    using Resp = DescribeGatewaySubDeviceListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGatewaySubDeviceList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::DescribeGatewaySubDeviceListOutcomeCallable IotexplorerClient::DescribeGatewaySubDeviceListCallable(const DescribeGatewaySubDeviceListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGatewaySubDeviceListOutcome>>();
    DescribeGatewaySubDeviceListAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const DescribeGatewaySubDeviceListRequest&,
        DescribeGatewaySubDeviceListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::DescribeGatewaySubProductsOutcome IotexplorerClient::DescribeGatewaySubProducts(const DescribeGatewaySubProductsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGatewaySubProducts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGatewaySubProductsResponse rsp = DescribeGatewaySubProductsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGatewaySubProductsOutcome(rsp);
        else
            return DescribeGatewaySubProductsOutcome(o.GetError());
    }
    else
    {
        return DescribeGatewaySubProductsOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DescribeGatewaySubProductsAsync(const DescribeGatewaySubProductsRequest& request, const DescribeGatewaySubProductsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeGatewaySubProductsRequest&;
    using Resp = DescribeGatewaySubProductsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGatewaySubProducts", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::DescribeGatewaySubProductsOutcomeCallable IotexplorerClient::DescribeGatewaySubProductsCallable(const DescribeGatewaySubProductsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGatewaySubProductsOutcome>>();
    DescribeGatewaySubProductsAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const DescribeGatewaySubProductsRequest&,
        DescribeGatewaySubProductsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::DescribeInstanceOutcome IotexplorerClient::DescribeInstance(const DescribeInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceResponse rsp = DescribeInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceOutcome(rsp);
        else
            return DescribeInstanceOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DescribeInstanceAsync(const DescribeInstanceRequest& request, const DescribeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceRequest&;
    using Resp = DescribeInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::DescribeInstanceOutcomeCallable IotexplorerClient::DescribeInstanceCallable(const DescribeInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceOutcome>>();
    DescribeInstanceAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const DescribeInstanceRequest&,
        DescribeInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::DescribeLoRaFrequencyOutcome IotexplorerClient::DescribeLoRaFrequency(const DescribeLoRaFrequencyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLoRaFrequency");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLoRaFrequencyResponse rsp = DescribeLoRaFrequencyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLoRaFrequencyOutcome(rsp);
        else
            return DescribeLoRaFrequencyOutcome(o.GetError());
    }
    else
    {
        return DescribeLoRaFrequencyOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DescribeLoRaFrequencyAsync(const DescribeLoRaFrequencyRequest& request, const DescribeLoRaFrequencyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLoRaFrequencyRequest&;
    using Resp = DescribeLoRaFrequencyResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLoRaFrequency", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::DescribeLoRaFrequencyOutcomeCallable IotexplorerClient::DescribeLoRaFrequencyCallable(const DescribeLoRaFrequencyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLoRaFrequencyOutcome>>();
    DescribeLoRaFrequencyAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const DescribeLoRaFrequencyRequest&,
        DescribeLoRaFrequencyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::DescribeModelDefinitionOutcome IotexplorerClient::DescribeModelDefinition(const DescribeModelDefinitionRequest &request)
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

void IotexplorerClient::DescribeModelDefinitionAsync(const DescribeModelDefinitionRequest& request, const DescribeModelDefinitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

IotexplorerClient::DescribeModelDefinitionOutcomeCallable IotexplorerClient::DescribeModelDefinitionCallable(const DescribeModelDefinitionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeModelDefinitionOutcome>>();
    DescribeModelDefinitionAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const DescribeModelDefinitionRequest&,
        DescribeModelDefinitionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::DescribeP2PRouteOutcome IotexplorerClient::DescribeP2PRoute(const DescribeP2PRouteRequest &request)
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

void IotexplorerClient::DescribeP2PRouteAsync(const DescribeP2PRouteRequest& request, const DescribeP2PRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

IotexplorerClient::DescribeP2PRouteOutcomeCallable IotexplorerClient::DescribeP2PRouteCallable(const DescribeP2PRouteRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeP2PRouteOutcome>>();
    DescribeP2PRouteAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const DescribeP2PRouteRequest&,
        DescribeP2PRouteOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::DescribePackageConsumeTaskOutcome IotexplorerClient::DescribePackageConsumeTask(const DescribePackageConsumeTaskRequest &request)
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

void IotexplorerClient::DescribePackageConsumeTaskAsync(const DescribePackageConsumeTaskRequest& request, const DescribePackageConsumeTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

IotexplorerClient::DescribePackageConsumeTaskOutcomeCallable IotexplorerClient::DescribePackageConsumeTaskCallable(const DescribePackageConsumeTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePackageConsumeTaskOutcome>>();
    DescribePackageConsumeTaskAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const DescribePackageConsumeTaskRequest&,
        DescribePackageConsumeTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::DescribePackageConsumeTasksOutcome IotexplorerClient::DescribePackageConsumeTasks(const DescribePackageConsumeTasksRequest &request)
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

void IotexplorerClient::DescribePackageConsumeTasksAsync(const DescribePackageConsumeTasksRequest& request, const DescribePackageConsumeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

IotexplorerClient::DescribePackageConsumeTasksOutcomeCallable IotexplorerClient::DescribePackageConsumeTasksCallable(const DescribePackageConsumeTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePackageConsumeTasksOutcome>>();
    DescribePackageConsumeTasksAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const DescribePackageConsumeTasksRequest&,
        DescribePackageConsumeTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::DescribePositionFenceListOutcome IotexplorerClient::DescribePositionFenceList(const DescribePositionFenceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePositionFenceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePositionFenceListResponse rsp = DescribePositionFenceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePositionFenceListOutcome(rsp);
        else
            return DescribePositionFenceListOutcome(o.GetError());
    }
    else
    {
        return DescribePositionFenceListOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DescribePositionFenceListAsync(const DescribePositionFenceListRequest& request, const DescribePositionFenceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePositionFenceListRequest&;
    using Resp = DescribePositionFenceListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePositionFenceList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::DescribePositionFenceListOutcomeCallable IotexplorerClient::DescribePositionFenceListCallable(const DescribePositionFenceListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePositionFenceListOutcome>>();
    DescribePositionFenceListAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const DescribePositionFenceListRequest&,
        DescribePositionFenceListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::DescribeProductCloudStorageAIServiceOutcome IotexplorerClient::DescribeProductCloudStorageAIService(const DescribeProductCloudStorageAIServiceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProductCloudStorageAIService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProductCloudStorageAIServiceResponse rsp = DescribeProductCloudStorageAIServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProductCloudStorageAIServiceOutcome(rsp);
        else
            return DescribeProductCloudStorageAIServiceOutcome(o.GetError());
    }
    else
    {
        return DescribeProductCloudStorageAIServiceOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DescribeProductCloudStorageAIServiceAsync(const DescribeProductCloudStorageAIServiceRequest& request, const DescribeProductCloudStorageAIServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeProductCloudStorageAIServiceRequest&;
    using Resp = DescribeProductCloudStorageAIServiceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProductCloudStorageAIService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::DescribeProductCloudStorageAIServiceOutcomeCallable IotexplorerClient::DescribeProductCloudStorageAIServiceCallable(const DescribeProductCloudStorageAIServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProductCloudStorageAIServiceOutcome>>();
    DescribeProductCloudStorageAIServiceAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const DescribeProductCloudStorageAIServiceRequest&,
        DescribeProductCloudStorageAIServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::DescribeProjectOutcome IotexplorerClient::DescribeProject(const DescribeProjectRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProjectResponse rsp = DescribeProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProjectOutcome(rsp);
        else
            return DescribeProjectOutcome(o.GetError());
    }
    else
    {
        return DescribeProjectOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DescribeProjectAsync(const DescribeProjectRequest& request, const DescribeProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeProjectRequest&;
    using Resp = DescribeProjectResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProject", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::DescribeProjectOutcomeCallable IotexplorerClient::DescribeProjectCallable(const DescribeProjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProjectOutcome>>();
    DescribeProjectAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const DescribeProjectRequest&,
        DescribeProjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::DescribeSpaceFenceEventListOutcome IotexplorerClient::DescribeSpaceFenceEventList(const DescribeSpaceFenceEventListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSpaceFenceEventList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSpaceFenceEventListResponse rsp = DescribeSpaceFenceEventListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSpaceFenceEventListOutcome(rsp);
        else
            return DescribeSpaceFenceEventListOutcome(o.GetError());
    }
    else
    {
        return DescribeSpaceFenceEventListOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DescribeSpaceFenceEventListAsync(const DescribeSpaceFenceEventListRequest& request, const DescribeSpaceFenceEventListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSpaceFenceEventListRequest&;
    using Resp = DescribeSpaceFenceEventListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSpaceFenceEventList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::DescribeSpaceFenceEventListOutcomeCallable IotexplorerClient::DescribeSpaceFenceEventListCallable(const DescribeSpaceFenceEventListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSpaceFenceEventListOutcome>>();
    DescribeSpaceFenceEventListAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const DescribeSpaceFenceEventListRequest&,
        DescribeSpaceFenceEventListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::DescribeStudioProductOutcome IotexplorerClient::DescribeStudioProduct(const DescribeStudioProductRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStudioProduct");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStudioProductResponse rsp = DescribeStudioProductResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStudioProductOutcome(rsp);
        else
            return DescribeStudioProductOutcome(o.GetError());
    }
    else
    {
        return DescribeStudioProductOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DescribeStudioProductAsync(const DescribeStudioProductRequest& request, const DescribeStudioProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeStudioProductRequest&;
    using Resp = DescribeStudioProductResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStudioProduct", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::DescribeStudioProductOutcomeCallable IotexplorerClient::DescribeStudioProductCallable(const DescribeStudioProductRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStudioProductOutcome>>();
    DescribeStudioProductAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const DescribeStudioProductRequest&,
        DescribeStudioProductOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::DescribeSubscribedTopicPolicyOutcome IotexplorerClient::DescribeSubscribedTopicPolicy(const DescribeSubscribedTopicPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSubscribedTopicPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSubscribedTopicPolicyResponse rsp = DescribeSubscribedTopicPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSubscribedTopicPolicyOutcome(rsp);
        else
            return DescribeSubscribedTopicPolicyOutcome(o.GetError());
    }
    else
    {
        return DescribeSubscribedTopicPolicyOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DescribeSubscribedTopicPolicyAsync(const DescribeSubscribedTopicPolicyRequest& request, const DescribeSubscribedTopicPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSubscribedTopicPolicyRequest&;
    using Resp = DescribeSubscribedTopicPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSubscribedTopicPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::DescribeSubscribedTopicPolicyOutcomeCallable IotexplorerClient::DescribeSubscribedTopicPolicyCallable(const DescribeSubscribedTopicPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSubscribedTopicPolicyOutcome>>();
    DescribeSubscribedTopicPolicyAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const DescribeSubscribedTopicPolicyRequest&,
        DescribeSubscribedTopicPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::DescribeTWeSeeConfigOutcome IotexplorerClient::DescribeTWeSeeConfig(const DescribeTWeSeeConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTWeSeeConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTWeSeeConfigResponse rsp = DescribeTWeSeeConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTWeSeeConfigOutcome(rsp);
        else
            return DescribeTWeSeeConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeTWeSeeConfigOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DescribeTWeSeeConfigAsync(const DescribeTWeSeeConfigRequest& request, const DescribeTWeSeeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTWeSeeConfigRequest&;
    using Resp = DescribeTWeSeeConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTWeSeeConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::DescribeTWeSeeConfigOutcomeCallable IotexplorerClient::DescribeTWeSeeConfigCallable(const DescribeTWeSeeConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTWeSeeConfigOutcome>>();
    DescribeTWeSeeConfigAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const DescribeTWeSeeConfigRequest&,
        DescribeTWeSeeConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::DescribeTWeSeeRecognitionTaskOutcome IotexplorerClient::DescribeTWeSeeRecognitionTask(const DescribeTWeSeeRecognitionTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTWeSeeRecognitionTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTWeSeeRecognitionTaskResponse rsp = DescribeTWeSeeRecognitionTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTWeSeeRecognitionTaskOutcome(rsp);
        else
            return DescribeTWeSeeRecognitionTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeTWeSeeRecognitionTaskOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DescribeTWeSeeRecognitionTaskAsync(const DescribeTWeSeeRecognitionTaskRequest& request, const DescribeTWeSeeRecognitionTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTWeSeeRecognitionTaskRequest&;
    using Resp = DescribeTWeSeeRecognitionTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTWeSeeRecognitionTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::DescribeTWeSeeRecognitionTaskOutcomeCallable IotexplorerClient::DescribeTWeSeeRecognitionTaskCallable(const DescribeTWeSeeRecognitionTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTWeSeeRecognitionTaskOutcome>>();
    DescribeTWeSeeRecognitionTaskAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const DescribeTWeSeeRecognitionTaskRequest&,
        DescribeTWeSeeRecognitionTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::DescribeTWeTalkAIBotOutcome IotexplorerClient::DescribeTWeTalkAIBot(const DescribeTWeTalkAIBotRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTWeTalkAIBot");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTWeTalkAIBotResponse rsp = DescribeTWeTalkAIBotResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTWeTalkAIBotOutcome(rsp);
        else
            return DescribeTWeTalkAIBotOutcome(o.GetError());
    }
    else
    {
        return DescribeTWeTalkAIBotOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DescribeTWeTalkAIBotAsync(const DescribeTWeTalkAIBotRequest& request, const DescribeTWeTalkAIBotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTWeTalkAIBotRequest&;
    using Resp = DescribeTWeTalkAIBotResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTWeTalkAIBot", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::DescribeTWeTalkAIBotOutcomeCallable IotexplorerClient::DescribeTWeTalkAIBotCallable(const DescribeTWeTalkAIBotRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTWeTalkAIBotOutcome>>();
    DescribeTWeTalkAIBotAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const DescribeTWeTalkAIBotRequest&,
        DescribeTWeTalkAIBotOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::DescribeTWeTalkProductConfigOutcome IotexplorerClient::DescribeTWeTalkProductConfig(const DescribeTWeTalkProductConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTWeTalkProductConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTWeTalkProductConfigResponse rsp = DescribeTWeTalkProductConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTWeTalkProductConfigOutcome(rsp);
        else
            return DescribeTWeTalkProductConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeTWeTalkProductConfigOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DescribeTWeTalkProductConfigAsync(const DescribeTWeTalkProductConfigRequest& request, const DescribeTWeTalkProductConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTWeTalkProductConfigRequest&;
    using Resp = DescribeTWeTalkProductConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTWeTalkProductConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::DescribeTWeTalkProductConfigOutcomeCallable IotexplorerClient::DescribeTWeTalkProductConfigCallable(const DescribeTWeTalkProductConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTWeTalkProductConfigOutcome>>();
    DescribeTWeTalkProductConfigAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const DescribeTWeTalkProductConfigRequest&,
        DescribeTWeTalkProductConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::DescribeTWeTalkProductConfigV2Outcome IotexplorerClient::DescribeTWeTalkProductConfigV2(const DescribeTWeTalkProductConfigV2Request &request)
{
    auto outcome = MakeRequest(request, "DescribeTWeTalkProductConfigV2");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTWeTalkProductConfigV2Response rsp = DescribeTWeTalkProductConfigV2Response();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTWeTalkProductConfigV2Outcome(rsp);
        else
            return DescribeTWeTalkProductConfigV2Outcome(o.GetError());
    }
    else
    {
        return DescribeTWeTalkProductConfigV2Outcome(outcome.GetError());
    }
}

void IotexplorerClient::DescribeTWeTalkProductConfigV2Async(const DescribeTWeTalkProductConfigV2Request& request, const DescribeTWeTalkProductConfigV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTWeTalkProductConfigV2Request&;
    using Resp = DescribeTWeTalkProductConfigV2Response;

    DoRequestAsync<Req, Resp>(
        "DescribeTWeTalkProductConfigV2", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::DescribeTWeTalkProductConfigV2OutcomeCallable IotexplorerClient::DescribeTWeTalkProductConfigV2Callable(const DescribeTWeTalkProductConfigV2Request &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTWeTalkProductConfigV2Outcome>>();
    DescribeTWeTalkProductConfigV2Async(
    request,
    [prom](
        const IotexplorerClient*,
        const DescribeTWeTalkProductConfigV2Request&,
        DescribeTWeTalkProductConfigV2Outcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::DescribeTopicPolicyOutcome IotexplorerClient::DescribeTopicPolicy(const DescribeTopicPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTopicPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTopicPolicyResponse rsp = DescribeTopicPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTopicPolicyOutcome(rsp);
        else
            return DescribeTopicPolicyOutcome(o.GetError());
    }
    else
    {
        return DescribeTopicPolicyOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DescribeTopicPolicyAsync(const DescribeTopicPolicyRequest& request, const DescribeTopicPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTopicPolicyRequest&;
    using Resp = DescribeTopicPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTopicPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::DescribeTopicPolicyOutcomeCallable IotexplorerClient::DescribeTopicPolicyCallable(const DescribeTopicPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTopicPolicyOutcome>>();
    DescribeTopicPolicyAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const DescribeTopicPolicyRequest&,
        DescribeTopicPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::DescribeTopicRuleOutcome IotexplorerClient::DescribeTopicRule(const DescribeTopicRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTopicRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTopicRuleResponse rsp = DescribeTopicRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTopicRuleOutcome(rsp);
        else
            return DescribeTopicRuleOutcome(o.GetError());
    }
    else
    {
        return DescribeTopicRuleOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DescribeTopicRuleAsync(const DescribeTopicRuleRequest& request, const DescribeTopicRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTopicRuleRequest&;
    using Resp = DescribeTopicRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTopicRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::DescribeTopicRuleOutcomeCallable IotexplorerClient::DescribeTopicRuleCallable(const DescribeTopicRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTopicRuleOutcome>>();
    DescribeTopicRuleAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const DescribeTopicRuleRequest&,
        DescribeTopicRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::DescribeUnbindedDevicesOutcome IotexplorerClient::DescribeUnbindedDevices(const DescribeUnbindedDevicesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUnbindedDevices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUnbindedDevicesResponse rsp = DescribeUnbindedDevicesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUnbindedDevicesOutcome(rsp);
        else
            return DescribeUnbindedDevicesOutcome(o.GetError());
    }
    else
    {
        return DescribeUnbindedDevicesOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DescribeUnbindedDevicesAsync(const DescribeUnbindedDevicesRequest& request, const DescribeUnbindedDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUnbindedDevicesRequest&;
    using Resp = DescribeUnbindedDevicesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUnbindedDevices", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::DescribeUnbindedDevicesOutcomeCallable IotexplorerClient::DescribeUnbindedDevicesCallable(const DescribeUnbindedDevicesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUnbindedDevicesOutcome>>();
    DescribeUnbindedDevicesAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const DescribeUnbindedDevicesRequest&,
        DescribeUnbindedDevicesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::DescribeVideoLicenseOutcome IotexplorerClient::DescribeVideoLicense(const DescribeVideoLicenseRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVideoLicense");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVideoLicenseResponse rsp = DescribeVideoLicenseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVideoLicenseOutcome(rsp);
        else
            return DescribeVideoLicenseOutcome(o.GetError());
    }
    else
    {
        return DescribeVideoLicenseOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DescribeVideoLicenseAsync(const DescribeVideoLicenseRequest& request, const DescribeVideoLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVideoLicenseRequest&;
    using Resp = DescribeVideoLicenseResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVideoLicense", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::DescribeVideoLicenseOutcomeCallable IotexplorerClient::DescribeVideoLicenseCallable(const DescribeVideoLicenseRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVideoLicenseOutcome>>();
    DescribeVideoLicenseAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const DescribeVideoLicenseRequest&,
        DescribeVideoLicenseOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::DirectBindDeviceInFamilyOutcome IotexplorerClient::DirectBindDeviceInFamily(const DirectBindDeviceInFamilyRequest &request)
{
    auto outcome = MakeRequest(request, "DirectBindDeviceInFamily");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DirectBindDeviceInFamilyResponse rsp = DirectBindDeviceInFamilyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DirectBindDeviceInFamilyOutcome(rsp);
        else
            return DirectBindDeviceInFamilyOutcome(o.GetError());
    }
    else
    {
        return DirectBindDeviceInFamilyOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DirectBindDeviceInFamilyAsync(const DirectBindDeviceInFamilyRequest& request, const DirectBindDeviceInFamilyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DirectBindDeviceInFamilyRequest&;
    using Resp = DirectBindDeviceInFamilyResponse;

    DoRequestAsync<Req, Resp>(
        "DirectBindDeviceInFamily", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::DirectBindDeviceInFamilyOutcomeCallable IotexplorerClient::DirectBindDeviceInFamilyCallable(const DirectBindDeviceInFamilyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DirectBindDeviceInFamilyOutcome>>();
    DirectBindDeviceInFamilyAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const DirectBindDeviceInFamilyRequest&,
        DirectBindDeviceInFamilyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::DisableTopicRuleOutcome IotexplorerClient::DisableTopicRule(const DisableTopicRuleRequest &request)
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

void IotexplorerClient::DisableTopicRuleAsync(const DisableTopicRuleRequest& request, const DisableTopicRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DisableTopicRuleRequest&;
    using Resp = DisableTopicRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DisableTopicRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::DisableTopicRuleOutcomeCallable IotexplorerClient::DisableTopicRuleCallable(const DisableTopicRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisableTopicRuleOutcome>>();
    DisableTopicRuleAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const DisableTopicRuleRequest&,
        DisableTopicRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::DismissRoomByStrRoomIdFromTRTCOutcome IotexplorerClient::DismissRoomByStrRoomIdFromTRTC(const DismissRoomByStrRoomIdFromTRTCRequest &request)
{
    auto outcome = MakeRequest(request, "DismissRoomByStrRoomIdFromTRTC");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DismissRoomByStrRoomIdFromTRTCResponse rsp = DismissRoomByStrRoomIdFromTRTCResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DismissRoomByStrRoomIdFromTRTCOutcome(rsp);
        else
            return DismissRoomByStrRoomIdFromTRTCOutcome(o.GetError());
    }
    else
    {
        return DismissRoomByStrRoomIdFromTRTCOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DismissRoomByStrRoomIdFromTRTCAsync(const DismissRoomByStrRoomIdFromTRTCRequest& request, const DismissRoomByStrRoomIdFromTRTCAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DismissRoomByStrRoomIdFromTRTCRequest&;
    using Resp = DismissRoomByStrRoomIdFromTRTCResponse;

    DoRequestAsync<Req, Resp>(
        "DismissRoomByStrRoomIdFromTRTC", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::DismissRoomByStrRoomIdFromTRTCOutcomeCallable IotexplorerClient::DismissRoomByStrRoomIdFromTRTCCallable(const DismissRoomByStrRoomIdFromTRTCRequest &request)
{
    const auto prom = std::make_shared<std::promise<DismissRoomByStrRoomIdFromTRTCOutcome>>();
    DismissRoomByStrRoomIdFromTRTCAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const DismissRoomByStrRoomIdFromTRTCRequest&,
        DismissRoomByStrRoomIdFromTRTCOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::EnableTopicRuleOutcome IotexplorerClient::EnableTopicRule(const EnableTopicRuleRequest &request)
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

void IotexplorerClient::EnableTopicRuleAsync(const EnableTopicRuleRequest& request, const EnableTopicRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const EnableTopicRuleRequest&;
    using Resp = EnableTopicRuleResponse;

    DoRequestAsync<Req, Resp>(
        "EnableTopicRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::EnableTopicRuleOutcomeCallable IotexplorerClient::EnableTopicRuleCallable(const EnableTopicRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<EnableTopicRuleOutcome>>();
    EnableTopicRuleAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const EnableTopicRuleRequest&,
        EnableTopicRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::GenSingleDeviceSignatureOfPublicOutcome IotexplorerClient::GenSingleDeviceSignatureOfPublic(const GenSingleDeviceSignatureOfPublicRequest &request)
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

void IotexplorerClient::GenSingleDeviceSignatureOfPublicAsync(const GenSingleDeviceSignatureOfPublicRequest& request, const GenSingleDeviceSignatureOfPublicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

IotexplorerClient::GenSingleDeviceSignatureOfPublicOutcomeCallable IotexplorerClient::GenSingleDeviceSignatureOfPublicCallable(const GenSingleDeviceSignatureOfPublicRequest &request)
{
    const auto prom = std::make_shared<std::promise<GenSingleDeviceSignatureOfPublicOutcome>>();
    GenSingleDeviceSignatureOfPublicAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const GenSingleDeviceSignatureOfPublicRequest&,
        GenSingleDeviceSignatureOfPublicOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::GenerateCloudStorageAIServiceTaskFileURLOutcome IotexplorerClient::GenerateCloudStorageAIServiceTaskFileURL(const GenerateCloudStorageAIServiceTaskFileURLRequest &request)
{
    auto outcome = MakeRequest(request, "GenerateCloudStorageAIServiceTaskFileURL");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GenerateCloudStorageAIServiceTaskFileURLResponse rsp = GenerateCloudStorageAIServiceTaskFileURLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GenerateCloudStorageAIServiceTaskFileURLOutcome(rsp);
        else
            return GenerateCloudStorageAIServiceTaskFileURLOutcome(o.GetError());
    }
    else
    {
        return GenerateCloudStorageAIServiceTaskFileURLOutcome(outcome.GetError());
    }
}

void IotexplorerClient::GenerateCloudStorageAIServiceTaskFileURLAsync(const GenerateCloudStorageAIServiceTaskFileURLRequest& request, const GenerateCloudStorageAIServiceTaskFileURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GenerateCloudStorageAIServiceTaskFileURLRequest&;
    using Resp = GenerateCloudStorageAIServiceTaskFileURLResponse;

    DoRequestAsync<Req, Resp>(
        "GenerateCloudStorageAIServiceTaskFileURL", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::GenerateCloudStorageAIServiceTaskFileURLOutcomeCallable IotexplorerClient::GenerateCloudStorageAIServiceTaskFileURLCallable(const GenerateCloudStorageAIServiceTaskFileURLRequest &request)
{
    const auto prom = std::make_shared<std::promise<GenerateCloudStorageAIServiceTaskFileURLOutcome>>();
    GenerateCloudStorageAIServiceTaskFileURLAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const GenerateCloudStorageAIServiceTaskFileURLRequest&,
        GenerateCloudStorageAIServiceTaskFileURLOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::GenerateSignedVideoURLOutcome IotexplorerClient::GenerateSignedVideoURL(const GenerateSignedVideoURLRequest &request)
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

void IotexplorerClient::GenerateSignedVideoURLAsync(const GenerateSignedVideoURLRequest& request, const GenerateSignedVideoURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

IotexplorerClient::GenerateSignedVideoURLOutcomeCallable IotexplorerClient::GenerateSignedVideoURLCallable(const GenerateSignedVideoURLRequest &request)
{
    const auto prom = std::make_shared<std::promise<GenerateSignedVideoURLOutcome>>();
    GenerateSignedVideoURLAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const GenerateSignedVideoURLRequest&,
        GenerateSignedVideoURLOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::GetAuthMiniProgramAppListOutcome IotexplorerClient::GetAuthMiniProgramAppList(const GetAuthMiniProgramAppListRequest &request)
{
    auto outcome = MakeRequest(request, "GetAuthMiniProgramAppList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetAuthMiniProgramAppListResponse rsp = GetAuthMiniProgramAppListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetAuthMiniProgramAppListOutcome(rsp);
        else
            return GetAuthMiniProgramAppListOutcome(o.GetError());
    }
    else
    {
        return GetAuthMiniProgramAppListOutcome(outcome.GetError());
    }
}

void IotexplorerClient::GetAuthMiniProgramAppListAsync(const GetAuthMiniProgramAppListRequest& request, const GetAuthMiniProgramAppListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetAuthMiniProgramAppListRequest&;
    using Resp = GetAuthMiniProgramAppListResponse;

    DoRequestAsync<Req, Resp>(
        "GetAuthMiniProgramAppList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::GetAuthMiniProgramAppListOutcomeCallable IotexplorerClient::GetAuthMiniProgramAppListCallable(const GetAuthMiniProgramAppListRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetAuthMiniProgramAppListOutcome>>();
    GetAuthMiniProgramAppListAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const GetAuthMiniProgramAppListRequest&,
        GetAuthMiniProgramAppListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::GetBatchProductionsListOutcome IotexplorerClient::GetBatchProductionsList(const GetBatchProductionsListRequest &request)
{
    auto outcome = MakeRequest(request, "GetBatchProductionsList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetBatchProductionsListResponse rsp = GetBatchProductionsListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetBatchProductionsListOutcome(rsp);
        else
            return GetBatchProductionsListOutcome(o.GetError());
    }
    else
    {
        return GetBatchProductionsListOutcome(outcome.GetError());
    }
}

void IotexplorerClient::GetBatchProductionsListAsync(const GetBatchProductionsListRequest& request, const GetBatchProductionsListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetBatchProductionsListRequest&;
    using Resp = GetBatchProductionsListResponse;

    DoRequestAsync<Req, Resp>(
        "GetBatchProductionsList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::GetBatchProductionsListOutcomeCallable IotexplorerClient::GetBatchProductionsListCallable(const GetBatchProductionsListRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetBatchProductionsListOutcome>>();
    GetBatchProductionsListAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const GetBatchProductionsListRequest&,
        GetBatchProductionsListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::GetCOSURLOutcome IotexplorerClient::GetCOSURL(const GetCOSURLRequest &request)
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

void IotexplorerClient::GetCOSURLAsync(const GetCOSURLRequest& request, const GetCOSURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetCOSURLRequest&;
    using Resp = GetCOSURLResponse;

    DoRequestAsync<Req, Resp>(
        "GetCOSURL", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::GetCOSURLOutcomeCallable IotexplorerClient::GetCOSURLCallable(const GetCOSURLRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetCOSURLOutcome>>();
    GetCOSURLAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const GetCOSURLRequest&,
        GetCOSURLOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::GetDeviceListOutcome IotexplorerClient::GetDeviceList(const GetDeviceListRequest &request)
{
    auto outcome = MakeRequest(request, "GetDeviceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetDeviceListResponse rsp = GetDeviceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetDeviceListOutcome(rsp);
        else
            return GetDeviceListOutcome(o.GetError());
    }
    else
    {
        return GetDeviceListOutcome(outcome.GetError());
    }
}

void IotexplorerClient::GetDeviceListAsync(const GetDeviceListRequest& request, const GetDeviceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetDeviceListRequest&;
    using Resp = GetDeviceListResponse;

    DoRequestAsync<Req, Resp>(
        "GetDeviceList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::GetDeviceListOutcomeCallable IotexplorerClient::GetDeviceListCallable(const GetDeviceListRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetDeviceListOutcome>>();
    GetDeviceListAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const GetDeviceListRequest&,
        GetDeviceListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::GetDeviceLocationHistoryOutcome IotexplorerClient::GetDeviceLocationHistory(const GetDeviceLocationHistoryRequest &request)
{
    auto outcome = MakeRequest(request, "GetDeviceLocationHistory");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetDeviceLocationHistoryResponse rsp = GetDeviceLocationHistoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetDeviceLocationHistoryOutcome(rsp);
        else
            return GetDeviceLocationHistoryOutcome(o.GetError());
    }
    else
    {
        return GetDeviceLocationHistoryOutcome(outcome.GetError());
    }
}

void IotexplorerClient::GetDeviceLocationHistoryAsync(const GetDeviceLocationHistoryRequest& request, const GetDeviceLocationHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetDeviceLocationHistoryRequest&;
    using Resp = GetDeviceLocationHistoryResponse;

    DoRequestAsync<Req, Resp>(
        "GetDeviceLocationHistory", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::GetDeviceLocationHistoryOutcomeCallable IotexplorerClient::GetDeviceLocationHistoryCallable(const GetDeviceLocationHistoryRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetDeviceLocationHistoryOutcome>>();
    GetDeviceLocationHistoryAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const GetDeviceLocationHistoryRequest&,
        GetDeviceLocationHistoryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::GetDeviceSumStatisticsOutcome IotexplorerClient::GetDeviceSumStatistics(const GetDeviceSumStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "GetDeviceSumStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetDeviceSumStatisticsResponse rsp = GetDeviceSumStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetDeviceSumStatisticsOutcome(rsp);
        else
            return GetDeviceSumStatisticsOutcome(o.GetError());
    }
    else
    {
        return GetDeviceSumStatisticsOutcome(outcome.GetError());
    }
}

void IotexplorerClient::GetDeviceSumStatisticsAsync(const GetDeviceSumStatisticsRequest& request, const GetDeviceSumStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetDeviceSumStatisticsRequest&;
    using Resp = GetDeviceSumStatisticsResponse;

    DoRequestAsync<Req, Resp>(
        "GetDeviceSumStatistics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::GetDeviceSumStatisticsOutcomeCallable IotexplorerClient::GetDeviceSumStatisticsCallable(const GetDeviceSumStatisticsRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetDeviceSumStatisticsOutcome>>();
    GetDeviceSumStatisticsAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const GetDeviceSumStatisticsRequest&,
        GetDeviceSumStatisticsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::GetFamilyDeviceUserListOutcome IotexplorerClient::GetFamilyDeviceUserList(const GetFamilyDeviceUserListRequest &request)
{
    auto outcome = MakeRequest(request, "GetFamilyDeviceUserList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetFamilyDeviceUserListResponse rsp = GetFamilyDeviceUserListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetFamilyDeviceUserListOutcome(rsp);
        else
            return GetFamilyDeviceUserListOutcome(o.GetError());
    }
    else
    {
        return GetFamilyDeviceUserListOutcome(outcome.GetError());
    }
}

void IotexplorerClient::GetFamilyDeviceUserListAsync(const GetFamilyDeviceUserListRequest& request, const GetFamilyDeviceUserListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetFamilyDeviceUserListRequest&;
    using Resp = GetFamilyDeviceUserListResponse;

    DoRequestAsync<Req, Resp>(
        "GetFamilyDeviceUserList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::GetFamilyDeviceUserListOutcomeCallable IotexplorerClient::GetFamilyDeviceUserListCallable(const GetFamilyDeviceUserListRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetFamilyDeviceUserListOutcome>>();
    GetFamilyDeviceUserListAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const GetFamilyDeviceUserListRequest&,
        GetFamilyDeviceUserListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::GetGatewaySubDeviceListOutcome IotexplorerClient::GetGatewaySubDeviceList(const GetGatewaySubDeviceListRequest &request)
{
    auto outcome = MakeRequest(request, "GetGatewaySubDeviceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetGatewaySubDeviceListResponse rsp = GetGatewaySubDeviceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetGatewaySubDeviceListOutcome(rsp);
        else
            return GetGatewaySubDeviceListOutcome(o.GetError());
    }
    else
    {
        return GetGatewaySubDeviceListOutcome(outcome.GetError());
    }
}

void IotexplorerClient::GetGatewaySubDeviceListAsync(const GetGatewaySubDeviceListRequest& request, const GetGatewaySubDeviceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetGatewaySubDeviceListRequest&;
    using Resp = GetGatewaySubDeviceListResponse;

    DoRequestAsync<Req, Resp>(
        "GetGatewaySubDeviceList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::GetGatewaySubDeviceListOutcomeCallable IotexplorerClient::GetGatewaySubDeviceListCallable(const GetGatewaySubDeviceListRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetGatewaySubDeviceListOutcome>>();
    GetGatewaySubDeviceListAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const GetGatewaySubDeviceListRequest&,
        GetGatewaySubDeviceListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::GetLoRaGatewayListOutcome IotexplorerClient::GetLoRaGatewayList(const GetLoRaGatewayListRequest &request)
{
    auto outcome = MakeRequest(request, "GetLoRaGatewayList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetLoRaGatewayListResponse rsp = GetLoRaGatewayListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetLoRaGatewayListOutcome(rsp);
        else
            return GetLoRaGatewayListOutcome(o.GetError());
    }
    else
    {
        return GetLoRaGatewayListOutcome(outcome.GetError());
    }
}

void IotexplorerClient::GetLoRaGatewayListAsync(const GetLoRaGatewayListRequest& request, const GetLoRaGatewayListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetLoRaGatewayListRequest&;
    using Resp = GetLoRaGatewayListResponse;

    DoRequestAsync<Req, Resp>(
        "GetLoRaGatewayList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::GetLoRaGatewayListOutcomeCallable IotexplorerClient::GetLoRaGatewayListCallable(const GetLoRaGatewayListRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetLoRaGatewayListOutcome>>();
    GetLoRaGatewayListAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const GetLoRaGatewayListRequest&,
        GetLoRaGatewayListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::GetPositionSpaceListOutcome IotexplorerClient::GetPositionSpaceList(const GetPositionSpaceListRequest &request)
{
    auto outcome = MakeRequest(request, "GetPositionSpaceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetPositionSpaceListResponse rsp = GetPositionSpaceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetPositionSpaceListOutcome(rsp);
        else
            return GetPositionSpaceListOutcome(o.GetError());
    }
    else
    {
        return GetPositionSpaceListOutcome(outcome.GetError());
    }
}

void IotexplorerClient::GetPositionSpaceListAsync(const GetPositionSpaceListRequest& request, const GetPositionSpaceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetPositionSpaceListRequest&;
    using Resp = GetPositionSpaceListResponse;

    DoRequestAsync<Req, Resp>(
        "GetPositionSpaceList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::GetPositionSpaceListOutcomeCallable IotexplorerClient::GetPositionSpaceListCallable(const GetPositionSpaceListRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetPositionSpaceListOutcome>>();
    GetPositionSpaceListAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const GetPositionSpaceListRequest&,
        GetPositionSpaceListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::GetProjectListOutcome IotexplorerClient::GetProjectList(const GetProjectListRequest &request)
{
    auto outcome = MakeRequest(request, "GetProjectList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetProjectListResponse rsp = GetProjectListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetProjectListOutcome(rsp);
        else
            return GetProjectListOutcome(o.GetError());
    }
    else
    {
        return GetProjectListOutcome(outcome.GetError());
    }
}

void IotexplorerClient::GetProjectListAsync(const GetProjectListRequest& request, const GetProjectListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetProjectListRequest&;
    using Resp = GetProjectListResponse;

    DoRequestAsync<Req, Resp>(
        "GetProjectList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::GetProjectListOutcomeCallable IotexplorerClient::GetProjectListCallable(const GetProjectListRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetProjectListOutcome>>();
    GetProjectListAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const GetProjectListRequest&,
        GetProjectListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::GetStudioProductListOutcome IotexplorerClient::GetStudioProductList(const GetStudioProductListRequest &request)
{
    auto outcome = MakeRequest(request, "GetStudioProductList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetStudioProductListResponse rsp = GetStudioProductListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetStudioProductListOutcome(rsp);
        else
            return GetStudioProductListOutcome(o.GetError());
    }
    else
    {
        return GetStudioProductListOutcome(outcome.GetError());
    }
}

void IotexplorerClient::GetStudioProductListAsync(const GetStudioProductListRequest& request, const GetStudioProductListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetStudioProductListRequest&;
    using Resp = GetStudioProductListResponse;

    DoRequestAsync<Req, Resp>(
        "GetStudioProductList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::GetStudioProductListOutcomeCallable IotexplorerClient::GetStudioProductListCallable(const GetStudioProductListRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetStudioProductListOutcome>>();
    GetStudioProductListAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const GetStudioProductListRequest&,
        GetStudioProductListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::GetTWeCallActiveStatusOutcome IotexplorerClient::GetTWeCallActiveStatus(const GetTWeCallActiveStatusRequest &request)
{
    auto outcome = MakeRequest(request, "GetTWeCallActiveStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetTWeCallActiveStatusResponse rsp = GetTWeCallActiveStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetTWeCallActiveStatusOutcome(rsp);
        else
            return GetTWeCallActiveStatusOutcome(o.GetError());
    }
    else
    {
        return GetTWeCallActiveStatusOutcome(outcome.GetError());
    }
}

void IotexplorerClient::GetTWeCallActiveStatusAsync(const GetTWeCallActiveStatusRequest& request, const GetTWeCallActiveStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetTWeCallActiveStatusRequest&;
    using Resp = GetTWeCallActiveStatusResponse;

    DoRequestAsync<Req, Resp>(
        "GetTWeCallActiveStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::GetTWeCallActiveStatusOutcomeCallable IotexplorerClient::GetTWeCallActiveStatusCallable(const GetTWeCallActiveStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetTWeCallActiveStatusOutcome>>();
    GetTWeCallActiveStatusAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const GetTWeCallActiveStatusRequest&,
        GetTWeCallActiveStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::GetTWeTalkAIBotListOutcome IotexplorerClient::GetTWeTalkAIBotList(const GetTWeTalkAIBotListRequest &request)
{
    auto outcome = MakeRequest(request, "GetTWeTalkAIBotList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetTWeTalkAIBotListResponse rsp = GetTWeTalkAIBotListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetTWeTalkAIBotListOutcome(rsp);
        else
            return GetTWeTalkAIBotListOutcome(o.GetError());
    }
    else
    {
        return GetTWeTalkAIBotListOutcome(outcome.GetError());
    }
}

void IotexplorerClient::GetTWeTalkAIBotListAsync(const GetTWeTalkAIBotListRequest& request, const GetTWeTalkAIBotListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetTWeTalkAIBotListRequest&;
    using Resp = GetTWeTalkAIBotListResponse;

    DoRequestAsync<Req, Resp>(
        "GetTWeTalkAIBotList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::GetTWeTalkAIBotListOutcomeCallable IotexplorerClient::GetTWeTalkAIBotListCallable(const GetTWeTalkAIBotListRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetTWeTalkAIBotListOutcome>>();
    GetTWeTalkAIBotListAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const GetTWeTalkAIBotListRequest&,
        GetTWeTalkAIBotListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::GetTWeTalkProductConfigListOutcome IotexplorerClient::GetTWeTalkProductConfigList(const GetTWeTalkProductConfigListRequest &request)
{
    auto outcome = MakeRequest(request, "GetTWeTalkProductConfigList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetTWeTalkProductConfigListResponse rsp = GetTWeTalkProductConfigListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetTWeTalkProductConfigListOutcome(rsp);
        else
            return GetTWeTalkProductConfigListOutcome(o.GetError());
    }
    else
    {
        return GetTWeTalkProductConfigListOutcome(outcome.GetError());
    }
}

void IotexplorerClient::GetTWeTalkProductConfigListAsync(const GetTWeTalkProductConfigListRequest& request, const GetTWeTalkProductConfigListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetTWeTalkProductConfigListRequest&;
    using Resp = GetTWeTalkProductConfigListResponse;

    DoRequestAsync<Req, Resp>(
        "GetTWeTalkProductConfigList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::GetTWeTalkProductConfigListOutcomeCallable IotexplorerClient::GetTWeTalkProductConfigListCallable(const GetTWeTalkProductConfigListRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetTWeTalkProductConfigListOutcome>>();
    GetTWeTalkProductConfigListAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const GetTWeTalkProductConfigListRequest&,
        GetTWeTalkProductConfigListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::GetTWeTalkProductConfigListV2Outcome IotexplorerClient::GetTWeTalkProductConfigListV2(const GetTWeTalkProductConfigListV2Request &request)
{
    auto outcome = MakeRequest(request, "GetTWeTalkProductConfigListV2");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetTWeTalkProductConfigListV2Response rsp = GetTWeTalkProductConfigListV2Response();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetTWeTalkProductConfigListV2Outcome(rsp);
        else
            return GetTWeTalkProductConfigListV2Outcome(o.GetError());
    }
    else
    {
        return GetTWeTalkProductConfigListV2Outcome(outcome.GetError());
    }
}

void IotexplorerClient::GetTWeTalkProductConfigListV2Async(const GetTWeTalkProductConfigListV2Request& request, const GetTWeTalkProductConfigListV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetTWeTalkProductConfigListV2Request&;
    using Resp = GetTWeTalkProductConfigListV2Response;

    DoRequestAsync<Req, Resp>(
        "GetTWeTalkProductConfigListV2", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::GetTWeTalkProductConfigListV2OutcomeCallable IotexplorerClient::GetTWeTalkProductConfigListV2Callable(const GetTWeTalkProductConfigListV2Request &request)
{
    const auto prom = std::make_shared<std::promise<GetTWeTalkProductConfigListV2Outcome>>();
    GetTWeTalkProductConfigListV2Async(
    request,
    [prom](
        const IotexplorerClient*,
        const GetTWeTalkProductConfigListV2Request&,
        GetTWeTalkProductConfigListV2Outcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::GetTopicRuleListOutcome IotexplorerClient::GetTopicRuleList(const GetTopicRuleListRequest &request)
{
    auto outcome = MakeRequest(request, "GetTopicRuleList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetTopicRuleListResponse rsp = GetTopicRuleListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetTopicRuleListOutcome(rsp);
        else
            return GetTopicRuleListOutcome(o.GetError());
    }
    else
    {
        return GetTopicRuleListOutcome(outcome.GetError());
    }
}

void IotexplorerClient::GetTopicRuleListAsync(const GetTopicRuleListRequest& request, const GetTopicRuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetTopicRuleListRequest&;
    using Resp = GetTopicRuleListResponse;

    DoRequestAsync<Req, Resp>(
        "GetTopicRuleList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::GetTopicRuleListOutcomeCallable IotexplorerClient::GetTopicRuleListCallable(const GetTopicRuleListRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetTopicRuleListOutcome>>();
    GetTopicRuleListAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const GetTopicRuleListRequest&,
        GetTopicRuleListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::GetWechatDeviceTicketOutcome IotexplorerClient::GetWechatDeviceTicket(const GetWechatDeviceTicketRequest &request)
{
    auto outcome = MakeRequest(request, "GetWechatDeviceTicket");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetWechatDeviceTicketResponse rsp = GetWechatDeviceTicketResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetWechatDeviceTicketOutcome(rsp);
        else
            return GetWechatDeviceTicketOutcome(o.GetError());
    }
    else
    {
        return GetWechatDeviceTicketOutcome(outcome.GetError());
    }
}

void IotexplorerClient::GetWechatDeviceTicketAsync(const GetWechatDeviceTicketRequest& request, const GetWechatDeviceTicketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetWechatDeviceTicketRequest&;
    using Resp = GetWechatDeviceTicketResponse;

    DoRequestAsync<Req, Resp>(
        "GetWechatDeviceTicket", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::GetWechatDeviceTicketOutcomeCallable IotexplorerClient::GetWechatDeviceTicketCallable(const GetWechatDeviceTicketRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetWechatDeviceTicketOutcome>>();
    GetWechatDeviceTicketAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const GetWechatDeviceTicketRequest&,
        GetWechatDeviceTicketOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::InheritCloudStorageUserOutcome IotexplorerClient::InheritCloudStorageUser(const InheritCloudStorageUserRequest &request)
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

void IotexplorerClient::InheritCloudStorageUserAsync(const InheritCloudStorageUserRequest& request, const InheritCloudStorageUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

IotexplorerClient::InheritCloudStorageUserOutcomeCallable IotexplorerClient::InheritCloudStorageUserCallable(const InheritCloudStorageUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<InheritCloudStorageUserOutcome>>();
    InheritCloudStorageUserAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const InheritCloudStorageUserRequest&,
        InheritCloudStorageUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::InvokeAISearchServiceOutcome IotexplorerClient::InvokeAISearchService(const InvokeAISearchServiceRequest &request)
{
    auto outcome = MakeRequest(request, "InvokeAISearchService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InvokeAISearchServiceResponse rsp = InvokeAISearchServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InvokeAISearchServiceOutcome(rsp);
        else
            return InvokeAISearchServiceOutcome(o.GetError());
    }
    else
    {
        return InvokeAISearchServiceOutcome(outcome.GetError());
    }
}

void IotexplorerClient::InvokeAISearchServiceAsync(const InvokeAISearchServiceRequest& request, const InvokeAISearchServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const InvokeAISearchServiceRequest&;
    using Resp = InvokeAISearchServiceResponse;

    DoRequestAsync<Req, Resp>(
        "InvokeAISearchService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::InvokeAISearchServiceOutcomeCallable IotexplorerClient::InvokeAISearchServiceCallable(const InvokeAISearchServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<InvokeAISearchServiceOutcome>>();
    InvokeAISearchServiceAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const InvokeAISearchServiceRequest&,
        InvokeAISearchServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::InvokeCloudStorageAIServiceTaskOutcome IotexplorerClient::InvokeCloudStorageAIServiceTask(const InvokeCloudStorageAIServiceTaskRequest &request)
{
    auto outcome = MakeRequest(request, "InvokeCloudStorageAIServiceTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InvokeCloudStorageAIServiceTaskResponse rsp = InvokeCloudStorageAIServiceTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InvokeCloudStorageAIServiceTaskOutcome(rsp);
        else
            return InvokeCloudStorageAIServiceTaskOutcome(o.GetError());
    }
    else
    {
        return InvokeCloudStorageAIServiceTaskOutcome(outcome.GetError());
    }
}

void IotexplorerClient::InvokeCloudStorageAIServiceTaskAsync(const InvokeCloudStorageAIServiceTaskRequest& request, const InvokeCloudStorageAIServiceTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const InvokeCloudStorageAIServiceTaskRequest&;
    using Resp = InvokeCloudStorageAIServiceTaskResponse;

    DoRequestAsync<Req, Resp>(
        "InvokeCloudStorageAIServiceTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::InvokeCloudStorageAIServiceTaskOutcomeCallable IotexplorerClient::InvokeCloudStorageAIServiceTaskCallable(const InvokeCloudStorageAIServiceTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<InvokeCloudStorageAIServiceTaskOutcome>>();
    InvokeCloudStorageAIServiceTaskAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const InvokeCloudStorageAIServiceTaskRequest&,
        InvokeCloudStorageAIServiceTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::InvokeExternalSourceAIServiceTaskOutcome IotexplorerClient::InvokeExternalSourceAIServiceTask(const InvokeExternalSourceAIServiceTaskRequest &request)
{
    auto outcome = MakeRequest(request, "InvokeExternalSourceAIServiceTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InvokeExternalSourceAIServiceTaskResponse rsp = InvokeExternalSourceAIServiceTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InvokeExternalSourceAIServiceTaskOutcome(rsp);
        else
            return InvokeExternalSourceAIServiceTaskOutcome(o.GetError());
    }
    else
    {
        return InvokeExternalSourceAIServiceTaskOutcome(outcome.GetError());
    }
}

void IotexplorerClient::InvokeExternalSourceAIServiceTaskAsync(const InvokeExternalSourceAIServiceTaskRequest& request, const InvokeExternalSourceAIServiceTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const InvokeExternalSourceAIServiceTaskRequest&;
    using Resp = InvokeExternalSourceAIServiceTaskResponse;

    DoRequestAsync<Req, Resp>(
        "InvokeExternalSourceAIServiceTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::InvokeExternalSourceAIServiceTaskOutcomeCallable IotexplorerClient::InvokeExternalSourceAIServiceTaskCallable(const InvokeExternalSourceAIServiceTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<InvokeExternalSourceAIServiceTaskOutcome>>();
    InvokeExternalSourceAIServiceTaskAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const InvokeExternalSourceAIServiceTaskRequest&,
        InvokeExternalSourceAIServiceTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::InvokeTWeSeeRecognitionTaskOutcome IotexplorerClient::InvokeTWeSeeRecognitionTask(const InvokeTWeSeeRecognitionTaskRequest &request)
{
    auto outcome = MakeRequest(request, "InvokeTWeSeeRecognitionTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InvokeTWeSeeRecognitionTaskResponse rsp = InvokeTWeSeeRecognitionTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InvokeTWeSeeRecognitionTaskOutcome(rsp);
        else
            return InvokeTWeSeeRecognitionTaskOutcome(o.GetError());
    }
    else
    {
        return InvokeTWeSeeRecognitionTaskOutcome(outcome.GetError());
    }
}

void IotexplorerClient::InvokeTWeSeeRecognitionTaskAsync(const InvokeTWeSeeRecognitionTaskRequest& request, const InvokeTWeSeeRecognitionTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const InvokeTWeSeeRecognitionTaskRequest&;
    using Resp = InvokeTWeSeeRecognitionTaskResponse;

    DoRequestAsync<Req, Resp>(
        "InvokeTWeSeeRecognitionTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::InvokeTWeSeeRecognitionTaskOutcomeCallable IotexplorerClient::InvokeTWeSeeRecognitionTaskCallable(const InvokeTWeSeeRecognitionTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<InvokeTWeSeeRecognitionTaskOutcome>>();
    InvokeTWeSeeRecognitionTaskAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const InvokeTWeSeeRecognitionTaskRequest&,
        InvokeTWeSeeRecognitionTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::InvokeTWeSeeRecognitionTaskWithFileOutcome IotexplorerClient::InvokeTWeSeeRecognitionTaskWithFile(const InvokeTWeSeeRecognitionTaskWithFileRequest &request)
{
    auto outcome = MakeRequest(request, "InvokeTWeSeeRecognitionTaskWithFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InvokeTWeSeeRecognitionTaskWithFileResponse rsp = InvokeTWeSeeRecognitionTaskWithFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InvokeTWeSeeRecognitionTaskWithFileOutcome(rsp);
        else
            return InvokeTWeSeeRecognitionTaskWithFileOutcome(o.GetError());
    }
    else
    {
        return InvokeTWeSeeRecognitionTaskWithFileOutcome(outcome.GetError());
    }
}

void IotexplorerClient::InvokeTWeSeeRecognitionTaskWithFileAsync(const InvokeTWeSeeRecognitionTaskWithFileRequest& request, const InvokeTWeSeeRecognitionTaskWithFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const InvokeTWeSeeRecognitionTaskWithFileRequest&;
    using Resp = InvokeTWeSeeRecognitionTaskWithFileResponse;

    DoRequestAsync<Req, Resp>(
        "InvokeTWeSeeRecognitionTaskWithFile", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::InvokeTWeSeeRecognitionTaskWithFileOutcomeCallable IotexplorerClient::InvokeTWeSeeRecognitionTaskWithFileCallable(const InvokeTWeSeeRecognitionTaskWithFileRequest &request)
{
    const auto prom = std::make_shared<std::promise<InvokeTWeSeeRecognitionTaskWithFileOutcome>>();
    InvokeTWeSeeRecognitionTaskWithFileAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const InvokeTWeSeeRecognitionTaskWithFileRequest&,
        InvokeTWeSeeRecognitionTaskWithFileOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::InvokeVideosKeywordsAnalyzerOutcome IotexplorerClient::InvokeVideosKeywordsAnalyzer(const InvokeVideosKeywordsAnalyzerRequest &request)
{
    auto outcome = MakeRequest(request, "InvokeVideosKeywordsAnalyzer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InvokeVideosKeywordsAnalyzerResponse rsp = InvokeVideosKeywordsAnalyzerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InvokeVideosKeywordsAnalyzerOutcome(rsp);
        else
            return InvokeVideosKeywordsAnalyzerOutcome(o.GetError());
    }
    else
    {
        return InvokeVideosKeywordsAnalyzerOutcome(outcome.GetError());
    }
}

void IotexplorerClient::InvokeVideosKeywordsAnalyzerAsync(const InvokeVideosKeywordsAnalyzerRequest& request, const InvokeVideosKeywordsAnalyzerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const InvokeVideosKeywordsAnalyzerRequest&;
    using Resp = InvokeVideosKeywordsAnalyzerResponse;

    DoRequestAsync<Req, Resp>(
        "InvokeVideosKeywordsAnalyzer", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::InvokeVideosKeywordsAnalyzerOutcomeCallable IotexplorerClient::InvokeVideosKeywordsAnalyzerCallable(const InvokeVideosKeywordsAnalyzerRequest &request)
{
    const auto prom = std::make_shared<std::promise<InvokeVideosKeywordsAnalyzerOutcome>>();
    InvokeVideosKeywordsAnalyzerAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const InvokeVideosKeywordsAnalyzerRequest&,
        InvokeVideosKeywordsAnalyzerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::ListEventHistoryOutcome IotexplorerClient::ListEventHistory(const ListEventHistoryRequest &request)
{
    auto outcome = MakeRequest(request, "ListEventHistory");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListEventHistoryResponse rsp = ListEventHistoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListEventHistoryOutcome(rsp);
        else
            return ListEventHistoryOutcome(o.GetError());
    }
    else
    {
        return ListEventHistoryOutcome(outcome.GetError());
    }
}

void IotexplorerClient::ListEventHistoryAsync(const ListEventHistoryRequest& request, const ListEventHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListEventHistoryRequest&;
    using Resp = ListEventHistoryResponse;

    DoRequestAsync<Req, Resp>(
        "ListEventHistory", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::ListEventHistoryOutcomeCallable IotexplorerClient::ListEventHistoryCallable(const ListEventHistoryRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListEventHistoryOutcome>>();
    ListEventHistoryAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const ListEventHistoryRequest&,
        ListEventHistoryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::ListFirmwaresOutcome IotexplorerClient::ListFirmwares(const ListFirmwaresRequest &request)
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

void IotexplorerClient::ListFirmwaresAsync(const ListFirmwaresRequest& request, const ListFirmwaresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

IotexplorerClient::ListFirmwaresOutcomeCallable IotexplorerClient::ListFirmwaresCallable(const ListFirmwaresRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListFirmwaresOutcome>>();
    ListFirmwaresAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const ListFirmwaresRequest&,
        ListFirmwaresOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::ListOtaModulesOutcome IotexplorerClient::ListOtaModules(const ListOtaModulesRequest &request)
{
    auto outcome = MakeRequest(request, "ListOtaModules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListOtaModulesResponse rsp = ListOtaModulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListOtaModulesOutcome(rsp);
        else
            return ListOtaModulesOutcome(o.GetError());
    }
    else
    {
        return ListOtaModulesOutcome(outcome.GetError());
    }
}

void IotexplorerClient::ListOtaModulesAsync(const ListOtaModulesRequest& request, const ListOtaModulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListOtaModulesRequest&;
    using Resp = ListOtaModulesResponse;

    DoRequestAsync<Req, Resp>(
        "ListOtaModules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::ListOtaModulesOutcomeCallable IotexplorerClient::ListOtaModulesCallable(const ListOtaModulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListOtaModulesOutcome>>();
    ListOtaModulesAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const ListOtaModulesRequest&,
        ListOtaModulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::ListProductOtaModulesOutcome IotexplorerClient::ListProductOtaModules(const ListProductOtaModulesRequest &request)
{
    auto outcome = MakeRequest(request, "ListProductOtaModules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListProductOtaModulesResponse rsp = ListProductOtaModulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListProductOtaModulesOutcome(rsp);
        else
            return ListProductOtaModulesOutcome(o.GetError());
    }
    else
    {
        return ListProductOtaModulesOutcome(outcome.GetError());
    }
}

void IotexplorerClient::ListProductOtaModulesAsync(const ListProductOtaModulesRequest& request, const ListProductOtaModulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListProductOtaModulesRequest&;
    using Resp = ListProductOtaModulesResponse;

    DoRequestAsync<Req, Resp>(
        "ListProductOtaModules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::ListProductOtaModulesOutcomeCallable IotexplorerClient::ListProductOtaModulesCallable(const ListProductOtaModulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListProductOtaModulesOutcome>>();
    ListProductOtaModulesAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const ListProductOtaModulesRequest&,
        ListProductOtaModulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::ListTopicPolicyOutcome IotexplorerClient::ListTopicPolicy(const ListTopicPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "ListTopicPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListTopicPolicyResponse rsp = ListTopicPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListTopicPolicyOutcome(rsp);
        else
            return ListTopicPolicyOutcome(o.GetError());
    }
    else
    {
        return ListTopicPolicyOutcome(outcome.GetError());
    }
}

void IotexplorerClient::ListTopicPolicyAsync(const ListTopicPolicyRequest& request, const ListTopicPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListTopicPolicyRequest&;
    using Resp = ListTopicPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "ListTopicPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::ListTopicPolicyOutcomeCallable IotexplorerClient::ListTopicPolicyCallable(const ListTopicPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListTopicPolicyOutcome>>();
    ListTopicPolicyAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const ListTopicPolicyRequest&,
        ListTopicPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::ModifyApplicationOutcome IotexplorerClient::ModifyApplication(const ModifyApplicationRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyApplication");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyApplicationResponse rsp = ModifyApplicationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyApplicationOutcome(rsp);
        else
            return ModifyApplicationOutcome(o.GetError());
    }
    else
    {
        return ModifyApplicationOutcome(outcome.GetError());
    }
}

void IotexplorerClient::ModifyApplicationAsync(const ModifyApplicationRequest& request, const ModifyApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyApplicationRequest&;
    using Resp = ModifyApplicationResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyApplication", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::ModifyApplicationOutcomeCallable IotexplorerClient::ModifyApplicationCallable(const ModifyApplicationRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyApplicationOutcome>>();
    ModifyApplicationAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const ModifyApplicationRequest&,
        ModifyApplicationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::ModifyCloudStorageAIServiceOutcome IotexplorerClient::ModifyCloudStorageAIService(const ModifyCloudStorageAIServiceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCloudStorageAIService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCloudStorageAIServiceResponse rsp = ModifyCloudStorageAIServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCloudStorageAIServiceOutcome(rsp);
        else
            return ModifyCloudStorageAIServiceOutcome(o.GetError());
    }
    else
    {
        return ModifyCloudStorageAIServiceOutcome(outcome.GetError());
    }
}

void IotexplorerClient::ModifyCloudStorageAIServiceAsync(const ModifyCloudStorageAIServiceRequest& request, const ModifyCloudStorageAIServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCloudStorageAIServiceRequest&;
    using Resp = ModifyCloudStorageAIServiceResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCloudStorageAIService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::ModifyCloudStorageAIServiceOutcomeCallable IotexplorerClient::ModifyCloudStorageAIServiceCallable(const ModifyCloudStorageAIServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCloudStorageAIServiceOutcome>>();
    ModifyCloudStorageAIServiceAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const ModifyCloudStorageAIServiceRequest&,
        ModifyCloudStorageAIServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::ModifyCloudStorageAIServiceCallbackOutcome IotexplorerClient::ModifyCloudStorageAIServiceCallback(const ModifyCloudStorageAIServiceCallbackRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCloudStorageAIServiceCallback");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCloudStorageAIServiceCallbackResponse rsp = ModifyCloudStorageAIServiceCallbackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCloudStorageAIServiceCallbackOutcome(rsp);
        else
            return ModifyCloudStorageAIServiceCallbackOutcome(o.GetError());
    }
    else
    {
        return ModifyCloudStorageAIServiceCallbackOutcome(outcome.GetError());
    }
}

void IotexplorerClient::ModifyCloudStorageAIServiceCallbackAsync(const ModifyCloudStorageAIServiceCallbackRequest& request, const ModifyCloudStorageAIServiceCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCloudStorageAIServiceCallbackRequest&;
    using Resp = ModifyCloudStorageAIServiceCallbackResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCloudStorageAIServiceCallback", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::ModifyCloudStorageAIServiceCallbackOutcomeCallable IotexplorerClient::ModifyCloudStorageAIServiceCallbackCallable(const ModifyCloudStorageAIServiceCallbackRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCloudStorageAIServiceCallbackOutcome>>();
    ModifyCloudStorageAIServiceCallbackAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const ModifyCloudStorageAIServiceCallbackRequest&,
        ModifyCloudStorageAIServiceCallbackOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::ModifyFenceBindOutcome IotexplorerClient::ModifyFenceBind(const ModifyFenceBindRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyFenceBind");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyFenceBindResponse rsp = ModifyFenceBindResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyFenceBindOutcome(rsp);
        else
            return ModifyFenceBindOutcome(o.GetError());
    }
    else
    {
        return ModifyFenceBindOutcome(outcome.GetError());
    }
}

void IotexplorerClient::ModifyFenceBindAsync(const ModifyFenceBindRequest& request, const ModifyFenceBindAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyFenceBindRequest&;
    using Resp = ModifyFenceBindResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyFenceBind", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::ModifyFenceBindOutcomeCallable IotexplorerClient::ModifyFenceBindCallable(const ModifyFenceBindRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyFenceBindOutcome>>();
    ModifyFenceBindAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const ModifyFenceBindRequest&,
        ModifyFenceBindOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::ModifyLoRaFrequencyOutcome IotexplorerClient::ModifyLoRaFrequency(const ModifyLoRaFrequencyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLoRaFrequency");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLoRaFrequencyResponse rsp = ModifyLoRaFrequencyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLoRaFrequencyOutcome(rsp);
        else
            return ModifyLoRaFrequencyOutcome(o.GetError());
    }
    else
    {
        return ModifyLoRaFrequencyOutcome(outcome.GetError());
    }
}

void IotexplorerClient::ModifyLoRaFrequencyAsync(const ModifyLoRaFrequencyRequest& request, const ModifyLoRaFrequencyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyLoRaFrequencyRequest&;
    using Resp = ModifyLoRaFrequencyResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyLoRaFrequency", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::ModifyLoRaFrequencyOutcomeCallable IotexplorerClient::ModifyLoRaFrequencyCallable(const ModifyLoRaFrequencyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyLoRaFrequencyOutcome>>();
    ModifyLoRaFrequencyAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const ModifyLoRaFrequencyRequest&,
        ModifyLoRaFrequencyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::ModifyLoRaGatewayOutcome IotexplorerClient::ModifyLoRaGateway(const ModifyLoRaGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLoRaGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLoRaGatewayResponse rsp = ModifyLoRaGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLoRaGatewayOutcome(rsp);
        else
            return ModifyLoRaGatewayOutcome(o.GetError());
    }
    else
    {
        return ModifyLoRaGatewayOutcome(outcome.GetError());
    }
}

void IotexplorerClient::ModifyLoRaGatewayAsync(const ModifyLoRaGatewayRequest& request, const ModifyLoRaGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyLoRaGatewayRequest&;
    using Resp = ModifyLoRaGatewayResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyLoRaGateway", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::ModifyLoRaGatewayOutcomeCallable IotexplorerClient::ModifyLoRaGatewayCallable(const ModifyLoRaGatewayRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyLoRaGatewayOutcome>>();
    ModifyLoRaGatewayAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const ModifyLoRaGatewayRequest&,
        ModifyLoRaGatewayOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::ModifyModelDefinitionOutcome IotexplorerClient::ModifyModelDefinition(const ModifyModelDefinitionRequest &request)
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

void IotexplorerClient::ModifyModelDefinitionAsync(const ModifyModelDefinitionRequest& request, const ModifyModelDefinitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

IotexplorerClient::ModifyModelDefinitionOutcomeCallable IotexplorerClient::ModifyModelDefinitionCallable(const ModifyModelDefinitionRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyModelDefinitionOutcome>>();
    ModifyModelDefinitionAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const ModifyModelDefinitionRequest&,
        ModifyModelDefinitionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::ModifyPositionFenceOutcome IotexplorerClient::ModifyPositionFence(const ModifyPositionFenceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPositionFence");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPositionFenceResponse rsp = ModifyPositionFenceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPositionFenceOutcome(rsp);
        else
            return ModifyPositionFenceOutcome(o.GetError());
    }
    else
    {
        return ModifyPositionFenceOutcome(outcome.GetError());
    }
}

void IotexplorerClient::ModifyPositionFenceAsync(const ModifyPositionFenceRequest& request, const ModifyPositionFenceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyPositionFenceRequest&;
    using Resp = ModifyPositionFenceResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyPositionFence", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::ModifyPositionFenceOutcomeCallable IotexplorerClient::ModifyPositionFenceCallable(const ModifyPositionFenceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyPositionFenceOutcome>>();
    ModifyPositionFenceAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const ModifyPositionFenceRequest&,
        ModifyPositionFenceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::ModifyPositionSpaceOutcome IotexplorerClient::ModifyPositionSpace(const ModifyPositionSpaceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPositionSpace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPositionSpaceResponse rsp = ModifyPositionSpaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPositionSpaceOutcome(rsp);
        else
            return ModifyPositionSpaceOutcome(o.GetError());
    }
    else
    {
        return ModifyPositionSpaceOutcome(outcome.GetError());
    }
}

void IotexplorerClient::ModifyPositionSpaceAsync(const ModifyPositionSpaceRequest& request, const ModifyPositionSpaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyPositionSpaceRequest&;
    using Resp = ModifyPositionSpaceResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyPositionSpace", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::ModifyPositionSpaceOutcomeCallable IotexplorerClient::ModifyPositionSpaceCallable(const ModifyPositionSpaceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyPositionSpaceOutcome>>();
    ModifyPositionSpaceAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const ModifyPositionSpaceRequest&,
        ModifyPositionSpaceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::ModifyProductCloudStorageAIServiceOutcome IotexplorerClient::ModifyProductCloudStorageAIService(const ModifyProductCloudStorageAIServiceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyProductCloudStorageAIService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyProductCloudStorageAIServiceResponse rsp = ModifyProductCloudStorageAIServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyProductCloudStorageAIServiceOutcome(rsp);
        else
            return ModifyProductCloudStorageAIServiceOutcome(o.GetError());
    }
    else
    {
        return ModifyProductCloudStorageAIServiceOutcome(outcome.GetError());
    }
}

void IotexplorerClient::ModifyProductCloudStorageAIServiceAsync(const ModifyProductCloudStorageAIServiceRequest& request, const ModifyProductCloudStorageAIServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyProductCloudStorageAIServiceRequest&;
    using Resp = ModifyProductCloudStorageAIServiceResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyProductCloudStorageAIService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::ModifyProductCloudStorageAIServiceOutcomeCallable IotexplorerClient::ModifyProductCloudStorageAIServiceCallable(const ModifyProductCloudStorageAIServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyProductCloudStorageAIServiceOutcome>>();
    ModifyProductCloudStorageAIServiceAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const ModifyProductCloudStorageAIServiceRequest&,
        ModifyProductCloudStorageAIServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::ModifyProjectOutcome IotexplorerClient::ModifyProject(const ModifyProjectRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyProjectResponse rsp = ModifyProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyProjectOutcome(rsp);
        else
            return ModifyProjectOutcome(o.GetError());
    }
    else
    {
        return ModifyProjectOutcome(outcome.GetError());
    }
}

void IotexplorerClient::ModifyProjectAsync(const ModifyProjectRequest& request, const ModifyProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyProjectRequest&;
    using Resp = ModifyProjectResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyProject", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::ModifyProjectOutcomeCallable IotexplorerClient::ModifyProjectCallable(const ModifyProjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyProjectOutcome>>();
    ModifyProjectAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const ModifyProjectRequest&,
        ModifyProjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::ModifySpacePropertyOutcome IotexplorerClient::ModifySpaceProperty(const ModifySpacePropertyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySpaceProperty");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySpacePropertyResponse rsp = ModifySpacePropertyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySpacePropertyOutcome(rsp);
        else
            return ModifySpacePropertyOutcome(o.GetError());
    }
    else
    {
        return ModifySpacePropertyOutcome(outcome.GetError());
    }
}

void IotexplorerClient::ModifySpacePropertyAsync(const ModifySpacePropertyRequest& request, const ModifySpacePropertyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifySpacePropertyRequest&;
    using Resp = ModifySpacePropertyResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySpaceProperty", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::ModifySpacePropertyOutcomeCallable IotexplorerClient::ModifySpacePropertyCallable(const ModifySpacePropertyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySpacePropertyOutcome>>();
    ModifySpacePropertyAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const ModifySpacePropertyRequest&,
        ModifySpacePropertyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::ModifyStudioProductOutcome IotexplorerClient::ModifyStudioProduct(const ModifyStudioProductRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyStudioProduct");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyStudioProductResponse rsp = ModifyStudioProductResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyStudioProductOutcome(rsp);
        else
            return ModifyStudioProductOutcome(o.GetError());
    }
    else
    {
        return ModifyStudioProductOutcome(outcome.GetError());
    }
}

void IotexplorerClient::ModifyStudioProductAsync(const ModifyStudioProductRequest& request, const ModifyStudioProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyStudioProductRequest&;
    using Resp = ModifyStudioProductResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyStudioProduct", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::ModifyStudioProductOutcomeCallable IotexplorerClient::ModifyStudioProductCallable(const ModifyStudioProductRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyStudioProductOutcome>>();
    ModifyStudioProductAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const ModifyStudioProductRequest&,
        ModifyStudioProductOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::ModifyTWeSeeConfigOutcome IotexplorerClient::ModifyTWeSeeConfig(const ModifyTWeSeeConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTWeSeeConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTWeSeeConfigResponse rsp = ModifyTWeSeeConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTWeSeeConfigOutcome(rsp);
        else
            return ModifyTWeSeeConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyTWeSeeConfigOutcome(outcome.GetError());
    }
}

void IotexplorerClient::ModifyTWeSeeConfigAsync(const ModifyTWeSeeConfigRequest& request, const ModifyTWeSeeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyTWeSeeConfigRequest&;
    using Resp = ModifyTWeSeeConfigResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyTWeSeeConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::ModifyTWeSeeConfigOutcomeCallable IotexplorerClient::ModifyTWeSeeConfigCallable(const ModifyTWeSeeConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyTWeSeeConfigOutcome>>();
    ModifyTWeSeeConfigAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const ModifyTWeSeeConfigRequest&,
        ModifyTWeSeeConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::ModifyTWeTalkAIBotOutcome IotexplorerClient::ModifyTWeTalkAIBot(const ModifyTWeTalkAIBotRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTWeTalkAIBot");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTWeTalkAIBotResponse rsp = ModifyTWeTalkAIBotResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTWeTalkAIBotOutcome(rsp);
        else
            return ModifyTWeTalkAIBotOutcome(o.GetError());
    }
    else
    {
        return ModifyTWeTalkAIBotOutcome(outcome.GetError());
    }
}

void IotexplorerClient::ModifyTWeTalkAIBotAsync(const ModifyTWeTalkAIBotRequest& request, const ModifyTWeTalkAIBotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyTWeTalkAIBotRequest&;
    using Resp = ModifyTWeTalkAIBotResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyTWeTalkAIBot", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::ModifyTWeTalkAIBotOutcomeCallable IotexplorerClient::ModifyTWeTalkAIBotCallable(const ModifyTWeTalkAIBotRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyTWeTalkAIBotOutcome>>();
    ModifyTWeTalkAIBotAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const ModifyTWeTalkAIBotRequest&,
        ModifyTWeTalkAIBotOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::ModifyTWeTalkProductConfigOutcome IotexplorerClient::ModifyTWeTalkProductConfig(const ModifyTWeTalkProductConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTWeTalkProductConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTWeTalkProductConfigResponse rsp = ModifyTWeTalkProductConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTWeTalkProductConfigOutcome(rsp);
        else
            return ModifyTWeTalkProductConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyTWeTalkProductConfigOutcome(outcome.GetError());
    }
}

void IotexplorerClient::ModifyTWeTalkProductConfigAsync(const ModifyTWeTalkProductConfigRequest& request, const ModifyTWeTalkProductConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyTWeTalkProductConfigRequest&;
    using Resp = ModifyTWeTalkProductConfigResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyTWeTalkProductConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::ModifyTWeTalkProductConfigOutcomeCallable IotexplorerClient::ModifyTWeTalkProductConfigCallable(const ModifyTWeTalkProductConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyTWeTalkProductConfigOutcome>>();
    ModifyTWeTalkProductConfigAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const ModifyTWeTalkProductConfigRequest&,
        ModifyTWeTalkProductConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::ModifyTWeTalkProductConfigV2Outcome IotexplorerClient::ModifyTWeTalkProductConfigV2(const ModifyTWeTalkProductConfigV2Request &request)
{
    auto outcome = MakeRequest(request, "ModifyTWeTalkProductConfigV2");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTWeTalkProductConfigV2Response rsp = ModifyTWeTalkProductConfigV2Response();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTWeTalkProductConfigV2Outcome(rsp);
        else
            return ModifyTWeTalkProductConfigV2Outcome(o.GetError());
    }
    else
    {
        return ModifyTWeTalkProductConfigV2Outcome(outcome.GetError());
    }
}

void IotexplorerClient::ModifyTWeTalkProductConfigV2Async(const ModifyTWeTalkProductConfigV2Request& request, const ModifyTWeTalkProductConfigV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyTWeTalkProductConfigV2Request&;
    using Resp = ModifyTWeTalkProductConfigV2Response;

    DoRequestAsync<Req, Resp>(
        "ModifyTWeTalkProductConfigV2", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::ModifyTWeTalkProductConfigV2OutcomeCallable IotexplorerClient::ModifyTWeTalkProductConfigV2Callable(const ModifyTWeTalkProductConfigV2Request &request)
{
    const auto prom = std::make_shared<std::promise<ModifyTWeTalkProductConfigV2Outcome>>();
    ModifyTWeTalkProductConfigV2Async(
    request,
    [prom](
        const IotexplorerClient*,
        const ModifyTWeTalkProductConfigV2Request&,
        ModifyTWeTalkProductConfigV2Outcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::ModifyTopicPolicyOutcome IotexplorerClient::ModifyTopicPolicy(const ModifyTopicPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTopicPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTopicPolicyResponse rsp = ModifyTopicPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTopicPolicyOutcome(rsp);
        else
            return ModifyTopicPolicyOutcome(o.GetError());
    }
    else
    {
        return ModifyTopicPolicyOutcome(outcome.GetError());
    }
}

void IotexplorerClient::ModifyTopicPolicyAsync(const ModifyTopicPolicyRequest& request, const ModifyTopicPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyTopicPolicyRequest&;
    using Resp = ModifyTopicPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyTopicPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::ModifyTopicPolicyOutcomeCallable IotexplorerClient::ModifyTopicPolicyCallable(const ModifyTopicPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyTopicPolicyOutcome>>();
    ModifyTopicPolicyAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const ModifyTopicPolicyRequest&,
        ModifyTopicPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::ModifyTopicRuleOutcome IotexplorerClient::ModifyTopicRule(const ModifyTopicRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTopicRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTopicRuleResponse rsp = ModifyTopicRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTopicRuleOutcome(rsp);
        else
            return ModifyTopicRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyTopicRuleOutcome(outcome.GetError());
    }
}

void IotexplorerClient::ModifyTopicRuleAsync(const ModifyTopicRuleRequest& request, const ModifyTopicRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyTopicRuleRequest&;
    using Resp = ModifyTopicRuleResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyTopicRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::ModifyTopicRuleOutcomeCallable IotexplorerClient::ModifyTopicRuleCallable(const ModifyTopicRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyTopicRuleOutcome>>();
    ModifyTopicRuleAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const ModifyTopicRuleRequest&,
        ModifyTopicRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::PauseTWeCallDeviceOutcome IotexplorerClient::PauseTWeCallDevice(const PauseTWeCallDeviceRequest &request)
{
    auto outcome = MakeRequest(request, "PauseTWeCallDevice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PauseTWeCallDeviceResponse rsp = PauseTWeCallDeviceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PauseTWeCallDeviceOutcome(rsp);
        else
            return PauseTWeCallDeviceOutcome(o.GetError());
    }
    else
    {
        return PauseTWeCallDeviceOutcome(outcome.GetError());
    }
}

void IotexplorerClient::PauseTWeCallDeviceAsync(const PauseTWeCallDeviceRequest& request, const PauseTWeCallDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const PauseTWeCallDeviceRequest&;
    using Resp = PauseTWeCallDeviceResponse;

    DoRequestAsync<Req, Resp>(
        "PauseTWeCallDevice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::PauseTWeCallDeviceOutcomeCallable IotexplorerClient::PauseTWeCallDeviceCallable(const PauseTWeCallDeviceRequest &request)
{
    const auto prom = std::make_shared<std::promise<PauseTWeCallDeviceOutcome>>();
    PauseTWeCallDeviceAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const PauseTWeCallDeviceRequest&,
        PauseTWeCallDeviceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::PublishBroadcastMessageOutcome IotexplorerClient::PublishBroadcastMessage(const PublishBroadcastMessageRequest &request)
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

void IotexplorerClient::PublishBroadcastMessageAsync(const PublishBroadcastMessageRequest& request, const PublishBroadcastMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const PublishBroadcastMessageRequest&;
    using Resp = PublishBroadcastMessageResponse;

    DoRequestAsync<Req, Resp>(
        "PublishBroadcastMessage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::PublishBroadcastMessageOutcomeCallable IotexplorerClient::PublishBroadcastMessageCallable(const PublishBroadcastMessageRequest &request)
{
    const auto prom = std::make_shared<std::promise<PublishBroadcastMessageOutcome>>();
    PublishBroadcastMessageAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const PublishBroadcastMessageRequest&,
        PublishBroadcastMessageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::PublishFirmwareUpdateMessageOutcome IotexplorerClient::PublishFirmwareUpdateMessage(const PublishFirmwareUpdateMessageRequest &request)
{
    auto outcome = MakeRequest(request, "PublishFirmwareUpdateMessage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PublishFirmwareUpdateMessageResponse rsp = PublishFirmwareUpdateMessageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PublishFirmwareUpdateMessageOutcome(rsp);
        else
            return PublishFirmwareUpdateMessageOutcome(o.GetError());
    }
    else
    {
        return PublishFirmwareUpdateMessageOutcome(outcome.GetError());
    }
}

void IotexplorerClient::PublishFirmwareUpdateMessageAsync(const PublishFirmwareUpdateMessageRequest& request, const PublishFirmwareUpdateMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const PublishFirmwareUpdateMessageRequest&;
    using Resp = PublishFirmwareUpdateMessageResponse;

    DoRequestAsync<Req, Resp>(
        "PublishFirmwareUpdateMessage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::PublishFirmwareUpdateMessageOutcomeCallable IotexplorerClient::PublishFirmwareUpdateMessageCallable(const PublishFirmwareUpdateMessageRequest &request)
{
    const auto prom = std::make_shared<std::promise<PublishFirmwareUpdateMessageOutcome>>();
    PublishFirmwareUpdateMessageAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const PublishFirmwareUpdateMessageRequest&,
        PublishFirmwareUpdateMessageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::PublishMessageOutcome IotexplorerClient::PublishMessage(const PublishMessageRequest &request)
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

void IotexplorerClient::PublishMessageAsync(const PublishMessageRequest& request, const PublishMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

IotexplorerClient::PublishMessageOutcomeCallable IotexplorerClient::PublishMessageCallable(const PublishMessageRequest &request)
{
    const auto prom = std::make_shared<std::promise<PublishMessageOutcome>>();
    PublishMessageAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const PublishMessageRequest&,
        PublishMessageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::PublishRRPCMessageOutcome IotexplorerClient::PublishRRPCMessage(const PublishRRPCMessageRequest &request)
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

void IotexplorerClient::PublishRRPCMessageAsync(const PublishRRPCMessageRequest& request, const PublishRRPCMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const PublishRRPCMessageRequest&;
    using Resp = PublishRRPCMessageResponse;

    DoRequestAsync<Req, Resp>(
        "PublishRRPCMessage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::PublishRRPCMessageOutcomeCallable IotexplorerClient::PublishRRPCMessageCallable(const PublishRRPCMessageRequest &request)
{
    const auto prom = std::make_shared<std::promise<PublishRRPCMessageOutcome>>();
    PublishRRPCMessageAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const PublishRRPCMessageRequest&,
        PublishRRPCMessageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::ReleaseStudioProductOutcome IotexplorerClient::ReleaseStudioProduct(const ReleaseStudioProductRequest &request)
{
    auto outcome = MakeRequest(request, "ReleaseStudioProduct");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReleaseStudioProductResponse rsp = ReleaseStudioProductResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReleaseStudioProductOutcome(rsp);
        else
            return ReleaseStudioProductOutcome(o.GetError());
    }
    else
    {
        return ReleaseStudioProductOutcome(outcome.GetError());
    }
}

void IotexplorerClient::ReleaseStudioProductAsync(const ReleaseStudioProductRequest& request, const ReleaseStudioProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ReleaseStudioProductRequest&;
    using Resp = ReleaseStudioProductResponse;

    DoRequestAsync<Req, Resp>(
        "ReleaseStudioProduct", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::ReleaseStudioProductOutcomeCallable IotexplorerClient::ReleaseStudioProductCallable(const ReleaseStudioProductRequest &request)
{
    const auto prom = std::make_shared<std::promise<ReleaseStudioProductOutcome>>();
    ReleaseStudioProductAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const ReleaseStudioProductRequest&,
        ReleaseStudioProductOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::RemoveUserByRoomIdFromTRTCOutcome IotexplorerClient::RemoveUserByRoomIdFromTRTC(const RemoveUserByRoomIdFromTRTCRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveUserByRoomIdFromTRTC");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveUserByRoomIdFromTRTCResponse rsp = RemoveUserByRoomIdFromTRTCResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveUserByRoomIdFromTRTCOutcome(rsp);
        else
            return RemoveUserByRoomIdFromTRTCOutcome(o.GetError());
    }
    else
    {
        return RemoveUserByRoomIdFromTRTCOutcome(outcome.GetError());
    }
}

void IotexplorerClient::RemoveUserByRoomIdFromTRTCAsync(const RemoveUserByRoomIdFromTRTCRequest& request, const RemoveUserByRoomIdFromTRTCAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RemoveUserByRoomIdFromTRTCRequest&;
    using Resp = RemoveUserByRoomIdFromTRTCResponse;

    DoRequestAsync<Req, Resp>(
        "RemoveUserByRoomIdFromTRTC", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::RemoveUserByRoomIdFromTRTCOutcomeCallable IotexplorerClient::RemoveUserByRoomIdFromTRTCCallable(const RemoveUserByRoomIdFromTRTCRequest &request)
{
    const auto prom = std::make_shared<std::promise<RemoveUserByRoomIdFromTRTCOutcome>>();
    RemoveUserByRoomIdFromTRTCAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const RemoveUserByRoomIdFromTRTCRequest&,
        RemoveUserByRoomIdFromTRTCOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::ResetCloudStorageOutcome IotexplorerClient::ResetCloudStorage(const ResetCloudStorageRequest &request)
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

void IotexplorerClient::ResetCloudStorageAsync(const ResetCloudStorageRequest& request, const ResetCloudStorageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

IotexplorerClient::ResetCloudStorageOutcomeCallable IotexplorerClient::ResetCloudStorageCallable(const ResetCloudStorageRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResetCloudStorageOutcome>>();
    ResetCloudStorageAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const ResetCloudStorageRequest&,
        ResetCloudStorageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::ResetCloudStorageAIServiceOutcome IotexplorerClient::ResetCloudStorageAIService(const ResetCloudStorageAIServiceRequest &request)
{
    auto outcome = MakeRequest(request, "ResetCloudStorageAIService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetCloudStorageAIServiceResponse rsp = ResetCloudStorageAIServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetCloudStorageAIServiceOutcome(rsp);
        else
            return ResetCloudStorageAIServiceOutcome(o.GetError());
    }
    else
    {
        return ResetCloudStorageAIServiceOutcome(outcome.GetError());
    }
}

void IotexplorerClient::ResetCloudStorageAIServiceAsync(const ResetCloudStorageAIServiceRequest& request, const ResetCloudStorageAIServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ResetCloudStorageAIServiceRequest&;
    using Resp = ResetCloudStorageAIServiceResponse;

    DoRequestAsync<Req, Resp>(
        "ResetCloudStorageAIService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::ResetCloudStorageAIServiceOutcomeCallable IotexplorerClient::ResetCloudStorageAIServiceCallable(const ResetCloudStorageAIServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResetCloudStorageAIServiceOutcome>>();
    ResetCloudStorageAIServiceAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const ResetCloudStorageAIServiceRequest&,
        ResetCloudStorageAIServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::ResetCloudStorageEventOutcome IotexplorerClient::ResetCloudStorageEvent(const ResetCloudStorageEventRequest &request)
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

void IotexplorerClient::ResetCloudStorageEventAsync(const ResetCloudStorageEventRequest& request, const ResetCloudStorageEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

IotexplorerClient::ResetCloudStorageEventOutcomeCallable IotexplorerClient::ResetCloudStorageEventCallable(const ResetCloudStorageEventRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResetCloudStorageEventOutcome>>();
    ResetCloudStorageEventAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const ResetCloudStorageEventRequest&,
        ResetCloudStorageEventOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::ResetTWeCallDeviceOutcome IotexplorerClient::ResetTWeCallDevice(const ResetTWeCallDeviceRequest &request)
{
    auto outcome = MakeRequest(request, "ResetTWeCallDevice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetTWeCallDeviceResponse rsp = ResetTWeCallDeviceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetTWeCallDeviceOutcome(rsp);
        else
            return ResetTWeCallDeviceOutcome(o.GetError());
    }
    else
    {
        return ResetTWeCallDeviceOutcome(outcome.GetError());
    }
}

void IotexplorerClient::ResetTWeCallDeviceAsync(const ResetTWeCallDeviceRequest& request, const ResetTWeCallDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ResetTWeCallDeviceRequest&;
    using Resp = ResetTWeCallDeviceResponse;

    DoRequestAsync<Req, Resp>(
        "ResetTWeCallDevice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::ResetTWeCallDeviceOutcomeCallable IotexplorerClient::ResetTWeCallDeviceCallable(const ResetTWeCallDeviceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResetTWeCallDeviceOutcome>>();
    ResetTWeCallDeviceAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const ResetTWeCallDeviceRequest&,
        ResetTWeCallDeviceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::ResumeWeCallDeviceOutcome IotexplorerClient::ResumeWeCallDevice(const ResumeWeCallDeviceRequest &request)
{
    auto outcome = MakeRequest(request, "ResumeWeCallDevice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResumeWeCallDeviceResponse rsp = ResumeWeCallDeviceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResumeWeCallDeviceOutcome(rsp);
        else
            return ResumeWeCallDeviceOutcome(o.GetError());
    }
    else
    {
        return ResumeWeCallDeviceOutcome(outcome.GetError());
    }
}

void IotexplorerClient::ResumeWeCallDeviceAsync(const ResumeWeCallDeviceRequest& request, const ResumeWeCallDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ResumeWeCallDeviceRequest&;
    using Resp = ResumeWeCallDeviceResponse;

    DoRequestAsync<Req, Resp>(
        "ResumeWeCallDevice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::ResumeWeCallDeviceOutcomeCallable IotexplorerClient::ResumeWeCallDeviceCallable(const ResumeWeCallDeviceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResumeWeCallDeviceOutcome>>();
    ResumeWeCallDeviceAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const ResumeWeCallDeviceRequest&,
        ResumeWeCallDeviceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::SearchPositionSpaceOutcome IotexplorerClient::SearchPositionSpace(const SearchPositionSpaceRequest &request)
{
    auto outcome = MakeRequest(request, "SearchPositionSpace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SearchPositionSpaceResponse rsp = SearchPositionSpaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SearchPositionSpaceOutcome(rsp);
        else
            return SearchPositionSpaceOutcome(o.GetError());
    }
    else
    {
        return SearchPositionSpaceOutcome(outcome.GetError());
    }
}

void IotexplorerClient::SearchPositionSpaceAsync(const SearchPositionSpaceRequest& request, const SearchPositionSpaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SearchPositionSpaceRequest&;
    using Resp = SearchPositionSpaceResponse;

    DoRequestAsync<Req, Resp>(
        "SearchPositionSpace", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::SearchPositionSpaceOutcomeCallable IotexplorerClient::SearchPositionSpaceCallable(const SearchPositionSpaceRequest &request)
{
    const auto prom = std::make_shared<std::promise<SearchPositionSpaceOutcome>>();
    SearchPositionSpaceAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const SearchPositionSpaceRequest&,
        SearchPositionSpaceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::SearchStudioProductOutcome IotexplorerClient::SearchStudioProduct(const SearchStudioProductRequest &request)
{
    auto outcome = MakeRequest(request, "SearchStudioProduct");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SearchStudioProductResponse rsp = SearchStudioProductResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SearchStudioProductOutcome(rsp);
        else
            return SearchStudioProductOutcome(o.GetError());
    }
    else
    {
        return SearchStudioProductOutcome(outcome.GetError());
    }
}

void IotexplorerClient::SearchStudioProductAsync(const SearchStudioProductRequest& request, const SearchStudioProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SearchStudioProductRequest&;
    using Resp = SearchStudioProductResponse;

    DoRequestAsync<Req, Resp>(
        "SearchStudioProduct", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::SearchStudioProductOutcomeCallable IotexplorerClient::SearchStudioProductCallable(const SearchStudioProductRequest &request)
{
    const auto prom = std::make_shared<std::promise<SearchStudioProductOutcome>>();
    SearchStudioProductAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const SearchStudioProductRequest&,
        SearchStudioProductOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::SearchTopicRuleOutcome IotexplorerClient::SearchTopicRule(const SearchTopicRuleRequest &request)
{
    auto outcome = MakeRequest(request, "SearchTopicRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SearchTopicRuleResponse rsp = SearchTopicRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SearchTopicRuleOutcome(rsp);
        else
            return SearchTopicRuleOutcome(o.GetError());
    }
    else
    {
        return SearchTopicRuleOutcome(outcome.GetError());
    }
}

void IotexplorerClient::SearchTopicRuleAsync(const SearchTopicRuleRequest& request, const SearchTopicRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SearchTopicRuleRequest&;
    using Resp = SearchTopicRuleResponse;

    DoRequestAsync<Req, Resp>(
        "SearchTopicRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::SearchTopicRuleOutcomeCallable IotexplorerClient::SearchTopicRuleCallable(const SearchTopicRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<SearchTopicRuleOutcome>>();
    SearchTopicRuleAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const SearchTopicRuleRequest&,
        SearchTopicRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::TransferCloudStorageOutcome IotexplorerClient::TransferCloudStorage(const TransferCloudStorageRequest &request)
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

void IotexplorerClient::TransferCloudStorageAsync(const TransferCloudStorageRequest& request, const TransferCloudStorageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

IotexplorerClient::TransferCloudStorageOutcomeCallable IotexplorerClient::TransferCloudStorageCallable(const TransferCloudStorageRequest &request)
{
    const auto prom = std::make_shared<std::promise<TransferCloudStorageOutcome>>();
    TransferCloudStorageAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const TransferCloudStorageRequest&,
        TransferCloudStorageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::TransferTWeCallDeviceOutcome IotexplorerClient::TransferTWeCallDevice(const TransferTWeCallDeviceRequest &request)
{
    auto outcome = MakeRequest(request, "TransferTWeCallDevice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TransferTWeCallDeviceResponse rsp = TransferTWeCallDeviceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TransferTWeCallDeviceOutcome(rsp);
        else
            return TransferTWeCallDeviceOutcome(o.GetError());
    }
    else
    {
        return TransferTWeCallDeviceOutcome(outcome.GetError());
    }
}

void IotexplorerClient::TransferTWeCallDeviceAsync(const TransferTWeCallDeviceRequest& request, const TransferTWeCallDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const TransferTWeCallDeviceRequest&;
    using Resp = TransferTWeCallDeviceResponse;

    DoRequestAsync<Req, Resp>(
        "TransferTWeCallDevice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::TransferTWeCallDeviceOutcomeCallable IotexplorerClient::TransferTWeCallDeviceCallable(const TransferTWeCallDeviceRequest &request)
{
    const auto prom = std::make_shared<std::promise<TransferTWeCallDeviceOutcome>>();
    TransferTWeCallDeviceAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const TransferTWeCallDeviceRequest&,
        TransferTWeCallDeviceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::UnbindDevicesOutcome IotexplorerClient::UnbindDevices(const UnbindDevicesRequest &request)
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

void IotexplorerClient::UnbindDevicesAsync(const UnbindDevicesRequest& request, const UnbindDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UnbindDevicesRequest&;
    using Resp = UnbindDevicesResponse;

    DoRequestAsync<Req, Resp>(
        "UnbindDevices", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::UnbindDevicesOutcomeCallable IotexplorerClient::UnbindDevicesCallable(const UnbindDevicesRequest &request)
{
    const auto prom = std::make_shared<std::promise<UnbindDevicesOutcome>>();
    UnbindDevicesAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const UnbindDevicesRequest&,
        UnbindDevicesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::UnbindProductsOutcome IotexplorerClient::UnbindProducts(const UnbindProductsRequest &request)
{
    auto outcome = MakeRequest(request, "UnbindProducts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnbindProductsResponse rsp = UnbindProductsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnbindProductsOutcome(rsp);
        else
            return UnbindProductsOutcome(o.GetError());
    }
    else
    {
        return UnbindProductsOutcome(outcome.GetError());
    }
}

void IotexplorerClient::UnbindProductsAsync(const UnbindProductsRequest& request, const UnbindProductsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UnbindProductsRequest&;
    using Resp = UnbindProductsResponse;

    DoRequestAsync<Req, Resp>(
        "UnbindProducts", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::UnbindProductsOutcomeCallable IotexplorerClient::UnbindProductsCallable(const UnbindProductsRequest &request)
{
    const auto prom = std::make_shared<std::promise<UnbindProductsOutcome>>();
    UnbindProductsAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const UnbindProductsRequest&,
        UnbindProductsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::UnbindTWeTalkAIBotOutcome IotexplorerClient::UnbindTWeTalkAIBot(const UnbindTWeTalkAIBotRequest &request)
{
    auto outcome = MakeRequest(request, "UnbindTWeTalkAIBot");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnbindTWeTalkAIBotResponse rsp = UnbindTWeTalkAIBotResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnbindTWeTalkAIBotOutcome(rsp);
        else
            return UnbindTWeTalkAIBotOutcome(o.GetError());
    }
    else
    {
        return UnbindTWeTalkAIBotOutcome(outcome.GetError());
    }
}

void IotexplorerClient::UnbindTWeTalkAIBotAsync(const UnbindTWeTalkAIBotRequest& request, const UnbindTWeTalkAIBotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UnbindTWeTalkAIBotRequest&;
    using Resp = UnbindTWeTalkAIBotResponse;

    DoRequestAsync<Req, Resp>(
        "UnbindTWeTalkAIBot", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::UnbindTWeTalkAIBotOutcomeCallable IotexplorerClient::UnbindTWeTalkAIBotCallable(const UnbindTWeTalkAIBotRequest &request)
{
    const auto prom = std::make_shared<std::promise<UnbindTWeTalkAIBotOutcome>>();
    UnbindTWeTalkAIBotAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const UnbindTWeTalkAIBotRequest&,
        UnbindTWeTalkAIBotOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::UpdateDeviceTWeCallAuthorizeStatusOutcome IotexplorerClient::UpdateDeviceTWeCallAuthorizeStatus(const UpdateDeviceTWeCallAuthorizeStatusRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateDeviceTWeCallAuthorizeStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateDeviceTWeCallAuthorizeStatusResponse rsp = UpdateDeviceTWeCallAuthorizeStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateDeviceTWeCallAuthorizeStatusOutcome(rsp);
        else
            return UpdateDeviceTWeCallAuthorizeStatusOutcome(o.GetError());
    }
    else
    {
        return UpdateDeviceTWeCallAuthorizeStatusOutcome(outcome.GetError());
    }
}

void IotexplorerClient::UpdateDeviceTWeCallAuthorizeStatusAsync(const UpdateDeviceTWeCallAuthorizeStatusRequest& request, const UpdateDeviceTWeCallAuthorizeStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateDeviceTWeCallAuthorizeStatusRequest&;
    using Resp = UpdateDeviceTWeCallAuthorizeStatusResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateDeviceTWeCallAuthorizeStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::UpdateDeviceTWeCallAuthorizeStatusOutcomeCallable IotexplorerClient::UpdateDeviceTWeCallAuthorizeStatusCallable(const UpdateDeviceTWeCallAuthorizeStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateDeviceTWeCallAuthorizeStatusOutcome>>();
    UpdateDeviceTWeCallAuthorizeStatusAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const UpdateDeviceTWeCallAuthorizeStatusRequest&,
        UpdateDeviceTWeCallAuthorizeStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::UpdateDevicesEnableStateOutcome IotexplorerClient::UpdateDevicesEnableState(const UpdateDevicesEnableStateRequest &request)
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

void IotexplorerClient::UpdateDevicesEnableStateAsync(const UpdateDevicesEnableStateRequest& request, const UpdateDevicesEnableStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateDevicesEnableStateRequest&;
    using Resp = UpdateDevicesEnableStateResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateDevicesEnableState", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::UpdateDevicesEnableStateOutcomeCallable IotexplorerClient::UpdateDevicesEnableStateCallable(const UpdateDevicesEnableStateRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateDevicesEnableStateOutcome>>();
    UpdateDevicesEnableStateAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const UpdateDevicesEnableStateRequest&,
        UpdateDevicesEnableStateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::UpdateFirmwareOutcome IotexplorerClient::UpdateFirmware(const UpdateFirmwareRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateFirmware");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateFirmwareResponse rsp = UpdateFirmwareResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateFirmwareOutcome(rsp);
        else
            return UpdateFirmwareOutcome(o.GetError());
    }
    else
    {
        return UpdateFirmwareOutcome(outcome.GetError());
    }
}

void IotexplorerClient::UpdateFirmwareAsync(const UpdateFirmwareRequest& request, const UpdateFirmwareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateFirmwareRequest&;
    using Resp = UpdateFirmwareResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateFirmware", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::UpdateFirmwareOutcomeCallable IotexplorerClient::UpdateFirmwareCallable(const UpdateFirmwareRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateFirmwareOutcome>>();
    UpdateFirmwareAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const UpdateFirmwareRequest&,
        UpdateFirmwareOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::UpdateOtaModuleOutcome IotexplorerClient::UpdateOtaModule(const UpdateOtaModuleRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateOtaModule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateOtaModuleResponse rsp = UpdateOtaModuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateOtaModuleOutcome(rsp);
        else
            return UpdateOtaModuleOutcome(o.GetError());
    }
    else
    {
        return UpdateOtaModuleOutcome(outcome.GetError());
    }
}

void IotexplorerClient::UpdateOtaModuleAsync(const UpdateOtaModuleRequest& request, const UpdateOtaModuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateOtaModuleRequest&;
    using Resp = UpdateOtaModuleResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateOtaModule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::UpdateOtaModuleOutcomeCallable IotexplorerClient::UpdateOtaModuleCallable(const UpdateOtaModuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateOtaModuleOutcome>>();
    UpdateOtaModuleAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const UpdateOtaModuleRequest&,
        UpdateOtaModuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::UpdateOtaTaskStatusOutcome IotexplorerClient::UpdateOtaTaskStatus(const UpdateOtaTaskStatusRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateOtaTaskStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateOtaTaskStatusResponse rsp = UpdateOtaTaskStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateOtaTaskStatusOutcome(rsp);
        else
            return UpdateOtaTaskStatusOutcome(o.GetError());
    }
    else
    {
        return UpdateOtaTaskStatusOutcome(outcome.GetError());
    }
}

void IotexplorerClient::UpdateOtaTaskStatusAsync(const UpdateOtaTaskStatusRequest& request, const UpdateOtaTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateOtaTaskStatusRequest&;
    using Resp = UpdateOtaTaskStatusResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateOtaTaskStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotexplorerClient::UpdateOtaTaskStatusOutcomeCallable IotexplorerClient::UpdateOtaTaskStatusCallable(const UpdateOtaTaskStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateOtaTaskStatusOutcome>>();
    UpdateOtaTaskStatusAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const UpdateOtaTaskStatusRequest&,
        UpdateOtaTaskStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotexplorerClient::UploadFirmwareOutcome IotexplorerClient::UploadFirmware(const UploadFirmwareRequest &request)
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

void IotexplorerClient::UploadFirmwareAsync(const UploadFirmwareRequest& request, const UploadFirmwareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

IotexplorerClient::UploadFirmwareOutcomeCallable IotexplorerClient::UploadFirmwareCallable(const UploadFirmwareRequest &request)
{
    const auto prom = std::make_shared<std::promise<UploadFirmwareOutcome>>();
    UploadFirmwareAsync(
    request,
    [prom](
        const IotexplorerClient*,
        const UploadFirmwareRequest&,
        UploadFirmwareOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


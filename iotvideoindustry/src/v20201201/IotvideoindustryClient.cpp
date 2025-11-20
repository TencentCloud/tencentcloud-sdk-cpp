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

#include <tencentcloud/iotvideoindustry/v20201201/IotvideoindustryClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Iotvideoindustry::V20201201;
using namespace TencentCloud::Iotvideoindustry::V20201201::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-12-01";
    const string ENDPOINT = "iotvideoindustry.tencentcloudapi.com";
}

IotvideoindustryClient::IotvideoindustryClient(const Credential &credential, const string &region) :
    IotvideoindustryClient(credential, region, ClientProfile())
{
}

IotvideoindustryClient::IotvideoindustryClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


IotvideoindustryClient::BindGroupDevicesOutcome IotvideoindustryClient::BindGroupDevices(const BindGroupDevicesRequest &request)
{
    auto outcome = MakeRequest(request, "BindGroupDevices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindGroupDevicesResponse rsp = BindGroupDevicesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindGroupDevicesOutcome(rsp);
        else
            return BindGroupDevicesOutcome(o.GetError());
    }
    else
    {
        return BindGroupDevicesOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::BindGroupDevicesAsync(const BindGroupDevicesRequest& request, const BindGroupDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BindGroupDevicesRequest&;
    using Resp = BindGroupDevicesResponse;

    DoRequestAsync<Req, Resp>(
        "BindGroupDevices", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::BindGroupDevicesOutcomeCallable IotvideoindustryClient::BindGroupDevicesCallable(const BindGroupDevicesRequest &request)
{
    const auto prom = std::make_shared<std::promise<BindGroupDevicesOutcome>>();
    BindGroupDevicesAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const BindGroupDevicesRequest&,
        BindGroupDevicesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::ControlChannelLocalRecordOutcome IotvideoindustryClient::ControlChannelLocalRecord(const ControlChannelLocalRecordRequest &request)
{
    auto outcome = MakeRequest(request, "ControlChannelLocalRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ControlChannelLocalRecordResponse rsp = ControlChannelLocalRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ControlChannelLocalRecordOutcome(rsp);
        else
            return ControlChannelLocalRecordOutcome(o.GetError());
    }
    else
    {
        return ControlChannelLocalRecordOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::ControlChannelLocalRecordAsync(const ControlChannelLocalRecordRequest& request, const ControlChannelLocalRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ControlChannelLocalRecordRequest&;
    using Resp = ControlChannelLocalRecordResponse;

    DoRequestAsync<Req, Resp>(
        "ControlChannelLocalRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::ControlChannelLocalRecordOutcomeCallable IotvideoindustryClient::ControlChannelLocalRecordCallable(const ControlChannelLocalRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<ControlChannelLocalRecordOutcome>>();
    ControlChannelLocalRecordAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const ControlChannelLocalRecordRequest&,
        ControlChannelLocalRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::ControlChannelPTZOutcome IotvideoindustryClient::ControlChannelPTZ(const ControlChannelPTZRequest &request)
{
    auto outcome = MakeRequest(request, "ControlChannelPTZ");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ControlChannelPTZResponse rsp = ControlChannelPTZResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ControlChannelPTZOutcome(rsp);
        else
            return ControlChannelPTZOutcome(o.GetError());
    }
    else
    {
        return ControlChannelPTZOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::ControlChannelPTZAsync(const ControlChannelPTZRequest& request, const ControlChannelPTZAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ControlChannelPTZRequest&;
    using Resp = ControlChannelPTZResponse;

    DoRequestAsync<Req, Resp>(
        "ControlChannelPTZ", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::ControlChannelPTZOutcomeCallable IotvideoindustryClient::ControlChannelPTZCallable(const ControlChannelPTZRequest &request)
{
    const auto prom = std::make_shared<std::promise<ControlChannelPTZOutcome>>();
    ControlChannelPTZAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const ControlChannelPTZRequest&,
        ControlChannelPTZOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::ControlDevicePTZOutcome IotvideoindustryClient::ControlDevicePTZ(const ControlDevicePTZRequest &request)
{
    auto outcome = MakeRequest(request, "ControlDevicePTZ");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ControlDevicePTZResponse rsp = ControlDevicePTZResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ControlDevicePTZOutcome(rsp);
        else
            return ControlDevicePTZOutcome(o.GetError());
    }
    else
    {
        return ControlDevicePTZOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::ControlDevicePTZAsync(const ControlDevicePTZRequest& request, const ControlDevicePTZAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ControlDevicePTZRequest&;
    using Resp = ControlDevicePTZResponse;

    DoRequestAsync<Req, Resp>(
        "ControlDevicePTZ", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::ControlDevicePTZOutcomeCallable IotvideoindustryClient::ControlDevicePTZCallable(const ControlDevicePTZRequest &request)
{
    const auto prom = std::make_shared<std::promise<ControlDevicePTZOutcome>>();
    ControlDevicePTZAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const ControlDevicePTZRequest&,
        ControlDevicePTZOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::ControlHomePositionOutcome IotvideoindustryClient::ControlHomePosition(const ControlHomePositionRequest &request)
{
    auto outcome = MakeRequest(request, "ControlHomePosition");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ControlHomePositionResponse rsp = ControlHomePositionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ControlHomePositionOutcome(rsp);
        else
            return ControlHomePositionOutcome(o.GetError());
    }
    else
    {
        return ControlHomePositionOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::ControlHomePositionAsync(const ControlHomePositionRequest& request, const ControlHomePositionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ControlHomePositionRequest&;
    using Resp = ControlHomePositionResponse;

    DoRequestAsync<Req, Resp>(
        "ControlHomePosition", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::ControlHomePositionOutcomeCallable IotvideoindustryClient::ControlHomePositionCallable(const ControlHomePositionRequest &request)
{
    const auto prom = std::make_shared<std::promise<ControlHomePositionOutcome>>();
    ControlHomePositionAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const ControlHomePositionRequest&,
        ControlHomePositionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::ControlPresetOutcome IotvideoindustryClient::ControlPreset(const ControlPresetRequest &request)
{
    auto outcome = MakeRequest(request, "ControlPreset");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ControlPresetResponse rsp = ControlPresetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ControlPresetOutcome(rsp);
        else
            return ControlPresetOutcome(o.GetError());
    }
    else
    {
        return ControlPresetOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::ControlPresetAsync(const ControlPresetRequest& request, const ControlPresetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ControlPresetRequest&;
    using Resp = ControlPresetResponse;

    DoRequestAsync<Req, Resp>(
        "ControlPreset", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::ControlPresetOutcomeCallable IotvideoindustryClient::ControlPresetCallable(const ControlPresetRequest &request)
{
    const auto prom = std::make_shared<std::promise<ControlPresetOutcome>>();
    ControlPresetAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const ControlPresetRequest&,
        ControlPresetOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::ControlRecordStreamOutcome IotvideoindustryClient::ControlRecordStream(const ControlRecordStreamRequest &request)
{
    auto outcome = MakeRequest(request, "ControlRecordStream");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ControlRecordStreamResponse rsp = ControlRecordStreamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ControlRecordStreamOutcome(rsp);
        else
            return ControlRecordStreamOutcome(o.GetError());
    }
    else
    {
        return ControlRecordStreamOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::ControlRecordStreamAsync(const ControlRecordStreamRequest& request, const ControlRecordStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ControlRecordStreamRequest&;
    using Resp = ControlRecordStreamResponse;

    DoRequestAsync<Req, Resp>(
        "ControlRecordStream", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::ControlRecordStreamOutcomeCallable IotvideoindustryClient::ControlRecordStreamCallable(const ControlRecordStreamRequest &request)
{
    const auto prom = std::make_shared<std::promise<ControlRecordStreamOutcome>>();
    ControlRecordStreamAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const ControlRecordStreamRequest&,
        ControlRecordStreamOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::CreateDeviceOutcome IotvideoindustryClient::CreateDevice(const CreateDeviceRequest &request)
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

void IotvideoindustryClient::CreateDeviceAsync(const CreateDeviceRequest& request, const CreateDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

IotvideoindustryClient::CreateDeviceOutcomeCallable IotvideoindustryClient::CreateDeviceCallable(const CreateDeviceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDeviceOutcome>>();
    CreateDeviceAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const CreateDeviceRequest&,
        CreateDeviceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::CreateDeviceGroupOutcome IotvideoindustryClient::CreateDeviceGroup(const CreateDeviceGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDeviceGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDeviceGroupResponse rsp = CreateDeviceGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDeviceGroupOutcome(rsp);
        else
            return CreateDeviceGroupOutcome(o.GetError());
    }
    else
    {
        return CreateDeviceGroupOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::CreateDeviceGroupAsync(const CreateDeviceGroupRequest& request, const CreateDeviceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDeviceGroupRequest&;
    using Resp = CreateDeviceGroupResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDeviceGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::CreateDeviceGroupOutcomeCallable IotvideoindustryClient::CreateDeviceGroupCallable(const CreateDeviceGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDeviceGroupOutcome>>();
    CreateDeviceGroupAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const CreateDeviceGroupRequest&,
        CreateDeviceGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::CreateLiveChannelOutcome IotvideoindustryClient::CreateLiveChannel(const CreateLiveChannelRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLiveChannel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLiveChannelResponse rsp = CreateLiveChannelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLiveChannelOutcome(rsp);
        else
            return CreateLiveChannelOutcome(o.GetError());
    }
    else
    {
        return CreateLiveChannelOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::CreateLiveChannelAsync(const CreateLiveChannelRequest& request, const CreateLiveChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateLiveChannelRequest&;
    using Resp = CreateLiveChannelResponse;

    DoRequestAsync<Req, Resp>(
        "CreateLiveChannel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::CreateLiveChannelOutcomeCallable IotvideoindustryClient::CreateLiveChannelCallable(const CreateLiveChannelRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateLiveChannelOutcome>>();
    CreateLiveChannelAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const CreateLiveChannelRequest&,
        CreateLiveChannelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::CreateLiveRecordPlanOutcome IotvideoindustryClient::CreateLiveRecordPlan(const CreateLiveRecordPlanRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLiveRecordPlan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLiveRecordPlanResponse rsp = CreateLiveRecordPlanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLiveRecordPlanOutcome(rsp);
        else
            return CreateLiveRecordPlanOutcome(o.GetError());
    }
    else
    {
        return CreateLiveRecordPlanOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::CreateLiveRecordPlanAsync(const CreateLiveRecordPlanRequest& request, const CreateLiveRecordPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateLiveRecordPlanRequest&;
    using Resp = CreateLiveRecordPlanResponse;

    DoRequestAsync<Req, Resp>(
        "CreateLiveRecordPlan", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::CreateLiveRecordPlanOutcomeCallable IotvideoindustryClient::CreateLiveRecordPlanCallable(const CreateLiveRecordPlanRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateLiveRecordPlanOutcome>>();
    CreateLiveRecordPlanAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const CreateLiveRecordPlanRequest&,
        CreateLiveRecordPlanOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::CreateMessageForwardOutcome IotvideoindustryClient::CreateMessageForward(const CreateMessageForwardRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMessageForward");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMessageForwardResponse rsp = CreateMessageForwardResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMessageForwardOutcome(rsp);
        else
            return CreateMessageForwardOutcome(o.GetError());
    }
    else
    {
        return CreateMessageForwardOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::CreateMessageForwardAsync(const CreateMessageForwardRequest& request, const CreateMessageForwardAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateMessageForwardRequest&;
    using Resp = CreateMessageForwardResponse;

    DoRequestAsync<Req, Resp>(
        "CreateMessageForward", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::CreateMessageForwardOutcomeCallable IotvideoindustryClient::CreateMessageForwardCallable(const CreateMessageForwardRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateMessageForwardOutcome>>();
    CreateMessageForwardAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const CreateMessageForwardRequest&,
        CreateMessageForwardOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::CreateRecordPlanOutcome IotvideoindustryClient::CreateRecordPlan(const CreateRecordPlanRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRecordPlan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRecordPlanResponse rsp = CreateRecordPlanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRecordPlanOutcome(rsp);
        else
            return CreateRecordPlanOutcome(o.GetError());
    }
    else
    {
        return CreateRecordPlanOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::CreateRecordPlanAsync(const CreateRecordPlanRequest& request, const CreateRecordPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateRecordPlanRequest&;
    using Resp = CreateRecordPlanResponse;

    DoRequestAsync<Req, Resp>(
        "CreateRecordPlan", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::CreateRecordPlanOutcomeCallable IotvideoindustryClient::CreateRecordPlanCallable(const CreateRecordPlanRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateRecordPlanOutcome>>();
    CreateRecordPlanAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const CreateRecordPlanRequest&,
        CreateRecordPlanOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::CreateRecordingPlanOutcome IotvideoindustryClient::CreateRecordingPlan(const CreateRecordingPlanRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRecordingPlan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRecordingPlanResponse rsp = CreateRecordingPlanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRecordingPlanOutcome(rsp);
        else
            return CreateRecordingPlanOutcome(o.GetError());
    }
    else
    {
        return CreateRecordingPlanOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::CreateRecordingPlanAsync(const CreateRecordingPlanRequest& request, const CreateRecordingPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateRecordingPlanRequest&;
    using Resp = CreateRecordingPlanResponse;

    DoRequestAsync<Req, Resp>(
        "CreateRecordingPlan", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::CreateRecordingPlanOutcomeCallable IotvideoindustryClient::CreateRecordingPlanCallable(const CreateRecordingPlanRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateRecordingPlanOutcome>>();
    CreateRecordingPlanAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const CreateRecordingPlanRequest&,
        CreateRecordingPlanOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::CreateSceneOutcome IotvideoindustryClient::CreateScene(const CreateSceneRequest &request)
{
    auto outcome = MakeRequest(request, "CreateScene");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSceneResponse rsp = CreateSceneResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSceneOutcome(rsp);
        else
            return CreateSceneOutcome(o.GetError());
    }
    else
    {
        return CreateSceneOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::CreateSceneAsync(const CreateSceneRequest& request, const CreateSceneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSceneRequest&;
    using Resp = CreateSceneResponse;

    DoRequestAsync<Req, Resp>(
        "CreateScene", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::CreateSceneOutcomeCallable IotvideoindustryClient::CreateSceneCallable(const CreateSceneRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSceneOutcome>>();
    CreateSceneAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const CreateSceneRequest&,
        CreateSceneOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::CreateTimeTemplateOutcome IotvideoindustryClient::CreateTimeTemplate(const CreateTimeTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTimeTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTimeTemplateResponse rsp = CreateTimeTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTimeTemplateOutcome(rsp);
        else
            return CreateTimeTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateTimeTemplateOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::CreateTimeTemplateAsync(const CreateTimeTemplateRequest& request, const CreateTimeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTimeTemplateRequest&;
    using Resp = CreateTimeTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTimeTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::CreateTimeTemplateOutcomeCallable IotvideoindustryClient::CreateTimeTemplateCallable(const CreateTimeTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTimeTemplateOutcome>>();
    CreateTimeTemplateAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const CreateTimeTemplateRequest&,
        CreateTimeTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::DeleteChannelOutcome IotvideoindustryClient::DeleteChannel(const DeleteChannelRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteChannel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteChannelResponse rsp = DeleteChannelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteChannelOutcome(rsp);
        else
            return DeleteChannelOutcome(o.GetError());
    }
    else
    {
        return DeleteChannelOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::DeleteChannelAsync(const DeleteChannelRequest& request, const DeleteChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteChannelRequest&;
    using Resp = DeleteChannelResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteChannel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::DeleteChannelOutcomeCallable IotvideoindustryClient::DeleteChannelCallable(const DeleteChannelRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteChannelOutcome>>();
    DeleteChannelAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const DeleteChannelRequest&,
        DeleteChannelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::DeleteDeviceOutcome IotvideoindustryClient::DeleteDevice(const DeleteDeviceRequest &request)
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

void IotvideoindustryClient::DeleteDeviceAsync(const DeleteDeviceRequest& request, const DeleteDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

IotvideoindustryClient::DeleteDeviceOutcomeCallable IotvideoindustryClient::DeleteDeviceCallable(const DeleteDeviceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDeviceOutcome>>();
    DeleteDeviceAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const DeleteDeviceRequest&,
        DeleteDeviceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::DeleteDeviceGroupOutcome IotvideoindustryClient::DeleteDeviceGroup(const DeleteDeviceGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDeviceGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDeviceGroupResponse rsp = DeleteDeviceGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDeviceGroupOutcome(rsp);
        else
            return DeleteDeviceGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteDeviceGroupOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::DeleteDeviceGroupAsync(const DeleteDeviceGroupRequest& request, const DeleteDeviceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDeviceGroupRequest&;
    using Resp = DeleteDeviceGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDeviceGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::DeleteDeviceGroupOutcomeCallable IotvideoindustryClient::DeleteDeviceGroupCallable(const DeleteDeviceGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDeviceGroupOutcome>>();
    DeleteDeviceGroupAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const DeleteDeviceGroupRequest&,
        DeleteDeviceGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::DeleteLiveChannelOutcome IotvideoindustryClient::DeleteLiveChannel(const DeleteLiveChannelRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLiveChannel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLiveChannelResponse rsp = DeleteLiveChannelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLiveChannelOutcome(rsp);
        else
            return DeleteLiveChannelOutcome(o.GetError());
    }
    else
    {
        return DeleteLiveChannelOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::DeleteLiveChannelAsync(const DeleteLiveChannelRequest& request, const DeleteLiveChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteLiveChannelRequest&;
    using Resp = DeleteLiveChannelResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteLiveChannel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::DeleteLiveChannelOutcomeCallable IotvideoindustryClient::DeleteLiveChannelCallable(const DeleteLiveChannelRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteLiveChannelOutcome>>();
    DeleteLiveChannelAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const DeleteLiveChannelRequest&,
        DeleteLiveChannelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::DeleteLiveRecordPlanOutcome IotvideoindustryClient::DeleteLiveRecordPlan(const DeleteLiveRecordPlanRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLiveRecordPlan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLiveRecordPlanResponse rsp = DeleteLiveRecordPlanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLiveRecordPlanOutcome(rsp);
        else
            return DeleteLiveRecordPlanOutcome(o.GetError());
    }
    else
    {
        return DeleteLiveRecordPlanOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::DeleteLiveRecordPlanAsync(const DeleteLiveRecordPlanRequest& request, const DeleteLiveRecordPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteLiveRecordPlanRequest&;
    using Resp = DeleteLiveRecordPlanResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteLiveRecordPlan", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::DeleteLiveRecordPlanOutcomeCallable IotvideoindustryClient::DeleteLiveRecordPlanCallable(const DeleteLiveRecordPlanRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteLiveRecordPlanOutcome>>();
    DeleteLiveRecordPlanAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const DeleteLiveRecordPlanRequest&,
        DeleteLiveRecordPlanOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::DeleteLiveVideoListOutcome IotvideoindustryClient::DeleteLiveVideoList(const DeleteLiveVideoListRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLiveVideoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLiveVideoListResponse rsp = DeleteLiveVideoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLiveVideoListOutcome(rsp);
        else
            return DeleteLiveVideoListOutcome(o.GetError());
    }
    else
    {
        return DeleteLiveVideoListOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::DeleteLiveVideoListAsync(const DeleteLiveVideoListRequest& request, const DeleteLiveVideoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteLiveVideoListRequest&;
    using Resp = DeleteLiveVideoListResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteLiveVideoList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::DeleteLiveVideoListOutcomeCallable IotvideoindustryClient::DeleteLiveVideoListCallable(const DeleteLiveVideoListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteLiveVideoListOutcome>>();
    DeleteLiveVideoListAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const DeleteLiveVideoListRequest&,
        DeleteLiveVideoListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::DeleteMessageForwardOutcome IotvideoindustryClient::DeleteMessageForward(const DeleteMessageForwardRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMessageForward");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMessageForwardResponse rsp = DeleteMessageForwardResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMessageForwardOutcome(rsp);
        else
            return DeleteMessageForwardOutcome(o.GetError());
    }
    else
    {
        return DeleteMessageForwardOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::DeleteMessageForwardAsync(const DeleteMessageForwardRequest& request, const DeleteMessageForwardAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteMessageForwardRequest&;
    using Resp = DeleteMessageForwardResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteMessageForward", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::DeleteMessageForwardOutcomeCallable IotvideoindustryClient::DeleteMessageForwardCallable(const DeleteMessageForwardRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteMessageForwardOutcome>>();
    DeleteMessageForwardAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const DeleteMessageForwardRequest&,
        DeleteMessageForwardOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::DeleteRecordPlanOutcome IotvideoindustryClient::DeleteRecordPlan(const DeleteRecordPlanRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRecordPlan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRecordPlanResponse rsp = DeleteRecordPlanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRecordPlanOutcome(rsp);
        else
            return DeleteRecordPlanOutcome(o.GetError());
    }
    else
    {
        return DeleteRecordPlanOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::DeleteRecordPlanAsync(const DeleteRecordPlanRequest& request, const DeleteRecordPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteRecordPlanRequest&;
    using Resp = DeleteRecordPlanResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRecordPlan", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::DeleteRecordPlanOutcomeCallable IotvideoindustryClient::DeleteRecordPlanCallable(const DeleteRecordPlanRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRecordPlanOutcome>>();
    DeleteRecordPlanAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const DeleteRecordPlanRequest&,
        DeleteRecordPlanOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::DeleteRecordingPlanOutcome IotvideoindustryClient::DeleteRecordingPlan(const DeleteRecordingPlanRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRecordingPlan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRecordingPlanResponse rsp = DeleteRecordingPlanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRecordingPlanOutcome(rsp);
        else
            return DeleteRecordingPlanOutcome(o.GetError());
    }
    else
    {
        return DeleteRecordingPlanOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::DeleteRecordingPlanAsync(const DeleteRecordingPlanRequest& request, const DeleteRecordingPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteRecordingPlanRequest&;
    using Resp = DeleteRecordingPlanResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRecordingPlan", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::DeleteRecordingPlanOutcomeCallable IotvideoindustryClient::DeleteRecordingPlanCallable(const DeleteRecordingPlanRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRecordingPlanOutcome>>();
    DeleteRecordingPlanAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const DeleteRecordingPlanRequest&,
        DeleteRecordingPlanOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::DeleteSceneOutcome IotvideoindustryClient::DeleteScene(const DeleteSceneRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteScene");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSceneResponse rsp = DeleteSceneResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSceneOutcome(rsp);
        else
            return DeleteSceneOutcome(o.GetError());
    }
    else
    {
        return DeleteSceneOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::DeleteSceneAsync(const DeleteSceneRequest& request, const DeleteSceneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteSceneRequest&;
    using Resp = DeleteSceneResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteScene", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::DeleteSceneOutcomeCallable IotvideoindustryClient::DeleteSceneCallable(const DeleteSceneRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteSceneOutcome>>();
    DeleteSceneAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const DeleteSceneRequest&,
        DeleteSceneOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::DeleteTimeTemplateOutcome IotvideoindustryClient::DeleteTimeTemplate(const DeleteTimeTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTimeTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTimeTemplateResponse rsp = DeleteTimeTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTimeTemplateOutcome(rsp);
        else
            return DeleteTimeTemplateOutcome(o.GetError());
    }
    else
    {
        return DeleteTimeTemplateOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::DeleteTimeTemplateAsync(const DeleteTimeTemplateRequest& request, const DeleteTimeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteTimeTemplateRequest&;
    using Resp = DeleteTimeTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteTimeTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::DeleteTimeTemplateOutcomeCallable IotvideoindustryClient::DeleteTimeTemplateCallable(const DeleteTimeTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteTimeTemplateOutcome>>();
    DeleteTimeTemplateAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const DeleteTimeTemplateRequest&,
        DeleteTimeTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::DeleteVideoListOutcome IotvideoindustryClient::DeleteVideoList(const DeleteVideoListRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteVideoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteVideoListResponse rsp = DeleteVideoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteVideoListOutcome(rsp);
        else
            return DeleteVideoListOutcome(o.GetError());
    }
    else
    {
        return DeleteVideoListOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::DeleteVideoListAsync(const DeleteVideoListRequest& request, const DeleteVideoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteVideoListRequest&;
    using Resp = DeleteVideoListResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteVideoList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::DeleteVideoListOutcomeCallable IotvideoindustryClient::DeleteVideoListCallable(const DeleteVideoListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteVideoListOutcome>>();
    DeleteVideoListAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const DeleteVideoListRequest&,
        DeleteVideoListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::DeleteWarningOutcome IotvideoindustryClient::DeleteWarning(const DeleteWarningRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteWarning");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteWarningResponse rsp = DeleteWarningResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteWarningOutcome(rsp);
        else
            return DeleteWarningOutcome(o.GetError());
    }
    else
    {
        return DeleteWarningOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::DeleteWarningAsync(const DeleteWarningRequest& request, const DeleteWarningAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteWarningRequest&;
    using Resp = DeleteWarningResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteWarning", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::DeleteWarningOutcomeCallable IotvideoindustryClient::DeleteWarningCallable(const DeleteWarningRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteWarningOutcome>>();
    DeleteWarningAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const DeleteWarningRequest&,
        DeleteWarningOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::DescribeAbnormalEventsOutcome IotvideoindustryClient::DescribeAbnormalEvents(const DescribeAbnormalEventsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAbnormalEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAbnormalEventsResponse rsp = DescribeAbnormalEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAbnormalEventsOutcome(rsp);
        else
            return DescribeAbnormalEventsOutcome(o.GetError());
    }
    else
    {
        return DescribeAbnormalEventsOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::DescribeAbnormalEventsAsync(const DescribeAbnormalEventsRequest& request, const DescribeAbnormalEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAbnormalEventsRequest&;
    using Resp = DescribeAbnormalEventsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAbnormalEvents", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::DescribeAbnormalEventsOutcomeCallable IotvideoindustryClient::DescribeAbnormalEventsCallable(const DescribeAbnormalEventsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAbnormalEventsOutcome>>();
    DescribeAbnormalEventsAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const DescribeAbnormalEventsRequest&,
        DescribeAbnormalEventsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::DescribeAllDeviceListOutcome IotvideoindustryClient::DescribeAllDeviceList(const DescribeAllDeviceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAllDeviceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAllDeviceListResponse rsp = DescribeAllDeviceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAllDeviceListOutcome(rsp);
        else
            return DescribeAllDeviceListOutcome(o.GetError());
    }
    else
    {
        return DescribeAllDeviceListOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::DescribeAllDeviceListAsync(const DescribeAllDeviceListRequest& request, const DescribeAllDeviceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAllDeviceListRequest&;
    using Resp = DescribeAllDeviceListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAllDeviceList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::DescribeAllDeviceListOutcomeCallable IotvideoindustryClient::DescribeAllDeviceListCallable(const DescribeAllDeviceListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAllDeviceListOutcome>>();
    DescribeAllDeviceListAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const DescribeAllDeviceListRequest&,
        DescribeAllDeviceListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::DescribeBindSceneChannelsOutcome IotvideoindustryClient::DescribeBindSceneChannels(const DescribeBindSceneChannelsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBindSceneChannels");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBindSceneChannelsResponse rsp = DescribeBindSceneChannelsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBindSceneChannelsOutcome(rsp);
        else
            return DescribeBindSceneChannelsOutcome(o.GetError());
    }
    else
    {
        return DescribeBindSceneChannelsOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::DescribeBindSceneChannelsAsync(const DescribeBindSceneChannelsRequest& request, const DescribeBindSceneChannelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBindSceneChannelsRequest&;
    using Resp = DescribeBindSceneChannelsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBindSceneChannels", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::DescribeBindSceneChannelsOutcomeCallable IotvideoindustryClient::DescribeBindSceneChannelsCallable(const DescribeBindSceneChannelsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBindSceneChannelsOutcome>>();
    DescribeBindSceneChannelsAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const DescribeBindSceneChannelsRequest&,
        DescribeBindSceneChannelsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::DescribeBindSceneDevicesOutcome IotvideoindustryClient::DescribeBindSceneDevices(const DescribeBindSceneDevicesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBindSceneDevices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBindSceneDevicesResponse rsp = DescribeBindSceneDevicesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBindSceneDevicesOutcome(rsp);
        else
            return DescribeBindSceneDevicesOutcome(o.GetError());
    }
    else
    {
        return DescribeBindSceneDevicesOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::DescribeBindSceneDevicesAsync(const DescribeBindSceneDevicesRequest& request, const DescribeBindSceneDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBindSceneDevicesRequest&;
    using Resp = DescribeBindSceneDevicesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBindSceneDevices", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::DescribeBindSceneDevicesOutcomeCallable IotvideoindustryClient::DescribeBindSceneDevicesCallable(const DescribeBindSceneDevicesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBindSceneDevicesOutcome>>();
    DescribeBindSceneDevicesAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const DescribeBindSceneDevicesRequest&,
        DescribeBindSceneDevicesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::DescribeChannelLiveStreamURLOutcome IotvideoindustryClient::DescribeChannelLiveStreamURL(const DescribeChannelLiveStreamURLRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeChannelLiveStreamURL");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeChannelLiveStreamURLResponse rsp = DescribeChannelLiveStreamURLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeChannelLiveStreamURLOutcome(rsp);
        else
            return DescribeChannelLiveStreamURLOutcome(o.GetError());
    }
    else
    {
        return DescribeChannelLiveStreamURLOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::DescribeChannelLiveStreamURLAsync(const DescribeChannelLiveStreamURLRequest& request, const DescribeChannelLiveStreamURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeChannelLiveStreamURLRequest&;
    using Resp = DescribeChannelLiveStreamURLResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeChannelLiveStreamURL", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::DescribeChannelLiveStreamURLOutcomeCallable IotvideoindustryClient::DescribeChannelLiveStreamURLCallable(const DescribeChannelLiveStreamURLRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeChannelLiveStreamURLOutcome>>();
    DescribeChannelLiveStreamURLAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const DescribeChannelLiveStreamURLRequest&,
        DescribeChannelLiveStreamURLOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::DescribeChannelLocalRecordURLOutcome IotvideoindustryClient::DescribeChannelLocalRecordURL(const DescribeChannelLocalRecordURLRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeChannelLocalRecordURL");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeChannelLocalRecordURLResponse rsp = DescribeChannelLocalRecordURLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeChannelLocalRecordURLOutcome(rsp);
        else
            return DescribeChannelLocalRecordURLOutcome(o.GetError());
    }
    else
    {
        return DescribeChannelLocalRecordURLOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::DescribeChannelLocalRecordURLAsync(const DescribeChannelLocalRecordURLRequest& request, const DescribeChannelLocalRecordURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeChannelLocalRecordURLRequest&;
    using Resp = DescribeChannelLocalRecordURLResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeChannelLocalRecordURL", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::DescribeChannelLocalRecordURLOutcomeCallable IotvideoindustryClient::DescribeChannelLocalRecordURLCallable(const DescribeChannelLocalRecordURLRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeChannelLocalRecordURLOutcome>>();
    DescribeChannelLocalRecordURLAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const DescribeChannelLocalRecordURLRequest&,
        DescribeChannelLocalRecordURLOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::DescribeChannelStreamURLOutcome IotvideoindustryClient::DescribeChannelStreamURL(const DescribeChannelStreamURLRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeChannelStreamURL");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeChannelStreamURLResponse rsp = DescribeChannelStreamURLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeChannelStreamURLOutcome(rsp);
        else
            return DescribeChannelStreamURLOutcome(o.GetError());
    }
    else
    {
        return DescribeChannelStreamURLOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::DescribeChannelStreamURLAsync(const DescribeChannelStreamURLRequest& request, const DescribeChannelStreamURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeChannelStreamURLRequest&;
    using Resp = DescribeChannelStreamURLResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeChannelStreamURL", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::DescribeChannelStreamURLOutcomeCallable IotvideoindustryClient::DescribeChannelStreamURLCallable(const DescribeChannelStreamURLRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeChannelStreamURLOutcome>>();
    DescribeChannelStreamURLAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const DescribeChannelStreamURLRequest&,
        DescribeChannelStreamURLOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::DescribeChannelsOutcome IotvideoindustryClient::DescribeChannels(const DescribeChannelsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeChannels");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeChannelsResponse rsp = DescribeChannelsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeChannelsOutcome(rsp);
        else
            return DescribeChannelsOutcome(o.GetError());
    }
    else
    {
        return DescribeChannelsOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::DescribeChannelsAsync(const DescribeChannelsRequest& request, const DescribeChannelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeChannelsRequest&;
    using Resp = DescribeChannelsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeChannels", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::DescribeChannelsOutcomeCallable IotvideoindustryClient::DescribeChannelsCallable(const DescribeChannelsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeChannelsOutcome>>();
    DescribeChannelsAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const DescribeChannelsRequest&,
        DescribeChannelsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::DescribeChannelsByLiveRecordPlanOutcome IotvideoindustryClient::DescribeChannelsByLiveRecordPlan(const DescribeChannelsByLiveRecordPlanRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeChannelsByLiveRecordPlan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeChannelsByLiveRecordPlanResponse rsp = DescribeChannelsByLiveRecordPlanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeChannelsByLiveRecordPlanOutcome(rsp);
        else
            return DescribeChannelsByLiveRecordPlanOutcome(o.GetError());
    }
    else
    {
        return DescribeChannelsByLiveRecordPlanOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::DescribeChannelsByLiveRecordPlanAsync(const DescribeChannelsByLiveRecordPlanRequest& request, const DescribeChannelsByLiveRecordPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeChannelsByLiveRecordPlanRequest&;
    using Resp = DescribeChannelsByLiveRecordPlanResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeChannelsByLiveRecordPlan", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::DescribeChannelsByLiveRecordPlanOutcomeCallable IotvideoindustryClient::DescribeChannelsByLiveRecordPlanCallable(const DescribeChannelsByLiveRecordPlanRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeChannelsByLiveRecordPlanOutcome>>();
    DescribeChannelsByLiveRecordPlanAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const DescribeChannelsByLiveRecordPlanRequest&,
        DescribeChannelsByLiveRecordPlanOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::DescribeCurrentDeviceDataOutcome IotvideoindustryClient::DescribeCurrentDeviceData(const DescribeCurrentDeviceDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCurrentDeviceData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCurrentDeviceDataResponse rsp = DescribeCurrentDeviceDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCurrentDeviceDataOutcome(rsp);
        else
            return DescribeCurrentDeviceDataOutcome(o.GetError());
    }
    else
    {
        return DescribeCurrentDeviceDataOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::DescribeCurrentDeviceDataAsync(const DescribeCurrentDeviceDataRequest& request, const DescribeCurrentDeviceDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCurrentDeviceDataRequest&;
    using Resp = DescribeCurrentDeviceDataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCurrentDeviceData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::DescribeCurrentDeviceDataOutcomeCallable IotvideoindustryClient::DescribeCurrentDeviceDataCallable(const DescribeCurrentDeviceDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCurrentDeviceDataOutcome>>();
    DescribeCurrentDeviceDataAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const DescribeCurrentDeviceDataRequest&,
        DescribeCurrentDeviceDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::DescribeDeviceOutcome IotvideoindustryClient::DescribeDevice(const DescribeDeviceRequest &request)
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

void IotvideoindustryClient::DescribeDeviceAsync(const DescribeDeviceRequest& request, const DescribeDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

IotvideoindustryClient::DescribeDeviceOutcomeCallable IotvideoindustryClient::DescribeDeviceCallable(const DescribeDeviceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDeviceOutcome>>();
    DescribeDeviceAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const DescribeDeviceRequest&,
        DescribeDeviceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::DescribeDeviceEventOutcome IotvideoindustryClient::DescribeDeviceEvent(const DescribeDeviceEventRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeviceEvent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceEventResponse rsp = DescribeDeviceEventResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceEventOutcome(rsp);
        else
            return DescribeDeviceEventOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceEventOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::DescribeDeviceEventAsync(const DescribeDeviceEventRequest& request, const DescribeDeviceEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDeviceEventRequest&;
    using Resp = DescribeDeviceEventResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDeviceEvent", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::DescribeDeviceEventOutcomeCallable IotvideoindustryClient::DescribeDeviceEventCallable(const DescribeDeviceEventRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDeviceEventOutcome>>();
    DescribeDeviceEventAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const DescribeDeviceEventRequest&,
        DescribeDeviceEventOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::DescribeDeviceGroupOutcome IotvideoindustryClient::DescribeDeviceGroup(const DescribeDeviceGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeviceGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceGroupResponse rsp = DescribeDeviceGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceGroupOutcome(rsp);
        else
            return DescribeDeviceGroupOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceGroupOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::DescribeDeviceGroupAsync(const DescribeDeviceGroupRequest& request, const DescribeDeviceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDeviceGroupRequest&;
    using Resp = DescribeDeviceGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDeviceGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::DescribeDeviceGroupOutcomeCallable IotvideoindustryClient::DescribeDeviceGroupCallable(const DescribeDeviceGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDeviceGroupOutcome>>();
    DescribeDeviceGroupAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const DescribeDeviceGroupRequest&,
        DescribeDeviceGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::DescribeDeviceListOutcome IotvideoindustryClient::DescribeDeviceList(const DescribeDeviceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeviceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceListResponse rsp = DescribeDeviceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceListOutcome(rsp);
        else
            return DescribeDeviceListOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceListOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::DescribeDeviceListAsync(const DescribeDeviceListRequest& request, const DescribeDeviceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDeviceListRequest&;
    using Resp = DescribeDeviceListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDeviceList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::DescribeDeviceListOutcomeCallable IotvideoindustryClient::DescribeDeviceListCallable(const DescribeDeviceListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDeviceListOutcome>>();
    DescribeDeviceListAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const DescribeDeviceListRequest&,
        DescribeDeviceListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::DescribeDeviceMonitorDataOutcome IotvideoindustryClient::DescribeDeviceMonitorData(const DescribeDeviceMonitorDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeviceMonitorData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceMonitorDataResponse rsp = DescribeDeviceMonitorDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceMonitorDataOutcome(rsp);
        else
            return DescribeDeviceMonitorDataOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceMonitorDataOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::DescribeDeviceMonitorDataAsync(const DescribeDeviceMonitorDataRequest& request, const DescribeDeviceMonitorDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDeviceMonitorDataRequest&;
    using Resp = DescribeDeviceMonitorDataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDeviceMonitorData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::DescribeDeviceMonitorDataOutcomeCallable IotvideoindustryClient::DescribeDeviceMonitorDataCallable(const DescribeDeviceMonitorDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDeviceMonitorDataOutcome>>();
    DescribeDeviceMonitorDataAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const DescribeDeviceMonitorDataRequest&,
        DescribeDeviceMonitorDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::DescribeDevicePassWordOutcome IotvideoindustryClient::DescribeDevicePassWord(const DescribeDevicePassWordRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDevicePassWord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDevicePassWordResponse rsp = DescribeDevicePassWordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDevicePassWordOutcome(rsp);
        else
            return DescribeDevicePassWordOutcome(o.GetError());
    }
    else
    {
        return DescribeDevicePassWordOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::DescribeDevicePassWordAsync(const DescribeDevicePassWordRequest& request, const DescribeDevicePassWordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDevicePassWordRequest&;
    using Resp = DescribeDevicePassWordResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDevicePassWord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::DescribeDevicePassWordOutcomeCallable IotvideoindustryClient::DescribeDevicePassWordCallable(const DescribeDevicePassWordRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDevicePassWordOutcome>>();
    DescribeDevicePassWordAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const DescribeDevicePassWordRequest&,
        DescribeDevicePassWordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::DescribeDeviceStreamsOutcome IotvideoindustryClient::DescribeDeviceStreams(const DescribeDeviceStreamsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeviceStreams");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceStreamsResponse rsp = DescribeDeviceStreamsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceStreamsOutcome(rsp);
        else
            return DescribeDeviceStreamsOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceStreamsOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::DescribeDeviceStreamsAsync(const DescribeDeviceStreamsRequest& request, const DescribeDeviceStreamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDeviceStreamsRequest&;
    using Resp = DescribeDeviceStreamsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDeviceStreams", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::DescribeDeviceStreamsOutcomeCallable IotvideoindustryClient::DescribeDeviceStreamsCallable(const DescribeDeviceStreamsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDeviceStreamsOutcome>>();
    DescribeDeviceStreamsAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const DescribeDeviceStreamsRequest&,
        DescribeDeviceStreamsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::DescribeGroupByIdOutcome IotvideoindustryClient::DescribeGroupById(const DescribeGroupByIdRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGroupById");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGroupByIdResponse rsp = DescribeGroupByIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGroupByIdOutcome(rsp);
        else
            return DescribeGroupByIdOutcome(o.GetError());
    }
    else
    {
        return DescribeGroupByIdOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::DescribeGroupByIdAsync(const DescribeGroupByIdRequest& request, const DescribeGroupByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeGroupByIdRequest&;
    using Resp = DescribeGroupByIdResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGroupById", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::DescribeGroupByIdOutcomeCallable IotvideoindustryClient::DescribeGroupByIdCallable(const DescribeGroupByIdRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGroupByIdOutcome>>();
    DescribeGroupByIdAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const DescribeGroupByIdRequest&,
        DescribeGroupByIdOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::DescribeGroupByPathOutcome IotvideoindustryClient::DescribeGroupByPath(const DescribeGroupByPathRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGroupByPath");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGroupByPathResponse rsp = DescribeGroupByPathResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGroupByPathOutcome(rsp);
        else
            return DescribeGroupByPathOutcome(o.GetError());
    }
    else
    {
        return DescribeGroupByPathOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::DescribeGroupByPathAsync(const DescribeGroupByPathRequest& request, const DescribeGroupByPathAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeGroupByPathRequest&;
    using Resp = DescribeGroupByPathResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGroupByPath", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::DescribeGroupByPathOutcomeCallable IotvideoindustryClient::DescribeGroupByPathCallable(const DescribeGroupByPathRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGroupByPathOutcome>>();
    DescribeGroupByPathAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const DescribeGroupByPathRequest&,
        DescribeGroupByPathOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::DescribeGroupDevicesOutcome IotvideoindustryClient::DescribeGroupDevices(const DescribeGroupDevicesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGroupDevices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGroupDevicesResponse rsp = DescribeGroupDevicesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGroupDevicesOutcome(rsp);
        else
            return DescribeGroupDevicesOutcome(o.GetError());
    }
    else
    {
        return DescribeGroupDevicesOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::DescribeGroupDevicesAsync(const DescribeGroupDevicesRequest& request, const DescribeGroupDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeGroupDevicesRequest&;
    using Resp = DescribeGroupDevicesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGroupDevices", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::DescribeGroupDevicesOutcomeCallable IotvideoindustryClient::DescribeGroupDevicesCallable(const DescribeGroupDevicesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGroupDevicesOutcome>>();
    DescribeGroupDevicesAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const DescribeGroupDevicesRequest&,
        DescribeGroupDevicesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::DescribeGroupsOutcome IotvideoindustryClient::DescribeGroups(const DescribeGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGroupsResponse rsp = DescribeGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGroupsOutcome(rsp);
        else
            return DescribeGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeGroupsOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::DescribeGroupsAsync(const DescribeGroupsRequest& request, const DescribeGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeGroupsRequest&;
    using Resp = DescribeGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::DescribeGroupsOutcomeCallable IotvideoindustryClient::DescribeGroupsCallable(const DescribeGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGroupsOutcome>>();
    DescribeGroupsAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const DescribeGroupsRequest&,
        DescribeGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::DescribeIPCChannelsOutcome IotvideoindustryClient::DescribeIPCChannels(const DescribeIPCChannelsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIPCChannels");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIPCChannelsResponse rsp = DescribeIPCChannelsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIPCChannelsOutcome(rsp);
        else
            return DescribeIPCChannelsOutcome(o.GetError());
    }
    else
    {
        return DescribeIPCChannelsOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::DescribeIPCChannelsAsync(const DescribeIPCChannelsRequest& request, const DescribeIPCChannelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIPCChannelsRequest&;
    using Resp = DescribeIPCChannelsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIPCChannels", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::DescribeIPCChannelsOutcomeCallable IotvideoindustryClient::DescribeIPCChannelsCallable(const DescribeIPCChannelsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIPCChannelsOutcome>>();
    DescribeIPCChannelsAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const DescribeIPCChannelsRequest&,
        DescribeIPCChannelsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::DescribeLiveChannelOutcome IotvideoindustryClient::DescribeLiveChannel(const DescribeLiveChannelRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveChannel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveChannelResponse rsp = DescribeLiveChannelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveChannelOutcome(rsp);
        else
            return DescribeLiveChannelOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveChannelOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::DescribeLiveChannelAsync(const DescribeLiveChannelRequest& request, const DescribeLiveChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLiveChannelRequest&;
    using Resp = DescribeLiveChannelResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLiveChannel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::DescribeLiveChannelOutcomeCallable IotvideoindustryClient::DescribeLiveChannelCallable(const DescribeLiveChannelRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLiveChannelOutcome>>();
    DescribeLiveChannelAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const DescribeLiveChannelRequest&,
        DescribeLiveChannelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::DescribeLiveChannelListOutcome IotvideoindustryClient::DescribeLiveChannelList(const DescribeLiveChannelListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveChannelList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveChannelListResponse rsp = DescribeLiveChannelListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveChannelListOutcome(rsp);
        else
            return DescribeLiveChannelListOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveChannelListOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::DescribeLiveChannelListAsync(const DescribeLiveChannelListRequest& request, const DescribeLiveChannelListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLiveChannelListRequest&;
    using Resp = DescribeLiveChannelListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLiveChannelList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::DescribeLiveChannelListOutcomeCallable IotvideoindustryClient::DescribeLiveChannelListCallable(const DescribeLiveChannelListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLiveChannelListOutcome>>();
    DescribeLiveChannelListAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const DescribeLiveChannelListRequest&,
        DescribeLiveChannelListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::DescribeLiveRecordPlanByIdOutcome IotvideoindustryClient::DescribeLiveRecordPlanById(const DescribeLiveRecordPlanByIdRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveRecordPlanById");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveRecordPlanByIdResponse rsp = DescribeLiveRecordPlanByIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveRecordPlanByIdOutcome(rsp);
        else
            return DescribeLiveRecordPlanByIdOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveRecordPlanByIdOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::DescribeLiveRecordPlanByIdAsync(const DescribeLiveRecordPlanByIdRequest& request, const DescribeLiveRecordPlanByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLiveRecordPlanByIdRequest&;
    using Resp = DescribeLiveRecordPlanByIdResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLiveRecordPlanById", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::DescribeLiveRecordPlanByIdOutcomeCallable IotvideoindustryClient::DescribeLiveRecordPlanByIdCallable(const DescribeLiveRecordPlanByIdRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLiveRecordPlanByIdOutcome>>();
    DescribeLiveRecordPlanByIdAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const DescribeLiveRecordPlanByIdRequest&,
        DescribeLiveRecordPlanByIdOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::DescribeLiveRecordPlanIdsOutcome IotvideoindustryClient::DescribeLiveRecordPlanIds(const DescribeLiveRecordPlanIdsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveRecordPlanIds");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveRecordPlanIdsResponse rsp = DescribeLiveRecordPlanIdsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveRecordPlanIdsOutcome(rsp);
        else
            return DescribeLiveRecordPlanIdsOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveRecordPlanIdsOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::DescribeLiveRecordPlanIdsAsync(const DescribeLiveRecordPlanIdsRequest& request, const DescribeLiveRecordPlanIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLiveRecordPlanIdsRequest&;
    using Resp = DescribeLiveRecordPlanIdsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLiveRecordPlanIds", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::DescribeLiveRecordPlanIdsOutcomeCallable IotvideoindustryClient::DescribeLiveRecordPlanIdsCallable(const DescribeLiveRecordPlanIdsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLiveRecordPlanIdsOutcome>>();
    DescribeLiveRecordPlanIdsAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const DescribeLiveRecordPlanIdsRequest&,
        DescribeLiveRecordPlanIdsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::DescribeLiveStreamOutcome IotvideoindustryClient::DescribeLiveStream(const DescribeLiveStreamRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveStream");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveStreamResponse rsp = DescribeLiveStreamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveStreamOutcome(rsp);
        else
            return DescribeLiveStreamOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveStreamOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::DescribeLiveStreamAsync(const DescribeLiveStreamRequest& request, const DescribeLiveStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLiveStreamRequest&;
    using Resp = DescribeLiveStreamResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLiveStream", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::DescribeLiveStreamOutcomeCallable IotvideoindustryClient::DescribeLiveStreamCallable(const DescribeLiveStreamRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLiveStreamOutcome>>();
    DescribeLiveStreamAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const DescribeLiveStreamRequest&,
        DescribeLiveStreamOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::DescribeLiveVideoListOutcome IotvideoindustryClient::DescribeLiveVideoList(const DescribeLiveVideoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveVideoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveVideoListResponse rsp = DescribeLiveVideoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveVideoListOutcome(rsp);
        else
            return DescribeLiveVideoListOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveVideoListOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::DescribeLiveVideoListAsync(const DescribeLiveVideoListRequest& request, const DescribeLiveVideoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLiveVideoListRequest&;
    using Resp = DescribeLiveVideoListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLiveVideoList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::DescribeLiveVideoListOutcomeCallable IotvideoindustryClient::DescribeLiveVideoListCallable(const DescribeLiveVideoListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLiveVideoListOutcome>>();
    DescribeLiveVideoListAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const DescribeLiveVideoListRequest&,
        DescribeLiveVideoListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::DescribeMessageForwardOutcome IotvideoindustryClient::DescribeMessageForward(const DescribeMessageForwardRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMessageForward");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMessageForwardResponse rsp = DescribeMessageForwardResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMessageForwardOutcome(rsp);
        else
            return DescribeMessageForwardOutcome(o.GetError());
    }
    else
    {
        return DescribeMessageForwardOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::DescribeMessageForwardAsync(const DescribeMessageForwardRequest& request, const DescribeMessageForwardAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMessageForwardRequest&;
    using Resp = DescribeMessageForwardResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMessageForward", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::DescribeMessageForwardOutcomeCallable IotvideoindustryClient::DescribeMessageForwardCallable(const DescribeMessageForwardRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMessageForwardOutcome>>();
    DescribeMessageForwardAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const DescribeMessageForwardRequest&,
        DescribeMessageForwardOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::DescribeMessageForwardsOutcome IotvideoindustryClient::DescribeMessageForwards(const DescribeMessageForwardsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMessageForwards");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMessageForwardsResponse rsp = DescribeMessageForwardsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMessageForwardsOutcome(rsp);
        else
            return DescribeMessageForwardsOutcome(o.GetError());
    }
    else
    {
        return DescribeMessageForwardsOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::DescribeMessageForwardsAsync(const DescribeMessageForwardsRequest& request, const DescribeMessageForwardsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMessageForwardsRequest&;
    using Resp = DescribeMessageForwardsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMessageForwards", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::DescribeMessageForwardsOutcomeCallable IotvideoindustryClient::DescribeMessageForwardsCallable(const DescribeMessageForwardsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMessageForwardsOutcome>>();
    DescribeMessageForwardsAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const DescribeMessageForwardsRequest&,
        DescribeMessageForwardsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::DescribeMonitorDataByDateOutcome IotvideoindustryClient::DescribeMonitorDataByDate(const DescribeMonitorDataByDateRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMonitorDataByDate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMonitorDataByDateResponse rsp = DescribeMonitorDataByDateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMonitorDataByDateOutcome(rsp);
        else
            return DescribeMonitorDataByDateOutcome(o.GetError());
    }
    else
    {
        return DescribeMonitorDataByDateOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::DescribeMonitorDataByDateAsync(const DescribeMonitorDataByDateRequest& request, const DescribeMonitorDataByDateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMonitorDataByDateRequest&;
    using Resp = DescribeMonitorDataByDateResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMonitorDataByDate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::DescribeMonitorDataByDateOutcomeCallable IotvideoindustryClient::DescribeMonitorDataByDateCallable(const DescribeMonitorDataByDateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMonitorDataByDateOutcome>>();
    DescribeMonitorDataByDateAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const DescribeMonitorDataByDateRequest&,
        DescribeMonitorDataByDateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::DescribePresetListOutcome IotvideoindustryClient::DescribePresetList(const DescribePresetListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePresetList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePresetListResponse rsp = DescribePresetListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePresetListOutcome(rsp);
        else
            return DescribePresetListOutcome(o.GetError());
    }
    else
    {
        return DescribePresetListOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::DescribePresetListAsync(const DescribePresetListRequest& request, const DescribePresetListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePresetListRequest&;
    using Resp = DescribePresetListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePresetList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::DescribePresetListOutcomeCallable IotvideoindustryClient::DescribePresetListCallable(const DescribePresetListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePresetListOutcome>>();
    DescribePresetListAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const DescribePresetListRequest&,
        DescribePresetListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::DescribeRecordDatesByChannelOutcome IotvideoindustryClient::DescribeRecordDatesByChannel(const DescribeRecordDatesByChannelRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRecordDatesByChannel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRecordDatesByChannelResponse rsp = DescribeRecordDatesByChannelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRecordDatesByChannelOutcome(rsp);
        else
            return DescribeRecordDatesByChannelOutcome(o.GetError());
    }
    else
    {
        return DescribeRecordDatesByChannelOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::DescribeRecordDatesByChannelAsync(const DescribeRecordDatesByChannelRequest& request, const DescribeRecordDatesByChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRecordDatesByChannelRequest&;
    using Resp = DescribeRecordDatesByChannelResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRecordDatesByChannel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::DescribeRecordDatesByChannelOutcomeCallable IotvideoindustryClient::DescribeRecordDatesByChannelCallable(const DescribeRecordDatesByChannelRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRecordDatesByChannelOutcome>>();
    DescribeRecordDatesByChannelAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const DescribeRecordDatesByChannelRequest&,
        DescribeRecordDatesByChannelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::DescribeRecordDatesByLiveOutcome IotvideoindustryClient::DescribeRecordDatesByLive(const DescribeRecordDatesByLiveRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRecordDatesByLive");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRecordDatesByLiveResponse rsp = DescribeRecordDatesByLiveResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRecordDatesByLiveOutcome(rsp);
        else
            return DescribeRecordDatesByLiveOutcome(o.GetError());
    }
    else
    {
        return DescribeRecordDatesByLiveOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::DescribeRecordDatesByLiveAsync(const DescribeRecordDatesByLiveRequest& request, const DescribeRecordDatesByLiveAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRecordDatesByLiveRequest&;
    using Resp = DescribeRecordDatesByLiveResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRecordDatesByLive", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::DescribeRecordDatesByLiveOutcomeCallable IotvideoindustryClient::DescribeRecordDatesByLiveCallable(const DescribeRecordDatesByLiveRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRecordDatesByLiveOutcome>>();
    DescribeRecordDatesByLiveAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const DescribeRecordDatesByLiveRequest&,
        DescribeRecordDatesByLiveOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::DescribeRecordStreamOutcome IotvideoindustryClient::DescribeRecordStream(const DescribeRecordStreamRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRecordStream");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRecordStreamResponse rsp = DescribeRecordStreamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRecordStreamOutcome(rsp);
        else
            return DescribeRecordStreamOutcome(o.GetError());
    }
    else
    {
        return DescribeRecordStreamOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::DescribeRecordStreamAsync(const DescribeRecordStreamRequest& request, const DescribeRecordStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRecordStreamRequest&;
    using Resp = DescribeRecordStreamResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRecordStream", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::DescribeRecordStreamOutcomeCallable IotvideoindustryClient::DescribeRecordStreamCallable(const DescribeRecordStreamRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRecordStreamOutcome>>();
    DescribeRecordStreamAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const DescribeRecordStreamRequest&,
        DescribeRecordStreamOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::DescribeRecordingPlanByIdOutcome IotvideoindustryClient::DescribeRecordingPlanById(const DescribeRecordingPlanByIdRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRecordingPlanById");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRecordingPlanByIdResponse rsp = DescribeRecordingPlanByIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRecordingPlanByIdOutcome(rsp);
        else
            return DescribeRecordingPlanByIdOutcome(o.GetError());
    }
    else
    {
        return DescribeRecordingPlanByIdOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::DescribeRecordingPlanByIdAsync(const DescribeRecordingPlanByIdRequest& request, const DescribeRecordingPlanByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRecordingPlanByIdRequest&;
    using Resp = DescribeRecordingPlanByIdResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRecordingPlanById", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::DescribeRecordingPlanByIdOutcomeCallable IotvideoindustryClient::DescribeRecordingPlanByIdCallable(const DescribeRecordingPlanByIdRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRecordingPlanByIdOutcome>>();
    DescribeRecordingPlanByIdAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const DescribeRecordingPlanByIdRequest&,
        DescribeRecordingPlanByIdOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::DescribeRecordingPlansOutcome IotvideoindustryClient::DescribeRecordingPlans(const DescribeRecordingPlansRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRecordingPlans");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRecordingPlansResponse rsp = DescribeRecordingPlansResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRecordingPlansOutcome(rsp);
        else
            return DescribeRecordingPlansOutcome(o.GetError());
    }
    else
    {
        return DescribeRecordingPlansOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::DescribeRecordingPlansAsync(const DescribeRecordingPlansRequest& request, const DescribeRecordingPlansAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRecordingPlansRequest&;
    using Resp = DescribeRecordingPlansResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRecordingPlans", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::DescribeRecordingPlansOutcomeCallable IotvideoindustryClient::DescribeRecordingPlansCallable(const DescribeRecordingPlansRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRecordingPlansOutcome>>();
    DescribeRecordingPlansAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const DescribeRecordingPlansRequest&,
        DescribeRecordingPlansOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::DescribeSIPServerOutcome IotvideoindustryClient::DescribeSIPServer(const DescribeSIPServerRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSIPServer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSIPServerResponse rsp = DescribeSIPServerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSIPServerOutcome(rsp);
        else
            return DescribeSIPServerOutcome(o.GetError());
    }
    else
    {
        return DescribeSIPServerOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::DescribeSIPServerAsync(const DescribeSIPServerRequest& request, const DescribeSIPServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSIPServerRequest&;
    using Resp = DescribeSIPServerResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSIPServer", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::DescribeSIPServerOutcomeCallable IotvideoindustryClient::DescribeSIPServerCallable(const DescribeSIPServerRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSIPServerOutcome>>();
    DescribeSIPServerAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const DescribeSIPServerRequest&,
        DescribeSIPServerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::DescribeSceneOutcome IotvideoindustryClient::DescribeScene(const DescribeSceneRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScene");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSceneResponse rsp = DescribeSceneResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSceneOutcome(rsp);
        else
            return DescribeSceneOutcome(o.GetError());
    }
    else
    {
        return DescribeSceneOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::DescribeSceneAsync(const DescribeSceneRequest& request, const DescribeSceneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSceneRequest&;
    using Resp = DescribeSceneResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeScene", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::DescribeSceneOutcomeCallable IotvideoindustryClient::DescribeSceneCallable(const DescribeSceneRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSceneOutcome>>();
    DescribeSceneAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const DescribeSceneRequest&,
        DescribeSceneOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::DescribeScenesOutcome IotvideoindustryClient::DescribeScenes(const DescribeScenesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScenes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScenesResponse rsp = DescribeScenesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScenesOutcome(rsp);
        else
            return DescribeScenesOutcome(o.GetError());
    }
    else
    {
        return DescribeScenesOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::DescribeScenesAsync(const DescribeScenesRequest& request, const DescribeScenesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeScenesRequest&;
    using Resp = DescribeScenesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeScenes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::DescribeScenesOutcomeCallable IotvideoindustryClient::DescribeScenesCallable(const DescribeScenesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeScenesOutcome>>();
    DescribeScenesAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const DescribeScenesRequest&,
        DescribeScenesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::DescribeStatisticDetailsOutcome IotvideoindustryClient::DescribeStatisticDetails(const DescribeStatisticDetailsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStatisticDetails");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStatisticDetailsResponse rsp = DescribeStatisticDetailsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStatisticDetailsOutcome(rsp);
        else
            return DescribeStatisticDetailsOutcome(o.GetError());
    }
    else
    {
        return DescribeStatisticDetailsOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::DescribeStatisticDetailsAsync(const DescribeStatisticDetailsRequest& request, const DescribeStatisticDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeStatisticDetailsRequest&;
    using Resp = DescribeStatisticDetailsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStatisticDetails", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::DescribeStatisticDetailsOutcomeCallable IotvideoindustryClient::DescribeStatisticDetailsCallable(const DescribeStatisticDetailsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStatisticDetailsOutcome>>();
    DescribeStatisticDetailsAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const DescribeStatisticDetailsRequest&,
        DescribeStatisticDetailsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::DescribeStatisticSummaryOutcome IotvideoindustryClient::DescribeStatisticSummary(const DescribeStatisticSummaryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStatisticSummary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStatisticSummaryResponse rsp = DescribeStatisticSummaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStatisticSummaryOutcome(rsp);
        else
            return DescribeStatisticSummaryOutcome(o.GetError());
    }
    else
    {
        return DescribeStatisticSummaryOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::DescribeStatisticSummaryAsync(const DescribeStatisticSummaryRequest& request, const DescribeStatisticSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeStatisticSummaryRequest&;
    using Resp = DescribeStatisticSummaryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStatisticSummary", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::DescribeStatisticSummaryOutcomeCallable IotvideoindustryClient::DescribeStatisticSummaryCallable(const DescribeStatisticSummaryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStatisticSummaryOutcome>>();
    DescribeStatisticSummaryAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const DescribeStatisticSummaryRequest&,
        DescribeStatisticSummaryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::DescribeSubGroupsOutcome IotvideoindustryClient::DescribeSubGroups(const DescribeSubGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSubGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSubGroupsResponse rsp = DescribeSubGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSubGroupsOutcome(rsp);
        else
            return DescribeSubGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeSubGroupsOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::DescribeSubGroupsAsync(const DescribeSubGroupsRequest& request, const DescribeSubGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSubGroupsRequest&;
    using Resp = DescribeSubGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSubGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::DescribeSubGroupsOutcomeCallable IotvideoindustryClient::DescribeSubGroupsCallable(const DescribeSubGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSubGroupsOutcome>>();
    DescribeSubGroupsAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const DescribeSubGroupsRequest&,
        DescribeSubGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::DescribeSubscriptionStatusOutcome IotvideoindustryClient::DescribeSubscriptionStatus(const DescribeSubscriptionStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSubscriptionStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSubscriptionStatusResponse rsp = DescribeSubscriptionStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSubscriptionStatusOutcome(rsp);
        else
            return DescribeSubscriptionStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeSubscriptionStatusOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::DescribeSubscriptionStatusAsync(const DescribeSubscriptionStatusRequest& request, const DescribeSubscriptionStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSubscriptionStatusRequest&;
    using Resp = DescribeSubscriptionStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSubscriptionStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::DescribeSubscriptionStatusOutcomeCallable IotvideoindustryClient::DescribeSubscriptionStatusCallable(const DescribeSubscriptionStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSubscriptionStatusOutcome>>();
    DescribeSubscriptionStatusAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const DescribeSubscriptionStatusRequest&,
        DescribeSubscriptionStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::DescribeVideoListOutcome IotvideoindustryClient::DescribeVideoList(const DescribeVideoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVideoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVideoListResponse rsp = DescribeVideoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVideoListOutcome(rsp);
        else
            return DescribeVideoListOutcome(o.GetError());
    }
    else
    {
        return DescribeVideoListOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::DescribeVideoListAsync(const DescribeVideoListRequest& request, const DescribeVideoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVideoListRequest&;
    using Resp = DescribeVideoListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVideoList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::DescribeVideoListOutcomeCallable IotvideoindustryClient::DescribeVideoListCallable(const DescribeVideoListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVideoListOutcome>>();
    DescribeVideoListAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const DescribeVideoListRequest&,
        DescribeVideoListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::DescribeVideoListByChannelOutcome IotvideoindustryClient::DescribeVideoListByChannel(const DescribeVideoListByChannelRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVideoListByChannel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVideoListByChannelResponse rsp = DescribeVideoListByChannelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVideoListByChannelOutcome(rsp);
        else
            return DescribeVideoListByChannelOutcome(o.GetError());
    }
    else
    {
        return DescribeVideoListByChannelOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::DescribeVideoListByChannelAsync(const DescribeVideoListByChannelRequest& request, const DescribeVideoListByChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVideoListByChannelRequest&;
    using Resp = DescribeVideoListByChannelResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVideoListByChannel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::DescribeVideoListByChannelOutcomeCallable IotvideoindustryClient::DescribeVideoListByChannelCallable(const DescribeVideoListByChannelRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVideoListByChannelOutcome>>();
    DescribeVideoListByChannelAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const DescribeVideoListByChannelRequest&,
        DescribeVideoListByChannelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::DescribeWarnModOutcome IotvideoindustryClient::DescribeWarnMod(const DescribeWarnModRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWarnMod");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWarnModResponse rsp = DescribeWarnModResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWarnModOutcome(rsp);
        else
            return DescribeWarnModOutcome(o.GetError());
    }
    else
    {
        return DescribeWarnModOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::DescribeWarnModAsync(const DescribeWarnModRequest& request, const DescribeWarnModAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeWarnModRequest&;
    using Resp = DescribeWarnModResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWarnMod", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::DescribeWarnModOutcomeCallable IotvideoindustryClient::DescribeWarnModCallable(const DescribeWarnModRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWarnModOutcome>>();
    DescribeWarnModAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const DescribeWarnModRequest&,
        DescribeWarnModOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::DescribeWarningsOutcome IotvideoindustryClient::DescribeWarnings(const DescribeWarningsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWarnings");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWarningsResponse rsp = DescribeWarningsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWarningsOutcome(rsp);
        else
            return DescribeWarningsOutcome(o.GetError());
    }
    else
    {
        return DescribeWarningsOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::DescribeWarningsAsync(const DescribeWarningsRequest& request, const DescribeWarningsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeWarningsRequest&;
    using Resp = DescribeWarningsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWarnings", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::DescribeWarningsOutcomeCallable IotvideoindustryClient::DescribeWarningsCallable(const DescribeWarningsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWarningsOutcome>>();
    DescribeWarningsAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const DescribeWarningsRequest&,
        DescribeWarningsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::DescribeXP2PDataOutcome IotvideoindustryClient::DescribeXP2PData(const DescribeXP2PDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeXP2PData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeXP2PDataResponse rsp = DescribeXP2PDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeXP2PDataOutcome(rsp);
        else
            return DescribeXP2PDataOutcome(o.GetError());
    }
    else
    {
        return DescribeXP2PDataOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::DescribeXP2PDataAsync(const DescribeXP2PDataRequest& request, const DescribeXP2PDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeXP2PDataRequest&;
    using Resp = DescribeXP2PDataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeXP2PData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::DescribeXP2PDataOutcomeCallable IotvideoindustryClient::DescribeXP2PDataCallable(const DescribeXP2PDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeXP2PDataOutcome>>();
    DescribeXP2PDataAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const DescribeXP2PDataRequest&,
        DescribeXP2PDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::GetRecordDatesByDevOutcome IotvideoindustryClient::GetRecordDatesByDev(const GetRecordDatesByDevRequest &request)
{
    auto outcome = MakeRequest(request, "GetRecordDatesByDev");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetRecordDatesByDevResponse rsp = GetRecordDatesByDevResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetRecordDatesByDevOutcome(rsp);
        else
            return GetRecordDatesByDevOutcome(o.GetError());
    }
    else
    {
        return GetRecordDatesByDevOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::GetRecordDatesByDevAsync(const GetRecordDatesByDevRequest& request, const GetRecordDatesByDevAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetRecordDatesByDevRequest&;
    using Resp = GetRecordDatesByDevResponse;

    DoRequestAsync<Req, Resp>(
        "GetRecordDatesByDev", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::GetRecordDatesByDevOutcomeCallable IotvideoindustryClient::GetRecordDatesByDevCallable(const GetRecordDatesByDevRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetRecordDatesByDevOutcome>>();
    GetRecordDatesByDevAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const GetRecordDatesByDevRequest&,
        GetRecordDatesByDevOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::GetRecordPlanByDevOutcome IotvideoindustryClient::GetRecordPlanByDev(const GetRecordPlanByDevRequest &request)
{
    auto outcome = MakeRequest(request, "GetRecordPlanByDev");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetRecordPlanByDevResponse rsp = GetRecordPlanByDevResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetRecordPlanByDevOutcome(rsp);
        else
            return GetRecordPlanByDevOutcome(o.GetError());
    }
    else
    {
        return GetRecordPlanByDevOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::GetRecordPlanByDevAsync(const GetRecordPlanByDevRequest& request, const GetRecordPlanByDevAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetRecordPlanByDevRequest&;
    using Resp = GetRecordPlanByDevResponse;

    DoRequestAsync<Req, Resp>(
        "GetRecordPlanByDev", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::GetRecordPlanByDevOutcomeCallable IotvideoindustryClient::GetRecordPlanByDevCallable(const GetRecordPlanByDevRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetRecordPlanByDevOutcome>>();
    GetRecordPlanByDevAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const GetRecordPlanByDevRequest&,
        GetRecordPlanByDevOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::GetRecordPlanByIdOutcome IotvideoindustryClient::GetRecordPlanById(const GetRecordPlanByIdRequest &request)
{
    auto outcome = MakeRequest(request, "GetRecordPlanById");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetRecordPlanByIdResponse rsp = GetRecordPlanByIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetRecordPlanByIdOutcome(rsp);
        else
            return GetRecordPlanByIdOutcome(o.GetError());
    }
    else
    {
        return GetRecordPlanByIdOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::GetRecordPlanByIdAsync(const GetRecordPlanByIdRequest& request, const GetRecordPlanByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetRecordPlanByIdRequest&;
    using Resp = GetRecordPlanByIdResponse;

    DoRequestAsync<Req, Resp>(
        "GetRecordPlanById", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::GetRecordPlanByIdOutcomeCallable IotvideoindustryClient::GetRecordPlanByIdCallable(const GetRecordPlanByIdRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetRecordPlanByIdOutcome>>();
    GetRecordPlanByIdAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const GetRecordPlanByIdRequest&,
        GetRecordPlanByIdOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::GetRecordPlansOutcome IotvideoindustryClient::GetRecordPlans(const GetRecordPlansRequest &request)
{
    auto outcome = MakeRequest(request, "GetRecordPlans");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetRecordPlansResponse rsp = GetRecordPlansResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetRecordPlansOutcome(rsp);
        else
            return GetRecordPlansOutcome(o.GetError());
    }
    else
    {
        return GetRecordPlansOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::GetRecordPlansAsync(const GetRecordPlansRequest& request, const GetRecordPlansAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetRecordPlansRequest&;
    using Resp = GetRecordPlansResponse;

    DoRequestAsync<Req, Resp>(
        "GetRecordPlans", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::GetRecordPlansOutcomeCallable IotvideoindustryClient::GetRecordPlansCallable(const GetRecordPlansRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetRecordPlansOutcome>>();
    GetRecordPlansAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const GetRecordPlansRequest&,
        GetRecordPlansOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::GetTimeTemplateByIdOutcome IotvideoindustryClient::GetTimeTemplateById(const GetTimeTemplateByIdRequest &request)
{
    auto outcome = MakeRequest(request, "GetTimeTemplateById");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetTimeTemplateByIdResponse rsp = GetTimeTemplateByIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetTimeTemplateByIdOutcome(rsp);
        else
            return GetTimeTemplateByIdOutcome(o.GetError());
    }
    else
    {
        return GetTimeTemplateByIdOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::GetTimeTemplateByIdAsync(const GetTimeTemplateByIdRequest& request, const GetTimeTemplateByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetTimeTemplateByIdRequest&;
    using Resp = GetTimeTemplateByIdResponse;

    DoRequestAsync<Req, Resp>(
        "GetTimeTemplateById", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::GetTimeTemplateByIdOutcomeCallable IotvideoindustryClient::GetTimeTemplateByIdCallable(const GetTimeTemplateByIdRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetTimeTemplateByIdOutcome>>();
    GetTimeTemplateByIdAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const GetTimeTemplateByIdRequest&,
        GetTimeTemplateByIdOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::GetTimeTemplatesOutcome IotvideoindustryClient::GetTimeTemplates(const GetTimeTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "GetTimeTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetTimeTemplatesResponse rsp = GetTimeTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetTimeTemplatesOutcome(rsp);
        else
            return GetTimeTemplatesOutcome(o.GetError());
    }
    else
    {
        return GetTimeTemplatesOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::GetTimeTemplatesAsync(const GetTimeTemplatesRequest& request, const GetTimeTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetTimeTemplatesRequest&;
    using Resp = GetTimeTemplatesResponse;

    DoRequestAsync<Req, Resp>(
        "GetTimeTemplates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::GetTimeTemplatesOutcomeCallable IotvideoindustryClient::GetTimeTemplatesCallable(const GetTimeTemplatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetTimeTemplatesOutcome>>();
    GetTimeTemplatesAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const GetTimeTemplatesRequest&,
        GetTimeTemplatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::GetVideoListByConOutcome IotvideoindustryClient::GetVideoListByCon(const GetVideoListByConRequest &request)
{
    auto outcome = MakeRequest(request, "GetVideoListByCon");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetVideoListByConResponse rsp = GetVideoListByConResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetVideoListByConOutcome(rsp);
        else
            return GetVideoListByConOutcome(o.GetError());
    }
    else
    {
        return GetVideoListByConOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::GetVideoListByConAsync(const GetVideoListByConRequest& request, const GetVideoListByConAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetVideoListByConRequest&;
    using Resp = GetVideoListByConResponse;

    DoRequestAsync<Req, Resp>(
        "GetVideoListByCon", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::GetVideoListByConOutcomeCallable IotvideoindustryClient::GetVideoListByConCallable(const GetVideoListByConRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetVideoListByConOutcome>>();
    GetVideoListByConAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const GetVideoListByConRequest&,
        GetVideoListByConOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::ModifyBindPlanLiveChannelOutcome IotvideoindustryClient::ModifyBindPlanLiveChannel(const ModifyBindPlanLiveChannelRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBindPlanLiveChannel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBindPlanLiveChannelResponse rsp = ModifyBindPlanLiveChannelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBindPlanLiveChannelOutcome(rsp);
        else
            return ModifyBindPlanLiveChannelOutcome(o.GetError());
    }
    else
    {
        return ModifyBindPlanLiveChannelOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::ModifyBindPlanLiveChannelAsync(const ModifyBindPlanLiveChannelRequest& request, const ModifyBindPlanLiveChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyBindPlanLiveChannelRequest&;
    using Resp = ModifyBindPlanLiveChannelResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyBindPlanLiveChannel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::ModifyBindPlanLiveChannelOutcomeCallable IotvideoindustryClient::ModifyBindPlanLiveChannelCallable(const ModifyBindPlanLiveChannelRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyBindPlanLiveChannelOutcome>>();
    ModifyBindPlanLiveChannelAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const ModifyBindPlanLiveChannelRequest&,
        ModifyBindPlanLiveChannelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::ModifyBindRecordingPlanOutcome IotvideoindustryClient::ModifyBindRecordingPlan(const ModifyBindRecordingPlanRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBindRecordingPlan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBindRecordingPlanResponse rsp = ModifyBindRecordingPlanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBindRecordingPlanOutcome(rsp);
        else
            return ModifyBindRecordingPlanOutcome(o.GetError());
    }
    else
    {
        return ModifyBindRecordingPlanOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::ModifyBindRecordingPlanAsync(const ModifyBindRecordingPlanRequest& request, const ModifyBindRecordingPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyBindRecordingPlanRequest&;
    using Resp = ModifyBindRecordingPlanResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyBindRecordingPlan", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::ModifyBindRecordingPlanOutcomeCallable IotvideoindustryClient::ModifyBindRecordingPlanCallable(const ModifyBindRecordingPlanRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyBindRecordingPlanOutcome>>();
    ModifyBindRecordingPlanAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const ModifyBindRecordingPlanRequest&,
        ModifyBindRecordingPlanOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::ModifyBindSceneChannelsOutcome IotvideoindustryClient::ModifyBindSceneChannels(const ModifyBindSceneChannelsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBindSceneChannels");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBindSceneChannelsResponse rsp = ModifyBindSceneChannelsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBindSceneChannelsOutcome(rsp);
        else
            return ModifyBindSceneChannelsOutcome(o.GetError());
    }
    else
    {
        return ModifyBindSceneChannelsOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::ModifyBindSceneChannelsAsync(const ModifyBindSceneChannelsRequest& request, const ModifyBindSceneChannelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyBindSceneChannelsRequest&;
    using Resp = ModifyBindSceneChannelsResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyBindSceneChannels", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::ModifyBindSceneChannelsOutcomeCallable IotvideoindustryClient::ModifyBindSceneChannelsCallable(const ModifyBindSceneChannelsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyBindSceneChannelsOutcome>>();
    ModifyBindSceneChannelsAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const ModifyBindSceneChannelsRequest&,
        ModifyBindSceneChannelsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::ModifyBindSceneDeviceOutcome IotvideoindustryClient::ModifyBindSceneDevice(const ModifyBindSceneDeviceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBindSceneDevice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBindSceneDeviceResponse rsp = ModifyBindSceneDeviceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBindSceneDeviceOutcome(rsp);
        else
            return ModifyBindSceneDeviceOutcome(o.GetError());
    }
    else
    {
        return ModifyBindSceneDeviceOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::ModifyBindSceneDeviceAsync(const ModifyBindSceneDeviceRequest& request, const ModifyBindSceneDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyBindSceneDeviceRequest&;
    using Resp = ModifyBindSceneDeviceResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyBindSceneDevice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::ModifyBindSceneDeviceOutcomeCallable IotvideoindustryClient::ModifyBindSceneDeviceCallable(const ModifyBindSceneDeviceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyBindSceneDeviceOutcome>>();
    ModifyBindSceneDeviceAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const ModifyBindSceneDeviceRequest&,
        ModifyBindSceneDeviceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::ModifyDeviceDataOutcome IotvideoindustryClient::ModifyDeviceData(const ModifyDeviceDataRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDeviceData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDeviceDataResponse rsp = ModifyDeviceDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDeviceDataOutcome(rsp);
        else
            return ModifyDeviceDataOutcome(o.GetError());
    }
    else
    {
        return ModifyDeviceDataOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::ModifyDeviceDataAsync(const ModifyDeviceDataRequest& request, const ModifyDeviceDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDeviceDataRequest&;
    using Resp = ModifyDeviceDataResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDeviceData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::ModifyDeviceDataOutcomeCallable IotvideoindustryClient::ModifyDeviceDataCallable(const ModifyDeviceDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDeviceDataOutcome>>();
    ModifyDeviceDataAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const ModifyDeviceDataRequest&,
        ModifyDeviceDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::ModifyLiveChannelOutcome IotvideoindustryClient::ModifyLiveChannel(const ModifyLiveChannelRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLiveChannel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLiveChannelResponse rsp = ModifyLiveChannelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLiveChannelOutcome(rsp);
        else
            return ModifyLiveChannelOutcome(o.GetError());
    }
    else
    {
        return ModifyLiveChannelOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::ModifyLiveChannelAsync(const ModifyLiveChannelRequest& request, const ModifyLiveChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyLiveChannelRequest&;
    using Resp = ModifyLiveChannelResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyLiveChannel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::ModifyLiveChannelOutcomeCallable IotvideoindustryClient::ModifyLiveChannelCallable(const ModifyLiveChannelRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyLiveChannelOutcome>>();
    ModifyLiveChannelAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const ModifyLiveChannelRequest&,
        ModifyLiveChannelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::ModifyLiveRecordPlanOutcome IotvideoindustryClient::ModifyLiveRecordPlan(const ModifyLiveRecordPlanRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLiveRecordPlan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLiveRecordPlanResponse rsp = ModifyLiveRecordPlanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLiveRecordPlanOutcome(rsp);
        else
            return ModifyLiveRecordPlanOutcome(o.GetError());
    }
    else
    {
        return ModifyLiveRecordPlanOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::ModifyLiveRecordPlanAsync(const ModifyLiveRecordPlanRequest& request, const ModifyLiveRecordPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyLiveRecordPlanRequest&;
    using Resp = ModifyLiveRecordPlanResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyLiveRecordPlan", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::ModifyLiveRecordPlanOutcomeCallable IotvideoindustryClient::ModifyLiveRecordPlanCallable(const ModifyLiveRecordPlanRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyLiveRecordPlanOutcome>>();
    ModifyLiveRecordPlanAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const ModifyLiveRecordPlanRequest&,
        ModifyLiveRecordPlanOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::ModifyLiveVideoOutcome IotvideoindustryClient::ModifyLiveVideo(const ModifyLiveVideoRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLiveVideo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLiveVideoResponse rsp = ModifyLiveVideoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLiveVideoOutcome(rsp);
        else
            return ModifyLiveVideoOutcome(o.GetError());
    }
    else
    {
        return ModifyLiveVideoOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::ModifyLiveVideoAsync(const ModifyLiveVideoRequest& request, const ModifyLiveVideoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyLiveVideoRequest&;
    using Resp = ModifyLiveVideoResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyLiveVideo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::ModifyLiveVideoOutcomeCallable IotvideoindustryClient::ModifyLiveVideoCallable(const ModifyLiveVideoRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyLiveVideoOutcome>>();
    ModifyLiveVideoAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const ModifyLiveVideoRequest&,
        ModifyLiveVideoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::ModifyMessageForwardOutcome IotvideoindustryClient::ModifyMessageForward(const ModifyMessageForwardRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMessageForward");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMessageForwardResponse rsp = ModifyMessageForwardResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMessageForwardOutcome(rsp);
        else
            return ModifyMessageForwardOutcome(o.GetError());
    }
    else
    {
        return ModifyMessageForwardOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::ModifyMessageForwardAsync(const ModifyMessageForwardRequest& request, const ModifyMessageForwardAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyMessageForwardRequest&;
    using Resp = ModifyMessageForwardResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyMessageForward", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::ModifyMessageForwardOutcomeCallable IotvideoindustryClient::ModifyMessageForwardCallable(const ModifyMessageForwardRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyMessageForwardOutcome>>();
    ModifyMessageForwardAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const ModifyMessageForwardRequest&,
        ModifyMessageForwardOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::ModifyPresetOutcome IotvideoindustryClient::ModifyPreset(const ModifyPresetRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPreset");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPresetResponse rsp = ModifyPresetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPresetOutcome(rsp);
        else
            return ModifyPresetOutcome(o.GetError());
    }
    else
    {
        return ModifyPresetOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::ModifyPresetAsync(const ModifyPresetRequest& request, const ModifyPresetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyPresetRequest&;
    using Resp = ModifyPresetResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyPreset", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::ModifyPresetOutcomeCallable IotvideoindustryClient::ModifyPresetCallable(const ModifyPresetRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyPresetOutcome>>();
    ModifyPresetAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const ModifyPresetRequest&,
        ModifyPresetOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::ModifyRecordingPlanOutcome IotvideoindustryClient::ModifyRecordingPlan(const ModifyRecordingPlanRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRecordingPlan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRecordingPlanResponse rsp = ModifyRecordingPlanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRecordingPlanOutcome(rsp);
        else
            return ModifyRecordingPlanOutcome(o.GetError());
    }
    else
    {
        return ModifyRecordingPlanOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::ModifyRecordingPlanAsync(const ModifyRecordingPlanRequest& request, const ModifyRecordingPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyRecordingPlanRequest&;
    using Resp = ModifyRecordingPlanResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyRecordingPlan", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::ModifyRecordingPlanOutcomeCallable IotvideoindustryClient::ModifyRecordingPlanCallable(const ModifyRecordingPlanRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyRecordingPlanOutcome>>();
    ModifyRecordingPlanAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const ModifyRecordingPlanRequest&,
        ModifyRecordingPlanOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::ModifySceneOutcome IotvideoindustryClient::ModifyScene(const ModifySceneRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyScene");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySceneResponse rsp = ModifySceneResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySceneOutcome(rsp);
        else
            return ModifySceneOutcome(o.GetError());
    }
    else
    {
        return ModifySceneOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::ModifySceneAsync(const ModifySceneRequest& request, const ModifySceneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifySceneRequest&;
    using Resp = ModifySceneResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyScene", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::ModifySceneOutcomeCallable IotvideoindustryClient::ModifySceneCallable(const ModifySceneRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySceneOutcome>>();
    ModifySceneAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const ModifySceneRequest&,
        ModifySceneOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::ModifySubscriptionStatusOutcome IotvideoindustryClient::ModifySubscriptionStatus(const ModifySubscriptionStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySubscriptionStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySubscriptionStatusResponse rsp = ModifySubscriptionStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySubscriptionStatusOutcome(rsp);
        else
            return ModifySubscriptionStatusOutcome(o.GetError());
    }
    else
    {
        return ModifySubscriptionStatusOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::ModifySubscriptionStatusAsync(const ModifySubscriptionStatusRequest& request, const ModifySubscriptionStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifySubscriptionStatusRequest&;
    using Resp = ModifySubscriptionStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySubscriptionStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::ModifySubscriptionStatusOutcomeCallable IotvideoindustryClient::ModifySubscriptionStatusCallable(const ModifySubscriptionStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySubscriptionStatusOutcome>>();
    ModifySubscriptionStatusAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const ModifySubscriptionStatusRequest&,
        ModifySubscriptionStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::ModifyVideoInfoOutcome IotvideoindustryClient::ModifyVideoInfo(const ModifyVideoInfoRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyVideoInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyVideoInfoResponse rsp = ModifyVideoInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyVideoInfoOutcome(rsp);
        else
            return ModifyVideoInfoOutcome(o.GetError());
    }
    else
    {
        return ModifyVideoInfoOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::ModifyVideoInfoAsync(const ModifyVideoInfoRequest& request, const ModifyVideoInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyVideoInfoRequest&;
    using Resp = ModifyVideoInfoResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyVideoInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::ModifyVideoInfoOutcomeCallable IotvideoindustryClient::ModifyVideoInfoCallable(const ModifyVideoInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyVideoInfoOutcome>>();
    ModifyVideoInfoAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const ModifyVideoInfoRequest&,
        ModifyVideoInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::ResetWarningOutcome IotvideoindustryClient::ResetWarning(const ResetWarningRequest &request)
{
    auto outcome = MakeRequest(request, "ResetWarning");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetWarningResponse rsp = ResetWarningResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetWarningOutcome(rsp);
        else
            return ResetWarningOutcome(o.GetError());
    }
    else
    {
        return ResetWarningOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::ResetWarningAsync(const ResetWarningRequest& request, const ResetWarningAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ResetWarningRequest&;
    using Resp = ResetWarningResponse;

    DoRequestAsync<Req, Resp>(
        "ResetWarning", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::ResetWarningOutcomeCallable IotvideoindustryClient::ResetWarningCallable(const ResetWarningRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResetWarningOutcome>>();
    ResetWarningAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const ResetWarningRequest&,
        ResetWarningOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::UpdateDeviceGroupOutcome IotvideoindustryClient::UpdateDeviceGroup(const UpdateDeviceGroupRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateDeviceGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateDeviceGroupResponse rsp = UpdateDeviceGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateDeviceGroupOutcome(rsp);
        else
            return UpdateDeviceGroupOutcome(o.GetError());
    }
    else
    {
        return UpdateDeviceGroupOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::UpdateDeviceGroupAsync(const UpdateDeviceGroupRequest& request, const UpdateDeviceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateDeviceGroupRequest&;
    using Resp = UpdateDeviceGroupResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateDeviceGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::UpdateDeviceGroupOutcomeCallable IotvideoindustryClient::UpdateDeviceGroupCallable(const UpdateDeviceGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateDeviceGroupOutcome>>();
    UpdateDeviceGroupAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const UpdateDeviceGroupRequest&,
        UpdateDeviceGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::UpdateDevicePassWordOutcome IotvideoindustryClient::UpdateDevicePassWord(const UpdateDevicePassWordRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateDevicePassWord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateDevicePassWordResponse rsp = UpdateDevicePassWordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateDevicePassWordOutcome(rsp);
        else
            return UpdateDevicePassWordOutcome(o.GetError());
    }
    else
    {
        return UpdateDevicePassWordOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::UpdateDevicePassWordAsync(const UpdateDevicePassWordRequest& request, const UpdateDevicePassWordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateDevicePassWordRequest&;
    using Resp = UpdateDevicePassWordResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateDevicePassWord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::UpdateDevicePassWordOutcomeCallable IotvideoindustryClient::UpdateDevicePassWordCallable(const UpdateDevicePassWordRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateDevicePassWordOutcome>>();
    UpdateDevicePassWordAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const UpdateDevicePassWordRequest&,
        UpdateDevicePassWordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::UpdateRecordPlanOutcome IotvideoindustryClient::UpdateRecordPlan(const UpdateRecordPlanRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateRecordPlan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateRecordPlanResponse rsp = UpdateRecordPlanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateRecordPlanOutcome(rsp);
        else
            return UpdateRecordPlanOutcome(o.GetError());
    }
    else
    {
        return UpdateRecordPlanOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::UpdateRecordPlanAsync(const UpdateRecordPlanRequest& request, const UpdateRecordPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateRecordPlanRequest&;
    using Resp = UpdateRecordPlanResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateRecordPlan", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::UpdateRecordPlanOutcomeCallable IotvideoindustryClient::UpdateRecordPlanCallable(const UpdateRecordPlanRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateRecordPlanOutcome>>();
    UpdateRecordPlanAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const UpdateRecordPlanRequest&,
        UpdateRecordPlanOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoindustryClient::UpdateTimeTemplateOutcome IotvideoindustryClient::UpdateTimeTemplate(const UpdateTimeTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateTimeTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateTimeTemplateResponse rsp = UpdateTimeTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateTimeTemplateOutcome(rsp);
        else
            return UpdateTimeTemplateOutcome(o.GetError());
    }
    else
    {
        return UpdateTimeTemplateOutcome(outcome.GetError());
    }
}

void IotvideoindustryClient::UpdateTimeTemplateAsync(const UpdateTimeTemplateRequest& request, const UpdateTimeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateTimeTemplateRequest&;
    using Resp = UpdateTimeTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateTimeTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoindustryClient::UpdateTimeTemplateOutcomeCallable IotvideoindustryClient::UpdateTimeTemplateCallable(const UpdateTimeTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateTimeTemplateOutcome>>();
    UpdateTimeTemplateAsync(
    request,
    [prom](
        const IotvideoindustryClient*,
        const UpdateTimeTemplateRequest&,
        UpdateTimeTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


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

#include <tencentcloud/iss/v20230517/IssClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Iss::V20230517;
using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

namespace
{
    const string VERSION = "2023-05-17";
    const string ENDPOINT = "iss.tencentcloudapi.com";
}

IssClient::IssClient(const Credential &credential, const string &region) :
    IssClient(credential, region, ClientProfile())
{
}

IssClient::IssClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


IssClient::AddAITaskOutcome IssClient::AddAITask(const AddAITaskRequest &request)
{
    auto outcome = MakeRequest(request, "AddAITask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddAITaskResponse rsp = AddAITaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddAITaskOutcome(rsp);
        else
            return AddAITaskOutcome(o.GetError());
    }
    else
    {
        return AddAITaskOutcome(outcome.GetError());
    }
}

void IssClient::AddAITaskAsync(const AddAITaskRequest& request, const AddAITaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddAITaskRequest&;
    using Resp = AddAITaskResponse;

    DoRequestAsync<Req, Resp>(
        "AddAITask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::AddAITaskOutcomeCallable IssClient::AddAITaskCallable(const AddAITaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddAITaskOutcome>>();
    AddAITaskAsync(
    request,
    [prom](
        const IssClient*,
        const AddAITaskRequest&,
        AddAITaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::AddOrganizationOutcome IssClient::AddOrganization(const AddOrganizationRequest &request)
{
    auto outcome = MakeRequest(request, "AddOrganization");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddOrganizationResponse rsp = AddOrganizationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddOrganizationOutcome(rsp);
        else
            return AddOrganizationOutcome(o.GetError());
    }
    else
    {
        return AddOrganizationOutcome(outcome.GetError());
    }
}

void IssClient::AddOrganizationAsync(const AddOrganizationRequest& request, const AddOrganizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddOrganizationRequest&;
    using Resp = AddOrganizationResponse;

    DoRequestAsync<Req, Resp>(
        "AddOrganization", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::AddOrganizationOutcomeCallable IssClient::AddOrganizationCallable(const AddOrganizationRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddOrganizationOutcome>>();
    AddOrganizationAsync(
    request,
    [prom](
        const IssClient*,
        const AddOrganizationRequest&,
        AddOrganizationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::AddRecordBackupPlanOutcome IssClient::AddRecordBackupPlan(const AddRecordBackupPlanRequest &request)
{
    auto outcome = MakeRequest(request, "AddRecordBackupPlan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddRecordBackupPlanResponse rsp = AddRecordBackupPlanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddRecordBackupPlanOutcome(rsp);
        else
            return AddRecordBackupPlanOutcome(o.GetError());
    }
    else
    {
        return AddRecordBackupPlanOutcome(outcome.GetError());
    }
}

void IssClient::AddRecordBackupPlanAsync(const AddRecordBackupPlanRequest& request, const AddRecordBackupPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddRecordBackupPlanRequest&;
    using Resp = AddRecordBackupPlanResponse;

    DoRequestAsync<Req, Resp>(
        "AddRecordBackupPlan", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::AddRecordBackupPlanOutcomeCallable IssClient::AddRecordBackupPlanCallable(const AddRecordBackupPlanRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddRecordBackupPlanOutcome>>();
    AddRecordBackupPlanAsync(
    request,
    [prom](
        const IssClient*,
        const AddRecordBackupPlanRequest&,
        AddRecordBackupPlanOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::AddRecordBackupTemplateOutcome IssClient::AddRecordBackupTemplate(const AddRecordBackupTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "AddRecordBackupTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddRecordBackupTemplateResponse rsp = AddRecordBackupTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddRecordBackupTemplateOutcome(rsp);
        else
            return AddRecordBackupTemplateOutcome(o.GetError());
    }
    else
    {
        return AddRecordBackupTemplateOutcome(outcome.GetError());
    }
}

void IssClient::AddRecordBackupTemplateAsync(const AddRecordBackupTemplateRequest& request, const AddRecordBackupTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddRecordBackupTemplateRequest&;
    using Resp = AddRecordBackupTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "AddRecordBackupTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::AddRecordBackupTemplateOutcomeCallable IssClient::AddRecordBackupTemplateCallable(const AddRecordBackupTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddRecordBackupTemplateOutcome>>();
    AddRecordBackupTemplateAsync(
    request,
    [prom](
        const IssClient*,
        const AddRecordBackupTemplateRequest&,
        AddRecordBackupTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::AddRecordPlanOutcome IssClient::AddRecordPlan(const AddRecordPlanRequest &request)
{
    auto outcome = MakeRequest(request, "AddRecordPlan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddRecordPlanResponse rsp = AddRecordPlanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddRecordPlanOutcome(rsp);
        else
            return AddRecordPlanOutcome(o.GetError());
    }
    else
    {
        return AddRecordPlanOutcome(outcome.GetError());
    }
}

void IssClient::AddRecordPlanAsync(const AddRecordPlanRequest& request, const AddRecordPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddRecordPlanRequest&;
    using Resp = AddRecordPlanResponse;

    DoRequestAsync<Req, Resp>(
        "AddRecordPlan", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::AddRecordPlanOutcomeCallable IssClient::AddRecordPlanCallable(const AddRecordPlanRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddRecordPlanOutcome>>();
    AddRecordPlanAsync(
    request,
    [prom](
        const IssClient*,
        const AddRecordPlanRequest&,
        AddRecordPlanOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::AddRecordRetrieveTaskOutcome IssClient::AddRecordRetrieveTask(const AddRecordRetrieveTaskRequest &request)
{
    auto outcome = MakeRequest(request, "AddRecordRetrieveTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddRecordRetrieveTaskResponse rsp = AddRecordRetrieveTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddRecordRetrieveTaskOutcome(rsp);
        else
            return AddRecordRetrieveTaskOutcome(o.GetError());
    }
    else
    {
        return AddRecordRetrieveTaskOutcome(outcome.GetError());
    }
}

void IssClient::AddRecordRetrieveTaskAsync(const AddRecordRetrieveTaskRequest& request, const AddRecordRetrieveTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddRecordRetrieveTaskRequest&;
    using Resp = AddRecordRetrieveTaskResponse;

    DoRequestAsync<Req, Resp>(
        "AddRecordRetrieveTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::AddRecordRetrieveTaskOutcomeCallable IssClient::AddRecordRetrieveTaskCallable(const AddRecordRetrieveTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddRecordRetrieveTaskOutcome>>();
    AddRecordRetrieveTaskAsync(
    request,
    [prom](
        const IssClient*,
        const AddRecordRetrieveTaskRequest&,
        AddRecordRetrieveTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::AddRecordTemplateOutcome IssClient::AddRecordTemplate(const AddRecordTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "AddRecordTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddRecordTemplateResponse rsp = AddRecordTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddRecordTemplateOutcome(rsp);
        else
            return AddRecordTemplateOutcome(o.GetError());
    }
    else
    {
        return AddRecordTemplateOutcome(outcome.GetError());
    }
}

void IssClient::AddRecordTemplateAsync(const AddRecordTemplateRequest& request, const AddRecordTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddRecordTemplateRequest&;
    using Resp = AddRecordTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "AddRecordTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::AddRecordTemplateOutcomeCallable IssClient::AddRecordTemplateCallable(const AddRecordTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddRecordTemplateOutcome>>();
    AddRecordTemplateAsync(
    request,
    [prom](
        const IssClient*,
        const AddRecordTemplateRequest&,
        AddRecordTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::AddStreamAuthOutcome IssClient::AddStreamAuth(const AddStreamAuthRequest &request)
{
    auto outcome = MakeRequest(request, "AddStreamAuth");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddStreamAuthResponse rsp = AddStreamAuthResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddStreamAuthOutcome(rsp);
        else
            return AddStreamAuthOutcome(o.GetError());
    }
    else
    {
        return AddStreamAuthOutcome(outcome.GetError());
    }
}

void IssClient::AddStreamAuthAsync(const AddStreamAuthRequest& request, const AddStreamAuthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddStreamAuthRequest&;
    using Resp = AddStreamAuthResponse;

    DoRequestAsync<Req, Resp>(
        "AddStreamAuth", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::AddStreamAuthOutcomeCallable IssClient::AddStreamAuthCallable(const AddStreamAuthRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddStreamAuthOutcome>>();
    AddStreamAuthAsync(
    request,
    [prom](
        const IssClient*,
        const AddStreamAuthRequest&,
        AddStreamAuthOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::AddUserDeviceOutcome IssClient::AddUserDevice(const AddUserDeviceRequest &request)
{
    auto outcome = MakeRequest(request, "AddUserDevice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddUserDeviceResponse rsp = AddUserDeviceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddUserDeviceOutcome(rsp);
        else
            return AddUserDeviceOutcome(o.GetError());
    }
    else
    {
        return AddUserDeviceOutcome(outcome.GetError());
    }
}

void IssClient::AddUserDeviceAsync(const AddUserDeviceRequest& request, const AddUserDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddUserDeviceRequest&;
    using Resp = AddUserDeviceResponse;

    DoRequestAsync<Req, Resp>(
        "AddUserDevice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::AddUserDeviceOutcomeCallable IssClient::AddUserDeviceCallable(const AddUserDeviceRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddUserDeviceOutcome>>();
    AddUserDeviceAsync(
    request,
    [prom](
        const IssClient*,
        const AddUserDeviceRequest&,
        AddUserDeviceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::BatchDeleteVideoDownloadTaskOutcome IssClient::BatchDeleteVideoDownloadTask(const BatchDeleteVideoDownloadTaskRequest &request)
{
    auto outcome = MakeRequest(request, "BatchDeleteVideoDownloadTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchDeleteVideoDownloadTaskResponse rsp = BatchDeleteVideoDownloadTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchDeleteVideoDownloadTaskOutcome(rsp);
        else
            return BatchDeleteVideoDownloadTaskOutcome(o.GetError());
    }
    else
    {
        return BatchDeleteVideoDownloadTaskOutcome(outcome.GetError());
    }
}

void IssClient::BatchDeleteVideoDownloadTaskAsync(const BatchDeleteVideoDownloadTaskRequest& request, const BatchDeleteVideoDownloadTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BatchDeleteVideoDownloadTaskRequest&;
    using Resp = BatchDeleteVideoDownloadTaskResponse;

    DoRequestAsync<Req, Resp>(
        "BatchDeleteVideoDownloadTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::BatchDeleteVideoDownloadTaskOutcomeCallable IssClient::BatchDeleteVideoDownloadTaskCallable(const BatchDeleteVideoDownloadTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<BatchDeleteVideoDownloadTaskOutcome>>();
    BatchDeleteVideoDownloadTaskAsync(
    request,
    [prom](
        const IssClient*,
        const BatchDeleteVideoDownloadTaskRequest&,
        BatchDeleteVideoDownloadTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::BatchOperateDeviceOutcome IssClient::BatchOperateDevice(const BatchOperateDeviceRequest &request)
{
    auto outcome = MakeRequest(request, "BatchOperateDevice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchOperateDeviceResponse rsp = BatchOperateDeviceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchOperateDeviceOutcome(rsp);
        else
            return BatchOperateDeviceOutcome(o.GetError());
    }
    else
    {
        return BatchOperateDeviceOutcome(outcome.GetError());
    }
}

void IssClient::BatchOperateDeviceAsync(const BatchOperateDeviceRequest& request, const BatchOperateDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BatchOperateDeviceRequest&;
    using Resp = BatchOperateDeviceResponse;

    DoRequestAsync<Req, Resp>(
        "BatchOperateDevice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::BatchOperateDeviceOutcomeCallable IssClient::BatchOperateDeviceCallable(const BatchOperateDeviceRequest &request)
{
    const auto prom = std::make_shared<std::promise<BatchOperateDeviceOutcome>>();
    BatchOperateDeviceAsync(
    request,
    [prom](
        const IssClient*,
        const BatchOperateDeviceRequest&,
        BatchOperateDeviceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::CallISAPIOutcome IssClient::CallISAPI(const CallISAPIRequest &request)
{
    auto outcome = MakeRequest(request, "CallISAPI");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CallISAPIResponse rsp = CallISAPIResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CallISAPIOutcome(rsp);
        else
            return CallISAPIOutcome(o.GetError());
    }
    else
    {
        return CallISAPIOutcome(outcome.GetError());
    }
}

void IssClient::CallISAPIAsync(const CallISAPIRequest& request, const CallISAPIAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CallISAPIRequest&;
    using Resp = CallISAPIResponse;

    DoRequestAsync<Req, Resp>(
        "CallISAPI", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::CallISAPIOutcomeCallable IssClient::CallISAPICallable(const CallISAPIRequest &request)
{
    const auto prom = std::make_shared<std::promise<CallISAPIOutcome>>();
    CallISAPIAsync(
    request,
    [prom](
        const IssClient*,
        const CallISAPIRequest&,
        CallISAPIOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::ControlDevicePTZOutcome IssClient::ControlDevicePTZ(const ControlDevicePTZRequest &request)
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

void IssClient::ControlDevicePTZAsync(const ControlDevicePTZRequest& request, const ControlDevicePTZAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

IssClient::ControlDevicePTZOutcomeCallable IssClient::ControlDevicePTZCallable(const ControlDevicePTZRequest &request)
{
    const auto prom = std::make_shared<std::promise<ControlDevicePTZOutcome>>();
    ControlDevicePTZAsync(
    request,
    [prom](
        const IssClient*,
        const ControlDevicePTZRequest&,
        ControlDevicePTZOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::ControlDevicePresetOutcome IssClient::ControlDevicePreset(const ControlDevicePresetRequest &request)
{
    auto outcome = MakeRequest(request, "ControlDevicePreset");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ControlDevicePresetResponse rsp = ControlDevicePresetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ControlDevicePresetOutcome(rsp);
        else
            return ControlDevicePresetOutcome(o.GetError());
    }
    else
    {
        return ControlDevicePresetOutcome(outcome.GetError());
    }
}

void IssClient::ControlDevicePresetAsync(const ControlDevicePresetRequest& request, const ControlDevicePresetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ControlDevicePresetRequest&;
    using Resp = ControlDevicePresetResponse;

    DoRequestAsync<Req, Resp>(
        "ControlDevicePreset", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::ControlDevicePresetOutcomeCallable IssClient::ControlDevicePresetCallable(const ControlDevicePresetRequest &request)
{
    const auto prom = std::make_shared<std::promise<ControlDevicePresetOutcome>>();
    ControlDevicePresetAsync(
    request,
    [prom](
        const IssClient*,
        const ControlDevicePresetRequest&,
        ControlDevicePresetOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::ControlDeviceSnapshotOutcome IssClient::ControlDeviceSnapshot(const ControlDeviceSnapshotRequest &request)
{
    auto outcome = MakeRequest(request, "ControlDeviceSnapshot");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ControlDeviceSnapshotResponse rsp = ControlDeviceSnapshotResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ControlDeviceSnapshotOutcome(rsp);
        else
            return ControlDeviceSnapshotOutcome(o.GetError());
    }
    else
    {
        return ControlDeviceSnapshotOutcome(outcome.GetError());
    }
}

void IssClient::ControlDeviceSnapshotAsync(const ControlDeviceSnapshotRequest& request, const ControlDeviceSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ControlDeviceSnapshotRequest&;
    using Resp = ControlDeviceSnapshotResponse;

    DoRequestAsync<Req, Resp>(
        "ControlDeviceSnapshot", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::ControlDeviceSnapshotOutcomeCallable IssClient::ControlDeviceSnapshotCallable(const ControlDeviceSnapshotRequest &request)
{
    const auto prom = std::make_shared<std::promise<ControlDeviceSnapshotOutcome>>();
    ControlDeviceSnapshotAsync(
    request,
    [prom](
        const IssClient*,
        const ControlDeviceSnapshotRequest&,
        ControlDeviceSnapshotOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::ControlDeviceStreamOutcome IssClient::ControlDeviceStream(const ControlDeviceStreamRequest &request)
{
    auto outcome = MakeRequest(request, "ControlDeviceStream");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ControlDeviceStreamResponse rsp = ControlDeviceStreamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ControlDeviceStreamOutcome(rsp);
        else
            return ControlDeviceStreamOutcome(o.GetError());
    }
    else
    {
        return ControlDeviceStreamOutcome(outcome.GetError());
    }
}

void IssClient::ControlDeviceStreamAsync(const ControlDeviceStreamRequest& request, const ControlDeviceStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ControlDeviceStreamRequest&;
    using Resp = ControlDeviceStreamResponse;

    DoRequestAsync<Req, Resp>(
        "ControlDeviceStream", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::ControlDeviceStreamOutcomeCallable IssClient::ControlDeviceStreamCallable(const ControlDeviceStreamRequest &request)
{
    const auto prom = std::make_shared<std::promise<ControlDeviceStreamOutcome>>();
    ControlDeviceStreamAsync(
    request,
    [prom](
        const IssClient*,
        const ControlDeviceStreamRequest&,
        ControlDeviceStreamOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::ControlRecordOutcome IssClient::ControlRecord(const ControlRecordRequest &request)
{
    auto outcome = MakeRequest(request, "ControlRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ControlRecordResponse rsp = ControlRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ControlRecordOutcome(rsp);
        else
            return ControlRecordOutcome(o.GetError());
    }
    else
    {
        return ControlRecordOutcome(outcome.GetError());
    }
}

void IssClient::ControlRecordAsync(const ControlRecordRequest& request, const ControlRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ControlRecordRequest&;
    using Resp = ControlRecordResponse;

    DoRequestAsync<Req, Resp>(
        "ControlRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::ControlRecordOutcomeCallable IssClient::ControlRecordCallable(const ControlRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<ControlRecordOutcome>>();
    ControlRecordAsync(
    request,
    [prom](
        const IssClient*,
        const ControlRecordRequest&,
        ControlRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::ControlRecordTimelineOutcome IssClient::ControlRecordTimeline(const ControlRecordTimelineRequest &request)
{
    auto outcome = MakeRequest(request, "ControlRecordTimeline");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ControlRecordTimelineResponse rsp = ControlRecordTimelineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ControlRecordTimelineOutcome(rsp);
        else
            return ControlRecordTimelineOutcome(o.GetError());
    }
    else
    {
        return ControlRecordTimelineOutcome(outcome.GetError());
    }
}

void IssClient::ControlRecordTimelineAsync(const ControlRecordTimelineRequest& request, const ControlRecordTimelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ControlRecordTimelineRequest&;
    using Resp = ControlRecordTimelineResponse;

    DoRequestAsync<Req, Resp>(
        "ControlRecordTimeline", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::ControlRecordTimelineOutcomeCallable IssClient::ControlRecordTimelineCallable(const ControlRecordTimelineRequest &request)
{
    const auto prom = std::make_shared<std::promise<ControlRecordTimelineOutcome>>();
    ControlRecordTimelineAsync(
    request,
    [prom](
        const IssClient*,
        const ControlRecordTimelineRequest&,
        ControlRecordTimelineOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::CreateVideoDownloadTaskOutcome IssClient::CreateVideoDownloadTask(const CreateVideoDownloadTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateVideoDownloadTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateVideoDownloadTaskResponse rsp = CreateVideoDownloadTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateVideoDownloadTaskOutcome(rsp);
        else
            return CreateVideoDownloadTaskOutcome(o.GetError());
    }
    else
    {
        return CreateVideoDownloadTaskOutcome(outcome.GetError());
    }
}

void IssClient::CreateVideoDownloadTaskAsync(const CreateVideoDownloadTaskRequest& request, const CreateVideoDownloadTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateVideoDownloadTaskRequest&;
    using Resp = CreateVideoDownloadTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateVideoDownloadTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::CreateVideoDownloadTaskOutcomeCallable IssClient::CreateVideoDownloadTaskCallable(const CreateVideoDownloadTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateVideoDownloadTaskOutcome>>();
    CreateVideoDownloadTaskAsync(
    request,
    [prom](
        const IssClient*,
        const CreateVideoDownloadTaskRequest&,
        CreateVideoDownloadTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::DeleteAITaskOutcome IssClient::DeleteAITask(const DeleteAITaskRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAITask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAITaskResponse rsp = DeleteAITaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAITaskOutcome(rsp);
        else
            return DeleteAITaskOutcome(o.GetError());
    }
    else
    {
        return DeleteAITaskOutcome(outcome.GetError());
    }
}

void IssClient::DeleteAITaskAsync(const DeleteAITaskRequest& request, const DeleteAITaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAITaskRequest&;
    using Resp = DeleteAITaskResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAITask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::DeleteAITaskOutcomeCallable IssClient::DeleteAITaskCallable(const DeleteAITaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAITaskOutcome>>();
    DeleteAITaskAsync(
    request,
    [prom](
        const IssClient*,
        const DeleteAITaskRequest&,
        DeleteAITaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::DeleteDomainOutcome IssClient::DeleteDomain(const DeleteDomainRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDomainResponse rsp = DeleteDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDomainOutcome(rsp);
        else
            return DeleteDomainOutcome(o.GetError());
    }
    else
    {
        return DeleteDomainOutcome(outcome.GetError());
    }
}

void IssClient::DeleteDomainAsync(const DeleteDomainRequest& request, const DeleteDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDomainRequest&;
    using Resp = DeleteDomainResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDomain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::DeleteDomainOutcomeCallable IssClient::DeleteDomainCallable(const DeleteDomainRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDomainOutcome>>();
    DeleteDomainAsync(
    request,
    [prom](
        const IssClient*,
        const DeleteDomainRequest&,
        DeleteDomainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::DeleteGatewayOutcome IssClient::DeleteGateway(const DeleteGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteGatewayResponse rsp = DeleteGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteGatewayOutcome(rsp);
        else
            return DeleteGatewayOutcome(o.GetError());
    }
    else
    {
        return DeleteGatewayOutcome(outcome.GetError());
    }
}

void IssClient::DeleteGatewayAsync(const DeleteGatewayRequest& request, const DeleteGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteGatewayRequest&;
    using Resp = DeleteGatewayResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteGateway", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::DeleteGatewayOutcomeCallable IssClient::DeleteGatewayCallable(const DeleteGatewayRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteGatewayOutcome>>();
    DeleteGatewayAsync(
    request,
    [prom](
        const IssClient*,
        const DeleteGatewayRequest&,
        DeleteGatewayOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::DeleteOrganizationOutcome IssClient::DeleteOrganization(const DeleteOrganizationRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteOrganization");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteOrganizationResponse rsp = DeleteOrganizationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteOrganizationOutcome(rsp);
        else
            return DeleteOrganizationOutcome(o.GetError());
    }
    else
    {
        return DeleteOrganizationOutcome(outcome.GetError());
    }
}

void IssClient::DeleteOrganizationAsync(const DeleteOrganizationRequest& request, const DeleteOrganizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteOrganizationRequest&;
    using Resp = DeleteOrganizationResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteOrganization", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::DeleteOrganizationOutcomeCallable IssClient::DeleteOrganizationCallable(const DeleteOrganizationRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteOrganizationOutcome>>();
    DeleteOrganizationAsync(
    request,
    [prom](
        const IssClient*,
        const DeleteOrganizationRequest&,
        DeleteOrganizationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::DeleteRecordBackupPlanOutcome IssClient::DeleteRecordBackupPlan(const DeleteRecordBackupPlanRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRecordBackupPlan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRecordBackupPlanResponse rsp = DeleteRecordBackupPlanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRecordBackupPlanOutcome(rsp);
        else
            return DeleteRecordBackupPlanOutcome(o.GetError());
    }
    else
    {
        return DeleteRecordBackupPlanOutcome(outcome.GetError());
    }
}

void IssClient::DeleteRecordBackupPlanAsync(const DeleteRecordBackupPlanRequest& request, const DeleteRecordBackupPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteRecordBackupPlanRequest&;
    using Resp = DeleteRecordBackupPlanResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRecordBackupPlan", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::DeleteRecordBackupPlanOutcomeCallable IssClient::DeleteRecordBackupPlanCallable(const DeleteRecordBackupPlanRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRecordBackupPlanOutcome>>();
    DeleteRecordBackupPlanAsync(
    request,
    [prom](
        const IssClient*,
        const DeleteRecordBackupPlanRequest&,
        DeleteRecordBackupPlanOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::DeleteRecordBackupTemplateOutcome IssClient::DeleteRecordBackupTemplate(const DeleteRecordBackupTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRecordBackupTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRecordBackupTemplateResponse rsp = DeleteRecordBackupTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRecordBackupTemplateOutcome(rsp);
        else
            return DeleteRecordBackupTemplateOutcome(o.GetError());
    }
    else
    {
        return DeleteRecordBackupTemplateOutcome(outcome.GetError());
    }
}

void IssClient::DeleteRecordBackupTemplateAsync(const DeleteRecordBackupTemplateRequest& request, const DeleteRecordBackupTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteRecordBackupTemplateRequest&;
    using Resp = DeleteRecordBackupTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRecordBackupTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::DeleteRecordBackupTemplateOutcomeCallable IssClient::DeleteRecordBackupTemplateCallable(const DeleteRecordBackupTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRecordBackupTemplateOutcome>>();
    DeleteRecordBackupTemplateAsync(
    request,
    [prom](
        const IssClient*,
        const DeleteRecordBackupTemplateRequest&,
        DeleteRecordBackupTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::DeleteRecordPlanOutcome IssClient::DeleteRecordPlan(const DeleteRecordPlanRequest &request)
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

void IssClient::DeleteRecordPlanAsync(const DeleteRecordPlanRequest& request, const DeleteRecordPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

IssClient::DeleteRecordPlanOutcomeCallable IssClient::DeleteRecordPlanCallable(const DeleteRecordPlanRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRecordPlanOutcome>>();
    DeleteRecordPlanAsync(
    request,
    [prom](
        const IssClient*,
        const DeleteRecordPlanRequest&,
        DeleteRecordPlanOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::DeleteRecordRetrieveTaskOutcome IssClient::DeleteRecordRetrieveTask(const DeleteRecordRetrieveTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRecordRetrieveTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRecordRetrieveTaskResponse rsp = DeleteRecordRetrieveTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRecordRetrieveTaskOutcome(rsp);
        else
            return DeleteRecordRetrieveTaskOutcome(o.GetError());
    }
    else
    {
        return DeleteRecordRetrieveTaskOutcome(outcome.GetError());
    }
}

void IssClient::DeleteRecordRetrieveTaskAsync(const DeleteRecordRetrieveTaskRequest& request, const DeleteRecordRetrieveTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteRecordRetrieveTaskRequest&;
    using Resp = DeleteRecordRetrieveTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRecordRetrieveTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::DeleteRecordRetrieveTaskOutcomeCallable IssClient::DeleteRecordRetrieveTaskCallable(const DeleteRecordRetrieveTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRecordRetrieveTaskOutcome>>();
    DeleteRecordRetrieveTaskAsync(
    request,
    [prom](
        const IssClient*,
        const DeleteRecordRetrieveTaskRequest&,
        DeleteRecordRetrieveTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::DeleteRecordTemplateOutcome IssClient::DeleteRecordTemplate(const DeleteRecordTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRecordTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRecordTemplateResponse rsp = DeleteRecordTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRecordTemplateOutcome(rsp);
        else
            return DeleteRecordTemplateOutcome(o.GetError());
    }
    else
    {
        return DeleteRecordTemplateOutcome(outcome.GetError());
    }
}

void IssClient::DeleteRecordTemplateAsync(const DeleteRecordTemplateRequest& request, const DeleteRecordTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteRecordTemplateRequest&;
    using Resp = DeleteRecordTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRecordTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::DeleteRecordTemplateOutcomeCallable IssClient::DeleteRecordTemplateCallable(const DeleteRecordTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRecordTemplateOutcome>>();
    DeleteRecordTemplateAsync(
    request,
    [prom](
        const IssClient*,
        const DeleteRecordTemplateRequest&,
        DeleteRecordTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::DeleteTaskOutcome IssClient::DeleteTask(const DeleteTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTaskResponse rsp = DeleteTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTaskOutcome(rsp);
        else
            return DeleteTaskOutcome(o.GetError());
    }
    else
    {
        return DeleteTaskOutcome(outcome.GetError());
    }
}

void IssClient::DeleteTaskAsync(const DeleteTaskRequest& request, const DeleteTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteTaskRequest&;
    using Resp = DeleteTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::DeleteTaskOutcomeCallable IssClient::DeleteTaskCallable(const DeleteTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteTaskOutcome>>();
    DeleteTaskAsync(
    request,
    [prom](
        const IssClient*,
        const DeleteTaskRequest&,
        DeleteTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::DeleteUserDeviceOutcome IssClient::DeleteUserDevice(const DeleteUserDeviceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteUserDevice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteUserDeviceResponse rsp = DeleteUserDeviceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteUserDeviceOutcome(rsp);
        else
            return DeleteUserDeviceOutcome(o.GetError());
    }
    else
    {
        return DeleteUserDeviceOutcome(outcome.GetError());
    }
}

void IssClient::DeleteUserDeviceAsync(const DeleteUserDeviceRequest& request, const DeleteUserDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteUserDeviceRequest&;
    using Resp = DeleteUserDeviceResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteUserDevice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::DeleteUserDeviceOutcomeCallable IssClient::DeleteUserDeviceCallable(const DeleteUserDeviceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteUserDeviceOutcome>>();
    DeleteUserDeviceAsync(
    request,
    [prom](
        const IssClient*,
        const DeleteUserDeviceRequest&,
        DeleteUserDeviceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::DescribeAITaskOutcome IssClient::DescribeAITask(const DescribeAITaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAITask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAITaskResponse rsp = DescribeAITaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAITaskOutcome(rsp);
        else
            return DescribeAITaskOutcome(o.GetError());
    }
    else
    {
        return DescribeAITaskOutcome(outcome.GetError());
    }
}

void IssClient::DescribeAITaskAsync(const DescribeAITaskRequest& request, const DescribeAITaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAITaskRequest&;
    using Resp = DescribeAITaskResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAITask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::DescribeAITaskOutcomeCallable IssClient::DescribeAITaskCallable(const DescribeAITaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAITaskOutcome>>();
    DescribeAITaskAsync(
    request,
    [prom](
        const IssClient*,
        const DescribeAITaskRequest&,
        DescribeAITaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::DescribeAITaskResultOutcome IssClient::DescribeAITaskResult(const DescribeAITaskResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAITaskResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAITaskResultResponse rsp = DescribeAITaskResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAITaskResultOutcome(rsp);
        else
            return DescribeAITaskResultOutcome(o.GetError());
    }
    else
    {
        return DescribeAITaskResultOutcome(outcome.GetError());
    }
}

void IssClient::DescribeAITaskResultAsync(const DescribeAITaskResultRequest& request, const DescribeAITaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAITaskResultRequest&;
    using Resp = DescribeAITaskResultResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAITaskResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::DescribeAITaskResultOutcomeCallable IssClient::DescribeAITaskResultCallable(const DescribeAITaskResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAITaskResultOutcome>>();
    DescribeAITaskResultAsync(
    request,
    [prom](
        const IssClient*,
        const DescribeAITaskResultRequest&,
        DescribeAITaskResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::DescribeCNAMEOutcome IssClient::DescribeCNAME(const DescribeCNAMERequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCNAME");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCNAMEResponse rsp = DescribeCNAMEResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCNAMEOutcome(rsp);
        else
            return DescribeCNAMEOutcome(o.GetError());
    }
    else
    {
        return DescribeCNAMEOutcome(outcome.GetError());
    }
}

void IssClient::DescribeCNAMEAsync(const DescribeCNAMERequest& request, const DescribeCNAMEAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCNAMERequest&;
    using Resp = DescribeCNAMEResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCNAME", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::DescribeCNAMEOutcomeCallable IssClient::DescribeCNAMECallable(const DescribeCNAMERequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCNAMEOutcome>>();
    DescribeCNAMEAsync(
    request,
    [prom](
        const IssClient*,
        const DescribeCNAMERequest&,
        DescribeCNAMEOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::DescribeDeviceChannelOutcome IssClient::DescribeDeviceChannel(const DescribeDeviceChannelRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeviceChannel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceChannelResponse rsp = DescribeDeviceChannelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceChannelOutcome(rsp);
        else
            return DescribeDeviceChannelOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceChannelOutcome(outcome.GetError());
    }
}

void IssClient::DescribeDeviceChannelAsync(const DescribeDeviceChannelRequest& request, const DescribeDeviceChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDeviceChannelRequest&;
    using Resp = DescribeDeviceChannelResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDeviceChannel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::DescribeDeviceChannelOutcomeCallable IssClient::DescribeDeviceChannelCallable(const DescribeDeviceChannelRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDeviceChannelOutcome>>();
    DescribeDeviceChannelAsync(
    request,
    [prom](
        const IssClient*,
        const DescribeDeviceChannelRequest&,
        DescribeDeviceChannelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::DescribeDevicePresetOutcome IssClient::DescribeDevicePreset(const DescribeDevicePresetRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDevicePreset");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDevicePresetResponse rsp = DescribeDevicePresetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDevicePresetOutcome(rsp);
        else
            return DescribeDevicePresetOutcome(o.GetError());
    }
    else
    {
        return DescribeDevicePresetOutcome(outcome.GetError());
    }
}

void IssClient::DescribeDevicePresetAsync(const DescribeDevicePresetRequest& request, const DescribeDevicePresetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDevicePresetRequest&;
    using Resp = DescribeDevicePresetResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDevicePreset", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::DescribeDevicePresetOutcomeCallable IssClient::DescribeDevicePresetCallable(const DescribeDevicePresetRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDevicePresetOutcome>>();
    DescribeDevicePresetAsync(
    request,
    [prom](
        const IssClient*,
        const DescribeDevicePresetRequest&,
        DescribeDevicePresetOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::DescribeDeviceRegionOutcome IssClient::DescribeDeviceRegion(const DescribeDeviceRegionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeviceRegion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceRegionResponse rsp = DescribeDeviceRegionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceRegionOutcome(rsp);
        else
            return DescribeDeviceRegionOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceRegionOutcome(outcome.GetError());
    }
}

void IssClient::DescribeDeviceRegionAsync(const DescribeDeviceRegionRequest& request, const DescribeDeviceRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDeviceRegionRequest&;
    using Resp = DescribeDeviceRegionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDeviceRegion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::DescribeDeviceRegionOutcomeCallable IssClient::DescribeDeviceRegionCallable(const DescribeDeviceRegionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDeviceRegionOutcome>>();
    DescribeDeviceRegionAsync(
    request,
    [prom](
        const IssClient*,
        const DescribeDeviceRegionRequest&,
        DescribeDeviceRegionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::DescribeDomainOutcome IssClient::DescribeDomain(const DescribeDomainRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainResponse rsp = DescribeDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainOutcome(rsp);
        else
            return DescribeDomainOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainOutcome(outcome.GetError());
    }
}

void IssClient::DescribeDomainAsync(const DescribeDomainRequest& request, const DescribeDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDomainRequest&;
    using Resp = DescribeDomainResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDomain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::DescribeDomainOutcomeCallable IssClient::DescribeDomainCallable(const DescribeDomainRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDomainOutcome>>();
    DescribeDomainAsync(
    request,
    [prom](
        const IssClient*,
        const DescribeDomainRequest&,
        DescribeDomainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::DescribeDomainRegionOutcome IssClient::DescribeDomainRegion(const DescribeDomainRegionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomainRegion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainRegionResponse rsp = DescribeDomainRegionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainRegionOutcome(rsp);
        else
            return DescribeDomainRegionOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainRegionOutcome(outcome.GetError());
    }
}

void IssClient::DescribeDomainRegionAsync(const DescribeDomainRegionRequest& request, const DescribeDomainRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDomainRegionRequest&;
    using Resp = DescribeDomainRegionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDomainRegion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::DescribeDomainRegionOutcomeCallable IssClient::DescribeDomainRegionCallable(const DescribeDomainRegionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDomainRegionOutcome>>();
    DescribeDomainRegionAsync(
    request,
    [prom](
        const IssClient*,
        const DescribeDomainRegionRequest&,
        DescribeDomainRegionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::DescribeGBDeviceAddrOutcome IssClient::DescribeGBDeviceAddr(const DescribeGBDeviceAddrRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGBDeviceAddr");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGBDeviceAddrResponse rsp = DescribeGBDeviceAddrResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGBDeviceAddrOutcome(rsp);
        else
            return DescribeGBDeviceAddrOutcome(o.GetError());
    }
    else
    {
        return DescribeGBDeviceAddrOutcome(outcome.GetError());
    }
}

void IssClient::DescribeGBDeviceAddrAsync(const DescribeGBDeviceAddrRequest& request, const DescribeGBDeviceAddrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeGBDeviceAddrRequest&;
    using Resp = DescribeGBDeviceAddrResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGBDeviceAddr", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::DescribeGBDeviceAddrOutcomeCallable IssClient::DescribeGBDeviceAddrCallable(const DescribeGBDeviceAddrRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGBDeviceAddrOutcome>>();
    DescribeGBDeviceAddrAsync(
    request,
    [prom](
        const IssClient*,
        const DescribeGBDeviceAddrRequest&,
        DescribeGBDeviceAddrOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::DescribeGatewayOutcome IssClient::DescribeGateway(const DescribeGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGatewayResponse rsp = DescribeGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGatewayOutcome(rsp);
        else
            return DescribeGatewayOutcome(o.GetError());
    }
    else
    {
        return DescribeGatewayOutcome(outcome.GetError());
    }
}

void IssClient::DescribeGatewayAsync(const DescribeGatewayRequest& request, const DescribeGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeGatewayRequest&;
    using Resp = DescribeGatewayResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGateway", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::DescribeGatewayOutcomeCallable IssClient::DescribeGatewayCallable(const DescribeGatewayRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGatewayOutcome>>();
    DescribeGatewayAsync(
    request,
    [prom](
        const IssClient*,
        const DescribeGatewayRequest&,
        DescribeGatewayOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::DescribeGatewayMonitorOutcome IssClient::DescribeGatewayMonitor(const DescribeGatewayMonitorRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGatewayMonitor");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGatewayMonitorResponse rsp = DescribeGatewayMonitorResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGatewayMonitorOutcome(rsp);
        else
            return DescribeGatewayMonitorOutcome(o.GetError());
    }
    else
    {
        return DescribeGatewayMonitorOutcome(outcome.GetError());
    }
}

void IssClient::DescribeGatewayMonitorAsync(const DescribeGatewayMonitorRequest& request, const DescribeGatewayMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeGatewayMonitorRequest&;
    using Resp = DescribeGatewayMonitorResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGatewayMonitor", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::DescribeGatewayMonitorOutcomeCallable IssClient::DescribeGatewayMonitorCallable(const DescribeGatewayMonitorRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGatewayMonitorOutcome>>();
    DescribeGatewayMonitorAsync(
    request,
    [prom](
        const IssClient*,
        const DescribeGatewayMonitorRequest&,
        DescribeGatewayMonitorOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::DescribeGatewayProtocolOutcome IssClient::DescribeGatewayProtocol(const DescribeGatewayProtocolRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGatewayProtocol");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGatewayProtocolResponse rsp = DescribeGatewayProtocolResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGatewayProtocolOutcome(rsp);
        else
            return DescribeGatewayProtocolOutcome(o.GetError());
    }
    else
    {
        return DescribeGatewayProtocolOutcome(outcome.GetError());
    }
}

void IssClient::DescribeGatewayProtocolAsync(const DescribeGatewayProtocolRequest& request, const DescribeGatewayProtocolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeGatewayProtocolRequest&;
    using Resp = DescribeGatewayProtocolResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGatewayProtocol", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::DescribeGatewayProtocolOutcomeCallable IssClient::DescribeGatewayProtocolCallable(const DescribeGatewayProtocolRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGatewayProtocolOutcome>>();
    DescribeGatewayProtocolAsync(
    request,
    [prom](
        const IssClient*,
        const DescribeGatewayProtocolRequest&,
        DescribeGatewayProtocolOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::DescribeGatewayVersionOutcome IssClient::DescribeGatewayVersion(const DescribeGatewayVersionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGatewayVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGatewayVersionResponse rsp = DescribeGatewayVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGatewayVersionOutcome(rsp);
        else
            return DescribeGatewayVersionOutcome(o.GetError());
    }
    else
    {
        return DescribeGatewayVersionOutcome(outcome.GetError());
    }
}

void IssClient::DescribeGatewayVersionAsync(const DescribeGatewayVersionRequest& request, const DescribeGatewayVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeGatewayVersionRequest&;
    using Resp = DescribeGatewayVersionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGatewayVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::DescribeGatewayVersionOutcomeCallable IssClient::DescribeGatewayVersionCallable(const DescribeGatewayVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGatewayVersionOutcome>>();
    DescribeGatewayVersionAsync(
    request,
    [prom](
        const IssClient*,
        const DescribeGatewayVersionRequest&,
        DescribeGatewayVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::DescribeOrganizationOutcome IssClient::DescribeOrganization(const DescribeOrganizationRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOrganization");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOrganizationResponse rsp = DescribeOrganizationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOrganizationOutcome(rsp);
        else
            return DescribeOrganizationOutcome(o.GetError());
    }
    else
    {
        return DescribeOrganizationOutcome(outcome.GetError());
    }
}

void IssClient::DescribeOrganizationAsync(const DescribeOrganizationRequest& request, const DescribeOrganizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeOrganizationRequest&;
    using Resp = DescribeOrganizationResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeOrganization", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::DescribeOrganizationOutcomeCallable IssClient::DescribeOrganizationCallable(const DescribeOrganizationRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOrganizationOutcome>>();
    DescribeOrganizationAsync(
    request,
    [prom](
        const IssClient*,
        const DescribeOrganizationRequest&,
        DescribeOrganizationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::DescribeRecordBackupPlanOutcome IssClient::DescribeRecordBackupPlan(const DescribeRecordBackupPlanRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRecordBackupPlan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRecordBackupPlanResponse rsp = DescribeRecordBackupPlanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRecordBackupPlanOutcome(rsp);
        else
            return DescribeRecordBackupPlanOutcome(o.GetError());
    }
    else
    {
        return DescribeRecordBackupPlanOutcome(outcome.GetError());
    }
}

void IssClient::DescribeRecordBackupPlanAsync(const DescribeRecordBackupPlanRequest& request, const DescribeRecordBackupPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRecordBackupPlanRequest&;
    using Resp = DescribeRecordBackupPlanResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRecordBackupPlan", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::DescribeRecordBackupPlanOutcomeCallable IssClient::DescribeRecordBackupPlanCallable(const DescribeRecordBackupPlanRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRecordBackupPlanOutcome>>();
    DescribeRecordBackupPlanAsync(
    request,
    [prom](
        const IssClient*,
        const DescribeRecordBackupPlanRequest&,
        DescribeRecordBackupPlanOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::DescribeRecordBackupTemplateOutcome IssClient::DescribeRecordBackupTemplate(const DescribeRecordBackupTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRecordBackupTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRecordBackupTemplateResponse rsp = DescribeRecordBackupTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRecordBackupTemplateOutcome(rsp);
        else
            return DescribeRecordBackupTemplateOutcome(o.GetError());
    }
    else
    {
        return DescribeRecordBackupTemplateOutcome(outcome.GetError());
    }
}

void IssClient::DescribeRecordBackupTemplateAsync(const DescribeRecordBackupTemplateRequest& request, const DescribeRecordBackupTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRecordBackupTemplateRequest&;
    using Resp = DescribeRecordBackupTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRecordBackupTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::DescribeRecordBackupTemplateOutcomeCallable IssClient::DescribeRecordBackupTemplateCallable(const DescribeRecordBackupTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRecordBackupTemplateOutcome>>();
    DescribeRecordBackupTemplateAsync(
    request,
    [prom](
        const IssClient*,
        const DescribeRecordBackupTemplateRequest&,
        DescribeRecordBackupTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::DescribeRecordFileOutcome IssClient::DescribeRecordFile(const DescribeRecordFileRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRecordFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRecordFileResponse rsp = DescribeRecordFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRecordFileOutcome(rsp);
        else
            return DescribeRecordFileOutcome(o.GetError());
    }
    else
    {
        return DescribeRecordFileOutcome(outcome.GetError());
    }
}

void IssClient::DescribeRecordFileAsync(const DescribeRecordFileRequest& request, const DescribeRecordFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRecordFileRequest&;
    using Resp = DescribeRecordFileResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRecordFile", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::DescribeRecordFileOutcomeCallable IssClient::DescribeRecordFileCallable(const DescribeRecordFileRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRecordFileOutcome>>();
    DescribeRecordFileAsync(
    request,
    [prom](
        const IssClient*,
        const DescribeRecordFileRequest&,
        DescribeRecordFileOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::DescribeRecordPlanOutcome IssClient::DescribeRecordPlan(const DescribeRecordPlanRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRecordPlan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRecordPlanResponse rsp = DescribeRecordPlanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRecordPlanOutcome(rsp);
        else
            return DescribeRecordPlanOutcome(o.GetError());
    }
    else
    {
        return DescribeRecordPlanOutcome(outcome.GetError());
    }
}

void IssClient::DescribeRecordPlanAsync(const DescribeRecordPlanRequest& request, const DescribeRecordPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRecordPlanRequest&;
    using Resp = DescribeRecordPlanResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRecordPlan", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::DescribeRecordPlanOutcomeCallable IssClient::DescribeRecordPlanCallable(const DescribeRecordPlanRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRecordPlanOutcome>>();
    DescribeRecordPlanAsync(
    request,
    [prom](
        const IssClient*,
        const DescribeRecordPlanRequest&,
        DescribeRecordPlanOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::DescribeRecordPlaybackUrlOutcome IssClient::DescribeRecordPlaybackUrl(const DescribeRecordPlaybackUrlRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRecordPlaybackUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRecordPlaybackUrlResponse rsp = DescribeRecordPlaybackUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRecordPlaybackUrlOutcome(rsp);
        else
            return DescribeRecordPlaybackUrlOutcome(o.GetError());
    }
    else
    {
        return DescribeRecordPlaybackUrlOutcome(outcome.GetError());
    }
}

void IssClient::DescribeRecordPlaybackUrlAsync(const DescribeRecordPlaybackUrlRequest& request, const DescribeRecordPlaybackUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRecordPlaybackUrlRequest&;
    using Resp = DescribeRecordPlaybackUrlResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRecordPlaybackUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::DescribeRecordPlaybackUrlOutcomeCallable IssClient::DescribeRecordPlaybackUrlCallable(const DescribeRecordPlaybackUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRecordPlaybackUrlOutcome>>();
    DescribeRecordPlaybackUrlAsync(
    request,
    [prom](
        const IssClient*,
        const DescribeRecordPlaybackUrlRequest&,
        DescribeRecordPlaybackUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::DescribeRecordRetrieveTaskOutcome IssClient::DescribeRecordRetrieveTask(const DescribeRecordRetrieveTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRecordRetrieveTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRecordRetrieveTaskResponse rsp = DescribeRecordRetrieveTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRecordRetrieveTaskOutcome(rsp);
        else
            return DescribeRecordRetrieveTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeRecordRetrieveTaskOutcome(outcome.GetError());
    }
}

void IssClient::DescribeRecordRetrieveTaskAsync(const DescribeRecordRetrieveTaskRequest& request, const DescribeRecordRetrieveTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRecordRetrieveTaskRequest&;
    using Resp = DescribeRecordRetrieveTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRecordRetrieveTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::DescribeRecordRetrieveTaskOutcomeCallable IssClient::DescribeRecordRetrieveTaskCallable(const DescribeRecordRetrieveTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRecordRetrieveTaskOutcome>>();
    DescribeRecordRetrieveTaskAsync(
    request,
    [prom](
        const IssClient*,
        const DescribeRecordRetrieveTaskRequest&,
        DescribeRecordRetrieveTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::DescribeRecordSliceOutcome IssClient::DescribeRecordSlice(const DescribeRecordSliceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRecordSlice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRecordSliceResponse rsp = DescribeRecordSliceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRecordSliceOutcome(rsp);
        else
            return DescribeRecordSliceOutcome(o.GetError());
    }
    else
    {
        return DescribeRecordSliceOutcome(outcome.GetError());
    }
}

void IssClient::DescribeRecordSliceAsync(const DescribeRecordSliceRequest& request, const DescribeRecordSliceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRecordSliceRequest&;
    using Resp = DescribeRecordSliceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRecordSlice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::DescribeRecordSliceOutcomeCallable IssClient::DescribeRecordSliceCallable(const DescribeRecordSliceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRecordSliceOutcome>>();
    DescribeRecordSliceAsync(
    request,
    [prom](
        const IssClient*,
        const DescribeRecordSliceRequest&,
        DescribeRecordSliceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::DescribeRecordTemplateOutcome IssClient::DescribeRecordTemplate(const DescribeRecordTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRecordTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRecordTemplateResponse rsp = DescribeRecordTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRecordTemplateOutcome(rsp);
        else
            return DescribeRecordTemplateOutcome(o.GetError());
    }
    else
    {
        return DescribeRecordTemplateOutcome(outcome.GetError());
    }
}

void IssClient::DescribeRecordTemplateAsync(const DescribeRecordTemplateRequest& request, const DescribeRecordTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRecordTemplateRequest&;
    using Resp = DescribeRecordTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRecordTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::DescribeRecordTemplateOutcomeCallable IssClient::DescribeRecordTemplateCallable(const DescribeRecordTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRecordTemplateOutcome>>();
    DescribeRecordTemplateAsync(
    request,
    [prom](
        const IssClient*,
        const DescribeRecordTemplateRequest&,
        DescribeRecordTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::DescribeStreamAuthOutcome IssClient::DescribeStreamAuth(const DescribeStreamAuthRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStreamAuth");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStreamAuthResponse rsp = DescribeStreamAuthResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStreamAuthOutcome(rsp);
        else
            return DescribeStreamAuthOutcome(o.GetError());
    }
    else
    {
        return DescribeStreamAuthOutcome(outcome.GetError());
    }
}

void IssClient::DescribeStreamAuthAsync(const DescribeStreamAuthRequest& request, const DescribeStreamAuthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeStreamAuthRequest&;
    using Resp = DescribeStreamAuthResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStreamAuth", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::DescribeStreamAuthOutcomeCallable IssClient::DescribeStreamAuthCallable(const DescribeStreamAuthRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStreamAuthOutcome>>();
    DescribeStreamAuthAsync(
    request,
    [prom](
        const IssClient*,
        const DescribeStreamAuthRequest&,
        DescribeStreamAuthOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::DescribeTaskOutcome IssClient::DescribeTask(const DescribeTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskResponse rsp = DescribeTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskOutcome(rsp);
        else
            return DescribeTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskOutcome(outcome.GetError());
    }
}

void IssClient::DescribeTaskAsync(const DescribeTaskRequest& request, const DescribeTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTaskRequest&;
    using Resp = DescribeTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::DescribeTaskOutcomeCallable IssClient::DescribeTaskCallable(const DescribeTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTaskOutcome>>();
    DescribeTaskAsync(
    request,
    [prom](
        const IssClient*,
        const DescribeTaskRequest&,
        DescribeTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::DescribeUserDeviceOutcome IssClient::DescribeUserDevice(const DescribeUserDeviceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserDevice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserDeviceResponse rsp = DescribeUserDeviceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserDeviceOutcome(rsp);
        else
            return DescribeUserDeviceOutcome(o.GetError());
    }
    else
    {
        return DescribeUserDeviceOutcome(outcome.GetError());
    }
}

void IssClient::DescribeUserDeviceAsync(const DescribeUserDeviceRequest& request, const DescribeUserDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUserDeviceRequest&;
    using Resp = DescribeUserDeviceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUserDevice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::DescribeUserDeviceOutcomeCallable IssClient::DescribeUserDeviceCallable(const DescribeUserDeviceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUserDeviceOutcome>>();
    DescribeUserDeviceAsync(
    request,
    [prom](
        const IssClient*,
        const DescribeUserDeviceRequest&,
        DescribeUserDeviceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::DescribeUserDeviceListOutcome IssClient::DescribeUserDeviceList(const DescribeUserDeviceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserDeviceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserDeviceListResponse rsp = DescribeUserDeviceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserDeviceListOutcome(rsp);
        else
            return DescribeUserDeviceListOutcome(o.GetError());
    }
    else
    {
        return DescribeUserDeviceListOutcome(outcome.GetError());
    }
}

void IssClient::DescribeUserDeviceListAsync(const DescribeUserDeviceListRequest& request, const DescribeUserDeviceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUserDeviceListRequest&;
    using Resp = DescribeUserDeviceListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUserDeviceList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::DescribeUserDeviceListOutcomeCallable IssClient::DescribeUserDeviceListCallable(const DescribeUserDeviceListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUserDeviceListOutcome>>();
    DescribeUserDeviceListAsync(
    request,
    [prom](
        const IssClient*,
        const DescribeUserDeviceListRequest&,
        DescribeUserDeviceListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::DescribeVideoBitRateOutcome IssClient::DescribeVideoBitRate(const DescribeVideoBitRateRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVideoBitRate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVideoBitRateResponse rsp = DescribeVideoBitRateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVideoBitRateOutcome(rsp);
        else
            return DescribeVideoBitRateOutcome(o.GetError());
    }
    else
    {
        return DescribeVideoBitRateOutcome(outcome.GetError());
    }
}

void IssClient::DescribeVideoBitRateAsync(const DescribeVideoBitRateRequest& request, const DescribeVideoBitRateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVideoBitRateRequest&;
    using Resp = DescribeVideoBitRateResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVideoBitRate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::DescribeVideoBitRateOutcomeCallable IssClient::DescribeVideoBitRateCallable(const DescribeVideoBitRateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVideoBitRateOutcome>>();
    DescribeVideoBitRateAsync(
    request,
    [prom](
        const IssClient*,
        const DescribeVideoBitRateRequest&,
        DescribeVideoBitRateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::DescribeVideoDownloadUrlOutcome IssClient::DescribeVideoDownloadUrl(const DescribeVideoDownloadUrlRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVideoDownloadUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVideoDownloadUrlResponse rsp = DescribeVideoDownloadUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVideoDownloadUrlOutcome(rsp);
        else
            return DescribeVideoDownloadUrlOutcome(o.GetError());
    }
    else
    {
        return DescribeVideoDownloadUrlOutcome(outcome.GetError());
    }
}

void IssClient::DescribeVideoDownloadUrlAsync(const DescribeVideoDownloadUrlRequest& request, const DescribeVideoDownloadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVideoDownloadUrlRequest&;
    using Resp = DescribeVideoDownloadUrlResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVideoDownloadUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::DescribeVideoDownloadUrlOutcomeCallable IssClient::DescribeVideoDownloadUrlCallable(const DescribeVideoDownloadUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVideoDownloadUrlOutcome>>();
    DescribeVideoDownloadUrlAsync(
    request,
    [prom](
        const IssClient*,
        const DescribeVideoDownloadUrlRequest&,
        DescribeVideoDownloadUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::ListAITasksOutcome IssClient::ListAITasks(const ListAITasksRequest &request)
{
    auto outcome = MakeRequest(request, "ListAITasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListAITasksResponse rsp = ListAITasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListAITasksOutcome(rsp);
        else
            return ListAITasksOutcome(o.GetError());
    }
    else
    {
        return ListAITasksOutcome(outcome.GetError());
    }
}

void IssClient::ListAITasksAsync(const ListAITasksRequest& request, const ListAITasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListAITasksRequest&;
    using Resp = ListAITasksResponse;

    DoRequestAsync<Req, Resp>(
        "ListAITasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::ListAITasksOutcomeCallable IssClient::ListAITasksCallable(const ListAITasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListAITasksOutcome>>();
    ListAITasksAsync(
    request,
    [prom](
        const IssClient*,
        const ListAITasksRequest&,
        ListAITasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::ListDeviceSnapshotsOutcome IssClient::ListDeviceSnapshots(const ListDeviceSnapshotsRequest &request)
{
    auto outcome = MakeRequest(request, "ListDeviceSnapshots");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListDeviceSnapshotsResponse rsp = ListDeviceSnapshotsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListDeviceSnapshotsOutcome(rsp);
        else
            return ListDeviceSnapshotsOutcome(o.GetError());
    }
    else
    {
        return ListDeviceSnapshotsOutcome(outcome.GetError());
    }
}

void IssClient::ListDeviceSnapshotsAsync(const ListDeviceSnapshotsRequest& request, const ListDeviceSnapshotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListDeviceSnapshotsRequest&;
    using Resp = ListDeviceSnapshotsResponse;

    DoRequestAsync<Req, Resp>(
        "ListDeviceSnapshots", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::ListDeviceSnapshotsOutcomeCallable IssClient::ListDeviceSnapshotsCallable(const ListDeviceSnapshotsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListDeviceSnapshotsOutcome>>();
    ListDeviceSnapshotsAsync(
    request,
    [prom](
        const IssClient*,
        const ListDeviceSnapshotsRequest&,
        ListDeviceSnapshotsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::ListDevicesOutcome IssClient::ListDevices(const ListDevicesRequest &request)
{
    auto outcome = MakeRequest(request, "ListDevices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListDevicesResponse rsp = ListDevicesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListDevicesOutcome(rsp);
        else
            return ListDevicesOutcome(o.GetError());
    }
    else
    {
        return ListDevicesOutcome(outcome.GetError());
    }
}

void IssClient::ListDevicesAsync(const ListDevicesRequest& request, const ListDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListDevicesRequest&;
    using Resp = ListDevicesResponse;

    DoRequestAsync<Req, Resp>(
        "ListDevices", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::ListDevicesOutcomeCallable IssClient::ListDevicesCallable(const ListDevicesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListDevicesOutcome>>();
    ListDevicesAsync(
    request,
    [prom](
        const IssClient*,
        const ListDevicesRequest&,
        ListDevicesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::ListGatewayDevicesOutcome IssClient::ListGatewayDevices(const ListGatewayDevicesRequest &request)
{
    auto outcome = MakeRequest(request, "ListGatewayDevices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListGatewayDevicesResponse rsp = ListGatewayDevicesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListGatewayDevicesOutcome(rsp);
        else
            return ListGatewayDevicesOutcome(o.GetError());
    }
    else
    {
        return ListGatewayDevicesOutcome(outcome.GetError());
    }
}

void IssClient::ListGatewayDevicesAsync(const ListGatewayDevicesRequest& request, const ListGatewayDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListGatewayDevicesRequest&;
    using Resp = ListGatewayDevicesResponse;

    DoRequestAsync<Req, Resp>(
        "ListGatewayDevices", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::ListGatewayDevicesOutcomeCallable IssClient::ListGatewayDevicesCallable(const ListGatewayDevicesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListGatewayDevicesOutcome>>();
    ListGatewayDevicesAsync(
    request,
    [prom](
        const IssClient*,
        const ListGatewayDevicesRequest&,
        ListGatewayDevicesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::ListGatewaysOutcome IssClient::ListGateways(const ListGatewaysRequest &request)
{
    auto outcome = MakeRequest(request, "ListGateways");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListGatewaysResponse rsp = ListGatewaysResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListGatewaysOutcome(rsp);
        else
            return ListGatewaysOutcome(o.GetError());
    }
    else
    {
        return ListGatewaysOutcome(outcome.GetError());
    }
}

void IssClient::ListGatewaysAsync(const ListGatewaysRequest& request, const ListGatewaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListGatewaysRequest&;
    using Resp = ListGatewaysResponse;

    DoRequestAsync<Req, Resp>(
        "ListGateways", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::ListGatewaysOutcomeCallable IssClient::ListGatewaysCallable(const ListGatewaysRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListGatewaysOutcome>>();
    ListGatewaysAsync(
    request,
    [prom](
        const IssClient*,
        const ListGatewaysRequest&,
        ListGatewaysOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::ListOrganizationChannelNumbersOutcome IssClient::ListOrganizationChannelNumbers(const ListOrganizationChannelNumbersRequest &request)
{
    auto outcome = MakeRequest(request, "ListOrganizationChannelNumbers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListOrganizationChannelNumbersResponse rsp = ListOrganizationChannelNumbersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListOrganizationChannelNumbersOutcome(rsp);
        else
            return ListOrganizationChannelNumbersOutcome(o.GetError());
    }
    else
    {
        return ListOrganizationChannelNumbersOutcome(outcome.GetError());
    }
}

void IssClient::ListOrganizationChannelNumbersAsync(const ListOrganizationChannelNumbersRequest& request, const ListOrganizationChannelNumbersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListOrganizationChannelNumbersRequest&;
    using Resp = ListOrganizationChannelNumbersResponse;

    DoRequestAsync<Req, Resp>(
        "ListOrganizationChannelNumbers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::ListOrganizationChannelNumbersOutcomeCallable IssClient::ListOrganizationChannelNumbersCallable(const ListOrganizationChannelNumbersRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListOrganizationChannelNumbersOutcome>>();
    ListOrganizationChannelNumbersAsync(
    request,
    [prom](
        const IssClient*,
        const ListOrganizationChannelNumbersRequest&,
        ListOrganizationChannelNumbersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::ListOrganizationChannelsOutcome IssClient::ListOrganizationChannels(const ListOrganizationChannelsRequest &request)
{
    auto outcome = MakeRequest(request, "ListOrganizationChannels");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListOrganizationChannelsResponse rsp = ListOrganizationChannelsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListOrganizationChannelsOutcome(rsp);
        else
            return ListOrganizationChannelsOutcome(o.GetError());
    }
    else
    {
        return ListOrganizationChannelsOutcome(outcome.GetError());
    }
}

void IssClient::ListOrganizationChannelsAsync(const ListOrganizationChannelsRequest& request, const ListOrganizationChannelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListOrganizationChannelsRequest&;
    using Resp = ListOrganizationChannelsResponse;

    DoRequestAsync<Req, Resp>(
        "ListOrganizationChannels", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::ListOrganizationChannelsOutcomeCallable IssClient::ListOrganizationChannelsCallable(const ListOrganizationChannelsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListOrganizationChannelsOutcome>>();
    ListOrganizationChannelsAsync(
    request,
    [prom](
        const IssClient*,
        const ListOrganizationChannelsRequest&,
        ListOrganizationChannelsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::ListRecordBackupPlanDevicesOutcome IssClient::ListRecordBackupPlanDevices(const ListRecordBackupPlanDevicesRequest &request)
{
    auto outcome = MakeRequest(request, "ListRecordBackupPlanDevices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListRecordBackupPlanDevicesResponse rsp = ListRecordBackupPlanDevicesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListRecordBackupPlanDevicesOutcome(rsp);
        else
            return ListRecordBackupPlanDevicesOutcome(o.GetError());
    }
    else
    {
        return ListRecordBackupPlanDevicesOutcome(outcome.GetError());
    }
}

void IssClient::ListRecordBackupPlanDevicesAsync(const ListRecordBackupPlanDevicesRequest& request, const ListRecordBackupPlanDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListRecordBackupPlanDevicesRequest&;
    using Resp = ListRecordBackupPlanDevicesResponse;

    DoRequestAsync<Req, Resp>(
        "ListRecordBackupPlanDevices", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::ListRecordBackupPlanDevicesOutcomeCallable IssClient::ListRecordBackupPlanDevicesCallable(const ListRecordBackupPlanDevicesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListRecordBackupPlanDevicesOutcome>>();
    ListRecordBackupPlanDevicesAsync(
    request,
    [prom](
        const IssClient*,
        const ListRecordBackupPlanDevicesRequest&,
        ListRecordBackupPlanDevicesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::ListRecordBackupPlansOutcome IssClient::ListRecordBackupPlans(const ListRecordBackupPlansRequest &request)
{
    auto outcome = MakeRequest(request, "ListRecordBackupPlans");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListRecordBackupPlansResponse rsp = ListRecordBackupPlansResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListRecordBackupPlansOutcome(rsp);
        else
            return ListRecordBackupPlansOutcome(o.GetError());
    }
    else
    {
        return ListRecordBackupPlansOutcome(outcome.GetError());
    }
}

void IssClient::ListRecordBackupPlansAsync(const ListRecordBackupPlansRequest& request, const ListRecordBackupPlansAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListRecordBackupPlansRequest&;
    using Resp = ListRecordBackupPlansResponse;

    DoRequestAsync<Req, Resp>(
        "ListRecordBackupPlans", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::ListRecordBackupPlansOutcomeCallable IssClient::ListRecordBackupPlansCallable(const ListRecordBackupPlansRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListRecordBackupPlansOutcome>>();
    ListRecordBackupPlansAsync(
    request,
    [prom](
        const IssClient*,
        const ListRecordBackupPlansRequest&,
        ListRecordBackupPlansOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::ListRecordBackupTemplatesOutcome IssClient::ListRecordBackupTemplates(const ListRecordBackupTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "ListRecordBackupTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListRecordBackupTemplatesResponse rsp = ListRecordBackupTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListRecordBackupTemplatesOutcome(rsp);
        else
            return ListRecordBackupTemplatesOutcome(o.GetError());
    }
    else
    {
        return ListRecordBackupTemplatesOutcome(outcome.GetError());
    }
}

void IssClient::ListRecordBackupTemplatesAsync(const ListRecordBackupTemplatesRequest& request, const ListRecordBackupTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListRecordBackupTemplatesRequest&;
    using Resp = ListRecordBackupTemplatesResponse;

    DoRequestAsync<Req, Resp>(
        "ListRecordBackupTemplates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::ListRecordBackupTemplatesOutcomeCallable IssClient::ListRecordBackupTemplatesCallable(const ListRecordBackupTemplatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListRecordBackupTemplatesOutcome>>();
    ListRecordBackupTemplatesAsync(
    request,
    [prom](
        const IssClient*,
        const ListRecordBackupTemplatesRequest&,
        ListRecordBackupTemplatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::ListRecordPlanChannelsOutcome IssClient::ListRecordPlanChannels(const ListRecordPlanChannelsRequest &request)
{
    auto outcome = MakeRequest(request, "ListRecordPlanChannels");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListRecordPlanChannelsResponse rsp = ListRecordPlanChannelsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListRecordPlanChannelsOutcome(rsp);
        else
            return ListRecordPlanChannelsOutcome(o.GetError());
    }
    else
    {
        return ListRecordPlanChannelsOutcome(outcome.GetError());
    }
}

void IssClient::ListRecordPlanChannelsAsync(const ListRecordPlanChannelsRequest& request, const ListRecordPlanChannelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListRecordPlanChannelsRequest&;
    using Resp = ListRecordPlanChannelsResponse;

    DoRequestAsync<Req, Resp>(
        "ListRecordPlanChannels", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::ListRecordPlanChannelsOutcomeCallable IssClient::ListRecordPlanChannelsCallable(const ListRecordPlanChannelsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListRecordPlanChannelsOutcome>>();
    ListRecordPlanChannelsAsync(
    request,
    [prom](
        const IssClient*,
        const ListRecordPlanChannelsRequest&,
        ListRecordPlanChannelsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::ListRecordPlanDevicesOutcome IssClient::ListRecordPlanDevices(const ListRecordPlanDevicesRequest &request)
{
    auto outcome = MakeRequest(request, "ListRecordPlanDevices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListRecordPlanDevicesResponse rsp = ListRecordPlanDevicesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListRecordPlanDevicesOutcome(rsp);
        else
            return ListRecordPlanDevicesOutcome(o.GetError());
    }
    else
    {
        return ListRecordPlanDevicesOutcome(outcome.GetError());
    }
}

void IssClient::ListRecordPlanDevicesAsync(const ListRecordPlanDevicesRequest& request, const ListRecordPlanDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListRecordPlanDevicesRequest&;
    using Resp = ListRecordPlanDevicesResponse;

    DoRequestAsync<Req, Resp>(
        "ListRecordPlanDevices", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::ListRecordPlanDevicesOutcomeCallable IssClient::ListRecordPlanDevicesCallable(const ListRecordPlanDevicesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListRecordPlanDevicesOutcome>>();
    ListRecordPlanDevicesAsync(
    request,
    [prom](
        const IssClient*,
        const ListRecordPlanDevicesRequest&,
        ListRecordPlanDevicesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::ListRecordPlansOutcome IssClient::ListRecordPlans(const ListRecordPlansRequest &request)
{
    auto outcome = MakeRequest(request, "ListRecordPlans");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListRecordPlansResponse rsp = ListRecordPlansResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListRecordPlansOutcome(rsp);
        else
            return ListRecordPlansOutcome(o.GetError());
    }
    else
    {
        return ListRecordPlansOutcome(outcome.GetError());
    }
}

void IssClient::ListRecordPlansAsync(const ListRecordPlansRequest& request, const ListRecordPlansAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListRecordPlansRequest&;
    using Resp = ListRecordPlansResponse;

    DoRequestAsync<Req, Resp>(
        "ListRecordPlans", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::ListRecordPlansOutcomeCallable IssClient::ListRecordPlansCallable(const ListRecordPlansRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListRecordPlansOutcome>>();
    ListRecordPlansAsync(
    request,
    [prom](
        const IssClient*,
        const ListRecordPlansRequest&,
        ListRecordPlansOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::ListRecordRetrieveTasksOutcome IssClient::ListRecordRetrieveTasks(const ListRecordRetrieveTasksRequest &request)
{
    auto outcome = MakeRequest(request, "ListRecordRetrieveTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListRecordRetrieveTasksResponse rsp = ListRecordRetrieveTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListRecordRetrieveTasksOutcome(rsp);
        else
            return ListRecordRetrieveTasksOutcome(o.GetError());
    }
    else
    {
        return ListRecordRetrieveTasksOutcome(outcome.GetError());
    }
}

void IssClient::ListRecordRetrieveTasksAsync(const ListRecordRetrieveTasksRequest& request, const ListRecordRetrieveTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListRecordRetrieveTasksRequest&;
    using Resp = ListRecordRetrieveTasksResponse;

    DoRequestAsync<Req, Resp>(
        "ListRecordRetrieveTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::ListRecordRetrieveTasksOutcomeCallable IssClient::ListRecordRetrieveTasksCallable(const ListRecordRetrieveTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListRecordRetrieveTasksOutcome>>();
    ListRecordRetrieveTasksAsync(
    request,
    [prom](
        const IssClient*,
        const ListRecordRetrieveTasksRequest&,
        ListRecordRetrieveTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::ListRecordTemplatesOutcome IssClient::ListRecordTemplates(const ListRecordTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "ListRecordTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListRecordTemplatesResponse rsp = ListRecordTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListRecordTemplatesOutcome(rsp);
        else
            return ListRecordTemplatesOutcome(o.GetError());
    }
    else
    {
        return ListRecordTemplatesOutcome(outcome.GetError());
    }
}

void IssClient::ListRecordTemplatesAsync(const ListRecordTemplatesRequest& request, const ListRecordTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListRecordTemplatesRequest&;
    using Resp = ListRecordTemplatesResponse;

    DoRequestAsync<Req, Resp>(
        "ListRecordTemplates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::ListRecordTemplatesOutcomeCallable IssClient::ListRecordTemplatesCallable(const ListRecordTemplatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListRecordTemplatesOutcome>>();
    ListRecordTemplatesAsync(
    request,
    [prom](
        const IssClient*,
        const ListRecordTemplatesRequest&,
        ListRecordTemplatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::ListSubTasksOutcome IssClient::ListSubTasks(const ListSubTasksRequest &request)
{
    auto outcome = MakeRequest(request, "ListSubTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListSubTasksResponse rsp = ListSubTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListSubTasksOutcome(rsp);
        else
            return ListSubTasksOutcome(o.GetError());
    }
    else
    {
        return ListSubTasksOutcome(outcome.GetError());
    }
}

void IssClient::ListSubTasksAsync(const ListSubTasksRequest& request, const ListSubTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListSubTasksRequest&;
    using Resp = ListSubTasksResponse;

    DoRequestAsync<Req, Resp>(
        "ListSubTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::ListSubTasksOutcomeCallable IssClient::ListSubTasksCallable(const ListSubTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListSubTasksOutcome>>();
    ListSubTasksAsync(
    request,
    [prom](
        const IssClient*,
        const ListSubTasksRequest&,
        ListSubTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::ListTasksOutcome IssClient::ListTasks(const ListTasksRequest &request)
{
    auto outcome = MakeRequest(request, "ListTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListTasksResponse rsp = ListTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListTasksOutcome(rsp);
        else
            return ListTasksOutcome(o.GetError());
    }
    else
    {
        return ListTasksOutcome(outcome.GetError());
    }
}

void IssClient::ListTasksAsync(const ListTasksRequest& request, const ListTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListTasksRequest&;
    using Resp = ListTasksResponse;

    DoRequestAsync<Req, Resp>(
        "ListTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::ListTasksOutcomeCallable IssClient::ListTasksCallable(const ListTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListTasksOutcome>>();
    ListTasksAsync(
    request,
    [prom](
        const IssClient*,
        const ListTasksRequest&,
        ListTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::ListVideoDownloadTaskOutcome IssClient::ListVideoDownloadTask(const ListVideoDownloadTaskRequest &request)
{
    auto outcome = MakeRequest(request, "ListVideoDownloadTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListVideoDownloadTaskResponse rsp = ListVideoDownloadTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListVideoDownloadTaskOutcome(rsp);
        else
            return ListVideoDownloadTaskOutcome(o.GetError());
    }
    else
    {
        return ListVideoDownloadTaskOutcome(outcome.GetError());
    }
}

void IssClient::ListVideoDownloadTaskAsync(const ListVideoDownloadTaskRequest& request, const ListVideoDownloadTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListVideoDownloadTaskRequest&;
    using Resp = ListVideoDownloadTaskResponse;

    DoRequestAsync<Req, Resp>(
        "ListVideoDownloadTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::ListVideoDownloadTaskOutcomeCallable IssClient::ListVideoDownloadTaskCallable(const ListVideoDownloadTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListVideoDownloadTaskOutcome>>();
    ListVideoDownloadTaskAsync(
    request,
    [prom](
        const IssClient*,
        const ListVideoDownloadTaskRequest&,
        ListVideoDownloadTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::PlayRecordOutcome IssClient::PlayRecord(const PlayRecordRequest &request)
{
    auto outcome = MakeRequest(request, "PlayRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PlayRecordResponse rsp = PlayRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PlayRecordOutcome(rsp);
        else
            return PlayRecordOutcome(o.GetError());
    }
    else
    {
        return PlayRecordOutcome(outcome.GetError());
    }
}

void IssClient::PlayRecordAsync(const PlayRecordRequest& request, const PlayRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const PlayRecordRequest&;
    using Resp = PlayRecordResponse;

    DoRequestAsync<Req, Resp>(
        "PlayRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::PlayRecordOutcomeCallable IssClient::PlayRecordCallable(const PlayRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<PlayRecordOutcome>>();
    PlayRecordAsync(
    request,
    [prom](
        const IssClient*,
        const PlayRecordRequest&,
        PlayRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::QueryForbidPlayChannelListOutcome IssClient::QueryForbidPlayChannelList(const QueryForbidPlayChannelListRequest &request)
{
    auto outcome = MakeRequest(request, "QueryForbidPlayChannelList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryForbidPlayChannelListResponse rsp = QueryForbidPlayChannelListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryForbidPlayChannelListOutcome(rsp);
        else
            return QueryForbidPlayChannelListOutcome(o.GetError());
    }
    else
    {
        return QueryForbidPlayChannelListOutcome(outcome.GetError());
    }
}

void IssClient::QueryForbidPlayChannelListAsync(const QueryForbidPlayChannelListRequest& request, const QueryForbidPlayChannelListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryForbidPlayChannelListRequest&;
    using Resp = QueryForbidPlayChannelListResponse;

    DoRequestAsync<Req, Resp>(
        "QueryForbidPlayChannelList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::QueryForbidPlayChannelListOutcomeCallable IssClient::QueryForbidPlayChannelListCallable(const QueryForbidPlayChannelListRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryForbidPlayChannelListOutcome>>();
    QueryForbidPlayChannelListAsync(
    request,
    [prom](
        const IssClient*,
        const QueryForbidPlayChannelListRequest&,
        QueryForbidPlayChannelListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::RefreshDeviceChannelOutcome IssClient::RefreshDeviceChannel(const RefreshDeviceChannelRequest &request)
{
    auto outcome = MakeRequest(request, "RefreshDeviceChannel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RefreshDeviceChannelResponse rsp = RefreshDeviceChannelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RefreshDeviceChannelOutcome(rsp);
        else
            return RefreshDeviceChannelOutcome(o.GetError());
    }
    else
    {
        return RefreshDeviceChannelOutcome(outcome.GetError());
    }
}

void IssClient::RefreshDeviceChannelAsync(const RefreshDeviceChannelRequest& request, const RefreshDeviceChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RefreshDeviceChannelRequest&;
    using Resp = RefreshDeviceChannelResponse;

    DoRequestAsync<Req, Resp>(
        "RefreshDeviceChannel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::RefreshDeviceChannelOutcomeCallable IssClient::RefreshDeviceChannelCallable(const RefreshDeviceChannelRequest &request)
{
    const auto prom = std::make_shared<std::promise<RefreshDeviceChannelOutcome>>();
    RefreshDeviceChannelAsync(
    request,
    [prom](
        const IssClient*,
        const RefreshDeviceChannelRequest&,
        RefreshDeviceChannelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::SetForbidPlayChannelsOutcome IssClient::SetForbidPlayChannels(const SetForbidPlayChannelsRequest &request)
{
    auto outcome = MakeRequest(request, "SetForbidPlayChannels");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetForbidPlayChannelsResponse rsp = SetForbidPlayChannelsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetForbidPlayChannelsOutcome(rsp);
        else
            return SetForbidPlayChannelsOutcome(o.GetError());
    }
    else
    {
        return SetForbidPlayChannelsOutcome(outcome.GetError());
    }
}

void IssClient::SetForbidPlayChannelsAsync(const SetForbidPlayChannelsRequest& request, const SetForbidPlayChannelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SetForbidPlayChannelsRequest&;
    using Resp = SetForbidPlayChannelsResponse;

    DoRequestAsync<Req, Resp>(
        "SetForbidPlayChannels", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::SetForbidPlayChannelsOutcomeCallable IssClient::SetForbidPlayChannelsCallable(const SetForbidPlayChannelsRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetForbidPlayChannelsOutcome>>();
    SetForbidPlayChannelsAsync(
    request,
    [prom](
        const IssClient*,
        const SetForbidPlayChannelsRequest&,
        SetForbidPlayChannelsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::UpdateAITaskOutcome IssClient::UpdateAITask(const UpdateAITaskRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateAITask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateAITaskResponse rsp = UpdateAITaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateAITaskOutcome(rsp);
        else
            return UpdateAITaskOutcome(o.GetError());
    }
    else
    {
        return UpdateAITaskOutcome(outcome.GetError());
    }
}

void IssClient::UpdateAITaskAsync(const UpdateAITaskRequest& request, const UpdateAITaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateAITaskRequest&;
    using Resp = UpdateAITaskResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateAITask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::UpdateAITaskOutcomeCallable IssClient::UpdateAITaskCallable(const UpdateAITaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateAITaskOutcome>>();
    UpdateAITaskAsync(
    request,
    [prom](
        const IssClient*,
        const UpdateAITaskRequest&,
        UpdateAITaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::UpdateAITaskStatusOutcome IssClient::UpdateAITaskStatus(const UpdateAITaskStatusRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateAITaskStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateAITaskStatusResponse rsp = UpdateAITaskStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateAITaskStatusOutcome(rsp);
        else
            return UpdateAITaskStatusOutcome(o.GetError());
    }
    else
    {
        return UpdateAITaskStatusOutcome(outcome.GetError());
    }
}

void IssClient::UpdateAITaskStatusAsync(const UpdateAITaskStatusRequest& request, const UpdateAITaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateAITaskStatusRequest&;
    using Resp = UpdateAITaskStatusResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateAITaskStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::UpdateAITaskStatusOutcomeCallable IssClient::UpdateAITaskStatusCallable(const UpdateAITaskStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateAITaskStatusOutcome>>();
    UpdateAITaskStatusAsync(
    request,
    [prom](
        const IssClient*,
        const UpdateAITaskStatusRequest&,
        UpdateAITaskStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::UpdateDeviceOrganizationOutcome IssClient::UpdateDeviceOrganization(const UpdateDeviceOrganizationRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateDeviceOrganization");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateDeviceOrganizationResponse rsp = UpdateDeviceOrganizationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateDeviceOrganizationOutcome(rsp);
        else
            return UpdateDeviceOrganizationOutcome(o.GetError());
    }
    else
    {
        return UpdateDeviceOrganizationOutcome(outcome.GetError());
    }
}

void IssClient::UpdateDeviceOrganizationAsync(const UpdateDeviceOrganizationRequest& request, const UpdateDeviceOrganizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateDeviceOrganizationRequest&;
    using Resp = UpdateDeviceOrganizationResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateDeviceOrganization", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::UpdateDeviceOrganizationOutcomeCallable IssClient::UpdateDeviceOrganizationCallable(const UpdateDeviceOrganizationRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateDeviceOrganizationOutcome>>();
    UpdateDeviceOrganizationAsync(
    request,
    [prom](
        const IssClient*,
        const UpdateDeviceOrganizationRequest&,
        UpdateDeviceOrganizationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::UpdateDeviceStatusOutcome IssClient::UpdateDeviceStatus(const UpdateDeviceStatusRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateDeviceStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateDeviceStatusResponse rsp = UpdateDeviceStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateDeviceStatusOutcome(rsp);
        else
            return UpdateDeviceStatusOutcome(o.GetError());
    }
    else
    {
        return UpdateDeviceStatusOutcome(outcome.GetError());
    }
}

void IssClient::UpdateDeviceStatusAsync(const UpdateDeviceStatusRequest& request, const UpdateDeviceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateDeviceStatusRequest&;
    using Resp = UpdateDeviceStatusResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateDeviceStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::UpdateDeviceStatusOutcomeCallable IssClient::UpdateDeviceStatusCallable(const UpdateDeviceStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateDeviceStatusOutcome>>();
    UpdateDeviceStatusAsync(
    request,
    [prom](
        const IssClient*,
        const UpdateDeviceStatusRequest&,
        UpdateDeviceStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::UpdateGatewayOutcome IssClient::UpdateGateway(const UpdateGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateGatewayResponse rsp = UpdateGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateGatewayOutcome(rsp);
        else
            return UpdateGatewayOutcome(o.GetError());
    }
    else
    {
        return UpdateGatewayOutcome(outcome.GetError());
    }
}

void IssClient::UpdateGatewayAsync(const UpdateGatewayRequest& request, const UpdateGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateGatewayRequest&;
    using Resp = UpdateGatewayResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateGateway", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::UpdateGatewayOutcomeCallable IssClient::UpdateGatewayCallable(const UpdateGatewayRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateGatewayOutcome>>();
    UpdateGatewayAsync(
    request,
    [prom](
        const IssClient*,
        const UpdateGatewayRequest&,
        UpdateGatewayOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::UpdateOrganizationOutcome IssClient::UpdateOrganization(const UpdateOrganizationRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateOrganization");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateOrganizationResponse rsp = UpdateOrganizationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateOrganizationOutcome(rsp);
        else
            return UpdateOrganizationOutcome(o.GetError());
    }
    else
    {
        return UpdateOrganizationOutcome(outcome.GetError());
    }
}

void IssClient::UpdateOrganizationAsync(const UpdateOrganizationRequest& request, const UpdateOrganizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateOrganizationRequest&;
    using Resp = UpdateOrganizationResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateOrganization", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::UpdateOrganizationOutcomeCallable IssClient::UpdateOrganizationCallable(const UpdateOrganizationRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateOrganizationOutcome>>();
    UpdateOrganizationAsync(
    request,
    [prom](
        const IssClient*,
        const UpdateOrganizationRequest&,
        UpdateOrganizationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::UpdateRecordBackupPlanOutcome IssClient::UpdateRecordBackupPlan(const UpdateRecordBackupPlanRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateRecordBackupPlan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateRecordBackupPlanResponse rsp = UpdateRecordBackupPlanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateRecordBackupPlanOutcome(rsp);
        else
            return UpdateRecordBackupPlanOutcome(o.GetError());
    }
    else
    {
        return UpdateRecordBackupPlanOutcome(outcome.GetError());
    }
}

void IssClient::UpdateRecordBackupPlanAsync(const UpdateRecordBackupPlanRequest& request, const UpdateRecordBackupPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateRecordBackupPlanRequest&;
    using Resp = UpdateRecordBackupPlanResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateRecordBackupPlan", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::UpdateRecordBackupPlanOutcomeCallable IssClient::UpdateRecordBackupPlanCallable(const UpdateRecordBackupPlanRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateRecordBackupPlanOutcome>>();
    UpdateRecordBackupPlanAsync(
    request,
    [prom](
        const IssClient*,
        const UpdateRecordBackupPlanRequest&,
        UpdateRecordBackupPlanOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::UpdateRecordBackupTemplateOutcome IssClient::UpdateRecordBackupTemplate(const UpdateRecordBackupTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateRecordBackupTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateRecordBackupTemplateResponse rsp = UpdateRecordBackupTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateRecordBackupTemplateOutcome(rsp);
        else
            return UpdateRecordBackupTemplateOutcome(o.GetError());
    }
    else
    {
        return UpdateRecordBackupTemplateOutcome(outcome.GetError());
    }
}

void IssClient::UpdateRecordBackupTemplateAsync(const UpdateRecordBackupTemplateRequest& request, const UpdateRecordBackupTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateRecordBackupTemplateRequest&;
    using Resp = UpdateRecordBackupTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateRecordBackupTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::UpdateRecordBackupTemplateOutcomeCallable IssClient::UpdateRecordBackupTemplateCallable(const UpdateRecordBackupTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateRecordBackupTemplateOutcome>>();
    UpdateRecordBackupTemplateAsync(
    request,
    [prom](
        const IssClient*,
        const UpdateRecordBackupTemplateRequest&,
        UpdateRecordBackupTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::UpdateRecordPlanOutcome IssClient::UpdateRecordPlan(const UpdateRecordPlanRequest &request)
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

void IssClient::UpdateRecordPlanAsync(const UpdateRecordPlanRequest& request, const UpdateRecordPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

IssClient::UpdateRecordPlanOutcomeCallable IssClient::UpdateRecordPlanCallable(const UpdateRecordPlanRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateRecordPlanOutcome>>();
    UpdateRecordPlanAsync(
    request,
    [prom](
        const IssClient*,
        const UpdateRecordPlanRequest&,
        UpdateRecordPlanOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::UpdateRecordTemplateOutcome IssClient::UpdateRecordTemplate(const UpdateRecordTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateRecordTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateRecordTemplateResponse rsp = UpdateRecordTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateRecordTemplateOutcome(rsp);
        else
            return UpdateRecordTemplateOutcome(o.GetError());
    }
    else
    {
        return UpdateRecordTemplateOutcome(outcome.GetError());
    }
}

void IssClient::UpdateRecordTemplateAsync(const UpdateRecordTemplateRequest& request, const UpdateRecordTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateRecordTemplateRequest&;
    using Resp = UpdateRecordTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateRecordTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::UpdateRecordTemplateOutcomeCallable IssClient::UpdateRecordTemplateCallable(const UpdateRecordTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateRecordTemplateOutcome>>();
    UpdateRecordTemplateAsync(
    request,
    [prom](
        const IssClient*,
        const UpdateRecordTemplateRequest&,
        UpdateRecordTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::UpdateUserDeviceOutcome IssClient::UpdateUserDevice(const UpdateUserDeviceRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateUserDevice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateUserDeviceResponse rsp = UpdateUserDeviceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateUserDeviceOutcome(rsp);
        else
            return UpdateUserDeviceOutcome(o.GetError());
    }
    else
    {
        return UpdateUserDeviceOutcome(outcome.GetError());
    }
}

void IssClient::UpdateUserDeviceAsync(const UpdateUserDeviceRequest& request, const UpdateUserDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateUserDeviceRequest&;
    using Resp = UpdateUserDeviceResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateUserDevice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::UpdateUserDeviceOutcomeCallable IssClient::UpdateUserDeviceCallable(const UpdateUserDeviceRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateUserDeviceOutcome>>();
    UpdateUserDeviceAsync(
    request,
    [prom](
        const IssClient*,
        const UpdateUserDeviceRequest&,
        UpdateUserDeviceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IssClient::UpgradeGatewayOutcome IssClient::UpgradeGateway(const UpgradeGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "UpgradeGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpgradeGatewayResponse rsp = UpgradeGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpgradeGatewayOutcome(rsp);
        else
            return UpgradeGatewayOutcome(o.GetError());
    }
    else
    {
        return UpgradeGatewayOutcome(outcome.GetError());
    }
}

void IssClient::UpgradeGatewayAsync(const UpgradeGatewayRequest& request, const UpgradeGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpgradeGatewayRequest&;
    using Resp = UpgradeGatewayResponse;

    DoRequestAsync<Req, Resp>(
        "UpgradeGateway", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IssClient::UpgradeGatewayOutcomeCallable IssClient::UpgradeGatewayCallable(const UpgradeGatewayRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpgradeGatewayOutcome>>();
    UpgradeGatewayAsync(
    request,
    [prom](
        const IssClient*,
        const UpgradeGatewayRequest&,
        UpgradeGatewayOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


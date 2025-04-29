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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddAITask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::AddAITaskOutcomeCallable IssClient::AddAITaskCallable(const AddAITaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddAITaskOutcome()>>(
        [this, request]()
        {
            return this->AddAITask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddOrganization(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::AddOrganizationOutcomeCallable IssClient::AddOrganizationCallable(const AddOrganizationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddOrganizationOutcome()>>(
        [this, request]()
        {
            return this->AddOrganization(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddRecordBackupPlan(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::AddRecordBackupPlanOutcomeCallable IssClient::AddRecordBackupPlanCallable(const AddRecordBackupPlanRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddRecordBackupPlanOutcome()>>(
        [this, request]()
        {
            return this->AddRecordBackupPlan(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddRecordBackupTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::AddRecordBackupTemplateOutcomeCallable IssClient::AddRecordBackupTemplateCallable(const AddRecordBackupTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddRecordBackupTemplateOutcome()>>(
        [this, request]()
        {
            return this->AddRecordBackupTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddRecordPlan(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::AddRecordPlanOutcomeCallable IssClient::AddRecordPlanCallable(const AddRecordPlanRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddRecordPlanOutcome()>>(
        [this, request]()
        {
            return this->AddRecordPlan(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddRecordRetrieveTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::AddRecordRetrieveTaskOutcomeCallable IssClient::AddRecordRetrieveTaskCallable(const AddRecordRetrieveTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddRecordRetrieveTaskOutcome()>>(
        [this, request]()
        {
            return this->AddRecordRetrieveTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddRecordTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::AddRecordTemplateOutcomeCallable IssClient::AddRecordTemplateCallable(const AddRecordTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddRecordTemplateOutcome()>>(
        [this, request]()
        {
            return this->AddRecordTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddStreamAuth(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::AddStreamAuthOutcomeCallable IssClient::AddStreamAuthCallable(const AddStreamAuthRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddStreamAuthOutcome()>>(
        [this, request]()
        {
            return this->AddStreamAuth(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddUserDevice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::AddUserDeviceOutcomeCallable IssClient::AddUserDeviceCallable(const AddUserDeviceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddUserDeviceOutcome()>>(
        [this, request]()
        {
            return this->AddUserDevice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BatchDeleteVideoDownloadTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::BatchDeleteVideoDownloadTaskOutcomeCallable IssClient::BatchDeleteVideoDownloadTaskCallable(const BatchDeleteVideoDownloadTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BatchDeleteVideoDownloadTaskOutcome()>>(
        [this, request]()
        {
            return this->BatchDeleteVideoDownloadTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BatchOperateDevice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::BatchOperateDeviceOutcomeCallable IssClient::BatchOperateDeviceCallable(const BatchOperateDeviceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BatchOperateDeviceOutcome()>>(
        [this, request]()
        {
            return this->BatchOperateDevice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CallISAPI(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::CallISAPIOutcomeCallable IssClient::CallISAPICallable(const CallISAPIRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CallISAPIOutcome()>>(
        [this, request]()
        {
            return this->CallISAPI(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ControlDevicePTZ(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::ControlDevicePTZOutcomeCallable IssClient::ControlDevicePTZCallable(const ControlDevicePTZRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ControlDevicePTZOutcome()>>(
        [this, request]()
        {
            return this->ControlDevicePTZ(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ControlDevicePreset(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::ControlDevicePresetOutcomeCallable IssClient::ControlDevicePresetCallable(const ControlDevicePresetRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ControlDevicePresetOutcome()>>(
        [this, request]()
        {
            return this->ControlDevicePreset(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ControlDeviceSnapshot(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::ControlDeviceSnapshotOutcomeCallable IssClient::ControlDeviceSnapshotCallable(const ControlDeviceSnapshotRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ControlDeviceSnapshotOutcome()>>(
        [this, request]()
        {
            return this->ControlDeviceSnapshot(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ControlDeviceStream(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::ControlDeviceStreamOutcomeCallable IssClient::ControlDeviceStreamCallable(const ControlDeviceStreamRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ControlDeviceStreamOutcome()>>(
        [this, request]()
        {
            return this->ControlDeviceStream(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ControlRecord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::ControlRecordOutcomeCallable IssClient::ControlRecordCallable(const ControlRecordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ControlRecordOutcome()>>(
        [this, request]()
        {
            return this->ControlRecord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ControlRecordTimeline(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::ControlRecordTimelineOutcomeCallable IssClient::ControlRecordTimelineCallable(const ControlRecordTimelineRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ControlRecordTimelineOutcome()>>(
        [this, request]()
        {
            return this->ControlRecordTimeline(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateVideoDownloadTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::CreateVideoDownloadTaskOutcomeCallable IssClient::CreateVideoDownloadTaskCallable(const CreateVideoDownloadTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateVideoDownloadTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateVideoDownloadTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAITask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::DeleteAITaskOutcomeCallable IssClient::DeleteAITaskCallable(const DeleteAITaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAITaskOutcome()>>(
        [this, request]()
        {
            return this->DeleteAITask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::DeleteDomainOutcomeCallable IssClient::DeleteDomainCallable(const DeleteDomainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteDomainOutcome()>>(
        [this, request]()
        {
            return this->DeleteDomain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteGateway(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::DeleteGatewayOutcomeCallable IssClient::DeleteGatewayCallable(const DeleteGatewayRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteGatewayOutcome()>>(
        [this, request]()
        {
            return this->DeleteGateway(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteOrganization(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::DeleteOrganizationOutcomeCallable IssClient::DeleteOrganizationCallable(const DeleteOrganizationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteOrganizationOutcome()>>(
        [this, request]()
        {
            return this->DeleteOrganization(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRecordBackupPlan(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::DeleteRecordBackupPlanOutcomeCallable IssClient::DeleteRecordBackupPlanCallable(const DeleteRecordBackupPlanRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRecordBackupPlanOutcome()>>(
        [this, request]()
        {
            return this->DeleteRecordBackupPlan(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRecordBackupTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::DeleteRecordBackupTemplateOutcomeCallable IssClient::DeleteRecordBackupTemplateCallable(const DeleteRecordBackupTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRecordBackupTemplateOutcome()>>(
        [this, request]()
        {
            return this->DeleteRecordBackupTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRecordPlan(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::DeleteRecordPlanOutcomeCallable IssClient::DeleteRecordPlanCallable(const DeleteRecordPlanRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRecordPlanOutcome()>>(
        [this, request]()
        {
            return this->DeleteRecordPlan(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRecordRetrieveTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::DeleteRecordRetrieveTaskOutcomeCallable IssClient::DeleteRecordRetrieveTaskCallable(const DeleteRecordRetrieveTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRecordRetrieveTaskOutcome()>>(
        [this, request]()
        {
            return this->DeleteRecordRetrieveTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRecordTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::DeleteRecordTemplateOutcomeCallable IssClient::DeleteRecordTemplateCallable(const DeleteRecordTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRecordTemplateOutcome()>>(
        [this, request]()
        {
            return this->DeleteRecordTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::DeleteTaskOutcomeCallable IssClient::DeleteTaskCallable(const DeleteTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteTaskOutcome()>>(
        [this, request]()
        {
            return this->DeleteTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteUserDevice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::DeleteUserDeviceOutcomeCallable IssClient::DeleteUserDeviceCallable(const DeleteUserDeviceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteUserDeviceOutcome()>>(
        [this, request]()
        {
            return this->DeleteUserDevice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAITask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::DescribeAITaskOutcomeCallable IssClient::DescribeAITaskCallable(const DescribeAITaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAITaskOutcome()>>(
        [this, request]()
        {
            return this->DescribeAITask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAITaskResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::DescribeAITaskResultOutcomeCallable IssClient::DescribeAITaskResultCallable(const DescribeAITaskResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAITaskResultOutcome()>>(
        [this, request]()
        {
            return this->DescribeAITaskResult(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCNAME(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::DescribeCNAMEOutcomeCallable IssClient::DescribeCNAMECallable(const DescribeCNAMERequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCNAMEOutcome()>>(
        [this, request]()
        {
            return this->DescribeCNAME(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDeviceChannel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::DescribeDeviceChannelOutcomeCallable IssClient::DescribeDeviceChannelCallable(const DescribeDeviceChannelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDeviceChannelOutcome()>>(
        [this, request]()
        {
            return this->DescribeDeviceChannel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDevicePreset(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::DescribeDevicePresetOutcomeCallable IssClient::DescribeDevicePresetCallable(const DescribeDevicePresetRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDevicePresetOutcome()>>(
        [this, request]()
        {
            return this->DescribeDevicePreset(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDeviceRegion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::DescribeDeviceRegionOutcomeCallable IssClient::DescribeDeviceRegionCallable(const DescribeDeviceRegionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDeviceRegionOutcome()>>(
        [this, request]()
        {
            return this->DescribeDeviceRegion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::DescribeDomainOutcomeCallable IssClient::DescribeDomainCallable(const DescribeDomainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDomainOutcome()>>(
        [this, request]()
        {
            return this->DescribeDomain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDomainRegion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::DescribeDomainRegionOutcomeCallable IssClient::DescribeDomainRegionCallable(const DescribeDomainRegionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDomainRegionOutcome()>>(
        [this, request]()
        {
            return this->DescribeDomainRegion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGBDeviceAddr(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::DescribeGBDeviceAddrOutcomeCallable IssClient::DescribeGBDeviceAddrCallable(const DescribeGBDeviceAddrRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGBDeviceAddrOutcome()>>(
        [this, request]()
        {
            return this->DescribeGBDeviceAddr(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGateway(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::DescribeGatewayOutcomeCallable IssClient::DescribeGatewayCallable(const DescribeGatewayRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGatewayOutcome()>>(
        [this, request]()
        {
            return this->DescribeGateway(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGatewayMonitor(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::DescribeGatewayMonitorOutcomeCallable IssClient::DescribeGatewayMonitorCallable(const DescribeGatewayMonitorRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGatewayMonitorOutcome()>>(
        [this, request]()
        {
            return this->DescribeGatewayMonitor(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGatewayProtocol(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::DescribeGatewayProtocolOutcomeCallable IssClient::DescribeGatewayProtocolCallable(const DescribeGatewayProtocolRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGatewayProtocolOutcome()>>(
        [this, request]()
        {
            return this->DescribeGatewayProtocol(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGatewayVersion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::DescribeGatewayVersionOutcomeCallable IssClient::DescribeGatewayVersionCallable(const DescribeGatewayVersionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGatewayVersionOutcome()>>(
        [this, request]()
        {
            return this->DescribeGatewayVersion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOrganization(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::DescribeOrganizationOutcomeCallable IssClient::DescribeOrganizationCallable(const DescribeOrganizationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOrganizationOutcome()>>(
        [this, request]()
        {
            return this->DescribeOrganization(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRecordBackupPlan(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::DescribeRecordBackupPlanOutcomeCallable IssClient::DescribeRecordBackupPlanCallable(const DescribeRecordBackupPlanRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRecordBackupPlanOutcome()>>(
        [this, request]()
        {
            return this->DescribeRecordBackupPlan(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRecordBackupTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::DescribeRecordBackupTemplateOutcomeCallable IssClient::DescribeRecordBackupTemplateCallable(const DescribeRecordBackupTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRecordBackupTemplateOutcome()>>(
        [this, request]()
        {
            return this->DescribeRecordBackupTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRecordFile(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::DescribeRecordFileOutcomeCallable IssClient::DescribeRecordFileCallable(const DescribeRecordFileRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRecordFileOutcome()>>(
        [this, request]()
        {
            return this->DescribeRecordFile(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRecordPlan(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::DescribeRecordPlanOutcomeCallable IssClient::DescribeRecordPlanCallable(const DescribeRecordPlanRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRecordPlanOutcome()>>(
        [this, request]()
        {
            return this->DescribeRecordPlan(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRecordPlaybackUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::DescribeRecordPlaybackUrlOutcomeCallable IssClient::DescribeRecordPlaybackUrlCallable(const DescribeRecordPlaybackUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRecordPlaybackUrlOutcome()>>(
        [this, request]()
        {
            return this->DescribeRecordPlaybackUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRecordRetrieveTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::DescribeRecordRetrieveTaskOutcomeCallable IssClient::DescribeRecordRetrieveTaskCallable(const DescribeRecordRetrieveTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRecordRetrieveTaskOutcome()>>(
        [this, request]()
        {
            return this->DescribeRecordRetrieveTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRecordSlice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::DescribeRecordSliceOutcomeCallable IssClient::DescribeRecordSliceCallable(const DescribeRecordSliceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRecordSliceOutcome()>>(
        [this, request]()
        {
            return this->DescribeRecordSlice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRecordTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::DescribeRecordTemplateOutcomeCallable IssClient::DescribeRecordTemplateCallable(const DescribeRecordTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRecordTemplateOutcome()>>(
        [this, request]()
        {
            return this->DescribeRecordTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStreamAuth(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::DescribeStreamAuthOutcomeCallable IssClient::DescribeStreamAuthCallable(const DescribeStreamAuthRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStreamAuthOutcome()>>(
        [this, request]()
        {
            return this->DescribeStreamAuth(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::DescribeTaskOutcomeCallable IssClient::DescribeTaskCallable(const DescribeTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTaskOutcome()>>(
        [this, request]()
        {
            return this->DescribeTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUserDevice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::DescribeUserDeviceOutcomeCallable IssClient::DescribeUserDeviceCallable(const DescribeUserDeviceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUserDeviceOutcome()>>(
        [this, request]()
        {
            return this->DescribeUserDevice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVideoBitRate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::DescribeVideoBitRateOutcomeCallable IssClient::DescribeVideoBitRateCallable(const DescribeVideoBitRateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVideoBitRateOutcome()>>(
        [this, request]()
        {
            return this->DescribeVideoBitRate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVideoDownloadUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::DescribeVideoDownloadUrlOutcomeCallable IssClient::DescribeVideoDownloadUrlCallable(const DescribeVideoDownloadUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVideoDownloadUrlOutcome()>>(
        [this, request]()
        {
            return this->DescribeVideoDownloadUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListAITasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::ListAITasksOutcomeCallable IssClient::ListAITasksCallable(const ListAITasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListAITasksOutcome()>>(
        [this, request]()
        {
            return this->ListAITasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListDeviceSnapshots(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::ListDeviceSnapshotsOutcomeCallable IssClient::ListDeviceSnapshotsCallable(const ListDeviceSnapshotsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListDeviceSnapshotsOutcome()>>(
        [this, request]()
        {
            return this->ListDeviceSnapshots(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListDevices(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::ListDevicesOutcomeCallable IssClient::ListDevicesCallable(const ListDevicesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListDevicesOutcome()>>(
        [this, request]()
        {
            return this->ListDevices(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListGatewayDevices(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::ListGatewayDevicesOutcomeCallable IssClient::ListGatewayDevicesCallable(const ListGatewayDevicesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListGatewayDevicesOutcome()>>(
        [this, request]()
        {
            return this->ListGatewayDevices(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListGateways(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::ListGatewaysOutcomeCallable IssClient::ListGatewaysCallable(const ListGatewaysRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListGatewaysOutcome()>>(
        [this, request]()
        {
            return this->ListGateways(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListOrganizationChannelNumbers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::ListOrganizationChannelNumbersOutcomeCallable IssClient::ListOrganizationChannelNumbersCallable(const ListOrganizationChannelNumbersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListOrganizationChannelNumbersOutcome()>>(
        [this, request]()
        {
            return this->ListOrganizationChannelNumbers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListOrganizationChannels(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::ListOrganizationChannelsOutcomeCallable IssClient::ListOrganizationChannelsCallable(const ListOrganizationChannelsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListOrganizationChannelsOutcome()>>(
        [this, request]()
        {
            return this->ListOrganizationChannels(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListRecordBackupPlanDevices(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::ListRecordBackupPlanDevicesOutcomeCallable IssClient::ListRecordBackupPlanDevicesCallable(const ListRecordBackupPlanDevicesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListRecordBackupPlanDevicesOutcome()>>(
        [this, request]()
        {
            return this->ListRecordBackupPlanDevices(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListRecordBackupPlans(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::ListRecordBackupPlansOutcomeCallable IssClient::ListRecordBackupPlansCallable(const ListRecordBackupPlansRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListRecordBackupPlansOutcome()>>(
        [this, request]()
        {
            return this->ListRecordBackupPlans(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListRecordBackupTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::ListRecordBackupTemplatesOutcomeCallable IssClient::ListRecordBackupTemplatesCallable(const ListRecordBackupTemplatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListRecordBackupTemplatesOutcome()>>(
        [this, request]()
        {
            return this->ListRecordBackupTemplates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListRecordPlanChannels(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::ListRecordPlanChannelsOutcomeCallable IssClient::ListRecordPlanChannelsCallable(const ListRecordPlanChannelsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListRecordPlanChannelsOutcome()>>(
        [this, request]()
        {
            return this->ListRecordPlanChannels(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListRecordPlanDevices(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::ListRecordPlanDevicesOutcomeCallable IssClient::ListRecordPlanDevicesCallable(const ListRecordPlanDevicesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListRecordPlanDevicesOutcome()>>(
        [this, request]()
        {
            return this->ListRecordPlanDevices(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListRecordPlans(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::ListRecordPlansOutcomeCallable IssClient::ListRecordPlansCallable(const ListRecordPlansRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListRecordPlansOutcome()>>(
        [this, request]()
        {
            return this->ListRecordPlans(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListRecordRetrieveTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::ListRecordRetrieveTasksOutcomeCallable IssClient::ListRecordRetrieveTasksCallable(const ListRecordRetrieveTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListRecordRetrieveTasksOutcome()>>(
        [this, request]()
        {
            return this->ListRecordRetrieveTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListRecordTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::ListRecordTemplatesOutcomeCallable IssClient::ListRecordTemplatesCallable(const ListRecordTemplatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListRecordTemplatesOutcome()>>(
        [this, request]()
        {
            return this->ListRecordTemplates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListSubTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::ListSubTasksOutcomeCallable IssClient::ListSubTasksCallable(const ListSubTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListSubTasksOutcome()>>(
        [this, request]()
        {
            return this->ListSubTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::ListTasksOutcomeCallable IssClient::ListTasksCallable(const ListTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListTasksOutcome()>>(
        [this, request]()
        {
            return this->ListTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListVideoDownloadTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::ListVideoDownloadTaskOutcomeCallable IssClient::ListVideoDownloadTaskCallable(const ListVideoDownloadTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListVideoDownloadTaskOutcome()>>(
        [this, request]()
        {
            return this->ListVideoDownloadTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->PlayRecord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::PlayRecordOutcomeCallable IssClient::PlayRecordCallable(const PlayRecordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<PlayRecordOutcome()>>(
        [this, request]()
        {
            return this->PlayRecord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryForbidPlayChannelList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::QueryForbidPlayChannelListOutcomeCallable IssClient::QueryForbidPlayChannelListCallable(const QueryForbidPlayChannelListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryForbidPlayChannelListOutcome()>>(
        [this, request]()
        {
            return this->QueryForbidPlayChannelList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RefreshDeviceChannel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::RefreshDeviceChannelOutcomeCallable IssClient::RefreshDeviceChannelCallable(const RefreshDeviceChannelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RefreshDeviceChannelOutcome()>>(
        [this, request]()
        {
            return this->RefreshDeviceChannel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SetForbidPlayChannels(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::SetForbidPlayChannelsOutcomeCallable IssClient::SetForbidPlayChannelsCallable(const SetForbidPlayChannelsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SetForbidPlayChannelsOutcome()>>(
        [this, request]()
        {
            return this->SetForbidPlayChannels(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateAITask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::UpdateAITaskOutcomeCallable IssClient::UpdateAITaskCallable(const UpdateAITaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateAITaskOutcome()>>(
        [this, request]()
        {
            return this->UpdateAITask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateAITaskStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::UpdateAITaskStatusOutcomeCallable IssClient::UpdateAITaskStatusCallable(const UpdateAITaskStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateAITaskStatusOutcome()>>(
        [this, request]()
        {
            return this->UpdateAITaskStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateDeviceOrganization(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::UpdateDeviceOrganizationOutcomeCallable IssClient::UpdateDeviceOrganizationCallable(const UpdateDeviceOrganizationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateDeviceOrganizationOutcome()>>(
        [this, request]()
        {
            return this->UpdateDeviceOrganization(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateDeviceStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::UpdateDeviceStatusOutcomeCallable IssClient::UpdateDeviceStatusCallable(const UpdateDeviceStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateDeviceStatusOutcome()>>(
        [this, request]()
        {
            return this->UpdateDeviceStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateGateway(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::UpdateGatewayOutcomeCallable IssClient::UpdateGatewayCallable(const UpdateGatewayRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateGatewayOutcome()>>(
        [this, request]()
        {
            return this->UpdateGateway(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateOrganization(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::UpdateOrganizationOutcomeCallable IssClient::UpdateOrganizationCallable(const UpdateOrganizationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateOrganizationOutcome()>>(
        [this, request]()
        {
            return this->UpdateOrganization(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateRecordBackupPlan(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::UpdateRecordBackupPlanOutcomeCallable IssClient::UpdateRecordBackupPlanCallable(const UpdateRecordBackupPlanRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateRecordBackupPlanOutcome()>>(
        [this, request]()
        {
            return this->UpdateRecordBackupPlan(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateRecordBackupTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::UpdateRecordBackupTemplateOutcomeCallable IssClient::UpdateRecordBackupTemplateCallable(const UpdateRecordBackupTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateRecordBackupTemplateOutcome()>>(
        [this, request]()
        {
            return this->UpdateRecordBackupTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateRecordPlan(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::UpdateRecordPlanOutcomeCallable IssClient::UpdateRecordPlanCallable(const UpdateRecordPlanRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateRecordPlanOutcome()>>(
        [this, request]()
        {
            return this->UpdateRecordPlan(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateRecordTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::UpdateRecordTemplateOutcomeCallable IssClient::UpdateRecordTemplateCallable(const UpdateRecordTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateRecordTemplateOutcome()>>(
        [this, request]()
        {
            return this->UpdateRecordTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateUserDevice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::UpdateUserDeviceOutcomeCallable IssClient::UpdateUserDeviceCallable(const UpdateUserDeviceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateUserDeviceOutcome()>>(
        [this, request]()
        {
            return this->UpdateUserDevice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpgradeGateway(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IssClient::UpgradeGatewayOutcomeCallable IssClient::UpgradeGatewayCallable(const UpgradeGatewayRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpgradeGatewayOutcome()>>(
        [this, request]()
        {
            return this->UpgradeGateway(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


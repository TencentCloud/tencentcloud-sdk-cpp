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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BindGroupDevices(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoindustryClient::BindGroupDevicesOutcomeCallable IotvideoindustryClient::BindGroupDevicesCallable(const BindGroupDevicesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BindGroupDevicesOutcome()>>(
        [this, request]()
        {
            return this->BindGroupDevices(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ControlDevicePTZ(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoindustryClient::ControlDevicePTZOutcomeCallable IotvideoindustryClient::ControlDevicePTZCallable(const ControlDevicePTZRequest &request)
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ControlRecordStream(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoindustryClient::ControlRecordStreamOutcomeCallable IotvideoindustryClient::ControlRecordStreamCallable(const ControlRecordStreamRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ControlRecordStreamOutcome()>>(
        [this, request]()
        {
            return this->ControlRecordStream(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDevice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoindustryClient::CreateDeviceOutcomeCallable IotvideoindustryClient::CreateDeviceCallable(const CreateDeviceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDeviceOutcome()>>(
        [this, request]()
        {
            return this->CreateDevice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDeviceGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoindustryClient::CreateDeviceGroupOutcomeCallable IotvideoindustryClient::CreateDeviceGroupCallable(const CreateDeviceGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDeviceGroupOutcome()>>(
        [this, request]()
        {
            return this->CreateDeviceGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateLiveChannel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoindustryClient::CreateLiveChannelOutcomeCallable IotvideoindustryClient::CreateLiveChannelCallable(const CreateLiveChannelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateLiveChannelOutcome()>>(
        [this, request]()
        {
            return this->CreateLiveChannel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateLiveRecordPlan(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoindustryClient::CreateLiveRecordPlanOutcomeCallable IotvideoindustryClient::CreateLiveRecordPlanCallable(const CreateLiveRecordPlanRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateLiveRecordPlanOutcome()>>(
        [this, request]()
        {
            return this->CreateLiveRecordPlan(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateMessageForward(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoindustryClient::CreateMessageForwardOutcomeCallable IotvideoindustryClient::CreateMessageForwardCallable(const CreateMessageForwardRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateMessageForwardOutcome()>>(
        [this, request]()
        {
            return this->CreateMessageForward(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateRecordPlan(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoindustryClient::CreateRecordPlanOutcomeCallable IotvideoindustryClient::CreateRecordPlanCallable(const CreateRecordPlanRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateRecordPlanOutcome()>>(
        [this, request]()
        {
            return this->CreateRecordPlan(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateScene(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoindustryClient::CreateSceneOutcomeCallable IotvideoindustryClient::CreateSceneCallable(const CreateSceneRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSceneOutcome()>>(
        [this, request]()
        {
            return this->CreateScene(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTimeTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoindustryClient::CreateTimeTemplateOutcomeCallable IotvideoindustryClient::CreateTimeTemplateCallable(const CreateTimeTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTimeTemplateOutcome()>>(
        [this, request]()
        {
            return this->CreateTimeTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteChannel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoindustryClient::DeleteChannelOutcomeCallable IotvideoindustryClient::DeleteChannelCallable(const DeleteChannelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteChannelOutcome()>>(
        [this, request]()
        {
            return this->DeleteChannel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDevice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoindustryClient::DeleteDeviceOutcomeCallable IotvideoindustryClient::DeleteDeviceCallable(const DeleteDeviceRequest &request)
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDeviceGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoindustryClient::DeleteDeviceGroupOutcomeCallable IotvideoindustryClient::DeleteDeviceGroupCallable(const DeleteDeviceGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteDeviceGroupOutcome()>>(
        [this, request]()
        {
            return this->DeleteDeviceGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteLiveChannel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoindustryClient::DeleteLiveChannelOutcomeCallable IotvideoindustryClient::DeleteLiveChannelCallable(const DeleteLiveChannelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteLiveChannelOutcome()>>(
        [this, request]()
        {
            return this->DeleteLiveChannel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteLiveRecordPlan(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoindustryClient::DeleteLiveRecordPlanOutcomeCallable IotvideoindustryClient::DeleteLiveRecordPlanCallable(const DeleteLiveRecordPlanRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteLiveRecordPlanOutcome()>>(
        [this, request]()
        {
            return this->DeleteLiveRecordPlan(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteLiveVideoList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoindustryClient::DeleteLiveVideoListOutcomeCallable IotvideoindustryClient::DeleteLiveVideoListCallable(const DeleteLiveVideoListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteLiveVideoListOutcome()>>(
        [this, request]()
        {
            return this->DeleteLiveVideoList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteMessageForward(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoindustryClient::DeleteMessageForwardOutcomeCallable IotvideoindustryClient::DeleteMessageForwardCallable(const DeleteMessageForwardRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteMessageForwardOutcome()>>(
        [this, request]()
        {
            return this->DeleteMessageForward(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRecordPlan(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoindustryClient::DeleteRecordPlanOutcomeCallable IotvideoindustryClient::DeleteRecordPlanCallable(const DeleteRecordPlanRequest &request)
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteScene(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoindustryClient::DeleteSceneOutcomeCallable IotvideoindustryClient::DeleteSceneCallable(const DeleteSceneRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteSceneOutcome()>>(
        [this, request]()
        {
            return this->DeleteScene(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteTimeTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoindustryClient::DeleteTimeTemplateOutcomeCallable IotvideoindustryClient::DeleteTimeTemplateCallable(const DeleteTimeTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteTimeTemplateOutcome()>>(
        [this, request]()
        {
            return this->DeleteTimeTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteVideoList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoindustryClient::DeleteVideoListOutcomeCallable IotvideoindustryClient::DeleteVideoListCallable(const DeleteVideoListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteVideoListOutcome()>>(
        [this, request]()
        {
            return this->DeleteVideoList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAllDeviceList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoindustryClient::DescribeAllDeviceListOutcomeCallable IotvideoindustryClient::DescribeAllDeviceListCallable(const DescribeAllDeviceListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAllDeviceListOutcome()>>(
        [this, request]()
        {
            return this->DescribeAllDeviceList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBindSceneDevices(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoindustryClient::DescribeBindSceneDevicesOutcomeCallable IotvideoindustryClient::DescribeBindSceneDevicesCallable(const DescribeBindSceneDevicesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBindSceneDevicesOutcome()>>(
        [this, request]()
        {
            return this->DescribeBindSceneDevices(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeChannelsByLiveRecordPlan(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoindustryClient::DescribeChannelsByLiveRecordPlanOutcomeCallable IotvideoindustryClient::DescribeChannelsByLiveRecordPlanCallable(const DescribeChannelsByLiveRecordPlanRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeChannelsByLiveRecordPlanOutcome()>>(
        [this, request]()
        {
            return this->DescribeChannelsByLiveRecordPlan(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDeviceGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoindustryClient::DescribeDeviceGroupOutcomeCallable IotvideoindustryClient::DescribeDeviceGroupCallable(const DescribeDeviceGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDeviceGroupOutcome()>>(
        [this, request]()
        {
            return this->DescribeDeviceGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDevicePassWord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoindustryClient::DescribeDevicePassWordOutcomeCallable IotvideoindustryClient::DescribeDevicePassWordCallable(const DescribeDevicePassWordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDevicePassWordOutcome()>>(
        [this, request]()
        {
            return this->DescribeDevicePassWord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDeviceStreams(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoindustryClient::DescribeDeviceStreamsOutcomeCallable IotvideoindustryClient::DescribeDeviceStreamsCallable(const DescribeDeviceStreamsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDeviceStreamsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDeviceStreams(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGroupById(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoindustryClient::DescribeGroupByIdOutcomeCallable IotvideoindustryClient::DescribeGroupByIdCallable(const DescribeGroupByIdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGroupByIdOutcome()>>(
        [this, request]()
        {
            return this->DescribeGroupById(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGroupByPath(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoindustryClient::DescribeGroupByPathOutcomeCallable IotvideoindustryClient::DescribeGroupByPathCallable(const DescribeGroupByPathRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGroupByPathOutcome()>>(
        [this, request]()
        {
            return this->DescribeGroupByPath(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGroupDevices(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoindustryClient::DescribeGroupDevicesOutcomeCallable IotvideoindustryClient::DescribeGroupDevicesCallable(const DescribeGroupDevicesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGroupDevicesOutcome()>>(
        [this, request]()
        {
            return this->DescribeGroupDevices(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoindustryClient::DescribeGroupsOutcomeCallable IotvideoindustryClient::DescribeGroupsCallable(const DescribeGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGroupsOutcome()>>(
        [this, request]()
        {
            return this->DescribeGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeIPCChannels(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoindustryClient::DescribeIPCChannelsOutcomeCallable IotvideoindustryClient::DescribeIPCChannelsCallable(const DescribeIPCChannelsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeIPCChannelsOutcome()>>(
        [this, request]()
        {
            return this->DescribeIPCChannels(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLiveChannel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoindustryClient::DescribeLiveChannelOutcomeCallable IotvideoindustryClient::DescribeLiveChannelCallable(const DescribeLiveChannelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLiveChannelOutcome()>>(
        [this, request]()
        {
            return this->DescribeLiveChannel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLiveChannelList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoindustryClient::DescribeLiveChannelListOutcomeCallable IotvideoindustryClient::DescribeLiveChannelListCallable(const DescribeLiveChannelListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLiveChannelListOutcome()>>(
        [this, request]()
        {
            return this->DescribeLiveChannelList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLiveRecordPlanById(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoindustryClient::DescribeLiveRecordPlanByIdOutcomeCallable IotvideoindustryClient::DescribeLiveRecordPlanByIdCallable(const DescribeLiveRecordPlanByIdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLiveRecordPlanByIdOutcome()>>(
        [this, request]()
        {
            return this->DescribeLiveRecordPlanById(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLiveRecordPlanIds(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoindustryClient::DescribeLiveRecordPlanIdsOutcomeCallable IotvideoindustryClient::DescribeLiveRecordPlanIdsCallable(const DescribeLiveRecordPlanIdsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLiveRecordPlanIdsOutcome()>>(
        [this, request]()
        {
            return this->DescribeLiveRecordPlanIds(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLiveStream(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoindustryClient::DescribeLiveStreamOutcomeCallable IotvideoindustryClient::DescribeLiveStreamCallable(const DescribeLiveStreamRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLiveStreamOutcome()>>(
        [this, request]()
        {
            return this->DescribeLiveStream(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLiveVideoList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoindustryClient::DescribeLiveVideoListOutcomeCallable IotvideoindustryClient::DescribeLiveVideoListCallable(const DescribeLiveVideoListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLiveVideoListOutcome()>>(
        [this, request]()
        {
            return this->DescribeLiveVideoList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMessageForward(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoindustryClient::DescribeMessageForwardOutcomeCallable IotvideoindustryClient::DescribeMessageForwardCallable(const DescribeMessageForwardRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMessageForwardOutcome()>>(
        [this, request]()
        {
            return this->DescribeMessageForward(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMessageForwards(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoindustryClient::DescribeMessageForwardsOutcomeCallable IotvideoindustryClient::DescribeMessageForwardsCallable(const DescribeMessageForwardsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMessageForwardsOutcome()>>(
        [this, request]()
        {
            return this->DescribeMessageForwards(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRecordDatesByLive(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoindustryClient::DescribeRecordDatesByLiveOutcomeCallable IotvideoindustryClient::DescribeRecordDatesByLiveCallable(const DescribeRecordDatesByLiveRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRecordDatesByLiveOutcome()>>(
        [this, request]()
        {
            return this->DescribeRecordDatesByLive(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRecordStream(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoindustryClient::DescribeRecordStreamOutcomeCallable IotvideoindustryClient::DescribeRecordStreamCallable(const DescribeRecordStreamRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRecordStreamOutcome()>>(
        [this, request]()
        {
            return this->DescribeRecordStream(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSIPServer(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoindustryClient::DescribeSIPServerOutcomeCallable IotvideoindustryClient::DescribeSIPServerCallable(const DescribeSIPServerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSIPServerOutcome()>>(
        [this, request]()
        {
            return this->DescribeSIPServer(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeScenes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoindustryClient::DescribeScenesOutcomeCallable IotvideoindustryClient::DescribeScenesCallable(const DescribeScenesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeScenesOutcome()>>(
        [this, request]()
        {
            return this->DescribeScenes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStatisticDetails(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoindustryClient::DescribeStatisticDetailsOutcomeCallable IotvideoindustryClient::DescribeStatisticDetailsCallable(const DescribeStatisticDetailsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStatisticDetailsOutcome()>>(
        [this, request]()
        {
            return this->DescribeStatisticDetails(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStatisticSummary(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoindustryClient::DescribeStatisticSummaryOutcomeCallable IotvideoindustryClient::DescribeStatisticSummaryCallable(const DescribeStatisticSummaryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStatisticSummaryOutcome()>>(
        [this, request]()
        {
            return this->DescribeStatisticSummary(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSubGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoindustryClient::DescribeSubGroupsOutcomeCallable IotvideoindustryClient::DescribeSubGroupsCallable(const DescribeSubGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSubGroupsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSubGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSubscriptionStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoindustryClient::DescribeSubscriptionStatusOutcomeCallable IotvideoindustryClient::DescribeSubscriptionStatusCallable(const DescribeSubscriptionStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSubscriptionStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeSubscriptionStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVideoList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoindustryClient::DescribeVideoListOutcomeCallable IotvideoindustryClient::DescribeVideoListCallable(const DescribeVideoListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVideoListOutcome()>>(
        [this, request]()
        {
            return this->DescribeVideoList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetRecordDatesByDev(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoindustryClient::GetRecordDatesByDevOutcomeCallable IotvideoindustryClient::GetRecordDatesByDevCallable(const GetRecordDatesByDevRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetRecordDatesByDevOutcome()>>(
        [this, request]()
        {
            return this->GetRecordDatesByDev(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetRecordPlanByDev(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoindustryClient::GetRecordPlanByDevOutcomeCallable IotvideoindustryClient::GetRecordPlanByDevCallable(const GetRecordPlanByDevRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetRecordPlanByDevOutcome()>>(
        [this, request]()
        {
            return this->GetRecordPlanByDev(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetRecordPlanById(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoindustryClient::GetRecordPlanByIdOutcomeCallable IotvideoindustryClient::GetRecordPlanByIdCallable(const GetRecordPlanByIdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetRecordPlanByIdOutcome()>>(
        [this, request]()
        {
            return this->GetRecordPlanById(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetRecordPlans(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoindustryClient::GetRecordPlansOutcomeCallable IotvideoindustryClient::GetRecordPlansCallable(const GetRecordPlansRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetRecordPlansOutcome()>>(
        [this, request]()
        {
            return this->GetRecordPlans(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetTimeTemplateById(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoindustryClient::GetTimeTemplateByIdOutcomeCallable IotvideoindustryClient::GetTimeTemplateByIdCallable(const GetTimeTemplateByIdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetTimeTemplateByIdOutcome()>>(
        [this, request]()
        {
            return this->GetTimeTemplateById(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetTimeTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoindustryClient::GetTimeTemplatesOutcomeCallable IotvideoindustryClient::GetTimeTemplatesCallable(const GetTimeTemplatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetTimeTemplatesOutcome()>>(
        [this, request]()
        {
            return this->GetTimeTemplates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetVideoListByCon(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoindustryClient::GetVideoListByConOutcomeCallable IotvideoindustryClient::GetVideoListByConCallable(const GetVideoListByConRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetVideoListByConOutcome()>>(
        [this, request]()
        {
            return this->GetVideoListByCon(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyBindPlanLiveChannel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoindustryClient::ModifyBindPlanLiveChannelOutcomeCallable IotvideoindustryClient::ModifyBindPlanLiveChannelCallable(const ModifyBindPlanLiveChannelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyBindPlanLiveChannelOutcome()>>(
        [this, request]()
        {
            return this->ModifyBindPlanLiveChannel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDeviceData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoindustryClient::ModifyDeviceDataOutcomeCallable IotvideoindustryClient::ModifyDeviceDataCallable(const ModifyDeviceDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDeviceDataOutcome()>>(
        [this, request]()
        {
            return this->ModifyDeviceData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyLiveChannel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoindustryClient::ModifyLiveChannelOutcomeCallable IotvideoindustryClient::ModifyLiveChannelCallable(const ModifyLiveChannelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyLiveChannelOutcome()>>(
        [this, request]()
        {
            return this->ModifyLiveChannel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyLiveRecordPlan(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoindustryClient::ModifyLiveRecordPlanOutcomeCallable IotvideoindustryClient::ModifyLiveRecordPlanCallable(const ModifyLiveRecordPlanRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyLiveRecordPlanOutcome()>>(
        [this, request]()
        {
            return this->ModifyLiveRecordPlan(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyLiveVideo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoindustryClient::ModifyLiveVideoOutcomeCallable IotvideoindustryClient::ModifyLiveVideoCallable(const ModifyLiveVideoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyLiveVideoOutcome()>>(
        [this, request]()
        {
            return this->ModifyLiveVideo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyMessageForward(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoindustryClient::ModifyMessageForwardOutcomeCallable IotvideoindustryClient::ModifyMessageForwardCallable(const ModifyMessageForwardRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyMessageForwardOutcome()>>(
        [this, request]()
        {
            return this->ModifyMessageForward(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySubscriptionStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoindustryClient::ModifySubscriptionStatusOutcomeCallable IotvideoindustryClient::ModifySubscriptionStatusCallable(const ModifySubscriptionStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySubscriptionStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifySubscriptionStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyVideoInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoindustryClient::ModifyVideoInfoOutcomeCallable IotvideoindustryClient::ModifyVideoInfoCallable(const ModifyVideoInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyVideoInfoOutcome()>>(
        [this, request]()
        {
            return this->ModifyVideoInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateDeviceGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoindustryClient::UpdateDeviceGroupOutcomeCallable IotvideoindustryClient::UpdateDeviceGroupCallable(const UpdateDeviceGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateDeviceGroupOutcome()>>(
        [this, request]()
        {
            return this->UpdateDeviceGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateDevicePassWord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoindustryClient::UpdateDevicePassWordOutcomeCallable IotvideoindustryClient::UpdateDevicePassWordCallable(const UpdateDevicePassWordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateDevicePassWordOutcome()>>(
        [this, request]()
        {
            return this->UpdateDevicePassWord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateRecordPlan(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoindustryClient::UpdateRecordPlanOutcomeCallable IotvideoindustryClient::UpdateRecordPlanCallable(const UpdateRecordPlanRequest &request)
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateTimeTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoindustryClient::UpdateTimeTemplateOutcomeCallable IotvideoindustryClient::UpdateTimeTemplateCallable(const UpdateTimeTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateTimeTemplateOutcome()>>(
        [this, request]()
        {
            return this->UpdateTimeTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


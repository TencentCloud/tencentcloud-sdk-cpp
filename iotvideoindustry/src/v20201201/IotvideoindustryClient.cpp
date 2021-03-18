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


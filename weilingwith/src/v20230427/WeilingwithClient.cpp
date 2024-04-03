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

#include <tencentcloud/weilingwith/v20230427/WeilingwithClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Weilingwith::V20230427;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

namespace
{
    const string VERSION = "2023-04-27";
    const string ENDPOINT = "weilingwith.tencentcloudapi.com";
}

WeilingwithClient::WeilingwithClient(const Credential &credential, const string &region) :
    WeilingwithClient(credential, region, ClientProfile())
{
}

WeilingwithClient::WeilingwithClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


WeilingwithClient::AddAlarmProcessRecordOutcome WeilingwithClient::AddAlarmProcessRecord(const AddAlarmProcessRecordRequest &request)
{
    auto outcome = MakeRequest(request, "AddAlarmProcessRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddAlarmProcessRecordResponse rsp = AddAlarmProcessRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddAlarmProcessRecordOutcome(rsp);
        else
            return AddAlarmProcessRecordOutcome(o.GetError());
    }
    else
    {
        return AddAlarmProcessRecordOutcome(outcome.GetError());
    }
}

void WeilingwithClient::AddAlarmProcessRecordAsync(const AddAlarmProcessRecordRequest& request, const AddAlarmProcessRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddAlarmProcessRecord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WeilingwithClient::AddAlarmProcessRecordOutcomeCallable WeilingwithClient::AddAlarmProcessRecordCallable(const AddAlarmProcessRecordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddAlarmProcessRecordOutcome()>>(
        [this, request]()
        {
            return this->AddAlarmProcessRecord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WeilingwithClient::BatchCreateDeviceOutcome WeilingwithClient::BatchCreateDevice(const BatchCreateDeviceRequest &request)
{
    auto outcome = MakeRequest(request, "BatchCreateDevice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchCreateDeviceResponse rsp = BatchCreateDeviceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchCreateDeviceOutcome(rsp);
        else
            return BatchCreateDeviceOutcome(o.GetError());
    }
    else
    {
        return BatchCreateDeviceOutcome(outcome.GetError());
    }
}

void WeilingwithClient::BatchCreateDeviceAsync(const BatchCreateDeviceRequest& request, const BatchCreateDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BatchCreateDevice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WeilingwithClient::BatchCreateDeviceOutcomeCallable WeilingwithClient::BatchCreateDeviceCallable(const BatchCreateDeviceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BatchCreateDeviceOutcome()>>(
        [this, request]()
        {
            return this->BatchCreateDevice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WeilingwithClient::BatchDeleteDeviceOutcome WeilingwithClient::BatchDeleteDevice(const BatchDeleteDeviceRequest &request)
{
    auto outcome = MakeRequest(request, "BatchDeleteDevice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchDeleteDeviceResponse rsp = BatchDeleteDeviceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchDeleteDeviceOutcome(rsp);
        else
            return BatchDeleteDeviceOutcome(o.GetError());
    }
    else
    {
        return BatchDeleteDeviceOutcome(outcome.GetError());
    }
}

void WeilingwithClient::BatchDeleteDeviceAsync(const BatchDeleteDeviceRequest& request, const BatchDeleteDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BatchDeleteDevice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WeilingwithClient::BatchDeleteDeviceOutcomeCallable WeilingwithClient::BatchDeleteDeviceCallable(const BatchDeleteDeviceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BatchDeleteDeviceOutcome()>>(
        [this, request]()
        {
            return this->BatchDeleteDevice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WeilingwithClient::BatchKillAlarmOutcome WeilingwithClient::BatchKillAlarm(const BatchKillAlarmRequest &request)
{
    auto outcome = MakeRequest(request, "BatchKillAlarm");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchKillAlarmResponse rsp = BatchKillAlarmResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchKillAlarmOutcome(rsp);
        else
            return BatchKillAlarmOutcome(o.GetError());
    }
    else
    {
        return BatchKillAlarmOutcome(outcome.GetError());
    }
}

void WeilingwithClient::BatchKillAlarmAsync(const BatchKillAlarmRequest& request, const BatchKillAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BatchKillAlarm(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WeilingwithClient::BatchKillAlarmOutcomeCallable WeilingwithClient::BatchKillAlarmCallable(const BatchKillAlarmRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BatchKillAlarmOutcome()>>(
        [this, request]()
        {
            return this->BatchKillAlarm(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WeilingwithClient::BatchReportAppMessageOutcome WeilingwithClient::BatchReportAppMessage(const BatchReportAppMessageRequest &request)
{
    auto outcome = MakeRequest(request, "BatchReportAppMessage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchReportAppMessageResponse rsp = BatchReportAppMessageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchReportAppMessageOutcome(rsp);
        else
            return BatchReportAppMessageOutcome(o.GetError());
    }
    else
    {
        return BatchReportAppMessageOutcome(outcome.GetError());
    }
}

void WeilingwithClient::BatchReportAppMessageAsync(const BatchReportAppMessageRequest& request, const BatchReportAppMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BatchReportAppMessage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WeilingwithClient::BatchReportAppMessageOutcomeCallable WeilingwithClient::BatchReportAppMessageCallable(const BatchReportAppMessageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BatchReportAppMessageOutcome()>>(
        [this, request]()
        {
            return this->BatchReportAppMessage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WeilingwithClient::ChangeAlarmStatusOutcome WeilingwithClient::ChangeAlarmStatus(const ChangeAlarmStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ChangeAlarmStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChangeAlarmStatusResponse rsp = ChangeAlarmStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChangeAlarmStatusOutcome(rsp);
        else
            return ChangeAlarmStatusOutcome(o.GetError());
    }
    else
    {
        return ChangeAlarmStatusOutcome(outcome.GetError());
    }
}

void WeilingwithClient::ChangeAlarmStatusAsync(const ChangeAlarmStatusRequest& request, const ChangeAlarmStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ChangeAlarmStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WeilingwithClient::ChangeAlarmStatusOutcomeCallable WeilingwithClient::ChangeAlarmStatusCallable(const ChangeAlarmStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ChangeAlarmStatusOutcome()>>(
        [this, request]()
        {
            return this->ChangeAlarmStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WeilingwithClient::ControlCameraPTZOutcome WeilingwithClient::ControlCameraPTZ(const ControlCameraPTZRequest &request)
{
    auto outcome = MakeRequest(request, "ControlCameraPTZ");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ControlCameraPTZResponse rsp = ControlCameraPTZResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ControlCameraPTZOutcome(rsp);
        else
            return ControlCameraPTZOutcome(o.GetError());
    }
    else
    {
        return ControlCameraPTZOutcome(outcome.GetError());
    }
}

void WeilingwithClient::ControlCameraPTZAsync(const ControlCameraPTZRequest& request, const ControlCameraPTZAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ControlCameraPTZ(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WeilingwithClient::ControlCameraPTZOutcomeCallable WeilingwithClient::ControlCameraPTZCallable(const ControlCameraPTZRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ControlCameraPTZOutcome()>>(
        [this, request]()
        {
            return this->ControlCameraPTZ(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WeilingwithClient::ControlDeviceOutcome WeilingwithClient::ControlDevice(const ControlDeviceRequest &request)
{
    auto outcome = MakeRequest(request, "ControlDevice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ControlDeviceResponse rsp = ControlDeviceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ControlDeviceOutcome(rsp);
        else
            return ControlDeviceOutcome(o.GetError());
    }
    else
    {
        return ControlDeviceOutcome(outcome.GetError());
    }
}

void WeilingwithClient::ControlDeviceAsync(const ControlDeviceRequest& request, const ControlDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ControlDevice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WeilingwithClient::ControlDeviceOutcomeCallable WeilingwithClient::ControlDeviceCallable(const ControlDeviceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ControlDeviceOutcome()>>(
        [this, request]()
        {
            return this->ControlDevice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WeilingwithClient::CreateApplicationTokenOutcome WeilingwithClient::CreateApplicationToken(const CreateApplicationTokenRequest &request)
{
    auto outcome = MakeRequest(request, "CreateApplicationToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateApplicationTokenResponse rsp = CreateApplicationTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateApplicationTokenOutcome(rsp);
        else
            return CreateApplicationTokenOutcome(o.GetError());
    }
    else
    {
        return CreateApplicationTokenOutcome(outcome.GetError());
    }
}

void WeilingwithClient::CreateApplicationTokenAsync(const CreateApplicationTokenRequest& request, const CreateApplicationTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateApplicationToken(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WeilingwithClient::CreateApplicationTokenOutcomeCallable WeilingwithClient::CreateApplicationTokenCallable(const CreateApplicationTokenRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateApplicationTokenOutcome()>>(
        [this, request]()
        {
            return this->CreateApplicationToken(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WeilingwithClient::DeleteDeviceGroupOutcome WeilingwithClient::DeleteDeviceGroup(const DeleteDeviceGroupRequest &request)
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

void WeilingwithClient::DeleteDeviceGroupAsync(const DeleteDeviceGroupRequest& request, const DeleteDeviceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDeviceGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WeilingwithClient::DeleteDeviceGroupOutcomeCallable WeilingwithClient::DeleteDeviceGroupCallable(const DeleteDeviceGroupRequest &request)
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

WeilingwithClient::DescribeActionListOutcome WeilingwithClient::DescribeActionList(const DescribeActionListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeActionList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeActionListResponse rsp = DescribeActionListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeActionListOutcome(rsp);
        else
            return DescribeActionListOutcome(o.GetError());
    }
    else
    {
        return DescribeActionListOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeActionListAsync(const DescribeActionListRequest& request, const DescribeActionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeActionList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WeilingwithClient::DescribeActionListOutcomeCallable WeilingwithClient::DescribeActionListCallable(const DescribeActionListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeActionListOutcome()>>(
        [this, request]()
        {
            return this->DescribeActionList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WeilingwithClient::DescribeAdministrationByTagOutcome WeilingwithClient::DescribeAdministrationByTag(const DescribeAdministrationByTagRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAdministrationByTag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAdministrationByTagResponse rsp = DescribeAdministrationByTagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAdministrationByTagOutcome(rsp);
        else
            return DescribeAdministrationByTagOutcome(o.GetError());
    }
    else
    {
        return DescribeAdministrationByTagOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeAdministrationByTagAsync(const DescribeAdministrationByTagRequest& request, const DescribeAdministrationByTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAdministrationByTag(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WeilingwithClient::DescribeAdministrationByTagOutcomeCallable WeilingwithClient::DescribeAdministrationByTagCallable(const DescribeAdministrationByTagRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAdministrationByTagOutcome()>>(
        [this, request]()
        {
            return this->DescribeAdministrationByTag(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WeilingwithClient::DescribeAlarmLevelListOutcome WeilingwithClient::DescribeAlarmLevelList(const DescribeAlarmLevelListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAlarmLevelList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAlarmLevelListResponse rsp = DescribeAlarmLevelListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAlarmLevelListOutcome(rsp);
        else
            return DescribeAlarmLevelListOutcome(o.GetError());
    }
    else
    {
        return DescribeAlarmLevelListOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeAlarmLevelListAsync(const DescribeAlarmLevelListRequest& request, const DescribeAlarmLevelListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAlarmLevelList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WeilingwithClient::DescribeAlarmLevelListOutcomeCallable WeilingwithClient::DescribeAlarmLevelListCallable(const DescribeAlarmLevelListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAlarmLevelListOutcome()>>(
        [this, request]()
        {
            return this->DescribeAlarmLevelList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WeilingwithClient::DescribeAlarmListOutcome WeilingwithClient::DescribeAlarmList(const DescribeAlarmListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAlarmList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAlarmListResponse rsp = DescribeAlarmListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAlarmListOutcome(rsp);
        else
            return DescribeAlarmListOutcome(o.GetError());
    }
    else
    {
        return DescribeAlarmListOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeAlarmListAsync(const DescribeAlarmListRequest& request, const DescribeAlarmListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAlarmList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WeilingwithClient::DescribeAlarmListOutcomeCallable WeilingwithClient::DescribeAlarmListCallable(const DescribeAlarmListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAlarmListOutcome()>>(
        [this, request]()
        {
            return this->DescribeAlarmList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WeilingwithClient::DescribeAlarmStatusListOutcome WeilingwithClient::DescribeAlarmStatusList(const DescribeAlarmStatusListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAlarmStatusList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAlarmStatusListResponse rsp = DescribeAlarmStatusListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAlarmStatusListOutcome(rsp);
        else
            return DescribeAlarmStatusListOutcome(o.GetError());
    }
    else
    {
        return DescribeAlarmStatusListOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeAlarmStatusListAsync(const DescribeAlarmStatusListRequest& request, const DescribeAlarmStatusListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAlarmStatusList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WeilingwithClient::DescribeAlarmStatusListOutcomeCallable WeilingwithClient::DescribeAlarmStatusListCallable(const DescribeAlarmStatusListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAlarmStatusListOutcome()>>(
        [this, request]()
        {
            return this->DescribeAlarmStatusList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WeilingwithClient::DescribeAlarmTypeListOutcome WeilingwithClient::DescribeAlarmTypeList(const DescribeAlarmTypeListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAlarmTypeList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAlarmTypeListResponse rsp = DescribeAlarmTypeListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAlarmTypeListOutcome(rsp);
        else
            return DescribeAlarmTypeListOutcome(o.GetError());
    }
    else
    {
        return DescribeAlarmTypeListOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeAlarmTypeListAsync(const DescribeAlarmTypeListRequest& request, const DescribeAlarmTypeListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAlarmTypeList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WeilingwithClient::DescribeAlarmTypeListOutcomeCallable WeilingwithClient::DescribeAlarmTypeListCallable(const DescribeAlarmTypeListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAlarmTypeListOutcome()>>(
        [this, request]()
        {
            return this->DescribeAlarmTypeList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WeilingwithClient::DescribeApplicationListOutcome WeilingwithClient::DescribeApplicationList(const DescribeApplicationListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApplicationList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApplicationListResponse rsp = DescribeApplicationListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApplicationListOutcome(rsp);
        else
            return DescribeApplicationListOutcome(o.GetError());
    }
    else
    {
        return DescribeApplicationListOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeApplicationListAsync(const DescribeApplicationListRequest& request, const DescribeApplicationListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeApplicationList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WeilingwithClient::DescribeApplicationListOutcomeCallable WeilingwithClient::DescribeApplicationListCallable(const DescribeApplicationListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeApplicationListOutcome()>>(
        [this, request]()
        {
            return this->DescribeApplicationList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WeilingwithClient::DescribeBuildingListOutcome WeilingwithClient::DescribeBuildingList(const DescribeBuildingListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBuildingList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBuildingListResponse rsp = DescribeBuildingListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBuildingListOutcome(rsp);
        else
            return DescribeBuildingListOutcome(o.GetError());
    }
    else
    {
        return DescribeBuildingListOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeBuildingListAsync(const DescribeBuildingListRequest& request, const DescribeBuildingListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBuildingList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WeilingwithClient::DescribeBuildingListOutcomeCallable WeilingwithClient::DescribeBuildingListCallable(const DescribeBuildingListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBuildingListOutcome()>>(
        [this, request]()
        {
            return this->DescribeBuildingList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WeilingwithClient::DescribeBuildingModelOutcome WeilingwithClient::DescribeBuildingModel(const DescribeBuildingModelRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBuildingModel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBuildingModelResponse rsp = DescribeBuildingModelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBuildingModelOutcome(rsp);
        else
            return DescribeBuildingModelOutcome(o.GetError());
    }
    else
    {
        return DescribeBuildingModelOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeBuildingModelAsync(const DescribeBuildingModelRequest& request, const DescribeBuildingModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBuildingModel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WeilingwithClient::DescribeBuildingModelOutcomeCallable WeilingwithClient::DescribeBuildingModelCallable(const DescribeBuildingModelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBuildingModelOutcome()>>(
        [this, request]()
        {
            return this->DescribeBuildingModel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WeilingwithClient::DescribeBuildingProfileOutcome WeilingwithClient::DescribeBuildingProfile(const DescribeBuildingProfileRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBuildingProfile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBuildingProfileResponse rsp = DescribeBuildingProfileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBuildingProfileOutcome(rsp);
        else
            return DescribeBuildingProfileOutcome(o.GetError());
    }
    else
    {
        return DescribeBuildingProfileOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeBuildingProfileAsync(const DescribeBuildingProfileRequest& request, const DescribeBuildingProfileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBuildingProfile(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WeilingwithClient::DescribeBuildingProfileOutcomeCallable WeilingwithClient::DescribeBuildingProfileCallable(const DescribeBuildingProfileRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBuildingProfileOutcome()>>(
        [this, request]()
        {
            return this->DescribeBuildingProfile(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WeilingwithClient::DescribeCameraExtendInfoOutcome WeilingwithClient::DescribeCameraExtendInfo(const DescribeCameraExtendInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCameraExtendInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCameraExtendInfoResponse rsp = DescribeCameraExtendInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCameraExtendInfoOutcome(rsp);
        else
            return DescribeCameraExtendInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeCameraExtendInfoOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeCameraExtendInfoAsync(const DescribeCameraExtendInfoRequest& request, const DescribeCameraExtendInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCameraExtendInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WeilingwithClient::DescribeCameraExtendInfoOutcomeCallable WeilingwithClient::DescribeCameraExtendInfoCallable(const DescribeCameraExtendInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCameraExtendInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeCameraExtendInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WeilingwithClient::DescribeCityWorkspaceListOutcome WeilingwithClient::DescribeCityWorkspaceList(const DescribeCityWorkspaceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCityWorkspaceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCityWorkspaceListResponse rsp = DescribeCityWorkspaceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCityWorkspaceListOutcome(rsp);
        else
            return DescribeCityWorkspaceListOutcome(o.GetError());
    }
    else
    {
        return DescribeCityWorkspaceListOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeCityWorkspaceListAsync(const DescribeCityWorkspaceListRequest& request, const DescribeCityWorkspaceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCityWorkspaceList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WeilingwithClient::DescribeCityWorkspaceListOutcomeCallable WeilingwithClient::DescribeCityWorkspaceListCallable(const DescribeCityWorkspaceListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCityWorkspaceListOutcome()>>(
        [this, request]()
        {
            return this->DescribeCityWorkspaceList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WeilingwithClient::DescribeDeviceGroupListOutcome WeilingwithClient::DescribeDeviceGroupList(const DescribeDeviceGroupListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeviceGroupList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceGroupListResponse rsp = DescribeDeviceGroupListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceGroupListOutcome(rsp);
        else
            return DescribeDeviceGroupListOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceGroupListOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeDeviceGroupListAsync(const DescribeDeviceGroupListRequest& request, const DescribeDeviceGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDeviceGroupList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WeilingwithClient::DescribeDeviceGroupListOutcomeCallable WeilingwithClient::DescribeDeviceGroupListCallable(const DescribeDeviceGroupListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDeviceGroupListOutcome()>>(
        [this, request]()
        {
            return this->DescribeDeviceGroupList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WeilingwithClient::DescribeDeviceListOutcome WeilingwithClient::DescribeDeviceList(const DescribeDeviceListRequest &request)
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

void WeilingwithClient::DescribeDeviceListAsync(const DescribeDeviceListRequest& request, const DescribeDeviceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDeviceList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WeilingwithClient::DescribeDeviceListOutcomeCallable WeilingwithClient::DescribeDeviceListCallable(const DescribeDeviceListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDeviceListOutcome()>>(
        [this, request]()
        {
            return this->DescribeDeviceList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WeilingwithClient::DescribeDeviceShadowListOutcome WeilingwithClient::DescribeDeviceShadowList(const DescribeDeviceShadowListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeviceShadowList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceShadowListResponse rsp = DescribeDeviceShadowListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceShadowListOutcome(rsp);
        else
            return DescribeDeviceShadowListOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceShadowListOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeDeviceShadowListAsync(const DescribeDeviceShadowListRequest& request, const DescribeDeviceShadowListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDeviceShadowList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WeilingwithClient::DescribeDeviceShadowListOutcomeCallable WeilingwithClient::DescribeDeviceShadowListCallable(const DescribeDeviceShadowListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDeviceShadowListOutcome()>>(
        [this, request]()
        {
            return this->DescribeDeviceShadowList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WeilingwithClient::DescribeDeviceStatusListOutcome WeilingwithClient::DescribeDeviceStatusList(const DescribeDeviceStatusListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeviceStatusList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceStatusListResponse rsp = DescribeDeviceStatusListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceStatusListOutcome(rsp);
        else
            return DescribeDeviceStatusListOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceStatusListOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeDeviceStatusListAsync(const DescribeDeviceStatusListRequest& request, const DescribeDeviceStatusListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDeviceStatusList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WeilingwithClient::DescribeDeviceStatusListOutcomeCallable WeilingwithClient::DescribeDeviceStatusListCallable(const DescribeDeviceStatusListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDeviceStatusListOutcome()>>(
        [this, request]()
        {
            return this->DescribeDeviceStatusList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WeilingwithClient::DescribeDeviceStatusStatOutcome WeilingwithClient::DescribeDeviceStatusStat(const DescribeDeviceStatusStatRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeviceStatusStat");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceStatusStatResponse rsp = DescribeDeviceStatusStatResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceStatusStatOutcome(rsp);
        else
            return DescribeDeviceStatusStatOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceStatusStatOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeDeviceStatusStatAsync(const DescribeDeviceStatusStatRequest& request, const DescribeDeviceStatusStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDeviceStatusStat(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WeilingwithClient::DescribeDeviceStatusStatOutcomeCallable WeilingwithClient::DescribeDeviceStatusStatCallable(const DescribeDeviceStatusStatRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDeviceStatusStatOutcome()>>(
        [this, request]()
        {
            return this->DescribeDeviceStatusStat(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WeilingwithClient::DescribeDeviceTagListOutcome WeilingwithClient::DescribeDeviceTagList(const DescribeDeviceTagListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeviceTagList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceTagListResponse rsp = DescribeDeviceTagListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceTagListOutcome(rsp);
        else
            return DescribeDeviceTagListOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceTagListOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeDeviceTagListAsync(const DescribeDeviceTagListRequest& request, const DescribeDeviceTagListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDeviceTagList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WeilingwithClient::DescribeDeviceTagListOutcomeCallable WeilingwithClient::DescribeDeviceTagListCallable(const DescribeDeviceTagListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDeviceTagListOutcome()>>(
        [this, request]()
        {
            return this->DescribeDeviceTagList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WeilingwithClient::DescribeDeviceTypeListOutcome WeilingwithClient::DescribeDeviceTypeList(const DescribeDeviceTypeListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeviceTypeList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceTypeListResponse rsp = DescribeDeviceTypeListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceTypeListOutcome(rsp);
        else
            return DescribeDeviceTypeListOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceTypeListOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeDeviceTypeListAsync(const DescribeDeviceTypeListRequest& request, const DescribeDeviceTypeListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDeviceTypeList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WeilingwithClient::DescribeDeviceTypeListOutcomeCallable WeilingwithClient::DescribeDeviceTypeListCallable(const DescribeDeviceTypeListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDeviceTypeListOutcome()>>(
        [this, request]()
        {
            return this->DescribeDeviceTypeList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WeilingwithClient::DescribeEdgeApplicationTokenOutcome WeilingwithClient::DescribeEdgeApplicationToken(const DescribeEdgeApplicationTokenRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEdgeApplicationToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEdgeApplicationTokenResponse rsp = DescribeEdgeApplicationTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEdgeApplicationTokenOutcome(rsp);
        else
            return DescribeEdgeApplicationTokenOutcome(o.GetError());
    }
    else
    {
        return DescribeEdgeApplicationTokenOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeEdgeApplicationTokenAsync(const DescribeEdgeApplicationTokenRequest& request, const DescribeEdgeApplicationTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEdgeApplicationToken(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WeilingwithClient::DescribeEdgeApplicationTokenOutcomeCallable WeilingwithClient::DescribeEdgeApplicationTokenCallable(const DescribeEdgeApplicationTokenRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEdgeApplicationTokenOutcome()>>(
        [this, request]()
        {
            return this->DescribeEdgeApplicationToken(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WeilingwithClient::DescribeElementProfilePageOutcome WeilingwithClient::DescribeElementProfilePage(const DescribeElementProfilePageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeElementProfilePage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeElementProfilePageResponse rsp = DescribeElementProfilePageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeElementProfilePageOutcome(rsp);
        else
            return DescribeElementProfilePageOutcome(o.GetError());
    }
    else
    {
        return DescribeElementProfilePageOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeElementProfilePageAsync(const DescribeElementProfilePageRequest& request, const DescribeElementProfilePageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeElementProfilePage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WeilingwithClient::DescribeElementProfilePageOutcomeCallable WeilingwithClient::DescribeElementProfilePageCallable(const DescribeElementProfilePageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeElementProfilePageOutcome()>>(
        [this, request]()
        {
            return this->DescribeElementProfilePage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WeilingwithClient::DescribeElementProfileTreeOutcome WeilingwithClient::DescribeElementProfileTree(const DescribeElementProfileTreeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeElementProfileTree");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeElementProfileTreeResponse rsp = DescribeElementProfileTreeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeElementProfileTreeOutcome(rsp);
        else
            return DescribeElementProfileTreeOutcome(o.GetError());
    }
    else
    {
        return DescribeElementProfileTreeOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeElementProfileTreeAsync(const DescribeElementProfileTreeRequest& request, const DescribeElementProfileTreeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeElementProfileTree(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WeilingwithClient::DescribeElementProfileTreeOutcomeCallable WeilingwithClient::DescribeElementProfileTreeCallable(const DescribeElementProfileTreeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeElementProfileTreeOutcome()>>(
        [this, request]()
        {
            return this->DescribeElementProfileTree(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WeilingwithClient::DescribeEventListOutcome WeilingwithClient::DescribeEventList(const DescribeEventListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEventList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEventListResponse rsp = DescribeEventListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEventListOutcome(rsp);
        else
            return DescribeEventListOutcome(o.GetError());
    }
    else
    {
        return DescribeEventListOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeEventListAsync(const DescribeEventListRequest& request, const DescribeEventListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEventList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WeilingwithClient::DescribeEventListOutcomeCallable WeilingwithClient::DescribeEventListCallable(const DescribeEventListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEventListOutcome()>>(
        [this, request]()
        {
            return this->DescribeEventList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WeilingwithClient::DescribeFileDownloadURLOutcome WeilingwithClient::DescribeFileDownloadURL(const DescribeFileDownloadURLRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFileDownloadURL");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFileDownloadURLResponse rsp = DescribeFileDownloadURLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFileDownloadURLOutcome(rsp);
        else
            return DescribeFileDownloadURLOutcome(o.GetError());
    }
    else
    {
        return DescribeFileDownloadURLOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeFileDownloadURLAsync(const DescribeFileDownloadURLRequest& request, const DescribeFileDownloadURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFileDownloadURL(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WeilingwithClient::DescribeFileDownloadURLOutcomeCallable WeilingwithClient::DescribeFileDownloadURLCallable(const DescribeFileDownloadURLRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFileDownloadURLOutcome()>>(
        [this, request]()
        {
            return this->DescribeFileDownloadURL(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WeilingwithClient::DescribeFileUploadURLOutcome WeilingwithClient::DescribeFileUploadURL(const DescribeFileUploadURLRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFileUploadURL");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFileUploadURLResponse rsp = DescribeFileUploadURLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFileUploadURLOutcome(rsp);
        else
            return DescribeFileUploadURLOutcome(o.GetError());
    }
    else
    {
        return DescribeFileUploadURLOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeFileUploadURLAsync(const DescribeFileUploadURLRequest& request, const DescribeFileUploadURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFileUploadURL(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WeilingwithClient::DescribeFileUploadURLOutcomeCallable WeilingwithClient::DescribeFileUploadURLCallable(const DescribeFileUploadURLRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFileUploadURLOutcome()>>(
        [this, request]()
        {
            return this->DescribeFileUploadURL(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WeilingwithClient::DescribeInterfaceListOutcome WeilingwithClient::DescribeInterfaceList(const DescribeInterfaceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInterfaceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInterfaceListResponse rsp = DescribeInterfaceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInterfaceListOutcome(rsp);
        else
            return DescribeInterfaceListOutcome(o.GetError());
    }
    else
    {
        return DescribeInterfaceListOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeInterfaceListAsync(const DescribeInterfaceListRequest& request, const DescribeInterfaceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInterfaceList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WeilingwithClient::DescribeInterfaceListOutcomeCallable WeilingwithClient::DescribeInterfaceListCallable(const DescribeInterfaceListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInterfaceListOutcome()>>(
        [this, request]()
        {
            return this->DescribeInterfaceList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WeilingwithClient::DescribeLinkRuleListOutcome WeilingwithClient::DescribeLinkRuleList(const DescribeLinkRuleListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLinkRuleList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLinkRuleListResponse rsp = DescribeLinkRuleListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLinkRuleListOutcome(rsp);
        else
            return DescribeLinkRuleListOutcome(o.GetError());
    }
    else
    {
        return DescribeLinkRuleListOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeLinkRuleListAsync(const DescribeLinkRuleListRequest& request, const DescribeLinkRuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLinkRuleList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WeilingwithClient::DescribeLinkRuleListOutcomeCallable WeilingwithClient::DescribeLinkRuleListCallable(const DescribeLinkRuleListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLinkRuleListOutcome()>>(
        [this, request]()
        {
            return this->DescribeLinkRuleList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WeilingwithClient::DescribeModelListOutcome WeilingwithClient::DescribeModelList(const DescribeModelListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeModelList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeModelListResponse rsp = DescribeModelListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeModelListOutcome(rsp);
        else
            return DescribeModelListOutcome(o.GetError());
    }
    else
    {
        return DescribeModelListOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeModelListAsync(const DescribeModelListRequest& request, const DescribeModelListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeModelList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WeilingwithClient::DescribeModelListOutcomeCallable WeilingwithClient::DescribeModelListCallable(const DescribeModelListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeModelListOutcome()>>(
        [this, request]()
        {
            return this->DescribeModelList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WeilingwithClient::DescribeProductListOutcome WeilingwithClient::DescribeProductList(const DescribeProductListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProductList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProductListResponse rsp = DescribeProductListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProductListOutcome(rsp);
        else
            return DescribeProductListOutcome(o.GetError());
    }
    else
    {
        return DescribeProductListOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeProductListAsync(const DescribeProductListRequest& request, const DescribeProductListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProductList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WeilingwithClient::DescribeProductListOutcomeCallable WeilingwithClient::DescribeProductListCallable(const DescribeProductListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProductListOutcome()>>(
        [this, request]()
        {
            return this->DescribeProductList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WeilingwithClient::DescribePropertyListOutcome WeilingwithClient::DescribePropertyList(const DescribePropertyListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePropertyList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePropertyListResponse rsp = DescribePropertyListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePropertyListOutcome(rsp);
        else
            return DescribePropertyListOutcome(o.GetError());
    }
    else
    {
        return DescribePropertyListOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribePropertyListAsync(const DescribePropertyListRequest& request, const DescribePropertyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePropertyList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WeilingwithClient::DescribePropertyListOutcomeCallable WeilingwithClient::DescribePropertyListCallable(const DescribePropertyListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePropertyListOutcome()>>(
        [this, request]()
        {
            return this->DescribePropertyList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WeilingwithClient::DescribeRuleDetailOutcome WeilingwithClient::DescribeRuleDetail(const DescribeRuleDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRuleDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRuleDetailResponse rsp = DescribeRuleDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRuleDetailOutcome(rsp);
        else
            return DescribeRuleDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeRuleDetailOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeRuleDetailAsync(const DescribeRuleDetailRequest& request, const DescribeRuleDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRuleDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WeilingwithClient::DescribeRuleDetailOutcomeCallable WeilingwithClient::DescribeRuleDetailCallable(const DescribeRuleDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRuleDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeRuleDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WeilingwithClient::DescribeSceneListOutcome WeilingwithClient::DescribeSceneList(const DescribeSceneListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSceneList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSceneListResponse rsp = DescribeSceneListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSceneListOutcome(rsp);
        else
            return DescribeSceneListOutcome(o.GetError());
    }
    else
    {
        return DescribeSceneListOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeSceneListAsync(const DescribeSceneListRequest& request, const DescribeSceneListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSceneList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WeilingwithClient::DescribeSceneListOutcomeCallable WeilingwithClient::DescribeSceneListCallable(const DescribeSceneListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSceneListOutcome()>>(
        [this, request]()
        {
            return this->DescribeSceneList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WeilingwithClient::DescribeSpaceDeviceIdListOutcome WeilingwithClient::DescribeSpaceDeviceIdList(const DescribeSpaceDeviceIdListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSpaceDeviceIdList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSpaceDeviceIdListResponse rsp = DescribeSpaceDeviceIdListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSpaceDeviceIdListOutcome(rsp);
        else
            return DescribeSpaceDeviceIdListOutcome(o.GetError());
    }
    else
    {
        return DescribeSpaceDeviceIdListOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeSpaceDeviceIdListAsync(const DescribeSpaceDeviceIdListRequest& request, const DescribeSpaceDeviceIdListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSpaceDeviceIdList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WeilingwithClient::DescribeSpaceDeviceIdListOutcomeCallable WeilingwithClient::DescribeSpaceDeviceIdListCallable(const DescribeSpaceDeviceIdListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSpaceDeviceIdListOutcome()>>(
        [this, request]()
        {
            return this->DescribeSpaceDeviceIdList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WeilingwithClient::DescribeSpaceDeviceRelationListOutcome WeilingwithClient::DescribeSpaceDeviceRelationList(const DescribeSpaceDeviceRelationListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSpaceDeviceRelationList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSpaceDeviceRelationListResponse rsp = DescribeSpaceDeviceRelationListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSpaceDeviceRelationListOutcome(rsp);
        else
            return DescribeSpaceDeviceRelationListOutcome(o.GetError());
    }
    else
    {
        return DescribeSpaceDeviceRelationListOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeSpaceDeviceRelationListAsync(const DescribeSpaceDeviceRelationListRequest& request, const DescribeSpaceDeviceRelationListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSpaceDeviceRelationList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WeilingwithClient::DescribeSpaceDeviceRelationListOutcomeCallable WeilingwithClient::DescribeSpaceDeviceRelationListCallable(const DescribeSpaceDeviceRelationListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSpaceDeviceRelationListOutcome()>>(
        [this, request]()
        {
            return this->DescribeSpaceDeviceRelationList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WeilingwithClient::DescribeSpaceInfoByDeviceIdOutcome WeilingwithClient::DescribeSpaceInfoByDeviceId(const DescribeSpaceInfoByDeviceIdRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSpaceInfoByDeviceId");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSpaceInfoByDeviceIdResponse rsp = DescribeSpaceInfoByDeviceIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSpaceInfoByDeviceIdOutcome(rsp);
        else
            return DescribeSpaceInfoByDeviceIdOutcome(o.GetError());
    }
    else
    {
        return DescribeSpaceInfoByDeviceIdOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeSpaceInfoByDeviceIdAsync(const DescribeSpaceInfoByDeviceIdRequest& request, const DescribeSpaceInfoByDeviceIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSpaceInfoByDeviceId(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WeilingwithClient::DescribeSpaceInfoByDeviceIdOutcomeCallable WeilingwithClient::DescribeSpaceInfoByDeviceIdCallable(const DescribeSpaceInfoByDeviceIdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSpaceInfoByDeviceIdOutcome()>>(
        [this, request]()
        {
            return this->DescribeSpaceInfoByDeviceId(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WeilingwithClient::DescribeSpaceRelationByDeviceIdOutcome WeilingwithClient::DescribeSpaceRelationByDeviceId(const DescribeSpaceRelationByDeviceIdRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSpaceRelationByDeviceId");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSpaceRelationByDeviceIdResponse rsp = DescribeSpaceRelationByDeviceIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSpaceRelationByDeviceIdOutcome(rsp);
        else
            return DescribeSpaceRelationByDeviceIdOutcome(o.GetError());
    }
    else
    {
        return DescribeSpaceRelationByDeviceIdOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeSpaceRelationByDeviceIdAsync(const DescribeSpaceRelationByDeviceIdRequest& request, const DescribeSpaceRelationByDeviceIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSpaceRelationByDeviceId(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WeilingwithClient::DescribeSpaceRelationByDeviceIdOutcomeCallable WeilingwithClient::DescribeSpaceRelationByDeviceIdCallable(const DescribeSpaceRelationByDeviceIdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSpaceRelationByDeviceIdOutcome()>>(
        [this, request]()
        {
            return this->DescribeSpaceRelationByDeviceId(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WeilingwithClient::DescribeSpaceTypeListOutcome WeilingwithClient::DescribeSpaceTypeList(const DescribeSpaceTypeListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSpaceTypeList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSpaceTypeListResponse rsp = DescribeSpaceTypeListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSpaceTypeListOutcome(rsp);
        else
            return DescribeSpaceTypeListOutcome(o.GetError());
    }
    else
    {
        return DescribeSpaceTypeListOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeSpaceTypeListAsync(const DescribeSpaceTypeListRequest& request, const DescribeSpaceTypeListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSpaceTypeList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WeilingwithClient::DescribeSpaceTypeListOutcomeCallable WeilingwithClient::DescribeSpaceTypeListCallable(const DescribeSpaceTypeListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSpaceTypeListOutcome()>>(
        [this, request]()
        {
            return this->DescribeSpaceTypeList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WeilingwithClient::DescribeTenantBuildingCountAndAreaOutcome WeilingwithClient::DescribeTenantBuildingCountAndArea(const DescribeTenantBuildingCountAndAreaRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTenantBuildingCountAndArea");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTenantBuildingCountAndAreaResponse rsp = DescribeTenantBuildingCountAndAreaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTenantBuildingCountAndAreaOutcome(rsp);
        else
            return DescribeTenantBuildingCountAndAreaOutcome(o.GetError());
    }
    else
    {
        return DescribeTenantBuildingCountAndAreaOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeTenantBuildingCountAndAreaAsync(const DescribeTenantBuildingCountAndAreaRequest& request, const DescribeTenantBuildingCountAndAreaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTenantBuildingCountAndArea(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WeilingwithClient::DescribeTenantBuildingCountAndAreaOutcomeCallable WeilingwithClient::DescribeTenantBuildingCountAndAreaCallable(const DescribeTenantBuildingCountAndAreaRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTenantBuildingCountAndAreaOutcome()>>(
        [this, request]()
        {
            return this->DescribeTenantBuildingCountAndArea(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WeilingwithClient::DescribeTenantDepartmentListOutcome WeilingwithClient::DescribeTenantDepartmentList(const DescribeTenantDepartmentListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTenantDepartmentList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTenantDepartmentListResponse rsp = DescribeTenantDepartmentListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTenantDepartmentListOutcome(rsp);
        else
            return DescribeTenantDepartmentListOutcome(o.GetError());
    }
    else
    {
        return DescribeTenantDepartmentListOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeTenantDepartmentListAsync(const DescribeTenantDepartmentListRequest& request, const DescribeTenantDepartmentListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTenantDepartmentList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WeilingwithClient::DescribeTenantDepartmentListOutcomeCallable WeilingwithClient::DescribeTenantDepartmentListCallable(const DescribeTenantDepartmentListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTenantDepartmentListOutcome()>>(
        [this, request]()
        {
            return this->DescribeTenantDepartmentList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WeilingwithClient::DescribeTenantUserListOutcome WeilingwithClient::DescribeTenantUserList(const DescribeTenantUserListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTenantUserList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTenantUserListResponse rsp = DescribeTenantUserListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTenantUserListOutcome(rsp);
        else
            return DescribeTenantUserListOutcome(o.GetError());
    }
    else
    {
        return DescribeTenantUserListOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeTenantUserListAsync(const DescribeTenantUserListRequest& request, const DescribeTenantUserListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTenantUserList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WeilingwithClient::DescribeTenantUserListOutcomeCallable WeilingwithClient::DescribeTenantUserListCallable(const DescribeTenantUserListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTenantUserListOutcome()>>(
        [this, request]()
        {
            return this->DescribeTenantUserList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WeilingwithClient::DescribeVideoCloudRecordOutcome WeilingwithClient::DescribeVideoCloudRecord(const DescribeVideoCloudRecordRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVideoCloudRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVideoCloudRecordResponse rsp = DescribeVideoCloudRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVideoCloudRecordOutcome(rsp);
        else
            return DescribeVideoCloudRecordOutcome(o.GetError());
    }
    else
    {
        return DescribeVideoCloudRecordOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeVideoCloudRecordAsync(const DescribeVideoCloudRecordRequest& request, const DescribeVideoCloudRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVideoCloudRecord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WeilingwithClient::DescribeVideoCloudRecordOutcomeCallable WeilingwithClient::DescribeVideoCloudRecordCallable(const DescribeVideoCloudRecordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVideoCloudRecordOutcome()>>(
        [this, request]()
        {
            return this->DescribeVideoCloudRecord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WeilingwithClient::DescribeVideoLiveStreamOutcome WeilingwithClient::DescribeVideoLiveStream(const DescribeVideoLiveStreamRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVideoLiveStream");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVideoLiveStreamResponse rsp = DescribeVideoLiveStreamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVideoLiveStreamOutcome(rsp);
        else
            return DescribeVideoLiveStreamOutcome(o.GetError());
    }
    else
    {
        return DescribeVideoLiveStreamOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeVideoLiveStreamAsync(const DescribeVideoLiveStreamRequest& request, const DescribeVideoLiveStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVideoLiveStream(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WeilingwithClient::DescribeVideoLiveStreamOutcomeCallable WeilingwithClient::DescribeVideoLiveStreamCallable(const DescribeVideoLiveStreamRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVideoLiveStreamOutcome()>>(
        [this, request]()
        {
            return this->DescribeVideoLiveStream(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WeilingwithClient::DescribeVideoRecordStreamOutcome WeilingwithClient::DescribeVideoRecordStream(const DescribeVideoRecordStreamRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVideoRecordStream");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVideoRecordStreamResponse rsp = DescribeVideoRecordStreamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVideoRecordStreamOutcome(rsp);
        else
            return DescribeVideoRecordStreamOutcome(o.GetError());
    }
    else
    {
        return DescribeVideoRecordStreamOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeVideoRecordStreamAsync(const DescribeVideoRecordStreamRequest& request, const DescribeVideoRecordStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVideoRecordStream(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WeilingwithClient::DescribeVideoRecordStreamOutcomeCallable WeilingwithClient::DescribeVideoRecordStreamCallable(const DescribeVideoRecordStreamRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVideoRecordStreamOutcome()>>(
        [this, request]()
        {
            return this->DescribeVideoRecordStream(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WeilingwithClient::DescribeWorkSpaceBuildingCountAndAreaOutcome WeilingwithClient::DescribeWorkSpaceBuildingCountAndArea(const DescribeWorkSpaceBuildingCountAndAreaRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWorkSpaceBuildingCountAndArea");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWorkSpaceBuildingCountAndAreaResponse rsp = DescribeWorkSpaceBuildingCountAndAreaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWorkSpaceBuildingCountAndAreaOutcome(rsp);
        else
            return DescribeWorkSpaceBuildingCountAndAreaOutcome(o.GetError());
    }
    else
    {
        return DescribeWorkSpaceBuildingCountAndAreaOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeWorkSpaceBuildingCountAndAreaAsync(const DescribeWorkSpaceBuildingCountAndAreaRequest& request, const DescribeWorkSpaceBuildingCountAndAreaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWorkSpaceBuildingCountAndArea(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WeilingwithClient::DescribeWorkSpaceBuildingCountAndAreaOutcomeCallable WeilingwithClient::DescribeWorkSpaceBuildingCountAndAreaCallable(const DescribeWorkSpaceBuildingCountAndAreaRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWorkSpaceBuildingCountAndAreaOutcome()>>(
        [this, request]()
        {
            return this->DescribeWorkSpaceBuildingCountAndArea(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WeilingwithClient::DescribeWorkspaceListOutcome WeilingwithClient::DescribeWorkspaceList(const DescribeWorkspaceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWorkspaceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWorkspaceListResponse rsp = DescribeWorkspaceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWorkspaceListOutcome(rsp);
        else
            return DescribeWorkspaceListOutcome(o.GetError());
    }
    else
    {
        return DescribeWorkspaceListOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeWorkspaceListAsync(const DescribeWorkspaceListRequest& request, const DescribeWorkspaceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWorkspaceList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WeilingwithClient::DescribeWorkspaceListOutcomeCallable WeilingwithClient::DescribeWorkspaceListCallable(const DescribeWorkspaceListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWorkspaceListOutcome()>>(
        [this, request]()
        {
            return this->DescribeWorkspaceList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WeilingwithClient::DescribeWorkspaceUserListOutcome WeilingwithClient::DescribeWorkspaceUserList(const DescribeWorkspaceUserListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWorkspaceUserList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWorkspaceUserListResponse rsp = DescribeWorkspaceUserListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWorkspaceUserListOutcome(rsp);
        else
            return DescribeWorkspaceUserListOutcome(o.GetError());
    }
    else
    {
        return DescribeWorkspaceUserListOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeWorkspaceUserListAsync(const DescribeWorkspaceUserListRequest& request, const DescribeWorkspaceUserListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWorkspaceUserList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WeilingwithClient::DescribeWorkspaceUserListOutcomeCallable WeilingwithClient::DescribeWorkspaceUserListCallable(const DescribeWorkspaceUserListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWorkspaceUserListOutcome()>>(
        [this, request]()
        {
            return this->DescribeWorkspaceUserList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WeilingwithClient::ModifyDeviceFieldOutcome WeilingwithClient::ModifyDeviceField(const ModifyDeviceFieldRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDeviceField");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDeviceFieldResponse rsp = ModifyDeviceFieldResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDeviceFieldOutcome(rsp);
        else
            return ModifyDeviceFieldOutcome(o.GetError());
    }
    else
    {
        return ModifyDeviceFieldOutcome(outcome.GetError());
    }
}

void WeilingwithClient::ModifyDeviceFieldAsync(const ModifyDeviceFieldRequest& request, const ModifyDeviceFieldAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDeviceField(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WeilingwithClient::ModifyDeviceFieldOutcomeCallable WeilingwithClient::ModifyDeviceFieldCallable(const ModifyDeviceFieldRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDeviceFieldOutcome()>>(
        [this, request]()
        {
            return this->ModifyDeviceField(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WeilingwithClient::ModifyDeviceGroupOutcome WeilingwithClient::ModifyDeviceGroup(const ModifyDeviceGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDeviceGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDeviceGroupResponse rsp = ModifyDeviceGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDeviceGroupOutcome(rsp);
        else
            return ModifyDeviceGroupOutcome(o.GetError());
    }
    else
    {
        return ModifyDeviceGroupOutcome(outcome.GetError());
    }
}

void WeilingwithClient::ModifyDeviceGroupAsync(const ModifyDeviceGroupRequest& request, const ModifyDeviceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDeviceGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WeilingwithClient::ModifyDeviceGroupOutcomeCallable WeilingwithClient::ModifyDeviceGroupCallable(const ModifyDeviceGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDeviceGroupOutcome()>>(
        [this, request]()
        {
            return this->ModifyDeviceGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WeilingwithClient::ModifyDeviceNameOutcome WeilingwithClient::ModifyDeviceName(const ModifyDeviceNameRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDeviceName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDeviceNameResponse rsp = ModifyDeviceNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDeviceNameOutcome(rsp);
        else
            return ModifyDeviceNameOutcome(o.GetError());
    }
    else
    {
        return ModifyDeviceNameOutcome(outcome.GetError());
    }
}

void WeilingwithClient::ModifyDeviceNameAsync(const ModifyDeviceNameRequest& request, const ModifyDeviceNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDeviceName(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WeilingwithClient::ModifyDeviceNameOutcomeCallable WeilingwithClient::ModifyDeviceNameCallable(const ModifyDeviceNameRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDeviceNameOutcome()>>(
        [this, request]()
        {
            return this->ModifyDeviceName(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WeilingwithClient::ModifyDeviceTagOutcome WeilingwithClient::ModifyDeviceTag(const ModifyDeviceTagRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDeviceTag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDeviceTagResponse rsp = ModifyDeviceTagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDeviceTagOutcome(rsp);
        else
            return ModifyDeviceTagOutcome(o.GetError());
    }
    else
    {
        return ModifyDeviceTagOutcome(outcome.GetError());
    }
}

void WeilingwithClient::ModifyDeviceTagAsync(const ModifyDeviceTagRequest& request, const ModifyDeviceTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDeviceTag(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WeilingwithClient::ModifyDeviceTagOutcomeCallable WeilingwithClient::ModifyDeviceTagCallable(const ModifyDeviceTagRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDeviceTagOutcome()>>(
        [this, request]()
        {
            return this->ModifyDeviceTag(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WeilingwithClient::ReportAppMessageOutcome WeilingwithClient::ReportAppMessage(const ReportAppMessageRequest &request)
{
    auto outcome = MakeRequest(request, "ReportAppMessage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReportAppMessageResponse rsp = ReportAppMessageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReportAppMessageOutcome(rsp);
        else
            return ReportAppMessageOutcome(o.GetError());
    }
    else
    {
        return ReportAppMessageOutcome(outcome.GetError());
    }
}

void WeilingwithClient::ReportAppMessageAsync(const ReportAppMessageRequest& request, const ReportAppMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ReportAppMessage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WeilingwithClient::ReportAppMessageOutcomeCallable WeilingwithClient::ReportAppMessageCallable(const ReportAppMessageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ReportAppMessageOutcome()>>(
        [this, request]()
        {
            return this->ReportAppMessage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WeilingwithClient::SaveDeviceGroupOutcome WeilingwithClient::SaveDeviceGroup(const SaveDeviceGroupRequest &request)
{
    auto outcome = MakeRequest(request, "SaveDeviceGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SaveDeviceGroupResponse rsp = SaveDeviceGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SaveDeviceGroupOutcome(rsp);
        else
            return SaveDeviceGroupOutcome(o.GetError());
    }
    else
    {
        return SaveDeviceGroupOutcome(outcome.GetError());
    }
}

void WeilingwithClient::SaveDeviceGroupAsync(const SaveDeviceGroupRequest& request, const SaveDeviceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SaveDeviceGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WeilingwithClient::SaveDeviceGroupOutcomeCallable WeilingwithClient::SaveDeviceGroupCallable(const SaveDeviceGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SaveDeviceGroupOutcome()>>(
        [this, request]()
        {
            return this->SaveDeviceGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WeilingwithClient::StopVideoStreamingOutcome WeilingwithClient::StopVideoStreaming(const StopVideoStreamingRequest &request)
{
    auto outcome = MakeRequest(request, "StopVideoStreaming");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopVideoStreamingResponse rsp = StopVideoStreamingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopVideoStreamingOutcome(rsp);
        else
            return StopVideoStreamingOutcome(o.GetError());
    }
    else
    {
        return StopVideoStreamingOutcome(outcome.GetError());
    }
}

void WeilingwithClient::StopVideoStreamingAsync(const StopVideoStreamingRequest& request, const StopVideoStreamingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopVideoStreaming(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WeilingwithClient::StopVideoStreamingOutcomeCallable WeilingwithClient::StopVideoStreamingCallable(const StopVideoStreamingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopVideoStreamingOutcome()>>(
        [this, request]()
        {
            return this->StopVideoStreaming(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WeilingwithClient::UpdateWorkspaceParkAttributesOutcome WeilingwithClient::UpdateWorkspaceParkAttributes(const UpdateWorkspaceParkAttributesRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateWorkspaceParkAttributes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateWorkspaceParkAttributesResponse rsp = UpdateWorkspaceParkAttributesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateWorkspaceParkAttributesOutcome(rsp);
        else
            return UpdateWorkspaceParkAttributesOutcome(o.GetError());
    }
    else
    {
        return UpdateWorkspaceParkAttributesOutcome(outcome.GetError());
    }
}

void WeilingwithClient::UpdateWorkspaceParkAttributesAsync(const UpdateWorkspaceParkAttributesRequest& request, const UpdateWorkspaceParkAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateWorkspaceParkAttributes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WeilingwithClient::UpdateWorkspaceParkAttributesOutcomeCallable WeilingwithClient::UpdateWorkspaceParkAttributesCallable(const UpdateWorkspaceParkAttributesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateWorkspaceParkAttributesOutcome()>>(
        [this, request]()
        {
            return this->UpdateWorkspaceParkAttributes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


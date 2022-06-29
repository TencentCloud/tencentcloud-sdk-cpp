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

#include <tencentcloud/gme/v20180711/GmeClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Gme::V20180711;
using namespace TencentCloud::Gme::V20180711::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-07-11";
    const string ENDPOINT = "gme.tencentcloudapi.com";
}

GmeClient::GmeClient(const Credential &credential, const string &region) :
    GmeClient(credential, region, ClientProfile())
{
}

GmeClient::GmeClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


GmeClient::CreateAgeDetectTaskOutcome GmeClient::CreateAgeDetectTask(const CreateAgeDetectTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAgeDetectTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAgeDetectTaskResponse rsp = CreateAgeDetectTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAgeDetectTaskOutcome(rsp);
        else
            return CreateAgeDetectTaskOutcome(o.GetError());
    }
    else
    {
        return CreateAgeDetectTaskOutcome(outcome.GetError());
    }
}

void GmeClient::CreateAgeDetectTaskAsync(const CreateAgeDetectTaskRequest& request, const CreateAgeDetectTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAgeDetectTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GmeClient::CreateAgeDetectTaskOutcomeCallable GmeClient::CreateAgeDetectTaskCallable(const CreateAgeDetectTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAgeDetectTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateAgeDetectTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GmeClient::CreateAppOutcome GmeClient::CreateApp(const CreateAppRequest &request)
{
    auto outcome = MakeRequest(request, "CreateApp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAppResponse rsp = CreateAppResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAppOutcome(rsp);
        else
            return CreateAppOutcome(o.GetError());
    }
    else
    {
        return CreateAppOutcome(outcome.GetError());
    }
}

void GmeClient::CreateAppAsync(const CreateAppRequest& request, const CreateAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateApp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GmeClient::CreateAppOutcomeCallable GmeClient::CreateAppCallable(const CreateAppRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAppOutcome()>>(
        [this, request]()
        {
            return this->CreateApp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GmeClient::CreateScanUserOutcome GmeClient::CreateScanUser(const CreateScanUserRequest &request)
{
    auto outcome = MakeRequest(request, "CreateScanUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateScanUserResponse rsp = CreateScanUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateScanUserOutcome(rsp);
        else
            return CreateScanUserOutcome(o.GetError());
    }
    else
    {
        return CreateScanUserOutcome(outcome.GetError());
    }
}

void GmeClient::CreateScanUserAsync(const CreateScanUserRequest& request, const CreateScanUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateScanUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GmeClient::CreateScanUserOutcomeCallable GmeClient::CreateScanUserCallable(const CreateScanUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateScanUserOutcome()>>(
        [this, request]()
        {
            return this->CreateScanUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GmeClient::DeleteScanUserOutcome GmeClient::DeleteScanUser(const DeleteScanUserRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteScanUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteScanUserResponse rsp = DeleteScanUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteScanUserOutcome(rsp);
        else
            return DeleteScanUserOutcome(o.GetError());
    }
    else
    {
        return DeleteScanUserOutcome(outcome.GetError());
    }
}

void GmeClient::DeleteScanUserAsync(const DeleteScanUserRequest& request, const DeleteScanUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteScanUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GmeClient::DeleteScanUserOutcomeCallable GmeClient::DeleteScanUserCallable(const DeleteScanUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteScanUserOutcome()>>(
        [this, request]()
        {
            return this->DeleteScanUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GmeClient::DescribeAgeDetectTaskOutcome GmeClient::DescribeAgeDetectTask(const DescribeAgeDetectTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAgeDetectTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAgeDetectTaskResponse rsp = DescribeAgeDetectTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAgeDetectTaskOutcome(rsp);
        else
            return DescribeAgeDetectTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeAgeDetectTaskOutcome(outcome.GetError());
    }
}

void GmeClient::DescribeAgeDetectTaskAsync(const DescribeAgeDetectTaskRequest& request, const DescribeAgeDetectTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAgeDetectTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GmeClient::DescribeAgeDetectTaskOutcomeCallable GmeClient::DescribeAgeDetectTaskCallable(const DescribeAgeDetectTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAgeDetectTaskOutcome()>>(
        [this, request]()
        {
            return this->DescribeAgeDetectTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GmeClient::DescribeAppStatisticsOutcome GmeClient::DescribeAppStatistics(const DescribeAppStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAppStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAppStatisticsResponse rsp = DescribeAppStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAppStatisticsOutcome(rsp);
        else
            return DescribeAppStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeAppStatisticsOutcome(outcome.GetError());
    }
}

void GmeClient::DescribeAppStatisticsAsync(const DescribeAppStatisticsRequest& request, const DescribeAppStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAppStatistics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GmeClient::DescribeAppStatisticsOutcomeCallable GmeClient::DescribeAppStatisticsCallable(const DescribeAppStatisticsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAppStatisticsOutcome()>>(
        [this, request]()
        {
            return this->DescribeAppStatistics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GmeClient::DescribeApplicationDataOutcome GmeClient::DescribeApplicationData(const DescribeApplicationDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApplicationData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApplicationDataResponse rsp = DescribeApplicationDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApplicationDataOutcome(rsp);
        else
            return DescribeApplicationDataOutcome(o.GetError());
    }
    else
    {
        return DescribeApplicationDataOutcome(outcome.GetError());
    }
}

void GmeClient::DescribeApplicationDataAsync(const DescribeApplicationDataRequest& request, const DescribeApplicationDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeApplicationData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GmeClient::DescribeApplicationDataOutcomeCallable GmeClient::DescribeApplicationDataCallable(const DescribeApplicationDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeApplicationDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeApplicationData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GmeClient::DescribeFilterResultOutcome GmeClient::DescribeFilterResult(const DescribeFilterResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFilterResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFilterResultResponse rsp = DescribeFilterResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFilterResultOutcome(rsp);
        else
            return DescribeFilterResultOutcome(o.GetError());
    }
    else
    {
        return DescribeFilterResultOutcome(outcome.GetError());
    }
}

void GmeClient::DescribeFilterResultAsync(const DescribeFilterResultRequest& request, const DescribeFilterResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFilterResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GmeClient::DescribeFilterResultOutcomeCallable GmeClient::DescribeFilterResultCallable(const DescribeFilterResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFilterResultOutcome()>>(
        [this, request]()
        {
            return this->DescribeFilterResult(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GmeClient::DescribeFilterResultListOutcome GmeClient::DescribeFilterResultList(const DescribeFilterResultListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFilterResultList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFilterResultListResponse rsp = DescribeFilterResultListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFilterResultListOutcome(rsp);
        else
            return DescribeFilterResultListOutcome(o.GetError());
    }
    else
    {
        return DescribeFilterResultListOutcome(outcome.GetError());
    }
}

void GmeClient::DescribeFilterResultListAsync(const DescribeFilterResultListRequest& request, const DescribeFilterResultListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFilterResultList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GmeClient::DescribeFilterResultListOutcomeCallable GmeClient::DescribeFilterResultListCallable(const DescribeFilterResultListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFilterResultListOutcome()>>(
        [this, request]()
        {
            return this->DescribeFilterResultList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GmeClient::DescribeRealtimeScanConfigOutcome GmeClient::DescribeRealtimeScanConfig(const DescribeRealtimeScanConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRealtimeScanConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRealtimeScanConfigResponse rsp = DescribeRealtimeScanConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRealtimeScanConfigOutcome(rsp);
        else
            return DescribeRealtimeScanConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeRealtimeScanConfigOutcome(outcome.GetError());
    }
}

void GmeClient::DescribeRealtimeScanConfigAsync(const DescribeRealtimeScanConfigRequest& request, const DescribeRealtimeScanConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRealtimeScanConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GmeClient::DescribeRealtimeScanConfigOutcomeCallable GmeClient::DescribeRealtimeScanConfigCallable(const DescribeRealtimeScanConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRealtimeScanConfigOutcome()>>(
        [this, request]()
        {
            return this->DescribeRealtimeScanConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GmeClient::DescribeRoomInfoOutcome GmeClient::DescribeRoomInfo(const DescribeRoomInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRoomInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRoomInfoResponse rsp = DescribeRoomInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRoomInfoOutcome(rsp);
        else
            return DescribeRoomInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeRoomInfoOutcome(outcome.GetError());
    }
}

void GmeClient::DescribeRoomInfoAsync(const DescribeRoomInfoRequest& request, const DescribeRoomInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRoomInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GmeClient::DescribeRoomInfoOutcomeCallable GmeClient::DescribeRoomInfoCallable(const DescribeRoomInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRoomInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeRoomInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GmeClient::DescribeScanResultListOutcome GmeClient::DescribeScanResultList(const DescribeScanResultListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScanResultList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScanResultListResponse rsp = DescribeScanResultListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScanResultListOutcome(rsp);
        else
            return DescribeScanResultListOutcome(o.GetError());
    }
    else
    {
        return DescribeScanResultListOutcome(outcome.GetError());
    }
}

void GmeClient::DescribeScanResultListAsync(const DescribeScanResultListRequest& request, const DescribeScanResultListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeScanResultList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GmeClient::DescribeScanResultListOutcomeCallable GmeClient::DescribeScanResultListCallable(const DescribeScanResultListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeScanResultListOutcome()>>(
        [this, request]()
        {
            return this->DescribeScanResultList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GmeClient::DescribeUserInAndOutTimeOutcome GmeClient::DescribeUserInAndOutTime(const DescribeUserInAndOutTimeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserInAndOutTime");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserInAndOutTimeResponse rsp = DescribeUserInAndOutTimeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserInAndOutTimeOutcome(rsp);
        else
            return DescribeUserInAndOutTimeOutcome(o.GetError());
    }
    else
    {
        return DescribeUserInAndOutTimeOutcome(outcome.GetError());
    }
}

void GmeClient::DescribeUserInAndOutTimeAsync(const DescribeUserInAndOutTimeRequest& request, const DescribeUserInAndOutTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUserInAndOutTime(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GmeClient::DescribeUserInAndOutTimeOutcomeCallable GmeClient::DescribeUserInAndOutTimeCallable(const DescribeUserInAndOutTimeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUserInAndOutTimeOutcome()>>(
        [this, request]()
        {
            return this->DescribeUserInAndOutTime(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GmeClient::ModifyAppStatusOutcome GmeClient::ModifyAppStatus(const ModifyAppStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAppStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAppStatusResponse rsp = ModifyAppStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAppStatusOutcome(rsp);
        else
            return ModifyAppStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyAppStatusOutcome(outcome.GetError());
    }
}

void GmeClient::ModifyAppStatusAsync(const ModifyAppStatusRequest& request, const ModifyAppStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAppStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GmeClient::ModifyAppStatusOutcomeCallable GmeClient::ModifyAppStatusCallable(const ModifyAppStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAppStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyAppStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GmeClient::ModifyRoomInfoOutcome GmeClient::ModifyRoomInfo(const ModifyRoomInfoRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRoomInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRoomInfoResponse rsp = ModifyRoomInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRoomInfoOutcome(rsp);
        else
            return ModifyRoomInfoOutcome(o.GetError());
    }
    else
    {
        return ModifyRoomInfoOutcome(outcome.GetError());
    }
}

void GmeClient::ModifyRoomInfoAsync(const ModifyRoomInfoRequest& request, const ModifyRoomInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRoomInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GmeClient::ModifyRoomInfoOutcomeCallable GmeClient::ModifyRoomInfoCallable(const ModifyRoomInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRoomInfoOutcome()>>(
        [this, request]()
        {
            return this->ModifyRoomInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GmeClient::ScanVoiceOutcome GmeClient::ScanVoice(const ScanVoiceRequest &request)
{
    auto outcome = MakeRequest(request, "ScanVoice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ScanVoiceResponse rsp = ScanVoiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ScanVoiceOutcome(rsp);
        else
            return ScanVoiceOutcome(o.GetError());
    }
    else
    {
        return ScanVoiceOutcome(outcome.GetError());
    }
}

void GmeClient::ScanVoiceAsync(const ScanVoiceRequest& request, const ScanVoiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ScanVoice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GmeClient::ScanVoiceOutcomeCallable GmeClient::ScanVoiceCallable(const ScanVoiceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ScanVoiceOutcome()>>(
        [this, request]()
        {
            return this->ScanVoice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GmeClient::UpdateScanRoomsOutcome GmeClient::UpdateScanRooms(const UpdateScanRoomsRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateScanRooms");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateScanRoomsResponse rsp = UpdateScanRoomsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateScanRoomsOutcome(rsp);
        else
            return UpdateScanRoomsOutcome(o.GetError());
    }
    else
    {
        return UpdateScanRoomsOutcome(outcome.GetError());
    }
}

void GmeClient::UpdateScanRoomsAsync(const UpdateScanRoomsRequest& request, const UpdateScanRoomsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateScanRooms(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GmeClient::UpdateScanRoomsOutcomeCallable GmeClient::UpdateScanRoomsCallable(const UpdateScanRoomsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateScanRoomsOutcome()>>(
        [this, request]()
        {
            return this->UpdateScanRooms(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GmeClient::UpdateScanUsersOutcome GmeClient::UpdateScanUsers(const UpdateScanUsersRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateScanUsers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateScanUsersResponse rsp = UpdateScanUsersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateScanUsersOutcome(rsp);
        else
            return UpdateScanUsersOutcome(o.GetError());
    }
    else
    {
        return UpdateScanUsersOutcome(outcome.GetError());
    }
}

void GmeClient::UpdateScanUsersAsync(const UpdateScanUsersRequest& request, const UpdateScanUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateScanUsers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GmeClient::UpdateScanUsersOutcomeCallable GmeClient::UpdateScanUsersCallable(const UpdateScanUsersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateScanUsersOutcome()>>(
        [this, request]()
        {
            return this->UpdateScanUsers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GmeClient::VoiceFilterOutcome GmeClient::VoiceFilter(const VoiceFilterRequest &request)
{
    auto outcome = MakeRequest(request, "VoiceFilter");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VoiceFilterResponse rsp = VoiceFilterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VoiceFilterOutcome(rsp);
        else
            return VoiceFilterOutcome(o.GetError());
    }
    else
    {
        return VoiceFilterOutcome(outcome.GetError());
    }
}

void GmeClient::VoiceFilterAsync(const VoiceFilterRequest& request, const VoiceFilterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->VoiceFilter(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GmeClient::VoiceFilterOutcomeCallable GmeClient::VoiceFilterCallable(const VoiceFilterRequest &request)
{
    auto task = std::make_shared<std::packaged_task<VoiceFilterOutcome()>>(
        [this, request]()
        {
            return this->VoiceFilter(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


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

GmeClient::CreateCustomizationOutcome GmeClient::CreateCustomization(const CreateCustomizationRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCustomization");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCustomizationResponse rsp = CreateCustomizationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCustomizationOutcome(rsp);
        else
            return CreateCustomizationOutcome(o.GetError());
    }
    else
    {
        return CreateCustomizationOutcome(outcome.GetError());
    }
}

void GmeClient::CreateCustomizationAsync(const CreateCustomizationRequest& request, const CreateCustomizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCustomization(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GmeClient::CreateCustomizationOutcomeCallable GmeClient::CreateCustomizationCallable(const CreateCustomizationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCustomizationOutcome()>>(
        [this, request]()
        {
            return this->CreateCustomization(request);
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

GmeClient::DeleteCustomizationOutcome GmeClient::DeleteCustomization(const DeleteCustomizationRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCustomization");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCustomizationResponse rsp = DeleteCustomizationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCustomizationOutcome(rsp);
        else
            return DeleteCustomizationOutcome(o.GetError());
    }
    else
    {
        return DeleteCustomizationOutcome(outcome.GetError());
    }
}

void GmeClient::DeleteCustomizationAsync(const DeleteCustomizationRequest& request, const DeleteCustomizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCustomization(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GmeClient::DeleteCustomizationOutcomeCallable GmeClient::DeleteCustomizationCallable(const DeleteCustomizationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCustomizationOutcome()>>(
        [this, request]()
        {
            return this->DeleteCustomization(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GmeClient::DeleteRoomMemberOutcome GmeClient::DeleteRoomMember(const DeleteRoomMemberRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRoomMember");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRoomMemberResponse rsp = DeleteRoomMemberResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRoomMemberOutcome(rsp);
        else
            return DeleteRoomMemberOutcome(o.GetError());
    }
    else
    {
        return DeleteRoomMemberOutcome(outcome.GetError());
    }
}

void GmeClient::DeleteRoomMemberAsync(const DeleteRoomMemberRequest& request, const DeleteRoomMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRoomMember(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GmeClient::DeleteRoomMemberOutcomeCallable GmeClient::DeleteRoomMemberCallable(const DeleteRoomMemberRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRoomMemberOutcome()>>(
        [this, request]()
        {
            return this->DeleteRoomMember(request);
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

GmeClient::DescribeApplicationListOutcome GmeClient::DescribeApplicationList(const DescribeApplicationListRequest &request)
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

void GmeClient::DescribeApplicationListAsync(const DescribeApplicationListRequest& request, const DescribeApplicationListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeApplicationList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GmeClient::DescribeApplicationListOutcomeCallable GmeClient::DescribeApplicationListCallable(const DescribeApplicationListRequest &request)
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

GmeClient::DescribeRecordInfoOutcome GmeClient::DescribeRecordInfo(const DescribeRecordInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRecordInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRecordInfoResponse rsp = DescribeRecordInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRecordInfoOutcome(rsp);
        else
            return DescribeRecordInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeRecordInfoOutcome(outcome.GetError());
    }
}

void GmeClient::DescribeRecordInfoAsync(const DescribeRecordInfoRequest& request, const DescribeRecordInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRecordInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GmeClient::DescribeRecordInfoOutcomeCallable GmeClient::DescribeRecordInfoCallable(const DescribeRecordInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRecordInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeRecordInfo(request);
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

GmeClient::DescribeTaskInfoOutcome GmeClient::DescribeTaskInfo(const DescribeTaskInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskInfoResponse rsp = DescribeTaskInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskInfoOutcome(rsp);
        else
            return DescribeTaskInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskInfoOutcome(outcome.GetError());
    }
}

void GmeClient::DescribeTaskInfoAsync(const DescribeTaskInfoRequest& request, const DescribeTaskInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTaskInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GmeClient::DescribeTaskInfoOutcomeCallable GmeClient::DescribeTaskInfoCallable(const DescribeTaskInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTaskInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeTaskInfo(request);
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

GmeClient::GetCustomizationListOutcome GmeClient::GetCustomizationList(const GetCustomizationListRequest &request)
{
    auto outcome = MakeRequest(request, "GetCustomizationList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetCustomizationListResponse rsp = GetCustomizationListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetCustomizationListOutcome(rsp);
        else
            return GetCustomizationListOutcome(o.GetError());
    }
    else
    {
        return GetCustomizationListOutcome(outcome.GetError());
    }
}

void GmeClient::GetCustomizationListAsync(const GetCustomizationListRequest& request, const GetCustomizationListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetCustomizationList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GmeClient::GetCustomizationListOutcomeCallable GmeClient::GetCustomizationListCallable(const GetCustomizationListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetCustomizationListOutcome()>>(
        [this, request]()
        {
            return this->GetCustomizationList(request);
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

GmeClient::ModifyCustomizationOutcome GmeClient::ModifyCustomization(const ModifyCustomizationRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCustomization");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCustomizationResponse rsp = ModifyCustomizationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCustomizationOutcome(rsp);
        else
            return ModifyCustomizationOutcome(o.GetError());
    }
    else
    {
        return ModifyCustomizationOutcome(outcome.GetError());
    }
}

void GmeClient::ModifyCustomizationAsync(const ModifyCustomizationRequest& request, const ModifyCustomizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCustomization(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GmeClient::ModifyCustomizationOutcomeCallable GmeClient::ModifyCustomizationCallable(const ModifyCustomizationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCustomizationOutcome()>>(
        [this, request]()
        {
            return this->ModifyCustomization(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GmeClient::ModifyCustomizationStateOutcome GmeClient::ModifyCustomizationState(const ModifyCustomizationStateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCustomizationState");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCustomizationStateResponse rsp = ModifyCustomizationStateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCustomizationStateOutcome(rsp);
        else
            return ModifyCustomizationStateOutcome(o.GetError());
    }
    else
    {
        return ModifyCustomizationStateOutcome(outcome.GetError());
    }
}

void GmeClient::ModifyCustomizationStateAsync(const ModifyCustomizationStateRequest& request, const ModifyCustomizationStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCustomizationState(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GmeClient::ModifyCustomizationStateOutcomeCallable GmeClient::ModifyCustomizationStateCallable(const ModifyCustomizationStateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCustomizationStateOutcome()>>(
        [this, request]()
        {
            return this->ModifyCustomizationState(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GmeClient::ModifyRecordInfoOutcome GmeClient::ModifyRecordInfo(const ModifyRecordInfoRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRecordInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRecordInfoResponse rsp = ModifyRecordInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRecordInfoOutcome(rsp);
        else
            return ModifyRecordInfoOutcome(o.GetError());
    }
    else
    {
        return ModifyRecordInfoOutcome(outcome.GetError());
    }
}

void GmeClient::ModifyRecordInfoAsync(const ModifyRecordInfoRequest& request, const ModifyRecordInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRecordInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GmeClient::ModifyRecordInfoOutcomeCallable GmeClient::ModifyRecordInfoCallable(const ModifyRecordInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRecordInfoOutcome()>>(
        [this, request]()
        {
            return this->ModifyRecordInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GmeClient::ModifyUserMicStatusOutcome GmeClient::ModifyUserMicStatus(const ModifyUserMicStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyUserMicStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyUserMicStatusResponse rsp = ModifyUserMicStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyUserMicStatusOutcome(rsp);
        else
            return ModifyUserMicStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyUserMicStatusOutcome(outcome.GetError());
    }
}

void GmeClient::ModifyUserMicStatusAsync(const ModifyUserMicStatusRequest& request, const ModifyUserMicStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyUserMicStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GmeClient::ModifyUserMicStatusOutcomeCallable GmeClient::ModifyUserMicStatusCallable(const ModifyUserMicStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyUserMicStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyUserMicStatus(request);
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

GmeClient::StartRecordOutcome GmeClient::StartRecord(const StartRecordRequest &request)
{
    auto outcome = MakeRequest(request, "StartRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartRecordResponse rsp = StartRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartRecordOutcome(rsp);
        else
            return StartRecordOutcome(o.GetError());
    }
    else
    {
        return StartRecordOutcome(outcome.GetError());
    }
}

void GmeClient::StartRecordAsync(const StartRecordRequest& request, const StartRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartRecord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GmeClient::StartRecordOutcomeCallable GmeClient::StartRecordCallable(const StartRecordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartRecordOutcome()>>(
        [this, request]()
        {
            return this->StartRecord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GmeClient::StopRecordOutcome GmeClient::StopRecord(const StopRecordRequest &request)
{
    auto outcome = MakeRequest(request, "StopRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopRecordResponse rsp = StopRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopRecordOutcome(rsp);
        else
            return StopRecordOutcome(o.GetError());
    }
    else
    {
        return StopRecordOutcome(outcome.GetError());
    }
}

void GmeClient::StopRecordAsync(const StopRecordRequest& request, const StopRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopRecord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GmeClient::StopRecordOutcomeCallable GmeClient::StopRecordCallable(const StopRecordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopRecordOutcome()>>(
        [this, request]()
        {
            return this->StopRecord(request);
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


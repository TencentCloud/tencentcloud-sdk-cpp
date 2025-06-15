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

#include <tencentcloud/ioa/v20220601/IoaClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Ioa::V20220601;
using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

namespace
{
    const string VERSION = "2022-06-01";
    const string ENDPOINT = "ioa.tencentcloudapi.com";
}

IoaClient::IoaClient(const Credential &credential, const string &region) :
    IoaClient(credential, region, ClientProfile())
{
}

IoaClient::IoaClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


IoaClient::CreateDLPFileDetectionTaskOutcome IoaClient::CreateDLPFileDetectionTask(const CreateDLPFileDetectionTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDLPFileDetectionTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDLPFileDetectionTaskResponse rsp = CreateDLPFileDetectionTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDLPFileDetectionTaskOutcome(rsp);
        else
            return CreateDLPFileDetectionTaskOutcome(o.GetError());
    }
    else
    {
        return CreateDLPFileDetectionTaskOutcome(outcome.GetError());
    }
}

void IoaClient::CreateDLPFileDetectionTaskAsync(const CreateDLPFileDetectionTaskRequest& request, const CreateDLPFileDetectionTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDLPFileDetectionTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IoaClient::CreateDLPFileDetectionTaskOutcomeCallable IoaClient::CreateDLPFileDetectionTaskCallable(const CreateDLPFileDetectionTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDLPFileDetectionTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateDLPFileDetectionTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IoaClient::CreateDeviceTaskOutcome IoaClient::CreateDeviceTask(const CreateDeviceTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDeviceTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDeviceTaskResponse rsp = CreateDeviceTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDeviceTaskOutcome(rsp);
        else
            return CreateDeviceTaskOutcome(o.GetError());
    }
    else
    {
        return CreateDeviceTaskOutcome(outcome.GetError());
    }
}

void IoaClient::CreateDeviceTaskAsync(const CreateDeviceTaskRequest& request, const CreateDeviceTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDeviceTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IoaClient::CreateDeviceTaskOutcomeCallable IoaClient::CreateDeviceTaskCallable(const CreateDeviceTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDeviceTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateDeviceTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IoaClient::CreateDeviceVirtualGroupOutcome IoaClient::CreateDeviceVirtualGroup(const CreateDeviceVirtualGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDeviceVirtualGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDeviceVirtualGroupResponse rsp = CreateDeviceVirtualGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDeviceVirtualGroupOutcome(rsp);
        else
            return CreateDeviceVirtualGroupOutcome(o.GetError());
    }
    else
    {
        return CreateDeviceVirtualGroupOutcome(outcome.GetError());
    }
}

void IoaClient::CreateDeviceVirtualGroupAsync(const CreateDeviceVirtualGroupRequest& request, const CreateDeviceVirtualGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDeviceVirtualGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IoaClient::CreateDeviceVirtualGroupOutcomeCallable IoaClient::CreateDeviceVirtualGroupCallable(const CreateDeviceVirtualGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDeviceVirtualGroupOutcome()>>(
        [this, request]()
        {
            return this->CreateDeviceVirtualGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IoaClient::CreatePrivilegeCodeOutcome IoaClient::CreatePrivilegeCode(const CreatePrivilegeCodeRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePrivilegeCode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePrivilegeCodeResponse rsp = CreatePrivilegeCodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePrivilegeCodeOutcome(rsp);
        else
            return CreatePrivilegeCodeOutcome(o.GetError());
    }
    else
    {
        return CreatePrivilegeCodeOutcome(outcome.GetError());
    }
}

void IoaClient::CreatePrivilegeCodeAsync(const CreatePrivilegeCodeRequest& request, const CreatePrivilegeCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePrivilegeCode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IoaClient::CreatePrivilegeCodeOutcomeCallable IoaClient::CreatePrivilegeCodeCallable(const CreatePrivilegeCodeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePrivilegeCodeOutcome()>>(
        [this, request]()
        {
            return this->CreatePrivilegeCode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IoaClient::DescribeAccountGroupsOutcome IoaClient::DescribeAccountGroups(const DescribeAccountGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAccountGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAccountGroupsResponse rsp = DescribeAccountGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAccountGroupsOutcome(rsp);
        else
            return DescribeAccountGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeAccountGroupsOutcome(outcome.GetError());
    }
}

void IoaClient::DescribeAccountGroupsAsync(const DescribeAccountGroupsRequest& request, const DescribeAccountGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAccountGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IoaClient::DescribeAccountGroupsOutcomeCallable IoaClient::DescribeAccountGroupsCallable(const DescribeAccountGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAccountGroupsOutcome()>>(
        [this, request]()
        {
            return this->DescribeAccountGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IoaClient::DescribeDLPFileDetectResultOutcome IoaClient::DescribeDLPFileDetectResult(const DescribeDLPFileDetectResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDLPFileDetectResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDLPFileDetectResultResponse rsp = DescribeDLPFileDetectResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDLPFileDetectResultOutcome(rsp);
        else
            return DescribeDLPFileDetectResultOutcome(o.GetError());
    }
    else
    {
        return DescribeDLPFileDetectResultOutcome(outcome.GetError());
    }
}

void IoaClient::DescribeDLPFileDetectResultAsync(const DescribeDLPFileDetectResultRequest& request, const DescribeDLPFileDetectResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDLPFileDetectResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IoaClient::DescribeDLPFileDetectResultOutcomeCallable IoaClient::DescribeDLPFileDetectResultCallable(const DescribeDLPFileDetectResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDLPFileDetectResultOutcome()>>(
        [this, request]()
        {
            return this->DescribeDLPFileDetectResult(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IoaClient::DescribeDeviceHardwareInfoListOutcome IoaClient::DescribeDeviceHardwareInfoList(const DescribeDeviceHardwareInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeviceHardwareInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceHardwareInfoListResponse rsp = DescribeDeviceHardwareInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceHardwareInfoListOutcome(rsp);
        else
            return DescribeDeviceHardwareInfoListOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceHardwareInfoListOutcome(outcome.GetError());
    }
}

void IoaClient::DescribeDeviceHardwareInfoListAsync(const DescribeDeviceHardwareInfoListRequest& request, const DescribeDeviceHardwareInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDeviceHardwareInfoList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IoaClient::DescribeDeviceHardwareInfoListOutcomeCallable IoaClient::DescribeDeviceHardwareInfoListCallable(const DescribeDeviceHardwareInfoListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDeviceHardwareInfoListOutcome()>>(
        [this, request]()
        {
            return this->DescribeDeviceHardwareInfoList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IoaClient::DescribeDeviceInfoOutcome IoaClient::DescribeDeviceInfo(const DescribeDeviceInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeviceInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceInfoResponse rsp = DescribeDeviceInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceInfoOutcome(rsp);
        else
            return DescribeDeviceInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceInfoOutcome(outcome.GetError());
    }
}

void IoaClient::DescribeDeviceInfoAsync(const DescribeDeviceInfoRequest& request, const DescribeDeviceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDeviceInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IoaClient::DescribeDeviceInfoOutcomeCallable IoaClient::DescribeDeviceInfoCallable(const DescribeDeviceInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDeviceInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeDeviceInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IoaClient::DescribeDevicesOutcome IoaClient::DescribeDevices(const DescribeDevicesRequest &request)
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

void IoaClient::DescribeDevicesAsync(const DescribeDevicesRequest& request, const DescribeDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDevices(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IoaClient::DescribeDevicesOutcomeCallable IoaClient::DescribeDevicesCallable(const DescribeDevicesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDevicesOutcome()>>(
        [this, request]()
        {
            return this->DescribeDevices(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IoaClient::DescribeLocalAccountsOutcome IoaClient::DescribeLocalAccounts(const DescribeLocalAccountsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLocalAccounts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLocalAccountsResponse rsp = DescribeLocalAccountsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLocalAccountsOutcome(rsp);
        else
            return DescribeLocalAccountsOutcome(o.GetError());
    }
    else
    {
        return DescribeLocalAccountsOutcome(outcome.GetError());
    }
}

void IoaClient::DescribeLocalAccountsAsync(const DescribeLocalAccountsRequest& request, const DescribeLocalAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLocalAccounts(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IoaClient::DescribeLocalAccountsOutcomeCallable IoaClient::DescribeLocalAccountsCallable(const DescribeLocalAccountsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLocalAccountsOutcome()>>(
        [this, request]()
        {
            return this->DescribeLocalAccounts(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IoaClient::DescribeRootAccountGroupOutcome IoaClient::DescribeRootAccountGroup(const DescribeRootAccountGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRootAccountGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRootAccountGroupResponse rsp = DescribeRootAccountGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRootAccountGroupOutcome(rsp);
        else
            return DescribeRootAccountGroupOutcome(o.GetError());
    }
    else
    {
        return DescribeRootAccountGroupOutcome(outcome.GetError());
    }
}

void IoaClient::DescribeRootAccountGroupAsync(const DescribeRootAccountGroupRequest& request, const DescribeRootAccountGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRootAccountGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IoaClient::DescribeRootAccountGroupOutcomeCallable IoaClient::DescribeRootAccountGroupCallable(const DescribeRootAccountGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRootAccountGroupOutcome()>>(
        [this, request]()
        {
            return this->DescribeRootAccountGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IoaClient::DescribeSoftCensusListByDeviceOutcome IoaClient::DescribeSoftCensusListByDevice(const DescribeSoftCensusListByDeviceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSoftCensusListByDevice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSoftCensusListByDeviceResponse rsp = DescribeSoftCensusListByDeviceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSoftCensusListByDeviceOutcome(rsp);
        else
            return DescribeSoftCensusListByDeviceOutcome(o.GetError());
    }
    else
    {
        return DescribeSoftCensusListByDeviceOutcome(outcome.GetError());
    }
}

void IoaClient::DescribeSoftCensusListByDeviceAsync(const DescribeSoftCensusListByDeviceRequest& request, const DescribeSoftCensusListByDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSoftCensusListByDevice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IoaClient::DescribeSoftCensusListByDeviceOutcomeCallable IoaClient::DescribeSoftCensusListByDeviceCallable(const DescribeSoftCensusListByDeviceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSoftCensusListByDeviceOutcome()>>(
        [this, request]()
        {
            return this->DescribeSoftCensusListByDevice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IoaClient::DescribeSoftwareInformationOutcome IoaClient::DescribeSoftwareInformation(const DescribeSoftwareInformationRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSoftwareInformation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSoftwareInformationResponse rsp = DescribeSoftwareInformationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSoftwareInformationOutcome(rsp);
        else
            return DescribeSoftwareInformationOutcome(o.GetError());
    }
    else
    {
        return DescribeSoftwareInformationOutcome(outcome.GetError());
    }
}

void IoaClient::DescribeSoftwareInformationAsync(const DescribeSoftwareInformationRequest& request, const DescribeSoftwareInformationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSoftwareInformation(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IoaClient::DescribeSoftwareInformationOutcomeCallable IoaClient::DescribeSoftwareInformationCallable(const DescribeSoftwareInformationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSoftwareInformationOutcome()>>(
        [this, request]()
        {
            return this->DescribeSoftwareInformation(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


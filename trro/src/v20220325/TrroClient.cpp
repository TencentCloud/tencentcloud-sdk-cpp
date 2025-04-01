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

#include <tencentcloud/trro/v20220325/TrroClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Trro::V20220325;
using namespace TencentCloud::Trro::V20220325::Model;
using namespace std;

namespace
{
    const string VERSION = "2022-03-25";
    const string ENDPOINT = "trro.tencentcloudapi.com";
}

TrroClient::TrroClient(const Credential &credential, const string &region) :
    TrroClient(credential, region, ClientProfile())
{
}

TrroClient::TrroClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TrroClient::BatchDeleteDevicesOutcome TrroClient::BatchDeleteDevices(const BatchDeleteDevicesRequest &request)
{
    auto outcome = MakeRequest(request, "BatchDeleteDevices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchDeleteDevicesResponse rsp = BatchDeleteDevicesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchDeleteDevicesOutcome(rsp);
        else
            return BatchDeleteDevicesOutcome(o.GetError());
    }
    else
    {
        return BatchDeleteDevicesOutcome(outcome.GetError());
    }
}

void TrroClient::BatchDeleteDevicesAsync(const BatchDeleteDevicesRequest& request, const BatchDeleteDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BatchDeleteDevices(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrroClient::BatchDeleteDevicesOutcomeCallable TrroClient::BatchDeleteDevicesCallable(const BatchDeleteDevicesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BatchDeleteDevicesOutcome()>>(
        [this, request]()
        {
            return this->BatchDeleteDevices(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrroClient::BatchDeletePolicyOutcome TrroClient::BatchDeletePolicy(const BatchDeletePolicyRequest &request)
{
    auto outcome = MakeRequest(request, "BatchDeletePolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchDeletePolicyResponse rsp = BatchDeletePolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchDeletePolicyOutcome(rsp);
        else
            return BatchDeletePolicyOutcome(o.GetError());
    }
    else
    {
        return BatchDeletePolicyOutcome(outcome.GetError());
    }
}

void TrroClient::BatchDeletePolicyAsync(const BatchDeletePolicyRequest& request, const BatchDeletePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BatchDeletePolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrroClient::BatchDeletePolicyOutcomeCallable TrroClient::BatchDeletePolicyCallable(const BatchDeletePolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BatchDeletePolicyOutcome()>>(
        [this, request]()
        {
            return this->BatchDeletePolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrroClient::BoundLicensesOutcome TrroClient::BoundLicenses(const BoundLicensesRequest &request)
{
    auto outcome = MakeRequest(request, "BoundLicenses");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BoundLicensesResponse rsp = BoundLicensesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BoundLicensesOutcome(rsp);
        else
            return BoundLicensesOutcome(o.GetError());
    }
    else
    {
        return BoundLicensesOutcome(outcome.GetError());
    }
}

void TrroClient::BoundLicensesAsync(const BoundLicensesRequest& request, const BoundLicensesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BoundLicenses(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrroClient::BoundLicensesOutcomeCallable TrroClient::BoundLicensesCallable(const BoundLicensesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BoundLicensesOutcome()>>(
        [this, request]()
        {
            return this->BoundLicenses(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrroClient::CreateCloudRecordingOutcome TrroClient::CreateCloudRecording(const CreateCloudRecordingRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCloudRecording");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCloudRecordingResponse rsp = CreateCloudRecordingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCloudRecordingOutcome(rsp);
        else
            return CreateCloudRecordingOutcome(o.GetError());
    }
    else
    {
        return CreateCloudRecordingOutcome(outcome.GetError());
    }
}

void TrroClient::CreateCloudRecordingAsync(const CreateCloudRecordingRequest& request, const CreateCloudRecordingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCloudRecording(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrroClient::CreateCloudRecordingOutcomeCallable TrroClient::CreateCloudRecordingCallable(const CreateCloudRecordingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCloudRecordingOutcome()>>(
        [this, request]()
        {
            return this->CreateCloudRecording(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrroClient::CreateDeviceOutcome TrroClient::CreateDevice(const CreateDeviceRequest &request)
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

void TrroClient::CreateDeviceAsync(const CreateDeviceRequest& request, const CreateDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDevice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrroClient::CreateDeviceOutcomeCallable TrroClient::CreateDeviceCallable(const CreateDeviceRequest &request)
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

TrroClient::CreateProjectOutcome TrroClient::CreateProject(const CreateProjectRequest &request)
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

void TrroClient::CreateProjectAsync(const CreateProjectRequest& request, const CreateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateProject(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrroClient::CreateProjectOutcomeCallable TrroClient::CreateProjectCallable(const CreateProjectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateProjectOutcome()>>(
        [this, request]()
        {
            return this->CreateProject(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrroClient::DeleteCloudRecordingOutcome TrroClient::DeleteCloudRecording(const DeleteCloudRecordingRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCloudRecording");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCloudRecordingResponse rsp = DeleteCloudRecordingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCloudRecordingOutcome(rsp);
        else
            return DeleteCloudRecordingOutcome(o.GetError());
    }
    else
    {
        return DeleteCloudRecordingOutcome(outcome.GetError());
    }
}

void TrroClient::DeleteCloudRecordingAsync(const DeleteCloudRecordingRequest& request, const DeleteCloudRecordingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCloudRecording(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrroClient::DeleteCloudRecordingOutcomeCallable TrroClient::DeleteCloudRecordingCallable(const DeleteCloudRecordingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCloudRecordingOutcome()>>(
        [this, request]()
        {
            return this->DeleteCloudRecording(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrroClient::DeleteProjectOutcome TrroClient::DeleteProject(const DeleteProjectRequest &request)
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

void TrroClient::DeleteProjectAsync(const DeleteProjectRequest& request, const DeleteProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteProject(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrroClient::DeleteProjectOutcomeCallable TrroClient::DeleteProjectCallable(const DeleteProjectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteProjectOutcome()>>(
        [this, request]()
        {
            return this->DeleteProject(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrroClient::DescribeDeviceInfoOutcome TrroClient::DescribeDeviceInfo(const DescribeDeviceInfoRequest &request)
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

void TrroClient::DescribeDeviceInfoAsync(const DescribeDeviceInfoRequest& request, const DescribeDeviceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDeviceInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrroClient::DescribeDeviceInfoOutcomeCallable TrroClient::DescribeDeviceInfoCallable(const DescribeDeviceInfoRequest &request)
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

TrroClient::DescribeDeviceListOutcome TrroClient::DescribeDeviceList(const DescribeDeviceListRequest &request)
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

void TrroClient::DescribeDeviceListAsync(const DescribeDeviceListRequest& request, const DescribeDeviceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDeviceList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrroClient::DescribeDeviceListOutcomeCallable TrroClient::DescribeDeviceListCallable(const DescribeDeviceListRequest &request)
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

TrroClient::DescribeDeviceSessionDetailsOutcome TrroClient::DescribeDeviceSessionDetails(const DescribeDeviceSessionDetailsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeviceSessionDetails");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceSessionDetailsResponse rsp = DescribeDeviceSessionDetailsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceSessionDetailsOutcome(rsp);
        else
            return DescribeDeviceSessionDetailsOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceSessionDetailsOutcome(outcome.GetError());
    }
}

void TrroClient::DescribeDeviceSessionDetailsAsync(const DescribeDeviceSessionDetailsRequest& request, const DescribeDeviceSessionDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDeviceSessionDetails(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrroClient::DescribeDeviceSessionDetailsOutcomeCallable TrroClient::DescribeDeviceSessionDetailsCallable(const DescribeDeviceSessionDetailsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDeviceSessionDetailsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDeviceSessionDetails(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrroClient::DescribeDeviceSessionListOutcome TrroClient::DescribeDeviceSessionList(const DescribeDeviceSessionListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeviceSessionList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceSessionListResponse rsp = DescribeDeviceSessionListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceSessionListOutcome(rsp);
        else
            return DescribeDeviceSessionListOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceSessionListOutcome(outcome.GetError());
    }
}

void TrroClient::DescribeDeviceSessionListAsync(const DescribeDeviceSessionListRequest& request, const DescribeDeviceSessionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDeviceSessionList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrroClient::DescribeDeviceSessionListOutcomeCallable TrroClient::DescribeDeviceSessionListCallable(const DescribeDeviceSessionListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDeviceSessionListOutcome()>>(
        [this, request]()
        {
            return this->DescribeDeviceSessionList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrroClient::DescribePolicyOutcome TrroClient::DescribePolicy(const DescribePolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePolicyResponse rsp = DescribePolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePolicyOutcome(rsp);
        else
            return DescribePolicyOutcome(o.GetError());
    }
    else
    {
        return DescribePolicyOutcome(outcome.GetError());
    }
}

void TrroClient::DescribePolicyAsync(const DescribePolicyRequest& request, const DescribePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrroClient::DescribePolicyOutcomeCallable TrroClient::DescribePolicyCallable(const DescribePolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePolicyOutcome()>>(
        [this, request]()
        {
            return this->DescribePolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrroClient::DescribeProjectInfoOutcome TrroClient::DescribeProjectInfo(const DescribeProjectInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProjectInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProjectInfoResponse rsp = DescribeProjectInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProjectInfoOutcome(rsp);
        else
            return DescribeProjectInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeProjectInfoOutcome(outcome.GetError());
    }
}

void TrroClient::DescribeProjectInfoAsync(const DescribeProjectInfoRequest& request, const DescribeProjectInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProjectInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrroClient::DescribeProjectInfoOutcomeCallable TrroClient::DescribeProjectInfoCallable(const DescribeProjectInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProjectInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeProjectInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrroClient::DescribeProjectListOutcome TrroClient::DescribeProjectList(const DescribeProjectListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProjectList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProjectListResponse rsp = DescribeProjectListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProjectListOutcome(rsp);
        else
            return DescribeProjectListOutcome(o.GetError());
    }
    else
    {
        return DescribeProjectListOutcome(outcome.GetError());
    }
}

void TrroClient::DescribeProjectListAsync(const DescribeProjectListRequest& request, const DescribeProjectListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProjectList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrroClient::DescribeProjectListOutcomeCallable TrroClient::DescribeProjectListCallable(const DescribeProjectListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProjectListOutcome()>>(
        [this, request]()
        {
            return this->DescribeProjectList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrroClient::DescribeRecentSessionListOutcome TrroClient::DescribeRecentSessionList(const DescribeRecentSessionListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRecentSessionList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRecentSessionListResponse rsp = DescribeRecentSessionListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRecentSessionListOutcome(rsp);
        else
            return DescribeRecentSessionListOutcome(o.GetError());
    }
    else
    {
        return DescribeRecentSessionListOutcome(outcome.GetError());
    }
}

void TrroClient::DescribeRecentSessionListAsync(const DescribeRecentSessionListRequest& request, const DescribeRecentSessionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRecentSessionList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrroClient::DescribeRecentSessionListOutcomeCallable TrroClient::DescribeRecentSessionListCallable(const DescribeRecentSessionListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRecentSessionListOutcome()>>(
        [this, request]()
        {
            return this->DescribeRecentSessionList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrroClient::DescribeSessionStatisticsOutcome TrroClient::DescribeSessionStatistics(const DescribeSessionStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSessionStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSessionStatisticsResponse rsp = DescribeSessionStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSessionStatisticsOutcome(rsp);
        else
            return DescribeSessionStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeSessionStatisticsOutcome(outcome.GetError());
    }
}

void TrroClient::DescribeSessionStatisticsAsync(const DescribeSessionStatisticsRequest& request, const DescribeSessionStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSessionStatistics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrroClient::DescribeSessionStatisticsOutcomeCallable TrroClient::DescribeSessionStatisticsCallable(const DescribeSessionStatisticsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSessionStatisticsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSessionStatistics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrroClient::DescribeSessionStatisticsByIntervalOutcome TrroClient::DescribeSessionStatisticsByInterval(const DescribeSessionStatisticsByIntervalRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSessionStatisticsByInterval");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSessionStatisticsByIntervalResponse rsp = DescribeSessionStatisticsByIntervalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSessionStatisticsByIntervalOutcome(rsp);
        else
            return DescribeSessionStatisticsByIntervalOutcome(o.GetError());
    }
    else
    {
        return DescribeSessionStatisticsByIntervalOutcome(outcome.GetError());
    }
}

void TrroClient::DescribeSessionStatisticsByIntervalAsync(const DescribeSessionStatisticsByIntervalRequest& request, const DescribeSessionStatisticsByIntervalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSessionStatisticsByInterval(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrroClient::DescribeSessionStatisticsByIntervalOutcomeCallable TrroClient::DescribeSessionStatisticsByIntervalCallable(const DescribeSessionStatisticsByIntervalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSessionStatisticsByIntervalOutcome()>>(
        [this, request]()
        {
            return this->DescribeSessionStatisticsByInterval(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrroClient::GetDeviceLicenseOutcome TrroClient::GetDeviceLicense(const GetDeviceLicenseRequest &request)
{
    auto outcome = MakeRequest(request, "GetDeviceLicense");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetDeviceLicenseResponse rsp = GetDeviceLicenseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetDeviceLicenseOutcome(rsp);
        else
            return GetDeviceLicenseOutcome(o.GetError());
    }
    else
    {
        return GetDeviceLicenseOutcome(outcome.GetError());
    }
}

void TrroClient::GetDeviceLicenseAsync(const GetDeviceLicenseRequest& request, const GetDeviceLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetDeviceLicense(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrroClient::GetDeviceLicenseOutcomeCallable TrroClient::GetDeviceLicenseCallable(const GetDeviceLicenseRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetDeviceLicenseOutcome()>>(
        [this, request]()
        {
            return this->GetDeviceLicense(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrroClient::GetDevicesOutcome TrroClient::GetDevices(const GetDevicesRequest &request)
{
    auto outcome = MakeRequest(request, "GetDevices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetDevicesResponse rsp = GetDevicesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetDevicesOutcome(rsp);
        else
            return GetDevicesOutcome(o.GetError());
    }
    else
    {
        return GetDevicesOutcome(outcome.GetError());
    }
}

void TrroClient::GetDevicesAsync(const GetDevicesRequest& request, const GetDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetDevices(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrroClient::GetDevicesOutcomeCallable TrroClient::GetDevicesCallable(const GetDevicesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetDevicesOutcome()>>(
        [this, request]()
        {
            return this->GetDevices(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrroClient::GetLicenseStatOutcome TrroClient::GetLicenseStat(const GetLicenseStatRequest &request)
{
    auto outcome = MakeRequest(request, "GetLicenseStat");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetLicenseStatResponse rsp = GetLicenseStatResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetLicenseStatOutcome(rsp);
        else
            return GetLicenseStatOutcome(o.GetError());
    }
    else
    {
        return GetLicenseStatOutcome(outcome.GetError());
    }
}

void TrroClient::GetLicenseStatAsync(const GetLicenseStatRequest& request, const GetLicenseStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetLicenseStat(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrroClient::GetLicenseStatOutcomeCallable TrroClient::GetLicenseStatCallable(const GetLicenseStatRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetLicenseStatOutcome()>>(
        [this, request]()
        {
            return this->GetLicenseStat(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrroClient::GetLicensesOutcome TrroClient::GetLicenses(const GetLicensesRequest &request)
{
    auto outcome = MakeRequest(request, "GetLicenses");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetLicensesResponse rsp = GetLicensesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetLicensesOutcome(rsp);
        else
            return GetLicensesOutcome(o.GetError());
    }
    else
    {
        return GetLicensesOutcome(outcome.GetError());
    }
}

void TrroClient::GetLicensesAsync(const GetLicensesRequest& request, const GetLicensesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetLicenses(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrroClient::GetLicensesOutcomeCallable TrroClient::GetLicensesCallable(const GetLicensesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetLicensesOutcome()>>(
        [this, request]()
        {
            return this->GetLicenses(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrroClient::ModifyCallbackUrlOutcome TrroClient::ModifyCallbackUrl(const ModifyCallbackUrlRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCallbackUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCallbackUrlResponse rsp = ModifyCallbackUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCallbackUrlOutcome(rsp);
        else
            return ModifyCallbackUrlOutcome(o.GetError());
    }
    else
    {
        return ModifyCallbackUrlOutcome(outcome.GetError());
    }
}

void TrroClient::ModifyCallbackUrlAsync(const ModifyCallbackUrlRequest& request, const ModifyCallbackUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCallbackUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrroClient::ModifyCallbackUrlOutcomeCallable TrroClient::ModifyCallbackUrlCallable(const ModifyCallbackUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCallbackUrlOutcome()>>(
        [this, request]()
        {
            return this->ModifyCallbackUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrroClient::ModifyDeviceOutcome TrroClient::ModifyDevice(const ModifyDeviceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDevice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDeviceResponse rsp = ModifyDeviceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDeviceOutcome(rsp);
        else
            return ModifyDeviceOutcome(o.GetError());
    }
    else
    {
        return ModifyDeviceOutcome(outcome.GetError());
    }
}

void TrroClient::ModifyDeviceAsync(const ModifyDeviceRequest& request, const ModifyDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDevice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrroClient::ModifyDeviceOutcomeCallable TrroClient::ModifyDeviceCallable(const ModifyDeviceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDeviceOutcome()>>(
        [this, request]()
        {
            return this->ModifyDevice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrroClient::ModifyPolicyOutcome TrroClient::ModifyPolicy(const ModifyPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPolicyResponse rsp = ModifyPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPolicyOutcome(rsp);
        else
            return ModifyPolicyOutcome(o.GetError());
    }
    else
    {
        return ModifyPolicyOutcome(outcome.GetError());
    }
}

void TrroClient::ModifyPolicyAsync(const ModifyPolicyRequest& request, const ModifyPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrroClient::ModifyPolicyOutcomeCallable TrroClient::ModifyPolicyCallable(const ModifyPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyPolicyOutcome()>>(
        [this, request]()
        {
            return this->ModifyPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrroClient::ModifyProjectOutcome TrroClient::ModifyProject(const ModifyProjectRequest &request)
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

void TrroClient::ModifyProjectAsync(const ModifyProjectRequest& request, const ModifyProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyProject(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrroClient::ModifyProjectOutcomeCallable TrroClient::ModifyProjectCallable(const ModifyProjectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyProjectOutcome()>>(
        [this, request]()
        {
            return this->ModifyProject(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrroClient::ModifyProjectSecModeOutcome TrroClient::ModifyProjectSecMode(const ModifyProjectSecModeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyProjectSecMode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyProjectSecModeResponse rsp = ModifyProjectSecModeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyProjectSecModeOutcome(rsp);
        else
            return ModifyProjectSecModeOutcome(o.GetError());
    }
    else
    {
        return ModifyProjectSecModeOutcome(outcome.GetError());
    }
}

void TrroClient::ModifyProjectSecModeAsync(const ModifyProjectSecModeRequest& request, const ModifyProjectSecModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyProjectSecMode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrroClient::ModifyProjectSecModeOutcomeCallable TrroClient::ModifyProjectSecModeCallable(const ModifyProjectSecModeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyProjectSecModeOutcome()>>(
        [this, request]()
        {
            return this->ModifyProjectSecMode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrroClient::StartPublishLiveStreamOutcome TrroClient::StartPublishLiveStream(const StartPublishLiveStreamRequest &request)
{
    auto outcome = MakeRequest(request, "StartPublishLiveStream");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartPublishLiveStreamResponse rsp = StartPublishLiveStreamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartPublishLiveStreamOutcome(rsp);
        else
            return StartPublishLiveStreamOutcome(o.GetError());
    }
    else
    {
        return StartPublishLiveStreamOutcome(outcome.GetError());
    }
}

void TrroClient::StartPublishLiveStreamAsync(const StartPublishLiveStreamRequest& request, const StartPublishLiveStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartPublishLiveStream(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrroClient::StartPublishLiveStreamOutcomeCallable TrroClient::StartPublishLiveStreamCallable(const StartPublishLiveStreamRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartPublishLiveStreamOutcome()>>(
        [this, request]()
        {
            return this->StartPublishLiveStream(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrroClient::StopPublishLiveStreamOutcome TrroClient::StopPublishLiveStream(const StopPublishLiveStreamRequest &request)
{
    auto outcome = MakeRequest(request, "StopPublishLiveStream");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopPublishLiveStreamResponse rsp = StopPublishLiveStreamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopPublishLiveStreamOutcome(rsp);
        else
            return StopPublishLiveStreamOutcome(o.GetError());
    }
    else
    {
        return StopPublishLiveStreamOutcome(outcome.GetError());
    }
}

void TrroClient::StopPublishLiveStreamAsync(const StopPublishLiveStreamRequest& request, const StopPublishLiveStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopPublishLiveStream(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrroClient::StopPublishLiveStreamOutcomeCallable TrroClient::StopPublishLiveStreamCallable(const StopPublishLiveStreamRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopPublishLiveStreamOutcome()>>(
        [this, request]()
        {
            return this->StopPublishLiveStream(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


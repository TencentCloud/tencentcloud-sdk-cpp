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

#include <tencentcloud/mmps/v20200710/MmpsClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Mmps::V20200710;
using namespace TencentCloud::Mmps::V20200710::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-07-10";
    const string ENDPOINT = "mmps.tencentcloudapi.com";
}

MmpsClient::MmpsClient(const Credential &credential, const string &region) :
    MmpsClient(credential, region, ClientProfile())
{
}

MmpsClient::MmpsClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


MmpsClient::CreateAppScanTaskOutcome MmpsClient::CreateAppScanTask(const CreateAppScanTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAppScanTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAppScanTaskResponse rsp = CreateAppScanTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAppScanTaskOutcome(rsp);
        else
            return CreateAppScanTaskOutcome(o.GetError());
    }
    else
    {
        return CreateAppScanTaskOutcome(outcome.GetError());
    }
}

void MmpsClient::CreateAppScanTaskAsync(const CreateAppScanTaskRequest& request, const CreateAppScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAppScanTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MmpsClient::CreateAppScanTaskOutcomeCallable MmpsClient::CreateAppScanTaskCallable(const CreateAppScanTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAppScanTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateAppScanTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MmpsClient::CreateAppScanTaskRepeatOutcome MmpsClient::CreateAppScanTaskRepeat(const CreateAppScanTaskRepeatRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAppScanTaskRepeat");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAppScanTaskRepeatResponse rsp = CreateAppScanTaskRepeatResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAppScanTaskRepeatOutcome(rsp);
        else
            return CreateAppScanTaskRepeatOutcome(o.GetError());
    }
    else
    {
        return CreateAppScanTaskRepeatOutcome(outcome.GetError());
    }
}

void MmpsClient::CreateAppScanTaskRepeatAsync(const CreateAppScanTaskRepeatRequest& request, const CreateAppScanTaskRepeatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAppScanTaskRepeat(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MmpsClient::CreateAppScanTaskRepeatOutcomeCallable MmpsClient::CreateAppScanTaskRepeatCallable(const CreateAppScanTaskRepeatRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAppScanTaskRepeatOutcome()>>(
        [this, request]()
        {
            return this->CreateAppScanTaskRepeat(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MmpsClient::CreateFlySecMiniAppProfessionalScanTaskOutcome MmpsClient::CreateFlySecMiniAppProfessionalScanTask(const CreateFlySecMiniAppProfessionalScanTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFlySecMiniAppProfessionalScanTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFlySecMiniAppProfessionalScanTaskResponse rsp = CreateFlySecMiniAppProfessionalScanTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFlySecMiniAppProfessionalScanTaskOutcome(rsp);
        else
            return CreateFlySecMiniAppProfessionalScanTaskOutcome(o.GetError());
    }
    else
    {
        return CreateFlySecMiniAppProfessionalScanTaskOutcome(outcome.GetError());
    }
}

void MmpsClient::CreateFlySecMiniAppProfessionalScanTaskAsync(const CreateFlySecMiniAppProfessionalScanTaskRequest& request, const CreateFlySecMiniAppProfessionalScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateFlySecMiniAppProfessionalScanTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MmpsClient::CreateFlySecMiniAppProfessionalScanTaskOutcomeCallable MmpsClient::CreateFlySecMiniAppProfessionalScanTaskCallable(const CreateFlySecMiniAppProfessionalScanTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateFlySecMiniAppProfessionalScanTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateFlySecMiniAppProfessionalScanTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MmpsClient::CreateFlySecMiniAppScanTaskOutcome MmpsClient::CreateFlySecMiniAppScanTask(const CreateFlySecMiniAppScanTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFlySecMiniAppScanTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFlySecMiniAppScanTaskResponse rsp = CreateFlySecMiniAppScanTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFlySecMiniAppScanTaskOutcome(rsp);
        else
            return CreateFlySecMiniAppScanTaskOutcome(o.GetError());
    }
    else
    {
        return CreateFlySecMiniAppScanTaskOutcome(outcome.GetError());
    }
}

void MmpsClient::CreateFlySecMiniAppScanTaskAsync(const CreateFlySecMiniAppScanTaskRequest& request, const CreateFlySecMiniAppScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateFlySecMiniAppScanTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MmpsClient::CreateFlySecMiniAppScanTaskOutcomeCallable MmpsClient::CreateFlySecMiniAppScanTaskCallable(const CreateFlySecMiniAppScanTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateFlySecMiniAppScanTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateFlySecMiniAppScanTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MmpsClient::CreateFlySecMiniAppScanTaskRepeatOutcome MmpsClient::CreateFlySecMiniAppScanTaskRepeat(const CreateFlySecMiniAppScanTaskRepeatRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFlySecMiniAppScanTaskRepeat");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFlySecMiniAppScanTaskRepeatResponse rsp = CreateFlySecMiniAppScanTaskRepeatResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFlySecMiniAppScanTaskRepeatOutcome(rsp);
        else
            return CreateFlySecMiniAppScanTaskRepeatOutcome(o.GetError());
    }
    else
    {
        return CreateFlySecMiniAppScanTaskRepeatOutcome(outcome.GetError());
    }
}

void MmpsClient::CreateFlySecMiniAppScanTaskRepeatAsync(const CreateFlySecMiniAppScanTaskRepeatRequest& request, const CreateFlySecMiniAppScanTaskRepeatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateFlySecMiniAppScanTaskRepeat(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MmpsClient::CreateFlySecMiniAppScanTaskRepeatOutcomeCallable MmpsClient::CreateFlySecMiniAppScanTaskRepeatCallable(const CreateFlySecMiniAppScanTaskRepeatRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateFlySecMiniAppScanTaskRepeatOutcome()>>(
        [this, request]()
        {
            return this->CreateFlySecMiniAppScanTaskRepeat(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MmpsClient::DescribeBasicDiagnosisResourceUsageInfoOutcome MmpsClient::DescribeBasicDiagnosisResourceUsageInfo(const DescribeBasicDiagnosisResourceUsageInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBasicDiagnosisResourceUsageInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBasicDiagnosisResourceUsageInfoResponse rsp = DescribeBasicDiagnosisResourceUsageInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBasicDiagnosisResourceUsageInfoOutcome(rsp);
        else
            return DescribeBasicDiagnosisResourceUsageInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeBasicDiagnosisResourceUsageInfoOutcome(outcome.GetError());
    }
}

void MmpsClient::DescribeBasicDiagnosisResourceUsageInfoAsync(const DescribeBasicDiagnosisResourceUsageInfoRequest& request, const DescribeBasicDiagnosisResourceUsageInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBasicDiagnosisResourceUsageInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MmpsClient::DescribeBasicDiagnosisResourceUsageInfoOutcomeCallable MmpsClient::DescribeBasicDiagnosisResourceUsageInfoCallable(const DescribeBasicDiagnosisResourceUsageInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBasicDiagnosisResourceUsageInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeBasicDiagnosisResourceUsageInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MmpsClient::DescribeFlySecMiniAppReportUrlOutcome MmpsClient::DescribeFlySecMiniAppReportUrl(const DescribeFlySecMiniAppReportUrlRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFlySecMiniAppReportUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFlySecMiniAppReportUrlResponse rsp = DescribeFlySecMiniAppReportUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFlySecMiniAppReportUrlOutcome(rsp);
        else
            return DescribeFlySecMiniAppReportUrlOutcome(o.GetError());
    }
    else
    {
        return DescribeFlySecMiniAppReportUrlOutcome(outcome.GetError());
    }
}

void MmpsClient::DescribeFlySecMiniAppReportUrlAsync(const DescribeFlySecMiniAppReportUrlRequest& request, const DescribeFlySecMiniAppReportUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFlySecMiniAppReportUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MmpsClient::DescribeFlySecMiniAppReportUrlOutcomeCallable MmpsClient::DescribeFlySecMiniAppReportUrlCallable(const DescribeFlySecMiniAppReportUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFlySecMiniAppReportUrlOutcome()>>(
        [this, request]()
        {
            return this->DescribeFlySecMiniAppReportUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MmpsClient::DescribeFlySecMiniAppScanReportListOutcome MmpsClient::DescribeFlySecMiniAppScanReportList(const DescribeFlySecMiniAppScanReportListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFlySecMiniAppScanReportList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFlySecMiniAppScanReportListResponse rsp = DescribeFlySecMiniAppScanReportListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFlySecMiniAppScanReportListOutcome(rsp);
        else
            return DescribeFlySecMiniAppScanReportListOutcome(o.GetError());
    }
    else
    {
        return DescribeFlySecMiniAppScanReportListOutcome(outcome.GetError());
    }
}

void MmpsClient::DescribeFlySecMiniAppScanReportListAsync(const DescribeFlySecMiniAppScanReportListRequest& request, const DescribeFlySecMiniAppScanReportListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFlySecMiniAppScanReportList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MmpsClient::DescribeFlySecMiniAppScanReportListOutcomeCallable MmpsClient::DescribeFlySecMiniAppScanReportListCallable(const DescribeFlySecMiniAppScanReportListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFlySecMiniAppScanReportListOutcome()>>(
        [this, request]()
        {
            return this->DescribeFlySecMiniAppScanReportList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MmpsClient::DescribeFlySecMiniAppScanTaskListOutcome MmpsClient::DescribeFlySecMiniAppScanTaskList(const DescribeFlySecMiniAppScanTaskListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFlySecMiniAppScanTaskList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFlySecMiniAppScanTaskListResponse rsp = DescribeFlySecMiniAppScanTaskListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFlySecMiniAppScanTaskListOutcome(rsp);
        else
            return DescribeFlySecMiniAppScanTaskListOutcome(o.GetError());
    }
    else
    {
        return DescribeFlySecMiniAppScanTaskListOutcome(outcome.GetError());
    }
}

void MmpsClient::DescribeFlySecMiniAppScanTaskListAsync(const DescribeFlySecMiniAppScanTaskListRequest& request, const DescribeFlySecMiniAppScanTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFlySecMiniAppScanTaskList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MmpsClient::DescribeFlySecMiniAppScanTaskListOutcomeCallable MmpsClient::DescribeFlySecMiniAppScanTaskListCallable(const DescribeFlySecMiniAppScanTaskListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFlySecMiniAppScanTaskListOutcome()>>(
        [this, request]()
        {
            return this->DescribeFlySecMiniAppScanTaskList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MmpsClient::DescribeFlySecMiniAppScanTaskParamOutcome MmpsClient::DescribeFlySecMiniAppScanTaskParam(const DescribeFlySecMiniAppScanTaskParamRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFlySecMiniAppScanTaskParam");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFlySecMiniAppScanTaskParamResponse rsp = DescribeFlySecMiniAppScanTaskParamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFlySecMiniAppScanTaskParamOutcome(rsp);
        else
            return DescribeFlySecMiniAppScanTaskParamOutcome(o.GetError());
    }
    else
    {
        return DescribeFlySecMiniAppScanTaskParamOutcome(outcome.GetError());
    }
}

void MmpsClient::DescribeFlySecMiniAppScanTaskParamAsync(const DescribeFlySecMiniAppScanTaskParamRequest& request, const DescribeFlySecMiniAppScanTaskParamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFlySecMiniAppScanTaskParam(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MmpsClient::DescribeFlySecMiniAppScanTaskParamOutcomeCallable MmpsClient::DescribeFlySecMiniAppScanTaskParamCallable(const DescribeFlySecMiniAppScanTaskParamRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFlySecMiniAppScanTaskParamOutcome()>>(
        [this, request]()
        {
            return this->DescribeFlySecMiniAppScanTaskParam(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MmpsClient::DescribeFlySecMiniAppScanTaskStatusOutcome MmpsClient::DescribeFlySecMiniAppScanTaskStatus(const DescribeFlySecMiniAppScanTaskStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFlySecMiniAppScanTaskStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFlySecMiniAppScanTaskStatusResponse rsp = DescribeFlySecMiniAppScanTaskStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFlySecMiniAppScanTaskStatusOutcome(rsp);
        else
            return DescribeFlySecMiniAppScanTaskStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeFlySecMiniAppScanTaskStatusOutcome(outcome.GetError());
    }
}

void MmpsClient::DescribeFlySecMiniAppScanTaskStatusAsync(const DescribeFlySecMiniAppScanTaskStatusRequest& request, const DescribeFlySecMiniAppScanTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFlySecMiniAppScanTaskStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MmpsClient::DescribeFlySecMiniAppScanTaskStatusOutcomeCallable MmpsClient::DescribeFlySecMiniAppScanTaskStatusCallable(const DescribeFlySecMiniAppScanTaskStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFlySecMiniAppScanTaskStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeFlySecMiniAppScanTaskStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MmpsClient::DescribeResourceUsageInfoOutcome MmpsClient::DescribeResourceUsageInfo(const DescribeResourceUsageInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResourceUsageInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResourceUsageInfoResponse rsp = DescribeResourceUsageInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResourceUsageInfoOutcome(rsp);
        else
            return DescribeResourceUsageInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeResourceUsageInfoOutcome(outcome.GetError());
    }
}

void MmpsClient::DescribeResourceUsageInfoAsync(const DescribeResourceUsageInfoRequest& request, const DescribeResourceUsageInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeResourceUsageInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MmpsClient::DescribeResourceUsageInfoOutcomeCallable MmpsClient::DescribeResourceUsageInfoCallable(const DescribeResourceUsageInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeResourceUsageInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeResourceUsageInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MmpsClient::DescribeScanTaskListOutcome MmpsClient::DescribeScanTaskList(const DescribeScanTaskListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScanTaskList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScanTaskListResponse rsp = DescribeScanTaskListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScanTaskListOutcome(rsp);
        else
            return DescribeScanTaskListOutcome(o.GetError());
    }
    else
    {
        return DescribeScanTaskListOutcome(outcome.GetError());
    }
}

void MmpsClient::DescribeScanTaskListAsync(const DescribeScanTaskListRequest& request, const DescribeScanTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeScanTaskList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MmpsClient::DescribeScanTaskListOutcomeCallable MmpsClient::DescribeScanTaskListCallable(const DescribeScanTaskListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeScanTaskListOutcome()>>(
        [this, request]()
        {
            return this->DescribeScanTaskList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MmpsClient::DescribeScanTaskReportUrlOutcome MmpsClient::DescribeScanTaskReportUrl(const DescribeScanTaskReportUrlRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScanTaskReportUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScanTaskReportUrlResponse rsp = DescribeScanTaskReportUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScanTaskReportUrlOutcome(rsp);
        else
            return DescribeScanTaskReportUrlOutcome(o.GetError());
    }
    else
    {
        return DescribeScanTaskReportUrlOutcome(outcome.GetError());
    }
}

void MmpsClient::DescribeScanTaskReportUrlAsync(const DescribeScanTaskReportUrlRequest& request, const DescribeScanTaskReportUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeScanTaskReportUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MmpsClient::DescribeScanTaskReportUrlOutcomeCallable MmpsClient::DescribeScanTaskReportUrlCallable(const DescribeScanTaskReportUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeScanTaskReportUrlOutcome()>>(
        [this, request]()
        {
            return this->DescribeScanTaskReportUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MmpsClient::DescribeScanTaskStatusOutcome MmpsClient::DescribeScanTaskStatus(const DescribeScanTaskStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScanTaskStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScanTaskStatusResponse rsp = DescribeScanTaskStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScanTaskStatusOutcome(rsp);
        else
            return DescribeScanTaskStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeScanTaskStatusOutcome(outcome.GetError());
    }
}

void MmpsClient::DescribeScanTaskStatusAsync(const DescribeScanTaskStatusRequest& request, const DescribeScanTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeScanTaskStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MmpsClient::DescribeScanTaskStatusOutcomeCallable MmpsClient::DescribeScanTaskStatusCallable(const DescribeScanTaskStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeScanTaskStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeScanTaskStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


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

#include <tencentcloud/tiw/v20190919/TiwClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tiw::V20190919;
using namespace TencentCloud::Tiw::V20190919::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-09-19";
    const string ENDPOINT = "tiw.tencentcloudapi.com";
}

TiwClient::TiwClient(const Credential &credential, const string &region) :
    TiwClient(credential, region, ClientProfile())
{
}

TiwClient::TiwClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TiwClient::ApplyTiwTrialOutcome TiwClient::ApplyTiwTrial(const ApplyTiwTrialRequest &request)
{
    auto outcome = MakeRequest(request, "ApplyTiwTrial");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ApplyTiwTrialResponse rsp = ApplyTiwTrialResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ApplyTiwTrialOutcome(rsp);
        else
            return ApplyTiwTrialOutcome(o.GetError());
    }
    else
    {
        return ApplyTiwTrialOutcome(outcome.GetError());
    }
}

void TiwClient::ApplyTiwTrialAsync(const ApplyTiwTrialRequest& request, const ApplyTiwTrialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ApplyTiwTrial(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiwClient::ApplyTiwTrialOutcomeCallable TiwClient::ApplyTiwTrialCallable(const ApplyTiwTrialRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ApplyTiwTrialOutcome()>>(
        [this, request]()
        {
            return this->ApplyTiwTrial(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiwClient::CreateApplicationOutcome TiwClient::CreateApplication(const CreateApplicationRequest &request)
{
    auto outcome = MakeRequest(request, "CreateApplication");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateApplicationResponse rsp = CreateApplicationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateApplicationOutcome(rsp);
        else
            return CreateApplicationOutcome(o.GetError());
    }
    else
    {
        return CreateApplicationOutcome(outcome.GetError());
    }
}

void TiwClient::CreateApplicationAsync(const CreateApplicationRequest& request, const CreateApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateApplication(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiwClient::CreateApplicationOutcomeCallable TiwClient::CreateApplicationCallable(const CreateApplicationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateApplicationOutcome()>>(
        [this, request]()
        {
            return this->CreateApplication(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiwClient::CreateOfflineRecordOutcome TiwClient::CreateOfflineRecord(const CreateOfflineRecordRequest &request)
{
    auto outcome = MakeRequest(request, "CreateOfflineRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateOfflineRecordResponse rsp = CreateOfflineRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateOfflineRecordOutcome(rsp);
        else
            return CreateOfflineRecordOutcome(o.GetError());
    }
    else
    {
        return CreateOfflineRecordOutcome(outcome.GetError());
    }
}

void TiwClient::CreateOfflineRecordAsync(const CreateOfflineRecordRequest& request, const CreateOfflineRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateOfflineRecord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiwClient::CreateOfflineRecordOutcomeCallable TiwClient::CreateOfflineRecordCallable(const CreateOfflineRecordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateOfflineRecordOutcome()>>(
        [this, request]()
        {
            return this->CreateOfflineRecord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiwClient::CreateSnapshotTaskOutcome TiwClient::CreateSnapshotTask(const CreateSnapshotTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSnapshotTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSnapshotTaskResponse rsp = CreateSnapshotTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSnapshotTaskOutcome(rsp);
        else
            return CreateSnapshotTaskOutcome(o.GetError());
    }
    else
    {
        return CreateSnapshotTaskOutcome(outcome.GetError());
    }
}

void TiwClient::CreateSnapshotTaskAsync(const CreateSnapshotTaskRequest& request, const CreateSnapshotTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSnapshotTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiwClient::CreateSnapshotTaskOutcomeCallable TiwClient::CreateSnapshotTaskCallable(const CreateSnapshotTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSnapshotTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateSnapshotTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiwClient::CreateTranscodeOutcome TiwClient::CreateTranscode(const CreateTranscodeRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTranscode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTranscodeResponse rsp = CreateTranscodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTranscodeOutcome(rsp);
        else
            return CreateTranscodeOutcome(o.GetError());
    }
    else
    {
        return CreateTranscodeOutcome(outcome.GetError());
    }
}

void TiwClient::CreateTranscodeAsync(const CreateTranscodeRequest& request, const CreateTranscodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTranscode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiwClient::CreateTranscodeOutcomeCallable TiwClient::CreateTranscodeCallable(const CreateTranscodeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTranscodeOutcome()>>(
        [this, request]()
        {
            return this->CreateTranscode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiwClient::CreateVideoGenerationTaskOutcome TiwClient::CreateVideoGenerationTask(const CreateVideoGenerationTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateVideoGenerationTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateVideoGenerationTaskResponse rsp = CreateVideoGenerationTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateVideoGenerationTaskOutcome(rsp);
        else
            return CreateVideoGenerationTaskOutcome(o.GetError());
    }
    else
    {
        return CreateVideoGenerationTaskOutcome(outcome.GetError());
    }
}

void TiwClient::CreateVideoGenerationTaskAsync(const CreateVideoGenerationTaskRequest& request, const CreateVideoGenerationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateVideoGenerationTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiwClient::CreateVideoGenerationTaskOutcomeCallable TiwClient::CreateVideoGenerationTaskCallable(const CreateVideoGenerationTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateVideoGenerationTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateVideoGenerationTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiwClient::DescribeAPIServiceOutcome TiwClient::DescribeAPIService(const DescribeAPIServiceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAPIService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAPIServiceResponse rsp = DescribeAPIServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAPIServiceOutcome(rsp);
        else
            return DescribeAPIServiceOutcome(o.GetError());
    }
    else
    {
        return DescribeAPIServiceOutcome(outcome.GetError());
    }
}

void TiwClient::DescribeAPIServiceAsync(const DescribeAPIServiceRequest& request, const DescribeAPIServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAPIService(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiwClient::DescribeAPIServiceOutcomeCallable TiwClient::DescribeAPIServiceCallable(const DescribeAPIServiceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAPIServiceOutcome()>>(
        [this, request]()
        {
            return this->DescribeAPIService(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiwClient::DescribeApplicationInfosOutcome TiwClient::DescribeApplicationInfos(const DescribeApplicationInfosRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApplicationInfos");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApplicationInfosResponse rsp = DescribeApplicationInfosResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApplicationInfosOutcome(rsp);
        else
            return DescribeApplicationInfosOutcome(o.GetError());
    }
    else
    {
        return DescribeApplicationInfosOutcome(outcome.GetError());
    }
}

void TiwClient::DescribeApplicationInfosAsync(const DescribeApplicationInfosRequest& request, const DescribeApplicationInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeApplicationInfos(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiwClient::DescribeApplicationInfosOutcomeCallable TiwClient::DescribeApplicationInfosCallable(const DescribeApplicationInfosRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeApplicationInfosOutcome()>>(
        [this, request]()
        {
            return this->DescribeApplicationInfos(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiwClient::DescribeApplicationUsageOutcome TiwClient::DescribeApplicationUsage(const DescribeApplicationUsageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApplicationUsage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApplicationUsageResponse rsp = DescribeApplicationUsageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApplicationUsageOutcome(rsp);
        else
            return DescribeApplicationUsageOutcome(o.GetError());
    }
    else
    {
        return DescribeApplicationUsageOutcome(outcome.GetError());
    }
}

void TiwClient::DescribeApplicationUsageAsync(const DescribeApplicationUsageRequest& request, const DescribeApplicationUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeApplicationUsage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiwClient::DescribeApplicationUsageOutcomeCallable TiwClient::DescribeApplicationUsageCallable(const DescribeApplicationUsageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeApplicationUsageOutcome()>>(
        [this, request]()
        {
            return this->DescribeApplicationUsage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiwClient::DescribeBoardSDKLogOutcome TiwClient::DescribeBoardSDKLog(const DescribeBoardSDKLogRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBoardSDKLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBoardSDKLogResponse rsp = DescribeBoardSDKLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBoardSDKLogOutcome(rsp);
        else
            return DescribeBoardSDKLogOutcome(o.GetError());
    }
    else
    {
        return DescribeBoardSDKLogOutcome(outcome.GetError());
    }
}

void TiwClient::DescribeBoardSDKLogAsync(const DescribeBoardSDKLogRequest& request, const DescribeBoardSDKLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBoardSDKLog(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiwClient::DescribeBoardSDKLogOutcomeCallable TiwClient::DescribeBoardSDKLogCallable(const DescribeBoardSDKLogRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBoardSDKLogOutcome()>>(
        [this, request]()
        {
            return this->DescribeBoardSDKLog(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiwClient::DescribeIMApplicationsOutcome TiwClient::DescribeIMApplications(const DescribeIMApplicationsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIMApplications");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIMApplicationsResponse rsp = DescribeIMApplicationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIMApplicationsOutcome(rsp);
        else
            return DescribeIMApplicationsOutcome(o.GetError());
    }
    else
    {
        return DescribeIMApplicationsOutcome(outcome.GetError());
    }
}

void TiwClient::DescribeIMApplicationsAsync(const DescribeIMApplicationsRequest& request, const DescribeIMApplicationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeIMApplications(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiwClient::DescribeIMApplicationsOutcomeCallable TiwClient::DescribeIMApplicationsCallable(const DescribeIMApplicationsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeIMApplicationsOutcome()>>(
        [this, request]()
        {
            return this->DescribeIMApplications(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiwClient::DescribeOfflineRecordOutcome TiwClient::DescribeOfflineRecord(const DescribeOfflineRecordRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOfflineRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOfflineRecordResponse rsp = DescribeOfflineRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOfflineRecordOutcome(rsp);
        else
            return DescribeOfflineRecordOutcome(o.GetError());
    }
    else
    {
        return DescribeOfflineRecordOutcome(outcome.GetError());
    }
}

void TiwClient::DescribeOfflineRecordAsync(const DescribeOfflineRecordRequest& request, const DescribeOfflineRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOfflineRecord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiwClient::DescribeOfflineRecordOutcomeCallable TiwClient::DescribeOfflineRecordCallable(const DescribeOfflineRecordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOfflineRecordOutcome()>>(
        [this, request]()
        {
            return this->DescribeOfflineRecord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiwClient::DescribeOfflineRecordCallbackOutcome TiwClient::DescribeOfflineRecordCallback(const DescribeOfflineRecordCallbackRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOfflineRecordCallback");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOfflineRecordCallbackResponse rsp = DescribeOfflineRecordCallbackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOfflineRecordCallbackOutcome(rsp);
        else
            return DescribeOfflineRecordCallbackOutcome(o.GetError());
    }
    else
    {
        return DescribeOfflineRecordCallbackOutcome(outcome.GetError());
    }
}

void TiwClient::DescribeOfflineRecordCallbackAsync(const DescribeOfflineRecordCallbackRequest& request, const DescribeOfflineRecordCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOfflineRecordCallback(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiwClient::DescribeOfflineRecordCallbackOutcomeCallable TiwClient::DescribeOfflineRecordCallbackCallable(const DescribeOfflineRecordCallbackRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOfflineRecordCallbackOutcome()>>(
        [this, request]()
        {
            return this->DescribeOfflineRecordCallback(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiwClient::DescribeOnlineRecordOutcome TiwClient::DescribeOnlineRecord(const DescribeOnlineRecordRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOnlineRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOnlineRecordResponse rsp = DescribeOnlineRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOnlineRecordOutcome(rsp);
        else
            return DescribeOnlineRecordOutcome(o.GetError());
    }
    else
    {
        return DescribeOnlineRecordOutcome(outcome.GetError());
    }
}

void TiwClient::DescribeOnlineRecordAsync(const DescribeOnlineRecordRequest& request, const DescribeOnlineRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOnlineRecord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiwClient::DescribeOnlineRecordOutcomeCallable TiwClient::DescribeOnlineRecordCallable(const DescribeOnlineRecordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOnlineRecordOutcome()>>(
        [this, request]()
        {
            return this->DescribeOnlineRecord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiwClient::DescribeOnlineRecordCallbackOutcome TiwClient::DescribeOnlineRecordCallback(const DescribeOnlineRecordCallbackRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOnlineRecordCallback");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOnlineRecordCallbackResponse rsp = DescribeOnlineRecordCallbackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOnlineRecordCallbackOutcome(rsp);
        else
            return DescribeOnlineRecordCallbackOutcome(o.GetError());
    }
    else
    {
        return DescribeOnlineRecordCallbackOutcome(outcome.GetError());
    }
}

void TiwClient::DescribeOnlineRecordCallbackAsync(const DescribeOnlineRecordCallbackRequest& request, const DescribeOnlineRecordCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOnlineRecordCallback(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiwClient::DescribeOnlineRecordCallbackOutcomeCallable TiwClient::DescribeOnlineRecordCallbackCallable(const DescribeOnlineRecordCallbackRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOnlineRecordCallbackOutcome()>>(
        [this, request]()
        {
            return this->DescribeOnlineRecordCallback(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiwClient::DescribePostpaidUsageOutcome TiwClient::DescribePostpaidUsage(const DescribePostpaidUsageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePostpaidUsage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePostpaidUsageResponse rsp = DescribePostpaidUsageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePostpaidUsageOutcome(rsp);
        else
            return DescribePostpaidUsageOutcome(o.GetError());
    }
    else
    {
        return DescribePostpaidUsageOutcome(outcome.GetError());
    }
}

void TiwClient::DescribePostpaidUsageAsync(const DescribePostpaidUsageRequest& request, const DescribePostpaidUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePostpaidUsage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiwClient::DescribePostpaidUsageOutcomeCallable TiwClient::DescribePostpaidUsageCallable(const DescribePostpaidUsageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePostpaidUsageOutcome()>>(
        [this, request]()
        {
            return this->DescribePostpaidUsage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiwClient::DescribeQualityMetricsOutcome TiwClient::DescribeQualityMetrics(const DescribeQualityMetricsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeQualityMetrics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeQualityMetricsResponse rsp = DescribeQualityMetricsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeQualityMetricsOutcome(rsp);
        else
            return DescribeQualityMetricsOutcome(o.GetError());
    }
    else
    {
        return DescribeQualityMetricsOutcome(outcome.GetError());
    }
}

void TiwClient::DescribeQualityMetricsAsync(const DescribeQualityMetricsRequest& request, const DescribeQualityMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeQualityMetrics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiwClient::DescribeQualityMetricsOutcomeCallable TiwClient::DescribeQualityMetricsCallable(const DescribeQualityMetricsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeQualityMetricsOutcome()>>(
        [this, request]()
        {
            return this->DescribeQualityMetrics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiwClient::DescribeRecordSearchOutcome TiwClient::DescribeRecordSearch(const DescribeRecordSearchRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRecordSearch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRecordSearchResponse rsp = DescribeRecordSearchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRecordSearchOutcome(rsp);
        else
            return DescribeRecordSearchOutcome(o.GetError());
    }
    else
    {
        return DescribeRecordSearchOutcome(outcome.GetError());
    }
}

void TiwClient::DescribeRecordSearchAsync(const DescribeRecordSearchRequest& request, const DescribeRecordSearchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRecordSearch(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiwClient::DescribeRecordSearchOutcomeCallable TiwClient::DescribeRecordSearchCallable(const DescribeRecordSearchRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRecordSearchOutcome()>>(
        [this, request]()
        {
            return this->DescribeRecordSearch(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiwClient::DescribeRoomListOutcome TiwClient::DescribeRoomList(const DescribeRoomListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRoomList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRoomListResponse rsp = DescribeRoomListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRoomListOutcome(rsp);
        else
            return DescribeRoomListOutcome(o.GetError());
    }
    else
    {
        return DescribeRoomListOutcome(outcome.GetError());
    }
}

void TiwClient::DescribeRoomListAsync(const DescribeRoomListRequest& request, const DescribeRoomListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRoomList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiwClient::DescribeRoomListOutcomeCallable TiwClient::DescribeRoomListCallable(const DescribeRoomListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRoomListOutcome()>>(
        [this, request]()
        {
            return this->DescribeRoomList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiwClient::DescribeSnapshotTaskOutcome TiwClient::DescribeSnapshotTask(const DescribeSnapshotTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSnapshotTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSnapshotTaskResponse rsp = DescribeSnapshotTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSnapshotTaskOutcome(rsp);
        else
            return DescribeSnapshotTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeSnapshotTaskOutcome(outcome.GetError());
    }
}

void TiwClient::DescribeSnapshotTaskAsync(const DescribeSnapshotTaskRequest& request, const DescribeSnapshotTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSnapshotTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiwClient::DescribeSnapshotTaskOutcomeCallable TiwClient::DescribeSnapshotTaskCallable(const DescribeSnapshotTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSnapshotTaskOutcome()>>(
        [this, request]()
        {
            return this->DescribeSnapshotTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiwClient::DescribeTIWDailyUsageOutcome TiwClient::DescribeTIWDailyUsage(const DescribeTIWDailyUsageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTIWDailyUsage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTIWDailyUsageResponse rsp = DescribeTIWDailyUsageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTIWDailyUsageOutcome(rsp);
        else
            return DescribeTIWDailyUsageOutcome(o.GetError());
    }
    else
    {
        return DescribeTIWDailyUsageOutcome(outcome.GetError());
    }
}

void TiwClient::DescribeTIWDailyUsageAsync(const DescribeTIWDailyUsageRequest& request, const DescribeTIWDailyUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTIWDailyUsage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiwClient::DescribeTIWDailyUsageOutcomeCallable TiwClient::DescribeTIWDailyUsageCallable(const DescribeTIWDailyUsageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTIWDailyUsageOutcome()>>(
        [this, request]()
        {
            return this->DescribeTIWDailyUsage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiwClient::DescribeTIWRoomDailyUsageOutcome TiwClient::DescribeTIWRoomDailyUsage(const DescribeTIWRoomDailyUsageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTIWRoomDailyUsage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTIWRoomDailyUsageResponse rsp = DescribeTIWRoomDailyUsageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTIWRoomDailyUsageOutcome(rsp);
        else
            return DescribeTIWRoomDailyUsageOutcome(o.GetError());
    }
    else
    {
        return DescribeTIWRoomDailyUsageOutcome(outcome.GetError());
    }
}

void TiwClient::DescribeTIWRoomDailyUsageAsync(const DescribeTIWRoomDailyUsageRequest& request, const DescribeTIWRoomDailyUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTIWRoomDailyUsage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiwClient::DescribeTIWRoomDailyUsageOutcomeCallable TiwClient::DescribeTIWRoomDailyUsageCallable(const DescribeTIWRoomDailyUsageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTIWRoomDailyUsageOutcome()>>(
        [this, request]()
        {
            return this->DescribeTIWRoomDailyUsage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiwClient::DescribeTranscodeOutcome TiwClient::DescribeTranscode(const DescribeTranscodeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTranscode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTranscodeResponse rsp = DescribeTranscodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTranscodeOutcome(rsp);
        else
            return DescribeTranscodeOutcome(o.GetError());
    }
    else
    {
        return DescribeTranscodeOutcome(outcome.GetError());
    }
}

void TiwClient::DescribeTranscodeAsync(const DescribeTranscodeRequest& request, const DescribeTranscodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTranscode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiwClient::DescribeTranscodeOutcomeCallable TiwClient::DescribeTranscodeCallable(const DescribeTranscodeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTranscodeOutcome()>>(
        [this, request]()
        {
            return this->DescribeTranscode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiwClient::DescribeTranscodeCallbackOutcome TiwClient::DescribeTranscodeCallback(const DescribeTranscodeCallbackRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTranscodeCallback");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTranscodeCallbackResponse rsp = DescribeTranscodeCallbackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTranscodeCallbackOutcome(rsp);
        else
            return DescribeTranscodeCallbackOutcome(o.GetError());
    }
    else
    {
        return DescribeTranscodeCallbackOutcome(outcome.GetError());
    }
}

void TiwClient::DescribeTranscodeCallbackAsync(const DescribeTranscodeCallbackRequest& request, const DescribeTranscodeCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTranscodeCallback(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiwClient::DescribeTranscodeCallbackOutcomeCallable TiwClient::DescribeTranscodeCallbackCallable(const DescribeTranscodeCallbackRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTranscodeCallbackOutcome()>>(
        [this, request]()
        {
            return this->DescribeTranscodeCallback(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiwClient::DescribeTranscodeSearchOutcome TiwClient::DescribeTranscodeSearch(const DescribeTranscodeSearchRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTranscodeSearch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTranscodeSearchResponse rsp = DescribeTranscodeSearchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTranscodeSearchOutcome(rsp);
        else
            return DescribeTranscodeSearchOutcome(o.GetError());
    }
    else
    {
        return DescribeTranscodeSearchOutcome(outcome.GetError());
    }
}

void TiwClient::DescribeTranscodeSearchAsync(const DescribeTranscodeSearchRequest& request, const DescribeTranscodeSearchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTranscodeSearch(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiwClient::DescribeTranscodeSearchOutcomeCallable TiwClient::DescribeTranscodeSearchCallable(const DescribeTranscodeSearchRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTranscodeSearchOutcome()>>(
        [this, request]()
        {
            return this->DescribeTranscodeSearch(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiwClient::DescribeUsageSummaryOutcome TiwClient::DescribeUsageSummary(const DescribeUsageSummaryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUsageSummary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUsageSummaryResponse rsp = DescribeUsageSummaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUsageSummaryOutcome(rsp);
        else
            return DescribeUsageSummaryOutcome(o.GetError());
    }
    else
    {
        return DescribeUsageSummaryOutcome(outcome.GetError());
    }
}

void TiwClient::DescribeUsageSummaryAsync(const DescribeUsageSummaryRequest& request, const DescribeUsageSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUsageSummary(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiwClient::DescribeUsageSummaryOutcomeCallable TiwClient::DescribeUsageSummaryCallable(const DescribeUsageSummaryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUsageSummaryOutcome()>>(
        [this, request]()
        {
            return this->DescribeUsageSummary(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiwClient::DescribeUserListOutcome TiwClient::DescribeUserList(const DescribeUserListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserListResponse rsp = DescribeUserListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserListOutcome(rsp);
        else
            return DescribeUserListOutcome(o.GetError());
    }
    else
    {
        return DescribeUserListOutcome(outcome.GetError());
    }
}

void TiwClient::DescribeUserListAsync(const DescribeUserListRequest& request, const DescribeUserListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUserList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiwClient::DescribeUserListOutcomeCallable TiwClient::DescribeUserListCallable(const DescribeUserListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUserListOutcome()>>(
        [this, request]()
        {
            return this->DescribeUserList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiwClient::DescribeUserResourcesOutcome TiwClient::DescribeUserResources(const DescribeUserResourcesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserResources");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserResourcesResponse rsp = DescribeUserResourcesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserResourcesOutcome(rsp);
        else
            return DescribeUserResourcesOutcome(o.GetError());
    }
    else
    {
        return DescribeUserResourcesOutcome(outcome.GetError());
    }
}

void TiwClient::DescribeUserResourcesAsync(const DescribeUserResourcesRequest& request, const DescribeUserResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUserResources(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiwClient::DescribeUserResourcesOutcomeCallable TiwClient::DescribeUserResourcesCallable(const DescribeUserResourcesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUserResourcesOutcome()>>(
        [this, request]()
        {
            return this->DescribeUserResources(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiwClient::DescribeUserStatusOutcome TiwClient::DescribeUserStatus(const DescribeUserStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserStatusResponse rsp = DescribeUserStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserStatusOutcome(rsp);
        else
            return DescribeUserStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeUserStatusOutcome(outcome.GetError());
    }
}

void TiwClient::DescribeUserStatusAsync(const DescribeUserStatusRequest& request, const DescribeUserStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUserStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiwClient::DescribeUserStatusOutcomeCallable TiwClient::DescribeUserStatusCallable(const DescribeUserStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUserStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeUserStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiwClient::DescribeVideoGenerationTaskOutcome TiwClient::DescribeVideoGenerationTask(const DescribeVideoGenerationTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVideoGenerationTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVideoGenerationTaskResponse rsp = DescribeVideoGenerationTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVideoGenerationTaskOutcome(rsp);
        else
            return DescribeVideoGenerationTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeVideoGenerationTaskOutcome(outcome.GetError());
    }
}

void TiwClient::DescribeVideoGenerationTaskAsync(const DescribeVideoGenerationTaskRequest& request, const DescribeVideoGenerationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVideoGenerationTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiwClient::DescribeVideoGenerationTaskOutcomeCallable TiwClient::DescribeVideoGenerationTaskCallable(const DescribeVideoGenerationTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVideoGenerationTaskOutcome()>>(
        [this, request]()
        {
            return this->DescribeVideoGenerationTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiwClient::DescribeVideoGenerationTaskCallbackOutcome TiwClient::DescribeVideoGenerationTaskCallback(const DescribeVideoGenerationTaskCallbackRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVideoGenerationTaskCallback");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVideoGenerationTaskCallbackResponse rsp = DescribeVideoGenerationTaskCallbackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVideoGenerationTaskCallbackOutcome(rsp);
        else
            return DescribeVideoGenerationTaskCallbackOutcome(o.GetError());
    }
    else
    {
        return DescribeVideoGenerationTaskCallbackOutcome(outcome.GetError());
    }
}

void TiwClient::DescribeVideoGenerationTaskCallbackAsync(const DescribeVideoGenerationTaskCallbackRequest& request, const DescribeVideoGenerationTaskCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVideoGenerationTaskCallback(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiwClient::DescribeVideoGenerationTaskCallbackOutcomeCallable TiwClient::DescribeVideoGenerationTaskCallbackCallable(const DescribeVideoGenerationTaskCallbackRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVideoGenerationTaskCallbackOutcome()>>(
        [this, request]()
        {
            return this->DescribeVideoGenerationTaskCallback(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiwClient::DescribeWhiteboardApplicationConfigOutcome TiwClient::DescribeWhiteboardApplicationConfig(const DescribeWhiteboardApplicationConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWhiteboardApplicationConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWhiteboardApplicationConfigResponse rsp = DescribeWhiteboardApplicationConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWhiteboardApplicationConfigOutcome(rsp);
        else
            return DescribeWhiteboardApplicationConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeWhiteboardApplicationConfigOutcome(outcome.GetError());
    }
}

void TiwClient::DescribeWhiteboardApplicationConfigAsync(const DescribeWhiteboardApplicationConfigRequest& request, const DescribeWhiteboardApplicationConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWhiteboardApplicationConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiwClient::DescribeWhiteboardApplicationConfigOutcomeCallable TiwClient::DescribeWhiteboardApplicationConfigCallable(const DescribeWhiteboardApplicationConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWhiteboardApplicationConfigOutcome()>>(
        [this, request]()
        {
            return this->DescribeWhiteboardApplicationConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiwClient::DescribeWhiteboardBucketConfigOutcome TiwClient::DescribeWhiteboardBucketConfig(const DescribeWhiteboardBucketConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWhiteboardBucketConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWhiteboardBucketConfigResponse rsp = DescribeWhiteboardBucketConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWhiteboardBucketConfigOutcome(rsp);
        else
            return DescribeWhiteboardBucketConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeWhiteboardBucketConfigOutcome(outcome.GetError());
    }
}

void TiwClient::DescribeWhiteboardBucketConfigAsync(const DescribeWhiteboardBucketConfigRequest& request, const DescribeWhiteboardBucketConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWhiteboardBucketConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiwClient::DescribeWhiteboardBucketConfigOutcomeCallable TiwClient::DescribeWhiteboardBucketConfigCallable(const DescribeWhiteboardBucketConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWhiteboardBucketConfigOutcome()>>(
        [this, request]()
        {
            return this->DescribeWhiteboardBucketConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiwClient::DescribeWhiteboardPushOutcome TiwClient::DescribeWhiteboardPush(const DescribeWhiteboardPushRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWhiteboardPush");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWhiteboardPushResponse rsp = DescribeWhiteboardPushResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWhiteboardPushOutcome(rsp);
        else
            return DescribeWhiteboardPushOutcome(o.GetError());
    }
    else
    {
        return DescribeWhiteboardPushOutcome(outcome.GetError());
    }
}

void TiwClient::DescribeWhiteboardPushAsync(const DescribeWhiteboardPushRequest& request, const DescribeWhiteboardPushAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWhiteboardPush(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiwClient::DescribeWhiteboardPushOutcomeCallable TiwClient::DescribeWhiteboardPushCallable(const DescribeWhiteboardPushRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWhiteboardPushOutcome()>>(
        [this, request]()
        {
            return this->DescribeWhiteboardPush(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiwClient::DescribeWhiteboardPushCallbackOutcome TiwClient::DescribeWhiteboardPushCallback(const DescribeWhiteboardPushCallbackRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWhiteboardPushCallback");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWhiteboardPushCallbackResponse rsp = DescribeWhiteboardPushCallbackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWhiteboardPushCallbackOutcome(rsp);
        else
            return DescribeWhiteboardPushCallbackOutcome(o.GetError());
    }
    else
    {
        return DescribeWhiteboardPushCallbackOutcome(outcome.GetError());
    }
}

void TiwClient::DescribeWhiteboardPushCallbackAsync(const DescribeWhiteboardPushCallbackRequest& request, const DescribeWhiteboardPushCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWhiteboardPushCallback(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiwClient::DescribeWhiteboardPushCallbackOutcomeCallable TiwClient::DescribeWhiteboardPushCallbackCallable(const DescribeWhiteboardPushCallbackRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWhiteboardPushCallbackOutcome()>>(
        [this, request]()
        {
            return this->DescribeWhiteboardPushCallback(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiwClient::DescribeWhiteboardPushSearchOutcome TiwClient::DescribeWhiteboardPushSearch(const DescribeWhiteboardPushSearchRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWhiteboardPushSearch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWhiteboardPushSearchResponse rsp = DescribeWhiteboardPushSearchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWhiteboardPushSearchOutcome(rsp);
        else
            return DescribeWhiteboardPushSearchOutcome(o.GetError());
    }
    else
    {
        return DescribeWhiteboardPushSearchOutcome(outcome.GetError());
    }
}

void TiwClient::DescribeWhiteboardPushSearchAsync(const DescribeWhiteboardPushSearchRequest& request, const DescribeWhiteboardPushSearchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWhiteboardPushSearch(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiwClient::DescribeWhiteboardPushSearchOutcomeCallable TiwClient::DescribeWhiteboardPushSearchCallable(const DescribeWhiteboardPushSearchRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWhiteboardPushSearchOutcome()>>(
        [this, request]()
        {
            return this->DescribeWhiteboardPushSearch(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiwClient::ModifyApplicationOutcome TiwClient::ModifyApplication(const ModifyApplicationRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyApplication");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyApplicationResponse rsp = ModifyApplicationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyApplicationOutcome(rsp);
        else
            return ModifyApplicationOutcome(o.GetError());
    }
    else
    {
        return ModifyApplicationOutcome(outcome.GetError());
    }
}

void TiwClient::ModifyApplicationAsync(const ModifyApplicationRequest& request, const ModifyApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyApplication(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiwClient::ModifyApplicationOutcomeCallable TiwClient::ModifyApplicationCallable(const ModifyApplicationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyApplicationOutcome()>>(
        [this, request]()
        {
            return this->ModifyApplication(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiwClient::ModifyAutoRenewFlagOutcome TiwClient::ModifyAutoRenewFlag(const ModifyAutoRenewFlagRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAutoRenewFlag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAutoRenewFlagResponse rsp = ModifyAutoRenewFlagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAutoRenewFlagOutcome(rsp);
        else
            return ModifyAutoRenewFlagOutcome(o.GetError());
    }
    else
    {
        return ModifyAutoRenewFlagOutcome(outcome.GetError());
    }
}

void TiwClient::ModifyAutoRenewFlagAsync(const ModifyAutoRenewFlagRequest& request, const ModifyAutoRenewFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAutoRenewFlag(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiwClient::ModifyAutoRenewFlagOutcomeCallable TiwClient::ModifyAutoRenewFlagCallable(const ModifyAutoRenewFlagRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAutoRenewFlagOutcome()>>(
        [this, request]()
        {
            return this->ModifyAutoRenewFlag(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiwClient::ModifyWhiteboardApplicationConfigOutcome TiwClient::ModifyWhiteboardApplicationConfig(const ModifyWhiteboardApplicationConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyWhiteboardApplicationConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyWhiteboardApplicationConfigResponse rsp = ModifyWhiteboardApplicationConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyWhiteboardApplicationConfigOutcome(rsp);
        else
            return ModifyWhiteboardApplicationConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyWhiteboardApplicationConfigOutcome(outcome.GetError());
    }
}

void TiwClient::ModifyWhiteboardApplicationConfigAsync(const ModifyWhiteboardApplicationConfigRequest& request, const ModifyWhiteboardApplicationConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyWhiteboardApplicationConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiwClient::ModifyWhiteboardApplicationConfigOutcomeCallable TiwClient::ModifyWhiteboardApplicationConfigCallable(const ModifyWhiteboardApplicationConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyWhiteboardApplicationConfigOutcome()>>(
        [this, request]()
        {
            return this->ModifyWhiteboardApplicationConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiwClient::ModifyWhiteboardBucketConfigOutcome TiwClient::ModifyWhiteboardBucketConfig(const ModifyWhiteboardBucketConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyWhiteboardBucketConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyWhiteboardBucketConfigResponse rsp = ModifyWhiteboardBucketConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyWhiteboardBucketConfigOutcome(rsp);
        else
            return ModifyWhiteboardBucketConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyWhiteboardBucketConfigOutcome(outcome.GetError());
    }
}

void TiwClient::ModifyWhiteboardBucketConfigAsync(const ModifyWhiteboardBucketConfigRequest& request, const ModifyWhiteboardBucketConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyWhiteboardBucketConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiwClient::ModifyWhiteboardBucketConfigOutcomeCallable TiwClient::ModifyWhiteboardBucketConfigCallable(const ModifyWhiteboardBucketConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyWhiteboardBucketConfigOutcome()>>(
        [this, request]()
        {
            return this->ModifyWhiteboardBucketConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiwClient::PauseOnlineRecordOutcome TiwClient::PauseOnlineRecord(const PauseOnlineRecordRequest &request)
{
    auto outcome = MakeRequest(request, "PauseOnlineRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PauseOnlineRecordResponse rsp = PauseOnlineRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PauseOnlineRecordOutcome(rsp);
        else
            return PauseOnlineRecordOutcome(o.GetError());
    }
    else
    {
        return PauseOnlineRecordOutcome(outcome.GetError());
    }
}

void TiwClient::PauseOnlineRecordAsync(const PauseOnlineRecordRequest& request, const PauseOnlineRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->PauseOnlineRecord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiwClient::PauseOnlineRecordOutcomeCallable TiwClient::PauseOnlineRecordCallable(const PauseOnlineRecordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<PauseOnlineRecordOutcome()>>(
        [this, request]()
        {
            return this->PauseOnlineRecord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiwClient::ResumeOnlineRecordOutcome TiwClient::ResumeOnlineRecord(const ResumeOnlineRecordRequest &request)
{
    auto outcome = MakeRequest(request, "ResumeOnlineRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResumeOnlineRecordResponse rsp = ResumeOnlineRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResumeOnlineRecordOutcome(rsp);
        else
            return ResumeOnlineRecordOutcome(o.GetError());
    }
    else
    {
        return ResumeOnlineRecordOutcome(outcome.GetError());
    }
}

void TiwClient::ResumeOnlineRecordAsync(const ResumeOnlineRecordRequest& request, const ResumeOnlineRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResumeOnlineRecord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiwClient::ResumeOnlineRecordOutcomeCallable TiwClient::ResumeOnlineRecordCallable(const ResumeOnlineRecordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResumeOnlineRecordOutcome()>>(
        [this, request]()
        {
            return this->ResumeOnlineRecord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiwClient::SetOfflineRecordCallbackOutcome TiwClient::SetOfflineRecordCallback(const SetOfflineRecordCallbackRequest &request)
{
    auto outcome = MakeRequest(request, "SetOfflineRecordCallback");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetOfflineRecordCallbackResponse rsp = SetOfflineRecordCallbackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetOfflineRecordCallbackOutcome(rsp);
        else
            return SetOfflineRecordCallbackOutcome(o.GetError());
    }
    else
    {
        return SetOfflineRecordCallbackOutcome(outcome.GetError());
    }
}

void TiwClient::SetOfflineRecordCallbackAsync(const SetOfflineRecordCallbackRequest& request, const SetOfflineRecordCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SetOfflineRecordCallback(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiwClient::SetOfflineRecordCallbackOutcomeCallable TiwClient::SetOfflineRecordCallbackCallable(const SetOfflineRecordCallbackRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SetOfflineRecordCallbackOutcome()>>(
        [this, request]()
        {
            return this->SetOfflineRecordCallback(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiwClient::SetOnlineRecordCallbackOutcome TiwClient::SetOnlineRecordCallback(const SetOnlineRecordCallbackRequest &request)
{
    auto outcome = MakeRequest(request, "SetOnlineRecordCallback");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetOnlineRecordCallbackResponse rsp = SetOnlineRecordCallbackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetOnlineRecordCallbackOutcome(rsp);
        else
            return SetOnlineRecordCallbackOutcome(o.GetError());
    }
    else
    {
        return SetOnlineRecordCallbackOutcome(outcome.GetError());
    }
}

void TiwClient::SetOnlineRecordCallbackAsync(const SetOnlineRecordCallbackRequest& request, const SetOnlineRecordCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SetOnlineRecordCallback(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiwClient::SetOnlineRecordCallbackOutcomeCallable TiwClient::SetOnlineRecordCallbackCallable(const SetOnlineRecordCallbackRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SetOnlineRecordCallbackOutcome()>>(
        [this, request]()
        {
            return this->SetOnlineRecordCallback(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiwClient::SetOnlineRecordCallbackKeyOutcome TiwClient::SetOnlineRecordCallbackKey(const SetOnlineRecordCallbackKeyRequest &request)
{
    auto outcome = MakeRequest(request, "SetOnlineRecordCallbackKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetOnlineRecordCallbackKeyResponse rsp = SetOnlineRecordCallbackKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetOnlineRecordCallbackKeyOutcome(rsp);
        else
            return SetOnlineRecordCallbackKeyOutcome(o.GetError());
    }
    else
    {
        return SetOnlineRecordCallbackKeyOutcome(outcome.GetError());
    }
}

void TiwClient::SetOnlineRecordCallbackKeyAsync(const SetOnlineRecordCallbackKeyRequest& request, const SetOnlineRecordCallbackKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SetOnlineRecordCallbackKey(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiwClient::SetOnlineRecordCallbackKeyOutcomeCallable TiwClient::SetOnlineRecordCallbackKeyCallable(const SetOnlineRecordCallbackKeyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SetOnlineRecordCallbackKeyOutcome()>>(
        [this, request]()
        {
            return this->SetOnlineRecordCallbackKey(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiwClient::SetTranscodeCallbackOutcome TiwClient::SetTranscodeCallback(const SetTranscodeCallbackRequest &request)
{
    auto outcome = MakeRequest(request, "SetTranscodeCallback");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetTranscodeCallbackResponse rsp = SetTranscodeCallbackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetTranscodeCallbackOutcome(rsp);
        else
            return SetTranscodeCallbackOutcome(o.GetError());
    }
    else
    {
        return SetTranscodeCallbackOutcome(outcome.GetError());
    }
}

void TiwClient::SetTranscodeCallbackAsync(const SetTranscodeCallbackRequest& request, const SetTranscodeCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SetTranscodeCallback(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiwClient::SetTranscodeCallbackOutcomeCallable TiwClient::SetTranscodeCallbackCallable(const SetTranscodeCallbackRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SetTranscodeCallbackOutcome()>>(
        [this, request]()
        {
            return this->SetTranscodeCallback(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiwClient::SetTranscodeCallbackKeyOutcome TiwClient::SetTranscodeCallbackKey(const SetTranscodeCallbackKeyRequest &request)
{
    auto outcome = MakeRequest(request, "SetTranscodeCallbackKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetTranscodeCallbackKeyResponse rsp = SetTranscodeCallbackKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetTranscodeCallbackKeyOutcome(rsp);
        else
            return SetTranscodeCallbackKeyOutcome(o.GetError());
    }
    else
    {
        return SetTranscodeCallbackKeyOutcome(outcome.GetError());
    }
}

void TiwClient::SetTranscodeCallbackKeyAsync(const SetTranscodeCallbackKeyRequest& request, const SetTranscodeCallbackKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SetTranscodeCallbackKey(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiwClient::SetTranscodeCallbackKeyOutcomeCallable TiwClient::SetTranscodeCallbackKeyCallable(const SetTranscodeCallbackKeyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SetTranscodeCallbackKeyOutcome()>>(
        [this, request]()
        {
            return this->SetTranscodeCallbackKey(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiwClient::SetVideoGenerationTaskCallbackOutcome TiwClient::SetVideoGenerationTaskCallback(const SetVideoGenerationTaskCallbackRequest &request)
{
    auto outcome = MakeRequest(request, "SetVideoGenerationTaskCallback");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetVideoGenerationTaskCallbackResponse rsp = SetVideoGenerationTaskCallbackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetVideoGenerationTaskCallbackOutcome(rsp);
        else
            return SetVideoGenerationTaskCallbackOutcome(o.GetError());
    }
    else
    {
        return SetVideoGenerationTaskCallbackOutcome(outcome.GetError());
    }
}

void TiwClient::SetVideoGenerationTaskCallbackAsync(const SetVideoGenerationTaskCallbackRequest& request, const SetVideoGenerationTaskCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SetVideoGenerationTaskCallback(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiwClient::SetVideoGenerationTaskCallbackOutcomeCallable TiwClient::SetVideoGenerationTaskCallbackCallable(const SetVideoGenerationTaskCallbackRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SetVideoGenerationTaskCallbackOutcome()>>(
        [this, request]()
        {
            return this->SetVideoGenerationTaskCallback(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiwClient::SetVideoGenerationTaskCallbackKeyOutcome TiwClient::SetVideoGenerationTaskCallbackKey(const SetVideoGenerationTaskCallbackKeyRequest &request)
{
    auto outcome = MakeRequest(request, "SetVideoGenerationTaskCallbackKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetVideoGenerationTaskCallbackKeyResponse rsp = SetVideoGenerationTaskCallbackKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetVideoGenerationTaskCallbackKeyOutcome(rsp);
        else
            return SetVideoGenerationTaskCallbackKeyOutcome(o.GetError());
    }
    else
    {
        return SetVideoGenerationTaskCallbackKeyOutcome(outcome.GetError());
    }
}

void TiwClient::SetVideoGenerationTaskCallbackKeyAsync(const SetVideoGenerationTaskCallbackKeyRequest& request, const SetVideoGenerationTaskCallbackKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SetVideoGenerationTaskCallbackKey(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiwClient::SetVideoGenerationTaskCallbackKeyOutcomeCallable TiwClient::SetVideoGenerationTaskCallbackKeyCallable(const SetVideoGenerationTaskCallbackKeyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SetVideoGenerationTaskCallbackKeyOutcome()>>(
        [this, request]()
        {
            return this->SetVideoGenerationTaskCallbackKey(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiwClient::SetWhiteboardPushCallbackOutcome TiwClient::SetWhiteboardPushCallback(const SetWhiteboardPushCallbackRequest &request)
{
    auto outcome = MakeRequest(request, "SetWhiteboardPushCallback");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetWhiteboardPushCallbackResponse rsp = SetWhiteboardPushCallbackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetWhiteboardPushCallbackOutcome(rsp);
        else
            return SetWhiteboardPushCallbackOutcome(o.GetError());
    }
    else
    {
        return SetWhiteboardPushCallbackOutcome(outcome.GetError());
    }
}

void TiwClient::SetWhiteboardPushCallbackAsync(const SetWhiteboardPushCallbackRequest& request, const SetWhiteboardPushCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SetWhiteboardPushCallback(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiwClient::SetWhiteboardPushCallbackOutcomeCallable TiwClient::SetWhiteboardPushCallbackCallable(const SetWhiteboardPushCallbackRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SetWhiteboardPushCallbackOutcome()>>(
        [this, request]()
        {
            return this->SetWhiteboardPushCallback(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiwClient::SetWhiteboardPushCallbackKeyOutcome TiwClient::SetWhiteboardPushCallbackKey(const SetWhiteboardPushCallbackKeyRequest &request)
{
    auto outcome = MakeRequest(request, "SetWhiteboardPushCallbackKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetWhiteboardPushCallbackKeyResponse rsp = SetWhiteboardPushCallbackKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetWhiteboardPushCallbackKeyOutcome(rsp);
        else
            return SetWhiteboardPushCallbackKeyOutcome(o.GetError());
    }
    else
    {
        return SetWhiteboardPushCallbackKeyOutcome(outcome.GetError());
    }
}

void TiwClient::SetWhiteboardPushCallbackKeyAsync(const SetWhiteboardPushCallbackKeyRequest& request, const SetWhiteboardPushCallbackKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SetWhiteboardPushCallbackKey(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiwClient::SetWhiteboardPushCallbackKeyOutcomeCallable TiwClient::SetWhiteboardPushCallbackKeyCallable(const SetWhiteboardPushCallbackKeyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SetWhiteboardPushCallbackKeyOutcome()>>(
        [this, request]()
        {
            return this->SetWhiteboardPushCallbackKey(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiwClient::StartOnlineRecordOutcome TiwClient::StartOnlineRecord(const StartOnlineRecordRequest &request)
{
    auto outcome = MakeRequest(request, "StartOnlineRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartOnlineRecordResponse rsp = StartOnlineRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartOnlineRecordOutcome(rsp);
        else
            return StartOnlineRecordOutcome(o.GetError());
    }
    else
    {
        return StartOnlineRecordOutcome(outcome.GetError());
    }
}

void TiwClient::StartOnlineRecordAsync(const StartOnlineRecordRequest& request, const StartOnlineRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartOnlineRecord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiwClient::StartOnlineRecordOutcomeCallable TiwClient::StartOnlineRecordCallable(const StartOnlineRecordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartOnlineRecordOutcome()>>(
        [this, request]()
        {
            return this->StartOnlineRecord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiwClient::StartWhiteboardPushOutcome TiwClient::StartWhiteboardPush(const StartWhiteboardPushRequest &request)
{
    auto outcome = MakeRequest(request, "StartWhiteboardPush");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartWhiteboardPushResponse rsp = StartWhiteboardPushResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartWhiteboardPushOutcome(rsp);
        else
            return StartWhiteboardPushOutcome(o.GetError());
    }
    else
    {
        return StartWhiteboardPushOutcome(outcome.GetError());
    }
}

void TiwClient::StartWhiteboardPushAsync(const StartWhiteboardPushRequest& request, const StartWhiteboardPushAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartWhiteboardPush(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiwClient::StartWhiteboardPushOutcomeCallable TiwClient::StartWhiteboardPushCallable(const StartWhiteboardPushRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartWhiteboardPushOutcome()>>(
        [this, request]()
        {
            return this->StartWhiteboardPush(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiwClient::StopOnlineRecordOutcome TiwClient::StopOnlineRecord(const StopOnlineRecordRequest &request)
{
    auto outcome = MakeRequest(request, "StopOnlineRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopOnlineRecordResponse rsp = StopOnlineRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopOnlineRecordOutcome(rsp);
        else
            return StopOnlineRecordOutcome(o.GetError());
    }
    else
    {
        return StopOnlineRecordOutcome(outcome.GetError());
    }
}

void TiwClient::StopOnlineRecordAsync(const StopOnlineRecordRequest& request, const StopOnlineRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopOnlineRecord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiwClient::StopOnlineRecordOutcomeCallable TiwClient::StopOnlineRecordCallable(const StopOnlineRecordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopOnlineRecordOutcome()>>(
        [this, request]()
        {
            return this->StopOnlineRecord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiwClient::StopWhiteboardPushOutcome TiwClient::StopWhiteboardPush(const StopWhiteboardPushRequest &request)
{
    auto outcome = MakeRequest(request, "StopWhiteboardPush");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopWhiteboardPushResponse rsp = StopWhiteboardPushResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopWhiteboardPushOutcome(rsp);
        else
            return StopWhiteboardPushOutcome(o.GetError());
    }
    else
    {
        return StopWhiteboardPushOutcome(outcome.GetError());
    }
}

void TiwClient::StopWhiteboardPushAsync(const StopWhiteboardPushRequest& request, const StopWhiteboardPushAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopWhiteboardPush(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiwClient::StopWhiteboardPushOutcomeCallable TiwClient::StopWhiteboardPushCallable(const StopWhiteboardPushRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopWhiteboardPushOutcome()>>(
        [this, request]()
        {
            return this->StopWhiteboardPush(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


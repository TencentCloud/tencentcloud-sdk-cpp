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

#include <tencentcloud/ump/v20200918/UmpClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Ump::V20200918;
using namespace TencentCloud::Ump::V20200918::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-09-18";
    const string ENDPOINT = "ump.tencentcloudapi.com";
}

UmpClient::UmpClient(const Credential &credential, const string &region) :
    UmpClient(credential, region, ClientProfile())
{
}

UmpClient::UmpClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


UmpClient::CreateCameraAlertsOutcome UmpClient::CreateCameraAlerts(const CreateCameraAlertsRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCameraAlerts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCameraAlertsResponse rsp = CreateCameraAlertsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCameraAlertsOutcome(rsp);
        else
            return CreateCameraAlertsOutcome(o.GetError());
    }
    else
    {
        return CreateCameraAlertsOutcome(outcome.GetError());
    }
}

void UmpClient::CreateCameraAlertsAsync(const CreateCameraAlertsRequest& request, const CreateCameraAlertsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCameraAlerts(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

UmpClient::CreateCameraAlertsOutcomeCallable UmpClient::CreateCameraAlertsCallable(const CreateCameraAlertsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCameraAlertsOutcome()>>(
        [this, request]()
        {
            return this->CreateCameraAlerts(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

UmpClient::CreateCameraStateOutcome UmpClient::CreateCameraState(const CreateCameraStateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCameraState");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCameraStateResponse rsp = CreateCameraStateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCameraStateOutcome(rsp);
        else
            return CreateCameraStateOutcome(o.GetError());
    }
    else
    {
        return CreateCameraStateOutcome(outcome.GetError());
    }
}

void UmpClient::CreateCameraStateAsync(const CreateCameraStateRequest& request, const CreateCameraStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCameraState(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

UmpClient::CreateCameraStateOutcomeCallable UmpClient::CreateCameraStateCallable(const CreateCameraStateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCameraStateOutcome()>>(
        [this, request]()
        {
            return this->CreateCameraState(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

UmpClient::CreateCaptureOutcome UmpClient::CreateCapture(const CreateCaptureRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCapture");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCaptureResponse rsp = CreateCaptureResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCaptureOutcome(rsp);
        else
            return CreateCaptureOutcome(o.GetError());
    }
    else
    {
        return CreateCaptureOutcome(outcome.GetError());
    }
}

void UmpClient::CreateCaptureAsync(const CreateCaptureRequest& request, const CreateCaptureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCapture(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

UmpClient::CreateCaptureOutcomeCallable UmpClient::CreateCaptureCallable(const CreateCaptureRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCaptureOutcome()>>(
        [this, request]()
        {
            return this->CreateCapture(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

UmpClient::CreateMultiBizAlertOutcome UmpClient::CreateMultiBizAlert(const CreateMultiBizAlertRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMultiBizAlert");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMultiBizAlertResponse rsp = CreateMultiBizAlertResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMultiBizAlertOutcome(rsp);
        else
            return CreateMultiBizAlertOutcome(o.GetError());
    }
    else
    {
        return CreateMultiBizAlertOutcome(outcome.GetError());
    }
}

void UmpClient::CreateMultiBizAlertAsync(const CreateMultiBizAlertRequest& request, const CreateMultiBizAlertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateMultiBizAlert(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

UmpClient::CreateMultiBizAlertOutcomeCallable UmpClient::CreateMultiBizAlertCallable(const CreateMultiBizAlertRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateMultiBizAlertOutcome()>>(
        [this, request]()
        {
            return this->CreateMultiBizAlert(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

UmpClient::CreateProgramStateOutcome UmpClient::CreateProgramState(const CreateProgramStateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateProgramState");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateProgramStateResponse rsp = CreateProgramStateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateProgramStateOutcome(rsp);
        else
            return CreateProgramStateOutcome(o.GetError());
    }
    else
    {
        return CreateProgramStateOutcome(outcome.GetError());
    }
}

void UmpClient::CreateProgramStateAsync(const CreateProgramStateRequest& request, const CreateProgramStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateProgramState(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

UmpClient::CreateProgramStateOutcomeCallable UmpClient::CreateProgramStateCallable(const CreateProgramStateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateProgramStateOutcome()>>(
        [this, request]()
        {
            return this->CreateProgramState(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

UmpClient::CreateServerStateOutcome UmpClient::CreateServerState(const CreateServerStateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateServerState");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateServerStateResponse rsp = CreateServerStateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateServerStateOutcome(rsp);
        else
            return CreateServerStateOutcome(o.GetError());
    }
    else
    {
        return CreateServerStateOutcome(outcome.GetError());
    }
}

void UmpClient::CreateServerStateAsync(const CreateServerStateRequest& request, const CreateServerStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateServerState(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

UmpClient::CreateServerStateOutcomeCallable UmpClient::CreateServerStateCallable(const CreateServerStateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateServerStateOutcome()>>(
        [this, request]()
        {
            return this->CreateServerState(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

UmpClient::DeleteMultiBizAlertOutcome UmpClient::DeleteMultiBizAlert(const DeleteMultiBizAlertRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMultiBizAlert");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMultiBizAlertResponse rsp = DeleteMultiBizAlertResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMultiBizAlertOutcome(rsp);
        else
            return DeleteMultiBizAlertOutcome(o.GetError());
    }
    else
    {
        return DeleteMultiBizAlertOutcome(outcome.GetError());
    }
}

void UmpClient::DeleteMultiBizAlertAsync(const DeleteMultiBizAlertRequest& request, const DeleteMultiBizAlertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteMultiBizAlert(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

UmpClient::DeleteMultiBizAlertOutcomeCallable UmpClient::DeleteMultiBizAlertCallable(const DeleteMultiBizAlertRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteMultiBizAlertOutcome()>>(
        [this, request]()
        {
            return this->DeleteMultiBizAlert(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

UmpClient::DeleteTaskOutcome UmpClient::DeleteTask(const DeleteTaskRequest &request)
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

void UmpClient::DeleteTaskAsync(const DeleteTaskRequest& request, const DeleteTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

UmpClient::DeleteTaskOutcomeCallable UmpClient::DeleteTaskCallable(const DeleteTaskRequest &request)
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

UmpClient::DescribeCamerasOutcome UmpClient::DescribeCameras(const DescribeCamerasRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCameras");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCamerasResponse rsp = DescribeCamerasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCamerasOutcome(rsp);
        else
            return DescribeCamerasOutcome(o.GetError());
    }
    else
    {
        return DescribeCamerasOutcome(outcome.GetError());
    }
}

void UmpClient::DescribeCamerasAsync(const DescribeCamerasRequest& request, const DescribeCamerasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCameras(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

UmpClient::DescribeCamerasOutcomeCallable UmpClient::DescribeCamerasCallable(const DescribeCamerasRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCamerasOutcome()>>(
        [this, request]()
        {
            return this->DescribeCameras(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

UmpClient::DescribeConfigOutcome UmpClient::DescribeConfig(const DescribeConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConfigResponse rsp = DescribeConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConfigOutcome(rsp);
        else
            return DescribeConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeConfigOutcome(outcome.GetError());
    }
}

void UmpClient::DescribeConfigAsync(const DescribeConfigRequest& request, const DescribeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

UmpClient::DescribeConfigOutcomeCallable UmpClient::DescribeConfigCallable(const DescribeConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeConfigOutcome()>>(
        [this, request]()
        {
            return this->DescribeConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

UmpClient::DescribeImageOutcome UmpClient::DescribeImage(const DescribeImageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeImage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeImageResponse rsp = DescribeImageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeImageOutcome(rsp);
        else
            return DescribeImageOutcome(o.GetError());
    }
    else
    {
        return DescribeImageOutcome(outcome.GetError());
    }
}

void UmpClient::DescribeImageAsync(const DescribeImageRequest& request, const DescribeImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeImage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

UmpClient::DescribeImageOutcomeCallable UmpClient::DescribeImageCallable(const DescribeImageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeImageOutcome()>>(
        [this, request]()
        {
            return this->DescribeImage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

UmpClient::DescribeMultiBizBaseImageOutcome UmpClient::DescribeMultiBizBaseImage(const DescribeMultiBizBaseImageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMultiBizBaseImage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMultiBizBaseImageResponse rsp = DescribeMultiBizBaseImageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMultiBizBaseImageOutcome(rsp);
        else
            return DescribeMultiBizBaseImageOutcome(o.GetError());
    }
    else
    {
        return DescribeMultiBizBaseImageOutcome(outcome.GetError());
    }
}

void UmpClient::DescribeMultiBizBaseImageAsync(const DescribeMultiBizBaseImageRequest& request, const DescribeMultiBizBaseImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMultiBizBaseImage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

UmpClient::DescribeMultiBizBaseImageOutcomeCallable UmpClient::DescribeMultiBizBaseImageCallable(const DescribeMultiBizBaseImageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMultiBizBaseImageOutcome()>>(
        [this, request]()
        {
            return this->DescribeMultiBizBaseImage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

UmpClient::DescribeTasksOutcome UmpClient::DescribeTasks(const DescribeTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTasksResponse rsp = DescribeTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTasksOutcome(rsp);
        else
            return DescribeTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeTasksOutcome(outcome.GetError());
    }
}

void UmpClient::DescribeTasksAsync(const DescribeTasksRequest& request, const DescribeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

UmpClient::DescribeTasksOutcomeCallable UmpClient::DescribeTasksCallable(const DescribeTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTasksOutcome()>>(
        [this, request]()
        {
            return this->DescribeTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

UmpClient::DescribeZonesOutcome UmpClient::DescribeZones(const DescribeZonesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeZones");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeZonesResponse rsp = DescribeZonesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeZonesOutcome(rsp);
        else
            return DescribeZonesOutcome(o.GetError());
    }
    else
    {
        return DescribeZonesOutcome(outcome.GetError());
    }
}

void UmpClient::DescribeZonesAsync(const DescribeZonesRequest& request, const DescribeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeZones(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

UmpClient::DescribeZonesOutcomeCallable UmpClient::DescribeZonesCallable(const DescribeZonesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeZonesOutcome()>>(
        [this, request]()
        {
            return this->DescribeZones(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

UmpClient::ModifyMultiBizConfigOutcome UmpClient::ModifyMultiBizConfig(const ModifyMultiBizConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMultiBizConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMultiBizConfigResponse rsp = ModifyMultiBizConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMultiBizConfigOutcome(rsp);
        else
            return ModifyMultiBizConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyMultiBizConfigOutcome(outcome.GetError());
    }
}

void UmpClient::ModifyMultiBizConfigAsync(const ModifyMultiBizConfigRequest& request, const ModifyMultiBizConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyMultiBizConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

UmpClient::ModifyMultiBizConfigOutcomeCallable UmpClient::ModifyMultiBizConfigCallable(const ModifyMultiBizConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyMultiBizConfigOutcome()>>(
        [this, request]()
        {
            return this->ModifyMultiBizConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

UmpClient::ReportServiceRegisterOutcome UmpClient::ReportServiceRegister(const ReportServiceRegisterRequest &request)
{
    auto outcome = MakeRequest(request, "ReportServiceRegister");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReportServiceRegisterResponse rsp = ReportServiceRegisterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReportServiceRegisterOutcome(rsp);
        else
            return ReportServiceRegisterOutcome(o.GetError());
    }
    else
    {
        return ReportServiceRegisterOutcome(outcome.GetError());
    }
}

void UmpClient::ReportServiceRegisterAsync(const ReportServiceRegisterRequest& request, const ReportServiceRegisterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ReportServiceRegister(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

UmpClient::ReportServiceRegisterOutcomeCallable UmpClient::ReportServiceRegisterCallable(const ReportServiceRegisterRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ReportServiceRegisterOutcome()>>(
        [this, request]()
        {
            return this->ReportServiceRegister(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

UmpClient::SearchImageOutcome UmpClient::SearchImage(const SearchImageRequest &request)
{
    auto outcome = MakeRequest(request, "SearchImage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SearchImageResponse rsp = SearchImageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SearchImageOutcome(rsp);
        else
            return SearchImageOutcome(o.GetError());
    }
    else
    {
        return SearchImageOutcome(outcome.GetError());
    }
}

void UmpClient::SearchImageAsync(const SearchImageRequest& request, const SearchImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SearchImage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

UmpClient::SearchImageOutcomeCallable UmpClient::SearchImageCallable(const SearchImageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SearchImageOutcome()>>(
        [this, request]()
        {
            return this->SearchImage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


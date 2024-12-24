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

#include <tencentcloud/aca/v20210323/AcaClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Aca::V20210323;
using namespace TencentCloud::Aca::V20210323::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-03-23";
    const string ENDPOINT = "aca.tencentcloudapi.com";
}

AcaClient::AcaClient(const Credential &credential, const string &region) :
    AcaClient(credential, region, ClientProfile())
{
}

AcaClient::AcaClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


AcaClient::GetDrugIndicationsOutcome AcaClient::GetDrugIndications(const GetDrugIndicationsRequest &request)
{
    auto outcome = MakeRequest(request, "GetDrugIndications");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetDrugIndicationsResponse rsp = GetDrugIndicationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetDrugIndicationsOutcome(rsp);
        else
            return GetDrugIndicationsOutcome(o.GetError());
    }
    else
    {
        return GetDrugIndicationsOutcome(outcome.GetError());
    }
}

void AcaClient::GetDrugIndicationsAsync(const GetDrugIndicationsRequest& request, const GetDrugIndicationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetDrugIndications(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AcaClient::GetDrugIndicationsOutcomeCallable AcaClient::GetDrugIndicationsCallable(const GetDrugIndicationsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetDrugIndicationsOutcome()>>(
        [this, request]()
        {
            return this->GetDrugIndications(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AcaClient::LoginHisToolOutcome AcaClient::LoginHisTool(const LoginHisToolRequest &request)
{
    auto outcome = MakeRequest(request, "LoginHisTool");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        LoginHisToolResponse rsp = LoginHisToolResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return LoginHisToolOutcome(rsp);
        else
            return LoginHisToolOutcome(o.GetError());
    }
    else
    {
        return LoginHisToolOutcome(outcome.GetError());
    }
}

void AcaClient::LoginHisToolAsync(const LoginHisToolRequest& request, const LoginHisToolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->LoginHisTool(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AcaClient::LoginHisToolOutcomeCallable AcaClient::LoginHisToolCallable(const LoginHisToolRequest &request)
{
    auto task = std::make_shared<std::packaged_task<LoginHisToolOutcome()>>(
        [this, request]()
        {
            return this->LoginHisTool(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AcaClient::LoginOutHisToolOutcome AcaClient::LoginOutHisTool(const LoginOutHisToolRequest &request)
{
    auto outcome = MakeRequest(request, "LoginOutHisTool");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        LoginOutHisToolResponse rsp = LoginOutHisToolResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return LoginOutHisToolOutcome(rsp);
        else
            return LoginOutHisToolOutcome(o.GetError());
    }
    else
    {
        return LoginOutHisToolOutcome(outcome.GetError());
    }
}

void AcaClient::LoginOutHisToolAsync(const LoginOutHisToolRequest& request, const LoginOutHisToolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->LoginOutHisTool(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AcaClient::LoginOutHisToolOutcomeCallable AcaClient::LoginOutHisToolCallable(const LoginOutHisToolRequest &request)
{
    auto task = std::make_shared<std::packaged_task<LoginOutHisToolOutcome()>>(
        [this, request]()
        {
            return this->LoginOutHisTool(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AcaClient::SmartDrugInfoOutcome AcaClient::SmartDrugInfo(const SmartDrugInfoRequest &request)
{
    auto outcome = MakeRequest(request, "SmartDrugInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SmartDrugInfoResponse rsp = SmartDrugInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SmartDrugInfoOutcome(rsp);
        else
            return SmartDrugInfoOutcome(o.GetError());
    }
    else
    {
        return SmartDrugInfoOutcome(outcome.GetError());
    }
}

void AcaClient::SmartDrugInfoAsync(const SmartDrugInfoRequest& request, const SmartDrugInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SmartDrugInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AcaClient::SmartDrugInfoOutcomeCallable AcaClient::SmartDrugInfoCallable(const SmartDrugInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SmartDrugInfoOutcome()>>(
        [this, request]()
        {
            return this->SmartDrugInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AcaClient::SmartPredictOutcome AcaClient::SmartPredict(const SmartPredictRequest &request)
{
    auto outcome = MakeRequest(request, "SmartPredict");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SmartPredictResponse rsp = SmartPredictResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SmartPredictOutcome(rsp);
        else
            return SmartPredictOutcome(o.GetError());
    }
    else
    {
        return SmartPredictOutcome(outcome.GetError());
    }
}

void AcaClient::SmartPredictAsync(const SmartPredictRequest& request, const SmartPredictAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SmartPredict(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AcaClient::SmartPredictOutcomeCallable AcaClient::SmartPredictCallable(const SmartPredictRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SmartPredictOutcome()>>(
        [this, request]()
        {
            return this->SmartPredict(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AcaClient::SyncDepartmentOutcome AcaClient::SyncDepartment(const SyncDepartmentRequest &request)
{
    auto outcome = MakeRequest(request, "SyncDepartment");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SyncDepartmentResponse rsp = SyncDepartmentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SyncDepartmentOutcome(rsp);
        else
            return SyncDepartmentOutcome(o.GetError());
    }
    else
    {
        return SyncDepartmentOutcome(outcome.GetError());
    }
}

void AcaClient::SyncDepartmentAsync(const SyncDepartmentRequest& request, const SyncDepartmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SyncDepartment(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AcaClient::SyncDepartmentOutcomeCallable AcaClient::SyncDepartmentCallable(const SyncDepartmentRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SyncDepartmentOutcome()>>(
        [this, request]()
        {
            return this->SyncDepartment(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AcaClient::SyncStandardDictOutcome AcaClient::SyncStandardDict(const SyncStandardDictRequest &request)
{
    auto outcome = MakeRequest(request, "SyncStandardDict");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SyncStandardDictResponse rsp = SyncStandardDictResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SyncStandardDictOutcome(rsp);
        else
            return SyncStandardDictOutcome(o.GetError());
    }
    else
    {
        return SyncStandardDictOutcome(outcome.GetError());
    }
}

void AcaClient::SyncStandardDictAsync(const SyncStandardDictRequest& request, const SyncStandardDictAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SyncStandardDict(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AcaClient::SyncStandardDictOutcomeCallable AcaClient::SyncStandardDictCallable(const SyncStandardDictRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SyncStandardDictOutcome()>>(
        [this, request]()
        {
            return this->SyncStandardDict(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AcaClient::UploadDrugsOutcome AcaClient::UploadDrugs(const UploadDrugsRequest &request)
{
    auto outcome = MakeRequest(request, "UploadDrugs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UploadDrugsResponse rsp = UploadDrugsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UploadDrugsOutcome(rsp);
        else
            return UploadDrugsOutcome(o.GetError());
    }
    else
    {
        return UploadDrugsOutcome(outcome.GetError());
    }
}

void AcaClient::UploadDrugsAsync(const UploadDrugsRequest& request, const UploadDrugsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UploadDrugs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AcaClient::UploadDrugsOutcomeCallable AcaClient::UploadDrugsCallable(const UploadDrugsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UploadDrugsOutcome()>>(
        [this, request]()
        {
            return this->UploadDrugs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


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

#include <tencentcloud/bma/v20210624/BmaClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Bma::V20210624;
using namespace TencentCloud::Bma::V20210624::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-06-24";
    const string ENDPOINT = "bma.tencentcloudapi.com";
}

BmaClient::BmaClient(const Credential &credential, const string &region) :
    BmaClient(credential, region, ClientProfile())
{
}

BmaClient::BmaClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


BmaClient::CreateCRBlockOutcome BmaClient::CreateCRBlock(const CreateCRBlockRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCRBlock");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCRBlockResponse rsp = CreateCRBlockResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCRBlockOutcome(rsp);
        else
            return CreateCRBlockOutcome(o.GetError());
    }
    else
    {
        return CreateCRBlockOutcome(outcome.GetError());
    }
}

void BmaClient::CreateCRBlockAsync(const CreateCRBlockRequest& request, const CreateCRBlockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCRBlock(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmaClient::CreateCRBlockOutcomeCallable BmaClient::CreateCRBlockCallable(const CreateCRBlockRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCRBlockOutcome()>>(
        [this, request]()
        {
            return this->CreateCRBlock(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmaClient::CreateCRCompanyVerifyOutcome BmaClient::CreateCRCompanyVerify(const CreateCRCompanyVerifyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCRCompanyVerify");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCRCompanyVerifyResponse rsp = CreateCRCompanyVerifyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCRCompanyVerifyOutcome(rsp);
        else
            return CreateCRCompanyVerifyOutcome(o.GetError());
    }
    else
    {
        return CreateCRCompanyVerifyOutcome(outcome.GetError());
    }
}

void BmaClient::CreateCRCompanyVerifyAsync(const CreateCRCompanyVerifyRequest& request, const CreateCRCompanyVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCRCompanyVerify(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmaClient::CreateCRCompanyVerifyOutcomeCallable BmaClient::CreateCRCompanyVerifyCallable(const CreateCRCompanyVerifyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCRCompanyVerifyOutcome()>>(
        [this, request]()
        {
            return this->CreateCRCompanyVerify(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmaClient::CreateCRRightOutcome BmaClient::CreateCRRight(const CreateCRRightRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCRRight");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCRRightResponse rsp = CreateCRRightResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCRRightOutcome(rsp);
        else
            return CreateCRRightOutcome(o.GetError());
    }
    else
    {
        return CreateCRRightOutcome(outcome.GetError());
    }
}

void BmaClient::CreateCRRightAsync(const CreateCRRightRequest& request, const CreateCRRightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCRRight(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmaClient::CreateCRRightOutcomeCallable BmaClient::CreateCRRightCallable(const CreateCRRightRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCRRightOutcome()>>(
        [this, request]()
        {
            return this->CreateCRRight(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmaClient::CreateCRWorkOutcome BmaClient::CreateCRWork(const CreateCRWorkRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCRWork");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCRWorkResponse rsp = CreateCRWorkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCRWorkOutcome(rsp);
        else
            return CreateCRWorkOutcome(o.GetError());
    }
    else
    {
        return CreateCRWorkOutcome(outcome.GetError());
    }
}

void BmaClient::CreateCRWorkAsync(const CreateCRWorkRequest& request, const CreateCRWorkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCRWork(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmaClient::CreateCRWorkOutcomeCallable BmaClient::CreateCRWorkCallable(const CreateCRWorkRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCRWorkOutcome()>>(
        [this, request]()
        {
            return this->CreateCRWork(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmaClient::DescribeCRMonitorDetailOutcome BmaClient::DescribeCRMonitorDetail(const DescribeCRMonitorDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCRMonitorDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCRMonitorDetailResponse rsp = DescribeCRMonitorDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCRMonitorDetailOutcome(rsp);
        else
            return DescribeCRMonitorDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeCRMonitorDetailOutcome(outcome.GetError());
    }
}

void BmaClient::DescribeCRMonitorDetailAsync(const DescribeCRMonitorDetailRequest& request, const DescribeCRMonitorDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCRMonitorDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmaClient::DescribeCRMonitorDetailOutcomeCallable BmaClient::DescribeCRMonitorDetailCallable(const DescribeCRMonitorDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCRMonitorDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeCRMonitorDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmaClient::DescribeCRMonitorsOutcome BmaClient::DescribeCRMonitors(const DescribeCRMonitorsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCRMonitors");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCRMonitorsResponse rsp = DescribeCRMonitorsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCRMonitorsOutcome(rsp);
        else
            return DescribeCRMonitorsOutcome(o.GetError());
    }
    else
    {
        return DescribeCRMonitorsOutcome(outcome.GetError());
    }
}

void BmaClient::DescribeCRMonitorsAsync(const DescribeCRMonitorsRequest& request, const DescribeCRMonitorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCRMonitors(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmaClient::DescribeCRMonitorsOutcomeCallable BmaClient::DescribeCRMonitorsCallable(const DescribeCRMonitorsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCRMonitorsOutcome()>>(
        [this, request]()
        {
            return this->DescribeCRMonitors(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmaClient::DescribeCRWorkInfoOutcome BmaClient::DescribeCRWorkInfo(const DescribeCRWorkInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCRWorkInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCRWorkInfoResponse rsp = DescribeCRWorkInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCRWorkInfoOutcome(rsp);
        else
            return DescribeCRWorkInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeCRWorkInfoOutcome(outcome.GetError());
    }
}

void BmaClient::DescribeCRWorkInfoAsync(const DescribeCRWorkInfoRequest& request, const DescribeCRWorkInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCRWorkInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmaClient::DescribeCRWorkInfoOutcomeCallable BmaClient::DescribeCRWorkInfoCallable(const DescribeCRWorkInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCRWorkInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeCRWorkInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmaClient::ModifyCRBlockStatusOutcome BmaClient::ModifyCRBlockStatus(const ModifyCRBlockStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCRBlockStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCRBlockStatusResponse rsp = ModifyCRBlockStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCRBlockStatusOutcome(rsp);
        else
            return ModifyCRBlockStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyCRBlockStatusOutcome(outcome.GetError());
    }
}

void BmaClient::ModifyCRBlockStatusAsync(const ModifyCRBlockStatusRequest& request, const ModifyCRBlockStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCRBlockStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmaClient::ModifyCRBlockStatusOutcomeCallable BmaClient::ModifyCRBlockStatusCallable(const ModifyCRBlockStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCRBlockStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyCRBlockStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmaClient::ModifyCRMonitorOutcome BmaClient::ModifyCRMonitor(const ModifyCRMonitorRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCRMonitor");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCRMonitorResponse rsp = ModifyCRMonitorResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCRMonitorOutcome(rsp);
        else
            return ModifyCRMonitorOutcome(o.GetError());
    }
    else
    {
        return ModifyCRMonitorOutcome(outcome.GetError());
    }
}

void BmaClient::ModifyCRMonitorAsync(const ModifyCRMonitorRequest& request, const ModifyCRMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCRMonitor(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmaClient::ModifyCRMonitorOutcomeCallable BmaClient::ModifyCRMonitorCallable(const ModifyCRMonitorRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCRMonitorOutcome()>>(
        [this, request]()
        {
            return this->ModifyCRMonitor(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmaClient::ModifyCRObtainStatusOutcome BmaClient::ModifyCRObtainStatus(const ModifyCRObtainStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCRObtainStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCRObtainStatusResponse rsp = ModifyCRObtainStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCRObtainStatusOutcome(rsp);
        else
            return ModifyCRObtainStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyCRObtainStatusOutcome(outcome.GetError());
    }
}

void BmaClient::ModifyCRObtainStatusAsync(const ModifyCRObtainStatusRequest& request, const ModifyCRObtainStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCRObtainStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmaClient::ModifyCRObtainStatusOutcomeCallable BmaClient::ModifyCRObtainStatusCallable(const ModifyCRObtainStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCRObtainStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyCRObtainStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmaClient::ModifyCRRightStatusOutcome BmaClient::ModifyCRRightStatus(const ModifyCRRightStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCRRightStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCRRightStatusResponse rsp = ModifyCRRightStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCRRightStatusOutcome(rsp);
        else
            return ModifyCRRightStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyCRRightStatusOutcome(outcome.GetError());
    }
}

void BmaClient::ModifyCRRightStatusAsync(const ModifyCRRightStatusRequest& request, const ModifyCRRightStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCRRightStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmaClient::ModifyCRRightStatusOutcomeCallable BmaClient::ModifyCRRightStatusCallable(const ModifyCRRightStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCRRightStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyCRRightStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmaClient::UpdateCRWorkOutcome BmaClient::UpdateCRWork(const UpdateCRWorkRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateCRWork");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateCRWorkResponse rsp = UpdateCRWorkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateCRWorkOutcome(rsp);
        else
            return UpdateCRWorkOutcome(o.GetError());
    }
    else
    {
        return UpdateCRWorkOutcome(outcome.GetError());
    }
}

void BmaClient::UpdateCRWorkAsync(const UpdateCRWorkRequest& request, const UpdateCRWorkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateCRWork(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmaClient::UpdateCRWorkOutcomeCallable BmaClient::UpdateCRWorkCallable(const UpdateCRWorkRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateCRWorkOutcome()>>(
        [this, request]()
        {
            return this->UpdateCRWork(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


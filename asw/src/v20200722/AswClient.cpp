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

#include <tencentcloud/asw/v20200722/AswClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Asw::V20200722;
using namespace TencentCloud::Asw::V20200722::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-07-22";
    const string ENDPOINT = "asw.tencentcloudapi.com";
}

AswClient::AswClient(const Credential &credential, const string &region) :
    AswClient(credential, region, ClientProfile())
{
}

AswClient::AswClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


AswClient::CreateFlowServiceOutcome AswClient::CreateFlowService(const CreateFlowServiceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFlowService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFlowServiceResponse rsp = CreateFlowServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFlowServiceOutcome(rsp);
        else
            return CreateFlowServiceOutcome(o.GetError());
    }
    else
    {
        return CreateFlowServiceOutcome(outcome.GetError());
    }
}

void AswClient::CreateFlowServiceAsync(const CreateFlowServiceRequest& request, const CreateFlowServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateFlowService(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AswClient::CreateFlowServiceOutcomeCallable AswClient::CreateFlowServiceCallable(const CreateFlowServiceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateFlowServiceOutcome()>>(
        [this, request]()
        {
            return this->CreateFlowService(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AswClient::DescribeExecutionOutcome AswClient::DescribeExecution(const DescribeExecutionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeExecution");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeExecutionResponse rsp = DescribeExecutionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeExecutionOutcome(rsp);
        else
            return DescribeExecutionOutcome(o.GetError());
    }
    else
    {
        return DescribeExecutionOutcome(outcome.GetError());
    }
}

void AswClient::DescribeExecutionAsync(const DescribeExecutionRequest& request, const DescribeExecutionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeExecution(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AswClient::DescribeExecutionOutcomeCallable AswClient::DescribeExecutionCallable(const DescribeExecutionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeExecutionOutcome()>>(
        [this, request]()
        {
            return this->DescribeExecution(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AswClient::DescribeExecutionHistoryOutcome AswClient::DescribeExecutionHistory(const DescribeExecutionHistoryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeExecutionHistory");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeExecutionHistoryResponse rsp = DescribeExecutionHistoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeExecutionHistoryOutcome(rsp);
        else
            return DescribeExecutionHistoryOutcome(o.GetError());
    }
    else
    {
        return DescribeExecutionHistoryOutcome(outcome.GetError());
    }
}

void AswClient::DescribeExecutionHistoryAsync(const DescribeExecutionHistoryRequest& request, const DescribeExecutionHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeExecutionHistory(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AswClient::DescribeExecutionHistoryOutcomeCallable AswClient::DescribeExecutionHistoryCallable(const DescribeExecutionHistoryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeExecutionHistoryOutcome()>>(
        [this, request]()
        {
            return this->DescribeExecutionHistory(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AswClient::DescribeExecutionsOutcome AswClient::DescribeExecutions(const DescribeExecutionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeExecutions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeExecutionsResponse rsp = DescribeExecutionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeExecutionsOutcome(rsp);
        else
            return DescribeExecutionsOutcome(o.GetError());
    }
    else
    {
        return DescribeExecutionsOutcome(outcome.GetError());
    }
}

void AswClient::DescribeExecutionsAsync(const DescribeExecutionsRequest& request, const DescribeExecutionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeExecutions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AswClient::DescribeExecutionsOutcomeCallable AswClient::DescribeExecutionsCallable(const DescribeExecutionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeExecutionsOutcome()>>(
        [this, request]()
        {
            return this->DescribeExecutions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AswClient::DescribeFlowServiceDetailOutcome AswClient::DescribeFlowServiceDetail(const DescribeFlowServiceDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFlowServiceDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFlowServiceDetailResponse rsp = DescribeFlowServiceDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFlowServiceDetailOutcome(rsp);
        else
            return DescribeFlowServiceDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeFlowServiceDetailOutcome(outcome.GetError());
    }
}

void AswClient::DescribeFlowServiceDetailAsync(const DescribeFlowServiceDetailRequest& request, const DescribeFlowServiceDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFlowServiceDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AswClient::DescribeFlowServiceDetailOutcomeCallable AswClient::DescribeFlowServiceDetailCallable(const DescribeFlowServiceDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFlowServiceDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeFlowServiceDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AswClient::DescribeFlowServicesOutcome AswClient::DescribeFlowServices(const DescribeFlowServicesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFlowServices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFlowServicesResponse rsp = DescribeFlowServicesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFlowServicesOutcome(rsp);
        else
            return DescribeFlowServicesOutcome(o.GetError());
    }
    else
    {
        return DescribeFlowServicesOutcome(outcome.GetError());
    }
}

void AswClient::DescribeFlowServicesAsync(const DescribeFlowServicesRequest& request, const DescribeFlowServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFlowServices(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AswClient::DescribeFlowServicesOutcomeCallable AswClient::DescribeFlowServicesCallable(const DescribeFlowServicesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFlowServicesOutcome()>>(
        [this, request]()
        {
            return this->DescribeFlowServices(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AswClient::ModifyFlowServiceOutcome AswClient::ModifyFlowService(const ModifyFlowServiceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyFlowService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyFlowServiceResponse rsp = ModifyFlowServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyFlowServiceOutcome(rsp);
        else
            return ModifyFlowServiceOutcome(o.GetError());
    }
    else
    {
        return ModifyFlowServiceOutcome(outcome.GetError());
    }
}

void AswClient::ModifyFlowServiceAsync(const ModifyFlowServiceRequest& request, const ModifyFlowServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyFlowService(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AswClient::ModifyFlowServiceOutcomeCallable AswClient::ModifyFlowServiceCallable(const ModifyFlowServiceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyFlowServiceOutcome()>>(
        [this, request]()
        {
            return this->ModifyFlowService(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AswClient::StartExecutionOutcome AswClient::StartExecution(const StartExecutionRequest &request)
{
    auto outcome = MakeRequest(request, "StartExecution");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartExecutionResponse rsp = StartExecutionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartExecutionOutcome(rsp);
        else
            return StartExecutionOutcome(o.GetError());
    }
    else
    {
        return StartExecutionOutcome(outcome.GetError());
    }
}

void AswClient::StartExecutionAsync(const StartExecutionRequest& request, const StartExecutionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartExecution(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AswClient::StartExecutionOutcomeCallable AswClient::StartExecutionCallable(const StartExecutionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartExecutionOutcome()>>(
        [this, request]()
        {
            return this->StartExecution(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AswClient::StopExecutionOutcome AswClient::StopExecution(const StopExecutionRequest &request)
{
    auto outcome = MakeRequest(request, "StopExecution");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopExecutionResponse rsp = StopExecutionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopExecutionOutcome(rsp);
        else
            return StopExecutionOutcome(o.GetError());
    }
    else
    {
        return StopExecutionOutcome(outcome.GetError());
    }
}

void AswClient::StopExecutionAsync(const StopExecutionRequest& request, const StopExecutionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopExecution(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AswClient::StopExecutionOutcomeCallable AswClient::StopExecutionCallable(const StopExecutionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopExecutionOutcome()>>(
        [this, request]()
        {
            return this->StopExecution(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


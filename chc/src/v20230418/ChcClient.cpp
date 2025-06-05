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

#include <tencentcloud/chc/v20230418/ChcClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Chc::V20230418;
using namespace TencentCloud::Chc::V20230418::Model;
using namespace std;

namespace
{
    const string VERSION = "2023-04-18";
    const string ENDPOINT = "chc.tencentcloudapi.com";
}

ChcClient::ChcClient(const Credential &credential, const string &region) :
    ChcClient(credential, region, ClientProfile())
{
}

ChcClient::ChcClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


ChcClient::ConfirmCommonServiceWorkOrderOutcome ChcClient::ConfirmCommonServiceWorkOrder(const ConfirmCommonServiceWorkOrderRequest &request)
{
    auto outcome = MakeRequest(request, "ConfirmCommonServiceWorkOrder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ConfirmCommonServiceWorkOrderResponse rsp = ConfirmCommonServiceWorkOrderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ConfirmCommonServiceWorkOrderOutcome(rsp);
        else
            return ConfirmCommonServiceWorkOrderOutcome(o.GetError());
    }
    else
    {
        return ConfirmCommonServiceWorkOrderOutcome(outcome.GetError());
    }
}

void ChcClient::ConfirmCommonServiceWorkOrderAsync(const ConfirmCommonServiceWorkOrderRequest& request, const ConfirmCommonServiceWorkOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ConfirmCommonServiceWorkOrder(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ChcClient::ConfirmCommonServiceWorkOrderOutcomeCallable ChcClient::ConfirmCommonServiceWorkOrderCallable(const ConfirmCommonServiceWorkOrderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ConfirmCommonServiceWorkOrderOutcome()>>(
        [this, request]()
        {
            return this->ConfirmCommonServiceWorkOrder(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ChcClient::CreateCommonServiceWorkOrderOutcome ChcClient::CreateCommonServiceWorkOrder(const CreateCommonServiceWorkOrderRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCommonServiceWorkOrder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCommonServiceWorkOrderResponse rsp = CreateCommonServiceWorkOrderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCommonServiceWorkOrderOutcome(rsp);
        else
            return CreateCommonServiceWorkOrderOutcome(o.GetError());
    }
    else
    {
        return CreateCommonServiceWorkOrderOutcome(outcome.GetError());
    }
}

void ChcClient::CreateCommonServiceWorkOrderAsync(const CreateCommonServiceWorkOrderRequest& request, const CreateCommonServiceWorkOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCommonServiceWorkOrder(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ChcClient::CreateCommonServiceWorkOrderOutcomeCallable ChcClient::CreateCommonServiceWorkOrderCallable(const CreateCommonServiceWorkOrderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCommonServiceWorkOrderOutcome()>>(
        [this, request]()
        {
            return this->CreateCommonServiceWorkOrder(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ChcClient::CreateModelEvaluationWorkOrderOutcome ChcClient::CreateModelEvaluationWorkOrder(const CreateModelEvaluationWorkOrderRequest &request)
{
    auto outcome = MakeRequest(request, "CreateModelEvaluationWorkOrder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateModelEvaluationWorkOrderResponse rsp = CreateModelEvaluationWorkOrderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateModelEvaluationWorkOrderOutcome(rsp);
        else
            return CreateModelEvaluationWorkOrderOutcome(o.GetError());
    }
    else
    {
        return CreateModelEvaluationWorkOrderOutcome(outcome.GetError());
    }
}

void ChcClient::CreateModelEvaluationWorkOrderAsync(const CreateModelEvaluationWorkOrderRequest& request, const CreateModelEvaluationWorkOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateModelEvaluationWorkOrder(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ChcClient::CreateModelEvaluationWorkOrderOutcomeCallable ChcClient::CreateModelEvaluationWorkOrderCallable(const CreateModelEvaluationWorkOrderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateModelEvaluationWorkOrderOutcome()>>(
        [this, request]()
        {
            return this->CreateModelEvaluationWorkOrder(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ChcClient::CreateMovingWorkOrderOutcome ChcClient::CreateMovingWorkOrder(const CreateMovingWorkOrderRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMovingWorkOrder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMovingWorkOrderResponse rsp = CreateMovingWorkOrderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMovingWorkOrderOutcome(rsp);
        else
            return CreateMovingWorkOrderOutcome(o.GetError());
    }
    else
    {
        return CreateMovingWorkOrderOutcome(outcome.GetError());
    }
}

void ChcClient::CreateMovingWorkOrderAsync(const CreateMovingWorkOrderRequest& request, const CreateMovingWorkOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateMovingWorkOrder(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ChcClient::CreateMovingWorkOrderOutcomeCallable ChcClient::CreateMovingWorkOrderCallable(const CreateMovingWorkOrderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateMovingWorkOrderOutcome()>>(
        [this, request]()
        {
            return this->CreateMovingWorkOrder(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ChcClient::CreateNetDeviceModelOutcome ChcClient::CreateNetDeviceModel(const CreateNetDeviceModelRequest &request)
{
    auto outcome = MakeRequest(request, "CreateNetDeviceModel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateNetDeviceModelResponse rsp = CreateNetDeviceModelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateNetDeviceModelOutcome(rsp);
        else
            return CreateNetDeviceModelOutcome(o.GetError());
    }
    else
    {
        return CreateNetDeviceModelOutcome(outcome.GetError());
    }
}

void ChcClient::CreateNetDeviceModelAsync(const CreateNetDeviceModelRequest& request, const CreateNetDeviceModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateNetDeviceModel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ChcClient::CreateNetDeviceModelOutcomeCallable ChcClient::CreateNetDeviceModelCallable(const CreateNetDeviceModelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateNetDeviceModelOutcome()>>(
        [this, request]()
        {
            return this->CreateNetDeviceModel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ChcClient::CreatePersonnelVisitWorkOrderOutcome ChcClient::CreatePersonnelVisitWorkOrder(const CreatePersonnelVisitWorkOrderRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePersonnelVisitWorkOrder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePersonnelVisitWorkOrderResponse rsp = CreatePersonnelVisitWorkOrderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePersonnelVisitWorkOrderOutcome(rsp);
        else
            return CreatePersonnelVisitWorkOrderOutcome(o.GetError());
    }
    else
    {
        return CreatePersonnelVisitWorkOrderOutcome(outcome.GetError());
    }
}

void ChcClient::CreatePersonnelVisitWorkOrderAsync(const CreatePersonnelVisitWorkOrderRequest& request, const CreatePersonnelVisitWorkOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePersonnelVisitWorkOrder(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ChcClient::CreatePersonnelVisitWorkOrderOutcomeCallable ChcClient::CreatePersonnelVisitWorkOrderCallable(const CreatePersonnelVisitWorkOrderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePersonnelVisitWorkOrderOutcome()>>(
        [this, request]()
        {
            return this->CreatePersonnelVisitWorkOrder(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ChcClient::CreatePowerOffWorkOrderOutcome ChcClient::CreatePowerOffWorkOrder(const CreatePowerOffWorkOrderRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePowerOffWorkOrder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePowerOffWorkOrderResponse rsp = CreatePowerOffWorkOrderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePowerOffWorkOrderOutcome(rsp);
        else
            return CreatePowerOffWorkOrderOutcome(o.GetError());
    }
    else
    {
        return CreatePowerOffWorkOrderOutcome(outcome.GetError());
    }
}

void ChcClient::CreatePowerOffWorkOrderAsync(const CreatePowerOffWorkOrderRequest& request, const CreatePowerOffWorkOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePowerOffWorkOrder(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ChcClient::CreatePowerOffWorkOrderOutcomeCallable ChcClient::CreatePowerOffWorkOrderCallable(const CreatePowerOffWorkOrderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePowerOffWorkOrderOutcome()>>(
        [this, request]()
        {
            return this->CreatePowerOffWorkOrder(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ChcClient::CreatePowerOnWorkOrderOutcome ChcClient::CreatePowerOnWorkOrder(const CreatePowerOnWorkOrderRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePowerOnWorkOrder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePowerOnWorkOrderResponse rsp = CreatePowerOnWorkOrderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePowerOnWorkOrderOutcome(rsp);
        else
            return CreatePowerOnWorkOrderOutcome(o.GetError());
    }
    else
    {
        return CreatePowerOnWorkOrderOutcome(outcome.GetError());
    }
}

void ChcClient::CreatePowerOnWorkOrderAsync(const CreatePowerOnWorkOrderRequest& request, const CreatePowerOnWorkOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePowerOnWorkOrder(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ChcClient::CreatePowerOnWorkOrderOutcomeCallable ChcClient::CreatePowerOnWorkOrderCallable(const CreatePowerOnWorkOrderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePowerOnWorkOrderOutcome()>>(
        [this, request]()
        {
            return this->CreatePowerOnWorkOrder(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ChcClient::CreateQuitWorkOrderOutcome ChcClient::CreateQuitWorkOrder(const CreateQuitWorkOrderRequest &request)
{
    auto outcome = MakeRequest(request, "CreateQuitWorkOrder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateQuitWorkOrderResponse rsp = CreateQuitWorkOrderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateQuitWorkOrderOutcome(rsp);
        else
            return CreateQuitWorkOrderOutcome(o.GetError());
    }
    else
    {
        return CreateQuitWorkOrderOutcome(outcome.GetError());
    }
}

void ChcClient::CreateQuitWorkOrderAsync(const CreateQuitWorkOrderRequest& request, const CreateQuitWorkOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateQuitWorkOrder(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ChcClient::CreateQuitWorkOrderOutcomeCallable ChcClient::CreateQuitWorkOrderCallable(const CreateQuitWorkOrderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateQuitWorkOrderOutcome()>>(
        [this, request]()
        {
            return this->CreateQuitWorkOrder(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ChcClient::CreateRackOffWorkOrderOutcome ChcClient::CreateRackOffWorkOrder(const CreateRackOffWorkOrderRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRackOffWorkOrder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRackOffWorkOrderResponse rsp = CreateRackOffWorkOrderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRackOffWorkOrderOutcome(rsp);
        else
            return CreateRackOffWorkOrderOutcome(o.GetError());
    }
    else
    {
        return CreateRackOffWorkOrderOutcome(outcome.GetError());
    }
}

void ChcClient::CreateRackOffWorkOrderAsync(const CreateRackOffWorkOrderRequest& request, const CreateRackOffWorkOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateRackOffWorkOrder(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ChcClient::CreateRackOffWorkOrderOutcomeCallable ChcClient::CreateRackOffWorkOrderCallable(const CreateRackOffWorkOrderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateRackOffWorkOrderOutcome()>>(
        [this, request]()
        {
            return this->CreateRackOffWorkOrder(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ChcClient::CreateRackOnWorkOrderOutcome ChcClient::CreateRackOnWorkOrder(const CreateRackOnWorkOrderRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRackOnWorkOrder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRackOnWorkOrderResponse rsp = CreateRackOnWorkOrderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRackOnWorkOrderOutcome(rsp);
        else
            return CreateRackOnWorkOrderOutcome(o.GetError());
    }
    else
    {
        return CreateRackOnWorkOrderOutcome(outcome.GetError());
    }
}

void ChcClient::CreateRackOnWorkOrderAsync(const CreateRackOnWorkOrderRequest& request, const CreateRackOnWorkOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateRackOnWorkOrder(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ChcClient::CreateRackOnWorkOrderOutcomeCallable ChcClient::CreateRackOnWorkOrderCallable(const CreateRackOnWorkOrderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateRackOnWorkOrderOutcome()>>(
        [this, request]()
        {
            return this->CreateRackOnWorkOrder(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ChcClient::CreateReceivingWorkOrderOutcome ChcClient::CreateReceivingWorkOrder(const CreateReceivingWorkOrderRequest &request)
{
    auto outcome = MakeRequest(request, "CreateReceivingWorkOrder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateReceivingWorkOrderResponse rsp = CreateReceivingWorkOrderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateReceivingWorkOrderOutcome(rsp);
        else
            return CreateReceivingWorkOrderOutcome(o.GetError());
    }
    else
    {
        return CreateReceivingWorkOrderOutcome(outcome.GetError());
    }
}

void ChcClient::CreateReceivingWorkOrderAsync(const CreateReceivingWorkOrderRequest& request, const CreateReceivingWorkOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateReceivingWorkOrder(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ChcClient::CreateReceivingWorkOrderOutcomeCallable ChcClient::CreateReceivingWorkOrderCallable(const CreateReceivingWorkOrderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateReceivingWorkOrderOutcome()>>(
        [this, request]()
        {
            return this->CreateReceivingWorkOrder(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ChcClient::CreateServerModelOutcome ChcClient::CreateServerModel(const CreateServerModelRequest &request)
{
    auto outcome = MakeRequest(request, "CreateServerModel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateServerModelResponse rsp = CreateServerModelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateServerModelOutcome(rsp);
        else
            return CreateServerModelOutcome(o.GetError());
    }
    else
    {
        return CreateServerModelOutcome(outcome.GetError());
    }
}

void ChcClient::CreateServerModelAsync(const CreateServerModelRequest& request, const CreateServerModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateServerModel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ChcClient::CreateServerModelOutcomeCallable ChcClient::CreateServerModelCallable(const CreateServerModelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateServerModelOutcome()>>(
        [this, request]()
        {
            return this->CreateServerModel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ChcClient::CreateSpeciallyQuitWorkOrderOutcome ChcClient::CreateSpeciallyQuitWorkOrder(const CreateSpeciallyQuitWorkOrderRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSpeciallyQuitWorkOrder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSpeciallyQuitWorkOrderResponse rsp = CreateSpeciallyQuitWorkOrderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSpeciallyQuitWorkOrderOutcome(rsp);
        else
            return CreateSpeciallyQuitWorkOrderOutcome(o.GetError());
    }
    else
    {
        return CreateSpeciallyQuitWorkOrderOutcome(outcome.GetError());
    }
}

void ChcClient::CreateSpeciallyQuitWorkOrderAsync(const CreateSpeciallyQuitWorkOrderRequest& request, const CreateSpeciallyQuitWorkOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSpeciallyQuitWorkOrder(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ChcClient::CreateSpeciallyQuitWorkOrderOutcomeCallable ChcClient::CreateSpeciallyQuitWorkOrderCallable(const CreateSpeciallyQuitWorkOrderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSpeciallyQuitWorkOrderOutcome()>>(
        [this, request]()
        {
            return this->CreateSpeciallyQuitWorkOrder(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ChcClient::DescribeAvailableModelListOutcome ChcClient::DescribeAvailableModelList(const DescribeAvailableModelListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAvailableModelList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAvailableModelListResponse rsp = DescribeAvailableModelListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAvailableModelListOutcome(rsp);
        else
            return DescribeAvailableModelListOutcome(o.GetError());
    }
    else
    {
        return DescribeAvailableModelListOutcome(outcome.GetError());
    }
}

void ChcClient::DescribeAvailableModelListAsync(const DescribeAvailableModelListRequest& request, const DescribeAvailableModelListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAvailableModelList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ChcClient::DescribeAvailableModelListOutcomeCallable ChcClient::DescribeAvailableModelListCallable(const DescribeAvailableModelListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAvailableModelListOutcome()>>(
        [this, request]()
        {
            return this->DescribeAvailableModelList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ChcClient::DescribeCampusListOutcome ChcClient::DescribeCampusList(const DescribeCampusListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCampusList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCampusListResponse rsp = DescribeCampusListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCampusListOutcome(rsp);
        else
            return DescribeCampusListOutcome(o.GetError());
    }
    else
    {
        return DescribeCampusListOutcome(outcome.GetError());
    }
}

void ChcClient::DescribeCampusListAsync(const DescribeCampusListRequest& request, const DescribeCampusListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCampusList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ChcClient::DescribeCampusListOutcomeCallable ChcClient::DescribeCampusListCallable(const DescribeCampusListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCampusListOutcome()>>(
        [this, request]()
        {
            return this->DescribeCampusList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ChcClient::DescribeCommonServiceWorkOrderDetailOutcome ChcClient::DescribeCommonServiceWorkOrderDetail(const DescribeCommonServiceWorkOrderDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCommonServiceWorkOrderDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCommonServiceWorkOrderDetailResponse rsp = DescribeCommonServiceWorkOrderDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCommonServiceWorkOrderDetailOutcome(rsp);
        else
            return DescribeCommonServiceWorkOrderDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeCommonServiceWorkOrderDetailOutcome(outcome.GetError());
    }
}

void ChcClient::DescribeCommonServiceWorkOrderDetailAsync(const DescribeCommonServiceWorkOrderDetailRequest& request, const DescribeCommonServiceWorkOrderDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCommonServiceWorkOrderDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ChcClient::DescribeCommonServiceWorkOrderDetailOutcomeCallable ChcClient::DescribeCommonServiceWorkOrderDetailCallable(const DescribeCommonServiceWorkOrderDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCommonServiceWorkOrderDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeCommonServiceWorkOrderDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ChcClient::DescribeCustomerInfoOutcome ChcClient::DescribeCustomerInfo(const DescribeCustomerInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCustomerInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCustomerInfoResponse rsp = DescribeCustomerInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCustomerInfoOutcome(rsp);
        else
            return DescribeCustomerInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeCustomerInfoOutcome(outcome.GetError());
    }
}

void ChcClient::DescribeCustomerInfoAsync(const DescribeCustomerInfoRequest& request, const DescribeCustomerInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCustomerInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ChcClient::DescribeCustomerInfoOutcomeCallable ChcClient::DescribeCustomerInfoCallable(const DescribeCustomerInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCustomerInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeCustomerInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ChcClient::DescribeDeviceListOutcome ChcClient::DescribeDeviceList(const DescribeDeviceListRequest &request)
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

void ChcClient::DescribeDeviceListAsync(const DescribeDeviceListRequest& request, const DescribeDeviceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDeviceList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ChcClient::DescribeDeviceListOutcomeCallable ChcClient::DescribeDeviceListCallable(const DescribeDeviceListRequest &request)
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

ChcClient::DescribeDeviceWorkOrderDetailOutcome ChcClient::DescribeDeviceWorkOrderDetail(const DescribeDeviceWorkOrderDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeviceWorkOrderDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceWorkOrderDetailResponse rsp = DescribeDeviceWorkOrderDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceWorkOrderDetailOutcome(rsp);
        else
            return DescribeDeviceWorkOrderDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceWorkOrderDetailOutcome(outcome.GetError());
    }
}

void ChcClient::DescribeDeviceWorkOrderDetailAsync(const DescribeDeviceWorkOrderDetailRequest& request, const DescribeDeviceWorkOrderDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDeviceWorkOrderDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ChcClient::DescribeDeviceWorkOrderDetailOutcomeCallable ChcClient::DescribeDeviceWorkOrderDetailCallable(const DescribeDeviceWorkOrderDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDeviceWorkOrderDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeDeviceWorkOrderDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ChcClient::DescribeIdcUnitAssetDetailOutcome ChcClient::DescribeIdcUnitAssetDetail(const DescribeIdcUnitAssetDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIdcUnitAssetDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIdcUnitAssetDetailResponse rsp = DescribeIdcUnitAssetDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIdcUnitAssetDetailOutcome(rsp);
        else
            return DescribeIdcUnitAssetDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeIdcUnitAssetDetailOutcome(outcome.GetError());
    }
}

void ChcClient::DescribeIdcUnitAssetDetailAsync(const DescribeIdcUnitAssetDetailRequest& request, const DescribeIdcUnitAssetDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeIdcUnitAssetDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ChcClient::DescribeIdcUnitAssetDetailOutcomeCallable ChcClient::DescribeIdcUnitAssetDetailCallable(const DescribeIdcUnitAssetDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeIdcUnitAssetDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeIdcUnitAssetDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ChcClient::DescribeIdcUnitDetailOutcome ChcClient::DescribeIdcUnitDetail(const DescribeIdcUnitDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIdcUnitDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIdcUnitDetailResponse rsp = DescribeIdcUnitDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIdcUnitDetailOutcome(rsp);
        else
            return DescribeIdcUnitDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeIdcUnitDetailOutcome(outcome.GetError());
    }
}

void ChcClient::DescribeIdcUnitDetailAsync(const DescribeIdcUnitDetailRequest& request, const DescribeIdcUnitDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeIdcUnitDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ChcClient::DescribeIdcUnitDetailOutcomeCallable ChcClient::DescribeIdcUnitDetailCallable(const DescribeIdcUnitDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeIdcUnitDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeIdcUnitDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ChcClient::DescribeIdcsOutcome ChcClient::DescribeIdcs(const DescribeIdcsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIdcs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIdcsResponse rsp = DescribeIdcsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIdcsOutcome(rsp);
        else
            return DescribeIdcsOutcome(o.GetError());
    }
    else
    {
        return DescribeIdcsOutcome(outcome.GetError());
    }
}

void ChcClient::DescribeIdcsAsync(const DescribeIdcsRequest& request, const DescribeIdcsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeIdcs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ChcClient::DescribeIdcsOutcomeCallable ChcClient::DescribeIdcsCallable(const DescribeIdcsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeIdcsOutcome()>>(
        [this, request]()
        {
            return this->DescribeIdcs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ChcClient::DescribeModelOutcome ChcClient::DescribeModel(const DescribeModelRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeModel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeModelResponse rsp = DescribeModelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeModelOutcome(rsp);
        else
            return DescribeModelOutcome(o.GetError());
    }
    else
    {
        return DescribeModelOutcome(outcome.GetError());
    }
}

void ChcClient::DescribeModelAsync(const DescribeModelRequest& request, const DescribeModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeModel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ChcClient::DescribeModelOutcomeCallable ChcClient::DescribeModelCallable(const DescribeModelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeModelOutcome()>>(
        [this, request]()
        {
            return this->DescribeModel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ChcClient::DescribeModelEvaluationWorkOrderDetailOutcome ChcClient::DescribeModelEvaluationWorkOrderDetail(const DescribeModelEvaluationWorkOrderDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeModelEvaluationWorkOrderDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeModelEvaluationWorkOrderDetailResponse rsp = DescribeModelEvaluationWorkOrderDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeModelEvaluationWorkOrderDetailOutcome(rsp);
        else
            return DescribeModelEvaluationWorkOrderDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeModelEvaluationWorkOrderDetailOutcome(outcome.GetError());
    }
}

void ChcClient::DescribeModelEvaluationWorkOrderDetailAsync(const DescribeModelEvaluationWorkOrderDetailRequest& request, const DescribeModelEvaluationWorkOrderDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeModelEvaluationWorkOrderDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ChcClient::DescribeModelEvaluationWorkOrderDetailOutcomeCallable ChcClient::DescribeModelEvaluationWorkOrderDetailCallable(const DescribeModelEvaluationWorkOrderDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeModelEvaluationWorkOrderDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeModelEvaluationWorkOrderDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ChcClient::DescribeModelTemplateOutcome ChcClient::DescribeModelTemplate(const DescribeModelTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeModelTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeModelTemplateResponse rsp = DescribeModelTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeModelTemplateOutcome(rsp);
        else
            return DescribeModelTemplateOutcome(o.GetError());
    }
    else
    {
        return DescribeModelTemplateOutcome(outcome.GetError());
    }
}

void ChcClient::DescribeModelTemplateAsync(const DescribeModelTemplateRequest& request, const DescribeModelTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeModelTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ChcClient::DescribeModelTemplateOutcomeCallable ChcClient::DescribeModelTemplateCallable(const DescribeModelTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeModelTemplateOutcome()>>(
        [this, request]()
        {
            return this->DescribeModelTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ChcClient::DescribeModelVersionListOutcome ChcClient::DescribeModelVersionList(const DescribeModelVersionListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeModelVersionList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeModelVersionListResponse rsp = DescribeModelVersionListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeModelVersionListOutcome(rsp);
        else
            return DescribeModelVersionListOutcome(o.GetError());
    }
    else
    {
        return DescribeModelVersionListOutcome(outcome.GetError());
    }
}

void ChcClient::DescribeModelVersionListAsync(const DescribeModelVersionListRequest& request, const DescribeModelVersionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeModelVersionList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ChcClient::DescribeModelVersionListOutcomeCallable ChcClient::DescribeModelVersionListCallable(const DescribeModelVersionListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeModelVersionListOutcome()>>(
        [this, request]()
        {
            return this->DescribeModelVersionList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ChcClient::DescribePersonnelVisitWorkOrderDetailOutcome ChcClient::DescribePersonnelVisitWorkOrderDetail(const DescribePersonnelVisitWorkOrderDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePersonnelVisitWorkOrderDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePersonnelVisitWorkOrderDetailResponse rsp = DescribePersonnelVisitWorkOrderDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePersonnelVisitWorkOrderDetailOutcome(rsp);
        else
            return DescribePersonnelVisitWorkOrderDetailOutcome(o.GetError());
    }
    else
    {
        return DescribePersonnelVisitWorkOrderDetailOutcome(outcome.GetError());
    }
}

void ChcClient::DescribePersonnelVisitWorkOrderDetailAsync(const DescribePersonnelVisitWorkOrderDetailRequest& request, const DescribePersonnelVisitWorkOrderDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePersonnelVisitWorkOrderDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ChcClient::DescribePersonnelVisitWorkOrderDetailOutcomeCallable ChcClient::DescribePersonnelVisitWorkOrderDetailCallable(const DescribePersonnelVisitWorkOrderDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePersonnelVisitWorkOrderDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribePersonnelVisitWorkOrderDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ChcClient::DescribePositionStatusSummaryOutcome ChcClient::DescribePositionStatusSummary(const DescribePositionStatusSummaryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePositionStatusSummary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePositionStatusSummaryResponse rsp = DescribePositionStatusSummaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePositionStatusSummaryOutcome(rsp);
        else
            return DescribePositionStatusSummaryOutcome(o.GetError());
    }
    else
    {
        return DescribePositionStatusSummaryOutcome(outcome.GetError());
    }
}

void ChcClient::DescribePositionStatusSummaryAsync(const DescribePositionStatusSummaryRequest& request, const DescribePositionStatusSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePositionStatusSummary(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ChcClient::DescribePositionStatusSummaryOutcomeCallable ChcClient::DescribePositionStatusSummaryCallable(const DescribePositionStatusSummaryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePositionStatusSummaryOutcome()>>(
        [this, request]()
        {
            return this->DescribePositionStatusSummary(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ChcClient::DescribePositionsOutcome ChcClient::DescribePositions(const DescribePositionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePositions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePositionsResponse rsp = DescribePositionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePositionsOutcome(rsp);
        else
            return DescribePositionsOutcome(o.GetError());
    }
    else
    {
        return DescribePositionsOutcome(outcome.GetError());
    }
}

void ChcClient::DescribePositionsAsync(const DescribePositionsRequest& request, const DescribePositionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePositions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ChcClient::DescribePositionsOutcomeCallable ChcClient::DescribePositionsCallable(const DescribePositionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePositionsOutcome()>>(
        [this, request]()
        {
            return this->DescribePositions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ChcClient::DescribeRacksOutcome ChcClient::DescribeRacks(const DescribeRacksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRacks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRacksResponse rsp = DescribeRacksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRacksOutcome(rsp);
        else
            return DescribeRacksOutcome(o.GetError());
    }
    else
    {
        return DescribeRacksOutcome(outcome.GetError());
    }
}

void ChcClient::DescribeRacksAsync(const DescribeRacksRequest& request, const DescribeRacksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRacks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ChcClient::DescribeRacksOutcomeCallable ChcClient::DescribeRacksCallable(const DescribeRacksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRacksOutcome()>>(
        [this, request]()
        {
            return this->DescribeRacks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ChcClient::DescribeRacksDistributionOutcome ChcClient::DescribeRacksDistribution(const DescribeRacksDistributionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRacksDistribution");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRacksDistributionResponse rsp = DescribeRacksDistributionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRacksDistributionOutcome(rsp);
        else
            return DescribeRacksDistributionOutcome(o.GetError());
    }
    else
    {
        return DescribeRacksDistributionOutcome(outcome.GetError());
    }
}

void ChcClient::DescribeRacksDistributionAsync(const DescribeRacksDistributionRequest& request, const DescribeRacksDistributionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRacksDistribution(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ChcClient::DescribeRacksDistributionOutcomeCallable ChcClient::DescribeRacksDistributionCallable(const DescribeRacksDistributionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRacksDistributionOutcome()>>(
        [this, request]()
        {
            return this->DescribeRacksDistribution(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ChcClient::DescribeResourceUsageOutcome ChcClient::DescribeResourceUsage(const DescribeResourceUsageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResourceUsage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResourceUsageResponse rsp = DescribeResourceUsageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResourceUsageOutcome(rsp);
        else
            return DescribeResourceUsageOutcome(o.GetError());
    }
    else
    {
        return DescribeResourceUsageOutcome(outcome.GetError());
    }
}

void ChcClient::DescribeResourceUsageAsync(const DescribeResourceUsageRequest& request, const DescribeResourceUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeResourceUsage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ChcClient::DescribeResourceUsageOutcomeCallable ChcClient::DescribeResourceUsageCallable(const DescribeResourceUsageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeResourceUsageOutcome()>>(
        [this, request]()
        {
            return this->DescribeResourceUsage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ChcClient::DescribeWorkOrderListOutcome ChcClient::DescribeWorkOrderList(const DescribeWorkOrderListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWorkOrderList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWorkOrderListResponse rsp = DescribeWorkOrderListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWorkOrderListOutcome(rsp);
        else
            return DescribeWorkOrderListOutcome(o.GetError());
    }
    else
    {
        return DescribeWorkOrderListOutcome(outcome.GetError());
    }
}

void ChcClient::DescribeWorkOrderListAsync(const DescribeWorkOrderListRequest& request, const DescribeWorkOrderListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWorkOrderList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ChcClient::DescribeWorkOrderListOutcomeCallable ChcClient::DescribeWorkOrderListCallable(const DescribeWorkOrderListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWorkOrderListOutcome()>>(
        [this, request]()
        {
            return this->DescribeWorkOrderList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ChcClient::DescribeWorkOrderStatisticsOutcome ChcClient::DescribeWorkOrderStatistics(const DescribeWorkOrderStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWorkOrderStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWorkOrderStatisticsResponse rsp = DescribeWorkOrderStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWorkOrderStatisticsOutcome(rsp);
        else
            return DescribeWorkOrderStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeWorkOrderStatisticsOutcome(outcome.GetError());
    }
}

void ChcClient::DescribeWorkOrderStatisticsAsync(const DescribeWorkOrderStatisticsRequest& request, const DescribeWorkOrderStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWorkOrderStatistics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ChcClient::DescribeWorkOrderStatisticsOutcomeCallable ChcClient::DescribeWorkOrderStatisticsCallable(const DescribeWorkOrderStatisticsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWorkOrderStatisticsOutcome()>>(
        [this, request]()
        {
            return this->DescribeWorkOrderStatistics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ChcClient::DescribeWorkOrderTypesOutcome ChcClient::DescribeWorkOrderTypes(const DescribeWorkOrderTypesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWorkOrderTypes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWorkOrderTypesResponse rsp = DescribeWorkOrderTypesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWorkOrderTypesOutcome(rsp);
        else
            return DescribeWorkOrderTypesOutcome(o.GetError());
    }
    else
    {
        return DescribeWorkOrderTypesOutcome(outcome.GetError());
    }
}

void ChcClient::DescribeWorkOrderTypesAsync(const DescribeWorkOrderTypesRequest& request, const DescribeWorkOrderTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWorkOrderTypes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ChcClient::DescribeWorkOrderTypesOutcomeCallable ChcClient::DescribeWorkOrderTypesCallable(const DescribeWorkOrderTypesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWorkOrderTypesOutcome()>>(
        [this, request]()
        {
            return this->DescribeWorkOrderTypes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ChcClient::ExportCustomerWorkOrderDetailOutcome ChcClient::ExportCustomerWorkOrderDetail(const ExportCustomerWorkOrderDetailRequest &request)
{
    auto outcome = MakeRequest(request, "ExportCustomerWorkOrderDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportCustomerWorkOrderDetailResponse rsp = ExportCustomerWorkOrderDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportCustomerWorkOrderDetailOutcome(rsp);
        else
            return ExportCustomerWorkOrderDetailOutcome(o.GetError());
    }
    else
    {
        return ExportCustomerWorkOrderDetailOutcome(outcome.GetError());
    }
}

void ChcClient::ExportCustomerWorkOrderDetailAsync(const ExportCustomerWorkOrderDetailRequest& request, const ExportCustomerWorkOrderDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportCustomerWorkOrderDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ChcClient::ExportCustomerWorkOrderDetailOutcomeCallable ChcClient::ExportCustomerWorkOrderDetailCallable(const ExportCustomerWorkOrderDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportCustomerWorkOrderDetailOutcome()>>(
        [this, request]()
        {
            return this->ExportCustomerWorkOrderDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ChcClient::ModifyWorkOrderTypeCollectFlagOutcome ChcClient::ModifyWorkOrderTypeCollectFlag(const ModifyWorkOrderTypeCollectFlagRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyWorkOrderTypeCollectFlag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyWorkOrderTypeCollectFlagResponse rsp = ModifyWorkOrderTypeCollectFlagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyWorkOrderTypeCollectFlagOutcome(rsp);
        else
            return ModifyWorkOrderTypeCollectFlagOutcome(o.GetError());
    }
    else
    {
        return ModifyWorkOrderTypeCollectFlagOutcome(outcome.GetError());
    }
}

void ChcClient::ModifyWorkOrderTypeCollectFlagAsync(const ModifyWorkOrderTypeCollectFlagRequest& request, const ModifyWorkOrderTypeCollectFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyWorkOrderTypeCollectFlag(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ChcClient::ModifyWorkOrderTypeCollectFlagOutcomeCallable ChcClient::ModifyWorkOrderTypeCollectFlagCallable(const ModifyWorkOrderTypeCollectFlagRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyWorkOrderTypeCollectFlagOutcome()>>(
        [this, request]()
        {
            return this->ModifyWorkOrderTypeCollectFlag(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


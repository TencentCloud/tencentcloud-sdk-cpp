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

#include <tencentcloud/ms/v20180408/MsClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Ms::V20180408;
using namespace TencentCloud::Ms::V20180408::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-04-08";
    const string ENDPOINT = "ms.tencentcloudapi.com";
}

MsClient::MsClient(const Credential &credential, const string &region) :
    MsClient(credential, region, ClientProfile())
{
}

MsClient::MsClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


MsClient::CancelEncryptTaskOutcome MsClient::CancelEncryptTask(const CancelEncryptTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CancelEncryptTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CancelEncryptTaskResponse rsp = CancelEncryptTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CancelEncryptTaskOutcome(rsp);
        else
            return CancelEncryptTaskOutcome(o.GetError());
    }
    else
    {
        return CancelEncryptTaskOutcome(outcome.GetError());
    }
}

void MsClient::CancelEncryptTaskAsync(const CancelEncryptTaskRequest& request, const CancelEncryptTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CancelEncryptTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MsClient::CancelEncryptTaskOutcomeCallable MsClient::CancelEncryptTaskCallable(const CancelEncryptTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CancelEncryptTaskOutcome()>>(
        [this, request]()
        {
            return this->CancelEncryptTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MsClient::CreateBindInstanceOutcome MsClient::CreateBindInstance(const CreateBindInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBindInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBindInstanceResponse rsp = CreateBindInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBindInstanceOutcome(rsp);
        else
            return CreateBindInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateBindInstanceOutcome(outcome.GetError());
    }
}

void MsClient::CreateBindInstanceAsync(const CreateBindInstanceRequest& request, const CreateBindInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateBindInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MsClient::CreateBindInstanceOutcomeCallable MsClient::CreateBindInstanceCallable(const CreateBindInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateBindInstanceOutcome()>>(
        [this, request]()
        {
            return this->CreateBindInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MsClient::CreateCosSecKeyInstanceOutcome MsClient::CreateCosSecKeyInstance(const CreateCosSecKeyInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCosSecKeyInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCosSecKeyInstanceResponse rsp = CreateCosSecKeyInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCosSecKeyInstanceOutcome(rsp);
        else
            return CreateCosSecKeyInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateCosSecKeyInstanceOutcome(outcome.GetError());
    }
}

void MsClient::CreateCosSecKeyInstanceAsync(const CreateCosSecKeyInstanceRequest& request, const CreateCosSecKeyInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCosSecKeyInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MsClient::CreateCosSecKeyInstanceOutcomeCallable MsClient::CreateCosSecKeyInstanceCallable(const CreateCosSecKeyInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCosSecKeyInstanceOutcome()>>(
        [this, request]()
        {
            return this->CreateCosSecKeyInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MsClient::CreateEncryptInstanceOutcome MsClient::CreateEncryptInstance(const CreateEncryptInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateEncryptInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateEncryptInstanceResponse rsp = CreateEncryptInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateEncryptInstanceOutcome(rsp);
        else
            return CreateEncryptInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateEncryptInstanceOutcome(outcome.GetError());
    }
}

void MsClient::CreateEncryptInstanceAsync(const CreateEncryptInstanceRequest& request, const CreateEncryptInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateEncryptInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MsClient::CreateEncryptInstanceOutcomeCallable MsClient::CreateEncryptInstanceCallable(const CreateEncryptInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateEncryptInstanceOutcome()>>(
        [this, request]()
        {
            return this->CreateEncryptInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MsClient::CreateOrderInstanceOutcome MsClient::CreateOrderInstance(const CreateOrderInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateOrderInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateOrderInstanceResponse rsp = CreateOrderInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateOrderInstanceOutcome(rsp);
        else
            return CreateOrderInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateOrderInstanceOutcome(outcome.GetError());
    }
}

void MsClient::CreateOrderInstanceAsync(const CreateOrderInstanceRequest& request, const CreateOrderInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateOrderInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MsClient::CreateOrderInstanceOutcomeCallable MsClient::CreateOrderInstanceCallable(const CreateOrderInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateOrderInstanceOutcome()>>(
        [this, request]()
        {
            return this->CreateOrderInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MsClient::CreateResourceInstancesOutcome MsClient::CreateResourceInstances(const CreateResourceInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateResourceInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateResourceInstancesResponse rsp = CreateResourceInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateResourceInstancesOutcome(rsp);
        else
            return CreateResourceInstancesOutcome(o.GetError());
    }
    else
    {
        return CreateResourceInstancesOutcome(outcome.GetError());
    }
}

void MsClient::CreateResourceInstancesAsync(const CreateResourceInstancesRequest& request, const CreateResourceInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateResourceInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MsClient::CreateResourceInstancesOutcomeCallable MsClient::CreateResourceInstancesCallable(const CreateResourceInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateResourceInstancesOutcome()>>(
        [this, request]()
        {
            return this->CreateResourceInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MsClient::CreateShieldInstanceOutcome MsClient::CreateShieldInstance(const CreateShieldInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateShieldInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateShieldInstanceResponse rsp = CreateShieldInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateShieldInstanceOutcome(rsp);
        else
            return CreateShieldInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateShieldInstanceOutcome(outcome.GetError());
    }
}

void MsClient::CreateShieldInstanceAsync(const CreateShieldInstanceRequest& request, const CreateShieldInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateShieldInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MsClient::CreateShieldInstanceOutcomeCallable MsClient::CreateShieldInstanceCallable(const CreateShieldInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateShieldInstanceOutcome()>>(
        [this, request]()
        {
            return this->CreateShieldInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MsClient::CreateShieldPlanInstanceOutcome MsClient::CreateShieldPlanInstance(const CreateShieldPlanInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateShieldPlanInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateShieldPlanInstanceResponse rsp = CreateShieldPlanInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateShieldPlanInstanceOutcome(rsp);
        else
            return CreateShieldPlanInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateShieldPlanInstanceOutcome(outcome.GetError());
    }
}

void MsClient::CreateShieldPlanInstanceAsync(const CreateShieldPlanInstanceRequest& request, const CreateShieldPlanInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateShieldPlanInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MsClient::CreateShieldPlanInstanceOutcomeCallable MsClient::CreateShieldPlanInstanceCallable(const CreateShieldPlanInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateShieldPlanInstanceOutcome()>>(
        [this, request]()
        {
            return this->CreateShieldPlanInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MsClient::DeleteShieldInstancesOutcome MsClient::DeleteShieldInstances(const DeleteShieldInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteShieldInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteShieldInstancesResponse rsp = DeleteShieldInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteShieldInstancesOutcome(rsp);
        else
            return DeleteShieldInstancesOutcome(o.GetError());
    }
    else
    {
        return DeleteShieldInstancesOutcome(outcome.GetError());
    }
}

void MsClient::DeleteShieldInstancesAsync(const DeleteShieldInstancesRequest& request, const DeleteShieldInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteShieldInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MsClient::DeleteShieldInstancesOutcomeCallable MsClient::DeleteShieldInstancesCallable(const DeleteShieldInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteShieldInstancesOutcome()>>(
        [this, request]()
        {
            return this->DeleteShieldInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MsClient::DescribeApkDetectionResultOutcome MsClient::DescribeApkDetectionResult(const DescribeApkDetectionResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApkDetectionResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApkDetectionResultResponse rsp = DescribeApkDetectionResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApkDetectionResultOutcome(rsp);
        else
            return DescribeApkDetectionResultOutcome(o.GetError());
    }
    else
    {
        return DescribeApkDetectionResultOutcome(outcome.GetError());
    }
}

void MsClient::DescribeApkDetectionResultAsync(const DescribeApkDetectionResultRequest& request, const DescribeApkDetectionResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeApkDetectionResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MsClient::DescribeApkDetectionResultOutcomeCallable MsClient::DescribeApkDetectionResultCallable(const DescribeApkDetectionResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeApkDetectionResultOutcome()>>(
        [this, request]()
        {
            return this->DescribeApkDetectionResult(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MsClient::DescribeEncryptInstancesOutcome MsClient::DescribeEncryptInstances(const DescribeEncryptInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEncryptInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEncryptInstancesResponse rsp = DescribeEncryptInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEncryptInstancesOutcome(rsp);
        else
            return DescribeEncryptInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeEncryptInstancesOutcome(outcome.GetError());
    }
}

void MsClient::DescribeEncryptInstancesAsync(const DescribeEncryptInstancesRequest& request, const DescribeEncryptInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEncryptInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MsClient::DescribeEncryptInstancesOutcomeCallable MsClient::DescribeEncryptInstancesCallable(const DescribeEncryptInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEncryptInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeEncryptInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MsClient::DescribeEncryptPlanOutcome MsClient::DescribeEncryptPlan(const DescribeEncryptPlanRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEncryptPlan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEncryptPlanResponse rsp = DescribeEncryptPlanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEncryptPlanOutcome(rsp);
        else
            return DescribeEncryptPlanOutcome(o.GetError());
    }
    else
    {
        return DescribeEncryptPlanOutcome(outcome.GetError());
    }
}

void MsClient::DescribeEncryptPlanAsync(const DescribeEncryptPlanRequest& request, const DescribeEncryptPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEncryptPlan(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MsClient::DescribeEncryptPlanOutcomeCallable MsClient::DescribeEncryptPlanCallable(const DescribeEncryptPlanRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEncryptPlanOutcome()>>(
        [this, request]()
        {
            return this->DescribeEncryptPlan(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MsClient::DescribeOrderInstancesOutcome MsClient::DescribeOrderInstances(const DescribeOrderInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOrderInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOrderInstancesResponse rsp = DescribeOrderInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOrderInstancesOutcome(rsp);
        else
            return DescribeOrderInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeOrderInstancesOutcome(outcome.GetError());
    }
}

void MsClient::DescribeOrderInstancesAsync(const DescribeOrderInstancesRequest& request, const DescribeOrderInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOrderInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MsClient::DescribeOrderInstancesOutcomeCallable MsClient::DescribeOrderInstancesCallable(const DescribeOrderInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOrderInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeOrderInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MsClient::DescribeResourceInstancesOutcome MsClient::DescribeResourceInstances(const DescribeResourceInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResourceInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResourceInstancesResponse rsp = DescribeResourceInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResourceInstancesOutcome(rsp);
        else
            return DescribeResourceInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeResourceInstancesOutcome(outcome.GetError());
    }
}

void MsClient::DescribeResourceInstancesAsync(const DescribeResourceInstancesRequest& request, const DescribeResourceInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeResourceInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MsClient::DescribeResourceInstancesOutcomeCallable MsClient::DescribeResourceInstancesCallable(const DescribeResourceInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeResourceInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeResourceInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MsClient::DescribeShieldInstancesOutcome MsClient::DescribeShieldInstances(const DescribeShieldInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeShieldInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeShieldInstancesResponse rsp = DescribeShieldInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeShieldInstancesOutcome(rsp);
        else
            return DescribeShieldInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeShieldInstancesOutcome(outcome.GetError());
    }
}

void MsClient::DescribeShieldInstancesAsync(const DescribeShieldInstancesRequest& request, const DescribeShieldInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeShieldInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MsClient::DescribeShieldInstancesOutcomeCallable MsClient::DescribeShieldInstancesCallable(const DescribeShieldInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeShieldInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeShieldInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MsClient::DescribeShieldPlanInstanceOutcome MsClient::DescribeShieldPlanInstance(const DescribeShieldPlanInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeShieldPlanInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeShieldPlanInstanceResponse rsp = DescribeShieldPlanInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeShieldPlanInstanceOutcome(rsp);
        else
            return DescribeShieldPlanInstanceOutcome(o.GetError());
    }
    else
    {
        return DescribeShieldPlanInstanceOutcome(outcome.GetError());
    }
}

void MsClient::DescribeShieldPlanInstanceAsync(const DescribeShieldPlanInstanceRequest& request, const DescribeShieldPlanInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeShieldPlanInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MsClient::DescribeShieldPlanInstanceOutcomeCallable MsClient::DescribeShieldPlanInstanceCallable(const DescribeShieldPlanInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeShieldPlanInstanceOutcome()>>(
        [this, request]()
        {
            return this->DescribeShieldPlanInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MsClient::DescribeShieldResultOutcome MsClient::DescribeShieldResult(const DescribeShieldResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeShieldResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeShieldResultResponse rsp = DescribeShieldResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeShieldResultOutcome(rsp);
        else
            return DescribeShieldResultOutcome(o.GetError());
    }
    else
    {
        return DescribeShieldResultOutcome(outcome.GetError());
    }
}

void MsClient::DescribeShieldResultAsync(const DescribeShieldResultRequest& request, const DescribeShieldResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeShieldResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MsClient::DescribeShieldResultOutcomeCallable MsClient::DescribeShieldResultCallable(const DescribeShieldResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeShieldResultOutcome()>>(
        [this, request]()
        {
            return this->DescribeShieldResult(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MsClient::DescribeUrlDetectionResultOutcome MsClient::DescribeUrlDetectionResult(const DescribeUrlDetectionResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUrlDetectionResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUrlDetectionResultResponse rsp = DescribeUrlDetectionResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUrlDetectionResultOutcome(rsp);
        else
            return DescribeUrlDetectionResultOutcome(o.GetError());
    }
    else
    {
        return DescribeUrlDetectionResultOutcome(outcome.GetError());
    }
}

void MsClient::DescribeUrlDetectionResultAsync(const DescribeUrlDetectionResultRequest& request, const DescribeUrlDetectionResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUrlDetectionResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MsClient::DescribeUrlDetectionResultOutcomeCallable MsClient::DescribeUrlDetectionResultCallable(const DescribeUrlDetectionResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUrlDetectionResultOutcome()>>(
        [this, request]()
        {
            return this->DescribeUrlDetectionResult(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MsClient::DescribeUserBaseInfoInstanceOutcome MsClient::DescribeUserBaseInfoInstance(const DescribeUserBaseInfoInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserBaseInfoInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserBaseInfoInstanceResponse rsp = DescribeUserBaseInfoInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserBaseInfoInstanceOutcome(rsp);
        else
            return DescribeUserBaseInfoInstanceOutcome(o.GetError());
    }
    else
    {
        return DescribeUserBaseInfoInstanceOutcome(outcome.GetError());
    }
}

void MsClient::DescribeUserBaseInfoInstanceAsync(const DescribeUserBaseInfoInstanceRequest& request, const DescribeUserBaseInfoInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUserBaseInfoInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MsClient::DescribeUserBaseInfoInstanceOutcomeCallable MsClient::DescribeUserBaseInfoInstanceCallable(const DescribeUserBaseInfoInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUserBaseInfoInstanceOutcome()>>(
        [this, request]()
        {
            return this->DescribeUserBaseInfoInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MsClient::DestroyResourceInstancesOutcome MsClient::DestroyResourceInstances(const DestroyResourceInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DestroyResourceInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DestroyResourceInstancesResponse rsp = DestroyResourceInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DestroyResourceInstancesOutcome(rsp);
        else
            return DestroyResourceInstancesOutcome(o.GetError());
    }
    else
    {
        return DestroyResourceInstancesOutcome(outcome.GetError());
    }
}

void MsClient::DestroyResourceInstancesAsync(const DestroyResourceInstancesRequest& request, const DestroyResourceInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DestroyResourceInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MsClient::DestroyResourceInstancesOutcomeCallable MsClient::DestroyResourceInstancesCallable(const DestroyResourceInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DestroyResourceInstancesOutcome()>>(
        [this, request]()
        {
            return this->DestroyResourceInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MsClient::RequestLocalTaskOutcome MsClient::RequestLocalTask(const RequestLocalTaskRequest &request)
{
    auto outcome = MakeRequest(request, "RequestLocalTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RequestLocalTaskResponse rsp = RequestLocalTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RequestLocalTaskOutcome(rsp);
        else
            return RequestLocalTaskOutcome(o.GetError());
    }
    else
    {
        return RequestLocalTaskOutcome(outcome.GetError());
    }
}

void MsClient::RequestLocalTaskAsync(const RequestLocalTaskRequest& request, const RequestLocalTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RequestLocalTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MsClient::RequestLocalTaskOutcomeCallable MsClient::RequestLocalTaskCallable(const RequestLocalTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RequestLocalTaskOutcome()>>(
        [this, request]()
        {
            return this->RequestLocalTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MsClient::UpdateClientStateOutcome MsClient::UpdateClientState(const UpdateClientStateRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateClientState");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateClientStateResponse rsp = UpdateClientStateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateClientStateOutcome(rsp);
        else
            return UpdateClientStateOutcome(o.GetError());
    }
    else
    {
        return UpdateClientStateOutcome(outcome.GetError());
    }
}

void MsClient::UpdateClientStateAsync(const UpdateClientStateRequest& request, const UpdateClientStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateClientState(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MsClient::UpdateClientStateOutcomeCallable MsClient::UpdateClientStateCallable(const UpdateClientStateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateClientStateOutcome()>>(
        [this, request]()
        {
            return this->UpdateClientState(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MsClient::UpdateLocalTaskResultOutcome MsClient::UpdateLocalTaskResult(const UpdateLocalTaskResultRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateLocalTaskResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateLocalTaskResultResponse rsp = UpdateLocalTaskResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateLocalTaskResultOutcome(rsp);
        else
            return UpdateLocalTaskResultOutcome(o.GetError());
    }
    else
    {
        return UpdateLocalTaskResultOutcome(outcome.GetError());
    }
}

void MsClient::UpdateLocalTaskResultAsync(const UpdateLocalTaskResultRequest& request, const UpdateLocalTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateLocalTaskResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MsClient::UpdateLocalTaskResultOutcomeCallable MsClient::UpdateLocalTaskResultCallable(const UpdateLocalTaskResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateLocalTaskResultOutcome()>>(
        [this, request]()
        {
            return this->UpdateLocalTaskResult(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


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

MsClient::CreateScanInstancesOutcome MsClient::CreateScanInstances(const CreateScanInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateScanInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateScanInstancesResponse rsp = CreateScanInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateScanInstancesOutcome(rsp);
        else
            return CreateScanInstancesOutcome(o.GetError());
    }
    else
    {
        return CreateScanInstancesOutcome(outcome.GetError());
    }
}

void MsClient::CreateScanInstancesAsync(const CreateScanInstancesRequest& request, const CreateScanInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateScanInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MsClient::CreateScanInstancesOutcomeCallable MsClient::CreateScanInstancesCallable(const CreateScanInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateScanInstancesOutcome()>>(
        [this, request]()
        {
            return this->CreateScanInstances(request);
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

MsClient::DeleteScanInstancesOutcome MsClient::DeleteScanInstances(const DeleteScanInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteScanInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteScanInstancesResponse rsp = DeleteScanInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteScanInstancesOutcome(rsp);
        else
            return DeleteScanInstancesOutcome(o.GetError());
    }
    else
    {
        return DeleteScanInstancesOutcome(outcome.GetError());
    }
}

void MsClient::DeleteScanInstancesAsync(const DeleteScanInstancesRequest& request, const DeleteScanInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteScanInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MsClient::DeleteScanInstancesOutcomeCallable MsClient::DeleteScanInstancesCallable(const DeleteScanInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteScanInstancesOutcome()>>(
        [this, request]()
        {
            return this->DeleteScanInstances(request);
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

MsClient::DescribeScanInstancesOutcome MsClient::DescribeScanInstances(const DescribeScanInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScanInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScanInstancesResponse rsp = DescribeScanInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScanInstancesOutcome(rsp);
        else
            return DescribeScanInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeScanInstancesOutcome(outcome.GetError());
    }
}

void MsClient::DescribeScanInstancesAsync(const DescribeScanInstancesRequest& request, const DescribeScanInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeScanInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MsClient::DescribeScanInstancesOutcomeCallable MsClient::DescribeScanInstancesCallable(const DescribeScanInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeScanInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeScanInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MsClient::DescribeScanResultsOutcome MsClient::DescribeScanResults(const DescribeScanResultsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScanResults");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScanResultsResponse rsp = DescribeScanResultsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScanResultsOutcome(rsp);
        else
            return DescribeScanResultsOutcome(o.GetError());
    }
    else
    {
        return DescribeScanResultsOutcome(outcome.GetError());
    }
}

void MsClient::DescribeScanResultsAsync(const DescribeScanResultsRequest& request, const DescribeScanResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeScanResults(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MsClient::DescribeScanResultsOutcomeCallable MsClient::DescribeScanResultsCallable(const DescribeScanResultsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeScanResultsOutcome()>>(
        [this, request]()
        {
            return this->DescribeScanResults(request);
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


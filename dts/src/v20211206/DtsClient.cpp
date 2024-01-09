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

#include <tencentcloud/dts/v20211206/DtsClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Dts::V20211206;
using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-12-06";
    const string ENDPOINT = "dts.tencentcloudapi.com";
}

DtsClient::DtsClient(const Credential &credential, const string &region) :
    DtsClient(credential, region, ClientProfile())
{
}

DtsClient::DtsClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


DtsClient::CompleteMigrateJobOutcome DtsClient::CompleteMigrateJob(const CompleteMigrateJobRequest &request)
{
    auto outcome = MakeRequest(request, "CompleteMigrateJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CompleteMigrateJobResponse rsp = CompleteMigrateJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CompleteMigrateJobOutcome(rsp);
        else
            return CompleteMigrateJobOutcome(o.GetError());
    }
    else
    {
        return CompleteMigrateJobOutcome(outcome.GetError());
    }
}

void DtsClient::CompleteMigrateJobAsync(const CompleteMigrateJobRequest& request, const CompleteMigrateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CompleteMigrateJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::CompleteMigrateJobOutcomeCallable DtsClient::CompleteMigrateJobCallable(const CompleteMigrateJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CompleteMigrateJobOutcome()>>(
        [this, request]()
        {
            return this->CompleteMigrateJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::ConfigureSubscribeJobOutcome DtsClient::ConfigureSubscribeJob(const ConfigureSubscribeJobRequest &request)
{
    auto outcome = MakeRequest(request, "ConfigureSubscribeJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ConfigureSubscribeJobResponse rsp = ConfigureSubscribeJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ConfigureSubscribeJobOutcome(rsp);
        else
            return ConfigureSubscribeJobOutcome(o.GetError());
    }
    else
    {
        return ConfigureSubscribeJobOutcome(outcome.GetError());
    }
}

void DtsClient::ConfigureSubscribeJobAsync(const ConfigureSubscribeJobRequest& request, const ConfigureSubscribeJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ConfigureSubscribeJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::ConfigureSubscribeJobOutcomeCallable DtsClient::ConfigureSubscribeJobCallable(const ConfigureSubscribeJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ConfigureSubscribeJobOutcome()>>(
        [this, request]()
        {
            return this->ConfigureSubscribeJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::ConfigureSyncJobOutcome DtsClient::ConfigureSyncJob(const ConfigureSyncJobRequest &request)
{
    auto outcome = MakeRequest(request, "ConfigureSyncJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ConfigureSyncJobResponse rsp = ConfigureSyncJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ConfigureSyncJobOutcome(rsp);
        else
            return ConfigureSyncJobOutcome(o.GetError());
    }
    else
    {
        return ConfigureSyncJobOutcome(outcome.GetError());
    }
}

void DtsClient::ConfigureSyncJobAsync(const ConfigureSyncJobRequest& request, const ConfigureSyncJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ConfigureSyncJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::ConfigureSyncJobOutcomeCallable DtsClient::ConfigureSyncJobCallable(const ConfigureSyncJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ConfigureSyncJobOutcome()>>(
        [this, request]()
        {
            return this->ConfigureSyncJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::ContinueMigrateJobOutcome DtsClient::ContinueMigrateJob(const ContinueMigrateJobRequest &request)
{
    auto outcome = MakeRequest(request, "ContinueMigrateJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ContinueMigrateJobResponse rsp = ContinueMigrateJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ContinueMigrateJobOutcome(rsp);
        else
            return ContinueMigrateJobOutcome(o.GetError());
    }
    else
    {
        return ContinueMigrateJobOutcome(outcome.GetError());
    }
}

void DtsClient::ContinueMigrateJobAsync(const ContinueMigrateJobRequest& request, const ContinueMigrateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ContinueMigrateJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::ContinueMigrateJobOutcomeCallable DtsClient::ContinueMigrateJobCallable(const ContinueMigrateJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ContinueMigrateJobOutcome()>>(
        [this, request]()
        {
            return this->ContinueMigrateJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::ContinueSyncJobOutcome DtsClient::ContinueSyncJob(const ContinueSyncJobRequest &request)
{
    auto outcome = MakeRequest(request, "ContinueSyncJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ContinueSyncJobResponse rsp = ContinueSyncJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ContinueSyncJobOutcome(rsp);
        else
            return ContinueSyncJobOutcome(o.GetError());
    }
    else
    {
        return ContinueSyncJobOutcome(outcome.GetError());
    }
}

void DtsClient::ContinueSyncJobAsync(const ContinueSyncJobRequest& request, const ContinueSyncJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ContinueSyncJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::ContinueSyncJobOutcomeCallable DtsClient::ContinueSyncJobCallable(const ContinueSyncJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ContinueSyncJobOutcome()>>(
        [this, request]()
        {
            return this->ContinueSyncJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::CreateCheckSyncJobOutcome DtsClient::CreateCheckSyncJob(const CreateCheckSyncJobRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCheckSyncJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCheckSyncJobResponse rsp = CreateCheckSyncJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCheckSyncJobOutcome(rsp);
        else
            return CreateCheckSyncJobOutcome(o.GetError());
    }
    else
    {
        return CreateCheckSyncJobOutcome(outcome.GetError());
    }
}

void DtsClient::CreateCheckSyncJobAsync(const CreateCheckSyncJobRequest& request, const CreateCheckSyncJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCheckSyncJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::CreateCheckSyncJobOutcomeCallable DtsClient::CreateCheckSyncJobCallable(const CreateCheckSyncJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCheckSyncJobOutcome()>>(
        [this, request]()
        {
            return this->CreateCheckSyncJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::CreateCompareTaskOutcome DtsClient::CreateCompareTask(const CreateCompareTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCompareTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCompareTaskResponse rsp = CreateCompareTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCompareTaskOutcome(rsp);
        else
            return CreateCompareTaskOutcome(o.GetError());
    }
    else
    {
        return CreateCompareTaskOutcome(outcome.GetError());
    }
}

void DtsClient::CreateCompareTaskAsync(const CreateCompareTaskRequest& request, const CreateCompareTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCompareTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::CreateCompareTaskOutcomeCallable DtsClient::CreateCompareTaskCallable(const CreateCompareTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCompareTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateCompareTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::CreateConsumerGroupOutcome DtsClient::CreateConsumerGroup(const CreateConsumerGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateConsumerGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateConsumerGroupResponse rsp = CreateConsumerGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateConsumerGroupOutcome(rsp);
        else
            return CreateConsumerGroupOutcome(o.GetError());
    }
    else
    {
        return CreateConsumerGroupOutcome(outcome.GetError());
    }
}

void DtsClient::CreateConsumerGroupAsync(const CreateConsumerGroupRequest& request, const CreateConsumerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateConsumerGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::CreateConsumerGroupOutcomeCallable DtsClient::CreateConsumerGroupCallable(const CreateConsumerGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateConsumerGroupOutcome()>>(
        [this, request]()
        {
            return this->CreateConsumerGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::CreateMigrateCheckJobOutcome DtsClient::CreateMigrateCheckJob(const CreateMigrateCheckJobRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMigrateCheckJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMigrateCheckJobResponse rsp = CreateMigrateCheckJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMigrateCheckJobOutcome(rsp);
        else
            return CreateMigrateCheckJobOutcome(o.GetError());
    }
    else
    {
        return CreateMigrateCheckJobOutcome(outcome.GetError());
    }
}

void DtsClient::CreateMigrateCheckJobAsync(const CreateMigrateCheckJobRequest& request, const CreateMigrateCheckJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateMigrateCheckJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::CreateMigrateCheckJobOutcomeCallable DtsClient::CreateMigrateCheckJobCallable(const CreateMigrateCheckJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateMigrateCheckJobOutcome()>>(
        [this, request]()
        {
            return this->CreateMigrateCheckJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::CreateMigrationServiceOutcome DtsClient::CreateMigrationService(const CreateMigrationServiceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMigrationService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMigrationServiceResponse rsp = CreateMigrationServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMigrationServiceOutcome(rsp);
        else
            return CreateMigrationServiceOutcome(o.GetError());
    }
    else
    {
        return CreateMigrationServiceOutcome(outcome.GetError());
    }
}

void DtsClient::CreateMigrationServiceAsync(const CreateMigrationServiceRequest& request, const CreateMigrationServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateMigrationService(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::CreateMigrationServiceOutcomeCallable DtsClient::CreateMigrationServiceCallable(const CreateMigrationServiceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateMigrationServiceOutcome()>>(
        [this, request]()
        {
            return this->CreateMigrationService(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::CreateModifyCheckSyncJobOutcome DtsClient::CreateModifyCheckSyncJob(const CreateModifyCheckSyncJobRequest &request)
{
    auto outcome = MakeRequest(request, "CreateModifyCheckSyncJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateModifyCheckSyncJobResponse rsp = CreateModifyCheckSyncJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateModifyCheckSyncJobOutcome(rsp);
        else
            return CreateModifyCheckSyncJobOutcome(o.GetError());
    }
    else
    {
        return CreateModifyCheckSyncJobOutcome(outcome.GetError());
    }
}

void DtsClient::CreateModifyCheckSyncJobAsync(const CreateModifyCheckSyncJobRequest& request, const CreateModifyCheckSyncJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateModifyCheckSyncJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::CreateModifyCheckSyncJobOutcomeCallable DtsClient::CreateModifyCheckSyncJobCallable(const CreateModifyCheckSyncJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateModifyCheckSyncJobOutcome()>>(
        [this, request]()
        {
            return this->CreateModifyCheckSyncJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::CreateSubscribeOutcome DtsClient::CreateSubscribe(const CreateSubscribeRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSubscribe");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSubscribeResponse rsp = CreateSubscribeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSubscribeOutcome(rsp);
        else
            return CreateSubscribeOutcome(o.GetError());
    }
    else
    {
        return CreateSubscribeOutcome(outcome.GetError());
    }
}

void DtsClient::CreateSubscribeAsync(const CreateSubscribeRequest& request, const CreateSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSubscribe(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::CreateSubscribeOutcomeCallable DtsClient::CreateSubscribeCallable(const CreateSubscribeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSubscribeOutcome()>>(
        [this, request]()
        {
            return this->CreateSubscribe(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::CreateSubscribeCheckJobOutcome DtsClient::CreateSubscribeCheckJob(const CreateSubscribeCheckJobRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSubscribeCheckJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSubscribeCheckJobResponse rsp = CreateSubscribeCheckJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSubscribeCheckJobOutcome(rsp);
        else
            return CreateSubscribeCheckJobOutcome(o.GetError());
    }
    else
    {
        return CreateSubscribeCheckJobOutcome(outcome.GetError());
    }
}

void DtsClient::CreateSubscribeCheckJobAsync(const CreateSubscribeCheckJobRequest& request, const CreateSubscribeCheckJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSubscribeCheckJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::CreateSubscribeCheckJobOutcomeCallable DtsClient::CreateSubscribeCheckJobCallable(const CreateSubscribeCheckJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSubscribeCheckJobOutcome()>>(
        [this, request]()
        {
            return this->CreateSubscribeCheckJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::CreateSyncJobOutcome DtsClient::CreateSyncJob(const CreateSyncJobRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSyncJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSyncJobResponse rsp = CreateSyncJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSyncJobOutcome(rsp);
        else
            return CreateSyncJobOutcome(o.GetError());
    }
    else
    {
        return CreateSyncJobOutcome(outcome.GetError());
    }
}

void DtsClient::CreateSyncJobAsync(const CreateSyncJobRequest& request, const CreateSyncJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSyncJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::CreateSyncJobOutcomeCallable DtsClient::CreateSyncJobCallable(const CreateSyncJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSyncJobOutcome()>>(
        [this, request]()
        {
            return this->CreateSyncJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::DeleteCompareTaskOutcome DtsClient::DeleteCompareTask(const DeleteCompareTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCompareTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCompareTaskResponse rsp = DeleteCompareTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCompareTaskOutcome(rsp);
        else
            return DeleteCompareTaskOutcome(o.GetError());
    }
    else
    {
        return DeleteCompareTaskOutcome(outcome.GetError());
    }
}

void DtsClient::DeleteCompareTaskAsync(const DeleteCompareTaskRequest& request, const DeleteCompareTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCompareTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::DeleteCompareTaskOutcomeCallable DtsClient::DeleteCompareTaskCallable(const DeleteCompareTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCompareTaskOutcome()>>(
        [this, request]()
        {
            return this->DeleteCompareTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::DeleteConsumerGroupOutcome DtsClient::DeleteConsumerGroup(const DeleteConsumerGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteConsumerGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteConsumerGroupResponse rsp = DeleteConsumerGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteConsumerGroupOutcome(rsp);
        else
            return DeleteConsumerGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteConsumerGroupOutcome(outcome.GetError());
    }
}

void DtsClient::DeleteConsumerGroupAsync(const DeleteConsumerGroupRequest& request, const DeleteConsumerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteConsumerGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::DeleteConsumerGroupOutcomeCallable DtsClient::DeleteConsumerGroupCallable(const DeleteConsumerGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteConsumerGroupOutcome()>>(
        [this, request]()
        {
            return this->DeleteConsumerGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::DescribeCheckSyncJobResultOutcome DtsClient::DescribeCheckSyncJobResult(const DescribeCheckSyncJobResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCheckSyncJobResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCheckSyncJobResultResponse rsp = DescribeCheckSyncJobResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCheckSyncJobResultOutcome(rsp);
        else
            return DescribeCheckSyncJobResultOutcome(o.GetError());
    }
    else
    {
        return DescribeCheckSyncJobResultOutcome(outcome.GetError());
    }
}

void DtsClient::DescribeCheckSyncJobResultAsync(const DescribeCheckSyncJobResultRequest& request, const DescribeCheckSyncJobResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCheckSyncJobResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::DescribeCheckSyncJobResultOutcomeCallable DtsClient::DescribeCheckSyncJobResultCallable(const DescribeCheckSyncJobResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCheckSyncJobResultOutcome()>>(
        [this, request]()
        {
            return this->DescribeCheckSyncJobResult(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::DescribeCompareReportOutcome DtsClient::DescribeCompareReport(const DescribeCompareReportRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCompareReport");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCompareReportResponse rsp = DescribeCompareReportResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCompareReportOutcome(rsp);
        else
            return DescribeCompareReportOutcome(o.GetError());
    }
    else
    {
        return DescribeCompareReportOutcome(outcome.GetError());
    }
}

void DtsClient::DescribeCompareReportAsync(const DescribeCompareReportRequest& request, const DescribeCompareReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCompareReport(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::DescribeCompareReportOutcomeCallable DtsClient::DescribeCompareReportCallable(const DescribeCompareReportRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCompareReportOutcome()>>(
        [this, request]()
        {
            return this->DescribeCompareReport(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::DescribeCompareTasksOutcome DtsClient::DescribeCompareTasks(const DescribeCompareTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCompareTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCompareTasksResponse rsp = DescribeCompareTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCompareTasksOutcome(rsp);
        else
            return DescribeCompareTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeCompareTasksOutcome(outcome.GetError());
    }
}

void DtsClient::DescribeCompareTasksAsync(const DescribeCompareTasksRequest& request, const DescribeCompareTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCompareTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::DescribeCompareTasksOutcomeCallable DtsClient::DescribeCompareTasksCallable(const DescribeCompareTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCompareTasksOutcome()>>(
        [this, request]()
        {
            return this->DescribeCompareTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::DescribeConsumerGroupsOutcome DtsClient::DescribeConsumerGroups(const DescribeConsumerGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConsumerGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConsumerGroupsResponse rsp = DescribeConsumerGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConsumerGroupsOutcome(rsp);
        else
            return DescribeConsumerGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeConsumerGroupsOutcome(outcome.GetError());
    }
}

void DtsClient::DescribeConsumerGroupsAsync(const DescribeConsumerGroupsRequest& request, const DescribeConsumerGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeConsumerGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::DescribeConsumerGroupsOutcomeCallable DtsClient::DescribeConsumerGroupsCallable(const DescribeConsumerGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeConsumerGroupsOutcome()>>(
        [this, request]()
        {
            return this->DescribeConsumerGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::DescribeMigrateDBInstancesOutcome DtsClient::DescribeMigrateDBInstances(const DescribeMigrateDBInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMigrateDBInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMigrateDBInstancesResponse rsp = DescribeMigrateDBInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMigrateDBInstancesOutcome(rsp);
        else
            return DescribeMigrateDBInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeMigrateDBInstancesOutcome(outcome.GetError());
    }
}

void DtsClient::DescribeMigrateDBInstancesAsync(const DescribeMigrateDBInstancesRequest& request, const DescribeMigrateDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMigrateDBInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::DescribeMigrateDBInstancesOutcomeCallable DtsClient::DescribeMigrateDBInstancesCallable(const DescribeMigrateDBInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMigrateDBInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeMigrateDBInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::DescribeMigrationCheckJobOutcome DtsClient::DescribeMigrationCheckJob(const DescribeMigrationCheckJobRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMigrationCheckJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMigrationCheckJobResponse rsp = DescribeMigrationCheckJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMigrationCheckJobOutcome(rsp);
        else
            return DescribeMigrationCheckJobOutcome(o.GetError());
    }
    else
    {
        return DescribeMigrationCheckJobOutcome(outcome.GetError());
    }
}

void DtsClient::DescribeMigrationCheckJobAsync(const DescribeMigrationCheckJobRequest& request, const DescribeMigrationCheckJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMigrationCheckJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::DescribeMigrationCheckJobOutcomeCallable DtsClient::DescribeMigrationCheckJobCallable(const DescribeMigrationCheckJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMigrationCheckJobOutcome()>>(
        [this, request]()
        {
            return this->DescribeMigrationCheckJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::DescribeMigrationDetailOutcome DtsClient::DescribeMigrationDetail(const DescribeMigrationDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMigrationDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMigrationDetailResponse rsp = DescribeMigrationDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMigrationDetailOutcome(rsp);
        else
            return DescribeMigrationDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeMigrationDetailOutcome(outcome.GetError());
    }
}

void DtsClient::DescribeMigrationDetailAsync(const DescribeMigrationDetailRequest& request, const DescribeMigrationDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMigrationDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::DescribeMigrationDetailOutcomeCallable DtsClient::DescribeMigrationDetailCallable(const DescribeMigrationDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMigrationDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeMigrationDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::DescribeMigrationJobsOutcome DtsClient::DescribeMigrationJobs(const DescribeMigrationJobsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMigrationJobs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMigrationJobsResponse rsp = DescribeMigrationJobsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMigrationJobsOutcome(rsp);
        else
            return DescribeMigrationJobsOutcome(o.GetError());
    }
    else
    {
        return DescribeMigrationJobsOutcome(outcome.GetError());
    }
}

void DtsClient::DescribeMigrationJobsAsync(const DescribeMigrationJobsRequest& request, const DescribeMigrationJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMigrationJobs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::DescribeMigrationJobsOutcomeCallable DtsClient::DescribeMigrationJobsCallable(const DescribeMigrationJobsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMigrationJobsOutcome()>>(
        [this, request]()
        {
            return this->DescribeMigrationJobs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::DescribeModifyCheckSyncJobResultOutcome DtsClient::DescribeModifyCheckSyncJobResult(const DescribeModifyCheckSyncJobResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeModifyCheckSyncJobResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeModifyCheckSyncJobResultResponse rsp = DescribeModifyCheckSyncJobResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeModifyCheckSyncJobResultOutcome(rsp);
        else
            return DescribeModifyCheckSyncJobResultOutcome(o.GetError());
    }
    else
    {
        return DescribeModifyCheckSyncJobResultOutcome(outcome.GetError());
    }
}

void DtsClient::DescribeModifyCheckSyncJobResultAsync(const DescribeModifyCheckSyncJobResultRequest& request, const DescribeModifyCheckSyncJobResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeModifyCheckSyncJobResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::DescribeModifyCheckSyncJobResultOutcomeCallable DtsClient::DescribeModifyCheckSyncJobResultCallable(const DescribeModifyCheckSyncJobResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeModifyCheckSyncJobResultOutcome()>>(
        [this, request]()
        {
            return this->DescribeModifyCheckSyncJobResult(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::DescribeOffsetByTimeOutcome DtsClient::DescribeOffsetByTime(const DescribeOffsetByTimeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOffsetByTime");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOffsetByTimeResponse rsp = DescribeOffsetByTimeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOffsetByTimeOutcome(rsp);
        else
            return DescribeOffsetByTimeOutcome(o.GetError());
    }
    else
    {
        return DescribeOffsetByTimeOutcome(outcome.GetError());
    }
}

void DtsClient::DescribeOffsetByTimeAsync(const DescribeOffsetByTimeRequest& request, const DescribeOffsetByTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOffsetByTime(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::DescribeOffsetByTimeOutcomeCallable DtsClient::DescribeOffsetByTimeCallable(const DescribeOffsetByTimeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOffsetByTimeOutcome()>>(
        [this, request]()
        {
            return this->DescribeOffsetByTime(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::DescribeSubscribeCheckJobOutcome DtsClient::DescribeSubscribeCheckJob(const DescribeSubscribeCheckJobRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSubscribeCheckJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSubscribeCheckJobResponse rsp = DescribeSubscribeCheckJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSubscribeCheckJobOutcome(rsp);
        else
            return DescribeSubscribeCheckJobOutcome(o.GetError());
    }
    else
    {
        return DescribeSubscribeCheckJobOutcome(outcome.GetError());
    }
}

void DtsClient::DescribeSubscribeCheckJobAsync(const DescribeSubscribeCheckJobRequest& request, const DescribeSubscribeCheckJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSubscribeCheckJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::DescribeSubscribeCheckJobOutcomeCallable DtsClient::DescribeSubscribeCheckJobCallable(const DescribeSubscribeCheckJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSubscribeCheckJobOutcome()>>(
        [this, request]()
        {
            return this->DescribeSubscribeCheckJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::DescribeSubscribeDetailOutcome DtsClient::DescribeSubscribeDetail(const DescribeSubscribeDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSubscribeDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSubscribeDetailResponse rsp = DescribeSubscribeDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSubscribeDetailOutcome(rsp);
        else
            return DescribeSubscribeDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeSubscribeDetailOutcome(outcome.GetError());
    }
}

void DtsClient::DescribeSubscribeDetailAsync(const DescribeSubscribeDetailRequest& request, const DescribeSubscribeDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSubscribeDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::DescribeSubscribeDetailOutcomeCallable DtsClient::DescribeSubscribeDetailCallable(const DescribeSubscribeDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSubscribeDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeSubscribeDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::DescribeSubscribeJobsOutcome DtsClient::DescribeSubscribeJobs(const DescribeSubscribeJobsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSubscribeJobs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSubscribeJobsResponse rsp = DescribeSubscribeJobsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSubscribeJobsOutcome(rsp);
        else
            return DescribeSubscribeJobsOutcome(o.GetError());
    }
    else
    {
        return DescribeSubscribeJobsOutcome(outcome.GetError());
    }
}

void DtsClient::DescribeSubscribeJobsAsync(const DescribeSubscribeJobsRequest& request, const DescribeSubscribeJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSubscribeJobs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::DescribeSubscribeJobsOutcomeCallable DtsClient::DescribeSubscribeJobsCallable(const DescribeSubscribeJobsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSubscribeJobsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSubscribeJobs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::DescribeSubscribeReturnableOutcome DtsClient::DescribeSubscribeReturnable(const DescribeSubscribeReturnableRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSubscribeReturnable");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSubscribeReturnableResponse rsp = DescribeSubscribeReturnableResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSubscribeReturnableOutcome(rsp);
        else
            return DescribeSubscribeReturnableOutcome(o.GetError());
    }
    else
    {
        return DescribeSubscribeReturnableOutcome(outcome.GetError());
    }
}

void DtsClient::DescribeSubscribeReturnableAsync(const DescribeSubscribeReturnableRequest& request, const DescribeSubscribeReturnableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSubscribeReturnable(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::DescribeSubscribeReturnableOutcomeCallable DtsClient::DescribeSubscribeReturnableCallable(const DescribeSubscribeReturnableRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSubscribeReturnableOutcome()>>(
        [this, request]()
        {
            return this->DescribeSubscribeReturnable(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::DescribeSyncJobsOutcome DtsClient::DescribeSyncJobs(const DescribeSyncJobsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSyncJobs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSyncJobsResponse rsp = DescribeSyncJobsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSyncJobsOutcome(rsp);
        else
            return DescribeSyncJobsOutcome(o.GetError());
    }
    else
    {
        return DescribeSyncJobsOutcome(outcome.GetError());
    }
}

void DtsClient::DescribeSyncJobsAsync(const DescribeSyncJobsRequest& request, const DescribeSyncJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSyncJobs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::DescribeSyncJobsOutcomeCallable DtsClient::DescribeSyncJobsCallable(const DescribeSyncJobsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSyncJobsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSyncJobs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::DestroyIsolatedSubscribeOutcome DtsClient::DestroyIsolatedSubscribe(const DestroyIsolatedSubscribeRequest &request)
{
    auto outcome = MakeRequest(request, "DestroyIsolatedSubscribe");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DestroyIsolatedSubscribeResponse rsp = DestroyIsolatedSubscribeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DestroyIsolatedSubscribeOutcome(rsp);
        else
            return DestroyIsolatedSubscribeOutcome(o.GetError());
    }
    else
    {
        return DestroyIsolatedSubscribeOutcome(outcome.GetError());
    }
}

void DtsClient::DestroyIsolatedSubscribeAsync(const DestroyIsolatedSubscribeRequest& request, const DestroyIsolatedSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DestroyIsolatedSubscribe(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::DestroyIsolatedSubscribeOutcomeCallable DtsClient::DestroyIsolatedSubscribeCallable(const DestroyIsolatedSubscribeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DestroyIsolatedSubscribeOutcome()>>(
        [this, request]()
        {
            return this->DestroyIsolatedSubscribe(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::DestroyMigrateJobOutcome DtsClient::DestroyMigrateJob(const DestroyMigrateJobRequest &request)
{
    auto outcome = MakeRequest(request, "DestroyMigrateJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DestroyMigrateJobResponse rsp = DestroyMigrateJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DestroyMigrateJobOutcome(rsp);
        else
            return DestroyMigrateJobOutcome(o.GetError());
    }
    else
    {
        return DestroyMigrateJobOutcome(outcome.GetError());
    }
}

void DtsClient::DestroyMigrateJobAsync(const DestroyMigrateJobRequest& request, const DestroyMigrateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DestroyMigrateJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::DestroyMigrateJobOutcomeCallable DtsClient::DestroyMigrateJobCallable(const DestroyMigrateJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DestroyMigrateJobOutcome()>>(
        [this, request]()
        {
            return this->DestroyMigrateJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::DestroySyncJobOutcome DtsClient::DestroySyncJob(const DestroySyncJobRequest &request)
{
    auto outcome = MakeRequest(request, "DestroySyncJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DestroySyncJobResponse rsp = DestroySyncJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DestroySyncJobOutcome(rsp);
        else
            return DestroySyncJobOutcome(o.GetError());
    }
    else
    {
        return DestroySyncJobOutcome(outcome.GetError());
    }
}

void DtsClient::DestroySyncJobAsync(const DestroySyncJobRequest& request, const DestroySyncJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DestroySyncJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::DestroySyncJobOutcomeCallable DtsClient::DestroySyncJobCallable(const DestroySyncJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DestroySyncJobOutcome()>>(
        [this, request]()
        {
            return this->DestroySyncJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::IsolateMigrateJobOutcome DtsClient::IsolateMigrateJob(const IsolateMigrateJobRequest &request)
{
    auto outcome = MakeRequest(request, "IsolateMigrateJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        IsolateMigrateJobResponse rsp = IsolateMigrateJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return IsolateMigrateJobOutcome(rsp);
        else
            return IsolateMigrateJobOutcome(o.GetError());
    }
    else
    {
        return IsolateMigrateJobOutcome(outcome.GetError());
    }
}

void DtsClient::IsolateMigrateJobAsync(const IsolateMigrateJobRequest& request, const IsolateMigrateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->IsolateMigrateJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::IsolateMigrateJobOutcomeCallable DtsClient::IsolateMigrateJobCallable(const IsolateMigrateJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<IsolateMigrateJobOutcome()>>(
        [this, request]()
        {
            return this->IsolateMigrateJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::IsolateSubscribeOutcome DtsClient::IsolateSubscribe(const IsolateSubscribeRequest &request)
{
    auto outcome = MakeRequest(request, "IsolateSubscribe");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        IsolateSubscribeResponse rsp = IsolateSubscribeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return IsolateSubscribeOutcome(rsp);
        else
            return IsolateSubscribeOutcome(o.GetError());
    }
    else
    {
        return IsolateSubscribeOutcome(outcome.GetError());
    }
}

void DtsClient::IsolateSubscribeAsync(const IsolateSubscribeRequest& request, const IsolateSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->IsolateSubscribe(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::IsolateSubscribeOutcomeCallable DtsClient::IsolateSubscribeCallable(const IsolateSubscribeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<IsolateSubscribeOutcome()>>(
        [this, request]()
        {
            return this->IsolateSubscribe(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::IsolateSyncJobOutcome DtsClient::IsolateSyncJob(const IsolateSyncJobRequest &request)
{
    auto outcome = MakeRequest(request, "IsolateSyncJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        IsolateSyncJobResponse rsp = IsolateSyncJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return IsolateSyncJobOutcome(rsp);
        else
            return IsolateSyncJobOutcome(o.GetError());
    }
    else
    {
        return IsolateSyncJobOutcome(outcome.GetError());
    }
}

void DtsClient::IsolateSyncJobAsync(const IsolateSyncJobRequest& request, const IsolateSyncJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->IsolateSyncJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::IsolateSyncJobOutcomeCallable DtsClient::IsolateSyncJobCallable(const IsolateSyncJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<IsolateSyncJobOutcome()>>(
        [this, request]()
        {
            return this->IsolateSyncJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::ModifyCompareTaskOutcome DtsClient::ModifyCompareTask(const ModifyCompareTaskRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCompareTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCompareTaskResponse rsp = ModifyCompareTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCompareTaskOutcome(rsp);
        else
            return ModifyCompareTaskOutcome(o.GetError());
    }
    else
    {
        return ModifyCompareTaskOutcome(outcome.GetError());
    }
}

void DtsClient::ModifyCompareTaskAsync(const ModifyCompareTaskRequest& request, const ModifyCompareTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCompareTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::ModifyCompareTaskOutcomeCallable DtsClient::ModifyCompareTaskCallable(const ModifyCompareTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCompareTaskOutcome()>>(
        [this, request]()
        {
            return this->ModifyCompareTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::ModifyCompareTaskNameOutcome DtsClient::ModifyCompareTaskName(const ModifyCompareTaskNameRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCompareTaskName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCompareTaskNameResponse rsp = ModifyCompareTaskNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCompareTaskNameOutcome(rsp);
        else
            return ModifyCompareTaskNameOutcome(o.GetError());
    }
    else
    {
        return ModifyCompareTaskNameOutcome(outcome.GetError());
    }
}

void DtsClient::ModifyCompareTaskNameAsync(const ModifyCompareTaskNameRequest& request, const ModifyCompareTaskNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCompareTaskName(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::ModifyCompareTaskNameOutcomeCallable DtsClient::ModifyCompareTaskNameCallable(const ModifyCompareTaskNameRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCompareTaskNameOutcome()>>(
        [this, request]()
        {
            return this->ModifyCompareTaskName(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::ModifyConsumerGroupDescriptionOutcome DtsClient::ModifyConsumerGroupDescription(const ModifyConsumerGroupDescriptionRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyConsumerGroupDescription");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyConsumerGroupDescriptionResponse rsp = ModifyConsumerGroupDescriptionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyConsumerGroupDescriptionOutcome(rsp);
        else
            return ModifyConsumerGroupDescriptionOutcome(o.GetError());
    }
    else
    {
        return ModifyConsumerGroupDescriptionOutcome(outcome.GetError());
    }
}

void DtsClient::ModifyConsumerGroupDescriptionAsync(const ModifyConsumerGroupDescriptionRequest& request, const ModifyConsumerGroupDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyConsumerGroupDescription(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::ModifyConsumerGroupDescriptionOutcomeCallable DtsClient::ModifyConsumerGroupDescriptionCallable(const ModifyConsumerGroupDescriptionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyConsumerGroupDescriptionOutcome()>>(
        [this, request]()
        {
            return this->ModifyConsumerGroupDescription(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::ModifyConsumerGroupPasswordOutcome DtsClient::ModifyConsumerGroupPassword(const ModifyConsumerGroupPasswordRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyConsumerGroupPassword");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyConsumerGroupPasswordResponse rsp = ModifyConsumerGroupPasswordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyConsumerGroupPasswordOutcome(rsp);
        else
            return ModifyConsumerGroupPasswordOutcome(o.GetError());
    }
    else
    {
        return ModifyConsumerGroupPasswordOutcome(outcome.GetError());
    }
}

void DtsClient::ModifyConsumerGroupPasswordAsync(const ModifyConsumerGroupPasswordRequest& request, const ModifyConsumerGroupPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyConsumerGroupPassword(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::ModifyConsumerGroupPasswordOutcomeCallable DtsClient::ModifyConsumerGroupPasswordCallable(const ModifyConsumerGroupPasswordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyConsumerGroupPasswordOutcome()>>(
        [this, request]()
        {
            return this->ModifyConsumerGroupPassword(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::ModifyMigrateJobSpecOutcome DtsClient::ModifyMigrateJobSpec(const ModifyMigrateJobSpecRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMigrateJobSpec");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMigrateJobSpecResponse rsp = ModifyMigrateJobSpecResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMigrateJobSpecOutcome(rsp);
        else
            return ModifyMigrateJobSpecOutcome(o.GetError());
    }
    else
    {
        return ModifyMigrateJobSpecOutcome(outcome.GetError());
    }
}

void DtsClient::ModifyMigrateJobSpecAsync(const ModifyMigrateJobSpecRequest& request, const ModifyMigrateJobSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyMigrateJobSpec(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::ModifyMigrateJobSpecOutcomeCallable DtsClient::ModifyMigrateJobSpecCallable(const ModifyMigrateJobSpecRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyMigrateJobSpecOutcome()>>(
        [this, request]()
        {
            return this->ModifyMigrateJobSpec(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::ModifyMigrateNameOutcome DtsClient::ModifyMigrateName(const ModifyMigrateNameRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMigrateName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMigrateNameResponse rsp = ModifyMigrateNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMigrateNameOutcome(rsp);
        else
            return ModifyMigrateNameOutcome(o.GetError());
    }
    else
    {
        return ModifyMigrateNameOutcome(outcome.GetError());
    }
}

void DtsClient::ModifyMigrateNameAsync(const ModifyMigrateNameRequest& request, const ModifyMigrateNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyMigrateName(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::ModifyMigrateNameOutcomeCallable DtsClient::ModifyMigrateNameCallable(const ModifyMigrateNameRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyMigrateNameOutcome()>>(
        [this, request]()
        {
            return this->ModifyMigrateName(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::ModifyMigrateRateLimitOutcome DtsClient::ModifyMigrateRateLimit(const ModifyMigrateRateLimitRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMigrateRateLimit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMigrateRateLimitResponse rsp = ModifyMigrateRateLimitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMigrateRateLimitOutcome(rsp);
        else
            return ModifyMigrateRateLimitOutcome(o.GetError());
    }
    else
    {
        return ModifyMigrateRateLimitOutcome(outcome.GetError());
    }
}

void DtsClient::ModifyMigrateRateLimitAsync(const ModifyMigrateRateLimitRequest& request, const ModifyMigrateRateLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyMigrateRateLimit(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::ModifyMigrateRateLimitOutcomeCallable DtsClient::ModifyMigrateRateLimitCallable(const ModifyMigrateRateLimitRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyMigrateRateLimitOutcome()>>(
        [this, request]()
        {
            return this->ModifyMigrateRateLimit(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::ModifyMigrateRuntimeAttributeOutcome DtsClient::ModifyMigrateRuntimeAttribute(const ModifyMigrateRuntimeAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMigrateRuntimeAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMigrateRuntimeAttributeResponse rsp = ModifyMigrateRuntimeAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMigrateRuntimeAttributeOutcome(rsp);
        else
            return ModifyMigrateRuntimeAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyMigrateRuntimeAttributeOutcome(outcome.GetError());
    }
}

void DtsClient::ModifyMigrateRuntimeAttributeAsync(const ModifyMigrateRuntimeAttributeRequest& request, const ModifyMigrateRuntimeAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyMigrateRuntimeAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::ModifyMigrateRuntimeAttributeOutcomeCallable DtsClient::ModifyMigrateRuntimeAttributeCallable(const ModifyMigrateRuntimeAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyMigrateRuntimeAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifyMigrateRuntimeAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::ModifyMigrationJobOutcome DtsClient::ModifyMigrationJob(const ModifyMigrationJobRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMigrationJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMigrationJobResponse rsp = ModifyMigrationJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMigrationJobOutcome(rsp);
        else
            return ModifyMigrationJobOutcome(o.GetError());
    }
    else
    {
        return ModifyMigrationJobOutcome(outcome.GetError());
    }
}

void DtsClient::ModifyMigrationJobAsync(const ModifyMigrationJobRequest& request, const ModifyMigrationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyMigrationJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::ModifyMigrationJobOutcomeCallable DtsClient::ModifyMigrationJobCallable(const ModifyMigrationJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyMigrationJobOutcome()>>(
        [this, request]()
        {
            return this->ModifyMigrationJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::ModifySubscribeAutoRenewFlagOutcome DtsClient::ModifySubscribeAutoRenewFlag(const ModifySubscribeAutoRenewFlagRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySubscribeAutoRenewFlag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySubscribeAutoRenewFlagResponse rsp = ModifySubscribeAutoRenewFlagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySubscribeAutoRenewFlagOutcome(rsp);
        else
            return ModifySubscribeAutoRenewFlagOutcome(o.GetError());
    }
    else
    {
        return ModifySubscribeAutoRenewFlagOutcome(outcome.GetError());
    }
}

void DtsClient::ModifySubscribeAutoRenewFlagAsync(const ModifySubscribeAutoRenewFlagRequest& request, const ModifySubscribeAutoRenewFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySubscribeAutoRenewFlag(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::ModifySubscribeAutoRenewFlagOutcomeCallable DtsClient::ModifySubscribeAutoRenewFlagCallable(const ModifySubscribeAutoRenewFlagRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySubscribeAutoRenewFlagOutcome()>>(
        [this, request]()
        {
            return this->ModifySubscribeAutoRenewFlag(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::ModifySubscribeNameOutcome DtsClient::ModifySubscribeName(const ModifySubscribeNameRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySubscribeName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySubscribeNameResponse rsp = ModifySubscribeNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySubscribeNameOutcome(rsp);
        else
            return ModifySubscribeNameOutcome(o.GetError());
    }
    else
    {
        return ModifySubscribeNameOutcome(outcome.GetError());
    }
}

void DtsClient::ModifySubscribeNameAsync(const ModifySubscribeNameRequest& request, const ModifySubscribeNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySubscribeName(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::ModifySubscribeNameOutcomeCallable DtsClient::ModifySubscribeNameCallable(const ModifySubscribeNameRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySubscribeNameOutcome()>>(
        [this, request]()
        {
            return this->ModifySubscribeName(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::ModifySubscribeObjectsOutcome DtsClient::ModifySubscribeObjects(const ModifySubscribeObjectsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySubscribeObjects");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySubscribeObjectsResponse rsp = ModifySubscribeObjectsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySubscribeObjectsOutcome(rsp);
        else
            return ModifySubscribeObjectsOutcome(o.GetError());
    }
    else
    {
        return ModifySubscribeObjectsOutcome(outcome.GetError());
    }
}

void DtsClient::ModifySubscribeObjectsAsync(const ModifySubscribeObjectsRequest& request, const ModifySubscribeObjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySubscribeObjects(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::ModifySubscribeObjectsOutcomeCallable DtsClient::ModifySubscribeObjectsCallable(const ModifySubscribeObjectsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySubscribeObjectsOutcome()>>(
        [this, request]()
        {
            return this->ModifySubscribeObjects(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::ModifySyncJobConfigOutcome DtsClient::ModifySyncJobConfig(const ModifySyncJobConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySyncJobConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySyncJobConfigResponse rsp = ModifySyncJobConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySyncJobConfigOutcome(rsp);
        else
            return ModifySyncJobConfigOutcome(o.GetError());
    }
    else
    {
        return ModifySyncJobConfigOutcome(outcome.GetError());
    }
}

void DtsClient::ModifySyncJobConfigAsync(const ModifySyncJobConfigRequest& request, const ModifySyncJobConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySyncJobConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::ModifySyncJobConfigOutcomeCallable DtsClient::ModifySyncJobConfigCallable(const ModifySyncJobConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySyncJobConfigOutcome()>>(
        [this, request]()
        {
            return this->ModifySyncJobConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::ModifySyncRateLimitOutcome DtsClient::ModifySyncRateLimit(const ModifySyncRateLimitRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySyncRateLimit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySyncRateLimitResponse rsp = ModifySyncRateLimitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySyncRateLimitOutcome(rsp);
        else
            return ModifySyncRateLimitOutcome(o.GetError());
    }
    else
    {
        return ModifySyncRateLimitOutcome(outcome.GetError());
    }
}

void DtsClient::ModifySyncRateLimitAsync(const ModifySyncRateLimitRequest& request, const ModifySyncRateLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySyncRateLimit(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::ModifySyncRateLimitOutcomeCallable DtsClient::ModifySyncRateLimitCallable(const ModifySyncRateLimitRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySyncRateLimitOutcome()>>(
        [this, request]()
        {
            return this->ModifySyncRateLimit(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::PauseMigrateJobOutcome DtsClient::PauseMigrateJob(const PauseMigrateJobRequest &request)
{
    auto outcome = MakeRequest(request, "PauseMigrateJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PauseMigrateJobResponse rsp = PauseMigrateJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PauseMigrateJobOutcome(rsp);
        else
            return PauseMigrateJobOutcome(o.GetError());
    }
    else
    {
        return PauseMigrateJobOutcome(outcome.GetError());
    }
}

void DtsClient::PauseMigrateJobAsync(const PauseMigrateJobRequest& request, const PauseMigrateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->PauseMigrateJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::PauseMigrateJobOutcomeCallable DtsClient::PauseMigrateJobCallable(const PauseMigrateJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<PauseMigrateJobOutcome()>>(
        [this, request]()
        {
            return this->PauseMigrateJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::PauseSyncJobOutcome DtsClient::PauseSyncJob(const PauseSyncJobRequest &request)
{
    auto outcome = MakeRequest(request, "PauseSyncJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PauseSyncJobResponse rsp = PauseSyncJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PauseSyncJobOutcome(rsp);
        else
            return PauseSyncJobOutcome(o.GetError());
    }
    else
    {
        return PauseSyncJobOutcome(outcome.GetError());
    }
}

void DtsClient::PauseSyncJobAsync(const PauseSyncJobRequest& request, const PauseSyncJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->PauseSyncJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::PauseSyncJobOutcomeCallable DtsClient::PauseSyncJobCallable(const PauseSyncJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<PauseSyncJobOutcome()>>(
        [this, request]()
        {
            return this->PauseSyncJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::RecoverMigrateJobOutcome DtsClient::RecoverMigrateJob(const RecoverMigrateJobRequest &request)
{
    auto outcome = MakeRequest(request, "RecoverMigrateJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RecoverMigrateJobResponse rsp = RecoverMigrateJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RecoverMigrateJobOutcome(rsp);
        else
            return RecoverMigrateJobOutcome(o.GetError());
    }
    else
    {
        return RecoverMigrateJobOutcome(outcome.GetError());
    }
}

void DtsClient::RecoverMigrateJobAsync(const RecoverMigrateJobRequest& request, const RecoverMigrateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RecoverMigrateJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::RecoverMigrateJobOutcomeCallable DtsClient::RecoverMigrateJobCallable(const RecoverMigrateJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RecoverMigrateJobOutcome()>>(
        [this, request]()
        {
            return this->RecoverMigrateJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::RecoverSyncJobOutcome DtsClient::RecoverSyncJob(const RecoverSyncJobRequest &request)
{
    auto outcome = MakeRequest(request, "RecoverSyncJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RecoverSyncJobResponse rsp = RecoverSyncJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RecoverSyncJobOutcome(rsp);
        else
            return RecoverSyncJobOutcome(o.GetError());
    }
    else
    {
        return RecoverSyncJobOutcome(outcome.GetError());
    }
}

void DtsClient::RecoverSyncJobAsync(const RecoverSyncJobRequest& request, const RecoverSyncJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RecoverSyncJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::RecoverSyncJobOutcomeCallable DtsClient::RecoverSyncJobCallable(const RecoverSyncJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RecoverSyncJobOutcome()>>(
        [this, request]()
        {
            return this->RecoverSyncJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::ResetConsumerGroupOffsetOutcome DtsClient::ResetConsumerGroupOffset(const ResetConsumerGroupOffsetRequest &request)
{
    auto outcome = MakeRequest(request, "ResetConsumerGroupOffset");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetConsumerGroupOffsetResponse rsp = ResetConsumerGroupOffsetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetConsumerGroupOffsetOutcome(rsp);
        else
            return ResetConsumerGroupOffsetOutcome(o.GetError());
    }
    else
    {
        return ResetConsumerGroupOffsetOutcome(outcome.GetError());
    }
}

void DtsClient::ResetConsumerGroupOffsetAsync(const ResetConsumerGroupOffsetRequest& request, const ResetConsumerGroupOffsetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResetConsumerGroupOffset(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::ResetConsumerGroupOffsetOutcomeCallable DtsClient::ResetConsumerGroupOffsetCallable(const ResetConsumerGroupOffsetRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResetConsumerGroupOffsetOutcome()>>(
        [this, request]()
        {
            return this->ResetConsumerGroupOffset(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::ResetSubscribeOutcome DtsClient::ResetSubscribe(const ResetSubscribeRequest &request)
{
    auto outcome = MakeRequest(request, "ResetSubscribe");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetSubscribeResponse rsp = ResetSubscribeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetSubscribeOutcome(rsp);
        else
            return ResetSubscribeOutcome(o.GetError());
    }
    else
    {
        return ResetSubscribeOutcome(outcome.GetError());
    }
}

void DtsClient::ResetSubscribeAsync(const ResetSubscribeRequest& request, const ResetSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResetSubscribe(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::ResetSubscribeOutcomeCallable DtsClient::ResetSubscribeCallable(const ResetSubscribeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResetSubscribeOutcome()>>(
        [this, request]()
        {
            return this->ResetSubscribe(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::ResizeSyncJobOutcome DtsClient::ResizeSyncJob(const ResizeSyncJobRequest &request)
{
    auto outcome = MakeRequest(request, "ResizeSyncJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResizeSyncJobResponse rsp = ResizeSyncJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResizeSyncJobOutcome(rsp);
        else
            return ResizeSyncJobOutcome(o.GetError());
    }
    else
    {
        return ResizeSyncJobOutcome(outcome.GetError());
    }
}

void DtsClient::ResizeSyncJobAsync(const ResizeSyncJobRequest& request, const ResizeSyncJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResizeSyncJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::ResizeSyncJobOutcomeCallable DtsClient::ResizeSyncJobCallable(const ResizeSyncJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResizeSyncJobOutcome()>>(
        [this, request]()
        {
            return this->ResizeSyncJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::ResumeMigrateJobOutcome DtsClient::ResumeMigrateJob(const ResumeMigrateJobRequest &request)
{
    auto outcome = MakeRequest(request, "ResumeMigrateJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResumeMigrateJobResponse rsp = ResumeMigrateJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResumeMigrateJobOutcome(rsp);
        else
            return ResumeMigrateJobOutcome(o.GetError());
    }
    else
    {
        return ResumeMigrateJobOutcome(outcome.GetError());
    }
}

void DtsClient::ResumeMigrateJobAsync(const ResumeMigrateJobRequest& request, const ResumeMigrateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResumeMigrateJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::ResumeMigrateJobOutcomeCallable DtsClient::ResumeMigrateJobCallable(const ResumeMigrateJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResumeMigrateJobOutcome()>>(
        [this, request]()
        {
            return this->ResumeMigrateJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::ResumeSubscribeOutcome DtsClient::ResumeSubscribe(const ResumeSubscribeRequest &request)
{
    auto outcome = MakeRequest(request, "ResumeSubscribe");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResumeSubscribeResponse rsp = ResumeSubscribeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResumeSubscribeOutcome(rsp);
        else
            return ResumeSubscribeOutcome(o.GetError());
    }
    else
    {
        return ResumeSubscribeOutcome(outcome.GetError());
    }
}

void DtsClient::ResumeSubscribeAsync(const ResumeSubscribeRequest& request, const ResumeSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResumeSubscribe(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::ResumeSubscribeOutcomeCallable DtsClient::ResumeSubscribeCallable(const ResumeSubscribeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResumeSubscribeOutcome()>>(
        [this, request]()
        {
            return this->ResumeSubscribe(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::ResumeSyncJobOutcome DtsClient::ResumeSyncJob(const ResumeSyncJobRequest &request)
{
    auto outcome = MakeRequest(request, "ResumeSyncJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResumeSyncJobResponse rsp = ResumeSyncJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResumeSyncJobOutcome(rsp);
        else
            return ResumeSyncJobOutcome(o.GetError());
    }
    else
    {
        return ResumeSyncJobOutcome(outcome.GetError());
    }
}

void DtsClient::ResumeSyncJobAsync(const ResumeSyncJobRequest& request, const ResumeSyncJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResumeSyncJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::ResumeSyncJobOutcomeCallable DtsClient::ResumeSyncJobCallable(const ResumeSyncJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResumeSyncJobOutcome()>>(
        [this, request]()
        {
            return this->ResumeSyncJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::SkipCheckItemOutcome DtsClient::SkipCheckItem(const SkipCheckItemRequest &request)
{
    auto outcome = MakeRequest(request, "SkipCheckItem");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SkipCheckItemResponse rsp = SkipCheckItemResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SkipCheckItemOutcome(rsp);
        else
            return SkipCheckItemOutcome(o.GetError());
    }
    else
    {
        return SkipCheckItemOutcome(outcome.GetError());
    }
}

void DtsClient::SkipCheckItemAsync(const SkipCheckItemRequest& request, const SkipCheckItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SkipCheckItem(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::SkipCheckItemOutcomeCallable DtsClient::SkipCheckItemCallable(const SkipCheckItemRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SkipCheckItemOutcome()>>(
        [this, request]()
        {
            return this->SkipCheckItem(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::SkipSyncCheckItemOutcome DtsClient::SkipSyncCheckItem(const SkipSyncCheckItemRequest &request)
{
    auto outcome = MakeRequest(request, "SkipSyncCheckItem");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SkipSyncCheckItemResponse rsp = SkipSyncCheckItemResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SkipSyncCheckItemOutcome(rsp);
        else
            return SkipSyncCheckItemOutcome(o.GetError());
    }
    else
    {
        return SkipSyncCheckItemOutcome(outcome.GetError());
    }
}

void DtsClient::SkipSyncCheckItemAsync(const SkipSyncCheckItemRequest& request, const SkipSyncCheckItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SkipSyncCheckItem(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::SkipSyncCheckItemOutcomeCallable DtsClient::SkipSyncCheckItemCallable(const SkipSyncCheckItemRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SkipSyncCheckItemOutcome()>>(
        [this, request]()
        {
            return this->SkipSyncCheckItem(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::StartCompareOutcome DtsClient::StartCompare(const StartCompareRequest &request)
{
    auto outcome = MakeRequest(request, "StartCompare");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartCompareResponse rsp = StartCompareResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartCompareOutcome(rsp);
        else
            return StartCompareOutcome(o.GetError());
    }
    else
    {
        return StartCompareOutcome(outcome.GetError());
    }
}

void DtsClient::StartCompareAsync(const StartCompareRequest& request, const StartCompareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartCompare(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::StartCompareOutcomeCallable DtsClient::StartCompareCallable(const StartCompareRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartCompareOutcome()>>(
        [this, request]()
        {
            return this->StartCompare(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::StartMigrateJobOutcome DtsClient::StartMigrateJob(const StartMigrateJobRequest &request)
{
    auto outcome = MakeRequest(request, "StartMigrateJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartMigrateJobResponse rsp = StartMigrateJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartMigrateJobOutcome(rsp);
        else
            return StartMigrateJobOutcome(o.GetError());
    }
    else
    {
        return StartMigrateJobOutcome(outcome.GetError());
    }
}

void DtsClient::StartMigrateJobAsync(const StartMigrateJobRequest& request, const StartMigrateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartMigrateJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::StartMigrateJobOutcomeCallable DtsClient::StartMigrateJobCallable(const StartMigrateJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartMigrateJobOutcome()>>(
        [this, request]()
        {
            return this->StartMigrateJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::StartModifySyncJobOutcome DtsClient::StartModifySyncJob(const StartModifySyncJobRequest &request)
{
    auto outcome = MakeRequest(request, "StartModifySyncJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartModifySyncJobResponse rsp = StartModifySyncJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartModifySyncJobOutcome(rsp);
        else
            return StartModifySyncJobOutcome(o.GetError());
    }
    else
    {
        return StartModifySyncJobOutcome(outcome.GetError());
    }
}

void DtsClient::StartModifySyncJobAsync(const StartModifySyncJobRequest& request, const StartModifySyncJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartModifySyncJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::StartModifySyncJobOutcomeCallable DtsClient::StartModifySyncJobCallable(const StartModifySyncJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartModifySyncJobOutcome()>>(
        [this, request]()
        {
            return this->StartModifySyncJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::StartSubscribeOutcome DtsClient::StartSubscribe(const StartSubscribeRequest &request)
{
    auto outcome = MakeRequest(request, "StartSubscribe");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartSubscribeResponse rsp = StartSubscribeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartSubscribeOutcome(rsp);
        else
            return StartSubscribeOutcome(o.GetError());
    }
    else
    {
        return StartSubscribeOutcome(outcome.GetError());
    }
}

void DtsClient::StartSubscribeAsync(const StartSubscribeRequest& request, const StartSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartSubscribe(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::StartSubscribeOutcomeCallable DtsClient::StartSubscribeCallable(const StartSubscribeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartSubscribeOutcome()>>(
        [this, request]()
        {
            return this->StartSubscribe(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::StartSyncJobOutcome DtsClient::StartSyncJob(const StartSyncJobRequest &request)
{
    auto outcome = MakeRequest(request, "StartSyncJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartSyncJobResponse rsp = StartSyncJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartSyncJobOutcome(rsp);
        else
            return StartSyncJobOutcome(o.GetError());
    }
    else
    {
        return StartSyncJobOutcome(outcome.GetError());
    }
}

void DtsClient::StartSyncJobAsync(const StartSyncJobRequest& request, const StartSyncJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartSyncJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::StartSyncJobOutcomeCallable DtsClient::StartSyncJobCallable(const StartSyncJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartSyncJobOutcome()>>(
        [this, request]()
        {
            return this->StartSyncJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::StopCompareOutcome DtsClient::StopCompare(const StopCompareRequest &request)
{
    auto outcome = MakeRequest(request, "StopCompare");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopCompareResponse rsp = StopCompareResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopCompareOutcome(rsp);
        else
            return StopCompareOutcome(o.GetError());
    }
    else
    {
        return StopCompareOutcome(outcome.GetError());
    }
}

void DtsClient::StopCompareAsync(const StopCompareRequest& request, const StopCompareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopCompare(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::StopCompareOutcomeCallable DtsClient::StopCompareCallable(const StopCompareRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopCompareOutcome()>>(
        [this, request]()
        {
            return this->StopCompare(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::StopMigrateJobOutcome DtsClient::StopMigrateJob(const StopMigrateJobRequest &request)
{
    auto outcome = MakeRequest(request, "StopMigrateJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopMigrateJobResponse rsp = StopMigrateJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopMigrateJobOutcome(rsp);
        else
            return StopMigrateJobOutcome(o.GetError());
    }
    else
    {
        return StopMigrateJobOutcome(outcome.GetError());
    }
}

void DtsClient::StopMigrateJobAsync(const StopMigrateJobRequest& request, const StopMigrateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopMigrateJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::StopMigrateJobOutcomeCallable DtsClient::StopMigrateJobCallable(const StopMigrateJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopMigrateJobOutcome()>>(
        [this, request]()
        {
            return this->StopMigrateJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::StopSyncJobOutcome DtsClient::StopSyncJob(const StopSyncJobRequest &request)
{
    auto outcome = MakeRequest(request, "StopSyncJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopSyncJobResponse rsp = StopSyncJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopSyncJobOutcome(rsp);
        else
            return StopSyncJobOutcome(o.GetError());
    }
    else
    {
        return StopSyncJobOutcome(outcome.GetError());
    }
}

void DtsClient::StopSyncJobAsync(const StopSyncJobRequest& request, const StopSyncJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopSyncJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::StopSyncJobOutcomeCallable DtsClient::StopSyncJobCallable(const StopSyncJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopSyncJobOutcome()>>(
        [this, request]()
        {
            return this->StopSyncJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


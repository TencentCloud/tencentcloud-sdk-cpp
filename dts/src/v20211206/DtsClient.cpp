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


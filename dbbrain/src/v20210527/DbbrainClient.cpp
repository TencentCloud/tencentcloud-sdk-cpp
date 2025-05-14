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

#include <tencentcloud/dbbrain/v20210527/DbbrainClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Dbbrain::V20210527;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-05-27";
    const string ENDPOINT = "dbbrain.tencentcloudapi.com";
}

DbbrainClient::DbbrainClient(const Credential &credential, const string &region) :
    DbbrainClient(credential, region, ClientProfile())
{
}

DbbrainClient::DbbrainClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


DbbrainClient::AddUserContactOutcome DbbrainClient::AddUserContact(const AddUserContactRequest &request)
{
    auto outcome = MakeRequest(request, "AddUserContact");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddUserContactResponse rsp = AddUserContactResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddUserContactOutcome(rsp);
        else
            return AddUserContactOutcome(o.GetError());
    }
    else
    {
        return AddUserContactOutcome(outcome.GetError());
    }
}

void DbbrainClient::AddUserContactAsync(const AddUserContactRequest& request, const AddUserContactAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddUserContact(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::AddUserContactOutcomeCallable DbbrainClient::AddUserContactCallable(const AddUserContactRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddUserContactOutcome()>>(
        [this, request]()
        {
            return this->AddUserContact(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::CancelDBAutonomyActionOutcome DbbrainClient::CancelDBAutonomyAction(const CancelDBAutonomyActionRequest &request)
{
    auto outcome = MakeRequest(request, "CancelDBAutonomyAction");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CancelDBAutonomyActionResponse rsp = CancelDBAutonomyActionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CancelDBAutonomyActionOutcome(rsp);
        else
            return CancelDBAutonomyActionOutcome(o.GetError());
    }
    else
    {
        return CancelDBAutonomyActionOutcome(outcome.GetError());
    }
}

void DbbrainClient::CancelDBAutonomyActionAsync(const CancelDBAutonomyActionRequest& request, const CancelDBAutonomyActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CancelDBAutonomyAction(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::CancelDBAutonomyActionOutcomeCallable DbbrainClient::CancelDBAutonomyActionCallable(const CancelDBAutonomyActionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CancelDBAutonomyActionOutcome()>>(
        [this, request]()
        {
            return this->CancelDBAutonomyAction(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::CancelDBAutonomyEventOutcome DbbrainClient::CancelDBAutonomyEvent(const CancelDBAutonomyEventRequest &request)
{
    auto outcome = MakeRequest(request, "CancelDBAutonomyEvent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CancelDBAutonomyEventResponse rsp = CancelDBAutonomyEventResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CancelDBAutonomyEventOutcome(rsp);
        else
            return CancelDBAutonomyEventOutcome(o.GetError());
    }
    else
    {
        return CancelDBAutonomyEventOutcome(outcome.GetError());
    }
}

void DbbrainClient::CancelDBAutonomyEventAsync(const CancelDBAutonomyEventRequest& request, const CancelDBAutonomyEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CancelDBAutonomyEvent(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::CancelDBAutonomyEventOutcomeCallable DbbrainClient::CancelDBAutonomyEventCallable(const CancelDBAutonomyEventRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CancelDBAutonomyEventOutcome()>>(
        [this, request]()
        {
            return this->CancelDBAutonomyEvent(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::CancelKillTaskOutcome DbbrainClient::CancelKillTask(const CancelKillTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CancelKillTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CancelKillTaskResponse rsp = CancelKillTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CancelKillTaskOutcome(rsp);
        else
            return CancelKillTaskOutcome(o.GetError());
    }
    else
    {
        return CancelKillTaskOutcome(outcome.GetError());
    }
}

void DbbrainClient::CancelKillTaskAsync(const CancelKillTaskRequest& request, const CancelKillTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CancelKillTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::CancelKillTaskOutcomeCallable DbbrainClient::CancelKillTaskCallable(const CancelKillTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CancelKillTaskOutcome()>>(
        [this, request]()
        {
            return this->CancelKillTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::CancelRedisBigKeyAnalysisTasksOutcome DbbrainClient::CancelRedisBigKeyAnalysisTasks(const CancelRedisBigKeyAnalysisTasksRequest &request)
{
    auto outcome = MakeRequest(request, "CancelRedisBigKeyAnalysisTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CancelRedisBigKeyAnalysisTasksResponse rsp = CancelRedisBigKeyAnalysisTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CancelRedisBigKeyAnalysisTasksOutcome(rsp);
        else
            return CancelRedisBigKeyAnalysisTasksOutcome(o.GetError());
    }
    else
    {
        return CancelRedisBigKeyAnalysisTasksOutcome(outcome.GetError());
    }
}

void DbbrainClient::CancelRedisBigKeyAnalysisTasksAsync(const CancelRedisBigKeyAnalysisTasksRequest& request, const CancelRedisBigKeyAnalysisTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CancelRedisBigKeyAnalysisTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::CancelRedisBigKeyAnalysisTasksOutcomeCallable DbbrainClient::CancelRedisBigKeyAnalysisTasksCallable(const CancelRedisBigKeyAnalysisTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CancelRedisBigKeyAnalysisTasksOutcome()>>(
        [this, request]()
        {
            return this->CancelRedisBigKeyAnalysisTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::CloseAuditServiceOutcome DbbrainClient::CloseAuditService(const CloseAuditServiceRequest &request)
{
    auto outcome = MakeRequest(request, "CloseAuditService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CloseAuditServiceResponse rsp = CloseAuditServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CloseAuditServiceOutcome(rsp);
        else
            return CloseAuditServiceOutcome(o.GetError());
    }
    else
    {
        return CloseAuditServiceOutcome(outcome.GetError());
    }
}

void DbbrainClient::CloseAuditServiceAsync(const CloseAuditServiceRequest& request, const CloseAuditServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CloseAuditService(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::CloseAuditServiceOutcomeCallable DbbrainClient::CloseAuditServiceCallable(const CloseAuditServiceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CloseAuditServiceOutcome()>>(
        [this, request]()
        {
            return this->CloseAuditService(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::CreateAuditLogFileOutcome DbbrainClient::CreateAuditLogFile(const CreateAuditLogFileRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAuditLogFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAuditLogFileResponse rsp = CreateAuditLogFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAuditLogFileOutcome(rsp);
        else
            return CreateAuditLogFileOutcome(o.GetError());
    }
    else
    {
        return CreateAuditLogFileOutcome(outcome.GetError());
    }
}

void DbbrainClient::CreateAuditLogFileAsync(const CreateAuditLogFileRequest& request, const CreateAuditLogFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAuditLogFile(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::CreateAuditLogFileOutcomeCallable DbbrainClient::CreateAuditLogFileCallable(const CreateAuditLogFileRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAuditLogFileOutcome()>>(
        [this, request]()
        {
            return this->CreateAuditLogFile(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::CreateDBDiagReportTaskOutcome DbbrainClient::CreateDBDiagReportTask(const CreateDBDiagReportTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDBDiagReportTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDBDiagReportTaskResponse rsp = CreateDBDiagReportTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDBDiagReportTaskOutcome(rsp);
        else
            return CreateDBDiagReportTaskOutcome(o.GetError());
    }
    else
    {
        return CreateDBDiagReportTaskOutcome(outcome.GetError());
    }
}

void DbbrainClient::CreateDBDiagReportTaskAsync(const CreateDBDiagReportTaskRequest& request, const CreateDBDiagReportTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDBDiagReportTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::CreateDBDiagReportTaskOutcomeCallable DbbrainClient::CreateDBDiagReportTaskCallable(const CreateDBDiagReportTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDBDiagReportTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateDBDiagReportTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::CreateDBDiagReportUrlOutcome DbbrainClient::CreateDBDiagReportUrl(const CreateDBDiagReportUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDBDiagReportUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDBDiagReportUrlResponse rsp = CreateDBDiagReportUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDBDiagReportUrlOutcome(rsp);
        else
            return CreateDBDiagReportUrlOutcome(o.GetError());
    }
    else
    {
        return CreateDBDiagReportUrlOutcome(outcome.GetError());
    }
}

void DbbrainClient::CreateDBDiagReportUrlAsync(const CreateDBDiagReportUrlRequest& request, const CreateDBDiagReportUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDBDiagReportUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::CreateDBDiagReportUrlOutcomeCallable DbbrainClient::CreateDBDiagReportUrlCallable(const CreateDBDiagReportUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDBDiagReportUrlOutcome()>>(
        [this, request]()
        {
            return this->CreateDBDiagReportUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::CreateKillTaskOutcome DbbrainClient::CreateKillTask(const CreateKillTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateKillTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateKillTaskResponse rsp = CreateKillTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateKillTaskOutcome(rsp);
        else
            return CreateKillTaskOutcome(o.GetError());
    }
    else
    {
        return CreateKillTaskOutcome(outcome.GetError());
    }
}

void DbbrainClient::CreateKillTaskAsync(const CreateKillTaskRequest& request, const CreateKillTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateKillTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::CreateKillTaskOutcomeCallable DbbrainClient::CreateKillTaskCallable(const CreateKillTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateKillTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateKillTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::CreateMailProfileOutcome DbbrainClient::CreateMailProfile(const CreateMailProfileRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMailProfile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMailProfileResponse rsp = CreateMailProfileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMailProfileOutcome(rsp);
        else
            return CreateMailProfileOutcome(o.GetError());
    }
    else
    {
        return CreateMailProfileOutcome(outcome.GetError());
    }
}

void DbbrainClient::CreateMailProfileAsync(const CreateMailProfileRequest& request, const CreateMailProfileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateMailProfile(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::CreateMailProfileOutcomeCallable DbbrainClient::CreateMailProfileCallable(const CreateMailProfileRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateMailProfileOutcome()>>(
        [this, request]()
        {
            return this->CreateMailProfile(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::CreateProxySessionKillTaskOutcome DbbrainClient::CreateProxySessionKillTask(const CreateProxySessionKillTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateProxySessionKillTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateProxySessionKillTaskResponse rsp = CreateProxySessionKillTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateProxySessionKillTaskOutcome(rsp);
        else
            return CreateProxySessionKillTaskOutcome(o.GetError());
    }
    else
    {
        return CreateProxySessionKillTaskOutcome(outcome.GetError());
    }
}

void DbbrainClient::CreateProxySessionKillTaskAsync(const CreateProxySessionKillTaskRequest& request, const CreateProxySessionKillTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateProxySessionKillTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::CreateProxySessionKillTaskOutcomeCallable DbbrainClient::CreateProxySessionKillTaskCallable(const CreateProxySessionKillTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateProxySessionKillTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateProxySessionKillTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::CreateRedisBigKeyAnalysisTaskOutcome DbbrainClient::CreateRedisBigKeyAnalysisTask(const CreateRedisBigKeyAnalysisTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRedisBigKeyAnalysisTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRedisBigKeyAnalysisTaskResponse rsp = CreateRedisBigKeyAnalysisTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRedisBigKeyAnalysisTaskOutcome(rsp);
        else
            return CreateRedisBigKeyAnalysisTaskOutcome(o.GetError());
    }
    else
    {
        return CreateRedisBigKeyAnalysisTaskOutcome(outcome.GetError());
    }
}

void DbbrainClient::CreateRedisBigKeyAnalysisTaskAsync(const CreateRedisBigKeyAnalysisTaskRequest& request, const CreateRedisBigKeyAnalysisTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateRedisBigKeyAnalysisTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::CreateRedisBigKeyAnalysisTaskOutcomeCallable DbbrainClient::CreateRedisBigKeyAnalysisTaskCallable(const CreateRedisBigKeyAnalysisTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateRedisBigKeyAnalysisTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateRedisBigKeyAnalysisTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::CreateSchedulerMailProfileOutcome DbbrainClient::CreateSchedulerMailProfile(const CreateSchedulerMailProfileRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSchedulerMailProfile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSchedulerMailProfileResponse rsp = CreateSchedulerMailProfileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSchedulerMailProfileOutcome(rsp);
        else
            return CreateSchedulerMailProfileOutcome(o.GetError());
    }
    else
    {
        return CreateSchedulerMailProfileOutcome(outcome.GetError());
    }
}

void DbbrainClient::CreateSchedulerMailProfileAsync(const CreateSchedulerMailProfileRequest& request, const CreateSchedulerMailProfileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSchedulerMailProfile(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::CreateSchedulerMailProfileOutcomeCallable DbbrainClient::CreateSchedulerMailProfileCallable(const CreateSchedulerMailProfileRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSchedulerMailProfileOutcome()>>(
        [this, request]()
        {
            return this->CreateSchedulerMailProfile(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::CreateSecurityAuditLogExportTaskOutcome DbbrainClient::CreateSecurityAuditLogExportTask(const CreateSecurityAuditLogExportTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSecurityAuditLogExportTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSecurityAuditLogExportTaskResponse rsp = CreateSecurityAuditLogExportTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSecurityAuditLogExportTaskOutcome(rsp);
        else
            return CreateSecurityAuditLogExportTaskOutcome(o.GetError());
    }
    else
    {
        return CreateSecurityAuditLogExportTaskOutcome(outcome.GetError());
    }
}

void DbbrainClient::CreateSecurityAuditLogExportTaskAsync(const CreateSecurityAuditLogExportTaskRequest& request, const CreateSecurityAuditLogExportTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSecurityAuditLogExportTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::CreateSecurityAuditLogExportTaskOutcomeCallable DbbrainClient::CreateSecurityAuditLogExportTaskCallable(const CreateSecurityAuditLogExportTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSecurityAuditLogExportTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateSecurityAuditLogExportTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::CreateSqlFilterOutcome DbbrainClient::CreateSqlFilter(const CreateSqlFilterRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSqlFilter");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSqlFilterResponse rsp = CreateSqlFilterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSqlFilterOutcome(rsp);
        else
            return CreateSqlFilterOutcome(o.GetError());
    }
    else
    {
        return CreateSqlFilterOutcome(outcome.GetError());
    }
}

void DbbrainClient::CreateSqlFilterAsync(const CreateSqlFilterRequest& request, const CreateSqlFilterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSqlFilter(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::CreateSqlFilterOutcomeCallable DbbrainClient::CreateSqlFilterCallable(const CreateSqlFilterRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSqlFilterOutcome()>>(
        [this, request]()
        {
            return this->CreateSqlFilter(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::CreateUserAutonomyProfileOutcome DbbrainClient::CreateUserAutonomyProfile(const CreateUserAutonomyProfileRequest &request)
{
    auto outcome = MakeRequest(request, "CreateUserAutonomyProfile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateUserAutonomyProfileResponse rsp = CreateUserAutonomyProfileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateUserAutonomyProfileOutcome(rsp);
        else
            return CreateUserAutonomyProfileOutcome(o.GetError());
    }
    else
    {
        return CreateUserAutonomyProfileOutcome(outcome.GetError());
    }
}

void DbbrainClient::CreateUserAutonomyProfileAsync(const CreateUserAutonomyProfileRequest& request, const CreateUserAutonomyProfileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateUserAutonomyProfile(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::CreateUserAutonomyProfileOutcomeCallable DbbrainClient::CreateUserAutonomyProfileCallable(const CreateUserAutonomyProfileRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateUserAutonomyProfileOutcome()>>(
        [this, request]()
        {
            return this->CreateUserAutonomyProfile(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DeleteAuditLogFileOutcome DbbrainClient::DeleteAuditLogFile(const DeleteAuditLogFileRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAuditLogFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAuditLogFileResponse rsp = DeleteAuditLogFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAuditLogFileOutcome(rsp);
        else
            return DeleteAuditLogFileOutcome(o.GetError());
    }
    else
    {
        return DeleteAuditLogFileOutcome(outcome.GetError());
    }
}

void DbbrainClient::DeleteAuditLogFileAsync(const DeleteAuditLogFileRequest& request, const DeleteAuditLogFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAuditLogFile(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DeleteAuditLogFileOutcomeCallable DbbrainClient::DeleteAuditLogFileCallable(const DeleteAuditLogFileRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAuditLogFileOutcome()>>(
        [this, request]()
        {
            return this->DeleteAuditLogFile(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DeleteDBDiagReportTasksOutcome DbbrainClient::DeleteDBDiagReportTasks(const DeleteDBDiagReportTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDBDiagReportTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDBDiagReportTasksResponse rsp = DeleteDBDiagReportTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDBDiagReportTasksOutcome(rsp);
        else
            return DeleteDBDiagReportTasksOutcome(o.GetError());
    }
    else
    {
        return DeleteDBDiagReportTasksOutcome(outcome.GetError());
    }
}

void DbbrainClient::DeleteDBDiagReportTasksAsync(const DeleteDBDiagReportTasksRequest& request, const DeleteDBDiagReportTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDBDiagReportTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DeleteDBDiagReportTasksOutcomeCallable DbbrainClient::DeleteDBDiagReportTasksCallable(const DeleteDBDiagReportTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteDBDiagReportTasksOutcome()>>(
        [this, request]()
        {
            return this->DeleteDBDiagReportTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DeleteRedisBigKeyAnalysisTasksOutcome DbbrainClient::DeleteRedisBigKeyAnalysisTasks(const DeleteRedisBigKeyAnalysisTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRedisBigKeyAnalysisTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRedisBigKeyAnalysisTasksResponse rsp = DeleteRedisBigKeyAnalysisTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRedisBigKeyAnalysisTasksOutcome(rsp);
        else
            return DeleteRedisBigKeyAnalysisTasksOutcome(o.GetError());
    }
    else
    {
        return DeleteRedisBigKeyAnalysisTasksOutcome(outcome.GetError());
    }
}

void DbbrainClient::DeleteRedisBigKeyAnalysisTasksAsync(const DeleteRedisBigKeyAnalysisTasksRequest& request, const DeleteRedisBigKeyAnalysisTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRedisBigKeyAnalysisTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DeleteRedisBigKeyAnalysisTasksOutcomeCallable DbbrainClient::DeleteRedisBigKeyAnalysisTasksCallable(const DeleteRedisBigKeyAnalysisTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRedisBigKeyAnalysisTasksOutcome()>>(
        [this, request]()
        {
            return this->DeleteRedisBigKeyAnalysisTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DeleteSecurityAuditLogExportTasksOutcome DbbrainClient::DeleteSecurityAuditLogExportTasks(const DeleteSecurityAuditLogExportTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSecurityAuditLogExportTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSecurityAuditLogExportTasksResponse rsp = DeleteSecurityAuditLogExportTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSecurityAuditLogExportTasksOutcome(rsp);
        else
            return DeleteSecurityAuditLogExportTasksOutcome(o.GetError());
    }
    else
    {
        return DeleteSecurityAuditLogExportTasksOutcome(outcome.GetError());
    }
}

void DbbrainClient::DeleteSecurityAuditLogExportTasksAsync(const DeleteSecurityAuditLogExportTasksRequest& request, const DeleteSecurityAuditLogExportTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteSecurityAuditLogExportTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DeleteSecurityAuditLogExportTasksOutcomeCallable DbbrainClient::DeleteSecurityAuditLogExportTasksCallable(const DeleteSecurityAuditLogExportTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteSecurityAuditLogExportTasksOutcome()>>(
        [this, request]()
        {
            return this->DeleteSecurityAuditLogExportTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DeleteSqlFiltersOutcome DbbrainClient::DeleteSqlFilters(const DeleteSqlFiltersRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSqlFilters");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSqlFiltersResponse rsp = DeleteSqlFiltersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSqlFiltersOutcome(rsp);
        else
            return DeleteSqlFiltersOutcome(o.GetError());
    }
    else
    {
        return DeleteSqlFiltersOutcome(outcome.GetError());
    }
}

void DbbrainClient::DeleteSqlFiltersAsync(const DeleteSqlFiltersRequest& request, const DeleteSqlFiltersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteSqlFilters(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DeleteSqlFiltersOutcomeCallable DbbrainClient::DeleteSqlFiltersCallable(const DeleteSqlFiltersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteSqlFiltersOutcome()>>(
        [this, request]()
        {
            return this->DeleteSqlFilters(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeAlarmTemplateOutcome DbbrainClient::DescribeAlarmTemplate(const DescribeAlarmTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAlarmTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAlarmTemplateResponse rsp = DescribeAlarmTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAlarmTemplateOutcome(rsp);
        else
            return DescribeAlarmTemplateOutcome(o.GetError());
    }
    else
    {
        return DescribeAlarmTemplateOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeAlarmTemplateAsync(const DescribeAlarmTemplateRequest& request, const DescribeAlarmTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAlarmTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeAlarmTemplateOutcomeCallable DbbrainClient::DescribeAlarmTemplateCallable(const DescribeAlarmTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAlarmTemplateOutcome()>>(
        [this, request]()
        {
            return this->DescribeAlarmTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeAllUserContactOutcome DbbrainClient::DescribeAllUserContact(const DescribeAllUserContactRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAllUserContact");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAllUserContactResponse rsp = DescribeAllUserContactResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAllUserContactOutcome(rsp);
        else
            return DescribeAllUserContactOutcome(o.GetError());
    }
    else
    {
        return DescribeAllUserContactOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeAllUserContactAsync(const DescribeAllUserContactRequest& request, const DescribeAllUserContactAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAllUserContact(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeAllUserContactOutcomeCallable DbbrainClient::DescribeAllUserContactCallable(const DescribeAllUserContactRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAllUserContactOutcome()>>(
        [this, request]()
        {
            return this->DescribeAllUserContact(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeAllUserGroupOutcome DbbrainClient::DescribeAllUserGroup(const DescribeAllUserGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAllUserGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAllUserGroupResponse rsp = DescribeAllUserGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAllUserGroupOutcome(rsp);
        else
            return DescribeAllUserGroupOutcome(o.GetError());
    }
    else
    {
        return DescribeAllUserGroupOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeAllUserGroupAsync(const DescribeAllUserGroupRequest& request, const DescribeAllUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAllUserGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeAllUserGroupOutcomeCallable DbbrainClient::DescribeAllUserGroupCallable(const DescribeAllUserGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAllUserGroupOutcome()>>(
        [this, request]()
        {
            return this->DescribeAllUserGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeAuditInstanceListOutcome DbbrainClient::DescribeAuditInstanceList(const DescribeAuditInstanceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAuditInstanceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAuditInstanceListResponse rsp = DescribeAuditInstanceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAuditInstanceListOutcome(rsp);
        else
            return DescribeAuditInstanceListOutcome(o.GetError());
    }
    else
    {
        return DescribeAuditInstanceListOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeAuditInstanceListAsync(const DescribeAuditInstanceListRequest& request, const DescribeAuditInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAuditInstanceList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeAuditInstanceListOutcomeCallable DbbrainClient::DescribeAuditInstanceListCallable(const DescribeAuditInstanceListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAuditInstanceListOutcome()>>(
        [this, request]()
        {
            return this->DescribeAuditInstanceList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeAuditLogFilesOutcome DbbrainClient::DescribeAuditLogFiles(const DescribeAuditLogFilesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAuditLogFiles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAuditLogFilesResponse rsp = DescribeAuditLogFilesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAuditLogFilesOutcome(rsp);
        else
            return DescribeAuditLogFilesOutcome(o.GetError());
    }
    else
    {
        return DescribeAuditLogFilesOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeAuditLogFilesAsync(const DescribeAuditLogFilesRequest& request, const DescribeAuditLogFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAuditLogFiles(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeAuditLogFilesOutcomeCallable DbbrainClient::DescribeAuditLogFilesCallable(const DescribeAuditLogFilesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAuditLogFilesOutcome()>>(
        [this, request]()
        {
            return this->DescribeAuditLogFiles(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeDBAutonomyActionOutcome DbbrainClient::DescribeDBAutonomyAction(const DescribeDBAutonomyActionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBAutonomyAction");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBAutonomyActionResponse rsp = DescribeDBAutonomyActionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBAutonomyActionOutcome(rsp);
        else
            return DescribeDBAutonomyActionOutcome(o.GetError());
    }
    else
    {
        return DescribeDBAutonomyActionOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeDBAutonomyActionAsync(const DescribeDBAutonomyActionRequest& request, const DescribeDBAutonomyActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBAutonomyAction(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeDBAutonomyActionOutcomeCallable DbbrainClient::DescribeDBAutonomyActionCallable(const DescribeDBAutonomyActionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDBAutonomyActionOutcome()>>(
        [this, request]()
        {
            return this->DescribeDBAutonomyAction(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeDBAutonomyActionsOutcome DbbrainClient::DescribeDBAutonomyActions(const DescribeDBAutonomyActionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBAutonomyActions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBAutonomyActionsResponse rsp = DescribeDBAutonomyActionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBAutonomyActionsOutcome(rsp);
        else
            return DescribeDBAutonomyActionsOutcome(o.GetError());
    }
    else
    {
        return DescribeDBAutonomyActionsOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeDBAutonomyActionsAsync(const DescribeDBAutonomyActionsRequest& request, const DescribeDBAutonomyActionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBAutonomyActions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeDBAutonomyActionsOutcomeCallable DbbrainClient::DescribeDBAutonomyActionsCallable(const DescribeDBAutonomyActionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDBAutonomyActionsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDBAutonomyActions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeDBAutonomyEventsOutcome DbbrainClient::DescribeDBAutonomyEvents(const DescribeDBAutonomyEventsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBAutonomyEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBAutonomyEventsResponse rsp = DescribeDBAutonomyEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBAutonomyEventsOutcome(rsp);
        else
            return DescribeDBAutonomyEventsOutcome(o.GetError());
    }
    else
    {
        return DescribeDBAutonomyEventsOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeDBAutonomyEventsAsync(const DescribeDBAutonomyEventsRequest& request, const DescribeDBAutonomyEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBAutonomyEvents(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeDBAutonomyEventsOutcomeCallable DbbrainClient::DescribeDBAutonomyEventsCallable(const DescribeDBAutonomyEventsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDBAutonomyEventsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDBAutonomyEvents(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeDBDiagEventOutcome DbbrainClient::DescribeDBDiagEvent(const DescribeDBDiagEventRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBDiagEvent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBDiagEventResponse rsp = DescribeDBDiagEventResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBDiagEventOutcome(rsp);
        else
            return DescribeDBDiagEventOutcome(o.GetError());
    }
    else
    {
        return DescribeDBDiagEventOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeDBDiagEventAsync(const DescribeDBDiagEventRequest& request, const DescribeDBDiagEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBDiagEvent(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeDBDiagEventOutcomeCallable DbbrainClient::DescribeDBDiagEventCallable(const DescribeDBDiagEventRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDBDiagEventOutcome()>>(
        [this, request]()
        {
            return this->DescribeDBDiagEvent(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeDBDiagEventsOutcome DbbrainClient::DescribeDBDiagEvents(const DescribeDBDiagEventsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBDiagEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBDiagEventsResponse rsp = DescribeDBDiagEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBDiagEventsOutcome(rsp);
        else
            return DescribeDBDiagEventsOutcome(o.GetError());
    }
    else
    {
        return DescribeDBDiagEventsOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeDBDiagEventsAsync(const DescribeDBDiagEventsRequest& request, const DescribeDBDiagEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBDiagEvents(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeDBDiagEventsOutcomeCallable DbbrainClient::DescribeDBDiagEventsCallable(const DescribeDBDiagEventsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDBDiagEventsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDBDiagEvents(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeDBDiagHistoryOutcome DbbrainClient::DescribeDBDiagHistory(const DescribeDBDiagHistoryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBDiagHistory");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBDiagHistoryResponse rsp = DescribeDBDiagHistoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBDiagHistoryOutcome(rsp);
        else
            return DescribeDBDiagHistoryOutcome(o.GetError());
    }
    else
    {
        return DescribeDBDiagHistoryOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeDBDiagHistoryAsync(const DescribeDBDiagHistoryRequest& request, const DescribeDBDiagHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBDiagHistory(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeDBDiagHistoryOutcomeCallable DbbrainClient::DescribeDBDiagHistoryCallable(const DescribeDBDiagHistoryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDBDiagHistoryOutcome()>>(
        [this, request]()
        {
            return this->DescribeDBDiagHistory(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeDBDiagReportContentOutcome DbbrainClient::DescribeDBDiagReportContent(const DescribeDBDiagReportContentRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBDiagReportContent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBDiagReportContentResponse rsp = DescribeDBDiagReportContentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBDiagReportContentOutcome(rsp);
        else
            return DescribeDBDiagReportContentOutcome(o.GetError());
    }
    else
    {
        return DescribeDBDiagReportContentOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeDBDiagReportContentAsync(const DescribeDBDiagReportContentRequest& request, const DescribeDBDiagReportContentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBDiagReportContent(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeDBDiagReportContentOutcomeCallable DbbrainClient::DescribeDBDiagReportContentCallable(const DescribeDBDiagReportContentRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDBDiagReportContentOutcome()>>(
        [this, request]()
        {
            return this->DescribeDBDiagReportContent(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeDBDiagReportTasksOutcome DbbrainClient::DescribeDBDiagReportTasks(const DescribeDBDiagReportTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBDiagReportTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBDiagReportTasksResponse rsp = DescribeDBDiagReportTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBDiagReportTasksOutcome(rsp);
        else
            return DescribeDBDiagReportTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeDBDiagReportTasksOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeDBDiagReportTasksAsync(const DescribeDBDiagReportTasksRequest& request, const DescribeDBDiagReportTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBDiagReportTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeDBDiagReportTasksOutcomeCallable DbbrainClient::DescribeDBDiagReportTasksCallable(const DescribeDBDiagReportTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDBDiagReportTasksOutcome()>>(
        [this, request]()
        {
            return this->DescribeDBDiagReportTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeDBPerfTimeSeriesOutcome DbbrainClient::DescribeDBPerfTimeSeries(const DescribeDBPerfTimeSeriesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBPerfTimeSeries");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBPerfTimeSeriesResponse rsp = DescribeDBPerfTimeSeriesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBPerfTimeSeriesOutcome(rsp);
        else
            return DescribeDBPerfTimeSeriesOutcome(o.GetError());
    }
    else
    {
        return DescribeDBPerfTimeSeriesOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeDBPerfTimeSeriesAsync(const DescribeDBPerfTimeSeriesRequest& request, const DescribeDBPerfTimeSeriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBPerfTimeSeries(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeDBPerfTimeSeriesOutcomeCallable DbbrainClient::DescribeDBPerfTimeSeriesCallable(const DescribeDBPerfTimeSeriesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDBPerfTimeSeriesOutcome()>>(
        [this, request]()
        {
            return this->DescribeDBPerfTimeSeries(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeDBSpaceStatusOutcome DbbrainClient::DescribeDBSpaceStatus(const DescribeDBSpaceStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBSpaceStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBSpaceStatusResponse rsp = DescribeDBSpaceStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBSpaceStatusOutcome(rsp);
        else
            return DescribeDBSpaceStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeDBSpaceStatusOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeDBSpaceStatusAsync(const DescribeDBSpaceStatusRequest& request, const DescribeDBSpaceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBSpaceStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeDBSpaceStatusOutcomeCallable DbbrainClient::DescribeDBSpaceStatusCallable(const DescribeDBSpaceStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDBSpaceStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeDBSpaceStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeDiagDBInstancesOutcome DbbrainClient::DescribeDiagDBInstances(const DescribeDiagDBInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDiagDBInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDiagDBInstancesResponse rsp = DescribeDiagDBInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDiagDBInstancesOutcome(rsp);
        else
            return DescribeDiagDBInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeDiagDBInstancesOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeDiagDBInstancesAsync(const DescribeDiagDBInstancesRequest& request, const DescribeDiagDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDiagDBInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeDiagDBInstancesOutcomeCallable DbbrainClient::DescribeDiagDBInstancesCallable(const DescribeDiagDBInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDiagDBInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeDiagDBInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeHealthScoreOutcome DbbrainClient::DescribeHealthScore(const DescribeHealthScoreRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHealthScore");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHealthScoreResponse rsp = DescribeHealthScoreResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHealthScoreOutcome(rsp);
        else
            return DescribeHealthScoreOutcome(o.GetError());
    }
    else
    {
        return DescribeHealthScoreOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeHealthScoreAsync(const DescribeHealthScoreRequest& request, const DescribeHealthScoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeHealthScore(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeHealthScoreOutcomeCallable DbbrainClient::DescribeHealthScoreCallable(const DescribeHealthScoreRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeHealthScoreOutcome()>>(
        [this, request]()
        {
            return this->DescribeHealthScore(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeIndexRecommendAggregationSlowLogsOutcome DbbrainClient::DescribeIndexRecommendAggregationSlowLogs(const DescribeIndexRecommendAggregationSlowLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIndexRecommendAggregationSlowLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIndexRecommendAggregationSlowLogsResponse rsp = DescribeIndexRecommendAggregationSlowLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIndexRecommendAggregationSlowLogsOutcome(rsp);
        else
            return DescribeIndexRecommendAggregationSlowLogsOutcome(o.GetError());
    }
    else
    {
        return DescribeIndexRecommendAggregationSlowLogsOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeIndexRecommendAggregationSlowLogsAsync(const DescribeIndexRecommendAggregationSlowLogsRequest& request, const DescribeIndexRecommendAggregationSlowLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeIndexRecommendAggregationSlowLogs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeIndexRecommendAggregationSlowLogsOutcomeCallable DbbrainClient::DescribeIndexRecommendAggregationSlowLogsCallable(const DescribeIndexRecommendAggregationSlowLogsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeIndexRecommendAggregationSlowLogsOutcome()>>(
        [this, request]()
        {
            return this->DescribeIndexRecommendAggregationSlowLogs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeIndexRecommendInfoOutcome DbbrainClient::DescribeIndexRecommendInfo(const DescribeIndexRecommendInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIndexRecommendInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIndexRecommendInfoResponse rsp = DescribeIndexRecommendInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIndexRecommendInfoOutcome(rsp);
        else
            return DescribeIndexRecommendInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeIndexRecommendInfoOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeIndexRecommendInfoAsync(const DescribeIndexRecommendInfoRequest& request, const DescribeIndexRecommendInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeIndexRecommendInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeIndexRecommendInfoOutcomeCallable DbbrainClient::DescribeIndexRecommendInfoCallable(const DescribeIndexRecommendInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeIndexRecommendInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeIndexRecommendInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeMailProfileOutcome DbbrainClient::DescribeMailProfile(const DescribeMailProfileRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMailProfile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMailProfileResponse rsp = DescribeMailProfileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMailProfileOutcome(rsp);
        else
            return DescribeMailProfileOutcome(o.GetError());
    }
    else
    {
        return DescribeMailProfileOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeMailProfileAsync(const DescribeMailProfileRequest& request, const DescribeMailProfileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMailProfile(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeMailProfileOutcomeCallable DbbrainClient::DescribeMailProfileCallable(const DescribeMailProfileRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMailProfileOutcome()>>(
        [this, request]()
        {
            return this->DescribeMailProfile(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeMySqlProcessListOutcome DbbrainClient::DescribeMySqlProcessList(const DescribeMySqlProcessListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMySqlProcessList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMySqlProcessListResponse rsp = DescribeMySqlProcessListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMySqlProcessListOutcome(rsp);
        else
            return DescribeMySqlProcessListOutcome(o.GetError());
    }
    else
    {
        return DescribeMySqlProcessListOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeMySqlProcessListAsync(const DescribeMySqlProcessListRequest& request, const DescribeMySqlProcessListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMySqlProcessList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeMySqlProcessListOutcomeCallable DbbrainClient::DescribeMySqlProcessListCallable(const DescribeMySqlProcessListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMySqlProcessListOutcome()>>(
        [this, request]()
        {
            return this->DescribeMySqlProcessList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeNoPrimaryKeyTablesOutcome DbbrainClient::DescribeNoPrimaryKeyTables(const DescribeNoPrimaryKeyTablesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNoPrimaryKeyTables");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNoPrimaryKeyTablesResponse rsp = DescribeNoPrimaryKeyTablesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNoPrimaryKeyTablesOutcome(rsp);
        else
            return DescribeNoPrimaryKeyTablesOutcome(o.GetError());
    }
    else
    {
        return DescribeNoPrimaryKeyTablesOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeNoPrimaryKeyTablesAsync(const DescribeNoPrimaryKeyTablesRequest& request, const DescribeNoPrimaryKeyTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNoPrimaryKeyTables(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeNoPrimaryKeyTablesOutcomeCallable DbbrainClient::DescribeNoPrimaryKeyTablesCallable(const DescribeNoPrimaryKeyTablesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNoPrimaryKeyTablesOutcome()>>(
        [this, request]()
        {
            return this->DescribeNoPrimaryKeyTables(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeProxyProcessStatisticsOutcome DbbrainClient::DescribeProxyProcessStatistics(const DescribeProxyProcessStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProxyProcessStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProxyProcessStatisticsResponse rsp = DescribeProxyProcessStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProxyProcessStatisticsOutcome(rsp);
        else
            return DescribeProxyProcessStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeProxyProcessStatisticsOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeProxyProcessStatisticsAsync(const DescribeProxyProcessStatisticsRequest& request, const DescribeProxyProcessStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProxyProcessStatistics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeProxyProcessStatisticsOutcomeCallable DbbrainClient::DescribeProxyProcessStatisticsCallable(const DescribeProxyProcessStatisticsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProxyProcessStatisticsOutcome()>>(
        [this, request]()
        {
            return this->DescribeProxyProcessStatistics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeProxySessionKillTasksOutcome DbbrainClient::DescribeProxySessionKillTasks(const DescribeProxySessionKillTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProxySessionKillTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProxySessionKillTasksResponse rsp = DescribeProxySessionKillTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProxySessionKillTasksOutcome(rsp);
        else
            return DescribeProxySessionKillTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeProxySessionKillTasksOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeProxySessionKillTasksAsync(const DescribeProxySessionKillTasksRequest& request, const DescribeProxySessionKillTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProxySessionKillTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeProxySessionKillTasksOutcomeCallable DbbrainClient::DescribeProxySessionKillTasksCallable(const DescribeProxySessionKillTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProxySessionKillTasksOutcome()>>(
        [this, request]()
        {
            return this->DescribeProxySessionKillTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeRedisBigKeyAnalysisTasksOutcome DbbrainClient::DescribeRedisBigKeyAnalysisTasks(const DescribeRedisBigKeyAnalysisTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRedisBigKeyAnalysisTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRedisBigKeyAnalysisTasksResponse rsp = DescribeRedisBigKeyAnalysisTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRedisBigKeyAnalysisTasksOutcome(rsp);
        else
            return DescribeRedisBigKeyAnalysisTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeRedisBigKeyAnalysisTasksOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeRedisBigKeyAnalysisTasksAsync(const DescribeRedisBigKeyAnalysisTasksRequest& request, const DescribeRedisBigKeyAnalysisTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRedisBigKeyAnalysisTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeRedisBigKeyAnalysisTasksOutcomeCallable DbbrainClient::DescribeRedisBigKeyAnalysisTasksCallable(const DescribeRedisBigKeyAnalysisTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRedisBigKeyAnalysisTasksOutcome()>>(
        [this, request]()
        {
            return this->DescribeRedisBigKeyAnalysisTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeRedisCmdPerfTimeSeriesOutcome DbbrainClient::DescribeRedisCmdPerfTimeSeries(const DescribeRedisCmdPerfTimeSeriesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRedisCmdPerfTimeSeries");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRedisCmdPerfTimeSeriesResponse rsp = DescribeRedisCmdPerfTimeSeriesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRedisCmdPerfTimeSeriesOutcome(rsp);
        else
            return DescribeRedisCmdPerfTimeSeriesOutcome(o.GetError());
    }
    else
    {
        return DescribeRedisCmdPerfTimeSeriesOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeRedisCmdPerfTimeSeriesAsync(const DescribeRedisCmdPerfTimeSeriesRequest& request, const DescribeRedisCmdPerfTimeSeriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRedisCmdPerfTimeSeries(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeRedisCmdPerfTimeSeriesOutcomeCallable DbbrainClient::DescribeRedisCmdPerfTimeSeriesCallable(const DescribeRedisCmdPerfTimeSeriesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRedisCmdPerfTimeSeriesOutcome()>>(
        [this, request]()
        {
            return this->DescribeRedisCmdPerfTimeSeries(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeRedisCommandCostStatisticsOutcome DbbrainClient::DescribeRedisCommandCostStatistics(const DescribeRedisCommandCostStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRedisCommandCostStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRedisCommandCostStatisticsResponse rsp = DescribeRedisCommandCostStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRedisCommandCostStatisticsOutcome(rsp);
        else
            return DescribeRedisCommandCostStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeRedisCommandCostStatisticsOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeRedisCommandCostStatisticsAsync(const DescribeRedisCommandCostStatisticsRequest& request, const DescribeRedisCommandCostStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRedisCommandCostStatistics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeRedisCommandCostStatisticsOutcomeCallable DbbrainClient::DescribeRedisCommandCostStatisticsCallable(const DescribeRedisCommandCostStatisticsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRedisCommandCostStatisticsOutcome()>>(
        [this, request]()
        {
            return this->DescribeRedisCommandCostStatistics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeRedisCommandOverviewOutcome DbbrainClient::DescribeRedisCommandOverview(const DescribeRedisCommandOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRedisCommandOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRedisCommandOverviewResponse rsp = DescribeRedisCommandOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRedisCommandOverviewOutcome(rsp);
        else
            return DescribeRedisCommandOverviewOutcome(o.GetError());
    }
    else
    {
        return DescribeRedisCommandOverviewOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeRedisCommandOverviewAsync(const DescribeRedisCommandOverviewRequest& request, const DescribeRedisCommandOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRedisCommandOverview(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeRedisCommandOverviewOutcomeCallable DbbrainClient::DescribeRedisCommandOverviewCallable(const DescribeRedisCommandOverviewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRedisCommandOverviewOutcome()>>(
        [this, request]()
        {
            return this->DescribeRedisCommandOverview(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeRedisProcessListOutcome DbbrainClient::DescribeRedisProcessList(const DescribeRedisProcessListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRedisProcessList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRedisProcessListResponse rsp = DescribeRedisProcessListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRedisProcessListOutcome(rsp);
        else
            return DescribeRedisProcessListOutcome(o.GetError());
    }
    else
    {
        return DescribeRedisProcessListOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeRedisProcessListAsync(const DescribeRedisProcessListRequest& request, const DescribeRedisProcessListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRedisProcessList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeRedisProcessListOutcomeCallable DbbrainClient::DescribeRedisProcessListCallable(const DescribeRedisProcessListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRedisProcessListOutcome()>>(
        [this, request]()
        {
            return this->DescribeRedisProcessList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeRedisSlowLogTopSqlsOutcome DbbrainClient::DescribeRedisSlowLogTopSqls(const DescribeRedisSlowLogTopSqlsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRedisSlowLogTopSqls");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRedisSlowLogTopSqlsResponse rsp = DescribeRedisSlowLogTopSqlsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRedisSlowLogTopSqlsOutcome(rsp);
        else
            return DescribeRedisSlowLogTopSqlsOutcome(o.GetError());
    }
    else
    {
        return DescribeRedisSlowLogTopSqlsOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeRedisSlowLogTopSqlsAsync(const DescribeRedisSlowLogTopSqlsRequest& request, const DescribeRedisSlowLogTopSqlsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRedisSlowLogTopSqls(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeRedisSlowLogTopSqlsOutcomeCallable DbbrainClient::DescribeRedisSlowLogTopSqlsCallable(const DescribeRedisSlowLogTopSqlsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRedisSlowLogTopSqlsOutcome()>>(
        [this, request]()
        {
            return this->DescribeRedisSlowLogTopSqls(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeRedisTopBigKeysOutcome DbbrainClient::DescribeRedisTopBigKeys(const DescribeRedisTopBigKeysRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRedisTopBigKeys");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRedisTopBigKeysResponse rsp = DescribeRedisTopBigKeysResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRedisTopBigKeysOutcome(rsp);
        else
            return DescribeRedisTopBigKeysOutcome(o.GetError());
    }
    else
    {
        return DescribeRedisTopBigKeysOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeRedisTopBigKeysAsync(const DescribeRedisTopBigKeysRequest& request, const DescribeRedisTopBigKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRedisTopBigKeys(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeRedisTopBigKeysOutcomeCallable DbbrainClient::DescribeRedisTopBigKeysCallable(const DescribeRedisTopBigKeysRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRedisTopBigKeysOutcome()>>(
        [this, request]()
        {
            return this->DescribeRedisTopBigKeys(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeRedisTopHotKeysOutcome DbbrainClient::DescribeRedisTopHotKeys(const DescribeRedisTopHotKeysRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRedisTopHotKeys");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRedisTopHotKeysResponse rsp = DescribeRedisTopHotKeysResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRedisTopHotKeysOutcome(rsp);
        else
            return DescribeRedisTopHotKeysOutcome(o.GetError());
    }
    else
    {
        return DescribeRedisTopHotKeysOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeRedisTopHotKeysAsync(const DescribeRedisTopHotKeysRequest& request, const DescribeRedisTopHotKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRedisTopHotKeys(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeRedisTopHotKeysOutcomeCallable DbbrainClient::DescribeRedisTopHotKeysCallable(const DescribeRedisTopHotKeysRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRedisTopHotKeysOutcome()>>(
        [this, request]()
        {
            return this->DescribeRedisTopHotKeys(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeRedisTopKeyPrefixListOutcome DbbrainClient::DescribeRedisTopKeyPrefixList(const DescribeRedisTopKeyPrefixListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRedisTopKeyPrefixList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRedisTopKeyPrefixListResponse rsp = DescribeRedisTopKeyPrefixListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRedisTopKeyPrefixListOutcome(rsp);
        else
            return DescribeRedisTopKeyPrefixListOutcome(o.GetError());
    }
    else
    {
        return DescribeRedisTopKeyPrefixListOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeRedisTopKeyPrefixListAsync(const DescribeRedisTopKeyPrefixListRequest& request, const DescribeRedisTopKeyPrefixListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRedisTopKeyPrefixList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeRedisTopKeyPrefixListOutcomeCallable DbbrainClient::DescribeRedisTopKeyPrefixListCallable(const DescribeRedisTopKeyPrefixListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRedisTopKeyPrefixListOutcome()>>(
        [this, request]()
        {
            return this->DescribeRedisTopKeyPrefixList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeSecurityAuditLogDownloadUrlsOutcome DbbrainClient::DescribeSecurityAuditLogDownloadUrls(const DescribeSecurityAuditLogDownloadUrlsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecurityAuditLogDownloadUrls");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecurityAuditLogDownloadUrlsResponse rsp = DescribeSecurityAuditLogDownloadUrlsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecurityAuditLogDownloadUrlsOutcome(rsp);
        else
            return DescribeSecurityAuditLogDownloadUrlsOutcome(o.GetError());
    }
    else
    {
        return DescribeSecurityAuditLogDownloadUrlsOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeSecurityAuditLogDownloadUrlsAsync(const DescribeSecurityAuditLogDownloadUrlsRequest& request, const DescribeSecurityAuditLogDownloadUrlsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSecurityAuditLogDownloadUrls(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeSecurityAuditLogDownloadUrlsOutcomeCallable DbbrainClient::DescribeSecurityAuditLogDownloadUrlsCallable(const DescribeSecurityAuditLogDownloadUrlsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSecurityAuditLogDownloadUrlsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSecurityAuditLogDownloadUrls(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeSecurityAuditLogExportTasksOutcome DbbrainClient::DescribeSecurityAuditLogExportTasks(const DescribeSecurityAuditLogExportTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecurityAuditLogExportTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecurityAuditLogExportTasksResponse rsp = DescribeSecurityAuditLogExportTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecurityAuditLogExportTasksOutcome(rsp);
        else
            return DescribeSecurityAuditLogExportTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeSecurityAuditLogExportTasksOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeSecurityAuditLogExportTasksAsync(const DescribeSecurityAuditLogExportTasksRequest& request, const DescribeSecurityAuditLogExportTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSecurityAuditLogExportTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeSecurityAuditLogExportTasksOutcomeCallable DbbrainClient::DescribeSecurityAuditLogExportTasksCallable(const DescribeSecurityAuditLogExportTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSecurityAuditLogExportTasksOutcome()>>(
        [this, request]()
        {
            return this->DescribeSecurityAuditLogExportTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeSlowLogQueryTimeStatsOutcome DbbrainClient::DescribeSlowLogQueryTimeStats(const DescribeSlowLogQueryTimeStatsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSlowLogQueryTimeStats");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSlowLogQueryTimeStatsResponse rsp = DescribeSlowLogQueryTimeStatsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSlowLogQueryTimeStatsOutcome(rsp);
        else
            return DescribeSlowLogQueryTimeStatsOutcome(o.GetError());
    }
    else
    {
        return DescribeSlowLogQueryTimeStatsOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeSlowLogQueryTimeStatsAsync(const DescribeSlowLogQueryTimeStatsRequest& request, const DescribeSlowLogQueryTimeStatsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSlowLogQueryTimeStats(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeSlowLogQueryTimeStatsOutcomeCallable DbbrainClient::DescribeSlowLogQueryTimeStatsCallable(const DescribeSlowLogQueryTimeStatsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSlowLogQueryTimeStatsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSlowLogQueryTimeStats(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeSlowLogTimeSeriesStatsOutcome DbbrainClient::DescribeSlowLogTimeSeriesStats(const DescribeSlowLogTimeSeriesStatsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSlowLogTimeSeriesStats");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSlowLogTimeSeriesStatsResponse rsp = DescribeSlowLogTimeSeriesStatsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSlowLogTimeSeriesStatsOutcome(rsp);
        else
            return DescribeSlowLogTimeSeriesStatsOutcome(o.GetError());
    }
    else
    {
        return DescribeSlowLogTimeSeriesStatsOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeSlowLogTimeSeriesStatsAsync(const DescribeSlowLogTimeSeriesStatsRequest& request, const DescribeSlowLogTimeSeriesStatsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSlowLogTimeSeriesStats(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeSlowLogTimeSeriesStatsOutcomeCallable DbbrainClient::DescribeSlowLogTimeSeriesStatsCallable(const DescribeSlowLogTimeSeriesStatsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSlowLogTimeSeriesStatsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSlowLogTimeSeriesStats(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeSlowLogTopSqlsOutcome DbbrainClient::DescribeSlowLogTopSqls(const DescribeSlowLogTopSqlsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSlowLogTopSqls");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSlowLogTopSqlsResponse rsp = DescribeSlowLogTopSqlsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSlowLogTopSqlsOutcome(rsp);
        else
            return DescribeSlowLogTopSqlsOutcome(o.GetError());
    }
    else
    {
        return DescribeSlowLogTopSqlsOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeSlowLogTopSqlsAsync(const DescribeSlowLogTopSqlsRequest& request, const DescribeSlowLogTopSqlsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSlowLogTopSqls(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeSlowLogTopSqlsOutcomeCallable DbbrainClient::DescribeSlowLogTopSqlsCallable(const DescribeSlowLogTopSqlsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSlowLogTopSqlsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSlowLogTopSqls(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeSlowLogUserHostStatsOutcome DbbrainClient::DescribeSlowLogUserHostStats(const DescribeSlowLogUserHostStatsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSlowLogUserHostStats");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSlowLogUserHostStatsResponse rsp = DescribeSlowLogUserHostStatsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSlowLogUserHostStatsOutcome(rsp);
        else
            return DescribeSlowLogUserHostStatsOutcome(o.GetError());
    }
    else
    {
        return DescribeSlowLogUserHostStatsOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeSlowLogUserHostStatsAsync(const DescribeSlowLogUserHostStatsRequest& request, const DescribeSlowLogUserHostStatsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSlowLogUserHostStats(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeSlowLogUserHostStatsOutcomeCallable DbbrainClient::DescribeSlowLogUserHostStatsCallable(const DescribeSlowLogUserHostStatsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSlowLogUserHostStatsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSlowLogUserHostStats(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeSlowLogsOutcome DbbrainClient::DescribeSlowLogs(const DescribeSlowLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSlowLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSlowLogsResponse rsp = DescribeSlowLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSlowLogsOutcome(rsp);
        else
            return DescribeSlowLogsOutcome(o.GetError());
    }
    else
    {
        return DescribeSlowLogsOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeSlowLogsAsync(const DescribeSlowLogsRequest& request, const DescribeSlowLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSlowLogs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeSlowLogsOutcomeCallable DbbrainClient::DescribeSlowLogsCallable(const DescribeSlowLogsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSlowLogsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSlowLogs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeSqlFiltersOutcome DbbrainClient::DescribeSqlFilters(const DescribeSqlFiltersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSqlFilters");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSqlFiltersResponse rsp = DescribeSqlFiltersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSqlFiltersOutcome(rsp);
        else
            return DescribeSqlFiltersOutcome(o.GetError());
    }
    else
    {
        return DescribeSqlFiltersOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeSqlFiltersAsync(const DescribeSqlFiltersRequest& request, const DescribeSqlFiltersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSqlFilters(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeSqlFiltersOutcomeCallable DbbrainClient::DescribeSqlFiltersCallable(const DescribeSqlFiltersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSqlFiltersOutcome()>>(
        [this, request]()
        {
            return this->DescribeSqlFilters(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeSqlTemplateOutcome DbbrainClient::DescribeSqlTemplate(const DescribeSqlTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSqlTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSqlTemplateResponse rsp = DescribeSqlTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSqlTemplateOutcome(rsp);
        else
            return DescribeSqlTemplateOutcome(o.GetError());
    }
    else
    {
        return DescribeSqlTemplateOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeSqlTemplateAsync(const DescribeSqlTemplateRequest& request, const DescribeSqlTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSqlTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeSqlTemplateOutcomeCallable DbbrainClient::DescribeSqlTemplateCallable(const DescribeSqlTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSqlTemplateOutcome()>>(
        [this, request]()
        {
            return this->DescribeSqlTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeTopSpaceSchemaTimeSeriesOutcome DbbrainClient::DescribeTopSpaceSchemaTimeSeries(const DescribeTopSpaceSchemaTimeSeriesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTopSpaceSchemaTimeSeries");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTopSpaceSchemaTimeSeriesResponse rsp = DescribeTopSpaceSchemaTimeSeriesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTopSpaceSchemaTimeSeriesOutcome(rsp);
        else
            return DescribeTopSpaceSchemaTimeSeriesOutcome(o.GetError());
    }
    else
    {
        return DescribeTopSpaceSchemaTimeSeriesOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeTopSpaceSchemaTimeSeriesAsync(const DescribeTopSpaceSchemaTimeSeriesRequest& request, const DescribeTopSpaceSchemaTimeSeriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTopSpaceSchemaTimeSeries(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeTopSpaceSchemaTimeSeriesOutcomeCallable DbbrainClient::DescribeTopSpaceSchemaTimeSeriesCallable(const DescribeTopSpaceSchemaTimeSeriesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTopSpaceSchemaTimeSeriesOutcome()>>(
        [this, request]()
        {
            return this->DescribeTopSpaceSchemaTimeSeries(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeTopSpaceSchemasOutcome DbbrainClient::DescribeTopSpaceSchemas(const DescribeTopSpaceSchemasRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTopSpaceSchemas");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTopSpaceSchemasResponse rsp = DescribeTopSpaceSchemasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTopSpaceSchemasOutcome(rsp);
        else
            return DescribeTopSpaceSchemasOutcome(o.GetError());
    }
    else
    {
        return DescribeTopSpaceSchemasOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeTopSpaceSchemasAsync(const DescribeTopSpaceSchemasRequest& request, const DescribeTopSpaceSchemasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTopSpaceSchemas(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeTopSpaceSchemasOutcomeCallable DbbrainClient::DescribeTopSpaceSchemasCallable(const DescribeTopSpaceSchemasRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTopSpaceSchemasOutcome()>>(
        [this, request]()
        {
            return this->DescribeTopSpaceSchemas(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeTopSpaceTableTimeSeriesOutcome DbbrainClient::DescribeTopSpaceTableTimeSeries(const DescribeTopSpaceTableTimeSeriesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTopSpaceTableTimeSeries");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTopSpaceTableTimeSeriesResponse rsp = DescribeTopSpaceTableTimeSeriesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTopSpaceTableTimeSeriesOutcome(rsp);
        else
            return DescribeTopSpaceTableTimeSeriesOutcome(o.GetError());
    }
    else
    {
        return DescribeTopSpaceTableTimeSeriesOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeTopSpaceTableTimeSeriesAsync(const DescribeTopSpaceTableTimeSeriesRequest& request, const DescribeTopSpaceTableTimeSeriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTopSpaceTableTimeSeries(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeTopSpaceTableTimeSeriesOutcomeCallable DbbrainClient::DescribeTopSpaceTableTimeSeriesCallable(const DescribeTopSpaceTableTimeSeriesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTopSpaceTableTimeSeriesOutcome()>>(
        [this, request]()
        {
            return this->DescribeTopSpaceTableTimeSeries(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeTopSpaceTablesOutcome DbbrainClient::DescribeTopSpaceTables(const DescribeTopSpaceTablesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTopSpaceTables");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTopSpaceTablesResponse rsp = DescribeTopSpaceTablesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTopSpaceTablesOutcome(rsp);
        else
            return DescribeTopSpaceTablesOutcome(o.GetError());
    }
    else
    {
        return DescribeTopSpaceTablesOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeTopSpaceTablesAsync(const DescribeTopSpaceTablesRequest& request, const DescribeTopSpaceTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTopSpaceTables(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeTopSpaceTablesOutcomeCallable DbbrainClient::DescribeTopSpaceTablesCallable(const DescribeTopSpaceTablesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTopSpaceTablesOutcome()>>(
        [this, request]()
        {
            return this->DescribeTopSpaceTables(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeUserAutonomyProfileOutcome DbbrainClient::DescribeUserAutonomyProfile(const DescribeUserAutonomyProfileRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserAutonomyProfile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserAutonomyProfileResponse rsp = DescribeUserAutonomyProfileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserAutonomyProfileOutcome(rsp);
        else
            return DescribeUserAutonomyProfileOutcome(o.GetError());
    }
    else
    {
        return DescribeUserAutonomyProfileOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeUserAutonomyProfileAsync(const DescribeUserAutonomyProfileRequest& request, const DescribeUserAutonomyProfileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUserAutonomyProfile(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeUserAutonomyProfileOutcomeCallable DbbrainClient::DescribeUserAutonomyProfileCallable(const DescribeUserAutonomyProfileRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUserAutonomyProfileOutcome()>>(
        [this, request]()
        {
            return this->DescribeUserAutonomyProfile(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeUserSqlAdviceOutcome DbbrainClient::DescribeUserSqlAdvice(const DescribeUserSqlAdviceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserSqlAdvice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserSqlAdviceResponse rsp = DescribeUserSqlAdviceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserSqlAdviceOutcome(rsp);
        else
            return DescribeUserSqlAdviceOutcome(o.GetError());
    }
    else
    {
        return DescribeUserSqlAdviceOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeUserSqlAdviceAsync(const DescribeUserSqlAdviceRequest& request, const DescribeUserSqlAdviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUserSqlAdvice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeUserSqlAdviceOutcomeCallable DbbrainClient::DescribeUserSqlAdviceCallable(const DescribeUserSqlAdviceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUserSqlAdviceOutcome()>>(
        [this, request]()
        {
            return this->DescribeUserSqlAdvice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::KillMySqlThreadsOutcome DbbrainClient::KillMySqlThreads(const KillMySqlThreadsRequest &request)
{
    auto outcome = MakeRequest(request, "KillMySqlThreads");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        KillMySqlThreadsResponse rsp = KillMySqlThreadsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return KillMySqlThreadsOutcome(rsp);
        else
            return KillMySqlThreadsOutcome(o.GetError());
    }
    else
    {
        return KillMySqlThreadsOutcome(outcome.GetError());
    }
}

void DbbrainClient::KillMySqlThreadsAsync(const KillMySqlThreadsRequest& request, const KillMySqlThreadsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->KillMySqlThreads(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::KillMySqlThreadsOutcomeCallable DbbrainClient::KillMySqlThreadsCallable(const KillMySqlThreadsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<KillMySqlThreadsOutcome()>>(
        [this, request]()
        {
            return this->KillMySqlThreads(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::ModifyAlarmPolicyOutcome DbbrainClient::ModifyAlarmPolicy(const ModifyAlarmPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAlarmPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAlarmPolicyResponse rsp = ModifyAlarmPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAlarmPolicyOutcome(rsp);
        else
            return ModifyAlarmPolicyOutcome(o.GetError());
    }
    else
    {
        return ModifyAlarmPolicyOutcome(outcome.GetError());
    }
}

void DbbrainClient::ModifyAlarmPolicyAsync(const ModifyAlarmPolicyRequest& request, const ModifyAlarmPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAlarmPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::ModifyAlarmPolicyOutcomeCallable DbbrainClient::ModifyAlarmPolicyCallable(const ModifyAlarmPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAlarmPolicyOutcome()>>(
        [this, request]()
        {
            return this->ModifyAlarmPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::ModifyAuditServiceOutcome DbbrainClient::ModifyAuditService(const ModifyAuditServiceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAuditService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAuditServiceResponse rsp = ModifyAuditServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAuditServiceOutcome(rsp);
        else
            return ModifyAuditServiceOutcome(o.GetError());
    }
    else
    {
        return ModifyAuditServiceOutcome(outcome.GetError());
    }
}

void DbbrainClient::ModifyAuditServiceAsync(const ModifyAuditServiceRequest& request, const ModifyAuditServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAuditService(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::ModifyAuditServiceOutcomeCallable DbbrainClient::ModifyAuditServiceCallable(const ModifyAuditServiceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAuditServiceOutcome()>>(
        [this, request]()
        {
            return this->ModifyAuditService(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::ModifyDiagDBInstanceConfOutcome DbbrainClient::ModifyDiagDBInstanceConf(const ModifyDiagDBInstanceConfRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDiagDBInstanceConf");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDiagDBInstanceConfResponse rsp = ModifyDiagDBInstanceConfResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDiagDBInstanceConfOutcome(rsp);
        else
            return ModifyDiagDBInstanceConfOutcome(o.GetError());
    }
    else
    {
        return ModifyDiagDBInstanceConfOutcome(outcome.GetError());
    }
}

void DbbrainClient::ModifyDiagDBInstanceConfAsync(const ModifyDiagDBInstanceConfRequest& request, const ModifyDiagDBInstanceConfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDiagDBInstanceConf(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::ModifyDiagDBInstanceConfOutcomeCallable DbbrainClient::ModifyDiagDBInstanceConfCallable(const ModifyDiagDBInstanceConfRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDiagDBInstanceConfOutcome()>>(
        [this, request]()
        {
            return this->ModifyDiagDBInstanceConf(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::ModifySqlFiltersOutcome DbbrainClient::ModifySqlFilters(const ModifySqlFiltersRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySqlFilters");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySqlFiltersResponse rsp = ModifySqlFiltersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySqlFiltersOutcome(rsp);
        else
            return ModifySqlFiltersOutcome(o.GetError());
    }
    else
    {
        return ModifySqlFiltersOutcome(outcome.GetError());
    }
}

void DbbrainClient::ModifySqlFiltersAsync(const ModifySqlFiltersRequest& request, const ModifySqlFiltersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySqlFilters(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::ModifySqlFiltersOutcomeCallable DbbrainClient::ModifySqlFiltersCallable(const ModifySqlFiltersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySqlFiltersOutcome()>>(
        [this, request]()
        {
            return this->ModifySqlFilters(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::ModifyUserAutonomyProfileOutcome DbbrainClient::ModifyUserAutonomyProfile(const ModifyUserAutonomyProfileRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyUserAutonomyProfile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyUserAutonomyProfileResponse rsp = ModifyUserAutonomyProfileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyUserAutonomyProfileOutcome(rsp);
        else
            return ModifyUserAutonomyProfileOutcome(o.GetError());
    }
    else
    {
        return ModifyUserAutonomyProfileOutcome(outcome.GetError());
    }
}

void DbbrainClient::ModifyUserAutonomyProfileAsync(const ModifyUserAutonomyProfileRequest& request, const ModifyUserAutonomyProfileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyUserAutonomyProfile(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::ModifyUserAutonomyProfileOutcomeCallable DbbrainClient::ModifyUserAutonomyProfileCallable(const ModifyUserAutonomyProfileRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyUserAutonomyProfileOutcome()>>(
        [this, request]()
        {
            return this->ModifyUserAutonomyProfile(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::OpenAuditServiceOutcome DbbrainClient::OpenAuditService(const OpenAuditServiceRequest &request)
{
    auto outcome = MakeRequest(request, "OpenAuditService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OpenAuditServiceResponse rsp = OpenAuditServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OpenAuditServiceOutcome(rsp);
        else
            return OpenAuditServiceOutcome(o.GetError());
    }
    else
    {
        return OpenAuditServiceOutcome(outcome.GetError());
    }
}

void DbbrainClient::OpenAuditServiceAsync(const OpenAuditServiceRequest& request, const OpenAuditServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->OpenAuditService(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::OpenAuditServiceOutcomeCallable DbbrainClient::OpenAuditServiceCallable(const OpenAuditServiceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<OpenAuditServiceOutcome()>>(
        [this, request]()
        {
            return this->OpenAuditService(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::UpdateAgentSwitchOutcome DbbrainClient::UpdateAgentSwitch(const UpdateAgentSwitchRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateAgentSwitch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateAgentSwitchResponse rsp = UpdateAgentSwitchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateAgentSwitchOutcome(rsp);
        else
            return UpdateAgentSwitchOutcome(o.GetError());
    }
    else
    {
        return UpdateAgentSwitchOutcome(outcome.GetError());
    }
}

void DbbrainClient::UpdateAgentSwitchAsync(const UpdateAgentSwitchRequest& request, const UpdateAgentSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateAgentSwitch(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::UpdateAgentSwitchOutcomeCallable DbbrainClient::UpdateAgentSwitchCallable(const UpdateAgentSwitchRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateAgentSwitchOutcome()>>(
        [this, request]()
        {
            return this->UpdateAgentSwitch(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::UpdateMonitorSwitchOutcome DbbrainClient::UpdateMonitorSwitch(const UpdateMonitorSwitchRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateMonitorSwitch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateMonitorSwitchResponse rsp = UpdateMonitorSwitchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateMonitorSwitchOutcome(rsp);
        else
            return UpdateMonitorSwitchOutcome(o.GetError());
    }
    else
    {
        return UpdateMonitorSwitchOutcome(outcome.GetError());
    }
}

void DbbrainClient::UpdateMonitorSwitchAsync(const UpdateMonitorSwitchRequest& request, const UpdateMonitorSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateMonitorSwitch(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::UpdateMonitorSwitchOutcomeCallable DbbrainClient::UpdateMonitorSwitchCallable(const UpdateMonitorSwitchRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateMonitorSwitchOutcome()>>(
        [this, request]()
        {
            return this->UpdateMonitorSwitch(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::VerifyUserAccountOutcome DbbrainClient::VerifyUserAccount(const VerifyUserAccountRequest &request)
{
    auto outcome = MakeRequest(request, "VerifyUserAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VerifyUserAccountResponse rsp = VerifyUserAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VerifyUserAccountOutcome(rsp);
        else
            return VerifyUserAccountOutcome(o.GetError());
    }
    else
    {
        return VerifyUserAccountOutcome(outcome.GetError());
    }
}

void DbbrainClient::VerifyUserAccountAsync(const VerifyUserAccountRequest& request, const VerifyUserAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->VerifyUserAccount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::VerifyUserAccountOutcomeCallable DbbrainClient::VerifyUserAccountCallable(const VerifyUserAccountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<VerifyUserAccountOutcome()>>(
        [this, request]()
        {
            return this->VerifyUserAccount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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
    using Req = const AddUserContactRequest&;
    using Resp = AddUserContactResponse;

    DoRequestAsync<Req, Resp>(
        "AddUserContact", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::AddUserContactOutcomeCallable DbbrainClient::AddUserContactCallable(const AddUserContactRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddUserContactOutcome>>();
    AddUserContactAsync(
    request,
    [prom](
        const DbbrainClient*,
        const AddUserContactRequest&,
        AddUserContactOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CancelDBAutonomyActionRequest&;
    using Resp = CancelDBAutonomyActionResponse;

    DoRequestAsync<Req, Resp>(
        "CancelDBAutonomyAction", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::CancelDBAutonomyActionOutcomeCallable DbbrainClient::CancelDBAutonomyActionCallable(const CancelDBAutonomyActionRequest &request)
{
    const auto prom = std::make_shared<std::promise<CancelDBAutonomyActionOutcome>>();
    CancelDBAutonomyActionAsync(
    request,
    [prom](
        const DbbrainClient*,
        const CancelDBAutonomyActionRequest&,
        CancelDBAutonomyActionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CancelDBAutonomyEventRequest&;
    using Resp = CancelDBAutonomyEventResponse;

    DoRequestAsync<Req, Resp>(
        "CancelDBAutonomyEvent", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::CancelDBAutonomyEventOutcomeCallable DbbrainClient::CancelDBAutonomyEventCallable(const CancelDBAutonomyEventRequest &request)
{
    const auto prom = std::make_shared<std::promise<CancelDBAutonomyEventOutcome>>();
    CancelDBAutonomyEventAsync(
    request,
    [prom](
        const DbbrainClient*,
        const CancelDBAutonomyEventRequest&,
        CancelDBAutonomyEventOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CancelKillTaskRequest&;
    using Resp = CancelKillTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CancelKillTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::CancelKillTaskOutcomeCallable DbbrainClient::CancelKillTaskCallable(const CancelKillTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CancelKillTaskOutcome>>();
    CancelKillTaskAsync(
    request,
    [prom](
        const DbbrainClient*,
        const CancelKillTaskRequest&,
        CancelKillTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CancelRedisBigKeyAnalysisTasksRequest&;
    using Resp = CancelRedisBigKeyAnalysisTasksResponse;

    DoRequestAsync<Req, Resp>(
        "CancelRedisBigKeyAnalysisTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::CancelRedisBigKeyAnalysisTasksOutcomeCallable DbbrainClient::CancelRedisBigKeyAnalysisTasksCallable(const CancelRedisBigKeyAnalysisTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<CancelRedisBigKeyAnalysisTasksOutcome>>();
    CancelRedisBigKeyAnalysisTasksAsync(
    request,
    [prom](
        const DbbrainClient*,
        const CancelRedisBigKeyAnalysisTasksRequest&,
        CancelRedisBigKeyAnalysisTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CloseAuditServiceRequest&;
    using Resp = CloseAuditServiceResponse;

    DoRequestAsync<Req, Resp>(
        "CloseAuditService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::CloseAuditServiceOutcomeCallable DbbrainClient::CloseAuditServiceCallable(const CloseAuditServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CloseAuditServiceOutcome>>();
    CloseAuditServiceAsync(
    request,
    [prom](
        const DbbrainClient*,
        const CloseAuditServiceRequest&,
        CloseAuditServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateAuditLogFileRequest&;
    using Resp = CreateAuditLogFileResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAuditLogFile", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::CreateAuditLogFileOutcomeCallable DbbrainClient::CreateAuditLogFileCallable(const CreateAuditLogFileRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAuditLogFileOutcome>>();
    CreateAuditLogFileAsync(
    request,
    [prom](
        const DbbrainClient*,
        const CreateAuditLogFileRequest&,
        CreateAuditLogFileOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateDBDiagReportTaskRequest&;
    using Resp = CreateDBDiagReportTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDBDiagReportTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::CreateDBDiagReportTaskOutcomeCallable DbbrainClient::CreateDBDiagReportTaskCallable(const CreateDBDiagReportTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDBDiagReportTaskOutcome>>();
    CreateDBDiagReportTaskAsync(
    request,
    [prom](
        const DbbrainClient*,
        const CreateDBDiagReportTaskRequest&,
        CreateDBDiagReportTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateDBDiagReportUrlRequest&;
    using Resp = CreateDBDiagReportUrlResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDBDiagReportUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::CreateDBDiagReportUrlOutcomeCallable DbbrainClient::CreateDBDiagReportUrlCallable(const CreateDBDiagReportUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDBDiagReportUrlOutcome>>();
    CreateDBDiagReportUrlAsync(
    request,
    [prom](
        const DbbrainClient*,
        const CreateDBDiagReportUrlRequest&,
        CreateDBDiagReportUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateKillTaskRequest&;
    using Resp = CreateKillTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateKillTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::CreateKillTaskOutcomeCallable DbbrainClient::CreateKillTaskCallable(const CreateKillTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateKillTaskOutcome>>();
    CreateKillTaskAsync(
    request,
    [prom](
        const DbbrainClient*,
        const CreateKillTaskRequest&,
        CreateKillTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateMailProfileRequest&;
    using Resp = CreateMailProfileResponse;

    DoRequestAsync<Req, Resp>(
        "CreateMailProfile", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::CreateMailProfileOutcomeCallable DbbrainClient::CreateMailProfileCallable(const CreateMailProfileRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateMailProfileOutcome>>();
    CreateMailProfileAsync(
    request,
    [prom](
        const DbbrainClient*,
        const CreateMailProfileRequest&,
        CreateMailProfileOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateProxySessionKillTaskRequest&;
    using Resp = CreateProxySessionKillTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateProxySessionKillTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::CreateProxySessionKillTaskOutcomeCallable DbbrainClient::CreateProxySessionKillTaskCallable(const CreateProxySessionKillTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateProxySessionKillTaskOutcome>>();
    CreateProxySessionKillTaskAsync(
    request,
    [prom](
        const DbbrainClient*,
        const CreateProxySessionKillTaskRequest&,
        CreateProxySessionKillTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateRedisBigKeyAnalysisTaskRequest&;
    using Resp = CreateRedisBigKeyAnalysisTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateRedisBigKeyAnalysisTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::CreateRedisBigKeyAnalysisTaskOutcomeCallable DbbrainClient::CreateRedisBigKeyAnalysisTaskCallable(const CreateRedisBigKeyAnalysisTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateRedisBigKeyAnalysisTaskOutcome>>();
    CreateRedisBigKeyAnalysisTaskAsync(
    request,
    [prom](
        const DbbrainClient*,
        const CreateRedisBigKeyAnalysisTaskRequest&,
        CreateRedisBigKeyAnalysisTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateSchedulerMailProfileRequest&;
    using Resp = CreateSchedulerMailProfileResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSchedulerMailProfile", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::CreateSchedulerMailProfileOutcomeCallable DbbrainClient::CreateSchedulerMailProfileCallable(const CreateSchedulerMailProfileRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSchedulerMailProfileOutcome>>();
    CreateSchedulerMailProfileAsync(
    request,
    [prom](
        const DbbrainClient*,
        const CreateSchedulerMailProfileRequest&,
        CreateSchedulerMailProfileOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateSecurityAuditLogExportTaskRequest&;
    using Resp = CreateSecurityAuditLogExportTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSecurityAuditLogExportTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::CreateSecurityAuditLogExportTaskOutcomeCallable DbbrainClient::CreateSecurityAuditLogExportTaskCallable(const CreateSecurityAuditLogExportTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSecurityAuditLogExportTaskOutcome>>();
    CreateSecurityAuditLogExportTaskAsync(
    request,
    [prom](
        const DbbrainClient*,
        const CreateSecurityAuditLogExportTaskRequest&,
        CreateSecurityAuditLogExportTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateSqlFilterRequest&;
    using Resp = CreateSqlFilterResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSqlFilter", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::CreateSqlFilterOutcomeCallable DbbrainClient::CreateSqlFilterCallable(const CreateSqlFilterRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSqlFilterOutcome>>();
    CreateSqlFilterAsync(
    request,
    [prom](
        const DbbrainClient*,
        const CreateSqlFilterRequest&,
        CreateSqlFilterOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateUserAutonomyProfileRequest&;
    using Resp = CreateUserAutonomyProfileResponse;

    DoRequestAsync<Req, Resp>(
        "CreateUserAutonomyProfile", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::CreateUserAutonomyProfileOutcomeCallable DbbrainClient::CreateUserAutonomyProfileCallable(const CreateUserAutonomyProfileRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateUserAutonomyProfileOutcome>>();
    CreateUserAutonomyProfileAsync(
    request,
    [prom](
        const DbbrainClient*,
        const CreateUserAutonomyProfileRequest&,
        CreateUserAutonomyProfileOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteAuditLogFileRequest&;
    using Resp = DeleteAuditLogFileResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAuditLogFile", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::DeleteAuditLogFileOutcomeCallable DbbrainClient::DeleteAuditLogFileCallable(const DeleteAuditLogFileRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAuditLogFileOutcome>>();
    DeleteAuditLogFileAsync(
    request,
    [prom](
        const DbbrainClient*,
        const DeleteAuditLogFileRequest&,
        DeleteAuditLogFileOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteDBDiagReportTasksRequest&;
    using Resp = DeleteDBDiagReportTasksResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDBDiagReportTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::DeleteDBDiagReportTasksOutcomeCallable DbbrainClient::DeleteDBDiagReportTasksCallable(const DeleteDBDiagReportTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDBDiagReportTasksOutcome>>();
    DeleteDBDiagReportTasksAsync(
    request,
    [prom](
        const DbbrainClient*,
        const DeleteDBDiagReportTasksRequest&,
        DeleteDBDiagReportTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteRedisBigKeyAnalysisTasksRequest&;
    using Resp = DeleteRedisBigKeyAnalysisTasksResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRedisBigKeyAnalysisTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::DeleteRedisBigKeyAnalysisTasksOutcomeCallable DbbrainClient::DeleteRedisBigKeyAnalysisTasksCallable(const DeleteRedisBigKeyAnalysisTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRedisBigKeyAnalysisTasksOutcome>>();
    DeleteRedisBigKeyAnalysisTasksAsync(
    request,
    [prom](
        const DbbrainClient*,
        const DeleteRedisBigKeyAnalysisTasksRequest&,
        DeleteRedisBigKeyAnalysisTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteSecurityAuditLogExportTasksRequest&;
    using Resp = DeleteSecurityAuditLogExportTasksResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteSecurityAuditLogExportTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::DeleteSecurityAuditLogExportTasksOutcomeCallable DbbrainClient::DeleteSecurityAuditLogExportTasksCallable(const DeleteSecurityAuditLogExportTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteSecurityAuditLogExportTasksOutcome>>();
    DeleteSecurityAuditLogExportTasksAsync(
    request,
    [prom](
        const DbbrainClient*,
        const DeleteSecurityAuditLogExportTasksRequest&,
        DeleteSecurityAuditLogExportTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteSqlFiltersRequest&;
    using Resp = DeleteSqlFiltersResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteSqlFilters", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::DeleteSqlFiltersOutcomeCallable DbbrainClient::DeleteSqlFiltersCallable(const DeleteSqlFiltersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteSqlFiltersOutcome>>();
    DeleteSqlFiltersAsync(
    request,
    [prom](
        const DbbrainClient*,
        const DeleteSqlFiltersRequest&,
        DeleteSqlFiltersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeAlarmTemplateRequest&;
    using Resp = DescribeAlarmTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAlarmTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::DescribeAlarmTemplateOutcomeCallable DbbrainClient::DescribeAlarmTemplateCallable(const DescribeAlarmTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAlarmTemplateOutcome>>();
    DescribeAlarmTemplateAsync(
    request,
    [prom](
        const DbbrainClient*,
        const DescribeAlarmTemplateRequest&,
        DescribeAlarmTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeAllUserContactRequest&;
    using Resp = DescribeAllUserContactResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAllUserContact", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::DescribeAllUserContactOutcomeCallable DbbrainClient::DescribeAllUserContactCallable(const DescribeAllUserContactRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAllUserContactOutcome>>();
    DescribeAllUserContactAsync(
    request,
    [prom](
        const DbbrainClient*,
        const DescribeAllUserContactRequest&,
        DescribeAllUserContactOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeAllUserGroupRequest&;
    using Resp = DescribeAllUserGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAllUserGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::DescribeAllUserGroupOutcomeCallable DbbrainClient::DescribeAllUserGroupCallable(const DescribeAllUserGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAllUserGroupOutcome>>();
    DescribeAllUserGroupAsync(
    request,
    [prom](
        const DbbrainClient*,
        const DescribeAllUserGroupRequest&,
        DescribeAllUserGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeAuditInstanceListRequest&;
    using Resp = DescribeAuditInstanceListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAuditInstanceList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::DescribeAuditInstanceListOutcomeCallable DbbrainClient::DescribeAuditInstanceListCallable(const DescribeAuditInstanceListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAuditInstanceListOutcome>>();
    DescribeAuditInstanceListAsync(
    request,
    [prom](
        const DbbrainClient*,
        const DescribeAuditInstanceListRequest&,
        DescribeAuditInstanceListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeAuditLogFilesRequest&;
    using Resp = DescribeAuditLogFilesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAuditLogFiles", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::DescribeAuditLogFilesOutcomeCallable DbbrainClient::DescribeAuditLogFilesCallable(const DescribeAuditLogFilesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAuditLogFilesOutcome>>();
    DescribeAuditLogFilesAsync(
    request,
    [prom](
        const DbbrainClient*,
        const DescribeAuditLogFilesRequest&,
        DescribeAuditLogFilesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeDBAutonomyActionRequest&;
    using Resp = DescribeDBAutonomyActionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDBAutonomyAction", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::DescribeDBAutonomyActionOutcomeCallable DbbrainClient::DescribeDBAutonomyActionCallable(const DescribeDBAutonomyActionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBAutonomyActionOutcome>>();
    DescribeDBAutonomyActionAsync(
    request,
    [prom](
        const DbbrainClient*,
        const DescribeDBAutonomyActionRequest&,
        DescribeDBAutonomyActionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeDBAutonomyActionsRequest&;
    using Resp = DescribeDBAutonomyActionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDBAutonomyActions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::DescribeDBAutonomyActionsOutcomeCallable DbbrainClient::DescribeDBAutonomyActionsCallable(const DescribeDBAutonomyActionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBAutonomyActionsOutcome>>();
    DescribeDBAutonomyActionsAsync(
    request,
    [prom](
        const DbbrainClient*,
        const DescribeDBAutonomyActionsRequest&,
        DescribeDBAutonomyActionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeDBAutonomyEventsRequest&;
    using Resp = DescribeDBAutonomyEventsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDBAutonomyEvents", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::DescribeDBAutonomyEventsOutcomeCallable DbbrainClient::DescribeDBAutonomyEventsCallable(const DescribeDBAutonomyEventsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBAutonomyEventsOutcome>>();
    DescribeDBAutonomyEventsAsync(
    request,
    [prom](
        const DbbrainClient*,
        const DescribeDBAutonomyEventsRequest&,
        DescribeDBAutonomyEventsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeDBDiagEventRequest&;
    using Resp = DescribeDBDiagEventResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDBDiagEvent", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::DescribeDBDiagEventOutcomeCallable DbbrainClient::DescribeDBDiagEventCallable(const DescribeDBDiagEventRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBDiagEventOutcome>>();
    DescribeDBDiagEventAsync(
    request,
    [prom](
        const DbbrainClient*,
        const DescribeDBDiagEventRequest&,
        DescribeDBDiagEventOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeDBDiagEventsRequest&;
    using Resp = DescribeDBDiagEventsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDBDiagEvents", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::DescribeDBDiagEventsOutcomeCallable DbbrainClient::DescribeDBDiagEventsCallable(const DescribeDBDiagEventsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBDiagEventsOutcome>>();
    DescribeDBDiagEventsAsync(
    request,
    [prom](
        const DbbrainClient*,
        const DescribeDBDiagEventsRequest&,
        DescribeDBDiagEventsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeDBDiagHistoryRequest&;
    using Resp = DescribeDBDiagHistoryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDBDiagHistory", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::DescribeDBDiagHistoryOutcomeCallable DbbrainClient::DescribeDBDiagHistoryCallable(const DescribeDBDiagHistoryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBDiagHistoryOutcome>>();
    DescribeDBDiagHistoryAsync(
    request,
    [prom](
        const DbbrainClient*,
        const DescribeDBDiagHistoryRequest&,
        DescribeDBDiagHistoryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeDBDiagReportContentRequest&;
    using Resp = DescribeDBDiagReportContentResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDBDiagReportContent", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::DescribeDBDiagReportContentOutcomeCallable DbbrainClient::DescribeDBDiagReportContentCallable(const DescribeDBDiagReportContentRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBDiagReportContentOutcome>>();
    DescribeDBDiagReportContentAsync(
    request,
    [prom](
        const DbbrainClient*,
        const DescribeDBDiagReportContentRequest&,
        DescribeDBDiagReportContentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeDBDiagReportTasksRequest&;
    using Resp = DescribeDBDiagReportTasksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDBDiagReportTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::DescribeDBDiagReportTasksOutcomeCallable DbbrainClient::DescribeDBDiagReportTasksCallable(const DescribeDBDiagReportTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBDiagReportTasksOutcome>>();
    DescribeDBDiagReportTasksAsync(
    request,
    [prom](
        const DbbrainClient*,
        const DescribeDBDiagReportTasksRequest&,
        DescribeDBDiagReportTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeDBPerfTimeSeriesRequest&;
    using Resp = DescribeDBPerfTimeSeriesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDBPerfTimeSeries", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::DescribeDBPerfTimeSeriesOutcomeCallable DbbrainClient::DescribeDBPerfTimeSeriesCallable(const DescribeDBPerfTimeSeriesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBPerfTimeSeriesOutcome>>();
    DescribeDBPerfTimeSeriesAsync(
    request,
    [prom](
        const DbbrainClient*,
        const DescribeDBPerfTimeSeriesRequest&,
        DescribeDBPerfTimeSeriesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeDBSpaceStatusRequest&;
    using Resp = DescribeDBSpaceStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDBSpaceStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::DescribeDBSpaceStatusOutcomeCallable DbbrainClient::DescribeDBSpaceStatusCallable(const DescribeDBSpaceStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBSpaceStatusOutcome>>();
    DescribeDBSpaceStatusAsync(
    request,
    [prom](
        const DbbrainClient*,
        const DescribeDBSpaceStatusRequest&,
        DescribeDBSpaceStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeDiagDBInstancesRequest&;
    using Resp = DescribeDiagDBInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDiagDBInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::DescribeDiagDBInstancesOutcomeCallable DbbrainClient::DescribeDiagDBInstancesCallable(const DescribeDiagDBInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDiagDBInstancesOutcome>>();
    DescribeDiagDBInstancesAsync(
    request,
    [prom](
        const DbbrainClient*,
        const DescribeDiagDBInstancesRequest&,
        DescribeDiagDBInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeHealthScoreRequest&;
    using Resp = DescribeHealthScoreResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeHealthScore", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::DescribeHealthScoreOutcomeCallable DbbrainClient::DescribeHealthScoreCallable(const DescribeHealthScoreRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeHealthScoreOutcome>>();
    DescribeHealthScoreAsync(
    request,
    [prom](
        const DbbrainClient*,
        const DescribeHealthScoreRequest&,
        DescribeHealthScoreOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DbbrainClient::DescribeHealthScoreTimeSeriesOutcome DbbrainClient::DescribeHealthScoreTimeSeries(const DescribeHealthScoreTimeSeriesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHealthScoreTimeSeries");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHealthScoreTimeSeriesResponse rsp = DescribeHealthScoreTimeSeriesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHealthScoreTimeSeriesOutcome(rsp);
        else
            return DescribeHealthScoreTimeSeriesOutcome(o.GetError());
    }
    else
    {
        return DescribeHealthScoreTimeSeriesOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeHealthScoreTimeSeriesAsync(const DescribeHealthScoreTimeSeriesRequest& request, const DescribeHealthScoreTimeSeriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeHealthScoreTimeSeriesRequest&;
    using Resp = DescribeHealthScoreTimeSeriesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeHealthScoreTimeSeries", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::DescribeHealthScoreTimeSeriesOutcomeCallable DbbrainClient::DescribeHealthScoreTimeSeriesCallable(const DescribeHealthScoreTimeSeriesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeHealthScoreTimeSeriesOutcome>>();
    DescribeHealthScoreTimeSeriesAsync(
    request,
    [prom](
        const DbbrainClient*,
        const DescribeHealthScoreTimeSeriesRequest&,
        DescribeHealthScoreTimeSeriesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeIndexRecommendAggregationSlowLogsRequest&;
    using Resp = DescribeIndexRecommendAggregationSlowLogsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIndexRecommendAggregationSlowLogs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::DescribeIndexRecommendAggregationSlowLogsOutcomeCallable DbbrainClient::DescribeIndexRecommendAggregationSlowLogsCallable(const DescribeIndexRecommendAggregationSlowLogsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIndexRecommendAggregationSlowLogsOutcome>>();
    DescribeIndexRecommendAggregationSlowLogsAsync(
    request,
    [prom](
        const DbbrainClient*,
        const DescribeIndexRecommendAggregationSlowLogsRequest&,
        DescribeIndexRecommendAggregationSlowLogsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeIndexRecommendInfoRequest&;
    using Resp = DescribeIndexRecommendInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIndexRecommendInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::DescribeIndexRecommendInfoOutcomeCallable DbbrainClient::DescribeIndexRecommendInfoCallable(const DescribeIndexRecommendInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIndexRecommendInfoOutcome>>();
    DescribeIndexRecommendInfoAsync(
    request,
    [prom](
        const DbbrainClient*,
        const DescribeIndexRecommendInfoRequest&,
        DescribeIndexRecommendInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeMailProfileRequest&;
    using Resp = DescribeMailProfileResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMailProfile", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::DescribeMailProfileOutcomeCallable DbbrainClient::DescribeMailProfileCallable(const DescribeMailProfileRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMailProfileOutcome>>();
    DescribeMailProfileAsync(
    request,
    [prom](
        const DbbrainClient*,
        const DescribeMailProfileRequest&,
        DescribeMailProfileOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DbbrainClient::DescribeMetricTopProxiesOutcome DbbrainClient::DescribeMetricTopProxies(const DescribeMetricTopProxiesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMetricTopProxies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMetricTopProxiesResponse rsp = DescribeMetricTopProxiesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMetricTopProxiesOutcome(rsp);
        else
            return DescribeMetricTopProxiesOutcome(o.GetError());
    }
    else
    {
        return DescribeMetricTopProxiesOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeMetricTopProxiesAsync(const DescribeMetricTopProxiesRequest& request, const DescribeMetricTopProxiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMetricTopProxiesRequest&;
    using Resp = DescribeMetricTopProxiesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMetricTopProxies", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::DescribeMetricTopProxiesOutcomeCallable DbbrainClient::DescribeMetricTopProxiesCallable(const DescribeMetricTopProxiesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMetricTopProxiesOutcome>>();
    DescribeMetricTopProxiesAsync(
    request,
    [prom](
        const DbbrainClient*,
        const DescribeMetricTopProxiesRequest&,
        DescribeMetricTopProxiesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DbbrainClient::DescribeMongoDBProcessListOutcome DbbrainClient::DescribeMongoDBProcessList(const DescribeMongoDBProcessListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMongoDBProcessList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMongoDBProcessListResponse rsp = DescribeMongoDBProcessListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMongoDBProcessListOutcome(rsp);
        else
            return DescribeMongoDBProcessListOutcome(o.GetError());
    }
    else
    {
        return DescribeMongoDBProcessListOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeMongoDBProcessListAsync(const DescribeMongoDBProcessListRequest& request, const DescribeMongoDBProcessListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMongoDBProcessListRequest&;
    using Resp = DescribeMongoDBProcessListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMongoDBProcessList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::DescribeMongoDBProcessListOutcomeCallable DbbrainClient::DescribeMongoDBProcessListCallable(const DescribeMongoDBProcessListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMongoDBProcessListOutcome>>();
    DescribeMongoDBProcessListAsync(
    request,
    [prom](
        const DbbrainClient*,
        const DescribeMongoDBProcessListRequest&,
        DescribeMongoDBProcessListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeMySqlProcessListRequest&;
    using Resp = DescribeMySqlProcessListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMySqlProcessList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::DescribeMySqlProcessListOutcomeCallable DbbrainClient::DescribeMySqlProcessListCallable(const DescribeMySqlProcessListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMySqlProcessListOutcome>>();
    DescribeMySqlProcessListAsync(
    request,
    [prom](
        const DbbrainClient*,
        const DescribeMySqlProcessListRequest&,
        DescribeMySqlProcessListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeNoPrimaryKeyTablesRequest&;
    using Resp = DescribeNoPrimaryKeyTablesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNoPrimaryKeyTables", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::DescribeNoPrimaryKeyTablesOutcomeCallable DbbrainClient::DescribeNoPrimaryKeyTablesCallable(const DescribeNoPrimaryKeyTablesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNoPrimaryKeyTablesOutcome>>();
    DescribeNoPrimaryKeyTablesAsync(
    request,
    [prom](
        const DbbrainClient*,
        const DescribeNoPrimaryKeyTablesRequest&,
        DescribeNoPrimaryKeyTablesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeProxyProcessStatisticsRequest&;
    using Resp = DescribeProxyProcessStatisticsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProxyProcessStatistics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::DescribeProxyProcessStatisticsOutcomeCallable DbbrainClient::DescribeProxyProcessStatisticsCallable(const DescribeProxyProcessStatisticsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProxyProcessStatisticsOutcome>>();
    DescribeProxyProcessStatisticsAsync(
    request,
    [prom](
        const DbbrainClient*,
        const DescribeProxyProcessStatisticsRequest&,
        DescribeProxyProcessStatisticsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeProxySessionKillTasksRequest&;
    using Resp = DescribeProxySessionKillTasksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProxySessionKillTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::DescribeProxySessionKillTasksOutcomeCallable DbbrainClient::DescribeProxySessionKillTasksCallable(const DescribeProxySessionKillTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProxySessionKillTasksOutcome>>();
    DescribeProxySessionKillTasksAsync(
    request,
    [prom](
        const DbbrainClient*,
        const DescribeProxySessionKillTasksRequest&,
        DescribeProxySessionKillTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeRedisBigKeyAnalysisTasksRequest&;
    using Resp = DescribeRedisBigKeyAnalysisTasksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRedisBigKeyAnalysisTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::DescribeRedisBigKeyAnalysisTasksOutcomeCallable DbbrainClient::DescribeRedisBigKeyAnalysisTasksCallable(const DescribeRedisBigKeyAnalysisTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRedisBigKeyAnalysisTasksOutcome>>();
    DescribeRedisBigKeyAnalysisTasksAsync(
    request,
    [prom](
        const DbbrainClient*,
        const DescribeRedisBigKeyAnalysisTasksRequest&,
        DescribeRedisBigKeyAnalysisTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeRedisCmdPerfTimeSeriesRequest&;
    using Resp = DescribeRedisCmdPerfTimeSeriesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRedisCmdPerfTimeSeries", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::DescribeRedisCmdPerfTimeSeriesOutcomeCallable DbbrainClient::DescribeRedisCmdPerfTimeSeriesCallable(const DescribeRedisCmdPerfTimeSeriesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRedisCmdPerfTimeSeriesOutcome>>();
    DescribeRedisCmdPerfTimeSeriesAsync(
    request,
    [prom](
        const DbbrainClient*,
        const DescribeRedisCmdPerfTimeSeriesRequest&,
        DescribeRedisCmdPerfTimeSeriesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeRedisCommandCostStatisticsRequest&;
    using Resp = DescribeRedisCommandCostStatisticsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRedisCommandCostStatistics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::DescribeRedisCommandCostStatisticsOutcomeCallable DbbrainClient::DescribeRedisCommandCostStatisticsCallable(const DescribeRedisCommandCostStatisticsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRedisCommandCostStatisticsOutcome>>();
    DescribeRedisCommandCostStatisticsAsync(
    request,
    [prom](
        const DbbrainClient*,
        const DescribeRedisCommandCostStatisticsRequest&,
        DescribeRedisCommandCostStatisticsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeRedisCommandOverviewRequest&;
    using Resp = DescribeRedisCommandOverviewResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRedisCommandOverview", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::DescribeRedisCommandOverviewOutcomeCallable DbbrainClient::DescribeRedisCommandOverviewCallable(const DescribeRedisCommandOverviewRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRedisCommandOverviewOutcome>>();
    DescribeRedisCommandOverviewAsync(
    request,
    [prom](
        const DbbrainClient*,
        const DescribeRedisCommandOverviewRequest&,
        DescribeRedisCommandOverviewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeRedisProcessListRequest&;
    using Resp = DescribeRedisProcessListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRedisProcessList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::DescribeRedisProcessListOutcomeCallable DbbrainClient::DescribeRedisProcessListCallable(const DescribeRedisProcessListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRedisProcessListOutcome>>();
    DescribeRedisProcessListAsync(
    request,
    [prom](
        const DbbrainClient*,
        const DescribeRedisProcessListRequest&,
        DescribeRedisProcessListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeRedisSlowLogTopSqlsRequest&;
    using Resp = DescribeRedisSlowLogTopSqlsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRedisSlowLogTopSqls", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::DescribeRedisSlowLogTopSqlsOutcomeCallable DbbrainClient::DescribeRedisSlowLogTopSqlsCallable(const DescribeRedisSlowLogTopSqlsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRedisSlowLogTopSqlsOutcome>>();
    DescribeRedisSlowLogTopSqlsAsync(
    request,
    [prom](
        const DbbrainClient*,
        const DescribeRedisSlowLogTopSqlsRequest&,
        DescribeRedisSlowLogTopSqlsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeRedisTopBigKeysRequest&;
    using Resp = DescribeRedisTopBigKeysResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRedisTopBigKeys", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::DescribeRedisTopBigKeysOutcomeCallable DbbrainClient::DescribeRedisTopBigKeysCallable(const DescribeRedisTopBigKeysRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRedisTopBigKeysOutcome>>();
    DescribeRedisTopBigKeysAsync(
    request,
    [prom](
        const DbbrainClient*,
        const DescribeRedisTopBigKeysRequest&,
        DescribeRedisTopBigKeysOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DbbrainClient::DescribeRedisTopCostCommandsOutcome DbbrainClient::DescribeRedisTopCostCommands(const DescribeRedisTopCostCommandsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRedisTopCostCommands");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRedisTopCostCommandsResponse rsp = DescribeRedisTopCostCommandsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRedisTopCostCommandsOutcome(rsp);
        else
            return DescribeRedisTopCostCommandsOutcome(o.GetError());
    }
    else
    {
        return DescribeRedisTopCostCommandsOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeRedisTopCostCommandsAsync(const DescribeRedisTopCostCommandsRequest& request, const DescribeRedisTopCostCommandsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRedisTopCostCommandsRequest&;
    using Resp = DescribeRedisTopCostCommandsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRedisTopCostCommands", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::DescribeRedisTopCostCommandsOutcomeCallable DbbrainClient::DescribeRedisTopCostCommandsCallable(const DescribeRedisTopCostCommandsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRedisTopCostCommandsOutcome>>();
    DescribeRedisTopCostCommandsAsync(
    request,
    [prom](
        const DbbrainClient*,
        const DescribeRedisTopCostCommandsRequest&,
        DescribeRedisTopCostCommandsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeRedisTopHotKeysRequest&;
    using Resp = DescribeRedisTopHotKeysResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRedisTopHotKeys", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::DescribeRedisTopHotKeysOutcomeCallable DbbrainClient::DescribeRedisTopHotKeysCallable(const DescribeRedisTopHotKeysRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRedisTopHotKeysOutcome>>();
    DescribeRedisTopHotKeysAsync(
    request,
    [prom](
        const DbbrainClient*,
        const DescribeRedisTopHotKeysRequest&,
        DescribeRedisTopHotKeysOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeRedisTopKeyPrefixListRequest&;
    using Resp = DescribeRedisTopKeyPrefixListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRedisTopKeyPrefixList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::DescribeRedisTopKeyPrefixListOutcomeCallable DbbrainClient::DescribeRedisTopKeyPrefixListCallable(const DescribeRedisTopKeyPrefixListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRedisTopKeyPrefixListOutcome>>();
    DescribeRedisTopKeyPrefixListAsync(
    request,
    [prom](
        const DbbrainClient*,
        const DescribeRedisTopKeyPrefixListRequest&,
        DescribeRedisTopKeyPrefixListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeSecurityAuditLogDownloadUrlsRequest&;
    using Resp = DescribeSecurityAuditLogDownloadUrlsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSecurityAuditLogDownloadUrls", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::DescribeSecurityAuditLogDownloadUrlsOutcomeCallable DbbrainClient::DescribeSecurityAuditLogDownloadUrlsCallable(const DescribeSecurityAuditLogDownloadUrlsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSecurityAuditLogDownloadUrlsOutcome>>();
    DescribeSecurityAuditLogDownloadUrlsAsync(
    request,
    [prom](
        const DbbrainClient*,
        const DescribeSecurityAuditLogDownloadUrlsRequest&,
        DescribeSecurityAuditLogDownloadUrlsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeSecurityAuditLogExportTasksRequest&;
    using Resp = DescribeSecurityAuditLogExportTasksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSecurityAuditLogExportTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::DescribeSecurityAuditLogExportTasksOutcomeCallable DbbrainClient::DescribeSecurityAuditLogExportTasksCallable(const DescribeSecurityAuditLogExportTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSecurityAuditLogExportTasksOutcome>>();
    DescribeSecurityAuditLogExportTasksAsync(
    request,
    [prom](
        const DbbrainClient*,
        const DescribeSecurityAuditLogExportTasksRequest&,
        DescribeSecurityAuditLogExportTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeSlowLogQueryTimeStatsRequest&;
    using Resp = DescribeSlowLogQueryTimeStatsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSlowLogQueryTimeStats", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::DescribeSlowLogQueryTimeStatsOutcomeCallable DbbrainClient::DescribeSlowLogQueryTimeStatsCallable(const DescribeSlowLogQueryTimeStatsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSlowLogQueryTimeStatsOutcome>>();
    DescribeSlowLogQueryTimeStatsAsync(
    request,
    [prom](
        const DbbrainClient*,
        const DescribeSlowLogQueryTimeStatsRequest&,
        DescribeSlowLogQueryTimeStatsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeSlowLogTimeSeriesStatsRequest&;
    using Resp = DescribeSlowLogTimeSeriesStatsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSlowLogTimeSeriesStats", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::DescribeSlowLogTimeSeriesStatsOutcomeCallable DbbrainClient::DescribeSlowLogTimeSeriesStatsCallable(const DescribeSlowLogTimeSeriesStatsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSlowLogTimeSeriesStatsOutcome>>();
    DescribeSlowLogTimeSeriesStatsAsync(
    request,
    [prom](
        const DbbrainClient*,
        const DescribeSlowLogTimeSeriesStatsRequest&,
        DescribeSlowLogTimeSeriesStatsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeSlowLogTopSqlsRequest&;
    using Resp = DescribeSlowLogTopSqlsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSlowLogTopSqls", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::DescribeSlowLogTopSqlsOutcomeCallable DbbrainClient::DescribeSlowLogTopSqlsCallable(const DescribeSlowLogTopSqlsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSlowLogTopSqlsOutcome>>();
    DescribeSlowLogTopSqlsAsync(
    request,
    [prom](
        const DbbrainClient*,
        const DescribeSlowLogTopSqlsRequest&,
        DescribeSlowLogTopSqlsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeSlowLogUserHostStatsRequest&;
    using Resp = DescribeSlowLogUserHostStatsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSlowLogUserHostStats", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::DescribeSlowLogUserHostStatsOutcomeCallable DbbrainClient::DescribeSlowLogUserHostStatsCallable(const DescribeSlowLogUserHostStatsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSlowLogUserHostStatsOutcome>>();
    DescribeSlowLogUserHostStatsAsync(
    request,
    [prom](
        const DbbrainClient*,
        const DescribeSlowLogUserHostStatsRequest&,
        DescribeSlowLogUserHostStatsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeSlowLogsRequest&;
    using Resp = DescribeSlowLogsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSlowLogs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::DescribeSlowLogsOutcomeCallable DbbrainClient::DescribeSlowLogsCallable(const DescribeSlowLogsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSlowLogsOutcome>>();
    DescribeSlowLogsAsync(
    request,
    [prom](
        const DbbrainClient*,
        const DescribeSlowLogsRequest&,
        DescribeSlowLogsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeSqlFiltersRequest&;
    using Resp = DescribeSqlFiltersResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSqlFilters", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::DescribeSqlFiltersOutcomeCallable DbbrainClient::DescribeSqlFiltersCallable(const DescribeSqlFiltersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSqlFiltersOutcome>>();
    DescribeSqlFiltersAsync(
    request,
    [prom](
        const DbbrainClient*,
        const DescribeSqlFiltersRequest&,
        DescribeSqlFiltersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeSqlTemplateRequest&;
    using Resp = DescribeSqlTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSqlTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::DescribeSqlTemplateOutcomeCallable DbbrainClient::DescribeSqlTemplateCallable(const DescribeSqlTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSqlTemplateOutcome>>();
    DescribeSqlTemplateAsync(
    request,
    [prom](
        const DbbrainClient*,
        const DescribeSqlTemplateRequest&,
        DescribeSqlTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeTopSpaceSchemaTimeSeriesRequest&;
    using Resp = DescribeTopSpaceSchemaTimeSeriesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTopSpaceSchemaTimeSeries", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::DescribeTopSpaceSchemaTimeSeriesOutcomeCallable DbbrainClient::DescribeTopSpaceSchemaTimeSeriesCallable(const DescribeTopSpaceSchemaTimeSeriesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTopSpaceSchemaTimeSeriesOutcome>>();
    DescribeTopSpaceSchemaTimeSeriesAsync(
    request,
    [prom](
        const DbbrainClient*,
        const DescribeTopSpaceSchemaTimeSeriesRequest&,
        DescribeTopSpaceSchemaTimeSeriesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeTopSpaceSchemasRequest&;
    using Resp = DescribeTopSpaceSchemasResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTopSpaceSchemas", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::DescribeTopSpaceSchemasOutcomeCallable DbbrainClient::DescribeTopSpaceSchemasCallable(const DescribeTopSpaceSchemasRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTopSpaceSchemasOutcome>>();
    DescribeTopSpaceSchemasAsync(
    request,
    [prom](
        const DbbrainClient*,
        const DescribeTopSpaceSchemasRequest&,
        DescribeTopSpaceSchemasOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeTopSpaceTableTimeSeriesRequest&;
    using Resp = DescribeTopSpaceTableTimeSeriesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTopSpaceTableTimeSeries", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::DescribeTopSpaceTableTimeSeriesOutcomeCallable DbbrainClient::DescribeTopSpaceTableTimeSeriesCallable(const DescribeTopSpaceTableTimeSeriesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTopSpaceTableTimeSeriesOutcome>>();
    DescribeTopSpaceTableTimeSeriesAsync(
    request,
    [prom](
        const DbbrainClient*,
        const DescribeTopSpaceTableTimeSeriesRequest&,
        DescribeTopSpaceTableTimeSeriesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeTopSpaceTablesRequest&;
    using Resp = DescribeTopSpaceTablesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTopSpaceTables", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::DescribeTopSpaceTablesOutcomeCallable DbbrainClient::DescribeTopSpaceTablesCallable(const DescribeTopSpaceTablesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTopSpaceTablesOutcome>>();
    DescribeTopSpaceTablesAsync(
    request,
    [prom](
        const DbbrainClient*,
        const DescribeTopSpaceTablesRequest&,
        DescribeTopSpaceTablesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeUserAutonomyProfileRequest&;
    using Resp = DescribeUserAutonomyProfileResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUserAutonomyProfile", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::DescribeUserAutonomyProfileOutcomeCallable DbbrainClient::DescribeUserAutonomyProfileCallable(const DescribeUserAutonomyProfileRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUserAutonomyProfileOutcome>>();
    DescribeUserAutonomyProfileAsync(
    request,
    [prom](
        const DbbrainClient*,
        const DescribeUserAutonomyProfileRequest&,
        DescribeUserAutonomyProfileOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeUserSqlAdviceRequest&;
    using Resp = DescribeUserSqlAdviceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUserSqlAdvice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::DescribeUserSqlAdviceOutcomeCallable DbbrainClient::DescribeUserSqlAdviceCallable(const DescribeUserSqlAdviceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUserSqlAdviceOutcome>>();
    DescribeUserSqlAdviceAsync(
    request,
    [prom](
        const DbbrainClient*,
        const DescribeUserSqlAdviceRequest&,
        DescribeUserSqlAdviceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const KillMySqlThreadsRequest&;
    using Resp = KillMySqlThreadsResponse;

    DoRequestAsync<Req, Resp>(
        "KillMySqlThreads", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::KillMySqlThreadsOutcomeCallable DbbrainClient::KillMySqlThreadsCallable(const KillMySqlThreadsRequest &request)
{
    const auto prom = std::make_shared<std::promise<KillMySqlThreadsOutcome>>();
    KillMySqlThreadsAsync(
    request,
    [prom](
        const DbbrainClient*,
        const KillMySqlThreadsRequest&,
        KillMySqlThreadsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyAlarmPolicyRequest&;
    using Resp = ModifyAlarmPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAlarmPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::ModifyAlarmPolicyOutcomeCallable DbbrainClient::ModifyAlarmPolicyCallable(const ModifyAlarmPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAlarmPolicyOutcome>>();
    ModifyAlarmPolicyAsync(
    request,
    [prom](
        const DbbrainClient*,
        const ModifyAlarmPolicyRequest&,
        ModifyAlarmPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyAuditServiceRequest&;
    using Resp = ModifyAuditServiceResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAuditService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::ModifyAuditServiceOutcomeCallable DbbrainClient::ModifyAuditServiceCallable(const ModifyAuditServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAuditServiceOutcome>>();
    ModifyAuditServiceAsync(
    request,
    [prom](
        const DbbrainClient*,
        const ModifyAuditServiceRequest&,
        ModifyAuditServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyDiagDBInstanceConfRequest&;
    using Resp = ModifyDiagDBInstanceConfResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDiagDBInstanceConf", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::ModifyDiagDBInstanceConfOutcomeCallable DbbrainClient::ModifyDiagDBInstanceConfCallable(const ModifyDiagDBInstanceConfRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDiagDBInstanceConfOutcome>>();
    ModifyDiagDBInstanceConfAsync(
    request,
    [prom](
        const DbbrainClient*,
        const ModifyDiagDBInstanceConfRequest&,
        ModifyDiagDBInstanceConfOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifySqlFiltersRequest&;
    using Resp = ModifySqlFiltersResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySqlFilters", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::ModifySqlFiltersOutcomeCallable DbbrainClient::ModifySqlFiltersCallable(const ModifySqlFiltersRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySqlFiltersOutcome>>();
    ModifySqlFiltersAsync(
    request,
    [prom](
        const DbbrainClient*,
        const ModifySqlFiltersRequest&,
        ModifySqlFiltersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyUserAutonomyProfileRequest&;
    using Resp = ModifyUserAutonomyProfileResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyUserAutonomyProfile", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::ModifyUserAutonomyProfileOutcomeCallable DbbrainClient::ModifyUserAutonomyProfileCallable(const ModifyUserAutonomyProfileRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyUserAutonomyProfileOutcome>>();
    ModifyUserAutonomyProfileAsync(
    request,
    [prom](
        const DbbrainClient*,
        const ModifyUserAutonomyProfileRequest&,
        ModifyUserAutonomyProfileOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const OpenAuditServiceRequest&;
    using Resp = OpenAuditServiceResponse;

    DoRequestAsync<Req, Resp>(
        "OpenAuditService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::OpenAuditServiceOutcomeCallable DbbrainClient::OpenAuditServiceCallable(const OpenAuditServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<OpenAuditServiceOutcome>>();
    OpenAuditServiceAsync(
    request,
    [prom](
        const DbbrainClient*,
        const OpenAuditServiceRequest&,
        OpenAuditServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const UpdateAgentSwitchRequest&;
    using Resp = UpdateAgentSwitchResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateAgentSwitch", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::UpdateAgentSwitchOutcomeCallable DbbrainClient::UpdateAgentSwitchCallable(const UpdateAgentSwitchRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateAgentSwitchOutcome>>();
    UpdateAgentSwitchAsync(
    request,
    [prom](
        const DbbrainClient*,
        const UpdateAgentSwitchRequest&,
        UpdateAgentSwitchOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const UpdateMonitorSwitchRequest&;
    using Resp = UpdateMonitorSwitchResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateMonitorSwitch", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::UpdateMonitorSwitchOutcomeCallable DbbrainClient::UpdateMonitorSwitchCallable(const UpdateMonitorSwitchRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateMonitorSwitchOutcome>>();
    UpdateMonitorSwitchAsync(
    request,
    [prom](
        const DbbrainClient*,
        const UpdateMonitorSwitchRequest&,
        UpdateMonitorSwitchOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const VerifyUserAccountRequest&;
    using Resp = VerifyUserAccountResponse;

    DoRequestAsync<Req, Resp>(
        "VerifyUserAccount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbbrainClient::VerifyUserAccountOutcomeCallable DbbrainClient::VerifyUserAccountCallable(const VerifyUserAccountRequest &request)
{
    const auto prom = std::make_shared<std::promise<VerifyUserAccountOutcome>>();
    VerifyUserAccountAsync(
    request,
    [prom](
        const DbbrainClient*,
        const VerifyUserAccountRequest&,
        VerifyUserAccountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


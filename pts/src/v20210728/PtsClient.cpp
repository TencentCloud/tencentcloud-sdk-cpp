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

#include <tencentcloud/pts/v20210728/PtsClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Pts::V20210728;
using namespace TencentCloud::Pts::V20210728::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-07-28";
    const string ENDPOINT = "pts.tencentcloudapi.com";
}

PtsClient::PtsClient(const Credential &credential, const string &region) :
    PtsClient(credential, region, ClientProfile())
{
}

PtsClient::PtsClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


PtsClient::AbortCronJobsOutcome PtsClient::AbortCronJobs(const AbortCronJobsRequest &request)
{
    auto outcome = MakeRequest(request, "AbortCronJobs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AbortCronJobsResponse rsp = AbortCronJobsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AbortCronJobsOutcome(rsp);
        else
            return AbortCronJobsOutcome(o.GetError());
    }
    else
    {
        return AbortCronJobsOutcome(outcome.GetError());
    }
}

void PtsClient::AbortCronJobsAsync(const AbortCronJobsRequest& request, const AbortCronJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AbortCronJobsRequest&;
    using Resp = AbortCronJobsResponse;

    DoRequestAsync<Req, Resp>(
        "AbortCronJobs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PtsClient::AbortCronJobsOutcomeCallable PtsClient::AbortCronJobsCallable(const AbortCronJobsRequest &request)
{
    const auto prom = std::make_shared<std::promise<AbortCronJobsOutcome>>();
    AbortCronJobsAsync(
    request,
    [prom](
        const PtsClient*,
        const AbortCronJobsRequest&,
        AbortCronJobsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PtsClient::AbortJobOutcome PtsClient::AbortJob(const AbortJobRequest &request)
{
    auto outcome = MakeRequest(request, "AbortJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AbortJobResponse rsp = AbortJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AbortJobOutcome(rsp);
        else
            return AbortJobOutcome(o.GetError());
    }
    else
    {
        return AbortJobOutcome(outcome.GetError());
    }
}

void PtsClient::AbortJobAsync(const AbortJobRequest& request, const AbortJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AbortJobRequest&;
    using Resp = AbortJobResponse;

    DoRequestAsync<Req, Resp>(
        "AbortJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PtsClient::AbortJobOutcomeCallable PtsClient::AbortJobCallable(const AbortJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<AbortJobOutcome>>();
    AbortJobAsync(
    request,
    [prom](
        const PtsClient*,
        const AbortJobRequest&,
        AbortJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PtsClient::AdjustJobSpeedOutcome PtsClient::AdjustJobSpeed(const AdjustJobSpeedRequest &request)
{
    auto outcome = MakeRequest(request, "AdjustJobSpeed");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AdjustJobSpeedResponse rsp = AdjustJobSpeedResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AdjustJobSpeedOutcome(rsp);
        else
            return AdjustJobSpeedOutcome(o.GetError());
    }
    else
    {
        return AdjustJobSpeedOutcome(outcome.GetError());
    }
}

void PtsClient::AdjustJobSpeedAsync(const AdjustJobSpeedRequest& request, const AdjustJobSpeedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AdjustJobSpeedRequest&;
    using Resp = AdjustJobSpeedResponse;

    DoRequestAsync<Req, Resp>(
        "AdjustJobSpeed", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PtsClient::AdjustJobSpeedOutcomeCallable PtsClient::AdjustJobSpeedCallable(const AdjustJobSpeedRequest &request)
{
    const auto prom = std::make_shared<std::promise<AdjustJobSpeedOutcome>>();
    AdjustJobSpeedAsync(
    request,
    [prom](
        const PtsClient*,
        const AdjustJobSpeedRequest&,
        AdjustJobSpeedOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PtsClient::CopyScenarioOutcome PtsClient::CopyScenario(const CopyScenarioRequest &request)
{
    auto outcome = MakeRequest(request, "CopyScenario");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CopyScenarioResponse rsp = CopyScenarioResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CopyScenarioOutcome(rsp);
        else
            return CopyScenarioOutcome(o.GetError());
    }
    else
    {
        return CopyScenarioOutcome(outcome.GetError());
    }
}

void PtsClient::CopyScenarioAsync(const CopyScenarioRequest& request, const CopyScenarioAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CopyScenarioRequest&;
    using Resp = CopyScenarioResponse;

    DoRequestAsync<Req, Resp>(
        "CopyScenario", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PtsClient::CopyScenarioOutcomeCallable PtsClient::CopyScenarioCallable(const CopyScenarioRequest &request)
{
    const auto prom = std::make_shared<std::promise<CopyScenarioOutcome>>();
    CopyScenarioAsync(
    request,
    [prom](
        const PtsClient*,
        const CopyScenarioRequest&,
        CopyScenarioOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PtsClient::CreateAlertChannelOutcome PtsClient::CreateAlertChannel(const CreateAlertChannelRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAlertChannel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAlertChannelResponse rsp = CreateAlertChannelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAlertChannelOutcome(rsp);
        else
            return CreateAlertChannelOutcome(o.GetError());
    }
    else
    {
        return CreateAlertChannelOutcome(outcome.GetError());
    }
}

void PtsClient::CreateAlertChannelAsync(const CreateAlertChannelRequest& request, const CreateAlertChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAlertChannelRequest&;
    using Resp = CreateAlertChannelResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAlertChannel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PtsClient::CreateAlertChannelOutcomeCallable PtsClient::CreateAlertChannelCallable(const CreateAlertChannelRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAlertChannelOutcome>>();
    CreateAlertChannelAsync(
    request,
    [prom](
        const PtsClient*,
        const CreateAlertChannelRequest&,
        CreateAlertChannelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PtsClient::CreateCronJobOutcome PtsClient::CreateCronJob(const CreateCronJobRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCronJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCronJobResponse rsp = CreateCronJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCronJobOutcome(rsp);
        else
            return CreateCronJobOutcome(o.GetError());
    }
    else
    {
        return CreateCronJobOutcome(outcome.GetError());
    }
}

void PtsClient::CreateCronJobAsync(const CreateCronJobRequest& request, const CreateCronJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCronJobRequest&;
    using Resp = CreateCronJobResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCronJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PtsClient::CreateCronJobOutcomeCallable PtsClient::CreateCronJobCallable(const CreateCronJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCronJobOutcome>>();
    CreateCronJobAsync(
    request,
    [prom](
        const PtsClient*,
        const CreateCronJobRequest&,
        CreateCronJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PtsClient::CreateEnvironmentOutcome PtsClient::CreateEnvironment(const CreateEnvironmentRequest &request)
{
    auto outcome = MakeRequest(request, "CreateEnvironment");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateEnvironmentResponse rsp = CreateEnvironmentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateEnvironmentOutcome(rsp);
        else
            return CreateEnvironmentOutcome(o.GetError());
    }
    else
    {
        return CreateEnvironmentOutcome(outcome.GetError());
    }
}

void PtsClient::CreateEnvironmentAsync(const CreateEnvironmentRequest& request, const CreateEnvironmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateEnvironmentRequest&;
    using Resp = CreateEnvironmentResponse;

    DoRequestAsync<Req, Resp>(
        "CreateEnvironment", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PtsClient::CreateEnvironmentOutcomeCallable PtsClient::CreateEnvironmentCallable(const CreateEnvironmentRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateEnvironmentOutcome>>();
    CreateEnvironmentAsync(
    request,
    [prom](
        const PtsClient*,
        const CreateEnvironmentRequest&,
        CreateEnvironmentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PtsClient::CreateFileOutcome PtsClient::CreateFile(const CreateFileRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFileResponse rsp = CreateFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFileOutcome(rsp);
        else
            return CreateFileOutcome(o.GetError());
    }
    else
    {
        return CreateFileOutcome(outcome.GetError());
    }
}

void PtsClient::CreateFileAsync(const CreateFileRequest& request, const CreateFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateFileRequest&;
    using Resp = CreateFileResponse;

    DoRequestAsync<Req, Resp>(
        "CreateFile", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PtsClient::CreateFileOutcomeCallable PtsClient::CreateFileCallable(const CreateFileRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateFileOutcome>>();
    CreateFileAsync(
    request,
    [prom](
        const PtsClient*,
        const CreateFileRequest&,
        CreateFileOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PtsClient::CreateProjectOutcome PtsClient::CreateProject(const CreateProjectRequest &request)
{
    auto outcome = MakeRequest(request, "CreateProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateProjectResponse rsp = CreateProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateProjectOutcome(rsp);
        else
            return CreateProjectOutcome(o.GetError());
    }
    else
    {
        return CreateProjectOutcome(outcome.GetError());
    }
}

void PtsClient::CreateProjectAsync(const CreateProjectRequest& request, const CreateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateProjectRequest&;
    using Resp = CreateProjectResponse;

    DoRequestAsync<Req, Resp>(
        "CreateProject", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PtsClient::CreateProjectOutcomeCallable PtsClient::CreateProjectCallable(const CreateProjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateProjectOutcome>>();
    CreateProjectAsync(
    request,
    [prom](
        const PtsClient*,
        const CreateProjectRequest&,
        CreateProjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PtsClient::CreateScenarioOutcome PtsClient::CreateScenario(const CreateScenarioRequest &request)
{
    auto outcome = MakeRequest(request, "CreateScenario");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateScenarioResponse rsp = CreateScenarioResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateScenarioOutcome(rsp);
        else
            return CreateScenarioOutcome(o.GetError());
    }
    else
    {
        return CreateScenarioOutcome(outcome.GetError());
    }
}

void PtsClient::CreateScenarioAsync(const CreateScenarioRequest& request, const CreateScenarioAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateScenarioRequest&;
    using Resp = CreateScenarioResponse;

    DoRequestAsync<Req, Resp>(
        "CreateScenario", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PtsClient::CreateScenarioOutcomeCallable PtsClient::CreateScenarioCallable(const CreateScenarioRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateScenarioOutcome>>();
    CreateScenarioAsync(
    request,
    [prom](
        const PtsClient*,
        const CreateScenarioRequest&,
        CreateScenarioOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PtsClient::DeleteAlertChannelOutcome PtsClient::DeleteAlertChannel(const DeleteAlertChannelRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAlertChannel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAlertChannelResponse rsp = DeleteAlertChannelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAlertChannelOutcome(rsp);
        else
            return DeleteAlertChannelOutcome(o.GetError());
    }
    else
    {
        return DeleteAlertChannelOutcome(outcome.GetError());
    }
}

void PtsClient::DeleteAlertChannelAsync(const DeleteAlertChannelRequest& request, const DeleteAlertChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAlertChannelRequest&;
    using Resp = DeleteAlertChannelResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAlertChannel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PtsClient::DeleteAlertChannelOutcomeCallable PtsClient::DeleteAlertChannelCallable(const DeleteAlertChannelRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAlertChannelOutcome>>();
    DeleteAlertChannelAsync(
    request,
    [prom](
        const PtsClient*,
        const DeleteAlertChannelRequest&,
        DeleteAlertChannelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PtsClient::DeleteCronJobsOutcome PtsClient::DeleteCronJobs(const DeleteCronJobsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCronJobs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCronJobsResponse rsp = DeleteCronJobsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCronJobsOutcome(rsp);
        else
            return DeleteCronJobsOutcome(o.GetError());
    }
    else
    {
        return DeleteCronJobsOutcome(outcome.GetError());
    }
}

void PtsClient::DeleteCronJobsAsync(const DeleteCronJobsRequest& request, const DeleteCronJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCronJobsRequest&;
    using Resp = DeleteCronJobsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCronJobs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PtsClient::DeleteCronJobsOutcomeCallable PtsClient::DeleteCronJobsCallable(const DeleteCronJobsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCronJobsOutcome>>();
    DeleteCronJobsAsync(
    request,
    [prom](
        const PtsClient*,
        const DeleteCronJobsRequest&,
        DeleteCronJobsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PtsClient::DeleteEnvironmentsOutcome PtsClient::DeleteEnvironments(const DeleteEnvironmentsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteEnvironments");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteEnvironmentsResponse rsp = DeleteEnvironmentsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteEnvironmentsOutcome(rsp);
        else
            return DeleteEnvironmentsOutcome(o.GetError());
    }
    else
    {
        return DeleteEnvironmentsOutcome(outcome.GetError());
    }
}

void PtsClient::DeleteEnvironmentsAsync(const DeleteEnvironmentsRequest& request, const DeleteEnvironmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteEnvironmentsRequest&;
    using Resp = DeleteEnvironmentsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteEnvironments", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PtsClient::DeleteEnvironmentsOutcomeCallable PtsClient::DeleteEnvironmentsCallable(const DeleteEnvironmentsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteEnvironmentsOutcome>>();
    DeleteEnvironmentsAsync(
    request,
    [prom](
        const PtsClient*,
        const DeleteEnvironmentsRequest&,
        DeleteEnvironmentsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PtsClient::DeleteFilesOutcome PtsClient::DeleteFiles(const DeleteFilesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteFiles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteFilesResponse rsp = DeleteFilesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteFilesOutcome(rsp);
        else
            return DeleteFilesOutcome(o.GetError());
    }
    else
    {
        return DeleteFilesOutcome(outcome.GetError());
    }
}

void PtsClient::DeleteFilesAsync(const DeleteFilesRequest& request, const DeleteFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteFilesRequest&;
    using Resp = DeleteFilesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteFiles", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PtsClient::DeleteFilesOutcomeCallable PtsClient::DeleteFilesCallable(const DeleteFilesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteFilesOutcome>>();
    DeleteFilesAsync(
    request,
    [prom](
        const PtsClient*,
        const DeleteFilesRequest&,
        DeleteFilesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PtsClient::DeleteJobsOutcome PtsClient::DeleteJobs(const DeleteJobsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteJobs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteJobsResponse rsp = DeleteJobsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteJobsOutcome(rsp);
        else
            return DeleteJobsOutcome(o.GetError());
    }
    else
    {
        return DeleteJobsOutcome(outcome.GetError());
    }
}

void PtsClient::DeleteJobsAsync(const DeleteJobsRequest& request, const DeleteJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteJobsRequest&;
    using Resp = DeleteJobsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteJobs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PtsClient::DeleteJobsOutcomeCallable PtsClient::DeleteJobsCallable(const DeleteJobsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteJobsOutcome>>();
    DeleteJobsAsync(
    request,
    [prom](
        const PtsClient*,
        const DeleteJobsRequest&,
        DeleteJobsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PtsClient::DeleteProjectsOutcome PtsClient::DeleteProjects(const DeleteProjectsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteProjects");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteProjectsResponse rsp = DeleteProjectsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteProjectsOutcome(rsp);
        else
            return DeleteProjectsOutcome(o.GetError());
    }
    else
    {
        return DeleteProjectsOutcome(outcome.GetError());
    }
}

void PtsClient::DeleteProjectsAsync(const DeleteProjectsRequest& request, const DeleteProjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteProjectsRequest&;
    using Resp = DeleteProjectsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteProjects", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PtsClient::DeleteProjectsOutcomeCallable PtsClient::DeleteProjectsCallable(const DeleteProjectsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteProjectsOutcome>>();
    DeleteProjectsAsync(
    request,
    [prom](
        const PtsClient*,
        const DeleteProjectsRequest&,
        DeleteProjectsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PtsClient::DeleteScenariosOutcome PtsClient::DeleteScenarios(const DeleteScenariosRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteScenarios");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteScenariosResponse rsp = DeleteScenariosResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteScenariosOutcome(rsp);
        else
            return DeleteScenariosOutcome(o.GetError());
    }
    else
    {
        return DeleteScenariosOutcome(outcome.GetError());
    }
}

void PtsClient::DeleteScenariosAsync(const DeleteScenariosRequest& request, const DeleteScenariosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteScenariosRequest&;
    using Resp = DeleteScenariosResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteScenarios", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PtsClient::DeleteScenariosOutcomeCallable PtsClient::DeleteScenariosCallable(const DeleteScenariosRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteScenariosOutcome>>();
    DeleteScenariosAsync(
    request,
    [prom](
        const PtsClient*,
        const DeleteScenariosRequest&,
        DeleteScenariosOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PtsClient::DescribeAlertChannelsOutcome PtsClient::DescribeAlertChannels(const DescribeAlertChannelsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAlertChannels");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAlertChannelsResponse rsp = DescribeAlertChannelsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAlertChannelsOutcome(rsp);
        else
            return DescribeAlertChannelsOutcome(o.GetError());
    }
    else
    {
        return DescribeAlertChannelsOutcome(outcome.GetError());
    }
}

void PtsClient::DescribeAlertChannelsAsync(const DescribeAlertChannelsRequest& request, const DescribeAlertChannelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAlertChannelsRequest&;
    using Resp = DescribeAlertChannelsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAlertChannels", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PtsClient::DescribeAlertChannelsOutcomeCallable PtsClient::DescribeAlertChannelsCallable(const DescribeAlertChannelsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAlertChannelsOutcome>>();
    DescribeAlertChannelsAsync(
    request,
    [prom](
        const PtsClient*,
        const DescribeAlertChannelsRequest&,
        DescribeAlertChannelsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PtsClient::DescribeAlertRecordsOutcome PtsClient::DescribeAlertRecords(const DescribeAlertRecordsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAlertRecords");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAlertRecordsResponse rsp = DescribeAlertRecordsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAlertRecordsOutcome(rsp);
        else
            return DescribeAlertRecordsOutcome(o.GetError());
    }
    else
    {
        return DescribeAlertRecordsOutcome(outcome.GetError());
    }
}

void PtsClient::DescribeAlertRecordsAsync(const DescribeAlertRecordsRequest& request, const DescribeAlertRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAlertRecordsRequest&;
    using Resp = DescribeAlertRecordsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAlertRecords", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PtsClient::DescribeAlertRecordsOutcomeCallable PtsClient::DescribeAlertRecordsCallable(const DescribeAlertRecordsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAlertRecordsOutcome>>();
    DescribeAlertRecordsAsync(
    request,
    [prom](
        const PtsClient*,
        const DescribeAlertRecordsRequest&,
        DescribeAlertRecordsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PtsClient::DescribeAvailableMetricsOutcome PtsClient::DescribeAvailableMetrics(const DescribeAvailableMetricsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAvailableMetrics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAvailableMetricsResponse rsp = DescribeAvailableMetricsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAvailableMetricsOutcome(rsp);
        else
            return DescribeAvailableMetricsOutcome(o.GetError());
    }
    else
    {
        return DescribeAvailableMetricsOutcome(outcome.GetError());
    }
}

void PtsClient::DescribeAvailableMetricsAsync(const DescribeAvailableMetricsRequest& request, const DescribeAvailableMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAvailableMetricsRequest&;
    using Resp = DescribeAvailableMetricsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAvailableMetrics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PtsClient::DescribeAvailableMetricsOutcomeCallable PtsClient::DescribeAvailableMetricsCallable(const DescribeAvailableMetricsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAvailableMetricsOutcome>>();
    DescribeAvailableMetricsAsync(
    request,
    [prom](
        const PtsClient*,
        const DescribeAvailableMetricsRequest&,
        DescribeAvailableMetricsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PtsClient::DescribeCheckSummaryOutcome PtsClient::DescribeCheckSummary(const DescribeCheckSummaryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCheckSummary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCheckSummaryResponse rsp = DescribeCheckSummaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCheckSummaryOutcome(rsp);
        else
            return DescribeCheckSummaryOutcome(o.GetError());
    }
    else
    {
        return DescribeCheckSummaryOutcome(outcome.GetError());
    }
}

void PtsClient::DescribeCheckSummaryAsync(const DescribeCheckSummaryRequest& request, const DescribeCheckSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCheckSummaryRequest&;
    using Resp = DescribeCheckSummaryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCheckSummary", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PtsClient::DescribeCheckSummaryOutcomeCallable PtsClient::DescribeCheckSummaryCallable(const DescribeCheckSummaryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCheckSummaryOutcome>>();
    DescribeCheckSummaryAsync(
    request,
    [prom](
        const PtsClient*,
        const DescribeCheckSummaryRequest&,
        DescribeCheckSummaryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PtsClient::DescribeCronJobsOutcome PtsClient::DescribeCronJobs(const DescribeCronJobsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCronJobs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCronJobsResponse rsp = DescribeCronJobsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCronJobsOutcome(rsp);
        else
            return DescribeCronJobsOutcome(o.GetError());
    }
    else
    {
        return DescribeCronJobsOutcome(outcome.GetError());
    }
}

void PtsClient::DescribeCronJobsAsync(const DescribeCronJobsRequest& request, const DescribeCronJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCronJobsRequest&;
    using Resp = DescribeCronJobsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCronJobs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PtsClient::DescribeCronJobsOutcomeCallable PtsClient::DescribeCronJobsCallable(const DescribeCronJobsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCronJobsOutcome>>();
    DescribeCronJobsAsync(
    request,
    [prom](
        const PtsClient*,
        const DescribeCronJobsRequest&,
        DescribeCronJobsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PtsClient::DescribeEnvironmentsOutcome PtsClient::DescribeEnvironments(const DescribeEnvironmentsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEnvironments");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEnvironmentsResponse rsp = DescribeEnvironmentsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEnvironmentsOutcome(rsp);
        else
            return DescribeEnvironmentsOutcome(o.GetError());
    }
    else
    {
        return DescribeEnvironmentsOutcome(outcome.GetError());
    }
}

void PtsClient::DescribeEnvironmentsAsync(const DescribeEnvironmentsRequest& request, const DescribeEnvironmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEnvironmentsRequest&;
    using Resp = DescribeEnvironmentsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEnvironments", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PtsClient::DescribeEnvironmentsOutcomeCallable PtsClient::DescribeEnvironmentsCallable(const DescribeEnvironmentsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEnvironmentsOutcome>>();
    DescribeEnvironmentsAsync(
    request,
    [prom](
        const PtsClient*,
        const DescribeEnvironmentsRequest&,
        DescribeEnvironmentsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PtsClient::DescribeErrorSummaryOutcome PtsClient::DescribeErrorSummary(const DescribeErrorSummaryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeErrorSummary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeErrorSummaryResponse rsp = DescribeErrorSummaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeErrorSummaryOutcome(rsp);
        else
            return DescribeErrorSummaryOutcome(o.GetError());
    }
    else
    {
        return DescribeErrorSummaryOutcome(outcome.GetError());
    }
}

void PtsClient::DescribeErrorSummaryAsync(const DescribeErrorSummaryRequest& request, const DescribeErrorSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeErrorSummaryRequest&;
    using Resp = DescribeErrorSummaryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeErrorSummary", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PtsClient::DescribeErrorSummaryOutcomeCallable PtsClient::DescribeErrorSummaryCallable(const DescribeErrorSummaryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeErrorSummaryOutcome>>();
    DescribeErrorSummaryAsync(
    request,
    [prom](
        const PtsClient*,
        const DescribeErrorSummaryRequest&,
        DescribeErrorSummaryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PtsClient::DescribeFilesOutcome PtsClient::DescribeFiles(const DescribeFilesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFiles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFilesResponse rsp = DescribeFilesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFilesOutcome(rsp);
        else
            return DescribeFilesOutcome(o.GetError());
    }
    else
    {
        return DescribeFilesOutcome(outcome.GetError());
    }
}

void PtsClient::DescribeFilesAsync(const DescribeFilesRequest& request, const DescribeFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFilesRequest&;
    using Resp = DescribeFilesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFiles", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PtsClient::DescribeFilesOutcomeCallable PtsClient::DescribeFilesCallable(const DescribeFilesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFilesOutcome>>();
    DescribeFilesAsync(
    request,
    [prom](
        const PtsClient*,
        const DescribeFilesRequest&,
        DescribeFilesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PtsClient::DescribeJobsOutcome PtsClient::DescribeJobs(const DescribeJobsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeJobs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeJobsResponse rsp = DescribeJobsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeJobsOutcome(rsp);
        else
            return DescribeJobsOutcome(o.GetError());
    }
    else
    {
        return DescribeJobsOutcome(outcome.GetError());
    }
}

void PtsClient::DescribeJobsAsync(const DescribeJobsRequest& request, const DescribeJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeJobsRequest&;
    using Resp = DescribeJobsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeJobs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PtsClient::DescribeJobsOutcomeCallable PtsClient::DescribeJobsCallable(const DescribeJobsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeJobsOutcome>>();
    DescribeJobsAsync(
    request,
    [prom](
        const PtsClient*,
        const DescribeJobsRequest&,
        DescribeJobsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PtsClient::DescribeLabelValuesOutcome PtsClient::DescribeLabelValues(const DescribeLabelValuesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLabelValues");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLabelValuesResponse rsp = DescribeLabelValuesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLabelValuesOutcome(rsp);
        else
            return DescribeLabelValuesOutcome(o.GetError());
    }
    else
    {
        return DescribeLabelValuesOutcome(outcome.GetError());
    }
}

void PtsClient::DescribeLabelValuesAsync(const DescribeLabelValuesRequest& request, const DescribeLabelValuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLabelValuesRequest&;
    using Resp = DescribeLabelValuesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLabelValues", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PtsClient::DescribeLabelValuesOutcomeCallable PtsClient::DescribeLabelValuesCallable(const DescribeLabelValuesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLabelValuesOutcome>>();
    DescribeLabelValuesAsync(
    request,
    [prom](
        const PtsClient*,
        const DescribeLabelValuesRequest&,
        DescribeLabelValuesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PtsClient::DescribeMetricLabelWithValuesOutcome PtsClient::DescribeMetricLabelWithValues(const DescribeMetricLabelWithValuesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMetricLabelWithValues");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMetricLabelWithValuesResponse rsp = DescribeMetricLabelWithValuesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMetricLabelWithValuesOutcome(rsp);
        else
            return DescribeMetricLabelWithValuesOutcome(o.GetError());
    }
    else
    {
        return DescribeMetricLabelWithValuesOutcome(outcome.GetError());
    }
}

void PtsClient::DescribeMetricLabelWithValuesAsync(const DescribeMetricLabelWithValuesRequest& request, const DescribeMetricLabelWithValuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMetricLabelWithValuesRequest&;
    using Resp = DescribeMetricLabelWithValuesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMetricLabelWithValues", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PtsClient::DescribeMetricLabelWithValuesOutcomeCallable PtsClient::DescribeMetricLabelWithValuesCallable(const DescribeMetricLabelWithValuesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMetricLabelWithValuesOutcome>>();
    DescribeMetricLabelWithValuesAsync(
    request,
    [prom](
        const PtsClient*,
        const DescribeMetricLabelWithValuesRequest&,
        DescribeMetricLabelWithValuesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PtsClient::DescribeNormalLogsOutcome PtsClient::DescribeNormalLogs(const DescribeNormalLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNormalLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNormalLogsResponse rsp = DescribeNormalLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNormalLogsOutcome(rsp);
        else
            return DescribeNormalLogsOutcome(o.GetError());
    }
    else
    {
        return DescribeNormalLogsOutcome(outcome.GetError());
    }
}

void PtsClient::DescribeNormalLogsAsync(const DescribeNormalLogsRequest& request, const DescribeNormalLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNormalLogsRequest&;
    using Resp = DescribeNormalLogsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNormalLogs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PtsClient::DescribeNormalLogsOutcomeCallable PtsClient::DescribeNormalLogsCallable(const DescribeNormalLogsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNormalLogsOutcome>>();
    DescribeNormalLogsAsync(
    request,
    [prom](
        const PtsClient*,
        const DescribeNormalLogsRequest&,
        DescribeNormalLogsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PtsClient::DescribeProjectsOutcome PtsClient::DescribeProjects(const DescribeProjectsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProjects");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProjectsResponse rsp = DescribeProjectsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProjectsOutcome(rsp);
        else
            return DescribeProjectsOutcome(o.GetError());
    }
    else
    {
        return DescribeProjectsOutcome(outcome.GetError());
    }
}

void PtsClient::DescribeProjectsAsync(const DescribeProjectsRequest& request, const DescribeProjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeProjectsRequest&;
    using Resp = DescribeProjectsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProjects", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PtsClient::DescribeProjectsOutcomeCallable PtsClient::DescribeProjectsCallable(const DescribeProjectsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProjectsOutcome>>();
    DescribeProjectsAsync(
    request,
    [prom](
        const PtsClient*,
        const DescribeProjectsRequest&,
        DescribeProjectsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PtsClient::DescribeRegionsOutcome PtsClient::DescribeRegions(const DescribeRegionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRegions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRegionsResponse rsp = DescribeRegionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRegionsOutcome(rsp);
        else
            return DescribeRegionsOutcome(o.GetError());
    }
    else
    {
        return DescribeRegionsOutcome(outcome.GetError());
    }
}

void PtsClient::DescribeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRegionsRequest&;
    using Resp = DescribeRegionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRegions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PtsClient::DescribeRegionsOutcomeCallable PtsClient::DescribeRegionsCallable(const DescribeRegionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRegionsOutcome>>();
    DescribeRegionsAsync(
    request,
    [prom](
        const PtsClient*,
        const DescribeRegionsRequest&,
        DescribeRegionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PtsClient::DescribeRequestSummaryOutcome PtsClient::DescribeRequestSummary(const DescribeRequestSummaryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRequestSummary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRequestSummaryResponse rsp = DescribeRequestSummaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRequestSummaryOutcome(rsp);
        else
            return DescribeRequestSummaryOutcome(o.GetError());
    }
    else
    {
        return DescribeRequestSummaryOutcome(outcome.GetError());
    }
}

void PtsClient::DescribeRequestSummaryAsync(const DescribeRequestSummaryRequest& request, const DescribeRequestSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRequestSummaryRequest&;
    using Resp = DescribeRequestSummaryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRequestSummary", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PtsClient::DescribeRequestSummaryOutcomeCallable PtsClient::DescribeRequestSummaryCallable(const DescribeRequestSummaryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRequestSummaryOutcome>>();
    DescribeRequestSummaryAsync(
    request,
    [prom](
        const PtsClient*,
        const DescribeRequestSummaryRequest&,
        DescribeRequestSummaryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PtsClient::DescribeSampleBatchQueryOutcome PtsClient::DescribeSampleBatchQuery(const DescribeSampleBatchQueryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSampleBatchQuery");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSampleBatchQueryResponse rsp = DescribeSampleBatchQueryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSampleBatchQueryOutcome(rsp);
        else
            return DescribeSampleBatchQueryOutcome(o.GetError());
    }
    else
    {
        return DescribeSampleBatchQueryOutcome(outcome.GetError());
    }
}

void PtsClient::DescribeSampleBatchQueryAsync(const DescribeSampleBatchQueryRequest& request, const DescribeSampleBatchQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSampleBatchQueryRequest&;
    using Resp = DescribeSampleBatchQueryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSampleBatchQuery", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PtsClient::DescribeSampleBatchQueryOutcomeCallable PtsClient::DescribeSampleBatchQueryCallable(const DescribeSampleBatchQueryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSampleBatchQueryOutcome>>();
    DescribeSampleBatchQueryAsync(
    request,
    [prom](
        const PtsClient*,
        const DescribeSampleBatchQueryRequest&,
        DescribeSampleBatchQueryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PtsClient::DescribeSampleLogsOutcome PtsClient::DescribeSampleLogs(const DescribeSampleLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSampleLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSampleLogsResponse rsp = DescribeSampleLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSampleLogsOutcome(rsp);
        else
            return DescribeSampleLogsOutcome(o.GetError());
    }
    else
    {
        return DescribeSampleLogsOutcome(outcome.GetError());
    }
}

void PtsClient::DescribeSampleLogsAsync(const DescribeSampleLogsRequest& request, const DescribeSampleLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSampleLogsRequest&;
    using Resp = DescribeSampleLogsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSampleLogs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PtsClient::DescribeSampleLogsOutcomeCallable PtsClient::DescribeSampleLogsCallable(const DescribeSampleLogsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSampleLogsOutcome>>();
    DescribeSampleLogsAsync(
    request,
    [prom](
        const PtsClient*,
        const DescribeSampleLogsRequest&,
        DescribeSampleLogsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PtsClient::DescribeSampleMatrixBatchQueryOutcome PtsClient::DescribeSampleMatrixBatchQuery(const DescribeSampleMatrixBatchQueryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSampleMatrixBatchQuery");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSampleMatrixBatchQueryResponse rsp = DescribeSampleMatrixBatchQueryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSampleMatrixBatchQueryOutcome(rsp);
        else
            return DescribeSampleMatrixBatchQueryOutcome(o.GetError());
    }
    else
    {
        return DescribeSampleMatrixBatchQueryOutcome(outcome.GetError());
    }
}

void PtsClient::DescribeSampleMatrixBatchQueryAsync(const DescribeSampleMatrixBatchQueryRequest& request, const DescribeSampleMatrixBatchQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSampleMatrixBatchQueryRequest&;
    using Resp = DescribeSampleMatrixBatchQueryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSampleMatrixBatchQuery", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PtsClient::DescribeSampleMatrixBatchQueryOutcomeCallable PtsClient::DescribeSampleMatrixBatchQueryCallable(const DescribeSampleMatrixBatchQueryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSampleMatrixBatchQueryOutcome>>();
    DescribeSampleMatrixBatchQueryAsync(
    request,
    [prom](
        const PtsClient*,
        const DescribeSampleMatrixBatchQueryRequest&,
        DescribeSampleMatrixBatchQueryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PtsClient::DescribeSampleMatrixQueryOutcome PtsClient::DescribeSampleMatrixQuery(const DescribeSampleMatrixQueryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSampleMatrixQuery");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSampleMatrixQueryResponse rsp = DescribeSampleMatrixQueryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSampleMatrixQueryOutcome(rsp);
        else
            return DescribeSampleMatrixQueryOutcome(o.GetError());
    }
    else
    {
        return DescribeSampleMatrixQueryOutcome(outcome.GetError());
    }
}

void PtsClient::DescribeSampleMatrixQueryAsync(const DescribeSampleMatrixQueryRequest& request, const DescribeSampleMatrixQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSampleMatrixQueryRequest&;
    using Resp = DescribeSampleMatrixQueryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSampleMatrixQuery", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PtsClient::DescribeSampleMatrixQueryOutcomeCallable PtsClient::DescribeSampleMatrixQueryCallable(const DescribeSampleMatrixQueryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSampleMatrixQueryOutcome>>();
    DescribeSampleMatrixQueryAsync(
    request,
    [prom](
        const PtsClient*,
        const DescribeSampleMatrixQueryRequest&,
        DescribeSampleMatrixQueryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PtsClient::DescribeSampleQueryOutcome PtsClient::DescribeSampleQuery(const DescribeSampleQueryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSampleQuery");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSampleQueryResponse rsp = DescribeSampleQueryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSampleQueryOutcome(rsp);
        else
            return DescribeSampleQueryOutcome(o.GetError());
    }
    else
    {
        return DescribeSampleQueryOutcome(outcome.GetError());
    }
}

void PtsClient::DescribeSampleQueryAsync(const DescribeSampleQueryRequest& request, const DescribeSampleQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSampleQueryRequest&;
    using Resp = DescribeSampleQueryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSampleQuery", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PtsClient::DescribeSampleQueryOutcomeCallable PtsClient::DescribeSampleQueryCallable(const DescribeSampleQueryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSampleQueryOutcome>>();
    DescribeSampleQueryAsync(
    request,
    [prom](
        const PtsClient*,
        const DescribeSampleQueryRequest&,
        DescribeSampleQueryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PtsClient::DescribeScenarioWithJobsOutcome PtsClient::DescribeScenarioWithJobs(const DescribeScenarioWithJobsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScenarioWithJobs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScenarioWithJobsResponse rsp = DescribeScenarioWithJobsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScenarioWithJobsOutcome(rsp);
        else
            return DescribeScenarioWithJobsOutcome(o.GetError());
    }
    else
    {
        return DescribeScenarioWithJobsOutcome(outcome.GetError());
    }
}

void PtsClient::DescribeScenarioWithJobsAsync(const DescribeScenarioWithJobsRequest& request, const DescribeScenarioWithJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeScenarioWithJobsRequest&;
    using Resp = DescribeScenarioWithJobsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeScenarioWithJobs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PtsClient::DescribeScenarioWithJobsOutcomeCallable PtsClient::DescribeScenarioWithJobsCallable(const DescribeScenarioWithJobsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeScenarioWithJobsOutcome>>();
    DescribeScenarioWithJobsAsync(
    request,
    [prom](
        const PtsClient*,
        const DescribeScenarioWithJobsRequest&,
        DescribeScenarioWithJobsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PtsClient::DescribeScenariosOutcome PtsClient::DescribeScenarios(const DescribeScenariosRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScenarios");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScenariosResponse rsp = DescribeScenariosResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScenariosOutcome(rsp);
        else
            return DescribeScenariosOutcome(o.GetError());
    }
    else
    {
        return DescribeScenariosOutcome(outcome.GetError());
    }
}

void PtsClient::DescribeScenariosAsync(const DescribeScenariosRequest& request, const DescribeScenariosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeScenariosRequest&;
    using Resp = DescribeScenariosResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeScenarios", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PtsClient::DescribeScenariosOutcomeCallable PtsClient::DescribeScenariosCallable(const DescribeScenariosRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeScenariosOutcome>>();
    DescribeScenariosAsync(
    request,
    [prom](
        const PtsClient*,
        const DescribeScenariosRequest&,
        DescribeScenariosOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PtsClient::GenerateTmpKeyOutcome PtsClient::GenerateTmpKey(const GenerateTmpKeyRequest &request)
{
    auto outcome = MakeRequest(request, "GenerateTmpKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GenerateTmpKeyResponse rsp = GenerateTmpKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GenerateTmpKeyOutcome(rsp);
        else
            return GenerateTmpKeyOutcome(o.GetError());
    }
    else
    {
        return GenerateTmpKeyOutcome(outcome.GetError());
    }
}

void PtsClient::GenerateTmpKeyAsync(const GenerateTmpKeyRequest& request, const GenerateTmpKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GenerateTmpKeyRequest&;
    using Resp = GenerateTmpKeyResponse;

    DoRequestAsync<Req, Resp>(
        "GenerateTmpKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PtsClient::GenerateTmpKeyOutcomeCallable PtsClient::GenerateTmpKeyCallable(const GenerateTmpKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<GenerateTmpKeyOutcome>>();
    GenerateTmpKeyAsync(
    request,
    [prom](
        const PtsClient*,
        const GenerateTmpKeyRequest&,
        GenerateTmpKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PtsClient::RestartCronJobsOutcome PtsClient::RestartCronJobs(const RestartCronJobsRequest &request)
{
    auto outcome = MakeRequest(request, "RestartCronJobs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RestartCronJobsResponse rsp = RestartCronJobsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RestartCronJobsOutcome(rsp);
        else
            return RestartCronJobsOutcome(o.GetError());
    }
    else
    {
        return RestartCronJobsOutcome(outcome.GetError());
    }
}

void PtsClient::RestartCronJobsAsync(const RestartCronJobsRequest& request, const RestartCronJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RestartCronJobsRequest&;
    using Resp = RestartCronJobsResponse;

    DoRequestAsync<Req, Resp>(
        "RestartCronJobs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PtsClient::RestartCronJobsOutcomeCallable PtsClient::RestartCronJobsCallable(const RestartCronJobsRequest &request)
{
    const auto prom = std::make_shared<std::promise<RestartCronJobsOutcome>>();
    RestartCronJobsAsync(
    request,
    [prom](
        const PtsClient*,
        const RestartCronJobsRequest&,
        RestartCronJobsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PtsClient::StartJobOutcome PtsClient::StartJob(const StartJobRequest &request)
{
    auto outcome = MakeRequest(request, "StartJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartJobResponse rsp = StartJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartJobOutcome(rsp);
        else
            return StartJobOutcome(o.GetError());
    }
    else
    {
        return StartJobOutcome(outcome.GetError());
    }
}

void PtsClient::StartJobAsync(const StartJobRequest& request, const StartJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartJobRequest&;
    using Resp = StartJobResponse;

    DoRequestAsync<Req, Resp>(
        "StartJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PtsClient::StartJobOutcomeCallable PtsClient::StartJobCallable(const StartJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartJobOutcome>>();
    StartJobAsync(
    request,
    [prom](
        const PtsClient*,
        const StartJobRequest&,
        StartJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PtsClient::UpdateCronJobOutcome PtsClient::UpdateCronJob(const UpdateCronJobRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateCronJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateCronJobResponse rsp = UpdateCronJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateCronJobOutcome(rsp);
        else
            return UpdateCronJobOutcome(o.GetError());
    }
    else
    {
        return UpdateCronJobOutcome(outcome.GetError());
    }
}

void PtsClient::UpdateCronJobAsync(const UpdateCronJobRequest& request, const UpdateCronJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateCronJobRequest&;
    using Resp = UpdateCronJobResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateCronJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PtsClient::UpdateCronJobOutcomeCallable PtsClient::UpdateCronJobCallable(const UpdateCronJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateCronJobOutcome>>();
    UpdateCronJobAsync(
    request,
    [prom](
        const PtsClient*,
        const UpdateCronJobRequest&,
        UpdateCronJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PtsClient::UpdateEnvironmentOutcome PtsClient::UpdateEnvironment(const UpdateEnvironmentRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateEnvironment");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateEnvironmentResponse rsp = UpdateEnvironmentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateEnvironmentOutcome(rsp);
        else
            return UpdateEnvironmentOutcome(o.GetError());
    }
    else
    {
        return UpdateEnvironmentOutcome(outcome.GetError());
    }
}

void PtsClient::UpdateEnvironmentAsync(const UpdateEnvironmentRequest& request, const UpdateEnvironmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateEnvironmentRequest&;
    using Resp = UpdateEnvironmentResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateEnvironment", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PtsClient::UpdateEnvironmentOutcomeCallable PtsClient::UpdateEnvironmentCallable(const UpdateEnvironmentRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateEnvironmentOutcome>>();
    UpdateEnvironmentAsync(
    request,
    [prom](
        const PtsClient*,
        const UpdateEnvironmentRequest&,
        UpdateEnvironmentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PtsClient::UpdateFileScenarioRelationOutcome PtsClient::UpdateFileScenarioRelation(const UpdateFileScenarioRelationRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateFileScenarioRelation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateFileScenarioRelationResponse rsp = UpdateFileScenarioRelationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateFileScenarioRelationOutcome(rsp);
        else
            return UpdateFileScenarioRelationOutcome(o.GetError());
    }
    else
    {
        return UpdateFileScenarioRelationOutcome(outcome.GetError());
    }
}

void PtsClient::UpdateFileScenarioRelationAsync(const UpdateFileScenarioRelationRequest& request, const UpdateFileScenarioRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateFileScenarioRelationRequest&;
    using Resp = UpdateFileScenarioRelationResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateFileScenarioRelation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PtsClient::UpdateFileScenarioRelationOutcomeCallable PtsClient::UpdateFileScenarioRelationCallable(const UpdateFileScenarioRelationRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateFileScenarioRelationOutcome>>();
    UpdateFileScenarioRelationAsync(
    request,
    [prom](
        const PtsClient*,
        const UpdateFileScenarioRelationRequest&,
        UpdateFileScenarioRelationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PtsClient::UpdateJobOutcome PtsClient::UpdateJob(const UpdateJobRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateJobResponse rsp = UpdateJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateJobOutcome(rsp);
        else
            return UpdateJobOutcome(o.GetError());
    }
    else
    {
        return UpdateJobOutcome(outcome.GetError());
    }
}

void PtsClient::UpdateJobAsync(const UpdateJobRequest& request, const UpdateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateJobRequest&;
    using Resp = UpdateJobResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PtsClient::UpdateJobOutcomeCallable PtsClient::UpdateJobCallable(const UpdateJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateJobOutcome>>();
    UpdateJobAsync(
    request,
    [prom](
        const PtsClient*,
        const UpdateJobRequest&,
        UpdateJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PtsClient::UpdateProjectOutcome PtsClient::UpdateProject(const UpdateProjectRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateProjectResponse rsp = UpdateProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateProjectOutcome(rsp);
        else
            return UpdateProjectOutcome(o.GetError());
    }
    else
    {
        return UpdateProjectOutcome(outcome.GetError());
    }
}

void PtsClient::UpdateProjectAsync(const UpdateProjectRequest& request, const UpdateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateProjectRequest&;
    using Resp = UpdateProjectResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateProject", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PtsClient::UpdateProjectOutcomeCallable PtsClient::UpdateProjectCallable(const UpdateProjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateProjectOutcome>>();
    UpdateProjectAsync(
    request,
    [prom](
        const PtsClient*,
        const UpdateProjectRequest&,
        UpdateProjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PtsClient::UpdateScenarioOutcome PtsClient::UpdateScenario(const UpdateScenarioRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateScenario");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateScenarioResponse rsp = UpdateScenarioResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateScenarioOutcome(rsp);
        else
            return UpdateScenarioOutcome(o.GetError());
    }
    else
    {
        return UpdateScenarioOutcome(outcome.GetError());
    }
}

void PtsClient::UpdateScenarioAsync(const UpdateScenarioRequest& request, const UpdateScenarioAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateScenarioRequest&;
    using Resp = UpdateScenarioResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateScenario", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PtsClient::UpdateScenarioOutcomeCallable PtsClient::UpdateScenarioCallable(const UpdateScenarioRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateScenarioOutcome>>();
    UpdateScenarioAsync(
    request,
    [prom](
        const PtsClient*,
        const UpdateScenarioRequest&,
        UpdateScenarioOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


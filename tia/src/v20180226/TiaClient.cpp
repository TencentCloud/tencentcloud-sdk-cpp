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

#include <tencentcloud/tia/v20180226/TiaClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tia::V20180226;
using namespace TencentCloud::Tia::V20180226::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-02-26";
    const string ENDPOINT = "tia.tencentcloudapi.com";
}

TiaClient::TiaClient(const Credential &credential, const string &region) :
    TiaClient(credential, region, ClientProfile())
{
}

TiaClient::TiaClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TiaClient::CreateJobOutcome TiaClient::CreateJob(const CreateJobRequest &request)
{
    auto outcome = MakeRequest(request, "CreateJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateJobResponse rsp = CreateJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateJobOutcome(rsp);
        else
            return CreateJobOutcome(o.GetError());
    }
    else
    {
        return CreateJobOutcome(outcome.GetError());
    }
}

void TiaClient::CreateJobAsync(const CreateJobRequest& request, const CreateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateJobRequest&;
    using Resp = CreateJobResponse;

    DoRequestAsync<Req, Resp>(
        "CreateJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiaClient::CreateJobOutcomeCallable TiaClient::CreateJobCallable(const CreateJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateJobOutcome>>();
    CreateJobAsync(
    request,
    [prom](
        const TiaClient*,
        const CreateJobRequest&,
        CreateJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiaClient::CreateModelOutcome TiaClient::CreateModel(const CreateModelRequest &request)
{
    auto outcome = MakeRequest(request, "CreateModel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateModelResponse rsp = CreateModelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateModelOutcome(rsp);
        else
            return CreateModelOutcome(o.GetError());
    }
    else
    {
        return CreateModelOutcome(outcome.GetError());
    }
}

void TiaClient::CreateModelAsync(const CreateModelRequest& request, const CreateModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateModelRequest&;
    using Resp = CreateModelResponse;

    DoRequestAsync<Req, Resp>(
        "CreateModel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiaClient::CreateModelOutcomeCallable TiaClient::CreateModelCallable(const CreateModelRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateModelOutcome>>();
    CreateModelAsync(
    request,
    [prom](
        const TiaClient*,
        const CreateModelRequest&,
        CreateModelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiaClient::DeleteJobOutcome TiaClient::DeleteJob(const DeleteJobRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteJobResponse rsp = DeleteJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteJobOutcome(rsp);
        else
            return DeleteJobOutcome(o.GetError());
    }
    else
    {
        return DeleteJobOutcome(outcome.GetError());
    }
}

void TiaClient::DeleteJobAsync(const DeleteJobRequest& request, const DeleteJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteJobRequest&;
    using Resp = DeleteJobResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiaClient::DeleteJobOutcomeCallable TiaClient::DeleteJobCallable(const DeleteJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteJobOutcome>>();
    DeleteJobAsync(
    request,
    [prom](
        const TiaClient*,
        const DeleteJobRequest&,
        DeleteJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiaClient::DeleteModelOutcome TiaClient::DeleteModel(const DeleteModelRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteModel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteModelResponse rsp = DeleteModelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteModelOutcome(rsp);
        else
            return DeleteModelOutcome(o.GetError());
    }
    else
    {
        return DeleteModelOutcome(outcome.GetError());
    }
}

void TiaClient::DeleteModelAsync(const DeleteModelRequest& request, const DeleteModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteModelRequest&;
    using Resp = DeleteModelResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteModel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiaClient::DeleteModelOutcomeCallable TiaClient::DeleteModelCallable(const DeleteModelRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteModelOutcome>>();
    DeleteModelAsync(
    request,
    [prom](
        const TiaClient*,
        const DeleteModelRequest&,
        DeleteModelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiaClient::DescribeJobOutcome TiaClient::DescribeJob(const DescribeJobRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeJobResponse rsp = DescribeJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeJobOutcome(rsp);
        else
            return DescribeJobOutcome(o.GetError());
    }
    else
    {
        return DescribeJobOutcome(outcome.GetError());
    }
}

void TiaClient::DescribeJobAsync(const DescribeJobRequest& request, const DescribeJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeJobRequest&;
    using Resp = DescribeJobResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiaClient::DescribeJobOutcomeCallable TiaClient::DescribeJobCallable(const DescribeJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeJobOutcome>>();
    DescribeJobAsync(
    request,
    [prom](
        const TiaClient*,
        const DescribeJobRequest&,
        DescribeJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiaClient::DescribeModelOutcome TiaClient::DescribeModel(const DescribeModelRequest &request)
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

void TiaClient::DescribeModelAsync(const DescribeModelRequest& request, const DescribeModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeModelRequest&;
    using Resp = DescribeModelResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeModel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiaClient::DescribeModelOutcomeCallable TiaClient::DescribeModelCallable(const DescribeModelRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeModelOutcome>>();
    DescribeModelAsync(
    request,
    [prom](
        const TiaClient*,
        const DescribeModelRequest&,
        DescribeModelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiaClient::InstallAgentOutcome TiaClient::InstallAgent(const InstallAgentRequest &request)
{
    auto outcome = MakeRequest(request, "InstallAgent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InstallAgentResponse rsp = InstallAgentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InstallAgentOutcome(rsp);
        else
            return InstallAgentOutcome(o.GetError());
    }
    else
    {
        return InstallAgentOutcome(outcome.GetError());
    }
}

void TiaClient::InstallAgentAsync(const InstallAgentRequest& request, const InstallAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const InstallAgentRequest&;
    using Resp = InstallAgentResponse;

    DoRequestAsync<Req, Resp>(
        "InstallAgent", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiaClient::InstallAgentOutcomeCallable TiaClient::InstallAgentCallable(const InstallAgentRequest &request)
{
    const auto prom = std::make_shared<std::promise<InstallAgentOutcome>>();
    InstallAgentAsync(
    request,
    [prom](
        const TiaClient*,
        const InstallAgentRequest&,
        InstallAgentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiaClient::ListJobsOutcome TiaClient::ListJobs(const ListJobsRequest &request)
{
    auto outcome = MakeRequest(request, "ListJobs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListJobsResponse rsp = ListJobsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListJobsOutcome(rsp);
        else
            return ListJobsOutcome(o.GetError());
    }
    else
    {
        return ListJobsOutcome(outcome.GetError());
    }
}

void TiaClient::ListJobsAsync(const ListJobsRequest& request, const ListJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListJobsRequest&;
    using Resp = ListJobsResponse;

    DoRequestAsync<Req, Resp>(
        "ListJobs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiaClient::ListJobsOutcomeCallable TiaClient::ListJobsCallable(const ListJobsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListJobsOutcome>>();
    ListJobsAsync(
    request,
    [prom](
        const TiaClient*,
        const ListJobsRequest&,
        ListJobsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiaClient::ListModelsOutcome TiaClient::ListModels(const ListModelsRequest &request)
{
    auto outcome = MakeRequest(request, "ListModels");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListModelsResponse rsp = ListModelsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListModelsOutcome(rsp);
        else
            return ListModelsOutcome(o.GetError());
    }
    else
    {
        return ListModelsOutcome(outcome.GetError());
    }
}

void TiaClient::ListModelsAsync(const ListModelsRequest& request, const ListModelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListModelsRequest&;
    using Resp = ListModelsResponse;

    DoRequestAsync<Req, Resp>(
        "ListModels", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiaClient::ListModelsOutcomeCallable TiaClient::ListModelsCallable(const ListModelsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListModelsOutcome>>();
    ListModelsAsync(
    request,
    [prom](
        const TiaClient*,
        const ListModelsRequest&,
        ListModelsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiaClient::QueryLogsOutcome TiaClient::QueryLogs(const QueryLogsRequest &request)
{
    auto outcome = MakeRequest(request, "QueryLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryLogsResponse rsp = QueryLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryLogsOutcome(rsp);
        else
            return QueryLogsOutcome(o.GetError());
    }
    else
    {
        return QueryLogsOutcome(outcome.GetError());
    }
}

void TiaClient::QueryLogsAsync(const QueryLogsRequest& request, const QueryLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryLogsRequest&;
    using Resp = QueryLogsResponse;

    DoRequestAsync<Req, Resp>(
        "QueryLogs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiaClient::QueryLogsOutcomeCallable TiaClient::QueryLogsCallable(const QueryLogsRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryLogsOutcome>>();
    QueryLogsAsync(
    request,
    [prom](
        const TiaClient*,
        const QueryLogsRequest&,
        QueryLogsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


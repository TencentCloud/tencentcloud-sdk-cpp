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

#include <tencentcloud/databuddy/v20260715/DatabuddyClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Databuddy::V20260715;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

namespace
{
    const string VERSION = "2026-07-15";
    const string ENDPOINT = "databuddy.tencentcloudapi.com";
}

DatabuddyClient::DatabuddyClient(const Credential &credential, const string &region) :
    DatabuddyClient(credential, region, ClientProfile())
{
}

DatabuddyClient::DatabuddyClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


DatabuddyClient::CreateFileOutcome DatabuddyClient::CreateFile(const CreateFileRequest &request)
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

void DatabuddyClient::CreateFileAsync(const CreateFileRequest& request, const CreateFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

DatabuddyClient::CreateFileOutcomeCallable DatabuddyClient::CreateFileCallable(const CreateFileRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateFileOutcome>>();
    CreateFileAsync(
    request,
    [prom](
        const DatabuddyClient*,
        const CreateFileRequest&,
        CreateFileOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DatabuddyClient::CreateWorkflowOutcome DatabuddyClient::CreateWorkflow(const CreateWorkflowRequest &request)
{
    auto outcome = MakeRequest(request, "CreateWorkflow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateWorkflowResponse rsp = CreateWorkflowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateWorkflowOutcome(rsp);
        else
            return CreateWorkflowOutcome(o.GetError());
    }
    else
    {
        return CreateWorkflowOutcome(outcome.GetError());
    }
}

void DatabuddyClient::CreateWorkflowAsync(const CreateWorkflowRequest& request, const CreateWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateWorkflowRequest&;
    using Resp = CreateWorkflowResponse;

    DoRequestAsync<Req, Resp>(
        "CreateWorkflow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DatabuddyClient::CreateWorkflowOutcomeCallable DatabuddyClient::CreateWorkflowCallable(const CreateWorkflowRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateWorkflowOutcome>>();
    CreateWorkflowAsync(
    request,
    [prom](
        const DatabuddyClient*,
        const CreateWorkflowRequest&,
        CreateWorkflowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DatabuddyClient::DeleteFileOutcome DatabuddyClient::DeleteFile(const DeleteFileRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteFileResponse rsp = DeleteFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteFileOutcome(rsp);
        else
            return DeleteFileOutcome(o.GetError());
    }
    else
    {
        return DeleteFileOutcome(outcome.GetError());
    }
}

void DatabuddyClient::DeleteFileAsync(const DeleteFileRequest& request, const DeleteFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteFileRequest&;
    using Resp = DeleteFileResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteFile", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DatabuddyClient::DeleteFileOutcomeCallable DatabuddyClient::DeleteFileCallable(const DeleteFileRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteFileOutcome>>();
    DeleteFileAsync(
    request,
    [prom](
        const DatabuddyClient*,
        const DeleteFileRequest&,
        DeleteFileOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DatabuddyClient::DeleteWorkflowOutcome DatabuddyClient::DeleteWorkflow(const DeleteWorkflowRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteWorkflow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteWorkflowResponse rsp = DeleteWorkflowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteWorkflowOutcome(rsp);
        else
            return DeleteWorkflowOutcome(o.GetError());
    }
    else
    {
        return DeleteWorkflowOutcome(outcome.GetError());
    }
}

void DatabuddyClient::DeleteWorkflowAsync(const DeleteWorkflowRequest& request, const DeleteWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteWorkflowRequest&;
    using Resp = DeleteWorkflowResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteWorkflow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DatabuddyClient::DeleteWorkflowOutcomeCallable DatabuddyClient::DeleteWorkflowCallable(const DeleteWorkflowRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteWorkflowOutcome>>();
    DeleteWorkflowAsync(
    request,
    [prom](
        const DatabuddyClient*,
        const DeleteWorkflowRequest&,
        DeleteWorkflowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DatabuddyClient::GetFileOutcome DatabuddyClient::GetFile(const GetFileRequest &request)
{
    auto outcome = MakeRequest(request, "GetFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetFileResponse rsp = GetFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetFileOutcome(rsp);
        else
            return GetFileOutcome(o.GetError());
    }
    else
    {
        return GetFileOutcome(outcome.GetError());
    }
}

void DatabuddyClient::GetFileAsync(const GetFileRequest& request, const GetFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetFileRequest&;
    using Resp = GetFileResponse;

    DoRequestAsync<Req, Resp>(
        "GetFile", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DatabuddyClient::GetFileOutcomeCallable DatabuddyClient::GetFileCallable(const GetFileRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetFileOutcome>>();
    GetFileAsync(
    request,
    [prom](
        const DatabuddyClient*,
        const GetFileRequest&,
        GetFileOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DatabuddyClient::GetWorkflowOutcome DatabuddyClient::GetWorkflow(const GetWorkflowRequest &request)
{
    auto outcome = MakeRequest(request, "GetWorkflow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetWorkflowResponse rsp = GetWorkflowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetWorkflowOutcome(rsp);
        else
            return GetWorkflowOutcome(o.GetError());
    }
    else
    {
        return GetWorkflowOutcome(outcome.GetError());
    }
}

void DatabuddyClient::GetWorkflowAsync(const GetWorkflowRequest& request, const GetWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetWorkflowRequest&;
    using Resp = GetWorkflowResponse;

    DoRequestAsync<Req, Resp>(
        "GetWorkflow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DatabuddyClient::GetWorkflowOutcomeCallable DatabuddyClient::GetWorkflowCallable(const GetWorkflowRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetWorkflowOutcome>>();
    GetWorkflowAsync(
    request,
    [prom](
        const DatabuddyClient*,
        const GetWorkflowRequest&,
        GetWorkflowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DatabuddyClient::GetWorkflowRunOutcome DatabuddyClient::GetWorkflowRun(const GetWorkflowRunRequest &request)
{
    auto outcome = MakeRequest(request, "GetWorkflowRun");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetWorkflowRunResponse rsp = GetWorkflowRunResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetWorkflowRunOutcome(rsp);
        else
            return GetWorkflowRunOutcome(o.GetError());
    }
    else
    {
        return GetWorkflowRunOutcome(outcome.GetError());
    }
}

void DatabuddyClient::GetWorkflowRunAsync(const GetWorkflowRunRequest& request, const GetWorkflowRunAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetWorkflowRunRequest&;
    using Resp = GetWorkflowRunResponse;

    DoRequestAsync<Req, Resp>(
        "GetWorkflowRun", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DatabuddyClient::GetWorkflowRunOutcomeCallable DatabuddyClient::GetWorkflowRunCallable(const GetWorkflowRunRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetWorkflowRunOutcome>>();
    GetWorkflowRunAsync(
    request,
    [prom](
        const DatabuddyClient*,
        const GetWorkflowRunRequest&,
        GetWorkflowRunOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DatabuddyClient::GetWorkflowTaskRunOutcome DatabuddyClient::GetWorkflowTaskRun(const GetWorkflowTaskRunRequest &request)
{
    auto outcome = MakeRequest(request, "GetWorkflowTaskRun");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetWorkflowTaskRunResponse rsp = GetWorkflowTaskRunResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetWorkflowTaskRunOutcome(rsp);
        else
            return GetWorkflowTaskRunOutcome(o.GetError());
    }
    else
    {
        return GetWorkflowTaskRunOutcome(outcome.GetError());
    }
}

void DatabuddyClient::GetWorkflowTaskRunAsync(const GetWorkflowTaskRunRequest& request, const GetWorkflowTaskRunAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetWorkflowTaskRunRequest&;
    using Resp = GetWorkflowTaskRunResponse;

    DoRequestAsync<Req, Resp>(
        "GetWorkflowTaskRun", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DatabuddyClient::GetWorkflowTaskRunOutcomeCallable DatabuddyClient::GetWorkflowTaskRunCallable(const GetWorkflowTaskRunRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetWorkflowTaskRunOutcome>>();
    GetWorkflowTaskRunAsync(
    request,
    [prom](
        const DatabuddyClient*,
        const GetWorkflowTaskRunRequest&,
        GetWorkflowTaskRunOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DatabuddyClient::KillWorkflowRunOutcome DatabuddyClient::KillWorkflowRun(const KillWorkflowRunRequest &request)
{
    auto outcome = MakeRequest(request, "KillWorkflowRun");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        KillWorkflowRunResponse rsp = KillWorkflowRunResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return KillWorkflowRunOutcome(rsp);
        else
            return KillWorkflowRunOutcome(o.GetError());
    }
    else
    {
        return KillWorkflowRunOutcome(outcome.GetError());
    }
}

void DatabuddyClient::KillWorkflowRunAsync(const KillWorkflowRunRequest& request, const KillWorkflowRunAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const KillWorkflowRunRequest&;
    using Resp = KillWorkflowRunResponse;

    DoRequestAsync<Req, Resp>(
        "KillWorkflowRun", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DatabuddyClient::KillWorkflowRunOutcomeCallable DatabuddyClient::KillWorkflowRunCallable(const KillWorkflowRunRequest &request)
{
    const auto prom = std::make_shared<std::promise<KillWorkflowRunOutcome>>();
    KillWorkflowRunAsync(
    request,
    [prom](
        const DatabuddyClient*,
        const KillWorkflowRunRequest&,
        KillWorkflowRunOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DatabuddyClient::ListWorkflowRunsOutcome DatabuddyClient::ListWorkflowRuns(const ListWorkflowRunsRequest &request)
{
    auto outcome = MakeRequest(request, "ListWorkflowRuns");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListWorkflowRunsResponse rsp = ListWorkflowRunsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListWorkflowRunsOutcome(rsp);
        else
            return ListWorkflowRunsOutcome(o.GetError());
    }
    else
    {
        return ListWorkflowRunsOutcome(outcome.GetError());
    }
}

void DatabuddyClient::ListWorkflowRunsAsync(const ListWorkflowRunsRequest& request, const ListWorkflowRunsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListWorkflowRunsRequest&;
    using Resp = ListWorkflowRunsResponse;

    DoRequestAsync<Req, Resp>(
        "ListWorkflowRuns", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DatabuddyClient::ListWorkflowRunsOutcomeCallable DatabuddyClient::ListWorkflowRunsCallable(const ListWorkflowRunsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListWorkflowRunsOutcome>>();
    ListWorkflowRunsAsync(
    request,
    [prom](
        const DatabuddyClient*,
        const ListWorkflowRunsRequest&,
        ListWorkflowRunsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DatabuddyClient::ListWorkflowTaskRunsOutcome DatabuddyClient::ListWorkflowTaskRuns(const ListWorkflowTaskRunsRequest &request)
{
    auto outcome = MakeRequest(request, "ListWorkflowTaskRuns");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListWorkflowTaskRunsResponse rsp = ListWorkflowTaskRunsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListWorkflowTaskRunsOutcome(rsp);
        else
            return ListWorkflowTaskRunsOutcome(o.GetError());
    }
    else
    {
        return ListWorkflowTaskRunsOutcome(outcome.GetError());
    }
}

void DatabuddyClient::ListWorkflowTaskRunsAsync(const ListWorkflowTaskRunsRequest& request, const ListWorkflowTaskRunsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListWorkflowTaskRunsRequest&;
    using Resp = ListWorkflowTaskRunsResponse;

    DoRequestAsync<Req, Resp>(
        "ListWorkflowTaskRuns", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DatabuddyClient::ListWorkflowTaskRunsOutcomeCallable DatabuddyClient::ListWorkflowTaskRunsCallable(const ListWorkflowTaskRunsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListWorkflowTaskRunsOutcome>>();
    ListWorkflowTaskRunsAsync(
    request,
    [prom](
        const DatabuddyClient*,
        const ListWorkflowTaskRunsRequest&,
        ListWorkflowTaskRunsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DatabuddyClient::ListWorkflowsOutcome DatabuddyClient::ListWorkflows(const ListWorkflowsRequest &request)
{
    auto outcome = MakeRequest(request, "ListWorkflows");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListWorkflowsResponse rsp = ListWorkflowsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListWorkflowsOutcome(rsp);
        else
            return ListWorkflowsOutcome(o.GetError());
    }
    else
    {
        return ListWorkflowsOutcome(outcome.GetError());
    }
}

void DatabuddyClient::ListWorkflowsAsync(const ListWorkflowsRequest& request, const ListWorkflowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListWorkflowsRequest&;
    using Resp = ListWorkflowsResponse;

    DoRequestAsync<Req, Resp>(
        "ListWorkflows", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DatabuddyClient::ListWorkflowsOutcomeCallable DatabuddyClient::ListWorkflowsCallable(const ListWorkflowsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListWorkflowsOutcome>>();
    ListWorkflowsAsync(
    request,
    [prom](
        const DatabuddyClient*,
        const ListWorkflowsRequest&,
        ListWorkflowsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DatabuddyClient::RerunWorkflowRunOutcome DatabuddyClient::RerunWorkflowRun(const RerunWorkflowRunRequest &request)
{
    auto outcome = MakeRequest(request, "RerunWorkflowRun");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RerunWorkflowRunResponse rsp = RerunWorkflowRunResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RerunWorkflowRunOutcome(rsp);
        else
            return RerunWorkflowRunOutcome(o.GetError());
    }
    else
    {
        return RerunWorkflowRunOutcome(outcome.GetError());
    }
}

void DatabuddyClient::RerunWorkflowRunAsync(const RerunWorkflowRunRequest& request, const RerunWorkflowRunAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RerunWorkflowRunRequest&;
    using Resp = RerunWorkflowRunResponse;

    DoRequestAsync<Req, Resp>(
        "RerunWorkflowRun", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DatabuddyClient::RerunWorkflowRunOutcomeCallable DatabuddyClient::RerunWorkflowRunCallable(const RerunWorkflowRunRequest &request)
{
    const auto prom = std::make_shared<std::promise<RerunWorkflowRunOutcome>>();
    RerunWorkflowRunAsync(
    request,
    [prom](
        const DatabuddyClient*,
        const RerunWorkflowRunRequest&,
        RerunWorkflowRunOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DatabuddyClient::RunWorkflowOutcome DatabuddyClient::RunWorkflow(const RunWorkflowRequest &request)
{
    auto outcome = MakeRequest(request, "RunWorkflow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RunWorkflowResponse rsp = RunWorkflowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RunWorkflowOutcome(rsp);
        else
            return RunWorkflowOutcome(o.GetError());
    }
    else
    {
        return RunWorkflowOutcome(outcome.GetError());
    }
}

void DatabuddyClient::RunWorkflowAsync(const RunWorkflowRequest& request, const RunWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RunWorkflowRequest&;
    using Resp = RunWorkflowResponse;

    DoRequestAsync<Req, Resp>(
        "RunWorkflow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DatabuddyClient::RunWorkflowOutcomeCallable DatabuddyClient::RunWorkflowCallable(const RunWorkflowRequest &request)
{
    const auto prom = std::make_shared<std::promise<RunWorkflowOutcome>>();
    RunWorkflowAsync(
    request,
    [prom](
        const DatabuddyClient*,
        const RunWorkflowRequest&,
        RunWorkflowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DatabuddyClient::UnbindWorkflowBundleOutcome DatabuddyClient::UnbindWorkflowBundle(const UnbindWorkflowBundleRequest &request)
{
    auto outcome = MakeRequest(request, "UnbindWorkflowBundle");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnbindWorkflowBundleResponse rsp = UnbindWorkflowBundleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnbindWorkflowBundleOutcome(rsp);
        else
            return UnbindWorkflowBundleOutcome(o.GetError());
    }
    else
    {
        return UnbindWorkflowBundleOutcome(outcome.GetError());
    }
}

void DatabuddyClient::UnbindWorkflowBundleAsync(const UnbindWorkflowBundleRequest& request, const UnbindWorkflowBundleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UnbindWorkflowBundleRequest&;
    using Resp = UnbindWorkflowBundleResponse;

    DoRequestAsync<Req, Resp>(
        "UnbindWorkflowBundle", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DatabuddyClient::UnbindWorkflowBundleOutcomeCallable DatabuddyClient::UnbindWorkflowBundleCallable(const UnbindWorkflowBundleRequest &request)
{
    const auto prom = std::make_shared<std::promise<UnbindWorkflowBundleOutcome>>();
    UnbindWorkflowBundleAsync(
    request,
    [prom](
        const DatabuddyClient*,
        const UnbindWorkflowBundleRequest&,
        UnbindWorkflowBundleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DatabuddyClient::UpdateFileOutcome DatabuddyClient::UpdateFile(const UpdateFileRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateFileResponse rsp = UpdateFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateFileOutcome(rsp);
        else
            return UpdateFileOutcome(o.GetError());
    }
    else
    {
        return UpdateFileOutcome(outcome.GetError());
    }
}

void DatabuddyClient::UpdateFileAsync(const UpdateFileRequest& request, const UpdateFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateFileRequest&;
    using Resp = UpdateFileResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateFile", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DatabuddyClient::UpdateFileOutcomeCallable DatabuddyClient::UpdateFileCallable(const UpdateFileRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateFileOutcome>>();
    UpdateFileAsync(
    request,
    [prom](
        const DatabuddyClient*,
        const UpdateFileRequest&,
        UpdateFileOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DatabuddyClient::UpdateWorkflowOutcome DatabuddyClient::UpdateWorkflow(const UpdateWorkflowRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateWorkflow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateWorkflowResponse rsp = UpdateWorkflowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateWorkflowOutcome(rsp);
        else
            return UpdateWorkflowOutcome(o.GetError());
    }
    else
    {
        return UpdateWorkflowOutcome(outcome.GetError());
    }
}

void DatabuddyClient::UpdateWorkflowAsync(const UpdateWorkflowRequest& request, const UpdateWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateWorkflowRequest&;
    using Resp = UpdateWorkflowResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateWorkflow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DatabuddyClient::UpdateWorkflowOutcomeCallable DatabuddyClient::UpdateWorkflowCallable(const UpdateWorkflowRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateWorkflowOutcome>>();
    UpdateWorkflowAsync(
    request,
    [prom](
        const DatabuddyClient*,
        const UpdateWorkflowRequest&,
        UpdateWorkflowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


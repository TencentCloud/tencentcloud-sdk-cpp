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

#include <tencentcloud/cat/v20180409/CatClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Cat::V20180409;
using namespace TencentCloud::Cat::V20180409::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-04-09";
    const string ENDPOINT = "cat.tencentcloudapi.com";
}

CatClient::CatClient(const Credential &credential, const string &region) :
    CatClient(credential, region, ClientProfile())
{
}

CatClient::CatClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CatClient::CreateProbeTasksOutcome CatClient::CreateProbeTasks(const CreateProbeTasksRequest &request)
{
    auto outcome = MakeRequest(request, "CreateProbeTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateProbeTasksResponse rsp = CreateProbeTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateProbeTasksOutcome(rsp);
        else
            return CreateProbeTasksOutcome(o.GetError());
    }
    else
    {
        return CreateProbeTasksOutcome(outcome.GetError());
    }
}

void CatClient::CreateProbeTasksAsync(const CreateProbeTasksRequest& request, const CreateProbeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateProbeTasksRequest&;
    using Resp = CreateProbeTasksResponse;

    DoRequestAsync<Req, Resp>(
        "CreateProbeTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CatClient::CreateProbeTasksOutcomeCallable CatClient::CreateProbeTasksCallable(const CreateProbeTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateProbeTasksOutcome>>();
    CreateProbeTasksAsync(
    request,
    [prom](
        const CatClient*,
        const CreateProbeTasksRequest&,
        CreateProbeTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CatClient::DeleteProbeTaskOutcome CatClient::DeleteProbeTask(const DeleteProbeTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteProbeTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteProbeTaskResponse rsp = DeleteProbeTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteProbeTaskOutcome(rsp);
        else
            return DeleteProbeTaskOutcome(o.GetError());
    }
    else
    {
        return DeleteProbeTaskOutcome(outcome.GetError());
    }
}

void CatClient::DeleteProbeTaskAsync(const DeleteProbeTaskRequest& request, const DeleteProbeTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteProbeTaskRequest&;
    using Resp = DeleteProbeTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteProbeTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CatClient::DeleteProbeTaskOutcomeCallable CatClient::DeleteProbeTaskCallable(const DeleteProbeTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteProbeTaskOutcome>>();
    DeleteProbeTaskAsync(
    request,
    [prom](
        const CatClient*,
        const DeleteProbeTaskRequest&,
        DeleteProbeTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CatClient::DescribeDetailedSingleProbeDataOutcome CatClient::DescribeDetailedSingleProbeData(const DescribeDetailedSingleProbeDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDetailedSingleProbeData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDetailedSingleProbeDataResponse rsp = DescribeDetailedSingleProbeDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDetailedSingleProbeDataOutcome(rsp);
        else
            return DescribeDetailedSingleProbeDataOutcome(o.GetError());
    }
    else
    {
        return DescribeDetailedSingleProbeDataOutcome(outcome.GetError());
    }
}

void CatClient::DescribeDetailedSingleProbeDataAsync(const DescribeDetailedSingleProbeDataRequest& request, const DescribeDetailedSingleProbeDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDetailedSingleProbeDataRequest&;
    using Resp = DescribeDetailedSingleProbeDataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDetailedSingleProbeData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CatClient::DescribeDetailedSingleProbeDataOutcomeCallable CatClient::DescribeDetailedSingleProbeDataCallable(const DescribeDetailedSingleProbeDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDetailedSingleProbeDataOutcome>>();
    DescribeDetailedSingleProbeDataAsync(
    request,
    [prom](
        const CatClient*,
        const DescribeDetailedSingleProbeDataRequest&,
        DescribeDetailedSingleProbeDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CatClient::DescribeInstantTasksOutcome CatClient::DescribeInstantTasks(const DescribeInstantTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstantTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstantTasksResponse rsp = DescribeInstantTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstantTasksOutcome(rsp);
        else
            return DescribeInstantTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeInstantTasksOutcome(outcome.GetError());
    }
}

void CatClient::DescribeInstantTasksAsync(const DescribeInstantTasksRequest& request, const DescribeInstantTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstantTasksRequest&;
    using Resp = DescribeInstantTasksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstantTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CatClient::DescribeInstantTasksOutcomeCallable CatClient::DescribeInstantTasksCallable(const DescribeInstantTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstantTasksOutcome>>();
    DescribeInstantTasksAsync(
    request,
    [prom](
        const CatClient*,
        const DescribeInstantTasksRequest&,
        DescribeInstantTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CatClient::DescribeNodeGroupsOutcome CatClient::DescribeNodeGroups(const DescribeNodeGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNodeGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNodeGroupsResponse rsp = DescribeNodeGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNodeGroupsOutcome(rsp);
        else
            return DescribeNodeGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeNodeGroupsOutcome(outcome.GetError());
    }
}

void CatClient::DescribeNodeGroupsAsync(const DescribeNodeGroupsRequest& request, const DescribeNodeGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNodeGroupsRequest&;
    using Resp = DescribeNodeGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNodeGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CatClient::DescribeNodeGroupsOutcomeCallable CatClient::DescribeNodeGroupsCallable(const DescribeNodeGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNodeGroupsOutcome>>();
    DescribeNodeGroupsAsync(
    request,
    [prom](
        const CatClient*,
        const DescribeNodeGroupsRequest&,
        DescribeNodeGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CatClient::DescribeNodesOutcome CatClient::DescribeNodes(const DescribeNodesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNodes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNodesResponse rsp = DescribeNodesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNodesOutcome(rsp);
        else
            return DescribeNodesOutcome(o.GetError());
    }
    else
    {
        return DescribeNodesOutcome(outcome.GetError());
    }
}

void CatClient::DescribeNodesAsync(const DescribeNodesRequest& request, const DescribeNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNodesRequest&;
    using Resp = DescribeNodesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNodes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CatClient::DescribeNodesOutcomeCallable CatClient::DescribeNodesCallable(const DescribeNodesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNodesOutcome>>();
    DescribeNodesAsync(
    request,
    [prom](
        const CatClient*,
        const DescribeNodesRequest&,
        DescribeNodesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CatClient::DescribeProbeMetricDataOutcome CatClient::DescribeProbeMetricData(const DescribeProbeMetricDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProbeMetricData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProbeMetricDataResponse rsp = DescribeProbeMetricDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProbeMetricDataOutcome(rsp);
        else
            return DescribeProbeMetricDataOutcome(o.GetError());
    }
    else
    {
        return DescribeProbeMetricDataOutcome(outcome.GetError());
    }
}

void CatClient::DescribeProbeMetricDataAsync(const DescribeProbeMetricDataRequest& request, const DescribeProbeMetricDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeProbeMetricDataRequest&;
    using Resp = DescribeProbeMetricDataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProbeMetricData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CatClient::DescribeProbeMetricDataOutcomeCallable CatClient::DescribeProbeMetricDataCallable(const DescribeProbeMetricDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProbeMetricDataOutcome>>();
    DescribeProbeMetricDataAsync(
    request,
    [prom](
        const CatClient*,
        const DescribeProbeMetricDataRequest&,
        DescribeProbeMetricDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CatClient::DescribeProbeMetricTagValuesOutcome CatClient::DescribeProbeMetricTagValues(const DescribeProbeMetricTagValuesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProbeMetricTagValues");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProbeMetricTagValuesResponse rsp = DescribeProbeMetricTagValuesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProbeMetricTagValuesOutcome(rsp);
        else
            return DescribeProbeMetricTagValuesOutcome(o.GetError());
    }
    else
    {
        return DescribeProbeMetricTagValuesOutcome(outcome.GetError());
    }
}

void CatClient::DescribeProbeMetricTagValuesAsync(const DescribeProbeMetricTagValuesRequest& request, const DescribeProbeMetricTagValuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeProbeMetricTagValuesRequest&;
    using Resp = DescribeProbeMetricTagValuesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProbeMetricTagValues", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CatClient::DescribeProbeMetricTagValuesOutcomeCallable CatClient::DescribeProbeMetricTagValuesCallable(const DescribeProbeMetricTagValuesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProbeMetricTagValuesOutcome>>();
    DescribeProbeMetricTagValuesAsync(
    request,
    [prom](
        const CatClient*,
        const DescribeProbeMetricTagValuesRequest&,
        DescribeProbeMetricTagValuesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CatClient::DescribeProbeNodesOutcome CatClient::DescribeProbeNodes(const DescribeProbeNodesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProbeNodes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProbeNodesResponse rsp = DescribeProbeNodesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProbeNodesOutcome(rsp);
        else
            return DescribeProbeNodesOutcome(o.GetError());
    }
    else
    {
        return DescribeProbeNodesOutcome(outcome.GetError());
    }
}

void CatClient::DescribeProbeNodesAsync(const DescribeProbeNodesRequest& request, const DescribeProbeNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeProbeNodesRequest&;
    using Resp = DescribeProbeNodesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProbeNodes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CatClient::DescribeProbeNodesOutcomeCallable CatClient::DescribeProbeNodesCallable(const DescribeProbeNodesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProbeNodesOutcome>>();
    DescribeProbeNodesAsync(
    request,
    [prom](
        const CatClient*,
        const DescribeProbeNodesRequest&,
        DescribeProbeNodesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CatClient::DescribeProbeTasksOutcome CatClient::DescribeProbeTasks(const DescribeProbeTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProbeTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProbeTasksResponse rsp = DescribeProbeTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProbeTasksOutcome(rsp);
        else
            return DescribeProbeTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeProbeTasksOutcome(outcome.GetError());
    }
}

void CatClient::DescribeProbeTasksAsync(const DescribeProbeTasksRequest& request, const DescribeProbeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeProbeTasksRequest&;
    using Resp = DescribeProbeTasksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProbeTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CatClient::DescribeProbeTasksOutcomeCallable CatClient::DescribeProbeTasksCallable(const DescribeProbeTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProbeTasksOutcome>>();
    DescribeProbeTasksAsync(
    request,
    [prom](
        const CatClient*,
        const DescribeProbeTasksRequest&,
        DescribeProbeTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CatClient::ResumeProbeTaskOutcome CatClient::ResumeProbeTask(const ResumeProbeTaskRequest &request)
{
    auto outcome = MakeRequest(request, "ResumeProbeTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResumeProbeTaskResponse rsp = ResumeProbeTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResumeProbeTaskOutcome(rsp);
        else
            return ResumeProbeTaskOutcome(o.GetError());
    }
    else
    {
        return ResumeProbeTaskOutcome(outcome.GetError());
    }
}

void CatClient::ResumeProbeTaskAsync(const ResumeProbeTaskRequest& request, const ResumeProbeTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ResumeProbeTaskRequest&;
    using Resp = ResumeProbeTaskResponse;

    DoRequestAsync<Req, Resp>(
        "ResumeProbeTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CatClient::ResumeProbeTaskOutcomeCallable CatClient::ResumeProbeTaskCallable(const ResumeProbeTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResumeProbeTaskOutcome>>();
    ResumeProbeTaskAsync(
    request,
    [prom](
        const CatClient*,
        const ResumeProbeTaskRequest&,
        ResumeProbeTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CatClient::SuspendProbeTaskOutcome CatClient::SuspendProbeTask(const SuspendProbeTaskRequest &request)
{
    auto outcome = MakeRequest(request, "SuspendProbeTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SuspendProbeTaskResponse rsp = SuspendProbeTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SuspendProbeTaskOutcome(rsp);
        else
            return SuspendProbeTaskOutcome(o.GetError());
    }
    else
    {
        return SuspendProbeTaskOutcome(outcome.GetError());
    }
}

void CatClient::SuspendProbeTaskAsync(const SuspendProbeTaskRequest& request, const SuspendProbeTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SuspendProbeTaskRequest&;
    using Resp = SuspendProbeTaskResponse;

    DoRequestAsync<Req, Resp>(
        "SuspendProbeTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CatClient::SuspendProbeTaskOutcomeCallable CatClient::SuspendProbeTaskCallable(const SuspendProbeTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<SuspendProbeTaskOutcome>>();
    SuspendProbeTaskAsync(
    request,
    [prom](
        const CatClient*,
        const SuspendProbeTaskRequest&,
        SuspendProbeTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CatClient::UpdateProbeTaskAttributesOutcome CatClient::UpdateProbeTaskAttributes(const UpdateProbeTaskAttributesRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateProbeTaskAttributes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateProbeTaskAttributesResponse rsp = UpdateProbeTaskAttributesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateProbeTaskAttributesOutcome(rsp);
        else
            return UpdateProbeTaskAttributesOutcome(o.GetError());
    }
    else
    {
        return UpdateProbeTaskAttributesOutcome(outcome.GetError());
    }
}

void CatClient::UpdateProbeTaskAttributesAsync(const UpdateProbeTaskAttributesRequest& request, const UpdateProbeTaskAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateProbeTaskAttributesRequest&;
    using Resp = UpdateProbeTaskAttributesResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateProbeTaskAttributes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CatClient::UpdateProbeTaskAttributesOutcomeCallable CatClient::UpdateProbeTaskAttributesCallable(const UpdateProbeTaskAttributesRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateProbeTaskAttributesOutcome>>();
    UpdateProbeTaskAttributesAsync(
    request,
    [prom](
        const CatClient*,
        const UpdateProbeTaskAttributesRequest&,
        UpdateProbeTaskAttributesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CatClient::UpdateProbeTaskConfigurationListOutcome CatClient::UpdateProbeTaskConfigurationList(const UpdateProbeTaskConfigurationListRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateProbeTaskConfigurationList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateProbeTaskConfigurationListResponse rsp = UpdateProbeTaskConfigurationListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateProbeTaskConfigurationListOutcome(rsp);
        else
            return UpdateProbeTaskConfigurationListOutcome(o.GetError());
    }
    else
    {
        return UpdateProbeTaskConfigurationListOutcome(outcome.GetError());
    }
}

void CatClient::UpdateProbeTaskConfigurationListAsync(const UpdateProbeTaskConfigurationListRequest& request, const UpdateProbeTaskConfigurationListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateProbeTaskConfigurationListRequest&;
    using Resp = UpdateProbeTaskConfigurationListResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateProbeTaskConfigurationList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CatClient::UpdateProbeTaskConfigurationListOutcomeCallable CatClient::UpdateProbeTaskConfigurationListCallable(const UpdateProbeTaskConfigurationListRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateProbeTaskConfigurationListOutcome>>();
    UpdateProbeTaskConfigurationListAsync(
    request,
    [prom](
        const CatClient*,
        const UpdateProbeTaskConfigurationListRequest&,
        UpdateProbeTaskConfigurationListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


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

#include <tencentcloud/rum/v20210622/RumClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Rum::V20210622;
using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-06-22";
    const string ENDPOINT = "rum.tencentcloudapi.com";
}

RumClient::RumClient(const Credential &credential, const string &region) :
    RumClient(credential, region, ClientProfile())
{
}

RumClient::RumClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


RumClient::CreateProjectOutcome RumClient::CreateProject(const CreateProjectRequest &request)
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

void RumClient::CreateProjectAsync(const CreateProjectRequest& request, const CreateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

RumClient::CreateProjectOutcomeCallable RumClient::CreateProjectCallable(const CreateProjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateProjectOutcome>>();
    CreateProjectAsync(
    request,
    [prom](
        const RumClient*,
        const CreateProjectRequest&,
        CreateProjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::CreateReleaseFileOutcome RumClient::CreateReleaseFile(const CreateReleaseFileRequest &request)
{
    auto outcome = MakeRequest(request, "CreateReleaseFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateReleaseFileResponse rsp = CreateReleaseFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateReleaseFileOutcome(rsp);
        else
            return CreateReleaseFileOutcome(o.GetError());
    }
    else
    {
        return CreateReleaseFileOutcome(outcome.GetError());
    }
}

void RumClient::CreateReleaseFileAsync(const CreateReleaseFileRequest& request, const CreateReleaseFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateReleaseFileRequest&;
    using Resp = CreateReleaseFileResponse;

    DoRequestAsync<Req, Resp>(
        "CreateReleaseFile", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::CreateReleaseFileOutcomeCallable RumClient::CreateReleaseFileCallable(const CreateReleaseFileRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateReleaseFileOutcome>>();
    CreateReleaseFileAsync(
    request,
    [prom](
        const RumClient*,
        const CreateReleaseFileRequest&,
        CreateReleaseFileOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::CreateStarProjectOutcome RumClient::CreateStarProject(const CreateStarProjectRequest &request)
{
    auto outcome = MakeRequest(request, "CreateStarProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateStarProjectResponse rsp = CreateStarProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateStarProjectOutcome(rsp);
        else
            return CreateStarProjectOutcome(o.GetError());
    }
    else
    {
        return CreateStarProjectOutcome(outcome.GetError());
    }
}

void RumClient::CreateStarProjectAsync(const CreateStarProjectRequest& request, const CreateStarProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateStarProjectRequest&;
    using Resp = CreateStarProjectResponse;

    DoRequestAsync<Req, Resp>(
        "CreateStarProject", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::CreateStarProjectOutcomeCallable RumClient::CreateStarProjectCallable(const CreateStarProjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateStarProjectOutcome>>();
    CreateStarProjectAsync(
    request,
    [prom](
        const RumClient*,
        const CreateStarProjectRequest&,
        CreateStarProjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::CreateTawInstanceOutcome RumClient::CreateTawInstance(const CreateTawInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTawInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTawInstanceResponse rsp = CreateTawInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTawInstanceOutcome(rsp);
        else
            return CreateTawInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateTawInstanceOutcome(outcome.GetError());
    }
}

void RumClient::CreateTawInstanceAsync(const CreateTawInstanceRequest& request, const CreateTawInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTawInstanceRequest&;
    using Resp = CreateTawInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTawInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::CreateTawInstanceOutcomeCallable RumClient::CreateTawInstanceCallable(const CreateTawInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTawInstanceOutcome>>();
    CreateTawInstanceAsync(
    request,
    [prom](
        const RumClient*,
        const CreateTawInstanceRequest&,
        CreateTawInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::CreateWhitelistOutcome RumClient::CreateWhitelist(const CreateWhitelistRequest &request)
{
    auto outcome = MakeRequest(request, "CreateWhitelist");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateWhitelistResponse rsp = CreateWhitelistResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateWhitelistOutcome(rsp);
        else
            return CreateWhitelistOutcome(o.GetError());
    }
    else
    {
        return CreateWhitelistOutcome(outcome.GetError());
    }
}

void RumClient::CreateWhitelistAsync(const CreateWhitelistRequest& request, const CreateWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateWhitelistRequest&;
    using Resp = CreateWhitelistResponse;

    DoRequestAsync<Req, Resp>(
        "CreateWhitelist", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::CreateWhitelistOutcomeCallable RumClient::CreateWhitelistCallable(const CreateWhitelistRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateWhitelistOutcome>>();
    CreateWhitelistAsync(
    request,
    [prom](
        const RumClient*,
        const CreateWhitelistRequest&,
        CreateWhitelistOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DeleteInstanceOutcome RumClient::DeleteInstance(const DeleteInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteInstanceResponse rsp = DeleteInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteInstanceOutcome(rsp);
        else
            return DeleteInstanceOutcome(o.GetError());
    }
    else
    {
        return DeleteInstanceOutcome(outcome.GetError());
    }
}

void RumClient::DeleteInstanceAsync(const DeleteInstanceRequest& request, const DeleteInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteInstanceRequest&;
    using Resp = DeleteInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DeleteInstanceOutcomeCallable RumClient::DeleteInstanceCallable(const DeleteInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteInstanceOutcome>>();
    DeleteInstanceAsync(
    request,
    [prom](
        const RumClient*,
        const DeleteInstanceRequest&,
        DeleteInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DeleteProjectOutcome RumClient::DeleteProject(const DeleteProjectRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteProjectResponse rsp = DeleteProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteProjectOutcome(rsp);
        else
            return DeleteProjectOutcome(o.GetError());
    }
    else
    {
        return DeleteProjectOutcome(outcome.GetError());
    }
}

void RumClient::DeleteProjectAsync(const DeleteProjectRequest& request, const DeleteProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteProjectRequest&;
    using Resp = DeleteProjectResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteProject", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DeleteProjectOutcomeCallable RumClient::DeleteProjectCallable(const DeleteProjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteProjectOutcome>>();
    DeleteProjectAsync(
    request,
    [prom](
        const RumClient*,
        const DeleteProjectRequest&,
        DeleteProjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DeleteReleaseFileOutcome RumClient::DeleteReleaseFile(const DeleteReleaseFileRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteReleaseFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteReleaseFileResponse rsp = DeleteReleaseFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteReleaseFileOutcome(rsp);
        else
            return DeleteReleaseFileOutcome(o.GetError());
    }
    else
    {
        return DeleteReleaseFileOutcome(outcome.GetError());
    }
}

void RumClient::DeleteReleaseFileAsync(const DeleteReleaseFileRequest& request, const DeleteReleaseFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteReleaseFileRequest&;
    using Resp = DeleteReleaseFileResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteReleaseFile", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DeleteReleaseFileOutcomeCallable RumClient::DeleteReleaseFileCallable(const DeleteReleaseFileRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteReleaseFileOutcome>>();
    DeleteReleaseFileAsync(
    request,
    [prom](
        const RumClient*,
        const DeleteReleaseFileRequest&,
        DeleteReleaseFileOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DeleteStarProjectOutcome RumClient::DeleteStarProject(const DeleteStarProjectRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteStarProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteStarProjectResponse rsp = DeleteStarProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteStarProjectOutcome(rsp);
        else
            return DeleteStarProjectOutcome(o.GetError());
    }
    else
    {
        return DeleteStarProjectOutcome(outcome.GetError());
    }
}

void RumClient::DeleteStarProjectAsync(const DeleteStarProjectRequest& request, const DeleteStarProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteStarProjectRequest&;
    using Resp = DeleteStarProjectResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteStarProject", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DeleteStarProjectOutcomeCallable RumClient::DeleteStarProjectCallable(const DeleteStarProjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteStarProjectOutcome>>();
    DeleteStarProjectAsync(
    request,
    [prom](
        const RumClient*,
        const DeleteStarProjectRequest&,
        DeleteStarProjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DeleteWhitelistOutcome RumClient::DeleteWhitelist(const DeleteWhitelistRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteWhitelist");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteWhitelistResponse rsp = DeleteWhitelistResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteWhitelistOutcome(rsp);
        else
            return DeleteWhitelistOutcome(o.GetError());
    }
    else
    {
        return DeleteWhitelistOutcome(outcome.GetError());
    }
}

void RumClient::DeleteWhitelistAsync(const DeleteWhitelistRequest& request, const DeleteWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteWhitelistRequest&;
    using Resp = DeleteWhitelistResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteWhitelist", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DeleteWhitelistOutcomeCallable RumClient::DeleteWhitelistCallable(const DeleteWhitelistRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteWhitelistOutcome>>();
    DeleteWhitelistAsync(
    request,
    [prom](
        const RumClient*,
        const DeleteWhitelistRequest&,
        DeleteWhitelistOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeAppDimensionMetricsOutcome RumClient::DescribeAppDimensionMetrics(const DescribeAppDimensionMetricsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAppDimensionMetrics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAppDimensionMetricsResponse rsp = DescribeAppDimensionMetricsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAppDimensionMetricsOutcome(rsp);
        else
            return DescribeAppDimensionMetricsOutcome(o.GetError());
    }
    else
    {
        return DescribeAppDimensionMetricsOutcome(outcome.GetError());
    }
}

void RumClient::DescribeAppDimensionMetricsAsync(const DescribeAppDimensionMetricsRequest& request, const DescribeAppDimensionMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAppDimensionMetricsRequest&;
    using Resp = DescribeAppDimensionMetricsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAppDimensionMetrics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeAppDimensionMetricsOutcomeCallable RumClient::DescribeAppDimensionMetricsCallable(const DescribeAppDimensionMetricsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAppDimensionMetricsOutcome>>();
    DescribeAppDimensionMetricsAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeAppDimensionMetricsRequest&,
        DescribeAppDimensionMetricsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeAppMetricsDataOutcome RumClient::DescribeAppMetricsData(const DescribeAppMetricsDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAppMetricsData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAppMetricsDataResponse rsp = DescribeAppMetricsDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAppMetricsDataOutcome(rsp);
        else
            return DescribeAppMetricsDataOutcome(o.GetError());
    }
    else
    {
        return DescribeAppMetricsDataOutcome(outcome.GetError());
    }
}

void RumClient::DescribeAppMetricsDataAsync(const DescribeAppMetricsDataRequest& request, const DescribeAppMetricsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAppMetricsDataRequest&;
    using Resp = DescribeAppMetricsDataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAppMetricsData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeAppMetricsDataOutcomeCallable RumClient::DescribeAppMetricsDataCallable(const DescribeAppMetricsDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAppMetricsDataOutcome>>();
    DescribeAppMetricsDataAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeAppMetricsDataRequest&,
        DescribeAppMetricsDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeAppSingleCaseDetailListOutcome RumClient::DescribeAppSingleCaseDetailList(const DescribeAppSingleCaseDetailListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAppSingleCaseDetailList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAppSingleCaseDetailListResponse rsp = DescribeAppSingleCaseDetailListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAppSingleCaseDetailListOutcome(rsp);
        else
            return DescribeAppSingleCaseDetailListOutcome(o.GetError());
    }
    else
    {
        return DescribeAppSingleCaseDetailListOutcome(outcome.GetError());
    }
}

void RumClient::DescribeAppSingleCaseDetailListAsync(const DescribeAppSingleCaseDetailListRequest& request, const DescribeAppSingleCaseDetailListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAppSingleCaseDetailListRequest&;
    using Resp = DescribeAppSingleCaseDetailListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAppSingleCaseDetailList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeAppSingleCaseDetailListOutcomeCallable RumClient::DescribeAppSingleCaseDetailListCallable(const DescribeAppSingleCaseDetailListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAppSingleCaseDetailListOutcome>>();
    DescribeAppSingleCaseDetailListAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeAppSingleCaseDetailListRequest&,
        DescribeAppSingleCaseDetailListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeAppSingleCaseListOutcome RumClient::DescribeAppSingleCaseList(const DescribeAppSingleCaseListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAppSingleCaseList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAppSingleCaseListResponse rsp = DescribeAppSingleCaseListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAppSingleCaseListOutcome(rsp);
        else
            return DescribeAppSingleCaseListOutcome(o.GetError());
    }
    else
    {
        return DescribeAppSingleCaseListOutcome(outcome.GetError());
    }
}

void RumClient::DescribeAppSingleCaseListAsync(const DescribeAppSingleCaseListRequest& request, const DescribeAppSingleCaseListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAppSingleCaseListRequest&;
    using Resp = DescribeAppSingleCaseListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAppSingleCaseList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeAppSingleCaseListOutcomeCallable RumClient::DescribeAppSingleCaseListCallable(const DescribeAppSingleCaseListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAppSingleCaseListOutcome>>();
    DescribeAppSingleCaseListAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeAppSingleCaseListRequest&,
        DescribeAppSingleCaseListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeDataOutcome RumClient::DescribeData(const DescribeDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataResponse rsp = DescribeDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataOutcome(rsp);
        else
            return DescribeDataOutcome(o.GetError());
    }
    else
    {
        return DescribeDataOutcome(outcome.GetError());
    }
}

void RumClient::DescribeDataAsync(const DescribeDataRequest& request, const DescribeDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDataRequest&;
    using Resp = DescribeDataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeDataOutcomeCallable RumClient::DescribeDataCallable(const DescribeDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataOutcome>>();
    DescribeDataAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeDataRequest&,
        DescribeDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeDataCustomUrlOutcome RumClient::DescribeDataCustomUrl(const DescribeDataCustomUrlRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataCustomUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataCustomUrlResponse rsp = DescribeDataCustomUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataCustomUrlOutcome(rsp);
        else
            return DescribeDataCustomUrlOutcome(o.GetError());
    }
    else
    {
        return DescribeDataCustomUrlOutcome(outcome.GetError());
    }
}

void RumClient::DescribeDataCustomUrlAsync(const DescribeDataCustomUrlRequest& request, const DescribeDataCustomUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDataCustomUrlRequest&;
    using Resp = DescribeDataCustomUrlResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDataCustomUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeDataCustomUrlOutcomeCallable RumClient::DescribeDataCustomUrlCallable(const DescribeDataCustomUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataCustomUrlOutcome>>();
    DescribeDataCustomUrlAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeDataCustomUrlRequest&,
        DescribeDataCustomUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeDataEventUrlOutcome RumClient::DescribeDataEventUrl(const DescribeDataEventUrlRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataEventUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataEventUrlResponse rsp = DescribeDataEventUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataEventUrlOutcome(rsp);
        else
            return DescribeDataEventUrlOutcome(o.GetError());
    }
    else
    {
        return DescribeDataEventUrlOutcome(outcome.GetError());
    }
}

void RumClient::DescribeDataEventUrlAsync(const DescribeDataEventUrlRequest& request, const DescribeDataEventUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDataEventUrlRequest&;
    using Resp = DescribeDataEventUrlResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDataEventUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeDataEventUrlOutcomeCallable RumClient::DescribeDataEventUrlCallable(const DescribeDataEventUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataEventUrlOutcome>>();
    DescribeDataEventUrlAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeDataEventUrlRequest&,
        DescribeDataEventUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeDataFetchProjectOutcome RumClient::DescribeDataFetchProject(const DescribeDataFetchProjectRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataFetchProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataFetchProjectResponse rsp = DescribeDataFetchProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataFetchProjectOutcome(rsp);
        else
            return DescribeDataFetchProjectOutcome(o.GetError());
    }
    else
    {
        return DescribeDataFetchProjectOutcome(outcome.GetError());
    }
}

void RumClient::DescribeDataFetchProjectAsync(const DescribeDataFetchProjectRequest& request, const DescribeDataFetchProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDataFetchProjectRequest&;
    using Resp = DescribeDataFetchProjectResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDataFetchProject", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeDataFetchProjectOutcomeCallable RumClient::DescribeDataFetchProjectCallable(const DescribeDataFetchProjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataFetchProjectOutcome>>();
    DescribeDataFetchProjectAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeDataFetchProjectRequest&,
        DescribeDataFetchProjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeDataFetchUrlOutcome RumClient::DescribeDataFetchUrl(const DescribeDataFetchUrlRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataFetchUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataFetchUrlResponse rsp = DescribeDataFetchUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataFetchUrlOutcome(rsp);
        else
            return DescribeDataFetchUrlOutcome(o.GetError());
    }
    else
    {
        return DescribeDataFetchUrlOutcome(outcome.GetError());
    }
}

void RumClient::DescribeDataFetchUrlAsync(const DescribeDataFetchUrlRequest& request, const DescribeDataFetchUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDataFetchUrlRequest&;
    using Resp = DescribeDataFetchUrlResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDataFetchUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeDataFetchUrlOutcomeCallable RumClient::DescribeDataFetchUrlCallable(const DescribeDataFetchUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataFetchUrlOutcome>>();
    DescribeDataFetchUrlAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeDataFetchUrlRequest&,
        DescribeDataFetchUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeDataFetchUrlInfoOutcome RumClient::DescribeDataFetchUrlInfo(const DescribeDataFetchUrlInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataFetchUrlInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataFetchUrlInfoResponse rsp = DescribeDataFetchUrlInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataFetchUrlInfoOutcome(rsp);
        else
            return DescribeDataFetchUrlInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeDataFetchUrlInfoOutcome(outcome.GetError());
    }
}

void RumClient::DescribeDataFetchUrlInfoAsync(const DescribeDataFetchUrlInfoRequest& request, const DescribeDataFetchUrlInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDataFetchUrlInfoRequest&;
    using Resp = DescribeDataFetchUrlInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDataFetchUrlInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeDataFetchUrlInfoOutcomeCallable RumClient::DescribeDataFetchUrlInfoCallable(const DescribeDataFetchUrlInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataFetchUrlInfoOutcome>>();
    DescribeDataFetchUrlInfoAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeDataFetchUrlInfoRequest&,
        DescribeDataFetchUrlInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeDataLogUrlInfoOutcome RumClient::DescribeDataLogUrlInfo(const DescribeDataLogUrlInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataLogUrlInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataLogUrlInfoResponse rsp = DescribeDataLogUrlInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataLogUrlInfoOutcome(rsp);
        else
            return DescribeDataLogUrlInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeDataLogUrlInfoOutcome(outcome.GetError());
    }
}

void RumClient::DescribeDataLogUrlInfoAsync(const DescribeDataLogUrlInfoRequest& request, const DescribeDataLogUrlInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDataLogUrlInfoRequest&;
    using Resp = DescribeDataLogUrlInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDataLogUrlInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeDataLogUrlInfoOutcomeCallable RumClient::DescribeDataLogUrlInfoCallable(const DescribeDataLogUrlInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataLogUrlInfoOutcome>>();
    DescribeDataLogUrlInfoAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeDataLogUrlInfoRequest&,
        DescribeDataLogUrlInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeDataLogUrlStatisticsOutcome RumClient::DescribeDataLogUrlStatistics(const DescribeDataLogUrlStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataLogUrlStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataLogUrlStatisticsResponse rsp = DescribeDataLogUrlStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataLogUrlStatisticsOutcome(rsp);
        else
            return DescribeDataLogUrlStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeDataLogUrlStatisticsOutcome(outcome.GetError());
    }
}

void RumClient::DescribeDataLogUrlStatisticsAsync(const DescribeDataLogUrlStatisticsRequest& request, const DescribeDataLogUrlStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDataLogUrlStatisticsRequest&;
    using Resp = DescribeDataLogUrlStatisticsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDataLogUrlStatistics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeDataLogUrlStatisticsOutcomeCallable RumClient::DescribeDataLogUrlStatisticsCallable(const DescribeDataLogUrlStatisticsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataLogUrlStatisticsOutcome>>();
    DescribeDataLogUrlStatisticsAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeDataLogUrlStatisticsRequest&,
        DescribeDataLogUrlStatisticsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeDataPerformancePageOutcome RumClient::DescribeDataPerformancePage(const DescribeDataPerformancePageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataPerformancePage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataPerformancePageResponse rsp = DescribeDataPerformancePageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataPerformancePageOutcome(rsp);
        else
            return DescribeDataPerformancePageOutcome(o.GetError());
    }
    else
    {
        return DescribeDataPerformancePageOutcome(outcome.GetError());
    }
}

void RumClient::DescribeDataPerformancePageAsync(const DescribeDataPerformancePageRequest& request, const DescribeDataPerformancePageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDataPerformancePageRequest&;
    using Resp = DescribeDataPerformancePageResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDataPerformancePage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeDataPerformancePageOutcomeCallable RumClient::DescribeDataPerformancePageCallable(const DescribeDataPerformancePageRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataPerformancePageOutcome>>();
    DescribeDataPerformancePageAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeDataPerformancePageRequest&,
        DescribeDataPerformancePageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeDataPvUrlInfoOutcome RumClient::DescribeDataPvUrlInfo(const DescribeDataPvUrlInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataPvUrlInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataPvUrlInfoResponse rsp = DescribeDataPvUrlInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataPvUrlInfoOutcome(rsp);
        else
            return DescribeDataPvUrlInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeDataPvUrlInfoOutcome(outcome.GetError());
    }
}

void RumClient::DescribeDataPvUrlInfoAsync(const DescribeDataPvUrlInfoRequest& request, const DescribeDataPvUrlInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDataPvUrlInfoRequest&;
    using Resp = DescribeDataPvUrlInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDataPvUrlInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeDataPvUrlInfoOutcomeCallable RumClient::DescribeDataPvUrlInfoCallable(const DescribeDataPvUrlInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataPvUrlInfoOutcome>>();
    DescribeDataPvUrlInfoAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeDataPvUrlInfoRequest&,
        DescribeDataPvUrlInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeDataPvUrlStatisticsOutcome RumClient::DescribeDataPvUrlStatistics(const DescribeDataPvUrlStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataPvUrlStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataPvUrlStatisticsResponse rsp = DescribeDataPvUrlStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataPvUrlStatisticsOutcome(rsp);
        else
            return DescribeDataPvUrlStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeDataPvUrlStatisticsOutcome(outcome.GetError());
    }
}

void RumClient::DescribeDataPvUrlStatisticsAsync(const DescribeDataPvUrlStatisticsRequest& request, const DescribeDataPvUrlStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDataPvUrlStatisticsRequest&;
    using Resp = DescribeDataPvUrlStatisticsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDataPvUrlStatistics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeDataPvUrlStatisticsOutcomeCallable RumClient::DescribeDataPvUrlStatisticsCallable(const DescribeDataPvUrlStatisticsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataPvUrlStatisticsOutcome>>();
    DescribeDataPvUrlStatisticsAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeDataPvUrlStatisticsRequest&,
        DescribeDataPvUrlStatisticsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeDataPvUrlStatisticsV2Outcome RumClient::DescribeDataPvUrlStatisticsV2(const DescribeDataPvUrlStatisticsV2Request &request)
{
    auto outcome = MakeRequest(request, "DescribeDataPvUrlStatisticsV2");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataPvUrlStatisticsV2Response rsp = DescribeDataPvUrlStatisticsV2Response();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataPvUrlStatisticsV2Outcome(rsp);
        else
            return DescribeDataPvUrlStatisticsV2Outcome(o.GetError());
    }
    else
    {
        return DescribeDataPvUrlStatisticsV2Outcome(outcome.GetError());
    }
}

void RumClient::DescribeDataPvUrlStatisticsV2Async(const DescribeDataPvUrlStatisticsV2Request& request, const DescribeDataPvUrlStatisticsV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDataPvUrlStatisticsV2Request&;
    using Resp = DescribeDataPvUrlStatisticsV2Response;

    DoRequestAsync<Req, Resp>(
        "DescribeDataPvUrlStatisticsV2", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeDataPvUrlStatisticsV2OutcomeCallable RumClient::DescribeDataPvUrlStatisticsV2Callable(const DescribeDataPvUrlStatisticsV2Request &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataPvUrlStatisticsV2Outcome>>();
    DescribeDataPvUrlStatisticsV2Async(
    request,
    [prom](
        const RumClient*,
        const DescribeDataPvUrlStatisticsV2Request&,
        DescribeDataPvUrlStatisticsV2Outcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeDataReportCountOutcome RumClient::DescribeDataReportCount(const DescribeDataReportCountRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataReportCount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataReportCountResponse rsp = DescribeDataReportCountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataReportCountOutcome(rsp);
        else
            return DescribeDataReportCountOutcome(o.GetError());
    }
    else
    {
        return DescribeDataReportCountOutcome(outcome.GetError());
    }
}

void RumClient::DescribeDataReportCountAsync(const DescribeDataReportCountRequest& request, const DescribeDataReportCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDataReportCountRequest&;
    using Resp = DescribeDataReportCountResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDataReportCount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeDataReportCountOutcomeCallable RumClient::DescribeDataReportCountCallable(const DescribeDataReportCountRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataReportCountOutcome>>();
    DescribeDataReportCountAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeDataReportCountRequest&,
        DescribeDataReportCountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeDataReportCountV2Outcome RumClient::DescribeDataReportCountV2(const DescribeDataReportCountV2Request &request)
{
    auto outcome = MakeRequest(request, "DescribeDataReportCountV2");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataReportCountV2Response rsp = DescribeDataReportCountV2Response();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataReportCountV2Outcome(rsp);
        else
            return DescribeDataReportCountV2Outcome(o.GetError());
    }
    else
    {
        return DescribeDataReportCountV2Outcome(outcome.GetError());
    }
}

void RumClient::DescribeDataReportCountV2Async(const DescribeDataReportCountV2Request& request, const DescribeDataReportCountV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDataReportCountV2Request&;
    using Resp = DescribeDataReportCountV2Response;

    DoRequestAsync<Req, Resp>(
        "DescribeDataReportCountV2", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeDataReportCountV2OutcomeCallable RumClient::DescribeDataReportCountV2Callable(const DescribeDataReportCountV2Request &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataReportCountV2Outcome>>();
    DescribeDataReportCountV2Async(
    request,
    [prom](
        const RumClient*,
        const DescribeDataReportCountV2Request&,
        DescribeDataReportCountV2Outcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeDataSetUrlStatisticsOutcome RumClient::DescribeDataSetUrlStatistics(const DescribeDataSetUrlStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataSetUrlStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataSetUrlStatisticsResponse rsp = DescribeDataSetUrlStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataSetUrlStatisticsOutcome(rsp);
        else
            return DescribeDataSetUrlStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeDataSetUrlStatisticsOutcome(outcome.GetError());
    }
}

void RumClient::DescribeDataSetUrlStatisticsAsync(const DescribeDataSetUrlStatisticsRequest& request, const DescribeDataSetUrlStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDataSetUrlStatisticsRequest&;
    using Resp = DescribeDataSetUrlStatisticsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDataSetUrlStatistics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeDataSetUrlStatisticsOutcomeCallable RumClient::DescribeDataSetUrlStatisticsCallable(const DescribeDataSetUrlStatisticsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataSetUrlStatisticsOutcome>>();
    DescribeDataSetUrlStatisticsAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeDataSetUrlStatisticsRequest&,
        DescribeDataSetUrlStatisticsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeDataStaticProjectOutcome RumClient::DescribeDataStaticProject(const DescribeDataStaticProjectRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataStaticProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataStaticProjectResponse rsp = DescribeDataStaticProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataStaticProjectOutcome(rsp);
        else
            return DescribeDataStaticProjectOutcome(o.GetError());
    }
    else
    {
        return DescribeDataStaticProjectOutcome(outcome.GetError());
    }
}

void RumClient::DescribeDataStaticProjectAsync(const DescribeDataStaticProjectRequest& request, const DescribeDataStaticProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDataStaticProjectRequest&;
    using Resp = DescribeDataStaticProjectResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDataStaticProject", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeDataStaticProjectOutcomeCallable RumClient::DescribeDataStaticProjectCallable(const DescribeDataStaticProjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataStaticProjectOutcome>>();
    DescribeDataStaticProjectAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeDataStaticProjectRequest&,
        DescribeDataStaticProjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeDataStaticResourceOutcome RumClient::DescribeDataStaticResource(const DescribeDataStaticResourceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataStaticResource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataStaticResourceResponse rsp = DescribeDataStaticResourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataStaticResourceOutcome(rsp);
        else
            return DescribeDataStaticResourceOutcome(o.GetError());
    }
    else
    {
        return DescribeDataStaticResourceOutcome(outcome.GetError());
    }
}

void RumClient::DescribeDataStaticResourceAsync(const DescribeDataStaticResourceRequest& request, const DescribeDataStaticResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDataStaticResourceRequest&;
    using Resp = DescribeDataStaticResourceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDataStaticResource", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeDataStaticResourceOutcomeCallable RumClient::DescribeDataStaticResourceCallable(const DescribeDataStaticResourceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataStaticResourceOutcome>>();
    DescribeDataStaticResourceAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeDataStaticResourceRequest&,
        DescribeDataStaticResourceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeDataStaticUrlOutcome RumClient::DescribeDataStaticUrl(const DescribeDataStaticUrlRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataStaticUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataStaticUrlResponse rsp = DescribeDataStaticUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataStaticUrlOutcome(rsp);
        else
            return DescribeDataStaticUrlOutcome(o.GetError());
    }
    else
    {
        return DescribeDataStaticUrlOutcome(outcome.GetError());
    }
}

void RumClient::DescribeDataStaticUrlAsync(const DescribeDataStaticUrlRequest& request, const DescribeDataStaticUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDataStaticUrlRequest&;
    using Resp = DescribeDataStaticUrlResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDataStaticUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeDataStaticUrlOutcomeCallable RumClient::DescribeDataStaticUrlCallable(const DescribeDataStaticUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataStaticUrlOutcome>>();
    DescribeDataStaticUrlAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeDataStaticUrlRequest&,
        DescribeDataStaticUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeDataWebVitalsPageOutcome RumClient::DescribeDataWebVitalsPage(const DescribeDataWebVitalsPageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataWebVitalsPage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataWebVitalsPageResponse rsp = DescribeDataWebVitalsPageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataWebVitalsPageOutcome(rsp);
        else
            return DescribeDataWebVitalsPageOutcome(o.GetError());
    }
    else
    {
        return DescribeDataWebVitalsPageOutcome(outcome.GetError());
    }
}

void RumClient::DescribeDataWebVitalsPageAsync(const DescribeDataWebVitalsPageRequest& request, const DescribeDataWebVitalsPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDataWebVitalsPageRequest&;
    using Resp = DescribeDataWebVitalsPageResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDataWebVitalsPage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeDataWebVitalsPageOutcomeCallable RumClient::DescribeDataWebVitalsPageCallable(const DescribeDataWebVitalsPageRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataWebVitalsPageOutcome>>();
    DescribeDataWebVitalsPageAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeDataWebVitalsPageRequest&,
        DescribeDataWebVitalsPageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeErrorOutcome RumClient::DescribeError(const DescribeErrorRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeError");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeErrorResponse rsp = DescribeErrorResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeErrorOutcome(rsp);
        else
            return DescribeErrorOutcome(o.GetError());
    }
    else
    {
        return DescribeErrorOutcome(outcome.GetError());
    }
}

void RumClient::DescribeErrorAsync(const DescribeErrorRequest& request, const DescribeErrorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeErrorRequest&;
    using Resp = DescribeErrorResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeError", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeErrorOutcomeCallable RumClient::DescribeErrorCallable(const DescribeErrorRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeErrorOutcome>>();
    DescribeErrorAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeErrorRequest&,
        DescribeErrorOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeProjectLimitsOutcome RumClient::DescribeProjectLimits(const DescribeProjectLimitsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProjectLimits");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProjectLimitsResponse rsp = DescribeProjectLimitsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProjectLimitsOutcome(rsp);
        else
            return DescribeProjectLimitsOutcome(o.GetError());
    }
    else
    {
        return DescribeProjectLimitsOutcome(outcome.GetError());
    }
}

void RumClient::DescribeProjectLimitsAsync(const DescribeProjectLimitsRequest& request, const DescribeProjectLimitsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeProjectLimitsRequest&;
    using Resp = DescribeProjectLimitsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProjectLimits", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeProjectLimitsOutcomeCallable RumClient::DescribeProjectLimitsCallable(const DescribeProjectLimitsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProjectLimitsOutcome>>();
    DescribeProjectLimitsAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeProjectLimitsRequest&,
        DescribeProjectLimitsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeProjectsOutcome RumClient::DescribeProjects(const DescribeProjectsRequest &request)
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

void RumClient::DescribeProjectsAsync(const DescribeProjectsRequest& request, const DescribeProjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

RumClient::DescribeProjectsOutcomeCallable RumClient::DescribeProjectsCallable(const DescribeProjectsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProjectsOutcome>>();
    DescribeProjectsAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeProjectsRequest&,
        DescribeProjectsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribePvListOutcome RumClient::DescribePvList(const DescribePvListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePvList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePvListResponse rsp = DescribePvListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePvListOutcome(rsp);
        else
            return DescribePvListOutcome(o.GetError());
    }
    else
    {
        return DescribePvListOutcome(outcome.GetError());
    }
}

void RumClient::DescribePvListAsync(const DescribePvListRequest& request, const DescribePvListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePvListRequest&;
    using Resp = DescribePvListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePvList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribePvListOutcomeCallable RumClient::DescribePvListCallable(const DescribePvListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePvListOutcome>>();
    DescribePvListAsync(
    request,
    [prom](
        const RumClient*,
        const DescribePvListRequest&,
        DescribePvListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeReleaseFileSignOutcome RumClient::DescribeReleaseFileSign(const DescribeReleaseFileSignRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeReleaseFileSign");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeReleaseFileSignResponse rsp = DescribeReleaseFileSignResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeReleaseFileSignOutcome(rsp);
        else
            return DescribeReleaseFileSignOutcome(o.GetError());
    }
    else
    {
        return DescribeReleaseFileSignOutcome(outcome.GetError());
    }
}

void RumClient::DescribeReleaseFileSignAsync(const DescribeReleaseFileSignRequest& request, const DescribeReleaseFileSignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeReleaseFileSignRequest&;
    using Resp = DescribeReleaseFileSignResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeReleaseFileSign", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeReleaseFileSignOutcomeCallable RumClient::DescribeReleaseFileSignCallable(const DescribeReleaseFileSignRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeReleaseFileSignOutcome>>();
    DescribeReleaseFileSignAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeReleaseFileSignRequest&,
        DescribeReleaseFileSignOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeReleaseFilesOutcome RumClient::DescribeReleaseFiles(const DescribeReleaseFilesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeReleaseFiles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeReleaseFilesResponse rsp = DescribeReleaseFilesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeReleaseFilesOutcome(rsp);
        else
            return DescribeReleaseFilesOutcome(o.GetError());
    }
    else
    {
        return DescribeReleaseFilesOutcome(outcome.GetError());
    }
}

void RumClient::DescribeReleaseFilesAsync(const DescribeReleaseFilesRequest& request, const DescribeReleaseFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeReleaseFilesRequest&;
    using Resp = DescribeReleaseFilesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeReleaseFiles", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeReleaseFilesOutcomeCallable RumClient::DescribeReleaseFilesCallable(const DescribeReleaseFilesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeReleaseFilesOutcome>>();
    DescribeReleaseFilesAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeReleaseFilesRequest&,
        DescribeReleaseFilesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeRumGroupLogOutcome RumClient::DescribeRumGroupLog(const DescribeRumGroupLogRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRumGroupLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRumGroupLogResponse rsp = DescribeRumGroupLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRumGroupLogOutcome(rsp);
        else
            return DescribeRumGroupLogOutcome(o.GetError());
    }
    else
    {
        return DescribeRumGroupLogOutcome(outcome.GetError());
    }
}

void RumClient::DescribeRumGroupLogAsync(const DescribeRumGroupLogRequest& request, const DescribeRumGroupLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRumGroupLogRequest&;
    using Resp = DescribeRumGroupLogResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRumGroupLog", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeRumGroupLogOutcomeCallable RumClient::DescribeRumGroupLogCallable(const DescribeRumGroupLogRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRumGroupLogOutcome>>();
    DescribeRumGroupLogAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeRumGroupLogRequest&,
        DescribeRumGroupLogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeRumLogExportOutcome RumClient::DescribeRumLogExport(const DescribeRumLogExportRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRumLogExport");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRumLogExportResponse rsp = DescribeRumLogExportResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRumLogExportOutcome(rsp);
        else
            return DescribeRumLogExportOutcome(o.GetError());
    }
    else
    {
        return DescribeRumLogExportOutcome(outcome.GetError());
    }
}

void RumClient::DescribeRumLogExportAsync(const DescribeRumLogExportRequest& request, const DescribeRumLogExportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRumLogExportRequest&;
    using Resp = DescribeRumLogExportResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRumLogExport", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeRumLogExportOutcomeCallable RumClient::DescribeRumLogExportCallable(const DescribeRumLogExportRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRumLogExportOutcome>>();
    DescribeRumLogExportAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeRumLogExportRequest&,
        DescribeRumLogExportOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeRumLogExportsOutcome RumClient::DescribeRumLogExports(const DescribeRumLogExportsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRumLogExports");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRumLogExportsResponse rsp = DescribeRumLogExportsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRumLogExportsOutcome(rsp);
        else
            return DescribeRumLogExportsOutcome(o.GetError());
    }
    else
    {
        return DescribeRumLogExportsOutcome(outcome.GetError());
    }
}

void RumClient::DescribeRumLogExportsAsync(const DescribeRumLogExportsRequest& request, const DescribeRumLogExportsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRumLogExportsRequest&;
    using Resp = DescribeRumLogExportsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRumLogExports", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeRumLogExportsOutcomeCallable RumClient::DescribeRumLogExportsCallable(const DescribeRumLogExportsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRumLogExportsOutcome>>();
    DescribeRumLogExportsAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeRumLogExportsRequest&,
        DescribeRumLogExportsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeRumLogListOutcome RumClient::DescribeRumLogList(const DescribeRumLogListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRumLogList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRumLogListResponse rsp = DescribeRumLogListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRumLogListOutcome(rsp);
        else
            return DescribeRumLogListOutcome(o.GetError());
    }
    else
    {
        return DescribeRumLogListOutcome(outcome.GetError());
    }
}

void RumClient::DescribeRumLogListAsync(const DescribeRumLogListRequest& request, const DescribeRumLogListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRumLogListRequest&;
    using Resp = DescribeRumLogListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRumLogList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeRumLogListOutcomeCallable RumClient::DescribeRumLogListCallable(const DescribeRumLogListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRumLogListOutcome>>();
    DescribeRumLogListAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeRumLogListRequest&,
        DescribeRumLogListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeRumStatsLogListOutcome RumClient::DescribeRumStatsLogList(const DescribeRumStatsLogListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRumStatsLogList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRumStatsLogListResponse rsp = DescribeRumStatsLogListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRumStatsLogListOutcome(rsp);
        else
            return DescribeRumStatsLogListOutcome(o.GetError());
    }
    else
    {
        return DescribeRumStatsLogListOutcome(outcome.GetError());
    }
}

void RumClient::DescribeRumStatsLogListAsync(const DescribeRumStatsLogListRequest& request, const DescribeRumStatsLogListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRumStatsLogListRequest&;
    using Resp = DescribeRumStatsLogListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRumStatsLogList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeRumStatsLogListOutcomeCallable RumClient::DescribeRumStatsLogListCallable(const DescribeRumStatsLogListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRumStatsLogListOutcome>>();
    DescribeRumStatsLogListAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeRumStatsLogListRequest&,
        DescribeRumStatsLogListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeScoresOutcome RumClient::DescribeScores(const DescribeScoresRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScores");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScoresResponse rsp = DescribeScoresResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScoresOutcome(rsp);
        else
            return DescribeScoresOutcome(o.GetError());
    }
    else
    {
        return DescribeScoresOutcome(outcome.GetError());
    }
}

void RumClient::DescribeScoresAsync(const DescribeScoresRequest& request, const DescribeScoresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeScoresRequest&;
    using Resp = DescribeScoresResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeScores", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeScoresOutcomeCallable RumClient::DescribeScoresCallable(const DescribeScoresRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeScoresOutcome>>();
    DescribeScoresAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeScoresRequest&,
        DescribeScoresOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeTawAreasOutcome RumClient::DescribeTawAreas(const DescribeTawAreasRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTawAreas");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTawAreasResponse rsp = DescribeTawAreasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTawAreasOutcome(rsp);
        else
            return DescribeTawAreasOutcome(o.GetError());
    }
    else
    {
        return DescribeTawAreasOutcome(outcome.GetError());
    }
}

void RumClient::DescribeTawAreasAsync(const DescribeTawAreasRequest& request, const DescribeTawAreasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTawAreasRequest&;
    using Resp = DescribeTawAreasResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTawAreas", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeTawAreasOutcomeCallable RumClient::DescribeTawAreasCallable(const DescribeTawAreasRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTawAreasOutcome>>();
    DescribeTawAreasAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeTawAreasRequest&,
        DescribeTawAreasOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeTawInstancesOutcome RumClient::DescribeTawInstances(const DescribeTawInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTawInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTawInstancesResponse rsp = DescribeTawInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTawInstancesOutcome(rsp);
        else
            return DescribeTawInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeTawInstancesOutcome(outcome.GetError());
    }
}

void RumClient::DescribeTawInstancesAsync(const DescribeTawInstancesRequest& request, const DescribeTawInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTawInstancesRequest&;
    using Resp = DescribeTawInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTawInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeTawInstancesOutcomeCallable RumClient::DescribeTawInstancesCallable(const DescribeTawInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTawInstancesOutcome>>();
    DescribeTawInstancesAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeTawInstancesRequest&,
        DescribeTawInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeUvListOutcome RumClient::DescribeUvList(const DescribeUvListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUvList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUvListResponse rsp = DescribeUvListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUvListOutcome(rsp);
        else
            return DescribeUvListOutcome(o.GetError());
    }
    else
    {
        return DescribeUvListOutcome(outcome.GetError());
    }
}

void RumClient::DescribeUvListAsync(const DescribeUvListRequest& request, const DescribeUvListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUvListRequest&;
    using Resp = DescribeUvListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUvList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeUvListOutcomeCallable RumClient::DescribeUvListCallable(const DescribeUvListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUvListOutcome>>();
    DescribeUvListAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeUvListRequest&,
        DescribeUvListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeWhitelistsOutcome RumClient::DescribeWhitelists(const DescribeWhitelistsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWhitelists");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWhitelistsResponse rsp = DescribeWhitelistsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWhitelistsOutcome(rsp);
        else
            return DescribeWhitelistsOutcome(o.GetError());
    }
    else
    {
        return DescribeWhitelistsOutcome(outcome.GetError());
    }
}

void RumClient::DescribeWhitelistsAsync(const DescribeWhitelistsRequest& request, const DescribeWhitelistsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeWhitelistsRequest&;
    using Resp = DescribeWhitelistsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWhitelists", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeWhitelistsOutcomeCallable RumClient::DescribeWhitelistsCallable(const DescribeWhitelistsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWhitelistsOutcome>>();
    DescribeWhitelistsAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeWhitelistsRequest&,
        DescribeWhitelistsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::ModifyInstanceOutcome RumClient::ModifyInstance(const ModifyInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstanceResponse rsp = ModifyInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstanceOutcome(rsp);
        else
            return ModifyInstanceOutcome(o.GetError());
    }
    else
    {
        return ModifyInstanceOutcome(outcome.GetError());
    }
}

void RumClient::ModifyInstanceAsync(const ModifyInstanceRequest& request, const ModifyInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyInstanceRequest&;
    using Resp = ModifyInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::ModifyInstanceOutcomeCallable RumClient::ModifyInstanceCallable(const ModifyInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyInstanceOutcome>>();
    ModifyInstanceAsync(
    request,
    [prom](
        const RumClient*,
        const ModifyInstanceRequest&,
        ModifyInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::ModifyProjectOutcome RumClient::ModifyProject(const ModifyProjectRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyProjectResponse rsp = ModifyProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyProjectOutcome(rsp);
        else
            return ModifyProjectOutcome(o.GetError());
    }
    else
    {
        return ModifyProjectOutcome(outcome.GetError());
    }
}

void RumClient::ModifyProjectAsync(const ModifyProjectRequest& request, const ModifyProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyProjectRequest&;
    using Resp = ModifyProjectResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyProject", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::ModifyProjectOutcomeCallable RumClient::ModifyProjectCallable(const ModifyProjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyProjectOutcome>>();
    ModifyProjectAsync(
    request,
    [prom](
        const RumClient*,
        const ModifyProjectRequest&,
        ModifyProjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::ModifyProjectLimitOutcome RumClient::ModifyProjectLimit(const ModifyProjectLimitRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyProjectLimit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyProjectLimitResponse rsp = ModifyProjectLimitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyProjectLimitOutcome(rsp);
        else
            return ModifyProjectLimitOutcome(o.GetError());
    }
    else
    {
        return ModifyProjectLimitOutcome(outcome.GetError());
    }
}

void RumClient::ModifyProjectLimitAsync(const ModifyProjectLimitRequest& request, const ModifyProjectLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyProjectLimitRequest&;
    using Resp = ModifyProjectLimitResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyProjectLimit", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::ModifyProjectLimitOutcomeCallable RumClient::ModifyProjectLimitCallable(const ModifyProjectLimitRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyProjectLimitOutcome>>();
    ModifyProjectLimitAsync(
    request,
    [prom](
        const RumClient*,
        const ModifyProjectLimitRequest&,
        ModifyProjectLimitOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::ResumeInstanceOutcome RumClient::ResumeInstance(const ResumeInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "ResumeInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResumeInstanceResponse rsp = ResumeInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResumeInstanceOutcome(rsp);
        else
            return ResumeInstanceOutcome(o.GetError());
    }
    else
    {
        return ResumeInstanceOutcome(outcome.GetError());
    }
}

void RumClient::ResumeInstanceAsync(const ResumeInstanceRequest& request, const ResumeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ResumeInstanceRequest&;
    using Resp = ResumeInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "ResumeInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::ResumeInstanceOutcomeCallable RumClient::ResumeInstanceCallable(const ResumeInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResumeInstanceOutcome>>();
    ResumeInstanceAsync(
    request,
    [prom](
        const RumClient*,
        const ResumeInstanceRequest&,
        ResumeInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::ResumeProjectOutcome RumClient::ResumeProject(const ResumeProjectRequest &request)
{
    auto outcome = MakeRequest(request, "ResumeProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResumeProjectResponse rsp = ResumeProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResumeProjectOutcome(rsp);
        else
            return ResumeProjectOutcome(o.GetError());
    }
    else
    {
        return ResumeProjectOutcome(outcome.GetError());
    }
}

void RumClient::ResumeProjectAsync(const ResumeProjectRequest& request, const ResumeProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ResumeProjectRequest&;
    using Resp = ResumeProjectResponse;

    DoRequestAsync<Req, Resp>(
        "ResumeProject", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::ResumeProjectOutcomeCallable RumClient::ResumeProjectCallable(const ResumeProjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResumeProjectOutcome>>();
    ResumeProjectAsync(
    request,
    [prom](
        const RumClient*,
        const ResumeProjectRequest&,
        ResumeProjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::StopInstanceOutcome RumClient::StopInstance(const StopInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "StopInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopInstanceResponse rsp = StopInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopInstanceOutcome(rsp);
        else
            return StopInstanceOutcome(o.GetError());
    }
    else
    {
        return StopInstanceOutcome(outcome.GetError());
    }
}

void RumClient::StopInstanceAsync(const StopInstanceRequest& request, const StopInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopInstanceRequest&;
    using Resp = StopInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "StopInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::StopInstanceOutcomeCallable RumClient::StopInstanceCallable(const StopInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopInstanceOutcome>>();
    StopInstanceAsync(
    request,
    [prom](
        const RumClient*,
        const StopInstanceRequest&,
        StopInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::StopProjectOutcome RumClient::StopProject(const StopProjectRequest &request)
{
    auto outcome = MakeRequest(request, "StopProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopProjectResponse rsp = StopProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopProjectOutcome(rsp);
        else
            return StopProjectOutcome(o.GetError());
    }
    else
    {
        return StopProjectOutcome(outcome.GetError());
    }
}

void RumClient::StopProjectAsync(const StopProjectRequest& request, const StopProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopProjectRequest&;
    using Resp = StopProjectResponse;

    DoRequestAsync<Req, Resp>(
        "StopProject", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::StopProjectOutcomeCallable RumClient::StopProjectCallable(const StopProjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopProjectOutcome>>();
    StopProjectAsync(
    request,
    [prom](
        const RumClient*,
        const StopProjectRequest&,
        StopProjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


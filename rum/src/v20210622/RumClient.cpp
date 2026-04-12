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

RumClient::DescribeApplicationExitReportDetailOutcome RumClient::DescribeApplicationExitReportDetail(const DescribeApplicationExitReportDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApplicationExitReportDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApplicationExitReportDetailResponse rsp = DescribeApplicationExitReportDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApplicationExitReportDetailOutcome(rsp);
        else
            return DescribeApplicationExitReportDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeApplicationExitReportDetailOutcome(outcome.GetError());
    }
}

void RumClient::DescribeApplicationExitReportDetailAsync(const DescribeApplicationExitReportDetailRequest& request, const DescribeApplicationExitReportDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeApplicationExitReportDetailRequest&;
    using Resp = DescribeApplicationExitReportDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeApplicationExitReportDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeApplicationExitReportDetailOutcomeCallable RumClient::DescribeApplicationExitReportDetailCallable(const DescribeApplicationExitReportDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeApplicationExitReportDetailOutcome>>();
    DescribeApplicationExitReportDetailAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeApplicationExitReportDetailRequest&,
        DescribeApplicationExitReportDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeApplicationExitReportListOutcome RumClient::DescribeApplicationExitReportList(const DescribeApplicationExitReportListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApplicationExitReportList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApplicationExitReportListResponse rsp = DescribeApplicationExitReportListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApplicationExitReportListOutcome(rsp);
        else
            return DescribeApplicationExitReportListOutcome(o.GetError());
    }
    else
    {
        return DescribeApplicationExitReportListOutcome(outcome.GetError());
    }
}

void RumClient::DescribeApplicationExitReportListAsync(const DescribeApplicationExitReportListRequest& request, const DescribeApplicationExitReportListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeApplicationExitReportListRequest&;
    using Resp = DescribeApplicationExitReportListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeApplicationExitReportList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeApplicationExitReportListOutcomeCallable RumClient::DescribeApplicationExitReportListCallable(const DescribeApplicationExitReportListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeApplicationExitReportListOutcome>>();
    DescribeApplicationExitReportListAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeApplicationExitReportListRequest&,
        DescribeApplicationExitReportListOutcome resp,
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

RumClient::DescribeDataBridgeUrlV2Outcome RumClient::DescribeDataBridgeUrlV2(const DescribeDataBridgeUrlV2Request &request)
{
    auto outcome = MakeRequest(request, "DescribeDataBridgeUrlV2");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataBridgeUrlV2Response rsp = DescribeDataBridgeUrlV2Response();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataBridgeUrlV2Outcome(rsp);
        else
            return DescribeDataBridgeUrlV2Outcome(o.GetError());
    }
    else
    {
        return DescribeDataBridgeUrlV2Outcome(outcome.GetError());
    }
}

void RumClient::DescribeDataBridgeUrlV2Async(const DescribeDataBridgeUrlV2Request& request, const DescribeDataBridgeUrlV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDataBridgeUrlV2Request&;
    using Resp = DescribeDataBridgeUrlV2Response;

    DoRequestAsync<Req, Resp>(
        "DescribeDataBridgeUrlV2", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeDataBridgeUrlV2OutcomeCallable RumClient::DescribeDataBridgeUrlV2Callable(const DescribeDataBridgeUrlV2Request &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataBridgeUrlV2Outcome>>();
    DescribeDataBridgeUrlV2Async(
    request,
    [prom](
        const RumClient*,
        const DescribeDataBridgeUrlV2Request&,
        DescribeDataBridgeUrlV2Outcome resp,
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

RumClient::DescribeDataCustomUrlV2Outcome RumClient::DescribeDataCustomUrlV2(const DescribeDataCustomUrlV2Request &request)
{
    auto outcome = MakeRequest(request, "DescribeDataCustomUrlV2");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataCustomUrlV2Response rsp = DescribeDataCustomUrlV2Response();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataCustomUrlV2Outcome(rsp);
        else
            return DescribeDataCustomUrlV2Outcome(o.GetError());
    }
    else
    {
        return DescribeDataCustomUrlV2Outcome(outcome.GetError());
    }
}

void RumClient::DescribeDataCustomUrlV2Async(const DescribeDataCustomUrlV2Request& request, const DescribeDataCustomUrlV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDataCustomUrlV2Request&;
    using Resp = DescribeDataCustomUrlV2Response;

    DoRequestAsync<Req, Resp>(
        "DescribeDataCustomUrlV2", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeDataCustomUrlV2OutcomeCallable RumClient::DescribeDataCustomUrlV2Callable(const DescribeDataCustomUrlV2Request &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataCustomUrlV2Outcome>>();
    DescribeDataCustomUrlV2Async(
    request,
    [prom](
        const RumClient*,
        const DescribeDataCustomUrlV2Request&,
        DescribeDataCustomUrlV2Outcome resp,
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

RumClient::DescribeDataEventUrlV2Outcome RumClient::DescribeDataEventUrlV2(const DescribeDataEventUrlV2Request &request)
{
    auto outcome = MakeRequest(request, "DescribeDataEventUrlV2");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataEventUrlV2Response rsp = DescribeDataEventUrlV2Response();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataEventUrlV2Outcome(rsp);
        else
            return DescribeDataEventUrlV2Outcome(o.GetError());
    }
    else
    {
        return DescribeDataEventUrlV2Outcome(outcome.GetError());
    }
}

void RumClient::DescribeDataEventUrlV2Async(const DescribeDataEventUrlV2Request& request, const DescribeDataEventUrlV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDataEventUrlV2Request&;
    using Resp = DescribeDataEventUrlV2Response;

    DoRequestAsync<Req, Resp>(
        "DescribeDataEventUrlV2", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeDataEventUrlV2OutcomeCallable RumClient::DescribeDataEventUrlV2Callable(const DescribeDataEventUrlV2Request &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataEventUrlV2Outcome>>();
    DescribeDataEventUrlV2Async(
    request,
    [prom](
        const RumClient*,
        const DescribeDataEventUrlV2Request&,
        DescribeDataEventUrlV2Outcome resp,
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

RumClient::DescribeDataFetchUrlV2Outcome RumClient::DescribeDataFetchUrlV2(const DescribeDataFetchUrlV2Request &request)
{
    auto outcome = MakeRequest(request, "DescribeDataFetchUrlV2");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataFetchUrlV2Response rsp = DescribeDataFetchUrlV2Response();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataFetchUrlV2Outcome(rsp);
        else
            return DescribeDataFetchUrlV2Outcome(o.GetError());
    }
    else
    {
        return DescribeDataFetchUrlV2Outcome(outcome.GetError());
    }
}

void RumClient::DescribeDataFetchUrlV2Async(const DescribeDataFetchUrlV2Request& request, const DescribeDataFetchUrlV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDataFetchUrlV2Request&;
    using Resp = DescribeDataFetchUrlV2Response;

    DoRequestAsync<Req, Resp>(
        "DescribeDataFetchUrlV2", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeDataFetchUrlV2OutcomeCallable RumClient::DescribeDataFetchUrlV2Callable(const DescribeDataFetchUrlV2Request &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataFetchUrlV2Outcome>>();
    DescribeDataFetchUrlV2Async(
    request,
    [prom](
        const RumClient*,
        const DescribeDataFetchUrlV2Request&,
        DescribeDataFetchUrlV2Outcome resp,
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

RumClient::DescribeDataLogUrlStatisticsV2Outcome RumClient::DescribeDataLogUrlStatisticsV2(const DescribeDataLogUrlStatisticsV2Request &request)
{
    auto outcome = MakeRequest(request, "DescribeDataLogUrlStatisticsV2");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataLogUrlStatisticsV2Response rsp = DescribeDataLogUrlStatisticsV2Response();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataLogUrlStatisticsV2Outcome(rsp);
        else
            return DescribeDataLogUrlStatisticsV2Outcome(o.GetError());
    }
    else
    {
        return DescribeDataLogUrlStatisticsV2Outcome(outcome.GetError());
    }
}

void RumClient::DescribeDataLogUrlStatisticsV2Async(const DescribeDataLogUrlStatisticsV2Request& request, const DescribeDataLogUrlStatisticsV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDataLogUrlStatisticsV2Request&;
    using Resp = DescribeDataLogUrlStatisticsV2Response;

    DoRequestAsync<Req, Resp>(
        "DescribeDataLogUrlStatisticsV2", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeDataLogUrlStatisticsV2OutcomeCallable RumClient::DescribeDataLogUrlStatisticsV2Callable(const DescribeDataLogUrlStatisticsV2Request &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataLogUrlStatisticsV2Outcome>>();
    DescribeDataLogUrlStatisticsV2Async(
    request,
    [prom](
        const RumClient*,
        const DescribeDataLogUrlStatisticsV2Request&,
        DescribeDataLogUrlStatisticsV2Outcome resp,
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

RumClient::DescribeDataPerformancePageV2Outcome RumClient::DescribeDataPerformancePageV2(const DescribeDataPerformancePageV2Request &request)
{
    auto outcome = MakeRequest(request, "DescribeDataPerformancePageV2");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataPerformancePageV2Response rsp = DescribeDataPerformancePageV2Response();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataPerformancePageV2Outcome(rsp);
        else
            return DescribeDataPerformancePageV2Outcome(o.GetError());
    }
    else
    {
        return DescribeDataPerformancePageV2Outcome(outcome.GetError());
    }
}

void RumClient::DescribeDataPerformancePageV2Async(const DescribeDataPerformancePageV2Request& request, const DescribeDataPerformancePageV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDataPerformancePageV2Request&;
    using Resp = DescribeDataPerformancePageV2Response;

    DoRequestAsync<Req, Resp>(
        "DescribeDataPerformancePageV2", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeDataPerformancePageV2OutcomeCallable RumClient::DescribeDataPerformancePageV2Callable(const DescribeDataPerformancePageV2Request &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataPerformancePageV2Outcome>>();
    DescribeDataPerformancePageV2Async(
    request,
    [prom](
        const RumClient*,
        const DescribeDataPerformancePageV2Request&,
        DescribeDataPerformancePageV2Outcome resp,
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

RumClient::DescribeDataSetUrlStatisticsV2Outcome RumClient::DescribeDataSetUrlStatisticsV2(const DescribeDataSetUrlStatisticsV2Request &request)
{
    auto outcome = MakeRequest(request, "DescribeDataSetUrlStatisticsV2");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataSetUrlStatisticsV2Response rsp = DescribeDataSetUrlStatisticsV2Response();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataSetUrlStatisticsV2Outcome(rsp);
        else
            return DescribeDataSetUrlStatisticsV2Outcome(o.GetError());
    }
    else
    {
        return DescribeDataSetUrlStatisticsV2Outcome(outcome.GetError());
    }
}

void RumClient::DescribeDataSetUrlStatisticsV2Async(const DescribeDataSetUrlStatisticsV2Request& request, const DescribeDataSetUrlStatisticsV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDataSetUrlStatisticsV2Request&;
    using Resp = DescribeDataSetUrlStatisticsV2Response;

    DoRequestAsync<Req, Resp>(
        "DescribeDataSetUrlStatisticsV2", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeDataSetUrlStatisticsV2OutcomeCallable RumClient::DescribeDataSetUrlStatisticsV2Callable(const DescribeDataSetUrlStatisticsV2Request &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataSetUrlStatisticsV2Outcome>>();
    DescribeDataSetUrlStatisticsV2Async(
    request,
    [prom](
        const RumClient*,
        const DescribeDataSetUrlStatisticsV2Request&,
        DescribeDataSetUrlStatisticsV2Outcome resp,
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

RumClient::DescribeDataStaticProjectV2Outcome RumClient::DescribeDataStaticProjectV2(const DescribeDataStaticProjectV2Request &request)
{
    auto outcome = MakeRequest(request, "DescribeDataStaticProjectV2");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataStaticProjectV2Response rsp = DescribeDataStaticProjectV2Response();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataStaticProjectV2Outcome(rsp);
        else
            return DescribeDataStaticProjectV2Outcome(o.GetError());
    }
    else
    {
        return DescribeDataStaticProjectV2Outcome(outcome.GetError());
    }
}

void RumClient::DescribeDataStaticProjectV2Async(const DescribeDataStaticProjectV2Request& request, const DescribeDataStaticProjectV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDataStaticProjectV2Request&;
    using Resp = DescribeDataStaticProjectV2Response;

    DoRequestAsync<Req, Resp>(
        "DescribeDataStaticProjectV2", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeDataStaticProjectV2OutcomeCallable RumClient::DescribeDataStaticProjectV2Callable(const DescribeDataStaticProjectV2Request &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataStaticProjectV2Outcome>>();
    DescribeDataStaticProjectV2Async(
    request,
    [prom](
        const RumClient*,
        const DescribeDataStaticProjectV2Request&,
        DescribeDataStaticProjectV2Outcome resp,
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

RumClient::DescribeDataStaticResourceV2Outcome RumClient::DescribeDataStaticResourceV2(const DescribeDataStaticResourceV2Request &request)
{
    auto outcome = MakeRequest(request, "DescribeDataStaticResourceV2");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataStaticResourceV2Response rsp = DescribeDataStaticResourceV2Response();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataStaticResourceV2Outcome(rsp);
        else
            return DescribeDataStaticResourceV2Outcome(o.GetError());
    }
    else
    {
        return DescribeDataStaticResourceV2Outcome(outcome.GetError());
    }
}

void RumClient::DescribeDataStaticResourceV2Async(const DescribeDataStaticResourceV2Request& request, const DescribeDataStaticResourceV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDataStaticResourceV2Request&;
    using Resp = DescribeDataStaticResourceV2Response;

    DoRequestAsync<Req, Resp>(
        "DescribeDataStaticResourceV2", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeDataStaticResourceV2OutcomeCallable RumClient::DescribeDataStaticResourceV2Callable(const DescribeDataStaticResourceV2Request &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataStaticResourceV2Outcome>>();
    DescribeDataStaticResourceV2Async(
    request,
    [prom](
        const RumClient*,
        const DescribeDataStaticResourceV2Request&,
        DescribeDataStaticResourceV2Outcome resp,
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

RumClient::DescribeDataStaticUrlV2Outcome RumClient::DescribeDataStaticUrlV2(const DescribeDataStaticUrlV2Request &request)
{
    auto outcome = MakeRequest(request, "DescribeDataStaticUrlV2");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataStaticUrlV2Response rsp = DescribeDataStaticUrlV2Response();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataStaticUrlV2Outcome(rsp);
        else
            return DescribeDataStaticUrlV2Outcome(o.GetError());
    }
    else
    {
        return DescribeDataStaticUrlV2Outcome(outcome.GetError());
    }
}

void RumClient::DescribeDataStaticUrlV2Async(const DescribeDataStaticUrlV2Request& request, const DescribeDataStaticUrlV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDataStaticUrlV2Request&;
    using Resp = DescribeDataStaticUrlV2Response;

    DoRequestAsync<Req, Resp>(
        "DescribeDataStaticUrlV2", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeDataStaticUrlV2OutcomeCallable RumClient::DescribeDataStaticUrlV2Callable(const DescribeDataStaticUrlV2Request &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataStaticUrlV2Outcome>>();
    DescribeDataStaticUrlV2Async(
    request,
    [prom](
        const RumClient*,
        const DescribeDataStaticUrlV2Request&,
        DescribeDataStaticUrlV2Outcome resp,
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

RumClient::DescribeDataWebVitalsPageV2Outcome RumClient::DescribeDataWebVitalsPageV2(const DescribeDataWebVitalsPageV2Request &request)
{
    auto outcome = MakeRequest(request, "DescribeDataWebVitalsPageV2");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataWebVitalsPageV2Response rsp = DescribeDataWebVitalsPageV2Response();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataWebVitalsPageV2Outcome(rsp);
        else
            return DescribeDataWebVitalsPageV2Outcome(o.GetError());
    }
    else
    {
        return DescribeDataWebVitalsPageV2Outcome(outcome.GetError());
    }
}

void RumClient::DescribeDataWebVitalsPageV2Async(const DescribeDataWebVitalsPageV2Request& request, const DescribeDataWebVitalsPageV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDataWebVitalsPageV2Request&;
    using Resp = DescribeDataWebVitalsPageV2Response;

    DoRequestAsync<Req, Resp>(
        "DescribeDataWebVitalsPageV2", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeDataWebVitalsPageV2OutcomeCallable RumClient::DescribeDataWebVitalsPageV2Callable(const DescribeDataWebVitalsPageV2Request &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataWebVitalsPageV2Outcome>>();
    DescribeDataWebVitalsPageV2Async(
    request,
    [prom](
        const RumClient*,
        const DescribeDataWebVitalsPageV2Request&,
        DescribeDataWebVitalsPageV2Outcome resp,
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

RumClient::DescribeExceptionDetailOutcome RumClient::DescribeExceptionDetail(const DescribeExceptionDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeExceptionDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeExceptionDetailResponse rsp = DescribeExceptionDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeExceptionDetailOutcome(rsp);
        else
            return DescribeExceptionDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeExceptionDetailOutcome(outcome.GetError());
    }
}

void RumClient::DescribeExceptionDetailAsync(const DescribeExceptionDetailRequest& request, const DescribeExceptionDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeExceptionDetailRequest&;
    using Resp = DescribeExceptionDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeExceptionDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeExceptionDetailOutcomeCallable RumClient::DescribeExceptionDetailCallable(const DescribeExceptionDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeExceptionDetailOutcome>>();
    DescribeExceptionDetailAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeExceptionDetailRequest&,
        DescribeExceptionDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeExceptionReportListOutcome RumClient::DescribeExceptionReportList(const DescribeExceptionReportListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeExceptionReportList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeExceptionReportListResponse rsp = DescribeExceptionReportListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeExceptionReportListOutcome(rsp);
        else
            return DescribeExceptionReportListOutcome(o.GetError());
    }
    else
    {
        return DescribeExceptionReportListOutcome(outcome.GetError());
    }
}

void RumClient::DescribeExceptionReportListAsync(const DescribeExceptionReportListRequest& request, const DescribeExceptionReportListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeExceptionReportListRequest&;
    using Resp = DescribeExceptionReportListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeExceptionReportList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeExceptionReportListOutcomeCallable RumClient::DescribeExceptionReportListCallable(const DescribeExceptionReportListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeExceptionReportListOutcome>>();
    DescribeExceptionReportListAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeExceptionReportListRequest&,
        DescribeExceptionReportListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeFOOMMallocProblemDetailOutcome RumClient::DescribeFOOMMallocProblemDetail(const DescribeFOOMMallocProblemDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFOOMMallocProblemDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFOOMMallocProblemDetailResponse rsp = DescribeFOOMMallocProblemDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFOOMMallocProblemDetailOutcome(rsp);
        else
            return DescribeFOOMMallocProblemDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeFOOMMallocProblemDetailOutcome(outcome.GetError());
    }
}

void RumClient::DescribeFOOMMallocProblemDetailAsync(const DescribeFOOMMallocProblemDetailRequest& request, const DescribeFOOMMallocProblemDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFOOMMallocProblemDetailRequest&;
    using Resp = DescribeFOOMMallocProblemDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFOOMMallocProblemDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeFOOMMallocProblemDetailOutcomeCallable RumClient::DescribeFOOMMallocProblemDetailCallable(const DescribeFOOMMallocProblemDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFOOMMallocProblemDetailOutcome>>();
    DescribeFOOMMallocProblemDetailAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeFOOMMallocProblemDetailRequest&,
        DescribeFOOMMallocProblemDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeFOOMMallocProblemListOutcome RumClient::DescribeFOOMMallocProblemList(const DescribeFOOMMallocProblemListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFOOMMallocProblemList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFOOMMallocProblemListResponse rsp = DescribeFOOMMallocProblemListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFOOMMallocProblemListOutcome(rsp);
        else
            return DescribeFOOMMallocProblemListOutcome(o.GetError());
    }
    else
    {
        return DescribeFOOMMallocProblemListOutcome(outcome.GetError());
    }
}

void RumClient::DescribeFOOMMallocProblemListAsync(const DescribeFOOMMallocProblemListRequest& request, const DescribeFOOMMallocProblemListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFOOMMallocProblemListRequest&;
    using Resp = DescribeFOOMMallocProblemListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFOOMMallocProblemList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeFOOMMallocProblemListOutcomeCallable RumClient::DescribeFOOMMallocProblemListCallable(const DescribeFOOMMallocProblemListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFOOMMallocProblemListOutcome>>();
    DescribeFOOMMallocProblemListAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeFOOMMallocProblemListRequest&,
        DescribeFOOMMallocProblemListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeFOOMMallocReportListOutcome RumClient::DescribeFOOMMallocReportList(const DescribeFOOMMallocReportListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFOOMMallocReportList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFOOMMallocReportListResponse rsp = DescribeFOOMMallocReportListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFOOMMallocReportListOutcome(rsp);
        else
            return DescribeFOOMMallocReportListOutcome(o.GetError());
    }
    else
    {
        return DescribeFOOMMallocReportListOutcome(outcome.GetError());
    }
}

void RumClient::DescribeFOOMMallocReportListAsync(const DescribeFOOMMallocReportListRequest& request, const DescribeFOOMMallocReportListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFOOMMallocReportListRequest&;
    using Resp = DescribeFOOMMallocReportListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFOOMMallocReportList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeFOOMMallocReportListOutcomeCallable RumClient::DescribeFOOMMallocReportListCallable(const DescribeFOOMMallocReportListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFOOMMallocReportListOutcome>>();
    DescribeFOOMMallocReportListAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeFOOMMallocReportListRequest&,
        DescribeFOOMMallocReportListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeFOOMProblemDetailOutcome RumClient::DescribeFOOMProblemDetail(const DescribeFOOMProblemDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFOOMProblemDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFOOMProblemDetailResponse rsp = DescribeFOOMProblemDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFOOMProblemDetailOutcome(rsp);
        else
            return DescribeFOOMProblemDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeFOOMProblemDetailOutcome(outcome.GetError());
    }
}

void RumClient::DescribeFOOMProblemDetailAsync(const DescribeFOOMProblemDetailRequest& request, const DescribeFOOMProblemDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFOOMProblemDetailRequest&;
    using Resp = DescribeFOOMProblemDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFOOMProblemDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeFOOMProblemDetailOutcomeCallable RumClient::DescribeFOOMProblemDetailCallable(const DescribeFOOMProblemDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFOOMProblemDetailOutcome>>();
    DescribeFOOMProblemDetailAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeFOOMProblemDetailRequest&,
        DescribeFOOMProblemDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeFOOMProblemListOutcome RumClient::DescribeFOOMProblemList(const DescribeFOOMProblemListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFOOMProblemList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFOOMProblemListResponse rsp = DescribeFOOMProblemListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFOOMProblemListOutcome(rsp);
        else
            return DescribeFOOMProblemListOutcome(o.GetError());
    }
    else
    {
        return DescribeFOOMProblemListOutcome(outcome.GetError());
    }
}

void RumClient::DescribeFOOMProblemListAsync(const DescribeFOOMProblemListRequest& request, const DescribeFOOMProblemListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFOOMProblemListRequest&;
    using Resp = DescribeFOOMProblemListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFOOMProblemList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeFOOMProblemListOutcomeCallable RumClient::DescribeFOOMProblemListCallable(const DescribeFOOMProblemListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFOOMProblemListOutcome>>();
    DescribeFOOMProblemListAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeFOOMProblemListRequest&,
        DescribeFOOMProblemListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeFOOMReportListOutcome RumClient::DescribeFOOMReportList(const DescribeFOOMReportListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFOOMReportList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFOOMReportListResponse rsp = DescribeFOOMReportListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFOOMReportListOutcome(rsp);
        else
            return DescribeFOOMReportListOutcome(o.GetError());
    }
    else
    {
        return DescribeFOOMReportListOutcome(outcome.GetError());
    }
}

void RumClient::DescribeFOOMReportListAsync(const DescribeFOOMReportListRequest& request, const DescribeFOOMReportListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFOOMReportListRequest&;
    using Resp = DescribeFOOMReportListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFOOMReportList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeFOOMReportListOutcomeCallable RumClient::DescribeFOOMReportListCallable(const DescribeFOOMReportListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFOOMReportListOutcome>>();
    DescribeFOOMReportListAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeFOOMReportListRequest&,
        DescribeFOOMReportListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeIssuesDistributionOutcome RumClient::DescribeIssuesDistribution(const DescribeIssuesDistributionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIssuesDistribution");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIssuesDistributionResponse rsp = DescribeIssuesDistributionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIssuesDistributionOutcome(rsp);
        else
            return DescribeIssuesDistributionOutcome(o.GetError());
    }
    else
    {
        return DescribeIssuesDistributionOutcome(outcome.GetError());
    }
}

void RumClient::DescribeIssuesDistributionAsync(const DescribeIssuesDistributionRequest& request, const DescribeIssuesDistributionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIssuesDistributionRequest&;
    using Resp = DescribeIssuesDistributionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIssuesDistribution", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeIssuesDistributionOutcomeCallable RumClient::DescribeIssuesDistributionCallable(const DescribeIssuesDistributionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIssuesDistributionOutcome>>();
    DescribeIssuesDistributionAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeIssuesDistributionRequest&,
        DescribeIssuesDistributionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeIssuesListOutcome RumClient::DescribeIssuesList(const DescribeIssuesListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIssuesList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIssuesListResponse rsp = DescribeIssuesListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIssuesListOutcome(rsp);
        else
            return DescribeIssuesListOutcome(o.GetError());
    }
    else
    {
        return DescribeIssuesListOutcome(outcome.GetError());
    }
}

void RumClient::DescribeIssuesListAsync(const DescribeIssuesListRequest& request, const DescribeIssuesListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIssuesListRequest&;
    using Resp = DescribeIssuesListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIssuesList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeIssuesListOutcomeCallable RumClient::DescribeIssuesListCallable(const DescribeIssuesListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIssuesListOutcome>>();
    DescribeIssuesListAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeIssuesListRequest&,
        DescribeIssuesListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeIssuesStatisticsTrendOutcome RumClient::DescribeIssuesStatisticsTrend(const DescribeIssuesStatisticsTrendRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIssuesStatisticsTrend");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIssuesStatisticsTrendResponse rsp = DescribeIssuesStatisticsTrendResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIssuesStatisticsTrendOutcome(rsp);
        else
            return DescribeIssuesStatisticsTrendOutcome(o.GetError());
    }
    else
    {
        return DescribeIssuesStatisticsTrendOutcome(outcome.GetError());
    }
}

void RumClient::DescribeIssuesStatisticsTrendAsync(const DescribeIssuesStatisticsTrendRequest& request, const DescribeIssuesStatisticsTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIssuesStatisticsTrendRequest&;
    using Resp = DescribeIssuesStatisticsTrendResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIssuesStatisticsTrend", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeIssuesStatisticsTrendOutcomeCallable RumClient::DescribeIssuesStatisticsTrendCallable(const DescribeIssuesStatisticsTrendRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIssuesStatisticsTrendOutcome>>();
    DescribeIssuesStatisticsTrendAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeIssuesStatisticsTrendRequest&,
        DescribeIssuesStatisticsTrendOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeLagANRProblemAccountDetailOutcome RumClient::DescribeLagANRProblemAccountDetail(const DescribeLagANRProblemAccountDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLagANRProblemAccountDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLagANRProblemAccountDetailResponse rsp = DescribeLagANRProblemAccountDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLagANRProblemAccountDetailOutcome(rsp);
        else
            return DescribeLagANRProblemAccountDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeLagANRProblemAccountDetailOutcome(outcome.GetError());
    }
}

void RumClient::DescribeLagANRProblemAccountDetailAsync(const DescribeLagANRProblemAccountDetailRequest& request, const DescribeLagANRProblemAccountDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLagANRProblemAccountDetailRequest&;
    using Resp = DescribeLagANRProblemAccountDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLagANRProblemAccountDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeLagANRProblemAccountDetailOutcomeCallable RumClient::DescribeLagANRProblemAccountDetailCallable(const DescribeLagANRProblemAccountDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLagANRProblemAccountDetailOutcome>>();
    DescribeLagANRProblemAccountDetailAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeLagANRProblemAccountDetailRequest&,
        DescribeLagANRProblemAccountDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeLagANRProblemFeatureAccountsOutcome RumClient::DescribeLagANRProblemFeatureAccounts(const DescribeLagANRProblemFeatureAccountsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLagANRProblemFeatureAccounts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLagANRProblemFeatureAccountsResponse rsp = DescribeLagANRProblemFeatureAccountsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLagANRProblemFeatureAccountsOutcome(rsp);
        else
            return DescribeLagANRProblemFeatureAccountsOutcome(o.GetError());
    }
    else
    {
        return DescribeLagANRProblemFeatureAccountsOutcome(outcome.GetError());
    }
}

void RumClient::DescribeLagANRProblemFeatureAccountsAsync(const DescribeLagANRProblemFeatureAccountsRequest& request, const DescribeLagANRProblemFeatureAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLagANRProblemFeatureAccountsRequest&;
    using Resp = DescribeLagANRProblemFeatureAccountsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLagANRProblemFeatureAccounts", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeLagANRProblemFeatureAccountsOutcomeCallable RumClient::DescribeLagANRProblemFeatureAccountsCallable(const DescribeLagANRProblemFeatureAccountsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLagANRProblemFeatureAccountsOutcome>>();
    DescribeLagANRProblemFeatureAccountsAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeLagANRProblemFeatureAccountsRequest&,
        DescribeLagANRProblemFeatureAccountsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeLagANRProblemListOutcome RumClient::DescribeLagANRProblemList(const DescribeLagANRProblemListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLagANRProblemList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLagANRProblemListResponse rsp = DescribeLagANRProblemListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLagANRProblemListOutcome(rsp);
        else
            return DescribeLagANRProblemListOutcome(o.GetError());
    }
    else
    {
        return DescribeLagANRProblemListOutcome(outcome.GetError());
    }
}

void RumClient::DescribeLagANRProblemListAsync(const DescribeLagANRProblemListRequest& request, const DescribeLagANRProblemListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLagANRProblemListRequest&;
    using Resp = DescribeLagANRProblemListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLagANRProblemList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeLagANRProblemListOutcomeCallable RumClient::DescribeLagANRProblemListCallable(const DescribeLagANRProblemListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLagANRProblemListOutcome>>();
    DescribeLagANRProblemListAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeLagANRProblemListRequest&,
        DescribeLagANRProblemListOutcome resp,
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

RumClient::DescribeScoresV2Outcome RumClient::DescribeScoresV2(const DescribeScoresV2Request &request)
{
    auto outcome = MakeRequest(request, "DescribeScoresV2");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScoresV2Response rsp = DescribeScoresV2Response();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScoresV2Outcome(rsp);
        else
            return DescribeScoresV2Outcome(o.GetError());
    }
    else
    {
        return DescribeScoresV2Outcome(outcome.GetError());
    }
}

void RumClient::DescribeScoresV2Async(const DescribeScoresV2Request& request, const DescribeScoresV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeScoresV2Request&;
    using Resp = DescribeScoresV2Response;

    DoRequestAsync<Req, Resp>(
        "DescribeScoresV2", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeScoresV2OutcomeCallable RumClient::DescribeScoresV2Callable(const DescribeScoresV2Request &request)
{
    const auto prom = std::make_shared<std::promise<DescribeScoresV2Outcome>>();
    DescribeScoresV2Async(
    request,
    [prom](
        const RumClient*,
        const DescribeScoresV2Request&,
        DescribeScoresV2Outcome resp,
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

RumClient::DescribeTokenOutcome RumClient::DescribeToken(const DescribeTokenRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTokenResponse rsp = DescribeTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTokenOutcome(rsp);
        else
            return DescribeTokenOutcome(o.GetError());
    }
    else
    {
        return DescribeTokenOutcome(outcome.GetError());
    }
}

void RumClient::DescribeTokenAsync(const DescribeTokenRequest& request, const DescribeTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTokenRequest&;
    using Resp = DescribeTokenResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeToken", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeTokenOutcomeCallable RumClient::DescribeTokenCallable(const DescribeTokenRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTokenOutcome>>();
    DescribeTokenAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeTokenRequest&,
        DescribeTokenOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeTopIssuesOutcome RumClient::DescribeTopIssues(const DescribeTopIssuesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTopIssues");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTopIssuesResponse rsp = DescribeTopIssuesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTopIssuesOutcome(rsp);
        else
            return DescribeTopIssuesOutcome(o.GetError());
    }
    else
    {
        return DescribeTopIssuesOutcome(outcome.GetError());
    }
}

void RumClient::DescribeTopIssuesAsync(const DescribeTopIssuesRequest& request, const DescribeTopIssuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTopIssuesRequest&;
    using Resp = DescribeTopIssuesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTopIssues", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeTopIssuesOutcomeCallable RumClient::DescribeTopIssuesCallable(const DescribeTopIssuesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTopIssuesOutcome>>();
    DescribeTopIssuesAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeTopIssuesRequest&,
        DescribeTopIssuesOutcome resp,
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


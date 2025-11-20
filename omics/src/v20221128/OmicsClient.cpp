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

#include <tencentcloud/omics/v20221128/OmicsClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Omics::V20221128;
using namespace TencentCloud::Omics::V20221128::Model;
using namespace std;

namespace
{
    const string VERSION = "2022-11-28";
    const string ENDPOINT = "omics.tencentcloudapi.com";
}

OmicsClient::OmicsClient(const Credential &credential, const string &region) :
    OmicsClient(credential, region, ClientProfile())
{
}

OmicsClient::OmicsClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


OmicsClient::CreateEnvironmentOutcome OmicsClient::CreateEnvironment(const CreateEnvironmentRequest &request)
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

void OmicsClient::CreateEnvironmentAsync(const CreateEnvironmentRequest& request, const CreateEnvironmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

OmicsClient::CreateEnvironmentOutcomeCallable OmicsClient::CreateEnvironmentCallable(const CreateEnvironmentRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateEnvironmentOutcome>>();
    CreateEnvironmentAsync(
    request,
    [prom](
        const OmicsClient*,
        const CreateEnvironmentRequest&,
        CreateEnvironmentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OmicsClient::CreateVolumeOutcome OmicsClient::CreateVolume(const CreateVolumeRequest &request)
{
    auto outcome = MakeRequest(request, "CreateVolume");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateVolumeResponse rsp = CreateVolumeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateVolumeOutcome(rsp);
        else
            return CreateVolumeOutcome(o.GetError());
    }
    else
    {
        return CreateVolumeOutcome(outcome.GetError());
    }
}

void OmicsClient::CreateVolumeAsync(const CreateVolumeRequest& request, const CreateVolumeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateVolumeRequest&;
    using Resp = CreateVolumeResponse;

    DoRequestAsync<Req, Resp>(
        "CreateVolume", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OmicsClient::CreateVolumeOutcomeCallable OmicsClient::CreateVolumeCallable(const CreateVolumeRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateVolumeOutcome>>();
    CreateVolumeAsync(
    request,
    [prom](
        const OmicsClient*,
        const CreateVolumeRequest&,
        CreateVolumeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OmicsClient::DeleteEnvironmentOutcome OmicsClient::DeleteEnvironment(const DeleteEnvironmentRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteEnvironment");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteEnvironmentResponse rsp = DeleteEnvironmentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteEnvironmentOutcome(rsp);
        else
            return DeleteEnvironmentOutcome(o.GetError());
    }
    else
    {
        return DeleteEnvironmentOutcome(outcome.GetError());
    }
}

void OmicsClient::DeleteEnvironmentAsync(const DeleteEnvironmentRequest& request, const DeleteEnvironmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteEnvironmentRequest&;
    using Resp = DeleteEnvironmentResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteEnvironment", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OmicsClient::DeleteEnvironmentOutcomeCallable OmicsClient::DeleteEnvironmentCallable(const DeleteEnvironmentRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteEnvironmentOutcome>>();
    DeleteEnvironmentAsync(
    request,
    [prom](
        const OmicsClient*,
        const DeleteEnvironmentRequest&,
        DeleteEnvironmentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OmicsClient::DeleteVolumeOutcome OmicsClient::DeleteVolume(const DeleteVolumeRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteVolume");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteVolumeResponse rsp = DeleteVolumeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteVolumeOutcome(rsp);
        else
            return DeleteVolumeOutcome(o.GetError());
    }
    else
    {
        return DeleteVolumeOutcome(outcome.GetError());
    }
}

void OmicsClient::DeleteVolumeAsync(const DeleteVolumeRequest& request, const DeleteVolumeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteVolumeRequest&;
    using Resp = DeleteVolumeResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteVolume", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OmicsClient::DeleteVolumeOutcomeCallable OmicsClient::DeleteVolumeCallable(const DeleteVolumeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteVolumeOutcome>>();
    DeleteVolumeAsync(
    request,
    [prom](
        const OmicsClient*,
        const DeleteVolumeRequest&,
        DeleteVolumeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OmicsClient::DeleteVolumeDataOutcome OmicsClient::DeleteVolumeData(const DeleteVolumeDataRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteVolumeData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteVolumeDataResponse rsp = DeleteVolumeDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteVolumeDataOutcome(rsp);
        else
            return DeleteVolumeDataOutcome(o.GetError());
    }
    else
    {
        return DeleteVolumeDataOutcome(outcome.GetError());
    }
}

void OmicsClient::DeleteVolumeDataAsync(const DeleteVolumeDataRequest& request, const DeleteVolumeDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteVolumeDataRequest&;
    using Resp = DeleteVolumeDataResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteVolumeData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OmicsClient::DeleteVolumeDataOutcomeCallable OmicsClient::DeleteVolumeDataCallable(const DeleteVolumeDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteVolumeDataOutcome>>();
    DeleteVolumeDataAsync(
    request,
    [prom](
        const OmicsClient*,
        const DeleteVolumeDataRequest&,
        DeleteVolumeDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OmicsClient::DescribeEnvironmentsOutcome OmicsClient::DescribeEnvironments(const DescribeEnvironmentsRequest &request)
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

void OmicsClient::DescribeEnvironmentsAsync(const DescribeEnvironmentsRequest& request, const DescribeEnvironmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

OmicsClient::DescribeEnvironmentsOutcomeCallable OmicsClient::DescribeEnvironmentsCallable(const DescribeEnvironmentsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEnvironmentsOutcome>>();
    DescribeEnvironmentsAsync(
    request,
    [prom](
        const OmicsClient*,
        const DescribeEnvironmentsRequest&,
        DescribeEnvironmentsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OmicsClient::DescribeRunGroupsOutcome OmicsClient::DescribeRunGroups(const DescribeRunGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRunGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRunGroupsResponse rsp = DescribeRunGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRunGroupsOutcome(rsp);
        else
            return DescribeRunGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeRunGroupsOutcome(outcome.GetError());
    }
}

void OmicsClient::DescribeRunGroupsAsync(const DescribeRunGroupsRequest& request, const DescribeRunGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRunGroupsRequest&;
    using Resp = DescribeRunGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRunGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OmicsClient::DescribeRunGroupsOutcomeCallable OmicsClient::DescribeRunGroupsCallable(const DescribeRunGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRunGroupsOutcome>>();
    DescribeRunGroupsAsync(
    request,
    [prom](
        const OmicsClient*,
        const DescribeRunGroupsRequest&,
        DescribeRunGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OmicsClient::DescribeRunsOutcome OmicsClient::DescribeRuns(const DescribeRunsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRuns");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRunsResponse rsp = DescribeRunsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRunsOutcome(rsp);
        else
            return DescribeRunsOutcome(o.GetError());
    }
    else
    {
        return DescribeRunsOutcome(outcome.GetError());
    }
}

void OmicsClient::DescribeRunsAsync(const DescribeRunsRequest& request, const DescribeRunsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRunsRequest&;
    using Resp = DescribeRunsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRuns", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OmicsClient::DescribeRunsOutcomeCallable OmicsClient::DescribeRunsCallable(const DescribeRunsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRunsOutcome>>();
    DescribeRunsAsync(
    request,
    [prom](
        const OmicsClient*,
        const DescribeRunsRequest&,
        DescribeRunsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OmicsClient::DescribeTablesOutcome OmicsClient::DescribeTables(const DescribeTablesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTables");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTablesResponse rsp = DescribeTablesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTablesOutcome(rsp);
        else
            return DescribeTablesOutcome(o.GetError());
    }
    else
    {
        return DescribeTablesOutcome(outcome.GetError());
    }
}

void OmicsClient::DescribeTablesAsync(const DescribeTablesRequest& request, const DescribeTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTablesRequest&;
    using Resp = DescribeTablesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTables", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OmicsClient::DescribeTablesOutcomeCallable OmicsClient::DescribeTablesCallable(const DescribeTablesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTablesOutcome>>();
    DescribeTablesAsync(
    request,
    [prom](
        const OmicsClient*,
        const DescribeTablesRequest&,
        DescribeTablesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OmicsClient::DescribeTablesRowsOutcome OmicsClient::DescribeTablesRows(const DescribeTablesRowsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTablesRows");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTablesRowsResponse rsp = DescribeTablesRowsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTablesRowsOutcome(rsp);
        else
            return DescribeTablesRowsOutcome(o.GetError());
    }
    else
    {
        return DescribeTablesRowsOutcome(outcome.GetError());
    }
}

void OmicsClient::DescribeTablesRowsAsync(const DescribeTablesRowsRequest& request, const DescribeTablesRowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTablesRowsRequest&;
    using Resp = DescribeTablesRowsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTablesRows", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OmicsClient::DescribeTablesRowsOutcomeCallable OmicsClient::DescribeTablesRowsCallable(const DescribeTablesRowsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTablesRowsOutcome>>();
    DescribeTablesRowsAsync(
    request,
    [prom](
        const OmicsClient*,
        const DescribeTablesRowsRequest&,
        DescribeTablesRowsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OmicsClient::DescribeVolumesOutcome OmicsClient::DescribeVolumes(const DescribeVolumesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVolumes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVolumesResponse rsp = DescribeVolumesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVolumesOutcome(rsp);
        else
            return DescribeVolumesOutcome(o.GetError());
    }
    else
    {
        return DescribeVolumesOutcome(outcome.GetError());
    }
}

void OmicsClient::DescribeVolumesAsync(const DescribeVolumesRequest& request, const DescribeVolumesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVolumesRequest&;
    using Resp = DescribeVolumesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVolumes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OmicsClient::DescribeVolumesOutcomeCallable OmicsClient::DescribeVolumesCallable(const DescribeVolumesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVolumesOutcome>>();
    DescribeVolumesAsync(
    request,
    [prom](
        const OmicsClient*,
        const DescribeVolumesRequest&,
        DescribeVolumesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OmicsClient::GetRunCallsOutcome OmicsClient::GetRunCalls(const GetRunCallsRequest &request)
{
    auto outcome = MakeRequest(request, "GetRunCalls");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetRunCallsResponse rsp = GetRunCallsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetRunCallsOutcome(rsp);
        else
            return GetRunCallsOutcome(o.GetError());
    }
    else
    {
        return GetRunCallsOutcome(outcome.GetError());
    }
}

void OmicsClient::GetRunCallsAsync(const GetRunCallsRequest& request, const GetRunCallsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetRunCallsRequest&;
    using Resp = GetRunCallsResponse;

    DoRequestAsync<Req, Resp>(
        "GetRunCalls", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OmicsClient::GetRunCallsOutcomeCallable OmicsClient::GetRunCallsCallable(const GetRunCallsRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetRunCallsOutcome>>();
    GetRunCallsAsync(
    request,
    [prom](
        const OmicsClient*,
        const GetRunCallsRequest&,
        GetRunCallsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OmicsClient::GetRunMetadataFileOutcome OmicsClient::GetRunMetadataFile(const GetRunMetadataFileRequest &request)
{
    auto outcome = MakeRequest(request, "GetRunMetadataFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetRunMetadataFileResponse rsp = GetRunMetadataFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetRunMetadataFileOutcome(rsp);
        else
            return GetRunMetadataFileOutcome(o.GetError());
    }
    else
    {
        return GetRunMetadataFileOutcome(outcome.GetError());
    }
}

void OmicsClient::GetRunMetadataFileAsync(const GetRunMetadataFileRequest& request, const GetRunMetadataFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetRunMetadataFileRequest&;
    using Resp = GetRunMetadataFileResponse;

    DoRequestAsync<Req, Resp>(
        "GetRunMetadataFile", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OmicsClient::GetRunMetadataFileOutcomeCallable OmicsClient::GetRunMetadataFileCallable(const GetRunMetadataFileRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetRunMetadataFileOutcome>>();
    GetRunMetadataFileAsync(
    request,
    [prom](
        const OmicsClient*,
        const GetRunMetadataFileRequest&,
        GetRunMetadataFileOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OmicsClient::GetRunStatusOutcome OmicsClient::GetRunStatus(const GetRunStatusRequest &request)
{
    auto outcome = MakeRequest(request, "GetRunStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetRunStatusResponse rsp = GetRunStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetRunStatusOutcome(rsp);
        else
            return GetRunStatusOutcome(o.GetError());
    }
    else
    {
        return GetRunStatusOutcome(outcome.GetError());
    }
}

void OmicsClient::GetRunStatusAsync(const GetRunStatusRequest& request, const GetRunStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetRunStatusRequest&;
    using Resp = GetRunStatusResponse;

    DoRequestAsync<Req, Resp>(
        "GetRunStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OmicsClient::GetRunStatusOutcomeCallable OmicsClient::GetRunStatusCallable(const GetRunStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetRunStatusOutcome>>();
    GetRunStatusAsync(
    request,
    [prom](
        const OmicsClient*,
        const GetRunStatusRequest&,
        GetRunStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OmicsClient::ImportTableFileOutcome OmicsClient::ImportTableFile(const ImportTableFileRequest &request)
{
    auto outcome = MakeRequest(request, "ImportTableFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ImportTableFileResponse rsp = ImportTableFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ImportTableFileOutcome(rsp);
        else
            return ImportTableFileOutcome(o.GetError());
    }
    else
    {
        return ImportTableFileOutcome(outcome.GetError());
    }
}

void OmicsClient::ImportTableFileAsync(const ImportTableFileRequest& request, const ImportTableFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ImportTableFileRequest&;
    using Resp = ImportTableFileResponse;

    DoRequestAsync<Req, Resp>(
        "ImportTableFile", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OmicsClient::ImportTableFileOutcomeCallable OmicsClient::ImportTableFileCallable(const ImportTableFileRequest &request)
{
    const auto prom = std::make_shared<std::promise<ImportTableFileOutcome>>();
    ImportTableFileAsync(
    request,
    [prom](
        const OmicsClient*,
        const ImportTableFileRequest&,
        ImportTableFileOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OmicsClient::ModifyVolumeOutcome OmicsClient::ModifyVolume(const ModifyVolumeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyVolume");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyVolumeResponse rsp = ModifyVolumeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyVolumeOutcome(rsp);
        else
            return ModifyVolumeOutcome(o.GetError());
    }
    else
    {
        return ModifyVolumeOutcome(outcome.GetError());
    }
}

void OmicsClient::ModifyVolumeAsync(const ModifyVolumeRequest& request, const ModifyVolumeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyVolumeRequest&;
    using Resp = ModifyVolumeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyVolume", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OmicsClient::ModifyVolumeOutcomeCallable OmicsClient::ModifyVolumeCallable(const ModifyVolumeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyVolumeOutcome>>();
    ModifyVolumeAsync(
    request,
    [prom](
        const OmicsClient*,
        const ModifyVolumeRequest&,
        ModifyVolumeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OmicsClient::RetryRunsOutcome OmicsClient::RetryRuns(const RetryRunsRequest &request)
{
    auto outcome = MakeRequest(request, "RetryRuns");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RetryRunsResponse rsp = RetryRunsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RetryRunsOutcome(rsp);
        else
            return RetryRunsOutcome(o.GetError());
    }
    else
    {
        return RetryRunsOutcome(outcome.GetError());
    }
}

void OmicsClient::RetryRunsAsync(const RetryRunsRequest& request, const RetryRunsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RetryRunsRequest&;
    using Resp = RetryRunsResponse;

    DoRequestAsync<Req, Resp>(
        "RetryRuns", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OmicsClient::RetryRunsOutcomeCallable OmicsClient::RetryRunsCallable(const RetryRunsRequest &request)
{
    const auto prom = std::make_shared<std::promise<RetryRunsOutcome>>();
    RetryRunsAsync(
    request,
    [prom](
        const OmicsClient*,
        const RetryRunsRequest&,
        RetryRunsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OmicsClient::RunApplicationOutcome OmicsClient::RunApplication(const RunApplicationRequest &request)
{
    auto outcome = MakeRequest(request, "RunApplication");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RunApplicationResponse rsp = RunApplicationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RunApplicationOutcome(rsp);
        else
            return RunApplicationOutcome(o.GetError());
    }
    else
    {
        return RunApplicationOutcome(outcome.GetError());
    }
}

void OmicsClient::RunApplicationAsync(const RunApplicationRequest& request, const RunApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RunApplicationRequest&;
    using Resp = RunApplicationResponse;

    DoRequestAsync<Req, Resp>(
        "RunApplication", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OmicsClient::RunApplicationOutcomeCallable OmicsClient::RunApplicationCallable(const RunApplicationRequest &request)
{
    const auto prom = std::make_shared<std::promise<RunApplicationOutcome>>();
    RunApplicationAsync(
    request,
    [prom](
        const OmicsClient*,
        const RunApplicationRequest&,
        RunApplicationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OmicsClient::RunWorkflowOutcome OmicsClient::RunWorkflow(const RunWorkflowRequest &request)
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

void OmicsClient::RunWorkflowAsync(const RunWorkflowRequest& request, const RunWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

OmicsClient::RunWorkflowOutcomeCallable OmicsClient::RunWorkflowCallable(const RunWorkflowRequest &request)
{
    const auto prom = std::make_shared<std::promise<RunWorkflowOutcome>>();
    RunWorkflowAsync(
    request,
    [prom](
        const OmicsClient*,
        const RunWorkflowRequest&,
        RunWorkflowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OmicsClient::TerminateRunGroupOutcome OmicsClient::TerminateRunGroup(const TerminateRunGroupRequest &request)
{
    auto outcome = MakeRequest(request, "TerminateRunGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TerminateRunGroupResponse rsp = TerminateRunGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TerminateRunGroupOutcome(rsp);
        else
            return TerminateRunGroupOutcome(o.GetError());
    }
    else
    {
        return TerminateRunGroupOutcome(outcome.GetError());
    }
}

void OmicsClient::TerminateRunGroupAsync(const TerminateRunGroupRequest& request, const TerminateRunGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const TerminateRunGroupRequest&;
    using Resp = TerminateRunGroupResponse;

    DoRequestAsync<Req, Resp>(
        "TerminateRunGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OmicsClient::TerminateRunGroupOutcomeCallable OmicsClient::TerminateRunGroupCallable(const TerminateRunGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<TerminateRunGroupOutcome>>();
    TerminateRunGroupAsync(
    request,
    [prom](
        const OmicsClient*,
        const TerminateRunGroupRequest&,
        TerminateRunGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


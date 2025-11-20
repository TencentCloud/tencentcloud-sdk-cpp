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

#include <tencentcloud/tcaplusdb/v20190823/TcaplusdbClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tcaplusdb::V20190823;
using namespace TencentCloud::Tcaplusdb::V20190823::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-08-23";
    const string ENDPOINT = "tcaplusdb.tencentcloudapi.com";
}

TcaplusdbClient::TcaplusdbClient(const Credential &credential, const string &region) :
    TcaplusdbClient(credential, region, ClientProfile())
{
}

TcaplusdbClient::TcaplusdbClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TcaplusdbClient::ClearTablesOutcome TcaplusdbClient::ClearTables(const ClearTablesRequest &request)
{
    auto outcome = MakeRequest(request, "ClearTables");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ClearTablesResponse rsp = ClearTablesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ClearTablesOutcome(rsp);
        else
            return ClearTablesOutcome(o.GetError());
    }
    else
    {
        return ClearTablesOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::ClearTablesAsync(const ClearTablesRequest& request, const ClearTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ClearTablesRequest&;
    using Resp = ClearTablesResponse;

    DoRequestAsync<Req, Resp>(
        "ClearTables", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcaplusdbClient::ClearTablesOutcomeCallable TcaplusdbClient::ClearTablesCallable(const ClearTablesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ClearTablesOutcome>>();
    ClearTablesAsync(
    request,
    [prom](
        const TcaplusdbClient*,
        const ClearTablesRequest&,
        ClearTablesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcaplusdbClient::CompareIdlFilesOutcome TcaplusdbClient::CompareIdlFiles(const CompareIdlFilesRequest &request)
{
    auto outcome = MakeRequest(request, "CompareIdlFiles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CompareIdlFilesResponse rsp = CompareIdlFilesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CompareIdlFilesOutcome(rsp);
        else
            return CompareIdlFilesOutcome(o.GetError());
    }
    else
    {
        return CompareIdlFilesOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::CompareIdlFilesAsync(const CompareIdlFilesRequest& request, const CompareIdlFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CompareIdlFilesRequest&;
    using Resp = CompareIdlFilesResponse;

    DoRequestAsync<Req, Resp>(
        "CompareIdlFiles", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcaplusdbClient::CompareIdlFilesOutcomeCallable TcaplusdbClient::CompareIdlFilesCallable(const CompareIdlFilesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CompareIdlFilesOutcome>>();
    CompareIdlFilesAsync(
    request,
    [prom](
        const TcaplusdbClient*,
        const CompareIdlFilesRequest&,
        CompareIdlFilesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcaplusdbClient::CreateBackupOutcome TcaplusdbClient::CreateBackup(const CreateBackupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBackup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBackupResponse rsp = CreateBackupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBackupOutcome(rsp);
        else
            return CreateBackupOutcome(o.GetError());
    }
    else
    {
        return CreateBackupOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::CreateBackupAsync(const CreateBackupRequest& request, const CreateBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateBackupRequest&;
    using Resp = CreateBackupResponse;

    DoRequestAsync<Req, Resp>(
        "CreateBackup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcaplusdbClient::CreateBackupOutcomeCallable TcaplusdbClient::CreateBackupCallable(const CreateBackupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateBackupOutcome>>();
    CreateBackupAsync(
    request,
    [prom](
        const TcaplusdbClient*,
        const CreateBackupRequest&,
        CreateBackupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcaplusdbClient::CreateClusterOutcome TcaplusdbClient::CreateCluster(const CreateClusterRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateClusterResponse rsp = CreateClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateClusterOutcome(rsp);
        else
            return CreateClusterOutcome(o.GetError());
    }
    else
    {
        return CreateClusterOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::CreateClusterAsync(const CreateClusterRequest& request, const CreateClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateClusterRequest&;
    using Resp = CreateClusterResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCluster", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcaplusdbClient::CreateClusterOutcomeCallable TcaplusdbClient::CreateClusterCallable(const CreateClusterRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateClusterOutcome>>();
    CreateClusterAsync(
    request,
    [prom](
        const TcaplusdbClient*,
        const CreateClusterRequest&,
        CreateClusterOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcaplusdbClient::CreateSnapshotsOutcome TcaplusdbClient::CreateSnapshots(const CreateSnapshotsRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSnapshots");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSnapshotsResponse rsp = CreateSnapshotsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSnapshotsOutcome(rsp);
        else
            return CreateSnapshotsOutcome(o.GetError());
    }
    else
    {
        return CreateSnapshotsOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::CreateSnapshotsAsync(const CreateSnapshotsRequest& request, const CreateSnapshotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSnapshotsRequest&;
    using Resp = CreateSnapshotsResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSnapshots", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcaplusdbClient::CreateSnapshotsOutcomeCallable TcaplusdbClient::CreateSnapshotsCallable(const CreateSnapshotsRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSnapshotsOutcome>>();
    CreateSnapshotsAsync(
    request,
    [prom](
        const TcaplusdbClient*,
        const CreateSnapshotsRequest&,
        CreateSnapshotsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcaplusdbClient::CreateTableGroupOutcome TcaplusdbClient::CreateTableGroup(const CreateTableGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTableGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTableGroupResponse rsp = CreateTableGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTableGroupOutcome(rsp);
        else
            return CreateTableGroupOutcome(o.GetError());
    }
    else
    {
        return CreateTableGroupOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::CreateTableGroupAsync(const CreateTableGroupRequest& request, const CreateTableGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTableGroupRequest&;
    using Resp = CreateTableGroupResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTableGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcaplusdbClient::CreateTableGroupOutcomeCallable TcaplusdbClient::CreateTableGroupCallable(const CreateTableGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTableGroupOutcome>>();
    CreateTableGroupAsync(
    request,
    [prom](
        const TcaplusdbClient*,
        const CreateTableGroupRequest&,
        CreateTableGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcaplusdbClient::CreateTablesOutcome TcaplusdbClient::CreateTables(const CreateTablesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTables");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTablesResponse rsp = CreateTablesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTablesOutcome(rsp);
        else
            return CreateTablesOutcome(o.GetError());
    }
    else
    {
        return CreateTablesOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::CreateTablesAsync(const CreateTablesRequest& request, const CreateTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTablesRequest&;
    using Resp = CreateTablesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTables", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcaplusdbClient::CreateTablesOutcomeCallable TcaplusdbClient::CreateTablesCallable(const CreateTablesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTablesOutcome>>();
    CreateTablesAsync(
    request,
    [prom](
        const TcaplusdbClient*,
        const CreateTablesRequest&,
        CreateTablesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcaplusdbClient::DeleteBackupRecordsOutcome TcaplusdbClient::DeleteBackupRecords(const DeleteBackupRecordsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteBackupRecords");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteBackupRecordsResponse rsp = DeleteBackupRecordsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteBackupRecordsOutcome(rsp);
        else
            return DeleteBackupRecordsOutcome(o.GetError());
    }
    else
    {
        return DeleteBackupRecordsOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::DeleteBackupRecordsAsync(const DeleteBackupRecordsRequest& request, const DeleteBackupRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteBackupRecordsRequest&;
    using Resp = DeleteBackupRecordsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteBackupRecords", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcaplusdbClient::DeleteBackupRecordsOutcomeCallable TcaplusdbClient::DeleteBackupRecordsCallable(const DeleteBackupRecordsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteBackupRecordsOutcome>>();
    DeleteBackupRecordsAsync(
    request,
    [prom](
        const TcaplusdbClient*,
        const DeleteBackupRecordsRequest&,
        DeleteBackupRecordsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcaplusdbClient::DeleteClusterOutcome TcaplusdbClient::DeleteCluster(const DeleteClusterRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteClusterResponse rsp = DeleteClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteClusterOutcome(rsp);
        else
            return DeleteClusterOutcome(o.GetError());
    }
    else
    {
        return DeleteClusterOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::DeleteClusterAsync(const DeleteClusterRequest& request, const DeleteClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteClusterRequest&;
    using Resp = DeleteClusterResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCluster", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcaplusdbClient::DeleteClusterOutcomeCallable TcaplusdbClient::DeleteClusterCallable(const DeleteClusterRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteClusterOutcome>>();
    DeleteClusterAsync(
    request,
    [prom](
        const TcaplusdbClient*,
        const DeleteClusterRequest&,
        DeleteClusterOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcaplusdbClient::DeleteIdlFilesOutcome TcaplusdbClient::DeleteIdlFiles(const DeleteIdlFilesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteIdlFiles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteIdlFilesResponse rsp = DeleteIdlFilesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteIdlFilesOutcome(rsp);
        else
            return DeleteIdlFilesOutcome(o.GetError());
    }
    else
    {
        return DeleteIdlFilesOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::DeleteIdlFilesAsync(const DeleteIdlFilesRequest& request, const DeleteIdlFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteIdlFilesRequest&;
    using Resp = DeleteIdlFilesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteIdlFiles", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcaplusdbClient::DeleteIdlFilesOutcomeCallable TcaplusdbClient::DeleteIdlFilesCallable(const DeleteIdlFilesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteIdlFilesOutcome>>();
    DeleteIdlFilesAsync(
    request,
    [prom](
        const TcaplusdbClient*,
        const DeleteIdlFilesRequest&,
        DeleteIdlFilesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcaplusdbClient::DeleteSnapshotsOutcome TcaplusdbClient::DeleteSnapshots(const DeleteSnapshotsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSnapshots");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSnapshotsResponse rsp = DeleteSnapshotsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSnapshotsOutcome(rsp);
        else
            return DeleteSnapshotsOutcome(o.GetError());
    }
    else
    {
        return DeleteSnapshotsOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::DeleteSnapshotsAsync(const DeleteSnapshotsRequest& request, const DeleteSnapshotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteSnapshotsRequest&;
    using Resp = DeleteSnapshotsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteSnapshots", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcaplusdbClient::DeleteSnapshotsOutcomeCallable TcaplusdbClient::DeleteSnapshotsCallable(const DeleteSnapshotsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteSnapshotsOutcome>>();
    DeleteSnapshotsAsync(
    request,
    [prom](
        const TcaplusdbClient*,
        const DeleteSnapshotsRequest&,
        DeleteSnapshotsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcaplusdbClient::DeleteTableDataFlowOutcome TcaplusdbClient::DeleteTableDataFlow(const DeleteTableDataFlowRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTableDataFlow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTableDataFlowResponse rsp = DeleteTableDataFlowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTableDataFlowOutcome(rsp);
        else
            return DeleteTableDataFlowOutcome(o.GetError());
    }
    else
    {
        return DeleteTableDataFlowOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::DeleteTableDataFlowAsync(const DeleteTableDataFlowRequest& request, const DeleteTableDataFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteTableDataFlowRequest&;
    using Resp = DeleteTableDataFlowResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteTableDataFlow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcaplusdbClient::DeleteTableDataFlowOutcomeCallable TcaplusdbClient::DeleteTableDataFlowCallable(const DeleteTableDataFlowRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteTableDataFlowOutcome>>();
    DeleteTableDataFlowAsync(
    request,
    [prom](
        const TcaplusdbClient*,
        const DeleteTableDataFlowRequest&,
        DeleteTableDataFlowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcaplusdbClient::DeleteTableGroupOutcome TcaplusdbClient::DeleteTableGroup(const DeleteTableGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTableGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTableGroupResponse rsp = DeleteTableGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTableGroupOutcome(rsp);
        else
            return DeleteTableGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteTableGroupOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::DeleteTableGroupAsync(const DeleteTableGroupRequest& request, const DeleteTableGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteTableGroupRequest&;
    using Resp = DeleteTableGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteTableGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcaplusdbClient::DeleteTableGroupOutcomeCallable TcaplusdbClient::DeleteTableGroupCallable(const DeleteTableGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteTableGroupOutcome>>();
    DeleteTableGroupAsync(
    request,
    [prom](
        const TcaplusdbClient*,
        const DeleteTableGroupRequest&,
        DeleteTableGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcaplusdbClient::DeleteTableIndexOutcome TcaplusdbClient::DeleteTableIndex(const DeleteTableIndexRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTableIndex");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTableIndexResponse rsp = DeleteTableIndexResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTableIndexOutcome(rsp);
        else
            return DeleteTableIndexOutcome(o.GetError());
    }
    else
    {
        return DeleteTableIndexOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::DeleteTableIndexAsync(const DeleteTableIndexRequest& request, const DeleteTableIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteTableIndexRequest&;
    using Resp = DeleteTableIndexResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteTableIndex", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcaplusdbClient::DeleteTableIndexOutcomeCallable TcaplusdbClient::DeleteTableIndexCallable(const DeleteTableIndexRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteTableIndexOutcome>>();
    DeleteTableIndexAsync(
    request,
    [prom](
        const TcaplusdbClient*,
        const DeleteTableIndexRequest&,
        DeleteTableIndexOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcaplusdbClient::DeleteTablesOutcome TcaplusdbClient::DeleteTables(const DeleteTablesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTables");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTablesResponse rsp = DeleteTablesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTablesOutcome(rsp);
        else
            return DeleteTablesOutcome(o.GetError());
    }
    else
    {
        return DeleteTablesOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::DeleteTablesAsync(const DeleteTablesRequest& request, const DeleteTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteTablesRequest&;
    using Resp = DeleteTablesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteTables", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcaplusdbClient::DeleteTablesOutcomeCallable TcaplusdbClient::DeleteTablesCallable(const DeleteTablesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteTablesOutcome>>();
    DeleteTablesAsync(
    request,
    [prom](
        const TcaplusdbClient*,
        const DeleteTablesRequest&,
        DeleteTablesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcaplusdbClient::DescribeApplicationsOutcome TcaplusdbClient::DescribeApplications(const DescribeApplicationsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApplications");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApplicationsResponse rsp = DescribeApplicationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApplicationsOutcome(rsp);
        else
            return DescribeApplicationsOutcome(o.GetError());
    }
    else
    {
        return DescribeApplicationsOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::DescribeApplicationsAsync(const DescribeApplicationsRequest& request, const DescribeApplicationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeApplicationsRequest&;
    using Resp = DescribeApplicationsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeApplications", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcaplusdbClient::DescribeApplicationsOutcomeCallable TcaplusdbClient::DescribeApplicationsCallable(const DescribeApplicationsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeApplicationsOutcome>>();
    DescribeApplicationsAsync(
    request,
    [prom](
        const TcaplusdbClient*,
        const DescribeApplicationsRequest&,
        DescribeApplicationsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcaplusdbClient::DescribeBackupRecordsOutcome TcaplusdbClient::DescribeBackupRecords(const DescribeBackupRecordsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackupRecords");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackupRecordsResponse rsp = DescribeBackupRecordsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackupRecordsOutcome(rsp);
        else
            return DescribeBackupRecordsOutcome(o.GetError());
    }
    else
    {
        return DescribeBackupRecordsOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::DescribeBackupRecordsAsync(const DescribeBackupRecordsRequest& request, const DescribeBackupRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBackupRecordsRequest&;
    using Resp = DescribeBackupRecordsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBackupRecords", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcaplusdbClient::DescribeBackupRecordsOutcomeCallable TcaplusdbClient::DescribeBackupRecordsCallable(const DescribeBackupRecordsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBackupRecordsOutcome>>();
    DescribeBackupRecordsAsync(
    request,
    [prom](
        const TcaplusdbClient*,
        const DescribeBackupRecordsRequest&,
        DescribeBackupRecordsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcaplusdbClient::DescribeClusterTagsOutcome TcaplusdbClient::DescribeClusterTags(const DescribeClusterTagsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterTags");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterTagsResponse rsp = DescribeClusterTagsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterTagsOutcome(rsp);
        else
            return DescribeClusterTagsOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterTagsOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::DescribeClusterTagsAsync(const DescribeClusterTagsRequest& request, const DescribeClusterTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeClusterTagsRequest&;
    using Resp = DescribeClusterTagsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClusterTags", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcaplusdbClient::DescribeClusterTagsOutcomeCallable TcaplusdbClient::DescribeClusterTagsCallable(const DescribeClusterTagsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClusterTagsOutcome>>();
    DescribeClusterTagsAsync(
    request,
    [prom](
        const TcaplusdbClient*,
        const DescribeClusterTagsRequest&,
        DescribeClusterTagsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcaplusdbClient::DescribeClustersOutcome TcaplusdbClient::DescribeClusters(const DescribeClustersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusters");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClustersResponse rsp = DescribeClustersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClustersOutcome(rsp);
        else
            return DescribeClustersOutcome(o.GetError());
    }
    else
    {
        return DescribeClustersOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::DescribeClustersAsync(const DescribeClustersRequest& request, const DescribeClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeClustersRequest&;
    using Resp = DescribeClustersResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClusters", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcaplusdbClient::DescribeClustersOutcomeCallable TcaplusdbClient::DescribeClustersCallable(const DescribeClustersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClustersOutcome>>();
    DescribeClustersAsync(
    request,
    [prom](
        const TcaplusdbClient*,
        const DescribeClustersRequest&,
        DescribeClustersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcaplusdbClient::DescribeIdlFileInfosOutcome TcaplusdbClient::DescribeIdlFileInfos(const DescribeIdlFileInfosRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIdlFileInfos");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIdlFileInfosResponse rsp = DescribeIdlFileInfosResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIdlFileInfosOutcome(rsp);
        else
            return DescribeIdlFileInfosOutcome(o.GetError());
    }
    else
    {
        return DescribeIdlFileInfosOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::DescribeIdlFileInfosAsync(const DescribeIdlFileInfosRequest& request, const DescribeIdlFileInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIdlFileInfosRequest&;
    using Resp = DescribeIdlFileInfosResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIdlFileInfos", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcaplusdbClient::DescribeIdlFileInfosOutcomeCallable TcaplusdbClient::DescribeIdlFileInfosCallable(const DescribeIdlFileInfosRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIdlFileInfosOutcome>>();
    DescribeIdlFileInfosAsync(
    request,
    [prom](
        const TcaplusdbClient*,
        const DescribeIdlFileInfosRequest&,
        DescribeIdlFileInfosOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcaplusdbClient::DescribeMachineOutcome TcaplusdbClient::DescribeMachine(const DescribeMachineRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMachine");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMachineResponse rsp = DescribeMachineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMachineOutcome(rsp);
        else
            return DescribeMachineOutcome(o.GetError());
    }
    else
    {
        return DescribeMachineOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::DescribeMachineAsync(const DescribeMachineRequest& request, const DescribeMachineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMachineRequest&;
    using Resp = DescribeMachineResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMachine", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcaplusdbClient::DescribeMachineOutcomeCallable TcaplusdbClient::DescribeMachineCallable(const DescribeMachineRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMachineOutcome>>();
    DescribeMachineAsync(
    request,
    [prom](
        const TcaplusdbClient*,
        const DescribeMachineRequest&,
        DescribeMachineOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcaplusdbClient::DescribeRegionsOutcome TcaplusdbClient::DescribeRegions(const DescribeRegionsRequest &request)
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

void TcaplusdbClient::DescribeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

TcaplusdbClient::DescribeRegionsOutcomeCallable TcaplusdbClient::DescribeRegionsCallable(const DescribeRegionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRegionsOutcome>>();
    DescribeRegionsAsync(
    request,
    [prom](
        const TcaplusdbClient*,
        const DescribeRegionsRequest&,
        DescribeRegionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcaplusdbClient::DescribeSnapshotsOutcome TcaplusdbClient::DescribeSnapshots(const DescribeSnapshotsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSnapshots");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSnapshotsResponse rsp = DescribeSnapshotsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSnapshotsOutcome(rsp);
        else
            return DescribeSnapshotsOutcome(o.GetError());
    }
    else
    {
        return DescribeSnapshotsOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::DescribeSnapshotsAsync(const DescribeSnapshotsRequest& request, const DescribeSnapshotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSnapshotsRequest&;
    using Resp = DescribeSnapshotsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSnapshots", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcaplusdbClient::DescribeSnapshotsOutcomeCallable TcaplusdbClient::DescribeSnapshotsCallable(const DescribeSnapshotsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSnapshotsOutcome>>();
    DescribeSnapshotsAsync(
    request,
    [prom](
        const TcaplusdbClient*,
        const DescribeSnapshotsRequest&,
        DescribeSnapshotsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcaplusdbClient::DescribeTableGroupTagsOutcome TcaplusdbClient::DescribeTableGroupTags(const DescribeTableGroupTagsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTableGroupTags");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTableGroupTagsResponse rsp = DescribeTableGroupTagsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTableGroupTagsOutcome(rsp);
        else
            return DescribeTableGroupTagsOutcome(o.GetError());
    }
    else
    {
        return DescribeTableGroupTagsOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::DescribeTableGroupTagsAsync(const DescribeTableGroupTagsRequest& request, const DescribeTableGroupTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTableGroupTagsRequest&;
    using Resp = DescribeTableGroupTagsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTableGroupTags", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcaplusdbClient::DescribeTableGroupTagsOutcomeCallable TcaplusdbClient::DescribeTableGroupTagsCallable(const DescribeTableGroupTagsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTableGroupTagsOutcome>>();
    DescribeTableGroupTagsAsync(
    request,
    [prom](
        const TcaplusdbClient*,
        const DescribeTableGroupTagsRequest&,
        DescribeTableGroupTagsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcaplusdbClient::DescribeTableGroupsOutcome TcaplusdbClient::DescribeTableGroups(const DescribeTableGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTableGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTableGroupsResponse rsp = DescribeTableGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTableGroupsOutcome(rsp);
        else
            return DescribeTableGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeTableGroupsOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::DescribeTableGroupsAsync(const DescribeTableGroupsRequest& request, const DescribeTableGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTableGroupsRequest&;
    using Resp = DescribeTableGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTableGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcaplusdbClient::DescribeTableGroupsOutcomeCallable TcaplusdbClient::DescribeTableGroupsCallable(const DescribeTableGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTableGroupsOutcome>>();
    DescribeTableGroupsAsync(
    request,
    [prom](
        const TcaplusdbClient*,
        const DescribeTableGroupsRequest&,
        DescribeTableGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcaplusdbClient::DescribeTableTagsOutcome TcaplusdbClient::DescribeTableTags(const DescribeTableTagsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTableTags");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTableTagsResponse rsp = DescribeTableTagsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTableTagsOutcome(rsp);
        else
            return DescribeTableTagsOutcome(o.GetError());
    }
    else
    {
        return DescribeTableTagsOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::DescribeTableTagsAsync(const DescribeTableTagsRequest& request, const DescribeTableTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTableTagsRequest&;
    using Resp = DescribeTableTagsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTableTags", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcaplusdbClient::DescribeTableTagsOutcomeCallable TcaplusdbClient::DescribeTableTagsCallable(const DescribeTableTagsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTableTagsOutcome>>();
    DescribeTableTagsAsync(
    request,
    [prom](
        const TcaplusdbClient*,
        const DescribeTableTagsRequest&,
        DescribeTableTagsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcaplusdbClient::DescribeTablesOutcome TcaplusdbClient::DescribeTables(const DescribeTablesRequest &request)
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

void TcaplusdbClient::DescribeTablesAsync(const DescribeTablesRequest& request, const DescribeTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

TcaplusdbClient::DescribeTablesOutcomeCallable TcaplusdbClient::DescribeTablesCallable(const DescribeTablesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTablesOutcome>>();
    DescribeTablesAsync(
    request,
    [prom](
        const TcaplusdbClient*,
        const DescribeTablesRequest&,
        DescribeTablesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcaplusdbClient::DescribeTablesInRecycleOutcome TcaplusdbClient::DescribeTablesInRecycle(const DescribeTablesInRecycleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTablesInRecycle");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTablesInRecycleResponse rsp = DescribeTablesInRecycleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTablesInRecycleOutcome(rsp);
        else
            return DescribeTablesInRecycleOutcome(o.GetError());
    }
    else
    {
        return DescribeTablesInRecycleOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::DescribeTablesInRecycleAsync(const DescribeTablesInRecycleRequest& request, const DescribeTablesInRecycleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTablesInRecycleRequest&;
    using Resp = DescribeTablesInRecycleResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTablesInRecycle", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcaplusdbClient::DescribeTablesInRecycleOutcomeCallable TcaplusdbClient::DescribeTablesInRecycleCallable(const DescribeTablesInRecycleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTablesInRecycleOutcome>>();
    DescribeTablesInRecycleAsync(
    request,
    [prom](
        const TcaplusdbClient*,
        const DescribeTablesInRecycleRequest&,
        DescribeTablesInRecycleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcaplusdbClient::DescribeTasksOutcome TcaplusdbClient::DescribeTasks(const DescribeTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTasksResponse rsp = DescribeTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTasksOutcome(rsp);
        else
            return DescribeTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeTasksOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::DescribeTasksAsync(const DescribeTasksRequest& request, const DescribeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTasksRequest&;
    using Resp = DescribeTasksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcaplusdbClient::DescribeTasksOutcomeCallable TcaplusdbClient::DescribeTasksCallable(const DescribeTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTasksOutcome>>();
    DescribeTasksAsync(
    request,
    [prom](
        const TcaplusdbClient*,
        const DescribeTasksRequest&,
        DescribeTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcaplusdbClient::DescribeUinInWhitelistOutcome TcaplusdbClient::DescribeUinInWhitelist(const DescribeUinInWhitelistRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUinInWhitelist");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUinInWhitelistResponse rsp = DescribeUinInWhitelistResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUinInWhitelistOutcome(rsp);
        else
            return DescribeUinInWhitelistOutcome(o.GetError());
    }
    else
    {
        return DescribeUinInWhitelistOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::DescribeUinInWhitelistAsync(const DescribeUinInWhitelistRequest& request, const DescribeUinInWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUinInWhitelistRequest&;
    using Resp = DescribeUinInWhitelistResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUinInWhitelist", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcaplusdbClient::DescribeUinInWhitelistOutcomeCallable TcaplusdbClient::DescribeUinInWhitelistCallable(const DescribeUinInWhitelistRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUinInWhitelistOutcome>>();
    DescribeUinInWhitelistAsync(
    request,
    [prom](
        const TcaplusdbClient*,
        const DescribeUinInWhitelistRequest&,
        DescribeUinInWhitelistOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcaplusdbClient::DisableRestProxyOutcome TcaplusdbClient::DisableRestProxy(const DisableRestProxyRequest &request)
{
    auto outcome = MakeRequest(request, "DisableRestProxy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisableRestProxyResponse rsp = DisableRestProxyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisableRestProxyOutcome(rsp);
        else
            return DisableRestProxyOutcome(o.GetError());
    }
    else
    {
        return DisableRestProxyOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::DisableRestProxyAsync(const DisableRestProxyRequest& request, const DisableRestProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DisableRestProxyRequest&;
    using Resp = DisableRestProxyResponse;

    DoRequestAsync<Req, Resp>(
        "DisableRestProxy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcaplusdbClient::DisableRestProxyOutcomeCallable TcaplusdbClient::DisableRestProxyCallable(const DisableRestProxyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisableRestProxyOutcome>>();
    DisableRestProxyAsync(
    request,
    [prom](
        const TcaplusdbClient*,
        const DisableRestProxyRequest&,
        DisableRestProxyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcaplusdbClient::EnableRestProxyOutcome TcaplusdbClient::EnableRestProxy(const EnableRestProxyRequest &request)
{
    auto outcome = MakeRequest(request, "EnableRestProxy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnableRestProxyResponse rsp = EnableRestProxyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnableRestProxyOutcome(rsp);
        else
            return EnableRestProxyOutcome(o.GetError());
    }
    else
    {
        return EnableRestProxyOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::EnableRestProxyAsync(const EnableRestProxyRequest& request, const EnableRestProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const EnableRestProxyRequest&;
    using Resp = EnableRestProxyResponse;

    DoRequestAsync<Req, Resp>(
        "EnableRestProxy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcaplusdbClient::EnableRestProxyOutcomeCallable TcaplusdbClient::EnableRestProxyCallable(const EnableRestProxyRequest &request)
{
    const auto prom = std::make_shared<std::promise<EnableRestProxyOutcome>>();
    EnableRestProxyAsync(
    request,
    [prom](
        const TcaplusdbClient*,
        const EnableRestProxyRequest&,
        EnableRestProxyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcaplusdbClient::ImportSnapshotsOutcome TcaplusdbClient::ImportSnapshots(const ImportSnapshotsRequest &request)
{
    auto outcome = MakeRequest(request, "ImportSnapshots");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ImportSnapshotsResponse rsp = ImportSnapshotsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ImportSnapshotsOutcome(rsp);
        else
            return ImportSnapshotsOutcome(o.GetError());
    }
    else
    {
        return ImportSnapshotsOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::ImportSnapshotsAsync(const ImportSnapshotsRequest& request, const ImportSnapshotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ImportSnapshotsRequest&;
    using Resp = ImportSnapshotsResponse;

    DoRequestAsync<Req, Resp>(
        "ImportSnapshots", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcaplusdbClient::ImportSnapshotsOutcomeCallable TcaplusdbClient::ImportSnapshotsCallable(const ImportSnapshotsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ImportSnapshotsOutcome>>();
    ImportSnapshotsAsync(
    request,
    [prom](
        const TcaplusdbClient*,
        const ImportSnapshotsRequest&,
        ImportSnapshotsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcaplusdbClient::MergeTablesDataOutcome TcaplusdbClient::MergeTablesData(const MergeTablesDataRequest &request)
{
    auto outcome = MakeRequest(request, "MergeTablesData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        MergeTablesDataResponse rsp = MergeTablesDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return MergeTablesDataOutcome(rsp);
        else
            return MergeTablesDataOutcome(o.GetError());
    }
    else
    {
        return MergeTablesDataOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::MergeTablesDataAsync(const MergeTablesDataRequest& request, const MergeTablesDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const MergeTablesDataRequest&;
    using Resp = MergeTablesDataResponse;

    DoRequestAsync<Req, Resp>(
        "MergeTablesData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcaplusdbClient::MergeTablesDataOutcomeCallable TcaplusdbClient::MergeTablesDataCallable(const MergeTablesDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<MergeTablesDataOutcome>>();
    MergeTablesDataAsync(
    request,
    [prom](
        const TcaplusdbClient*,
        const MergeTablesDataRequest&,
        MergeTablesDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcaplusdbClient::ModifyCensorshipOutcome TcaplusdbClient::ModifyCensorship(const ModifyCensorshipRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCensorship");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCensorshipResponse rsp = ModifyCensorshipResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCensorshipOutcome(rsp);
        else
            return ModifyCensorshipOutcome(o.GetError());
    }
    else
    {
        return ModifyCensorshipOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::ModifyCensorshipAsync(const ModifyCensorshipRequest& request, const ModifyCensorshipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCensorshipRequest&;
    using Resp = ModifyCensorshipResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCensorship", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcaplusdbClient::ModifyCensorshipOutcomeCallable TcaplusdbClient::ModifyCensorshipCallable(const ModifyCensorshipRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCensorshipOutcome>>();
    ModifyCensorshipAsync(
    request,
    [prom](
        const TcaplusdbClient*,
        const ModifyCensorshipRequest&,
        ModifyCensorshipOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcaplusdbClient::ModifyClusterMachineOutcome TcaplusdbClient::ModifyClusterMachine(const ModifyClusterMachineRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyClusterMachine");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyClusterMachineResponse rsp = ModifyClusterMachineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyClusterMachineOutcome(rsp);
        else
            return ModifyClusterMachineOutcome(o.GetError());
    }
    else
    {
        return ModifyClusterMachineOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::ModifyClusterMachineAsync(const ModifyClusterMachineRequest& request, const ModifyClusterMachineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyClusterMachineRequest&;
    using Resp = ModifyClusterMachineResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyClusterMachine", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcaplusdbClient::ModifyClusterMachineOutcomeCallable TcaplusdbClient::ModifyClusterMachineCallable(const ModifyClusterMachineRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyClusterMachineOutcome>>();
    ModifyClusterMachineAsync(
    request,
    [prom](
        const TcaplusdbClient*,
        const ModifyClusterMachineRequest&,
        ModifyClusterMachineOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcaplusdbClient::ModifyClusterNameOutcome TcaplusdbClient::ModifyClusterName(const ModifyClusterNameRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyClusterName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyClusterNameResponse rsp = ModifyClusterNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyClusterNameOutcome(rsp);
        else
            return ModifyClusterNameOutcome(o.GetError());
    }
    else
    {
        return ModifyClusterNameOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::ModifyClusterNameAsync(const ModifyClusterNameRequest& request, const ModifyClusterNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyClusterNameRequest&;
    using Resp = ModifyClusterNameResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyClusterName", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcaplusdbClient::ModifyClusterNameOutcomeCallable TcaplusdbClient::ModifyClusterNameCallable(const ModifyClusterNameRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyClusterNameOutcome>>();
    ModifyClusterNameAsync(
    request,
    [prom](
        const TcaplusdbClient*,
        const ModifyClusterNameRequest&,
        ModifyClusterNameOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcaplusdbClient::ModifyClusterPasswordOutcome TcaplusdbClient::ModifyClusterPassword(const ModifyClusterPasswordRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyClusterPassword");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyClusterPasswordResponse rsp = ModifyClusterPasswordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyClusterPasswordOutcome(rsp);
        else
            return ModifyClusterPasswordOutcome(o.GetError());
    }
    else
    {
        return ModifyClusterPasswordOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::ModifyClusterPasswordAsync(const ModifyClusterPasswordRequest& request, const ModifyClusterPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyClusterPasswordRequest&;
    using Resp = ModifyClusterPasswordResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyClusterPassword", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcaplusdbClient::ModifyClusterPasswordOutcomeCallable TcaplusdbClient::ModifyClusterPasswordCallable(const ModifyClusterPasswordRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyClusterPasswordOutcome>>();
    ModifyClusterPasswordAsync(
    request,
    [prom](
        const TcaplusdbClient*,
        const ModifyClusterPasswordRequest&,
        ModifyClusterPasswordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcaplusdbClient::ModifyClusterTagsOutcome TcaplusdbClient::ModifyClusterTags(const ModifyClusterTagsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyClusterTags");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyClusterTagsResponse rsp = ModifyClusterTagsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyClusterTagsOutcome(rsp);
        else
            return ModifyClusterTagsOutcome(o.GetError());
    }
    else
    {
        return ModifyClusterTagsOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::ModifyClusterTagsAsync(const ModifyClusterTagsRequest& request, const ModifyClusterTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyClusterTagsRequest&;
    using Resp = ModifyClusterTagsResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyClusterTags", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcaplusdbClient::ModifyClusterTagsOutcomeCallable TcaplusdbClient::ModifyClusterTagsCallable(const ModifyClusterTagsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyClusterTagsOutcome>>();
    ModifyClusterTagsAsync(
    request,
    [prom](
        const TcaplusdbClient*,
        const ModifyClusterTagsRequest&,
        ModifyClusterTagsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcaplusdbClient::ModifySnapshotsOutcome TcaplusdbClient::ModifySnapshots(const ModifySnapshotsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySnapshots");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySnapshotsResponse rsp = ModifySnapshotsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySnapshotsOutcome(rsp);
        else
            return ModifySnapshotsOutcome(o.GetError());
    }
    else
    {
        return ModifySnapshotsOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::ModifySnapshotsAsync(const ModifySnapshotsRequest& request, const ModifySnapshotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifySnapshotsRequest&;
    using Resp = ModifySnapshotsResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySnapshots", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcaplusdbClient::ModifySnapshotsOutcomeCallable TcaplusdbClient::ModifySnapshotsCallable(const ModifySnapshotsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySnapshotsOutcome>>();
    ModifySnapshotsAsync(
    request,
    [prom](
        const TcaplusdbClient*,
        const ModifySnapshotsRequest&,
        ModifySnapshotsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcaplusdbClient::ModifyTableGroupNameOutcome TcaplusdbClient::ModifyTableGroupName(const ModifyTableGroupNameRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTableGroupName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTableGroupNameResponse rsp = ModifyTableGroupNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTableGroupNameOutcome(rsp);
        else
            return ModifyTableGroupNameOutcome(o.GetError());
    }
    else
    {
        return ModifyTableGroupNameOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::ModifyTableGroupNameAsync(const ModifyTableGroupNameRequest& request, const ModifyTableGroupNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyTableGroupNameRequest&;
    using Resp = ModifyTableGroupNameResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyTableGroupName", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcaplusdbClient::ModifyTableGroupNameOutcomeCallable TcaplusdbClient::ModifyTableGroupNameCallable(const ModifyTableGroupNameRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyTableGroupNameOutcome>>();
    ModifyTableGroupNameAsync(
    request,
    [prom](
        const TcaplusdbClient*,
        const ModifyTableGroupNameRequest&,
        ModifyTableGroupNameOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcaplusdbClient::ModifyTableGroupTagsOutcome TcaplusdbClient::ModifyTableGroupTags(const ModifyTableGroupTagsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTableGroupTags");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTableGroupTagsResponse rsp = ModifyTableGroupTagsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTableGroupTagsOutcome(rsp);
        else
            return ModifyTableGroupTagsOutcome(o.GetError());
    }
    else
    {
        return ModifyTableGroupTagsOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::ModifyTableGroupTagsAsync(const ModifyTableGroupTagsRequest& request, const ModifyTableGroupTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyTableGroupTagsRequest&;
    using Resp = ModifyTableGroupTagsResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyTableGroupTags", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcaplusdbClient::ModifyTableGroupTagsOutcomeCallable TcaplusdbClient::ModifyTableGroupTagsCallable(const ModifyTableGroupTagsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyTableGroupTagsOutcome>>();
    ModifyTableGroupTagsAsync(
    request,
    [prom](
        const TcaplusdbClient*,
        const ModifyTableGroupTagsRequest&,
        ModifyTableGroupTagsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcaplusdbClient::ModifyTableMemosOutcome TcaplusdbClient::ModifyTableMemos(const ModifyTableMemosRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTableMemos");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTableMemosResponse rsp = ModifyTableMemosResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTableMemosOutcome(rsp);
        else
            return ModifyTableMemosOutcome(o.GetError());
    }
    else
    {
        return ModifyTableMemosOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::ModifyTableMemosAsync(const ModifyTableMemosRequest& request, const ModifyTableMemosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyTableMemosRequest&;
    using Resp = ModifyTableMemosResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyTableMemos", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcaplusdbClient::ModifyTableMemosOutcomeCallable TcaplusdbClient::ModifyTableMemosCallable(const ModifyTableMemosRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyTableMemosOutcome>>();
    ModifyTableMemosAsync(
    request,
    [prom](
        const TcaplusdbClient*,
        const ModifyTableMemosRequest&,
        ModifyTableMemosOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcaplusdbClient::ModifyTableQuotasOutcome TcaplusdbClient::ModifyTableQuotas(const ModifyTableQuotasRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTableQuotas");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTableQuotasResponse rsp = ModifyTableQuotasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTableQuotasOutcome(rsp);
        else
            return ModifyTableQuotasOutcome(o.GetError());
    }
    else
    {
        return ModifyTableQuotasOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::ModifyTableQuotasAsync(const ModifyTableQuotasRequest& request, const ModifyTableQuotasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyTableQuotasRequest&;
    using Resp = ModifyTableQuotasResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyTableQuotas", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcaplusdbClient::ModifyTableQuotasOutcomeCallable TcaplusdbClient::ModifyTableQuotasCallable(const ModifyTableQuotasRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyTableQuotasOutcome>>();
    ModifyTableQuotasAsync(
    request,
    [prom](
        const TcaplusdbClient*,
        const ModifyTableQuotasRequest&,
        ModifyTableQuotasOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcaplusdbClient::ModifyTableTagsOutcome TcaplusdbClient::ModifyTableTags(const ModifyTableTagsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTableTags");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTableTagsResponse rsp = ModifyTableTagsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTableTagsOutcome(rsp);
        else
            return ModifyTableTagsOutcome(o.GetError());
    }
    else
    {
        return ModifyTableTagsOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::ModifyTableTagsAsync(const ModifyTableTagsRequest& request, const ModifyTableTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyTableTagsRequest&;
    using Resp = ModifyTableTagsResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyTableTags", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcaplusdbClient::ModifyTableTagsOutcomeCallable TcaplusdbClient::ModifyTableTagsCallable(const ModifyTableTagsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyTableTagsOutcome>>();
    ModifyTableTagsAsync(
    request,
    [prom](
        const TcaplusdbClient*,
        const ModifyTableTagsRequest&,
        ModifyTableTagsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcaplusdbClient::ModifyTablesOutcome TcaplusdbClient::ModifyTables(const ModifyTablesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTables");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTablesResponse rsp = ModifyTablesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTablesOutcome(rsp);
        else
            return ModifyTablesOutcome(o.GetError());
    }
    else
    {
        return ModifyTablesOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::ModifyTablesAsync(const ModifyTablesRequest& request, const ModifyTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyTablesRequest&;
    using Resp = ModifyTablesResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyTables", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcaplusdbClient::ModifyTablesOutcomeCallable TcaplusdbClient::ModifyTablesCallable(const ModifyTablesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyTablesOutcome>>();
    ModifyTablesAsync(
    request,
    [prom](
        const TcaplusdbClient*,
        const ModifyTablesRequest&,
        ModifyTablesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcaplusdbClient::RecoverRecycleTablesOutcome TcaplusdbClient::RecoverRecycleTables(const RecoverRecycleTablesRequest &request)
{
    auto outcome = MakeRequest(request, "RecoverRecycleTables");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RecoverRecycleTablesResponse rsp = RecoverRecycleTablesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RecoverRecycleTablesOutcome(rsp);
        else
            return RecoverRecycleTablesOutcome(o.GetError());
    }
    else
    {
        return RecoverRecycleTablesOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::RecoverRecycleTablesAsync(const RecoverRecycleTablesRequest& request, const RecoverRecycleTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RecoverRecycleTablesRequest&;
    using Resp = RecoverRecycleTablesResponse;

    DoRequestAsync<Req, Resp>(
        "RecoverRecycleTables", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcaplusdbClient::RecoverRecycleTablesOutcomeCallable TcaplusdbClient::RecoverRecycleTablesCallable(const RecoverRecycleTablesRequest &request)
{
    const auto prom = std::make_shared<std::promise<RecoverRecycleTablesOutcome>>();
    RecoverRecycleTablesAsync(
    request,
    [prom](
        const TcaplusdbClient*,
        const RecoverRecycleTablesRequest&,
        RecoverRecycleTablesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcaplusdbClient::RollbackTablesOutcome TcaplusdbClient::RollbackTables(const RollbackTablesRequest &request)
{
    auto outcome = MakeRequest(request, "RollbackTables");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RollbackTablesResponse rsp = RollbackTablesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RollbackTablesOutcome(rsp);
        else
            return RollbackTablesOutcome(o.GetError());
    }
    else
    {
        return RollbackTablesOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::RollbackTablesAsync(const RollbackTablesRequest& request, const RollbackTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RollbackTablesRequest&;
    using Resp = RollbackTablesResponse;

    DoRequestAsync<Req, Resp>(
        "RollbackTables", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcaplusdbClient::RollbackTablesOutcomeCallable TcaplusdbClient::RollbackTablesCallable(const RollbackTablesRequest &request)
{
    const auto prom = std::make_shared<std::promise<RollbackTablesOutcome>>();
    RollbackTablesAsync(
    request,
    [prom](
        const TcaplusdbClient*,
        const RollbackTablesRequest&,
        RollbackTablesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcaplusdbClient::SetBackupExpireRuleOutcome TcaplusdbClient::SetBackupExpireRule(const SetBackupExpireRuleRequest &request)
{
    auto outcome = MakeRequest(request, "SetBackupExpireRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetBackupExpireRuleResponse rsp = SetBackupExpireRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetBackupExpireRuleOutcome(rsp);
        else
            return SetBackupExpireRuleOutcome(o.GetError());
    }
    else
    {
        return SetBackupExpireRuleOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::SetBackupExpireRuleAsync(const SetBackupExpireRuleRequest& request, const SetBackupExpireRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SetBackupExpireRuleRequest&;
    using Resp = SetBackupExpireRuleResponse;

    DoRequestAsync<Req, Resp>(
        "SetBackupExpireRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcaplusdbClient::SetBackupExpireRuleOutcomeCallable TcaplusdbClient::SetBackupExpireRuleCallable(const SetBackupExpireRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetBackupExpireRuleOutcome>>();
    SetBackupExpireRuleAsync(
    request,
    [prom](
        const TcaplusdbClient*,
        const SetBackupExpireRuleRequest&,
        SetBackupExpireRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcaplusdbClient::SetTableDataFlowOutcome TcaplusdbClient::SetTableDataFlow(const SetTableDataFlowRequest &request)
{
    auto outcome = MakeRequest(request, "SetTableDataFlow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetTableDataFlowResponse rsp = SetTableDataFlowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetTableDataFlowOutcome(rsp);
        else
            return SetTableDataFlowOutcome(o.GetError());
    }
    else
    {
        return SetTableDataFlowOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::SetTableDataFlowAsync(const SetTableDataFlowRequest& request, const SetTableDataFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SetTableDataFlowRequest&;
    using Resp = SetTableDataFlowResponse;

    DoRequestAsync<Req, Resp>(
        "SetTableDataFlow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcaplusdbClient::SetTableDataFlowOutcomeCallable TcaplusdbClient::SetTableDataFlowCallable(const SetTableDataFlowRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetTableDataFlowOutcome>>();
    SetTableDataFlowAsync(
    request,
    [prom](
        const TcaplusdbClient*,
        const SetTableDataFlowRequest&,
        SetTableDataFlowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcaplusdbClient::SetTableIndexOutcome TcaplusdbClient::SetTableIndex(const SetTableIndexRequest &request)
{
    auto outcome = MakeRequest(request, "SetTableIndex");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetTableIndexResponse rsp = SetTableIndexResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetTableIndexOutcome(rsp);
        else
            return SetTableIndexOutcome(o.GetError());
    }
    else
    {
        return SetTableIndexOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::SetTableIndexAsync(const SetTableIndexRequest& request, const SetTableIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SetTableIndexRequest&;
    using Resp = SetTableIndexResponse;

    DoRequestAsync<Req, Resp>(
        "SetTableIndex", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcaplusdbClient::SetTableIndexOutcomeCallable TcaplusdbClient::SetTableIndexCallable(const SetTableIndexRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetTableIndexOutcome>>();
    SetTableIndexAsync(
    request,
    [prom](
        const TcaplusdbClient*,
        const SetTableIndexRequest&,
        SetTableIndexOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcaplusdbClient::UpdateApplyOutcome TcaplusdbClient::UpdateApply(const UpdateApplyRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateApply");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateApplyResponse rsp = UpdateApplyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateApplyOutcome(rsp);
        else
            return UpdateApplyOutcome(o.GetError());
    }
    else
    {
        return UpdateApplyOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::UpdateApplyAsync(const UpdateApplyRequest& request, const UpdateApplyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateApplyRequest&;
    using Resp = UpdateApplyResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateApply", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcaplusdbClient::UpdateApplyOutcomeCallable TcaplusdbClient::UpdateApplyCallable(const UpdateApplyRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateApplyOutcome>>();
    UpdateApplyAsync(
    request,
    [prom](
        const TcaplusdbClient*,
        const UpdateApplyRequest&,
        UpdateApplyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcaplusdbClient::VerifyIdlFilesOutcome TcaplusdbClient::VerifyIdlFiles(const VerifyIdlFilesRequest &request)
{
    auto outcome = MakeRequest(request, "VerifyIdlFiles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VerifyIdlFilesResponse rsp = VerifyIdlFilesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VerifyIdlFilesOutcome(rsp);
        else
            return VerifyIdlFilesOutcome(o.GetError());
    }
    else
    {
        return VerifyIdlFilesOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::VerifyIdlFilesAsync(const VerifyIdlFilesRequest& request, const VerifyIdlFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const VerifyIdlFilesRequest&;
    using Resp = VerifyIdlFilesResponse;

    DoRequestAsync<Req, Resp>(
        "VerifyIdlFiles", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcaplusdbClient::VerifyIdlFilesOutcomeCallable TcaplusdbClient::VerifyIdlFilesCallable(const VerifyIdlFilesRequest &request)
{
    const auto prom = std::make_shared<std::promise<VerifyIdlFilesOutcome>>();
    VerifyIdlFilesAsync(
    request,
    [prom](
        const TcaplusdbClient*,
        const VerifyIdlFilesRequest&,
        VerifyIdlFilesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


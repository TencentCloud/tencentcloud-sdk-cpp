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

#include <tencentcloud/dlc/v20210125/DlcClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Dlc::V20210125;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-01-25";
    const string ENDPOINT = "dlc.tencentcloudapi.com";
}

DlcClient::DlcClient(const Credential &credential, const string &region) :
    DlcClient(credential, region, ClientProfile())
{
}

DlcClient::DlcClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


DlcClient::AddDMSPartitionsOutcome DlcClient::AddDMSPartitions(const AddDMSPartitionsRequest &request)
{
    auto outcome = MakeRequest(request, "AddDMSPartitions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddDMSPartitionsResponse rsp = AddDMSPartitionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddDMSPartitionsOutcome(rsp);
        else
            return AddDMSPartitionsOutcome(o.GetError());
    }
    else
    {
        return AddDMSPartitionsOutcome(outcome.GetError());
    }
}

void DlcClient::AddDMSPartitionsAsync(const AddDMSPartitionsRequest& request, const AddDMSPartitionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddDMSPartitionsRequest&;
    using Resp = AddDMSPartitionsResponse;

    DoRequestAsync<Req, Resp>(
        "AddDMSPartitions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::AddDMSPartitionsOutcomeCallable DlcClient::AddDMSPartitionsCallable(const AddDMSPartitionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddDMSPartitionsOutcome>>();
    AddDMSPartitionsAsync(
    request,
    [prom](
        const DlcClient*,
        const AddDMSPartitionsRequest&,
        AddDMSPartitionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::AddOptimizerEnginesOutcome DlcClient::AddOptimizerEngines(const AddOptimizerEnginesRequest &request)
{
    auto outcome = MakeRequest(request, "AddOptimizerEngines");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddOptimizerEnginesResponse rsp = AddOptimizerEnginesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddOptimizerEnginesOutcome(rsp);
        else
            return AddOptimizerEnginesOutcome(o.GetError());
    }
    else
    {
        return AddOptimizerEnginesOutcome(outcome.GetError());
    }
}

void DlcClient::AddOptimizerEnginesAsync(const AddOptimizerEnginesRequest& request, const AddOptimizerEnginesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddOptimizerEnginesRequest&;
    using Resp = AddOptimizerEnginesResponse;

    DoRequestAsync<Req, Resp>(
        "AddOptimizerEngines", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::AddOptimizerEnginesOutcomeCallable DlcClient::AddOptimizerEnginesCallable(const AddOptimizerEnginesRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddOptimizerEnginesOutcome>>();
    AddOptimizerEnginesAsync(
    request,
    [prom](
        const DlcClient*,
        const AddOptimizerEnginesRequest&,
        AddOptimizerEnginesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::AddUsersToWorkGroupOutcome DlcClient::AddUsersToWorkGroup(const AddUsersToWorkGroupRequest &request)
{
    auto outcome = MakeRequest(request, "AddUsersToWorkGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddUsersToWorkGroupResponse rsp = AddUsersToWorkGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddUsersToWorkGroupOutcome(rsp);
        else
            return AddUsersToWorkGroupOutcome(o.GetError());
    }
    else
    {
        return AddUsersToWorkGroupOutcome(outcome.GetError());
    }
}

void DlcClient::AddUsersToWorkGroupAsync(const AddUsersToWorkGroupRequest& request, const AddUsersToWorkGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddUsersToWorkGroupRequest&;
    using Resp = AddUsersToWorkGroupResponse;

    DoRequestAsync<Req, Resp>(
        "AddUsersToWorkGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::AddUsersToWorkGroupOutcomeCallable DlcClient::AddUsersToWorkGroupCallable(const AddUsersToWorkGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddUsersToWorkGroupOutcome>>();
    AddUsersToWorkGroupAsync(
    request,
    [prom](
        const DlcClient*,
        const AddUsersToWorkGroupRequest&,
        AddUsersToWorkGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::AlterDMSDatabaseOutcome DlcClient::AlterDMSDatabase(const AlterDMSDatabaseRequest &request)
{
    auto outcome = MakeRequest(request, "AlterDMSDatabase");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AlterDMSDatabaseResponse rsp = AlterDMSDatabaseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AlterDMSDatabaseOutcome(rsp);
        else
            return AlterDMSDatabaseOutcome(o.GetError());
    }
    else
    {
        return AlterDMSDatabaseOutcome(outcome.GetError());
    }
}

void DlcClient::AlterDMSDatabaseAsync(const AlterDMSDatabaseRequest& request, const AlterDMSDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AlterDMSDatabaseRequest&;
    using Resp = AlterDMSDatabaseResponse;

    DoRequestAsync<Req, Resp>(
        "AlterDMSDatabase", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::AlterDMSDatabaseOutcomeCallable DlcClient::AlterDMSDatabaseCallable(const AlterDMSDatabaseRequest &request)
{
    const auto prom = std::make_shared<std::promise<AlterDMSDatabaseOutcome>>();
    AlterDMSDatabaseAsync(
    request,
    [prom](
        const DlcClient*,
        const AlterDMSDatabaseRequest&,
        AlterDMSDatabaseOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::AlterDMSPartitionOutcome DlcClient::AlterDMSPartition(const AlterDMSPartitionRequest &request)
{
    auto outcome = MakeRequest(request, "AlterDMSPartition");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AlterDMSPartitionResponse rsp = AlterDMSPartitionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AlterDMSPartitionOutcome(rsp);
        else
            return AlterDMSPartitionOutcome(o.GetError());
    }
    else
    {
        return AlterDMSPartitionOutcome(outcome.GetError());
    }
}

void DlcClient::AlterDMSPartitionAsync(const AlterDMSPartitionRequest& request, const AlterDMSPartitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AlterDMSPartitionRequest&;
    using Resp = AlterDMSPartitionResponse;

    DoRequestAsync<Req, Resp>(
        "AlterDMSPartition", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::AlterDMSPartitionOutcomeCallable DlcClient::AlterDMSPartitionCallable(const AlterDMSPartitionRequest &request)
{
    const auto prom = std::make_shared<std::promise<AlterDMSPartitionOutcome>>();
    AlterDMSPartitionAsync(
    request,
    [prom](
        const DlcClient*,
        const AlterDMSPartitionRequest&,
        AlterDMSPartitionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::AlterDMSTableOutcome DlcClient::AlterDMSTable(const AlterDMSTableRequest &request)
{
    auto outcome = MakeRequest(request, "AlterDMSTable");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AlterDMSTableResponse rsp = AlterDMSTableResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AlterDMSTableOutcome(rsp);
        else
            return AlterDMSTableOutcome(o.GetError());
    }
    else
    {
        return AlterDMSTableOutcome(outcome.GetError());
    }
}

void DlcClient::AlterDMSTableAsync(const AlterDMSTableRequest& request, const AlterDMSTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AlterDMSTableRequest&;
    using Resp = AlterDMSTableResponse;

    DoRequestAsync<Req, Resp>(
        "AlterDMSTable", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::AlterDMSTableOutcomeCallable DlcClient::AlterDMSTableCallable(const AlterDMSTableRequest &request)
{
    const auto prom = std::make_shared<std::promise<AlterDMSTableOutcome>>();
    AlterDMSTableAsync(
    request,
    [prom](
        const DlcClient*,
        const AlterDMSTableRequest&,
        AlterDMSTableOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::AssignMangedTablePropertiesOutcome DlcClient::AssignMangedTableProperties(const AssignMangedTablePropertiesRequest &request)
{
    auto outcome = MakeRequest(request, "AssignMangedTableProperties");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AssignMangedTablePropertiesResponse rsp = AssignMangedTablePropertiesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AssignMangedTablePropertiesOutcome(rsp);
        else
            return AssignMangedTablePropertiesOutcome(o.GetError());
    }
    else
    {
        return AssignMangedTablePropertiesOutcome(outcome.GetError());
    }
}

void DlcClient::AssignMangedTablePropertiesAsync(const AssignMangedTablePropertiesRequest& request, const AssignMangedTablePropertiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AssignMangedTablePropertiesRequest&;
    using Resp = AssignMangedTablePropertiesResponse;

    DoRequestAsync<Req, Resp>(
        "AssignMangedTableProperties", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::AssignMangedTablePropertiesOutcomeCallable DlcClient::AssignMangedTablePropertiesCallable(const AssignMangedTablePropertiesRequest &request)
{
    const auto prom = std::make_shared<std::promise<AssignMangedTablePropertiesOutcome>>();
    AssignMangedTablePropertiesAsync(
    request,
    [prom](
        const DlcClient*,
        const AssignMangedTablePropertiesRequest&,
        AssignMangedTablePropertiesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::AssociateDatasourceHouseOutcome DlcClient::AssociateDatasourceHouse(const AssociateDatasourceHouseRequest &request)
{
    auto outcome = MakeRequest(request, "AssociateDatasourceHouse");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AssociateDatasourceHouseResponse rsp = AssociateDatasourceHouseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AssociateDatasourceHouseOutcome(rsp);
        else
            return AssociateDatasourceHouseOutcome(o.GetError());
    }
    else
    {
        return AssociateDatasourceHouseOutcome(outcome.GetError());
    }
}

void DlcClient::AssociateDatasourceHouseAsync(const AssociateDatasourceHouseRequest& request, const AssociateDatasourceHouseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AssociateDatasourceHouseRequest&;
    using Resp = AssociateDatasourceHouseResponse;

    DoRequestAsync<Req, Resp>(
        "AssociateDatasourceHouse", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::AssociateDatasourceHouseOutcomeCallable DlcClient::AssociateDatasourceHouseCallable(const AssociateDatasourceHouseRequest &request)
{
    const auto prom = std::make_shared<std::promise<AssociateDatasourceHouseOutcome>>();
    AssociateDatasourceHouseAsync(
    request,
    [prom](
        const DlcClient*,
        const AssociateDatasourceHouseRequest&,
        AssociateDatasourceHouseOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::AttachDataMaskPolicyOutcome DlcClient::AttachDataMaskPolicy(const AttachDataMaskPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "AttachDataMaskPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AttachDataMaskPolicyResponse rsp = AttachDataMaskPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AttachDataMaskPolicyOutcome(rsp);
        else
            return AttachDataMaskPolicyOutcome(o.GetError());
    }
    else
    {
        return AttachDataMaskPolicyOutcome(outcome.GetError());
    }
}

void DlcClient::AttachDataMaskPolicyAsync(const AttachDataMaskPolicyRequest& request, const AttachDataMaskPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AttachDataMaskPolicyRequest&;
    using Resp = AttachDataMaskPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "AttachDataMaskPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::AttachDataMaskPolicyOutcomeCallable DlcClient::AttachDataMaskPolicyCallable(const AttachDataMaskPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<AttachDataMaskPolicyOutcome>>();
    AttachDataMaskPolicyAsync(
    request,
    [prom](
        const DlcClient*,
        const AttachDataMaskPolicyRequest&,
        AttachDataMaskPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::AttachUserPolicyOutcome DlcClient::AttachUserPolicy(const AttachUserPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "AttachUserPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AttachUserPolicyResponse rsp = AttachUserPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AttachUserPolicyOutcome(rsp);
        else
            return AttachUserPolicyOutcome(o.GetError());
    }
    else
    {
        return AttachUserPolicyOutcome(outcome.GetError());
    }
}

void DlcClient::AttachUserPolicyAsync(const AttachUserPolicyRequest& request, const AttachUserPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AttachUserPolicyRequest&;
    using Resp = AttachUserPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "AttachUserPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::AttachUserPolicyOutcomeCallable DlcClient::AttachUserPolicyCallable(const AttachUserPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<AttachUserPolicyOutcome>>();
    AttachUserPolicyAsync(
    request,
    [prom](
        const DlcClient*,
        const AttachUserPolicyRequest&,
        AttachUserPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::AttachWorkGroupPolicyOutcome DlcClient::AttachWorkGroupPolicy(const AttachWorkGroupPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "AttachWorkGroupPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AttachWorkGroupPolicyResponse rsp = AttachWorkGroupPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AttachWorkGroupPolicyOutcome(rsp);
        else
            return AttachWorkGroupPolicyOutcome(o.GetError());
    }
    else
    {
        return AttachWorkGroupPolicyOutcome(outcome.GetError());
    }
}

void DlcClient::AttachWorkGroupPolicyAsync(const AttachWorkGroupPolicyRequest& request, const AttachWorkGroupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AttachWorkGroupPolicyRequest&;
    using Resp = AttachWorkGroupPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "AttachWorkGroupPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::AttachWorkGroupPolicyOutcomeCallable DlcClient::AttachWorkGroupPolicyCallable(const AttachWorkGroupPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<AttachWorkGroupPolicyOutcome>>();
    AttachWorkGroupPolicyAsync(
    request,
    [prom](
        const DlcClient*,
        const AttachWorkGroupPolicyRequest&,
        AttachWorkGroupPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::BindWorkGroupsToUserOutcome DlcClient::BindWorkGroupsToUser(const BindWorkGroupsToUserRequest &request)
{
    auto outcome = MakeRequest(request, "BindWorkGroupsToUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindWorkGroupsToUserResponse rsp = BindWorkGroupsToUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindWorkGroupsToUserOutcome(rsp);
        else
            return BindWorkGroupsToUserOutcome(o.GetError());
    }
    else
    {
        return BindWorkGroupsToUserOutcome(outcome.GetError());
    }
}

void DlcClient::BindWorkGroupsToUserAsync(const BindWorkGroupsToUserRequest& request, const BindWorkGroupsToUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BindWorkGroupsToUserRequest&;
    using Resp = BindWorkGroupsToUserResponse;

    DoRequestAsync<Req, Resp>(
        "BindWorkGroupsToUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::BindWorkGroupsToUserOutcomeCallable DlcClient::BindWorkGroupsToUserCallable(const BindWorkGroupsToUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<BindWorkGroupsToUserOutcome>>();
    BindWorkGroupsToUserAsync(
    request,
    [prom](
        const DlcClient*,
        const BindWorkGroupsToUserRequest&,
        BindWorkGroupsToUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::CancelNotebookSessionStatementOutcome DlcClient::CancelNotebookSessionStatement(const CancelNotebookSessionStatementRequest &request)
{
    auto outcome = MakeRequest(request, "CancelNotebookSessionStatement");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CancelNotebookSessionStatementResponse rsp = CancelNotebookSessionStatementResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CancelNotebookSessionStatementOutcome(rsp);
        else
            return CancelNotebookSessionStatementOutcome(o.GetError());
    }
    else
    {
        return CancelNotebookSessionStatementOutcome(outcome.GetError());
    }
}

void DlcClient::CancelNotebookSessionStatementAsync(const CancelNotebookSessionStatementRequest& request, const CancelNotebookSessionStatementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CancelNotebookSessionStatementRequest&;
    using Resp = CancelNotebookSessionStatementResponse;

    DoRequestAsync<Req, Resp>(
        "CancelNotebookSessionStatement", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CancelNotebookSessionStatementOutcomeCallable DlcClient::CancelNotebookSessionStatementCallable(const CancelNotebookSessionStatementRequest &request)
{
    const auto prom = std::make_shared<std::promise<CancelNotebookSessionStatementOutcome>>();
    CancelNotebookSessionStatementAsync(
    request,
    [prom](
        const DlcClient*,
        const CancelNotebookSessionStatementRequest&,
        CancelNotebookSessionStatementOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::CancelNotebookSessionStatementBatchOutcome DlcClient::CancelNotebookSessionStatementBatch(const CancelNotebookSessionStatementBatchRequest &request)
{
    auto outcome = MakeRequest(request, "CancelNotebookSessionStatementBatch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CancelNotebookSessionStatementBatchResponse rsp = CancelNotebookSessionStatementBatchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CancelNotebookSessionStatementBatchOutcome(rsp);
        else
            return CancelNotebookSessionStatementBatchOutcome(o.GetError());
    }
    else
    {
        return CancelNotebookSessionStatementBatchOutcome(outcome.GetError());
    }
}

void DlcClient::CancelNotebookSessionStatementBatchAsync(const CancelNotebookSessionStatementBatchRequest& request, const CancelNotebookSessionStatementBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CancelNotebookSessionStatementBatchRequest&;
    using Resp = CancelNotebookSessionStatementBatchResponse;

    DoRequestAsync<Req, Resp>(
        "CancelNotebookSessionStatementBatch", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CancelNotebookSessionStatementBatchOutcomeCallable DlcClient::CancelNotebookSessionStatementBatchCallable(const CancelNotebookSessionStatementBatchRequest &request)
{
    const auto prom = std::make_shared<std::promise<CancelNotebookSessionStatementBatchOutcome>>();
    CancelNotebookSessionStatementBatchAsync(
    request,
    [prom](
        const DlcClient*,
        const CancelNotebookSessionStatementBatchRequest&,
        CancelNotebookSessionStatementBatchOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::CancelSparkSessionBatchSQLOutcome DlcClient::CancelSparkSessionBatchSQL(const CancelSparkSessionBatchSQLRequest &request)
{
    auto outcome = MakeRequest(request, "CancelSparkSessionBatchSQL");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CancelSparkSessionBatchSQLResponse rsp = CancelSparkSessionBatchSQLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CancelSparkSessionBatchSQLOutcome(rsp);
        else
            return CancelSparkSessionBatchSQLOutcome(o.GetError());
    }
    else
    {
        return CancelSparkSessionBatchSQLOutcome(outcome.GetError());
    }
}

void DlcClient::CancelSparkSessionBatchSQLAsync(const CancelSparkSessionBatchSQLRequest& request, const CancelSparkSessionBatchSQLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CancelSparkSessionBatchSQLRequest&;
    using Resp = CancelSparkSessionBatchSQLResponse;

    DoRequestAsync<Req, Resp>(
        "CancelSparkSessionBatchSQL", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CancelSparkSessionBatchSQLOutcomeCallable DlcClient::CancelSparkSessionBatchSQLCallable(const CancelSparkSessionBatchSQLRequest &request)
{
    const auto prom = std::make_shared<std::promise<CancelSparkSessionBatchSQLOutcome>>();
    CancelSparkSessionBatchSQLAsync(
    request,
    [prom](
        const DlcClient*,
        const CancelSparkSessionBatchSQLRequest&,
        CancelSparkSessionBatchSQLOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::CancelTaskOutcome DlcClient::CancelTask(const CancelTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CancelTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CancelTaskResponse rsp = CancelTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CancelTaskOutcome(rsp);
        else
            return CancelTaskOutcome(o.GetError());
    }
    else
    {
        return CancelTaskOutcome(outcome.GetError());
    }
}

void DlcClient::CancelTaskAsync(const CancelTaskRequest& request, const CancelTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CancelTaskRequest&;
    using Resp = CancelTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CancelTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CancelTaskOutcomeCallable DlcClient::CancelTaskCallable(const CancelTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CancelTaskOutcome>>();
    CancelTaskAsync(
    request,
    [prom](
        const DlcClient*,
        const CancelTaskRequest&,
        CancelTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::CancelTasksOutcome DlcClient::CancelTasks(const CancelTasksRequest &request)
{
    auto outcome = MakeRequest(request, "CancelTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CancelTasksResponse rsp = CancelTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CancelTasksOutcome(rsp);
        else
            return CancelTasksOutcome(o.GetError());
    }
    else
    {
        return CancelTasksOutcome(outcome.GetError());
    }
}

void DlcClient::CancelTasksAsync(const CancelTasksRequest& request, const CancelTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CancelTasksRequest&;
    using Resp = CancelTasksResponse;

    DoRequestAsync<Req, Resp>(
        "CancelTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CancelTasksOutcomeCallable DlcClient::CancelTasksCallable(const CancelTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<CancelTasksOutcome>>();
    CancelTasksAsync(
    request,
    [prom](
        const DlcClient*,
        const CancelTasksRequest&,
        CancelTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::CheckDataEngineConfigPairsValidityOutcome DlcClient::CheckDataEngineConfigPairsValidity(const CheckDataEngineConfigPairsValidityRequest &request)
{
    auto outcome = MakeRequest(request, "CheckDataEngineConfigPairsValidity");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckDataEngineConfigPairsValidityResponse rsp = CheckDataEngineConfigPairsValidityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckDataEngineConfigPairsValidityOutcome(rsp);
        else
            return CheckDataEngineConfigPairsValidityOutcome(o.GetError());
    }
    else
    {
        return CheckDataEngineConfigPairsValidityOutcome(outcome.GetError());
    }
}

void DlcClient::CheckDataEngineConfigPairsValidityAsync(const CheckDataEngineConfigPairsValidityRequest& request, const CheckDataEngineConfigPairsValidityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CheckDataEngineConfigPairsValidityRequest&;
    using Resp = CheckDataEngineConfigPairsValidityResponse;

    DoRequestAsync<Req, Resp>(
        "CheckDataEngineConfigPairsValidity", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CheckDataEngineConfigPairsValidityOutcomeCallable DlcClient::CheckDataEngineConfigPairsValidityCallable(const CheckDataEngineConfigPairsValidityRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckDataEngineConfigPairsValidityOutcome>>();
    CheckDataEngineConfigPairsValidityAsync(
    request,
    [prom](
        const DlcClient*,
        const CheckDataEngineConfigPairsValidityRequest&,
        CheckDataEngineConfigPairsValidityOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::CheckDataEngineImageCanBeRollbackOutcome DlcClient::CheckDataEngineImageCanBeRollback(const CheckDataEngineImageCanBeRollbackRequest &request)
{
    auto outcome = MakeRequest(request, "CheckDataEngineImageCanBeRollback");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckDataEngineImageCanBeRollbackResponse rsp = CheckDataEngineImageCanBeRollbackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckDataEngineImageCanBeRollbackOutcome(rsp);
        else
            return CheckDataEngineImageCanBeRollbackOutcome(o.GetError());
    }
    else
    {
        return CheckDataEngineImageCanBeRollbackOutcome(outcome.GetError());
    }
}

void DlcClient::CheckDataEngineImageCanBeRollbackAsync(const CheckDataEngineImageCanBeRollbackRequest& request, const CheckDataEngineImageCanBeRollbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CheckDataEngineImageCanBeRollbackRequest&;
    using Resp = CheckDataEngineImageCanBeRollbackResponse;

    DoRequestAsync<Req, Resp>(
        "CheckDataEngineImageCanBeRollback", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CheckDataEngineImageCanBeRollbackOutcomeCallable DlcClient::CheckDataEngineImageCanBeRollbackCallable(const CheckDataEngineImageCanBeRollbackRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckDataEngineImageCanBeRollbackOutcome>>();
    CheckDataEngineImageCanBeRollbackAsync(
    request,
    [prom](
        const DlcClient*,
        const CheckDataEngineImageCanBeRollbackRequest&,
        CheckDataEngineImageCanBeRollbackOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::CheckDataEngineImageCanBeUpgradeOutcome DlcClient::CheckDataEngineImageCanBeUpgrade(const CheckDataEngineImageCanBeUpgradeRequest &request)
{
    auto outcome = MakeRequest(request, "CheckDataEngineImageCanBeUpgrade");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckDataEngineImageCanBeUpgradeResponse rsp = CheckDataEngineImageCanBeUpgradeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckDataEngineImageCanBeUpgradeOutcome(rsp);
        else
            return CheckDataEngineImageCanBeUpgradeOutcome(o.GetError());
    }
    else
    {
        return CheckDataEngineImageCanBeUpgradeOutcome(outcome.GetError());
    }
}

void DlcClient::CheckDataEngineImageCanBeUpgradeAsync(const CheckDataEngineImageCanBeUpgradeRequest& request, const CheckDataEngineImageCanBeUpgradeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CheckDataEngineImageCanBeUpgradeRequest&;
    using Resp = CheckDataEngineImageCanBeUpgradeResponse;

    DoRequestAsync<Req, Resp>(
        "CheckDataEngineImageCanBeUpgrade", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CheckDataEngineImageCanBeUpgradeOutcomeCallable DlcClient::CheckDataEngineImageCanBeUpgradeCallable(const CheckDataEngineImageCanBeUpgradeRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckDataEngineImageCanBeUpgradeOutcome>>();
    CheckDataEngineImageCanBeUpgradeAsync(
    request,
    [prom](
        const DlcClient*,
        const CheckDataEngineImageCanBeUpgradeRequest&,
        CheckDataEngineImageCanBeUpgradeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::CheckLockMetaDataOutcome DlcClient::CheckLockMetaData(const CheckLockMetaDataRequest &request)
{
    auto outcome = MakeRequest(request, "CheckLockMetaData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckLockMetaDataResponse rsp = CheckLockMetaDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckLockMetaDataOutcome(rsp);
        else
            return CheckLockMetaDataOutcome(o.GetError());
    }
    else
    {
        return CheckLockMetaDataOutcome(outcome.GetError());
    }
}

void DlcClient::CheckLockMetaDataAsync(const CheckLockMetaDataRequest& request, const CheckLockMetaDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CheckLockMetaDataRequest&;
    using Resp = CheckLockMetaDataResponse;

    DoRequestAsync<Req, Resp>(
        "CheckLockMetaData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CheckLockMetaDataOutcomeCallable DlcClient::CheckLockMetaDataCallable(const CheckLockMetaDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckLockMetaDataOutcome>>();
    CheckLockMetaDataAsync(
    request,
    [prom](
        const DlcClient*,
        const CheckLockMetaDataRequest&,
        CheckLockMetaDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::CreateCHDFSBindingProductOutcome DlcClient::CreateCHDFSBindingProduct(const CreateCHDFSBindingProductRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCHDFSBindingProduct");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCHDFSBindingProductResponse rsp = CreateCHDFSBindingProductResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCHDFSBindingProductOutcome(rsp);
        else
            return CreateCHDFSBindingProductOutcome(o.GetError());
    }
    else
    {
        return CreateCHDFSBindingProductOutcome(outcome.GetError());
    }
}

void DlcClient::CreateCHDFSBindingProductAsync(const CreateCHDFSBindingProductRequest& request, const CreateCHDFSBindingProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCHDFSBindingProductRequest&;
    using Resp = CreateCHDFSBindingProductResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCHDFSBindingProduct", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CreateCHDFSBindingProductOutcomeCallable DlcClient::CreateCHDFSBindingProductCallable(const CreateCHDFSBindingProductRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCHDFSBindingProductOutcome>>();
    CreateCHDFSBindingProductAsync(
    request,
    [prom](
        const DlcClient*,
        const CreateCHDFSBindingProductRequest&,
        CreateCHDFSBindingProductOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::CreateDMSDatabaseOutcome DlcClient::CreateDMSDatabase(const CreateDMSDatabaseRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDMSDatabase");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDMSDatabaseResponse rsp = CreateDMSDatabaseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDMSDatabaseOutcome(rsp);
        else
            return CreateDMSDatabaseOutcome(o.GetError());
    }
    else
    {
        return CreateDMSDatabaseOutcome(outcome.GetError());
    }
}

void DlcClient::CreateDMSDatabaseAsync(const CreateDMSDatabaseRequest& request, const CreateDMSDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDMSDatabaseRequest&;
    using Resp = CreateDMSDatabaseResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDMSDatabase", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CreateDMSDatabaseOutcomeCallable DlcClient::CreateDMSDatabaseCallable(const CreateDMSDatabaseRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDMSDatabaseOutcome>>();
    CreateDMSDatabaseAsync(
    request,
    [prom](
        const DlcClient*,
        const CreateDMSDatabaseRequest&,
        CreateDMSDatabaseOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::CreateDMSTableOutcome DlcClient::CreateDMSTable(const CreateDMSTableRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDMSTable");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDMSTableResponse rsp = CreateDMSTableResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDMSTableOutcome(rsp);
        else
            return CreateDMSTableOutcome(o.GetError());
    }
    else
    {
        return CreateDMSTableOutcome(outcome.GetError());
    }
}

void DlcClient::CreateDMSTableAsync(const CreateDMSTableRequest& request, const CreateDMSTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDMSTableRequest&;
    using Resp = CreateDMSTableResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDMSTable", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CreateDMSTableOutcomeCallable DlcClient::CreateDMSTableCallable(const CreateDMSTableRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDMSTableOutcome>>();
    CreateDMSTableAsync(
    request,
    [prom](
        const DlcClient*,
        const CreateDMSTableRequest&,
        CreateDMSTableOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::CreateDataEngineOutcome DlcClient::CreateDataEngine(const CreateDataEngineRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDataEngine");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDataEngineResponse rsp = CreateDataEngineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDataEngineOutcome(rsp);
        else
            return CreateDataEngineOutcome(o.GetError());
    }
    else
    {
        return CreateDataEngineOutcome(outcome.GetError());
    }
}

void DlcClient::CreateDataEngineAsync(const CreateDataEngineRequest& request, const CreateDataEngineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDataEngineRequest&;
    using Resp = CreateDataEngineResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDataEngine", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CreateDataEngineOutcomeCallable DlcClient::CreateDataEngineCallable(const CreateDataEngineRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDataEngineOutcome>>();
    CreateDataEngineAsync(
    request,
    [prom](
        const DlcClient*,
        const CreateDataEngineRequest&,
        CreateDataEngineOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::CreateDataMaskStrategyOutcome DlcClient::CreateDataMaskStrategy(const CreateDataMaskStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDataMaskStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDataMaskStrategyResponse rsp = CreateDataMaskStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDataMaskStrategyOutcome(rsp);
        else
            return CreateDataMaskStrategyOutcome(o.GetError());
    }
    else
    {
        return CreateDataMaskStrategyOutcome(outcome.GetError());
    }
}

void DlcClient::CreateDataMaskStrategyAsync(const CreateDataMaskStrategyRequest& request, const CreateDataMaskStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDataMaskStrategyRequest&;
    using Resp = CreateDataMaskStrategyResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDataMaskStrategy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CreateDataMaskStrategyOutcomeCallable DlcClient::CreateDataMaskStrategyCallable(const CreateDataMaskStrategyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDataMaskStrategyOutcome>>();
    CreateDataMaskStrategyAsync(
    request,
    [prom](
        const DlcClient*,
        const CreateDataMaskStrategyRequest&,
        CreateDataMaskStrategyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::CreateDatabaseOutcome DlcClient::CreateDatabase(const CreateDatabaseRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDatabase");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDatabaseResponse rsp = CreateDatabaseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDatabaseOutcome(rsp);
        else
            return CreateDatabaseOutcome(o.GetError());
    }
    else
    {
        return CreateDatabaseOutcome(outcome.GetError());
    }
}

void DlcClient::CreateDatabaseAsync(const CreateDatabaseRequest& request, const CreateDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDatabaseRequest&;
    using Resp = CreateDatabaseResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDatabase", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CreateDatabaseOutcomeCallable DlcClient::CreateDatabaseCallable(const CreateDatabaseRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDatabaseOutcome>>();
    CreateDatabaseAsync(
    request,
    [prom](
        const DlcClient*,
        const CreateDatabaseRequest&,
        CreateDatabaseOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::CreateDatasourceConnectionOutcome DlcClient::CreateDatasourceConnection(const CreateDatasourceConnectionRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDatasourceConnection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDatasourceConnectionResponse rsp = CreateDatasourceConnectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDatasourceConnectionOutcome(rsp);
        else
            return CreateDatasourceConnectionOutcome(o.GetError());
    }
    else
    {
        return CreateDatasourceConnectionOutcome(outcome.GetError());
    }
}

void DlcClient::CreateDatasourceConnectionAsync(const CreateDatasourceConnectionRequest& request, const CreateDatasourceConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDatasourceConnectionRequest&;
    using Resp = CreateDatasourceConnectionResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDatasourceConnection", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CreateDatasourceConnectionOutcomeCallable DlcClient::CreateDatasourceConnectionCallable(const CreateDatasourceConnectionRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDatasourceConnectionOutcome>>();
    CreateDatasourceConnectionAsync(
    request,
    [prom](
        const DlcClient*,
        const CreateDatasourceConnectionRequest&,
        CreateDatasourceConnectionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::CreateExportTaskOutcome DlcClient::CreateExportTask(const CreateExportTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateExportTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateExportTaskResponse rsp = CreateExportTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateExportTaskOutcome(rsp);
        else
            return CreateExportTaskOutcome(o.GetError());
    }
    else
    {
        return CreateExportTaskOutcome(outcome.GetError());
    }
}

void DlcClient::CreateExportTaskAsync(const CreateExportTaskRequest& request, const CreateExportTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateExportTaskRequest&;
    using Resp = CreateExportTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateExportTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CreateExportTaskOutcomeCallable DlcClient::CreateExportTaskCallable(const CreateExportTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateExportTaskOutcome>>();
    CreateExportTaskAsync(
    request,
    [prom](
        const DlcClient*,
        const CreateExportTaskRequest&,
        CreateExportTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::CreateImportTaskOutcome DlcClient::CreateImportTask(const CreateImportTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateImportTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateImportTaskResponse rsp = CreateImportTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateImportTaskOutcome(rsp);
        else
            return CreateImportTaskOutcome(o.GetError());
    }
    else
    {
        return CreateImportTaskOutcome(outcome.GetError());
    }
}

void DlcClient::CreateImportTaskAsync(const CreateImportTaskRequest& request, const CreateImportTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateImportTaskRequest&;
    using Resp = CreateImportTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateImportTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CreateImportTaskOutcomeCallable DlcClient::CreateImportTaskCallable(const CreateImportTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateImportTaskOutcome>>();
    CreateImportTaskAsync(
    request,
    [prom](
        const DlcClient*,
        const CreateImportTaskRequest&,
        CreateImportTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::CreateInternalTableOutcome DlcClient::CreateInternalTable(const CreateInternalTableRequest &request)
{
    auto outcome = MakeRequest(request, "CreateInternalTable");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateInternalTableResponse rsp = CreateInternalTableResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateInternalTableOutcome(rsp);
        else
            return CreateInternalTableOutcome(o.GetError());
    }
    else
    {
        return CreateInternalTableOutcome(outcome.GetError());
    }
}

void DlcClient::CreateInternalTableAsync(const CreateInternalTableRequest& request, const CreateInternalTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateInternalTableRequest&;
    using Resp = CreateInternalTableResponse;

    DoRequestAsync<Req, Resp>(
        "CreateInternalTable", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CreateInternalTableOutcomeCallable DlcClient::CreateInternalTableCallable(const CreateInternalTableRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateInternalTableOutcome>>();
    CreateInternalTableAsync(
    request,
    [prom](
        const DlcClient*,
        const CreateInternalTableRequest&,
        CreateInternalTableOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::CreateNotebookSessionOutcome DlcClient::CreateNotebookSession(const CreateNotebookSessionRequest &request)
{
    auto outcome = MakeRequest(request, "CreateNotebookSession");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateNotebookSessionResponse rsp = CreateNotebookSessionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateNotebookSessionOutcome(rsp);
        else
            return CreateNotebookSessionOutcome(o.GetError());
    }
    else
    {
        return CreateNotebookSessionOutcome(outcome.GetError());
    }
}

void DlcClient::CreateNotebookSessionAsync(const CreateNotebookSessionRequest& request, const CreateNotebookSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateNotebookSessionRequest&;
    using Resp = CreateNotebookSessionResponse;

    DoRequestAsync<Req, Resp>(
        "CreateNotebookSession", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CreateNotebookSessionOutcomeCallable DlcClient::CreateNotebookSessionCallable(const CreateNotebookSessionRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateNotebookSessionOutcome>>();
    CreateNotebookSessionAsync(
    request,
    [prom](
        const DlcClient*,
        const CreateNotebookSessionRequest&,
        CreateNotebookSessionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::CreateNotebookSessionStatementOutcome DlcClient::CreateNotebookSessionStatement(const CreateNotebookSessionStatementRequest &request)
{
    auto outcome = MakeRequest(request, "CreateNotebookSessionStatement");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateNotebookSessionStatementResponse rsp = CreateNotebookSessionStatementResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateNotebookSessionStatementOutcome(rsp);
        else
            return CreateNotebookSessionStatementOutcome(o.GetError());
    }
    else
    {
        return CreateNotebookSessionStatementOutcome(outcome.GetError());
    }
}

void DlcClient::CreateNotebookSessionStatementAsync(const CreateNotebookSessionStatementRequest& request, const CreateNotebookSessionStatementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateNotebookSessionStatementRequest&;
    using Resp = CreateNotebookSessionStatementResponse;

    DoRequestAsync<Req, Resp>(
        "CreateNotebookSessionStatement", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CreateNotebookSessionStatementOutcomeCallable DlcClient::CreateNotebookSessionStatementCallable(const CreateNotebookSessionStatementRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateNotebookSessionStatementOutcome>>();
    CreateNotebookSessionStatementAsync(
    request,
    [prom](
        const DlcClient*,
        const CreateNotebookSessionStatementRequest&,
        CreateNotebookSessionStatementOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::CreateNotebookSessionStatementSupportBatchSQLOutcome DlcClient::CreateNotebookSessionStatementSupportBatchSQL(const CreateNotebookSessionStatementSupportBatchSQLRequest &request)
{
    auto outcome = MakeRequest(request, "CreateNotebookSessionStatementSupportBatchSQL");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateNotebookSessionStatementSupportBatchSQLResponse rsp = CreateNotebookSessionStatementSupportBatchSQLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateNotebookSessionStatementSupportBatchSQLOutcome(rsp);
        else
            return CreateNotebookSessionStatementSupportBatchSQLOutcome(o.GetError());
    }
    else
    {
        return CreateNotebookSessionStatementSupportBatchSQLOutcome(outcome.GetError());
    }
}

void DlcClient::CreateNotebookSessionStatementSupportBatchSQLAsync(const CreateNotebookSessionStatementSupportBatchSQLRequest& request, const CreateNotebookSessionStatementSupportBatchSQLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateNotebookSessionStatementSupportBatchSQLRequest&;
    using Resp = CreateNotebookSessionStatementSupportBatchSQLResponse;

    DoRequestAsync<Req, Resp>(
        "CreateNotebookSessionStatementSupportBatchSQL", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CreateNotebookSessionStatementSupportBatchSQLOutcomeCallable DlcClient::CreateNotebookSessionStatementSupportBatchSQLCallable(const CreateNotebookSessionStatementSupportBatchSQLRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateNotebookSessionStatementSupportBatchSQLOutcome>>();
    CreateNotebookSessionStatementSupportBatchSQLAsync(
    request,
    [prom](
        const DlcClient*,
        const CreateNotebookSessionStatementSupportBatchSQLRequest&,
        CreateNotebookSessionStatementSupportBatchSQLOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::CreateResultDownloadOutcome DlcClient::CreateResultDownload(const CreateResultDownloadRequest &request)
{
    auto outcome = MakeRequest(request, "CreateResultDownload");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateResultDownloadResponse rsp = CreateResultDownloadResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateResultDownloadOutcome(rsp);
        else
            return CreateResultDownloadOutcome(o.GetError());
    }
    else
    {
        return CreateResultDownloadOutcome(outcome.GetError());
    }
}

void DlcClient::CreateResultDownloadAsync(const CreateResultDownloadRequest& request, const CreateResultDownloadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateResultDownloadRequest&;
    using Resp = CreateResultDownloadResponse;

    DoRequestAsync<Req, Resp>(
        "CreateResultDownload", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CreateResultDownloadOutcomeCallable DlcClient::CreateResultDownloadCallable(const CreateResultDownloadRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateResultDownloadOutcome>>();
    CreateResultDownloadAsync(
    request,
    [prom](
        const DlcClient*,
        const CreateResultDownloadRequest&,
        CreateResultDownloadOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::CreateScriptOutcome DlcClient::CreateScript(const CreateScriptRequest &request)
{
    auto outcome = MakeRequest(request, "CreateScript");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateScriptResponse rsp = CreateScriptResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateScriptOutcome(rsp);
        else
            return CreateScriptOutcome(o.GetError());
    }
    else
    {
        return CreateScriptOutcome(outcome.GetError());
    }
}

void DlcClient::CreateScriptAsync(const CreateScriptRequest& request, const CreateScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateScriptRequest&;
    using Resp = CreateScriptResponse;

    DoRequestAsync<Req, Resp>(
        "CreateScript", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CreateScriptOutcomeCallable DlcClient::CreateScriptCallable(const CreateScriptRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateScriptOutcome>>();
    CreateScriptAsync(
    request,
    [prom](
        const DlcClient*,
        const CreateScriptRequest&,
        CreateScriptOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::CreateSparkAppOutcome DlcClient::CreateSparkApp(const CreateSparkAppRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSparkApp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSparkAppResponse rsp = CreateSparkAppResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSparkAppOutcome(rsp);
        else
            return CreateSparkAppOutcome(o.GetError());
    }
    else
    {
        return CreateSparkAppOutcome(outcome.GetError());
    }
}

void DlcClient::CreateSparkAppAsync(const CreateSparkAppRequest& request, const CreateSparkAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSparkAppRequest&;
    using Resp = CreateSparkAppResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSparkApp", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CreateSparkAppOutcomeCallable DlcClient::CreateSparkAppCallable(const CreateSparkAppRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSparkAppOutcome>>();
    CreateSparkAppAsync(
    request,
    [prom](
        const DlcClient*,
        const CreateSparkAppRequest&,
        CreateSparkAppOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::CreateSparkAppTaskOutcome DlcClient::CreateSparkAppTask(const CreateSparkAppTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSparkAppTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSparkAppTaskResponse rsp = CreateSparkAppTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSparkAppTaskOutcome(rsp);
        else
            return CreateSparkAppTaskOutcome(o.GetError());
    }
    else
    {
        return CreateSparkAppTaskOutcome(outcome.GetError());
    }
}

void DlcClient::CreateSparkAppTaskAsync(const CreateSparkAppTaskRequest& request, const CreateSparkAppTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSparkAppTaskRequest&;
    using Resp = CreateSparkAppTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSparkAppTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CreateSparkAppTaskOutcomeCallable DlcClient::CreateSparkAppTaskCallable(const CreateSparkAppTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSparkAppTaskOutcome>>();
    CreateSparkAppTaskAsync(
    request,
    [prom](
        const DlcClient*,
        const CreateSparkAppTaskRequest&,
        CreateSparkAppTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::CreateSparkSessionBatchSQLOutcome DlcClient::CreateSparkSessionBatchSQL(const CreateSparkSessionBatchSQLRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSparkSessionBatchSQL");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSparkSessionBatchSQLResponse rsp = CreateSparkSessionBatchSQLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSparkSessionBatchSQLOutcome(rsp);
        else
            return CreateSparkSessionBatchSQLOutcome(o.GetError());
    }
    else
    {
        return CreateSparkSessionBatchSQLOutcome(outcome.GetError());
    }
}

void DlcClient::CreateSparkSessionBatchSQLAsync(const CreateSparkSessionBatchSQLRequest& request, const CreateSparkSessionBatchSQLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSparkSessionBatchSQLRequest&;
    using Resp = CreateSparkSessionBatchSQLResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSparkSessionBatchSQL", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CreateSparkSessionBatchSQLOutcomeCallable DlcClient::CreateSparkSessionBatchSQLCallable(const CreateSparkSessionBatchSQLRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSparkSessionBatchSQLOutcome>>();
    CreateSparkSessionBatchSQLAsync(
    request,
    [prom](
        const DlcClient*,
        const CreateSparkSessionBatchSQLRequest&,
        CreateSparkSessionBatchSQLOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::CreateSparkSubmitTaskOutcome DlcClient::CreateSparkSubmitTask(const CreateSparkSubmitTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSparkSubmitTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSparkSubmitTaskResponse rsp = CreateSparkSubmitTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSparkSubmitTaskOutcome(rsp);
        else
            return CreateSparkSubmitTaskOutcome(o.GetError());
    }
    else
    {
        return CreateSparkSubmitTaskOutcome(outcome.GetError());
    }
}

void DlcClient::CreateSparkSubmitTaskAsync(const CreateSparkSubmitTaskRequest& request, const CreateSparkSubmitTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSparkSubmitTaskRequest&;
    using Resp = CreateSparkSubmitTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSparkSubmitTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CreateSparkSubmitTaskOutcomeCallable DlcClient::CreateSparkSubmitTaskCallable(const CreateSparkSubmitTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSparkSubmitTaskOutcome>>();
    CreateSparkSubmitTaskAsync(
    request,
    [prom](
        const DlcClient*,
        const CreateSparkSubmitTaskRequest&,
        CreateSparkSubmitTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::CreateStandardEngineResourceGroupOutcome DlcClient::CreateStandardEngineResourceGroup(const CreateStandardEngineResourceGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateStandardEngineResourceGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateStandardEngineResourceGroupResponse rsp = CreateStandardEngineResourceGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateStandardEngineResourceGroupOutcome(rsp);
        else
            return CreateStandardEngineResourceGroupOutcome(o.GetError());
    }
    else
    {
        return CreateStandardEngineResourceGroupOutcome(outcome.GetError());
    }
}

void DlcClient::CreateStandardEngineResourceGroupAsync(const CreateStandardEngineResourceGroupRequest& request, const CreateStandardEngineResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateStandardEngineResourceGroupRequest&;
    using Resp = CreateStandardEngineResourceGroupResponse;

    DoRequestAsync<Req, Resp>(
        "CreateStandardEngineResourceGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CreateStandardEngineResourceGroupOutcomeCallable DlcClient::CreateStandardEngineResourceGroupCallable(const CreateStandardEngineResourceGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateStandardEngineResourceGroupOutcome>>();
    CreateStandardEngineResourceGroupAsync(
    request,
    [prom](
        const DlcClient*,
        const CreateStandardEngineResourceGroupRequest&,
        CreateStandardEngineResourceGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::CreateStoreLocationOutcome DlcClient::CreateStoreLocation(const CreateStoreLocationRequest &request)
{
    auto outcome = MakeRequest(request, "CreateStoreLocation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateStoreLocationResponse rsp = CreateStoreLocationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateStoreLocationOutcome(rsp);
        else
            return CreateStoreLocationOutcome(o.GetError());
    }
    else
    {
        return CreateStoreLocationOutcome(outcome.GetError());
    }
}

void DlcClient::CreateStoreLocationAsync(const CreateStoreLocationRequest& request, const CreateStoreLocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateStoreLocationRequest&;
    using Resp = CreateStoreLocationResponse;

    DoRequestAsync<Req, Resp>(
        "CreateStoreLocation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CreateStoreLocationOutcomeCallable DlcClient::CreateStoreLocationCallable(const CreateStoreLocationRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateStoreLocationOutcome>>();
    CreateStoreLocationAsync(
    request,
    [prom](
        const DlcClient*,
        const CreateStoreLocationRequest&,
        CreateStoreLocationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::CreateTableOutcome DlcClient::CreateTable(const CreateTableRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTable");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTableResponse rsp = CreateTableResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTableOutcome(rsp);
        else
            return CreateTableOutcome(o.GetError());
    }
    else
    {
        return CreateTableOutcome(outcome.GetError());
    }
}

void DlcClient::CreateTableAsync(const CreateTableRequest& request, const CreateTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTableRequest&;
    using Resp = CreateTableResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTable", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CreateTableOutcomeCallable DlcClient::CreateTableCallable(const CreateTableRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTableOutcome>>();
    CreateTableAsync(
    request,
    [prom](
        const DlcClient*,
        const CreateTableRequest&,
        CreateTableOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::CreateTaskOutcome DlcClient::CreateTask(const CreateTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTaskResponse rsp = CreateTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTaskOutcome(rsp);
        else
            return CreateTaskOutcome(o.GetError());
    }
    else
    {
        return CreateTaskOutcome(outcome.GetError());
    }
}

void DlcClient::CreateTaskAsync(const CreateTaskRequest& request, const CreateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTaskRequest&;
    using Resp = CreateTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CreateTaskOutcomeCallable DlcClient::CreateTaskCallable(const CreateTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTaskOutcome>>();
    CreateTaskAsync(
    request,
    [prom](
        const DlcClient*,
        const CreateTaskRequest&,
        CreateTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::CreateTasksOutcome DlcClient::CreateTasks(const CreateTasksRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTasksResponse rsp = CreateTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTasksOutcome(rsp);
        else
            return CreateTasksOutcome(o.GetError());
    }
    else
    {
        return CreateTasksOutcome(outcome.GetError());
    }
}

void DlcClient::CreateTasksAsync(const CreateTasksRequest& request, const CreateTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTasksRequest&;
    using Resp = CreateTasksResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CreateTasksOutcomeCallable DlcClient::CreateTasksCallable(const CreateTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTasksOutcome>>();
    CreateTasksAsync(
    request,
    [prom](
        const DlcClient*,
        const CreateTasksRequest&,
        CreateTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::CreateTasksInOrderOutcome DlcClient::CreateTasksInOrder(const CreateTasksInOrderRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTasksInOrder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTasksInOrderResponse rsp = CreateTasksInOrderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTasksInOrderOutcome(rsp);
        else
            return CreateTasksInOrderOutcome(o.GetError());
    }
    else
    {
        return CreateTasksInOrderOutcome(outcome.GetError());
    }
}

void DlcClient::CreateTasksInOrderAsync(const CreateTasksInOrderRequest& request, const CreateTasksInOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTasksInOrderRequest&;
    using Resp = CreateTasksInOrderResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTasksInOrder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CreateTasksInOrderOutcomeCallable DlcClient::CreateTasksInOrderCallable(const CreateTasksInOrderRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTasksInOrderOutcome>>();
    CreateTasksInOrderAsync(
    request,
    [prom](
        const DlcClient*,
        const CreateTasksInOrderRequest&,
        CreateTasksInOrderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::CreateTcIcebergTableOutcome DlcClient::CreateTcIcebergTable(const CreateTcIcebergTableRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTcIcebergTable");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTcIcebergTableResponse rsp = CreateTcIcebergTableResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTcIcebergTableOutcome(rsp);
        else
            return CreateTcIcebergTableOutcome(o.GetError());
    }
    else
    {
        return CreateTcIcebergTableOutcome(outcome.GetError());
    }
}

void DlcClient::CreateTcIcebergTableAsync(const CreateTcIcebergTableRequest& request, const CreateTcIcebergTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTcIcebergTableRequest&;
    using Resp = CreateTcIcebergTableResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTcIcebergTable", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CreateTcIcebergTableOutcomeCallable DlcClient::CreateTcIcebergTableCallable(const CreateTcIcebergTableRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTcIcebergTableOutcome>>();
    CreateTcIcebergTableAsync(
    request,
    [prom](
        const DlcClient*,
        const CreateTcIcebergTableRequest&,
        CreateTcIcebergTableOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::CreateUserOutcome DlcClient::CreateUser(const CreateUserRequest &request)
{
    auto outcome = MakeRequest(request, "CreateUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateUserResponse rsp = CreateUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateUserOutcome(rsp);
        else
            return CreateUserOutcome(o.GetError());
    }
    else
    {
        return CreateUserOutcome(outcome.GetError());
    }
}

void DlcClient::CreateUserAsync(const CreateUserRequest& request, const CreateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateUserRequest&;
    using Resp = CreateUserResponse;

    DoRequestAsync<Req, Resp>(
        "CreateUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CreateUserOutcomeCallable DlcClient::CreateUserCallable(const CreateUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateUserOutcome>>();
    CreateUserAsync(
    request,
    [prom](
        const DlcClient*,
        const CreateUserRequest&,
        CreateUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::CreateUserVpcConnectionOutcome DlcClient::CreateUserVpcConnection(const CreateUserVpcConnectionRequest &request)
{
    auto outcome = MakeRequest(request, "CreateUserVpcConnection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateUserVpcConnectionResponse rsp = CreateUserVpcConnectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateUserVpcConnectionOutcome(rsp);
        else
            return CreateUserVpcConnectionOutcome(o.GetError());
    }
    else
    {
        return CreateUserVpcConnectionOutcome(outcome.GetError());
    }
}

void DlcClient::CreateUserVpcConnectionAsync(const CreateUserVpcConnectionRequest& request, const CreateUserVpcConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateUserVpcConnectionRequest&;
    using Resp = CreateUserVpcConnectionResponse;

    DoRequestAsync<Req, Resp>(
        "CreateUserVpcConnection", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CreateUserVpcConnectionOutcomeCallable DlcClient::CreateUserVpcConnectionCallable(const CreateUserVpcConnectionRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateUserVpcConnectionOutcome>>();
    CreateUserVpcConnectionAsync(
    request,
    [prom](
        const DlcClient*,
        const CreateUserVpcConnectionRequest&,
        CreateUserVpcConnectionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::CreateWorkGroupOutcome DlcClient::CreateWorkGroup(const CreateWorkGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateWorkGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateWorkGroupResponse rsp = CreateWorkGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateWorkGroupOutcome(rsp);
        else
            return CreateWorkGroupOutcome(o.GetError());
    }
    else
    {
        return CreateWorkGroupOutcome(outcome.GetError());
    }
}

void DlcClient::CreateWorkGroupAsync(const CreateWorkGroupRequest& request, const CreateWorkGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateWorkGroupRequest&;
    using Resp = CreateWorkGroupResponse;

    DoRequestAsync<Req, Resp>(
        "CreateWorkGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CreateWorkGroupOutcomeCallable DlcClient::CreateWorkGroupCallable(const CreateWorkGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateWorkGroupOutcome>>();
    CreateWorkGroupAsync(
    request,
    [prom](
        const DlcClient*,
        const CreateWorkGroupRequest&,
        CreateWorkGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DeleteCHDFSBindingProductOutcome DlcClient::DeleteCHDFSBindingProduct(const DeleteCHDFSBindingProductRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCHDFSBindingProduct");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCHDFSBindingProductResponse rsp = DeleteCHDFSBindingProductResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCHDFSBindingProductOutcome(rsp);
        else
            return DeleteCHDFSBindingProductOutcome(o.GetError());
    }
    else
    {
        return DeleteCHDFSBindingProductOutcome(outcome.GetError());
    }
}

void DlcClient::DeleteCHDFSBindingProductAsync(const DeleteCHDFSBindingProductRequest& request, const DeleteCHDFSBindingProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCHDFSBindingProductRequest&;
    using Resp = DeleteCHDFSBindingProductResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCHDFSBindingProduct", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DeleteCHDFSBindingProductOutcomeCallable DlcClient::DeleteCHDFSBindingProductCallable(const DeleteCHDFSBindingProductRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCHDFSBindingProductOutcome>>();
    DeleteCHDFSBindingProductAsync(
    request,
    [prom](
        const DlcClient*,
        const DeleteCHDFSBindingProductRequest&,
        DeleteCHDFSBindingProductOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DeleteDataEngineOutcome DlcClient::DeleteDataEngine(const DeleteDataEngineRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDataEngine");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDataEngineResponse rsp = DeleteDataEngineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDataEngineOutcome(rsp);
        else
            return DeleteDataEngineOutcome(o.GetError());
    }
    else
    {
        return DeleteDataEngineOutcome(outcome.GetError());
    }
}

void DlcClient::DeleteDataEngineAsync(const DeleteDataEngineRequest& request, const DeleteDataEngineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDataEngineRequest&;
    using Resp = DeleteDataEngineResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDataEngine", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DeleteDataEngineOutcomeCallable DlcClient::DeleteDataEngineCallable(const DeleteDataEngineRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDataEngineOutcome>>();
    DeleteDataEngineAsync(
    request,
    [prom](
        const DlcClient*,
        const DeleteDataEngineRequest&,
        DeleteDataEngineOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DeleteDataMaskStrategyOutcome DlcClient::DeleteDataMaskStrategy(const DeleteDataMaskStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDataMaskStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDataMaskStrategyResponse rsp = DeleteDataMaskStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDataMaskStrategyOutcome(rsp);
        else
            return DeleteDataMaskStrategyOutcome(o.GetError());
    }
    else
    {
        return DeleteDataMaskStrategyOutcome(outcome.GetError());
    }
}

void DlcClient::DeleteDataMaskStrategyAsync(const DeleteDataMaskStrategyRequest& request, const DeleteDataMaskStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDataMaskStrategyRequest&;
    using Resp = DeleteDataMaskStrategyResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDataMaskStrategy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DeleteDataMaskStrategyOutcomeCallable DlcClient::DeleteDataMaskStrategyCallable(const DeleteDataMaskStrategyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDataMaskStrategyOutcome>>();
    DeleteDataMaskStrategyAsync(
    request,
    [prom](
        const DlcClient*,
        const DeleteDataMaskStrategyRequest&,
        DeleteDataMaskStrategyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DeleteNativeSparkSessionOutcome DlcClient::DeleteNativeSparkSession(const DeleteNativeSparkSessionRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteNativeSparkSession");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteNativeSparkSessionResponse rsp = DeleteNativeSparkSessionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteNativeSparkSessionOutcome(rsp);
        else
            return DeleteNativeSparkSessionOutcome(o.GetError());
    }
    else
    {
        return DeleteNativeSparkSessionOutcome(outcome.GetError());
    }
}

void DlcClient::DeleteNativeSparkSessionAsync(const DeleteNativeSparkSessionRequest& request, const DeleteNativeSparkSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteNativeSparkSessionRequest&;
    using Resp = DeleteNativeSparkSessionResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteNativeSparkSession", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DeleteNativeSparkSessionOutcomeCallable DlcClient::DeleteNativeSparkSessionCallable(const DeleteNativeSparkSessionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteNativeSparkSessionOutcome>>();
    DeleteNativeSparkSessionAsync(
    request,
    [prom](
        const DlcClient*,
        const DeleteNativeSparkSessionRequest&,
        DeleteNativeSparkSessionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DeleteNotebookSessionOutcome DlcClient::DeleteNotebookSession(const DeleteNotebookSessionRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteNotebookSession");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteNotebookSessionResponse rsp = DeleteNotebookSessionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteNotebookSessionOutcome(rsp);
        else
            return DeleteNotebookSessionOutcome(o.GetError());
    }
    else
    {
        return DeleteNotebookSessionOutcome(outcome.GetError());
    }
}

void DlcClient::DeleteNotebookSessionAsync(const DeleteNotebookSessionRequest& request, const DeleteNotebookSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteNotebookSessionRequest&;
    using Resp = DeleteNotebookSessionResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteNotebookSession", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DeleteNotebookSessionOutcomeCallable DlcClient::DeleteNotebookSessionCallable(const DeleteNotebookSessionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteNotebookSessionOutcome>>();
    DeleteNotebookSessionAsync(
    request,
    [prom](
        const DlcClient*,
        const DeleteNotebookSessionRequest&,
        DeleteNotebookSessionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DeleteScriptOutcome DlcClient::DeleteScript(const DeleteScriptRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteScript");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteScriptResponse rsp = DeleteScriptResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteScriptOutcome(rsp);
        else
            return DeleteScriptOutcome(o.GetError());
    }
    else
    {
        return DeleteScriptOutcome(outcome.GetError());
    }
}

void DlcClient::DeleteScriptAsync(const DeleteScriptRequest& request, const DeleteScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteScriptRequest&;
    using Resp = DeleteScriptResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteScript", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DeleteScriptOutcomeCallable DlcClient::DeleteScriptCallable(const DeleteScriptRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteScriptOutcome>>();
    DeleteScriptAsync(
    request,
    [prom](
        const DlcClient*,
        const DeleteScriptRequest&,
        DeleteScriptOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DeleteSparkAppOutcome DlcClient::DeleteSparkApp(const DeleteSparkAppRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSparkApp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSparkAppResponse rsp = DeleteSparkAppResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSparkAppOutcome(rsp);
        else
            return DeleteSparkAppOutcome(o.GetError());
    }
    else
    {
        return DeleteSparkAppOutcome(outcome.GetError());
    }
}

void DlcClient::DeleteSparkAppAsync(const DeleteSparkAppRequest& request, const DeleteSparkAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteSparkAppRequest&;
    using Resp = DeleteSparkAppResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteSparkApp", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DeleteSparkAppOutcomeCallable DlcClient::DeleteSparkAppCallable(const DeleteSparkAppRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteSparkAppOutcome>>();
    DeleteSparkAppAsync(
    request,
    [prom](
        const DlcClient*,
        const DeleteSparkAppRequest&,
        DeleteSparkAppOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DeleteStandardEngineResourceGroupOutcome DlcClient::DeleteStandardEngineResourceGroup(const DeleteStandardEngineResourceGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteStandardEngineResourceGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteStandardEngineResourceGroupResponse rsp = DeleteStandardEngineResourceGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteStandardEngineResourceGroupOutcome(rsp);
        else
            return DeleteStandardEngineResourceGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteStandardEngineResourceGroupOutcome(outcome.GetError());
    }
}

void DlcClient::DeleteStandardEngineResourceGroupAsync(const DeleteStandardEngineResourceGroupRequest& request, const DeleteStandardEngineResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteStandardEngineResourceGroupRequest&;
    using Resp = DeleteStandardEngineResourceGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteStandardEngineResourceGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DeleteStandardEngineResourceGroupOutcomeCallable DlcClient::DeleteStandardEngineResourceGroupCallable(const DeleteStandardEngineResourceGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteStandardEngineResourceGroupOutcome>>();
    DeleteStandardEngineResourceGroupAsync(
    request,
    [prom](
        const DlcClient*,
        const DeleteStandardEngineResourceGroupRequest&,
        DeleteStandardEngineResourceGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DeleteTableOutcome DlcClient::DeleteTable(const DeleteTableRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTable");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTableResponse rsp = DeleteTableResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTableOutcome(rsp);
        else
            return DeleteTableOutcome(o.GetError());
    }
    else
    {
        return DeleteTableOutcome(outcome.GetError());
    }
}

void DlcClient::DeleteTableAsync(const DeleteTableRequest& request, const DeleteTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteTableRequest&;
    using Resp = DeleteTableResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteTable", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DeleteTableOutcomeCallable DlcClient::DeleteTableCallable(const DeleteTableRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteTableOutcome>>();
    DeleteTableAsync(
    request,
    [prom](
        const DlcClient*,
        const DeleteTableRequest&,
        DeleteTableOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DeleteThirdPartyAccessUserOutcome DlcClient::DeleteThirdPartyAccessUser(const DeleteThirdPartyAccessUserRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteThirdPartyAccessUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteThirdPartyAccessUserResponse rsp = DeleteThirdPartyAccessUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteThirdPartyAccessUserOutcome(rsp);
        else
            return DeleteThirdPartyAccessUserOutcome(o.GetError());
    }
    else
    {
        return DeleteThirdPartyAccessUserOutcome(outcome.GetError());
    }
}

void DlcClient::DeleteThirdPartyAccessUserAsync(const DeleteThirdPartyAccessUserRequest& request, const DeleteThirdPartyAccessUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteThirdPartyAccessUserRequest&;
    using Resp = DeleteThirdPartyAccessUserResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteThirdPartyAccessUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DeleteThirdPartyAccessUserOutcomeCallable DlcClient::DeleteThirdPartyAccessUserCallable(const DeleteThirdPartyAccessUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteThirdPartyAccessUserOutcome>>();
    DeleteThirdPartyAccessUserAsync(
    request,
    [prom](
        const DlcClient*,
        const DeleteThirdPartyAccessUserRequest&,
        DeleteThirdPartyAccessUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DeleteUserOutcome DlcClient::DeleteUser(const DeleteUserRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteUserResponse rsp = DeleteUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteUserOutcome(rsp);
        else
            return DeleteUserOutcome(o.GetError());
    }
    else
    {
        return DeleteUserOutcome(outcome.GetError());
    }
}

void DlcClient::DeleteUserAsync(const DeleteUserRequest& request, const DeleteUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteUserRequest&;
    using Resp = DeleteUserResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DeleteUserOutcomeCallable DlcClient::DeleteUserCallable(const DeleteUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteUserOutcome>>();
    DeleteUserAsync(
    request,
    [prom](
        const DlcClient*,
        const DeleteUserRequest&,
        DeleteUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DeleteUserVpcConnectionOutcome DlcClient::DeleteUserVpcConnection(const DeleteUserVpcConnectionRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteUserVpcConnection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteUserVpcConnectionResponse rsp = DeleteUserVpcConnectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteUserVpcConnectionOutcome(rsp);
        else
            return DeleteUserVpcConnectionOutcome(o.GetError());
    }
    else
    {
        return DeleteUserVpcConnectionOutcome(outcome.GetError());
    }
}

void DlcClient::DeleteUserVpcConnectionAsync(const DeleteUserVpcConnectionRequest& request, const DeleteUserVpcConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteUserVpcConnectionRequest&;
    using Resp = DeleteUserVpcConnectionResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteUserVpcConnection", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DeleteUserVpcConnectionOutcomeCallable DlcClient::DeleteUserVpcConnectionCallable(const DeleteUserVpcConnectionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteUserVpcConnectionOutcome>>();
    DeleteUserVpcConnectionAsync(
    request,
    [prom](
        const DlcClient*,
        const DeleteUserVpcConnectionRequest&,
        DeleteUserVpcConnectionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DeleteUsersFromWorkGroupOutcome DlcClient::DeleteUsersFromWorkGroup(const DeleteUsersFromWorkGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteUsersFromWorkGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteUsersFromWorkGroupResponse rsp = DeleteUsersFromWorkGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteUsersFromWorkGroupOutcome(rsp);
        else
            return DeleteUsersFromWorkGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteUsersFromWorkGroupOutcome(outcome.GetError());
    }
}

void DlcClient::DeleteUsersFromWorkGroupAsync(const DeleteUsersFromWorkGroupRequest& request, const DeleteUsersFromWorkGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteUsersFromWorkGroupRequest&;
    using Resp = DeleteUsersFromWorkGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteUsersFromWorkGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DeleteUsersFromWorkGroupOutcomeCallable DlcClient::DeleteUsersFromWorkGroupCallable(const DeleteUsersFromWorkGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteUsersFromWorkGroupOutcome>>();
    DeleteUsersFromWorkGroupAsync(
    request,
    [prom](
        const DlcClient*,
        const DeleteUsersFromWorkGroupRequest&,
        DeleteUsersFromWorkGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DeleteWorkGroupOutcome DlcClient::DeleteWorkGroup(const DeleteWorkGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteWorkGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteWorkGroupResponse rsp = DeleteWorkGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteWorkGroupOutcome(rsp);
        else
            return DeleteWorkGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteWorkGroupOutcome(outcome.GetError());
    }
}

void DlcClient::DeleteWorkGroupAsync(const DeleteWorkGroupRequest& request, const DeleteWorkGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteWorkGroupRequest&;
    using Resp = DeleteWorkGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteWorkGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DeleteWorkGroupOutcomeCallable DlcClient::DeleteWorkGroupCallable(const DeleteWorkGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteWorkGroupOutcome>>();
    DeleteWorkGroupAsync(
    request,
    [prom](
        const DlcClient*,
        const DeleteWorkGroupRequest&,
        DeleteWorkGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeAdvancedStoreLocationOutcome DlcClient::DescribeAdvancedStoreLocation(const DescribeAdvancedStoreLocationRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAdvancedStoreLocation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAdvancedStoreLocationResponse rsp = DescribeAdvancedStoreLocationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAdvancedStoreLocationOutcome(rsp);
        else
            return DescribeAdvancedStoreLocationOutcome(o.GetError());
    }
    else
    {
        return DescribeAdvancedStoreLocationOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeAdvancedStoreLocationAsync(const DescribeAdvancedStoreLocationRequest& request, const DescribeAdvancedStoreLocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAdvancedStoreLocationRequest&;
    using Resp = DescribeAdvancedStoreLocationResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAdvancedStoreLocation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeAdvancedStoreLocationOutcomeCallable DlcClient::DescribeAdvancedStoreLocationCallable(const DescribeAdvancedStoreLocationRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAdvancedStoreLocationOutcome>>();
    DescribeAdvancedStoreLocationAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeAdvancedStoreLocationRequest&,
        DescribeAdvancedStoreLocationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeClusterMonitorInfosOutcome DlcClient::DescribeClusterMonitorInfos(const DescribeClusterMonitorInfosRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterMonitorInfos");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterMonitorInfosResponse rsp = DescribeClusterMonitorInfosResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterMonitorInfosOutcome(rsp);
        else
            return DescribeClusterMonitorInfosOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterMonitorInfosOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeClusterMonitorInfosAsync(const DescribeClusterMonitorInfosRequest& request, const DescribeClusterMonitorInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeClusterMonitorInfosRequest&;
    using Resp = DescribeClusterMonitorInfosResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClusterMonitorInfos", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeClusterMonitorInfosOutcomeCallable DlcClient::DescribeClusterMonitorInfosCallable(const DescribeClusterMonitorInfosRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClusterMonitorInfosOutcome>>();
    DescribeClusterMonitorInfosAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeClusterMonitorInfosRequest&,
        DescribeClusterMonitorInfosOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeDLCCatalogAccessOutcome DlcClient::DescribeDLCCatalogAccess(const DescribeDLCCatalogAccessRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDLCCatalogAccess");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDLCCatalogAccessResponse rsp = DescribeDLCCatalogAccessResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDLCCatalogAccessOutcome(rsp);
        else
            return DescribeDLCCatalogAccessOutcome(o.GetError());
    }
    else
    {
        return DescribeDLCCatalogAccessOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeDLCCatalogAccessAsync(const DescribeDLCCatalogAccessRequest& request, const DescribeDLCCatalogAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDLCCatalogAccessRequest&;
    using Resp = DescribeDLCCatalogAccessResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDLCCatalogAccess", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeDLCCatalogAccessOutcomeCallable DlcClient::DescribeDLCCatalogAccessCallable(const DescribeDLCCatalogAccessRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDLCCatalogAccessOutcome>>();
    DescribeDLCCatalogAccessAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeDLCCatalogAccessRequest&,
        DescribeDLCCatalogAccessOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeDMSDatabaseOutcome DlcClient::DescribeDMSDatabase(const DescribeDMSDatabaseRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDMSDatabase");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDMSDatabaseResponse rsp = DescribeDMSDatabaseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDMSDatabaseOutcome(rsp);
        else
            return DescribeDMSDatabaseOutcome(o.GetError());
    }
    else
    {
        return DescribeDMSDatabaseOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeDMSDatabaseAsync(const DescribeDMSDatabaseRequest& request, const DescribeDMSDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDMSDatabaseRequest&;
    using Resp = DescribeDMSDatabaseResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDMSDatabase", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeDMSDatabaseOutcomeCallable DlcClient::DescribeDMSDatabaseCallable(const DescribeDMSDatabaseRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDMSDatabaseOutcome>>();
    DescribeDMSDatabaseAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeDMSDatabaseRequest&,
        DescribeDMSDatabaseOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeDMSPartitionsOutcome DlcClient::DescribeDMSPartitions(const DescribeDMSPartitionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDMSPartitions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDMSPartitionsResponse rsp = DescribeDMSPartitionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDMSPartitionsOutcome(rsp);
        else
            return DescribeDMSPartitionsOutcome(o.GetError());
    }
    else
    {
        return DescribeDMSPartitionsOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeDMSPartitionsAsync(const DescribeDMSPartitionsRequest& request, const DescribeDMSPartitionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDMSPartitionsRequest&;
    using Resp = DescribeDMSPartitionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDMSPartitions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeDMSPartitionsOutcomeCallable DlcClient::DescribeDMSPartitionsCallable(const DescribeDMSPartitionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDMSPartitionsOutcome>>();
    DescribeDMSPartitionsAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeDMSPartitionsRequest&,
        DescribeDMSPartitionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeDMSTableOutcome DlcClient::DescribeDMSTable(const DescribeDMSTableRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDMSTable");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDMSTableResponse rsp = DescribeDMSTableResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDMSTableOutcome(rsp);
        else
            return DescribeDMSTableOutcome(o.GetError());
    }
    else
    {
        return DescribeDMSTableOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeDMSTableAsync(const DescribeDMSTableRequest& request, const DescribeDMSTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDMSTableRequest&;
    using Resp = DescribeDMSTableResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDMSTable", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeDMSTableOutcomeCallable DlcClient::DescribeDMSTableCallable(const DescribeDMSTableRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDMSTableOutcome>>();
    DescribeDMSTableAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeDMSTableRequest&,
        DescribeDMSTableOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeDMSTablesOutcome DlcClient::DescribeDMSTables(const DescribeDMSTablesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDMSTables");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDMSTablesResponse rsp = DescribeDMSTablesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDMSTablesOutcome(rsp);
        else
            return DescribeDMSTablesOutcome(o.GetError());
    }
    else
    {
        return DescribeDMSTablesOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeDMSTablesAsync(const DescribeDMSTablesRequest& request, const DescribeDMSTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDMSTablesRequest&;
    using Resp = DescribeDMSTablesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDMSTables", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeDMSTablesOutcomeCallable DlcClient::DescribeDMSTablesCallable(const DescribeDMSTablesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDMSTablesOutcome>>();
    DescribeDMSTablesAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeDMSTablesRequest&,
        DescribeDMSTablesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeDataEngineOutcome DlcClient::DescribeDataEngine(const DescribeDataEngineRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataEngine");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataEngineResponse rsp = DescribeDataEngineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataEngineOutcome(rsp);
        else
            return DescribeDataEngineOutcome(o.GetError());
    }
    else
    {
        return DescribeDataEngineOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeDataEngineAsync(const DescribeDataEngineRequest& request, const DescribeDataEngineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDataEngineRequest&;
    using Resp = DescribeDataEngineResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDataEngine", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeDataEngineOutcomeCallable DlcClient::DescribeDataEngineCallable(const DescribeDataEngineRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataEngineOutcome>>();
    DescribeDataEngineAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeDataEngineRequest&,
        DescribeDataEngineOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeDataEngineEventsOutcome DlcClient::DescribeDataEngineEvents(const DescribeDataEngineEventsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataEngineEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataEngineEventsResponse rsp = DescribeDataEngineEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataEngineEventsOutcome(rsp);
        else
            return DescribeDataEngineEventsOutcome(o.GetError());
    }
    else
    {
        return DescribeDataEngineEventsOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeDataEngineEventsAsync(const DescribeDataEngineEventsRequest& request, const DescribeDataEngineEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDataEngineEventsRequest&;
    using Resp = DescribeDataEngineEventsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDataEngineEvents", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeDataEngineEventsOutcomeCallable DlcClient::DescribeDataEngineEventsCallable(const DescribeDataEngineEventsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataEngineEventsOutcome>>();
    DescribeDataEngineEventsAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeDataEngineEventsRequest&,
        DescribeDataEngineEventsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeDataEngineImageVersionsOutcome DlcClient::DescribeDataEngineImageVersions(const DescribeDataEngineImageVersionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataEngineImageVersions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataEngineImageVersionsResponse rsp = DescribeDataEngineImageVersionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataEngineImageVersionsOutcome(rsp);
        else
            return DescribeDataEngineImageVersionsOutcome(o.GetError());
    }
    else
    {
        return DescribeDataEngineImageVersionsOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeDataEngineImageVersionsAsync(const DescribeDataEngineImageVersionsRequest& request, const DescribeDataEngineImageVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDataEngineImageVersionsRequest&;
    using Resp = DescribeDataEngineImageVersionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDataEngineImageVersions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeDataEngineImageVersionsOutcomeCallable DlcClient::DescribeDataEngineImageVersionsCallable(const DescribeDataEngineImageVersionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataEngineImageVersionsOutcome>>();
    DescribeDataEngineImageVersionsAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeDataEngineImageVersionsRequest&,
        DescribeDataEngineImageVersionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeDataEnginePythonSparkImagesOutcome DlcClient::DescribeDataEnginePythonSparkImages(const DescribeDataEnginePythonSparkImagesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataEnginePythonSparkImages");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataEnginePythonSparkImagesResponse rsp = DescribeDataEnginePythonSparkImagesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataEnginePythonSparkImagesOutcome(rsp);
        else
            return DescribeDataEnginePythonSparkImagesOutcome(o.GetError());
    }
    else
    {
        return DescribeDataEnginePythonSparkImagesOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeDataEnginePythonSparkImagesAsync(const DescribeDataEnginePythonSparkImagesRequest& request, const DescribeDataEnginePythonSparkImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDataEnginePythonSparkImagesRequest&;
    using Resp = DescribeDataEnginePythonSparkImagesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDataEnginePythonSparkImages", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeDataEnginePythonSparkImagesOutcomeCallable DlcClient::DescribeDataEnginePythonSparkImagesCallable(const DescribeDataEnginePythonSparkImagesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataEnginePythonSparkImagesOutcome>>();
    DescribeDataEnginePythonSparkImagesAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeDataEnginePythonSparkImagesRequest&,
        DescribeDataEnginePythonSparkImagesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeDataEngineSessionParametersOutcome DlcClient::DescribeDataEngineSessionParameters(const DescribeDataEngineSessionParametersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataEngineSessionParameters");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataEngineSessionParametersResponse rsp = DescribeDataEngineSessionParametersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataEngineSessionParametersOutcome(rsp);
        else
            return DescribeDataEngineSessionParametersOutcome(o.GetError());
    }
    else
    {
        return DescribeDataEngineSessionParametersOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeDataEngineSessionParametersAsync(const DescribeDataEngineSessionParametersRequest& request, const DescribeDataEngineSessionParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDataEngineSessionParametersRequest&;
    using Resp = DescribeDataEngineSessionParametersResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDataEngineSessionParameters", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeDataEngineSessionParametersOutcomeCallable DlcClient::DescribeDataEngineSessionParametersCallable(const DescribeDataEngineSessionParametersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataEngineSessionParametersOutcome>>();
    DescribeDataEngineSessionParametersAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeDataEngineSessionParametersRequest&,
        DescribeDataEngineSessionParametersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeDataEnginesOutcome DlcClient::DescribeDataEngines(const DescribeDataEnginesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataEngines");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataEnginesResponse rsp = DescribeDataEnginesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataEnginesOutcome(rsp);
        else
            return DescribeDataEnginesOutcome(o.GetError());
    }
    else
    {
        return DescribeDataEnginesOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeDataEnginesAsync(const DescribeDataEnginesRequest& request, const DescribeDataEnginesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDataEnginesRequest&;
    using Resp = DescribeDataEnginesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDataEngines", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeDataEnginesOutcomeCallable DlcClient::DescribeDataEnginesCallable(const DescribeDataEnginesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataEnginesOutcome>>();
    DescribeDataEnginesAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeDataEnginesRequest&,
        DescribeDataEnginesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeDataEnginesScaleDetailOutcome DlcClient::DescribeDataEnginesScaleDetail(const DescribeDataEnginesScaleDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataEnginesScaleDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataEnginesScaleDetailResponse rsp = DescribeDataEnginesScaleDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataEnginesScaleDetailOutcome(rsp);
        else
            return DescribeDataEnginesScaleDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeDataEnginesScaleDetailOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeDataEnginesScaleDetailAsync(const DescribeDataEnginesScaleDetailRequest& request, const DescribeDataEnginesScaleDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDataEnginesScaleDetailRequest&;
    using Resp = DescribeDataEnginesScaleDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDataEnginesScaleDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeDataEnginesScaleDetailOutcomeCallable DlcClient::DescribeDataEnginesScaleDetailCallable(const DescribeDataEnginesScaleDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataEnginesScaleDetailOutcome>>();
    DescribeDataEnginesScaleDetailAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeDataEnginesScaleDetailRequest&,
        DescribeDataEnginesScaleDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeDataMaskStrategiesOutcome DlcClient::DescribeDataMaskStrategies(const DescribeDataMaskStrategiesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataMaskStrategies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataMaskStrategiesResponse rsp = DescribeDataMaskStrategiesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataMaskStrategiesOutcome(rsp);
        else
            return DescribeDataMaskStrategiesOutcome(o.GetError());
    }
    else
    {
        return DescribeDataMaskStrategiesOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeDataMaskStrategiesAsync(const DescribeDataMaskStrategiesRequest& request, const DescribeDataMaskStrategiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDataMaskStrategiesRequest&;
    using Resp = DescribeDataMaskStrategiesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDataMaskStrategies", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeDataMaskStrategiesOutcomeCallable DlcClient::DescribeDataMaskStrategiesCallable(const DescribeDataMaskStrategiesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataMaskStrategiesOutcome>>();
    DescribeDataMaskStrategiesAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeDataMaskStrategiesRequest&,
        DescribeDataMaskStrategiesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeDatabasesOutcome DlcClient::DescribeDatabases(const DescribeDatabasesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDatabases");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDatabasesResponse rsp = DescribeDatabasesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDatabasesOutcome(rsp);
        else
            return DescribeDatabasesOutcome(o.GetError());
    }
    else
    {
        return DescribeDatabasesOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeDatabasesAsync(const DescribeDatabasesRequest& request, const DescribeDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDatabasesRequest&;
    using Resp = DescribeDatabasesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDatabases", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeDatabasesOutcomeCallable DlcClient::DescribeDatabasesCallable(const DescribeDatabasesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDatabasesOutcome>>();
    DescribeDatabasesAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeDatabasesRequest&,
        DescribeDatabasesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeDatasourceConnectionOutcome DlcClient::DescribeDatasourceConnection(const DescribeDatasourceConnectionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDatasourceConnection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDatasourceConnectionResponse rsp = DescribeDatasourceConnectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDatasourceConnectionOutcome(rsp);
        else
            return DescribeDatasourceConnectionOutcome(o.GetError());
    }
    else
    {
        return DescribeDatasourceConnectionOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeDatasourceConnectionAsync(const DescribeDatasourceConnectionRequest& request, const DescribeDatasourceConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDatasourceConnectionRequest&;
    using Resp = DescribeDatasourceConnectionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDatasourceConnection", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeDatasourceConnectionOutcomeCallable DlcClient::DescribeDatasourceConnectionCallable(const DescribeDatasourceConnectionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDatasourceConnectionOutcome>>();
    DescribeDatasourceConnectionAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeDatasourceConnectionRequest&,
        DescribeDatasourceConnectionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeEngineNetworksOutcome DlcClient::DescribeEngineNetworks(const DescribeEngineNetworksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEngineNetworks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEngineNetworksResponse rsp = DescribeEngineNetworksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEngineNetworksOutcome(rsp);
        else
            return DescribeEngineNetworksOutcome(o.GetError());
    }
    else
    {
        return DescribeEngineNetworksOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeEngineNetworksAsync(const DescribeEngineNetworksRequest& request, const DescribeEngineNetworksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEngineNetworksRequest&;
    using Resp = DescribeEngineNetworksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEngineNetworks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeEngineNetworksOutcomeCallable DlcClient::DescribeEngineNetworksCallable(const DescribeEngineNetworksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEngineNetworksOutcome>>();
    DescribeEngineNetworksAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeEngineNetworksRequest&,
        DescribeEngineNetworksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeEngineNodeSpecOutcome DlcClient::DescribeEngineNodeSpec(const DescribeEngineNodeSpecRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEngineNodeSpec");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEngineNodeSpecResponse rsp = DescribeEngineNodeSpecResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEngineNodeSpecOutcome(rsp);
        else
            return DescribeEngineNodeSpecOutcome(o.GetError());
    }
    else
    {
        return DescribeEngineNodeSpecOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeEngineNodeSpecAsync(const DescribeEngineNodeSpecRequest& request, const DescribeEngineNodeSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEngineNodeSpecRequest&;
    using Resp = DescribeEngineNodeSpecResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEngineNodeSpec", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeEngineNodeSpecOutcomeCallable DlcClient::DescribeEngineNodeSpecCallable(const DescribeEngineNodeSpecRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEngineNodeSpecOutcome>>();
    DescribeEngineNodeSpecAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeEngineNodeSpecRequest&,
        DescribeEngineNodeSpecOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeEngineUsageInfoOutcome DlcClient::DescribeEngineUsageInfo(const DescribeEngineUsageInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEngineUsageInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEngineUsageInfoResponse rsp = DescribeEngineUsageInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEngineUsageInfoOutcome(rsp);
        else
            return DescribeEngineUsageInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeEngineUsageInfoOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeEngineUsageInfoAsync(const DescribeEngineUsageInfoRequest& request, const DescribeEngineUsageInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEngineUsageInfoRequest&;
    using Resp = DescribeEngineUsageInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEngineUsageInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeEngineUsageInfoOutcomeCallable DlcClient::DescribeEngineUsageInfoCallable(const DescribeEngineUsageInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEngineUsageInfoOutcome>>();
    DescribeEngineUsageInfoAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeEngineUsageInfoRequest&,
        DescribeEngineUsageInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeForbiddenTableProOutcome DlcClient::DescribeForbiddenTablePro(const DescribeForbiddenTableProRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeForbiddenTablePro");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeForbiddenTableProResponse rsp = DescribeForbiddenTableProResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeForbiddenTableProOutcome(rsp);
        else
            return DescribeForbiddenTableProOutcome(o.GetError());
    }
    else
    {
        return DescribeForbiddenTableProOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeForbiddenTableProAsync(const DescribeForbiddenTableProRequest& request, const DescribeForbiddenTableProAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeForbiddenTableProRequest&;
    using Resp = DescribeForbiddenTableProResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeForbiddenTablePro", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeForbiddenTableProOutcomeCallable DlcClient::DescribeForbiddenTableProCallable(const DescribeForbiddenTableProRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeForbiddenTableProOutcome>>();
    DescribeForbiddenTableProAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeForbiddenTableProRequest&,
        DescribeForbiddenTableProOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeLakeFsDirSummaryOutcome DlcClient::DescribeLakeFsDirSummary(const DescribeLakeFsDirSummaryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLakeFsDirSummary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLakeFsDirSummaryResponse rsp = DescribeLakeFsDirSummaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLakeFsDirSummaryOutcome(rsp);
        else
            return DescribeLakeFsDirSummaryOutcome(o.GetError());
    }
    else
    {
        return DescribeLakeFsDirSummaryOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeLakeFsDirSummaryAsync(const DescribeLakeFsDirSummaryRequest& request, const DescribeLakeFsDirSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLakeFsDirSummaryRequest&;
    using Resp = DescribeLakeFsDirSummaryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLakeFsDirSummary", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeLakeFsDirSummaryOutcomeCallable DlcClient::DescribeLakeFsDirSummaryCallable(const DescribeLakeFsDirSummaryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLakeFsDirSummaryOutcome>>();
    DescribeLakeFsDirSummaryAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeLakeFsDirSummaryRequest&,
        DescribeLakeFsDirSummaryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeLakeFsInfoOutcome DlcClient::DescribeLakeFsInfo(const DescribeLakeFsInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLakeFsInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLakeFsInfoResponse rsp = DescribeLakeFsInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLakeFsInfoOutcome(rsp);
        else
            return DescribeLakeFsInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeLakeFsInfoOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeLakeFsInfoAsync(const DescribeLakeFsInfoRequest& request, const DescribeLakeFsInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLakeFsInfoRequest&;
    using Resp = DescribeLakeFsInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLakeFsInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeLakeFsInfoOutcomeCallable DlcClient::DescribeLakeFsInfoCallable(const DescribeLakeFsInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLakeFsInfoOutcome>>();
    DescribeLakeFsInfoAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeLakeFsInfoRequest&,
        DescribeLakeFsInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeLakeFsTaskResultOutcome DlcClient::DescribeLakeFsTaskResult(const DescribeLakeFsTaskResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLakeFsTaskResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLakeFsTaskResultResponse rsp = DescribeLakeFsTaskResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLakeFsTaskResultOutcome(rsp);
        else
            return DescribeLakeFsTaskResultOutcome(o.GetError());
    }
    else
    {
        return DescribeLakeFsTaskResultOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeLakeFsTaskResultAsync(const DescribeLakeFsTaskResultRequest& request, const DescribeLakeFsTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLakeFsTaskResultRequest&;
    using Resp = DescribeLakeFsTaskResultResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLakeFsTaskResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeLakeFsTaskResultOutcomeCallable DlcClient::DescribeLakeFsTaskResultCallable(const DescribeLakeFsTaskResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLakeFsTaskResultOutcome>>();
    DescribeLakeFsTaskResultAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeLakeFsTaskResultRequest&,
        DescribeLakeFsTaskResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeNativeSparkSessionsOutcome DlcClient::DescribeNativeSparkSessions(const DescribeNativeSparkSessionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNativeSparkSessions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNativeSparkSessionsResponse rsp = DescribeNativeSparkSessionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNativeSparkSessionsOutcome(rsp);
        else
            return DescribeNativeSparkSessionsOutcome(o.GetError());
    }
    else
    {
        return DescribeNativeSparkSessionsOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeNativeSparkSessionsAsync(const DescribeNativeSparkSessionsRequest& request, const DescribeNativeSparkSessionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNativeSparkSessionsRequest&;
    using Resp = DescribeNativeSparkSessionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNativeSparkSessions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeNativeSparkSessionsOutcomeCallable DlcClient::DescribeNativeSparkSessionsCallable(const DescribeNativeSparkSessionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNativeSparkSessionsOutcome>>();
    DescribeNativeSparkSessionsAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeNativeSparkSessionsRequest&,
        DescribeNativeSparkSessionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeNetworkConnectionsOutcome DlcClient::DescribeNetworkConnections(const DescribeNetworkConnectionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNetworkConnections");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNetworkConnectionsResponse rsp = DescribeNetworkConnectionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNetworkConnectionsOutcome(rsp);
        else
            return DescribeNetworkConnectionsOutcome(o.GetError());
    }
    else
    {
        return DescribeNetworkConnectionsOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeNetworkConnectionsAsync(const DescribeNetworkConnectionsRequest& request, const DescribeNetworkConnectionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNetworkConnectionsRequest&;
    using Resp = DescribeNetworkConnectionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNetworkConnections", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeNetworkConnectionsOutcomeCallable DlcClient::DescribeNetworkConnectionsCallable(const DescribeNetworkConnectionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNetworkConnectionsOutcome>>();
    DescribeNetworkConnectionsAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeNetworkConnectionsRequest&,
        DescribeNetworkConnectionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeNotebookSessionOutcome DlcClient::DescribeNotebookSession(const DescribeNotebookSessionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNotebookSession");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNotebookSessionResponse rsp = DescribeNotebookSessionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNotebookSessionOutcome(rsp);
        else
            return DescribeNotebookSessionOutcome(o.GetError());
    }
    else
    {
        return DescribeNotebookSessionOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeNotebookSessionAsync(const DescribeNotebookSessionRequest& request, const DescribeNotebookSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNotebookSessionRequest&;
    using Resp = DescribeNotebookSessionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNotebookSession", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeNotebookSessionOutcomeCallable DlcClient::DescribeNotebookSessionCallable(const DescribeNotebookSessionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNotebookSessionOutcome>>();
    DescribeNotebookSessionAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeNotebookSessionRequest&,
        DescribeNotebookSessionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeNotebookSessionLogOutcome DlcClient::DescribeNotebookSessionLog(const DescribeNotebookSessionLogRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNotebookSessionLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNotebookSessionLogResponse rsp = DescribeNotebookSessionLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNotebookSessionLogOutcome(rsp);
        else
            return DescribeNotebookSessionLogOutcome(o.GetError());
    }
    else
    {
        return DescribeNotebookSessionLogOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeNotebookSessionLogAsync(const DescribeNotebookSessionLogRequest& request, const DescribeNotebookSessionLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNotebookSessionLogRequest&;
    using Resp = DescribeNotebookSessionLogResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNotebookSessionLog", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeNotebookSessionLogOutcomeCallable DlcClient::DescribeNotebookSessionLogCallable(const DescribeNotebookSessionLogRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNotebookSessionLogOutcome>>();
    DescribeNotebookSessionLogAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeNotebookSessionLogRequest&,
        DescribeNotebookSessionLogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeNotebookSessionStatementOutcome DlcClient::DescribeNotebookSessionStatement(const DescribeNotebookSessionStatementRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNotebookSessionStatement");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNotebookSessionStatementResponse rsp = DescribeNotebookSessionStatementResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNotebookSessionStatementOutcome(rsp);
        else
            return DescribeNotebookSessionStatementOutcome(o.GetError());
    }
    else
    {
        return DescribeNotebookSessionStatementOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeNotebookSessionStatementAsync(const DescribeNotebookSessionStatementRequest& request, const DescribeNotebookSessionStatementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNotebookSessionStatementRequest&;
    using Resp = DescribeNotebookSessionStatementResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNotebookSessionStatement", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeNotebookSessionStatementOutcomeCallable DlcClient::DescribeNotebookSessionStatementCallable(const DescribeNotebookSessionStatementRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNotebookSessionStatementOutcome>>();
    DescribeNotebookSessionStatementAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeNotebookSessionStatementRequest&,
        DescribeNotebookSessionStatementOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeNotebookSessionStatementSqlResultOutcome DlcClient::DescribeNotebookSessionStatementSqlResult(const DescribeNotebookSessionStatementSqlResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNotebookSessionStatementSqlResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNotebookSessionStatementSqlResultResponse rsp = DescribeNotebookSessionStatementSqlResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNotebookSessionStatementSqlResultOutcome(rsp);
        else
            return DescribeNotebookSessionStatementSqlResultOutcome(o.GetError());
    }
    else
    {
        return DescribeNotebookSessionStatementSqlResultOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeNotebookSessionStatementSqlResultAsync(const DescribeNotebookSessionStatementSqlResultRequest& request, const DescribeNotebookSessionStatementSqlResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNotebookSessionStatementSqlResultRequest&;
    using Resp = DescribeNotebookSessionStatementSqlResultResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNotebookSessionStatementSqlResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeNotebookSessionStatementSqlResultOutcomeCallable DlcClient::DescribeNotebookSessionStatementSqlResultCallable(const DescribeNotebookSessionStatementSqlResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNotebookSessionStatementSqlResultOutcome>>();
    DescribeNotebookSessionStatementSqlResultAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeNotebookSessionStatementSqlResultRequest&,
        DescribeNotebookSessionStatementSqlResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeNotebookSessionStatementsOutcome DlcClient::DescribeNotebookSessionStatements(const DescribeNotebookSessionStatementsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNotebookSessionStatements");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNotebookSessionStatementsResponse rsp = DescribeNotebookSessionStatementsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNotebookSessionStatementsOutcome(rsp);
        else
            return DescribeNotebookSessionStatementsOutcome(o.GetError());
    }
    else
    {
        return DescribeNotebookSessionStatementsOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeNotebookSessionStatementsAsync(const DescribeNotebookSessionStatementsRequest& request, const DescribeNotebookSessionStatementsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNotebookSessionStatementsRequest&;
    using Resp = DescribeNotebookSessionStatementsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNotebookSessionStatements", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeNotebookSessionStatementsOutcomeCallable DlcClient::DescribeNotebookSessionStatementsCallable(const DescribeNotebookSessionStatementsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNotebookSessionStatementsOutcome>>();
    DescribeNotebookSessionStatementsAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeNotebookSessionStatementsRequest&,
        DescribeNotebookSessionStatementsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeNotebookSessionsOutcome DlcClient::DescribeNotebookSessions(const DescribeNotebookSessionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNotebookSessions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNotebookSessionsResponse rsp = DescribeNotebookSessionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNotebookSessionsOutcome(rsp);
        else
            return DescribeNotebookSessionsOutcome(o.GetError());
    }
    else
    {
        return DescribeNotebookSessionsOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeNotebookSessionsAsync(const DescribeNotebookSessionsRequest& request, const DescribeNotebookSessionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNotebookSessionsRequest&;
    using Resp = DescribeNotebookSessionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNotebookSessions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeNotebookSessionsOutcomeCallable DlcClient::DescribeNotebookSessionsCallable(const DescribeNotebookSessionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNotebookSessionsOutcome>>();
    DescribeNotebookSessionsAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeNotebookSessionsRequest&,
        DescribeNotebookSessionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeOtherCHDFSBindingListOutcome DlcClient::DescribeOtherCHDFSBindingList(const DescribeOtherCHDFSBindingListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOtherCHDFSBindingList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOtherCHDFSBindingListResponse rsp = DescribeOtherCHDFSBindingListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOtherCHDFSBindingListOutcome(rsp);
        else
            return DescribeOtherCHDFSBindingListOutcome(o.GetError());
    }
    else
    {
        return DescribeOtherCHDFSBindingListOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeOtherCHDFSBindingListAsync(const DescribeOtherCHDFSBindingListRequest& request, const DescribeOtherCHDFSBindingListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeOtherCHDFSBindingListRequest&;
    using Resp = DescribeOtherCHDFSBindingListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeOtherCHDFSBindingList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeOtherCHDFSBindingListOutcomeCallable DlcClient::DescribeOtherCHDFSBindingListCallable(const DescribeOtherCHDFSBindingListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOtherCHDFSBindingListOutcome>>();
    DescribeOtherCHDFSBindingListAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeOtherCHDFSBindingListRequest&,
        DescribeOtherCHDFSBindingListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeResourceGroupUsageInfoOutcome DlcClient::DescribeResourceGroupUsageInfo(const DescribeResourceGroupUsageInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResourceGroupUsageInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResourceGroupUsageInfoResponse rsp = DescribeResourceGroupUsageInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResourceGroupUsageInfoOutcome(rsp);
        else
            return DescribeResourceGroupUsageInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeResourceGroupUsageInfoOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeResourceGroupUsageInfoAsync(const DescribeResourceGroupUsageInfoRequest& request, const DescribeResourceGroupUsageInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeResourceGroupUsageInfoRequest&;
    using Resp = DescribeResourceGroupUsageInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeResourceGroupUsageInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeResourceGroupUsageInfoOutcomeCallable DlcClient::DescribeResourceGroupUsageInfoCallable(const DescribeResourceGroupUsageInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeResourceGroupUsageInfoOutcome>>();
    DescribeResourceGroupUsageInfoAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeResourceGroupUsageInfoRequest&,
        DescribeResourceGroupUsageInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeResultDownloadOutcome DlcClient::DescribeResultDownload(const DescribeResultDownloadRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResultDownload");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResultDownloadResponse rsp = DescribeResultDownloadResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResultDownloadOutcome(rsp);
        else
            return DescribeResultDownloadOutcome(o.GetError());
    }
    else
    {
        return DescribeResultDownloadOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeResultDownloadAsync(const DescribeResultDownloadRequest& request, const DescribeResultDownloadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeResultDownloadRequest&;
    using Resp = DescribeResultDownloadResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeResultDownload", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeResultDownloadOutcomeCallable DlcClient::DescribeResultDownloadCallable(const DescribeResultDownloadRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeResultDownloadOutcome>>();
    DescribeResultDownloadAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeResultDownloadRequest&,
        DescribeResultDownloadOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeScriptsOutcome DlcClient::DescribeScripts(const DescribeScriptsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScripts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScriptsResponse rsp = DescribeScriptsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScriptsOutcome(rsp);
        else
            return DescribeScriptsOutcome(o.GetError());
    }
    else
    {
        return DescribeScriptsOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeScriptsAsync(const DescribeScriptsRequest& request, const DescribeScriptsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeScriptsRequest&;
    using Resp = DescribeScriptsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeScripts", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeScriptsOutcomeCallable DlcClient::DescribeScriptsCallable(const DescribeScriptsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeScriptsOutcome>>();
    DescribeScriptsAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeScriptsRequest&,
        DescribeScriptsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeSessionImageVersionOutcome DlcClient::DescribeSessionImageVersion(const DescribeSessionImageVersionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSessionImageVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSessionImageVersionResponse rsp = DescribeSessionImageVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSessionImageVersionOutcome(rsp);
        else
            return DescribeSessionImageVersionOutcome(o.GetError());
    }
    else
    {
        return DescribeSessionImageVersionOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeSessionImageVersionAsync(const DescribeSessionImageVersionRequest& request, const DescribeSessionImageVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSessionImageVersionRequest&;
    using Resp = DescribeSessionImageVersionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSessionImageVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeSessionImageVersionOutcomeCallable DlcClient::DescribeSessionImageVersionCallable(const DescribeSessionImageVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSessionImageVersionOutcome>>();
    DescribeSessionImageVersionAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeSessionImageVersionRequest&,
        DescribeSessionImageVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeSparkAppJobOutcome DlcClient::DescribeSparkAppJob(const DescribeSparkAppJobRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSparkAppJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSparkAppJobResponse rsp = DescribeSparkAppJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSparkAppJobOutcome(rsp);
        else
            return DescribeSparkAppJobOutcome(o.GetError());
    }
    else
    {
        return DescribeSparkAppJobOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeSparkAppJobAsync(const DescribeSparkAppJobRequest& request, const DescribeSparkAppJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSparkAppJobRequest&;
    using Resp = DescribeSparkAppJobResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSparkAppJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeSparkAppJobOutcomeCallable DlcClient::DescribeSparkAppJobCallable(const DescribeSparkAppJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSparkAppJobOutcome>>();
    DescribeSparkAppJobAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeSparkAppJobRequest&,
        DescribeSparkAppJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeSparkAppJobsOutcome DlcClient::DescribeSparkAppJobs(const DescribeSparkAppJobsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSparkAppJobs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSparkAppJobsResponse rsp = DescribeSparkAppJobsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSparkAppJobsOutcome(rsp);
        else
            return DescribeSparkAppJobsOutcome(o.GetError());
    }
    else
    {
        return DescribeSparkAppJobsOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeSparkAppJobsAsync(const DescribeSparkAppJobsRequest& request, const DescribeSparkAppJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSparkAppJobsRequest&;
    using Resp = DescribeSparkAppJobsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSparkAppJobs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeSparkAppJobsOutcomeCallable DlcClient::DescribeSparkAppJobsCallable(const DescribeSparkAppJobsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSparkAppJobsOutcome>>();
    DescribeSparkAppJobsAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeSparkAppJobsRequest&,
        DescribeSparkAppJobsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeSparkAppTasksOutcome DlcClient::DescribeSparkAppTasks(const DescribeSparkAppTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSparkAppTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSparkAppTasksResponse rsp = DescribeSparkAppTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSparkAppTasksOutcome(rsp);
        else
            return DescribeSparkAppTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeSparkAppTasksOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeSparkAppTasksAsync(const DescribeSparkAppTasksRequest& request, const DescribeSparkAppTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSparkAppTasksRequest&;
    using Resp = DescribeSparkAppTasksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSparkAppTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeSparkAppTasksOutcomeCallable DlcClient::DescribeSparkAppTasksCallable(const DescribeSparkAppTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSparkAppTasksOutcome>>();
    DescribeSparkAppTasksAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeSparkAppTasksRequest&,
        DescribeSparkAppTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeSparkSessionBatchSQLOutcome DlcClient::DescribeSparkSessionBatchSQL(const DescribeSparkSessionBatchSQLRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSparkSessionBatchSQL");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSparkSessionBatchSQLResponse rsp = DescribeSparkSessionBatchSQLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSparkSessionBatchSQLOutcome(rsp);
        else
            return DescribeSparkSessionBatchSQLOutcome(o.GetError());
    }
    else
    {
        return DescribeSparkSessionBatchSQLOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeSparkSessionBatchSQLAsync(const DescribeSparkSessionBatchSQLRequest& request, const DescribeSparkSessionBatchSQLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSparkSessionBatchSQLRequest&;
    using Resp = DescribeSparkSessionBatchSQLResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSparkSessionBatchSQL", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeSparkSessionBatchSQLOutcomeCallable DlcClient::DescribeSparkSessionBatchSQLCallable(const DescribeSparkSessionBatchSQLRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSparkSessionBatchSQLOutcome>>();
    DescribeSparkSessionBatchSQLAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeSparkSessionBatchSQLRequest&,
        DescribeSparkSessionBatchSQLOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeSparkSessionBatchSQLCostOutcome DlcClient::DescribeSparkSessionBatchSQLCost(const DescribeSparkSessionBatchSQLCostRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSparkSessionBatchSQLCost");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSparkSessionBatchSQLCostResponse rsp = DescribeSparkSessionBatchSQLCostResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSparkSessionBatchSQLCostOutcome(rsp);
        else
            return DescribeSparkSessionBatchSQLCostOutcome(o.GetError());
    }
    else
    {
        return DescribeSparkSessionBatchSQLCostOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeSparkSessionBatchSQLCostAsync(const DescribeSparkSessionBatchSQLCostRequest& request, const DescribeSparkSessionBatchSQLCostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSparkSessionBatchSQLCostRequest&;
    using Resp = DescribeSparkSessionBatchSQLCostResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSparkSessionBatchSQLCost", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeSparkSessionBatchSQLCostOutcomeCallable DlcClient::DescribeSparkSessionBatchSQLCostCallable(const DescribeSparkSessionBatchSQLCostRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSparkSessionBatchSQLCostOutcome>>();
    DescribeSparkSessionBatchSQLCostAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeSparkSessionBatchSQLCostRequest&,
        DescribeSparkSessionBatchSQLCostOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeSparkSessionBatchSqlLogOutcome DlcClient::DescribeSparkSessionBatchSqlLog(const DescribeSparkSessionBatchSqlLogRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSparkSessionBatchSqlLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSparkSessionBatchSqlLogResponse rsp = DescribeSparkSessionBatchSqlLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSparkSessionBatchSqlLogOutcome(rsp);
        else
            return DescribeSparkSessionBatchSqlLogOutcome(o.GetError());
    }
    else
    {
        return DescribeSparkSessionBatchSqlLogOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeSparkSessionBatchSqlLogAsync(const DescribeSparkSessionBatchSqlLogRequest& request, const DescribeSparkSessionBatchSqlLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSparkSessionBatchSqlLogRequest&;
    using Resp = DescribeSparkSessionBatchSqlLogResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSparkSessionBatchSqlLog", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeSparkSessionBatchSqlLogOutcomeCallable DlcClient::DescribeSparkSessionBatchSqlLogCallable(const DescribeSparkSessionBatchSqlLogRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSparkSessionBatchSqlLogOutcome>>();
    DescribeSparkSessionBatchSqlLogAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeSparkSessionBatchSqlLogRequest&,
        DescribeSparkSessionBatchSqlLogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeStandardEngineResourceGroupConfigInfoOutcome DlcClient::DescribeStandardEngineResourceGroupConfigInfo(const DescribeStandardEngineResourceGroupConfigInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStandardEngineResourceGroupConfigInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStandardEngineResourceGroupConfigInfoResponse rsp = DescribeStandardEngineResourceGroupConfigInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStandardEngineResourceGroupConfigInfoOutcome(rsp);
        else
            return DescribeStandardEngineResourceGroupConfigInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeStandardEngineResourceGroupConfigInfoOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeStandardEngineResourceGroupConfigInfoAsync(const DescribeStandardEngineResourceGroupConfigInfoRequest& request, const DescribeStandardEngineResourceGroupConfigInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeStandardEngineResourceGroupConfigInfoRequest&;
    using Resp = DescribeStandardEngineResourceGroupConfigInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStandardEngineResourceGroupConfigInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeStandardEngineResourceGroupConfigInfoOutcomeCallable DlcClient::DescribeStandardEngineResourceGroupConfigInfoCallable(const DescribeStandardEngineResourceGroupConfigInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStandardEngineResourceGroupConfigInfoOutcome>>();
    DescribeStandardEngineResourceGroupConfigInfoAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeStandardEngineResourceGroupConfigInfoRequest&,
        DescribeStandardEngineResourceGroupConfigInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeStandardEngineResourceGroupsOutcome DlcClient::DescribeStandardEngineResourceGroups(const DescribeStandardEngineResourceGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStandardEngineResourceGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStandardEngineResourceGroupsResponse rsp = DescribeStandardEngineResourceGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStandardEngineResourceGroupsOutcome(rsp);
        else
            return DescribeStandardEngineResourceGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeStandardEngineResourceGroupsOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeStandardEngineResourceGroupsAsync(const DescribeStandardEngineResourceGroupsRequest& request, const DescribeStandardEngineResourceGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeStandardEngineResourceGroupsRequest&;
    using Resp = DescribeStandardEngineResourceGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStandardEngineResourceGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeStandardEngineResourceGroupsOutcomeCallable DlcClient::DescribeStandardEngineResourceGroupsCallable(const DescribeStandardEngineResourceGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStandardEngineResourceGroupsOutcome>>();
    DescribeStandardEngineResourceGroupsAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeStandardEngineResourceGroupsRequest&,
        DescribeStandardEngineResourceGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeStoreLocationOutcome DlcClient::DescribeStoreLocation(const DescribeStoreLocationRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStoreLocation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStoreLocationResponse rsp = DescribeStoreLocationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStoreLocationOutcome(rsp);
        else
            return DescribeStoreLocationOutcome(o.GetError());
    }
    else
    {
        return DescribeStoreLocationOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeStoreLocationAsync(const DescribeStoreLocationRequest& request, const DescribeStoreLocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeStoreLocationRequest&;
    using Resp = DescribeStoreLocationResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStoreLocation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeStoreLocationOutcomeCallable DlcClient::DescribeStoreLocationCallable(const DescribeStoreLocationRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStoreLocationOutcome>>();
    DescribeStoreLocationAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeStoreLocationRequest&,
        DescribeStoreLocationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeSubUserAccessPolicyOutcome DlcClient::DescribeSubUserAccessPolicy(const DescribeSubUserAccessPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSubUserAccessPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSubUserAccessPolicyResponse rsp = DescribeSubUserAccessPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSubUserAccessPolicyOutcome(rsp);
        else
            return DescribeSubUserAccessPolicyOutcome(o.GetError());
    }
    else
    {
        return DescribeSubUserAccessPolicyOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeSubUserAccessPolicyAsync(const DescribeSubUserAccessPolicyRequest& request, const DescribeSubUserAccessPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSubUserAccessPolicyRequest&;
    using Resp = DescribeSubUserAccessPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSubUserAccessPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeSubUserAccessPolicyOutcomeCallable DlcClient::DescribeSubUserAccessPolicyCallable(const DescribeSubUserAccessPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSubUserAccessPolicyOutcome>>();
    DescribeSubUserAccessPolicyAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeSubUserAccessPolicyRequest&,
        DescribeSubUserAccessPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeTableOutcome DlcClient::DescribeTable(const DescribeTableRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTable");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTableResponse rsp = DescribeTableResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTableOutcome(rsp);
        else
            return DescribeTableOutcome(o.GetError());
    }
    else
    {
        return DescribeTableOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeTableAsync(const DescribeTableRequest& request, const DescribeTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTableRequest&;
    using Resp = DescribeTableResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTable", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeTableOutcomeCallable DlcClient::DescribeTableCallable(const DescribeTableRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTableOutcome>>();
    DescribeTableAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeTableRequest&,
        DescribeTableOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeTablePartitionsOutcome DlcClient::DescribeTablePartitions(const DescribeTablePartitionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTablePartitions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTablePartitionsResponse rsp = DescribeTablePartitionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTablePartitionsOutcome(rsp);
        else
            return DescribeTablePartitionsOutcome(o.GetError());
    }
    else
    {
        return DescribeTablePartitionsOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeTablePartitionsAsync(const DescribeTablePartitionsRequest& request, const DescribeTablePartitionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTablePartitionsRequest&;
    using Resp = DescribeTablePartitionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTablePartitions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeTablePartitionsOutcomeCallable DlcClient::DescribeTablePartitionsCallable(const DescribeTablePartitionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTablePartitionsOutcome>>();
    DescribeTablePartitionsAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeTablePartitionsRequest&,
        DescribeTablePartitionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeTablesOutcome DlcClient::DescribeTables(const DescribeTablesRequest &request)
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

void DlcClient::DescribeTablesAsync(const DescribeTablesRequest& request, const DescribeTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

DlcClient::DescribeTablesOutcomeCallable DlcClient::DescribeTablesCallable(const DescribeTablesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTablesOutcome>>();
    DescribeTablesAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeTablesRequest&,
        DescribeTablesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeTablesNameOutcome DlcClient::DescribeTablesName(const DescribeTablesNameRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTablesName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTablesNameResponse rsp = DescribeTablesNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTablesNameOutcome(rsp);
        else
            return DescribeTablesNameOutcome(o.GetError());
    }
    else
    {
        return DescribeTablesNameOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeTablesNameAsync(const DescribeTablesNameRequest& request, const DescribeTablesNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTablesNameRequest&;
    using Resp = DescribeTablesNameResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTablesName", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeTablesNameOutcomeCallable DlcClient::DescribeTablesNameCallable(const DescribeTablesNameRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTablesNameOutcome>>();
    DescribeTablesNameAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeTablesNameRequest&,
        DescribeTablesNameOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeTaskListOutcome DlcClient::DescribeTaskList(const DescribeTaskListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskListResponse rsp = DescribeTaskListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskListOutcome(rsp);
        else
            return DescribeTaskListOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskListOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeTaskListAsync(const DescribeTaskListRequest& request, const DescribeTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTaskListRequest&;
    using Resp = DescribeTaskListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTaskList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeTaskListOutcomeCallable DlcClient::DescribeTaskListCallable(const DescribeTaskListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTaskListOutcome>>();
    DescribeTaskListAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeTaskListRequest&,
        DescribeTaskListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeTaskLogOutcome DlcClient::DescribeTaskLog(const DescribeTaskLogRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskLogResponse rsp = DescribeTaskLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskLogOutcome(rsp);
        else
            return DescribeTaskLogOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskLogOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeTaskLogAsync(const DescribeTaskLogRequest& request, const DescribeTaskLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTaskLogRequest&;
    using Resp = DescribeTaskLogResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTaskLog", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeTaskLogOutcomeCallable DlcClient::DescribeTaskLogCallable(const DescribeTaskLogRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTaskLogOutcome>>();
    DescribeTaskLogAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeTaskLogRequest&,
        DescribeTaskLogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeTaskMonitorInfosOutcome DlcClient::DescribeTaskMonitorInfos(const DescribeTaskMonitorInfosRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskMonitorInfos");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskMonitorInfosResponse rsp = DescribeTaskMonitorInfosResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskMonitorInfosOutcome(rsp);
        else
            return DescribeTaskMonitorInfosOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskMonitorInfosOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeTaskMonitorInfosAsync(const DescribeTaskMonitorInfosRequest& request, const DescribeTaskMonitorInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTaskMonitorInfosRequest&;
    using Resp = DescribeTaskMonitorInfosResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTaskMonitorInfos", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeTaskMonitorInfosOutcomeCallable DlcClient::DescribeTaskMonitorInfosCallable(const DescribeTaskMonitorInfosRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTaskMonitorInfosOutcome>>();
    DescribeTaskMonitorInfosAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeTaskMonitorInfosRequest&,
        DescribeTaskMonitorInfosOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeTaskResourceUsageOutcome DlcClient::DescribeTaskResourceUsage(const DescribeTaskResourceUsageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskResourceUsage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskResourceUsageResponse rsp = DescribeTaskResourceUsageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskResourceUsageOutcome(rsp);
        else
            return DescribeTaskResourceUsageOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskResourceUsageOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeTaskResourceUsageAsync(const DescribeTaskResourceUsageRequest& request, const DescribeTaskResourceUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTaskResourceUsageRequest&;
    using Resp = DescribeTaskResourceUsageResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTaskResourceUsage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeTaskResourceUsageOutcomeCallable DlcClient::DescribeTaskResourceUsageCallable(const DescribeTaskResourceUsageRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTaskResourceUsageOutcome>>();
    DescribeTaskResourceUsageAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeTaskResourceUsageRequest&,
        DescribeTaskResourceUsageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeTaskResultOutcome DlcClient::DescribeTaskResult(const DescribeTaskResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskResultResponse rsp = DescribeTaskResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskResultOutcome(rsp);
        else
            return DescribeTaskResultOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskResultOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeTaskResultAsync(const DescribeTaskResultRequest& request, const DescribeTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTaskResultRequest&;
    using Resp = DescribeTaskResultResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTaskResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeTaskResultOutcomeCallable DlcClient::DescribeTaskResultCallable(const DescribeTaskResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTaskResultOutcome>>();
    DescribeTaskResultAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeTaskResultRequest&,
        DescribeTaskResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeTasksOutcome DlcClient::DescribeTasks(const DescribeTasksRequest &request)
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

void DlcClient::DescribeTasksAsync(const DescribeTasksRequest& request, const DescribeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

DlcClient::DescribeTasksOutcomeCallable DlcClient::DescribeTasksCallable(const DescribeTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTasksOutcome>>();
    DescribeTasksAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeTasksRequest&,
        DescribeTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeTasksAnalysisOutcome DlcClient::DescribeTasksAnalysis(const DescribeTasksAnalysisRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTasksAnalysis");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTasksAnalysisResponse rsp = DescribeTasksAnalysisResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTasksAnalysisOutcome(rsp);
        else
            return DescribeTasksAnalysisOutcome(o.GetError());
    }
    else
    {
        return DescribeTasksAnalysisOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeTasksAnalysisAsync(const DescribeTasksAnalysisRequest& request, const DescribeTasksAnalysisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTasksAnalysisRequest&;
    using Resp = DescribeTasksAnalysisResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTasksAnalysis", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeTasksAnalysisOutcomeCallable DlcClient::DescribeTasksAnalysisCallable(const DescribeTasksAnalysisRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTasksAnalysisOutcome>>();
    DescribeTasksAnalysisAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeTasksAnalysisRequest&,
        DescribeTasksAnalysisOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeTasksCostInfoOutcome DlcClient::DescribeTasksCostInfo(const DescribeTasksCostInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTasksCostInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTasksCostInfoResponse rsp = DescribeTasksCostInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTasksCostInfoOutcome(rsp);
        else
            return DescribeTasksCostInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeTasksCostInfoOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeTasksCostInfoAsync(const DescribeTasksCostInfoRequest& request, const DescribeTasksCostInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTasksCostInfoRequest&;
    using Resp = DescribeTasksCostInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTasksCostInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeTasksCostInfoOutcomeCallable DlcClient::DescribeTasksCostInfoCallable(const DescribeTasksCostInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTasksCostInfoOutcome>>();
    DescribeTasksCostInfoAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeTasksCostInfoRequest&,
        DescribeTasksCostInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeTasksOverviewOutcome DlcClient::DescribeTasksOverview(const DescribeTasksOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTasksOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTasksOverviewResponse rsp = DescribeTasksOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTasksOverviewOutcome(rsp);
        else
            return DescribeTasksOverviewOutcome(o.GetError());
    }
    else
    {
        return DescribeTasksOverviewOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeTasksOverviewAsync(const DescribeTasksOverviewRequest& request, const DescribeTasksOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTasksOverviewRequest&;
    using Resp = DescribeTasksOverviewResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTasksOverview", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeTasksOverviewOutcomeCallable DlcClient::DescribeTasksOverviewCallable(const DescribeTasksOverviewRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTasksOverviewOutcome>>();
    DescribeTasksOverviewAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeTasksOverviewRequest&,
        DescribeTasksOverviewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeThirdPartyAccessUserOutcome DlcClient::DescribeThirdPartyAccessUser(const DescribeThirdPartyAccessUserRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeThirdPartyAccessUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeThirdPartyAccessUserResponse rsp = DescribeThirdPartyAccessUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeThirdPartyAccessUserOutcome(rsp);
        else
            return DescribeThirdPartyAccessUserOutcome(o.GetError());
    }
    else
    {
        return DescribeThirdPartyAccessUserOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeThirdPartyAccessUserAsync(const DescribeThirdPartyAccessUserRequest& request, const DescribeThirdPartyAccessUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeThirdPartyAccessUserRequest&;
    using Resp = DescribeThirdPartyAccessUserResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeThirdPartyAccessUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeThirdPartyAccessUserOutcomeCallable DlcClient::DescribeThirdPartyAccessUserCallable(const DescribeThirdPartyAccessUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeThirdPartyAccessUserOutcome>>();
    DescribeThirdPartyAccessUserAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeThirdPartyAccessUserRequest&,
        DescribeThirdPartyAccessUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeUDFPolicyOutcome DlcClient::DescribeUDFPolicy(const DescribeUDFPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUDFPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUDFPolicyResponse rsp = DescribeUDFPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUDFPolicyOutcome(rsp);
        else
            return DescribeUDFPolicyOutcome(o.GetError());
    }
    else
    {
        return DescribeUDFPolicyOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeUDFPolicyAsync(const DescribeUDFPolicyRequest& request, const DescribeUDFPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUDFPolicyRequest&;
    using Resp = DescribeUDFPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUDFPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeUDFPolicyOutcomeCallable DlcClient::DescribeUDFPolicyCallable(const DescribeUDFPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUDFPolicyOutcome>>();
    DescribeUDFPolicyAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeUDFPolicyRequest&,
        DescribeUDFPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeUpdatableDataEnginesOutcome DlcClient::DescribeUpdatableDataEngines(const DescribeUpdatableDataEnginesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUpdatableDataEngines");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUpdatableDataEnginesResponse rsp = DescribeUpdatableDataEnginesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUpdatableDataEnginesOutcome(rsp);
        else
            return DescribeUpdatableDataEnginesOutcome(o.GetError());
    }
    else
    {
        return DescribeUpdatableDataEnginesOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeUpdatableDataEnginesAsync(const DescribeUpdatableDataEnginesRequest& request, const DescribeUpdatableDataEnginesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUpdatableDataEnginesRequest&;
    using Resp = DescribeUpdatableDataEnginesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUpdatableDataEngines", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeUpdatableDataEnginesOutcomeCallable DlcClient::DescribeUpdatableDataEnginesCallable(const DescribeUpdatableDataEnginesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUpdatableDataEnginesOutcome>>();
    DescribeUpdatableDataEnginesAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeUpdatableDataEnginesRequest&,
        DescribeUpdatableDataEnginesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeUserDataEngineConfigOutcome DlcClient::DescribeUserDataEngineConfig(const DescribeUserDataEngineConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserDataEngineConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserDataEngineConfigResponse rsp = DescribeUserDataEngineConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserDataEngineConfigOutcome(rsp);
        else
            return DescribeUserDataEngineConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeUserDataEngineConfigOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeUserDataEngineConfigAsync(const DescribeUserDataEngineConfigRequest& request, const DescribeUserDataEngineConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUserDataEngineConfigRequest&;
    using Resp = DescribeUserDataEngineConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUserDataEngineConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeUserDataEngineConfigOutcomeCallable DlcClient::DescribeUserDataEngineConfigCallable(const DescribeUserDataEngineConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUserDataEngineConfigOutcome>>();
    DescribeUserDataEngineConfigAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeUserDataEngineConfigRequest&,
        DescribeUserDataEngineConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeUserInfoOutcome DlcClient::DescribeUserInfo(const DescribeUserInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserInfoResponse rsp = DescribeUserInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserInfoOutcome(rsp);
        else
            return DescribeUserInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeUserInfoOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeUserInfoAsync(const DescribeUserInfoRequest& request, const DescribeUserInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUserInfoRequest&;
    using Resp = DescribeUserInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUserInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeUserInfoOutcomeCallable DlcClient::DescribeUserInfoCallable(const DescribeUserInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUserInfoOutcome>>();
    DescribeUserInfoAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeUserInfoRequest&,
        DescribeUserInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeUserRegisterTimeOutcome DlcClient::DescribeUserRegisterTime(const DescribeUserRegisterTimeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserRegisterTime");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserRegisterTimeResponse rsp = DescribeUserRegisterTimeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserRegisterTimeOutcome(rsp);
        else
            return DescribeUserRegisterTimeOutcome(o.GetError());
    }
    else
    {
        return DescribeUserRegisterTimeOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeUserRegisterTimeAsync(const DescribeUserRegisterTimeRequest& request, const DescribeUserRegisterTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUserRegisterTimeRequest&;
    using Resp = DescribeUserRegisterTimeResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUserRegisterTime", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeUserRegisterTimeOutcomeCallable DlcClient::DescribeUserRegisterTimeCallable(const DescribeUserRegisterTimeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUserRegisterTimeOutcome>>();
    DescribeUserRegisterTimeAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeUserRegisterTimeRequest&,
        DescribeUserRegisterTimeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeUserRolesOutcome DlcClient::DescribeUserRoles(const DescribeUserRolesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserRoles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserRolesResponse rsp = DescribeUserRolesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserRolesOutcome(rsp);
        else
            return DescribeUserRolesOutcome(o.GetError());
    }
    else
    {
        return DescribeUserRolesOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeUserRolesAsync(const DescribeUserRolesRequest& request, const DescribeUserRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUserRolesRequest&;
    using Resp = DescribeUserRolesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUserRoles", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeUserRolesOutcomeCallable DlcClient::DescribeUserRolesCallable(const DescribeUserRolesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUserRolesOutcome>>();
    DescribeUserRolesAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeUserRolesRequest&,
        DescribeUserRolesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeUserTypeOutcome DlcClient::DescribeUserType(const DescribeUserTypeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserType");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserTypeResponse rsp = DescribeUserTypeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserTypeOutcome(rsp);
        else
            return DescribeUserTypeOutcome(o.GetError());
    }
    else
    {
        return DescribeUserTypeOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeUserTypeAsync(const DescribeUserTypeRequest& request, const DescribeUserTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUserTypeRequest&;
    using Resp = DescribeUserTypeResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUserType", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeUserTypeOutcomeCallable DlcClient::DescribeUserTypeCallable(const DescribeUserTypeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUserTypeOutcome>>();
    DescribeUserTypeAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeUserTypeRequest&,
        DescribeUserTypeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeUserVpcConnectionOutcome DlcClient::DescribeUserVpcConnection(const DescribeUserVpcConnectionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserVpcConnection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserVpcConnectionResponse rsp = DescribeUserVpcConnectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserVpcConnectionOutcome(rsp);
        else
            return DescribeUserVpcConnectionOutcome(o.GetError());
    }
    else
    {
        return DescribeUserVpcConnectionOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeUserVpcConnectionAsync(const DescribeUserVpcConnectionRequest& request, const DescribeUserVpcConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUserVpcConnectionRequest&;
    using Resp = DescribeUserVpcConnectionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUserVpcConnection", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeUserVpcConnectionOutcomeCallable DlcClient::DescribeUserVpcConnectionCallable(const DescribeUserVpcConnectionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUserVpcConnectionOutcome>>();
    DescribeUserVpcConnectionAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeUserVpcConnectionRequest&,
        DescribeUserVpcConnectionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeUsersOutcome DlcClient::DescribeUsers(const DescribeUsersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUsers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUsersResponse rsp = DescribeUsersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUsersOutcome(rsp);
        else
            return DescribeUsersOutcome(o.GetError());
    }
    else
    {
        return DescribeUsersOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeUsersAsync(const DescribeUsersRequest& request, const DescribeUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUsersRequest&;
    using Resp = DescribeUsersResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUsers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeUsersOutcomeCallable DlcClient::DescribeUsersCallable(const DescribeUsersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUsersOutcome>>();
    DescribeUsersAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeUsersRequest&,
        DescribeUsersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeViewsOutcome DlcClient::DescribeViews(const DescribeViewsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeViews");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeViewsResponse rsp = DescribeViewsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeViewsOutcome(rsp);
        else
            return DescribeViewsOutcome(o.GetError());
    }
    else
    {
        return DescribeViewsOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeViewsAsync(const DescribeViewsRequest& request, const DescribeViewsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeViewsRequest&;
    using Resp = DescribeViewsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeViews", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeViewsOutcomeCallable DlcClient::DescribeViewsCallable(const DescribeViewsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeViewsOutcome>>();
    DescribeViewsAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeViewsRequest&,
        DescribeViewsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeWorkGroupInfoOutcome DlcClient::DescribeWorkGroupInfo(const DescribeWorkGroupInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWorkGroupInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWorkGroupInfoResponse rsp = DescribeWorkGroupInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWorkGroupInfoOutcome(rsp);
        else
            return DescribeWorkGroupInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeWorkGroupInfoOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeWorkGroupInfoAsync(const DescribeWorkGroupInfoRequest& request, const DescribeWorkGroupInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeWorkGroupInfoRequest&;
    using Resp = DescribeWorkGroupInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWorkGroupInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeWorkGroupInfoOutcomeCallable DlcClient::DescribeWorkGroupInfoCallable(const DescribeWorkGroupInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWorkGroupInfoOutcome>>();
    DescribeWorkGroupInfoAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeWorkGroupInfoRequest&,
        DescribeWorkGroupInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeWorkGroupsOutcome DlcClient::DescribeWorkGroups(const DescribeWorkGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWorkGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWorkGroupsResponse rsp = DescribeWorkGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWorkGroupsOutcome(rsp);
        else
            return DescribeWorkGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeWorkGroupsOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeWorkGroupsAsync(const DescribeWorkGroupsRequest& request, const DescribeWorkGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeWorkGroupsRequest&;
    using Resp = DescribeWorkGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWorkGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeWorkGroupsOutcomeCallable DlcClient::DescribeWorkGroupsCallable(const DescribeWorkGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWorkGroupsOutcome>>();
    DescribeWorkGroupsAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeWorkGroupsRequest&,
        DescribeWorkGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DetachUserPolicyOutcome DlcClient::DetachUserPolicy(const DetachUserPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DetachUserPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DetachUserPolicyResponse rsp = DetachUserPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DetachUserPolicyOutcome(rsp);
        else
            return DetachUserPolicyOutcome(o.GetError());
    }
    else
    {
        return DetachUserPolicyOutcome(outcome.GetError());
    }
}

void DlcClient::DetachUserPolicyAsync(const DetachUserPolicyRequest& request, const DetachUserPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DetachUserPolicyRequest&;
    using Resp = DetachUserPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "DetachUserPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DetachUserPolicyOutcomeCallable DlcClient::DetachUserPolicyCallable(const DetachUserPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DetachUserPolicyOutcome>>();
    DetachUserPolicyAsync(
    request,
    [prom](
        const DlcClient*,
        const DetachUserPolicyRequest&,
        DetachUserPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DetachWorkGroupPolicyOutcome DlcClient::DetachWorkGroupPolicy(const DetachWorkGroupPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DetachWorkGroupPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DetachWorkGroupPolicyResponse rsp = DetachWorkGroupPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DetachWorkGroupPolicyOutcome(rsp);
        else
            return DetachWorkGroupPolicyOutcome(o.GetError());
    }
    else
    {
        return DetachWorkGroupPolicyOutcome(outcome.GetError());
    }
}

void DlcClient::DetachWorkGroupPolicyAsync(const DetachWorkGroupPolicyRequest& request, const DetachWorkGroupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DetachWorkGroupPolicyRequest&;
    using Resp = DetachWorkGroupPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "DetachWorkGroupPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DetachWorkGroupPolicyOutcomeCallable DlcClient::DetachWorkGroupPolicyCallable(const DetachWorkGroupPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DetachWorkGroupPolicyOutcome>>();
    DetachWorkGroupPolicyAsync(
    request,
    [prom](
        const DlcClient*,
        const DetachWorkGroupPolicyRequest&,
        DetachWorkGroupPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DropDMSDatabaseOutcome DlcClient::DropDMSDatabase(const DropDMSDatabaseRequest &request)
{
    auto outcome = MakeRequest(request, "DropDMSDatabase");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DropDMSDatabaseResponse rsp = DropDMSDatabaseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DropDMSDatabaseOutcome(rsp);
        else
            return DropDMSDatabaseOutcome(o.GetError());
    }
    else
    {
        return DropDMSDatabaseOutcome(outcome.GetError());
    }
}

void DlcClient::DropDMSDatabaseAsync(const DropDMSDatabaseRequest& request, const DropDMSDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DropDMSDatabaseRequest&;
    using Resp = DropDMSDatabaseResponse;

    DoRequestAsync<Req, Resp>(
        "DropDMSDatabase", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DropDMSDatabaseOutcomeCallable DlcClient::DropDMSDatabaseCallable(const DropDMSDatabaseRequest &request)
{
    const auto prom = std::make_shared<std::promise<DropDMSDatabaseOutcome>>();
    DropDMSDatabaseAsync(
    request,
    [prom](
        const DlcClient*,
        const DropDMSDatabaseRequest&,
        DropDMSDatabaseOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DropDMSPartitionsOutcome DlcClient::DropDMSPartitions(const DropDMSPartitionsRequest &request)
{
    auto outcome = MakeRequest(request, "DropDMSPartitions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DropDMSPartitionsResponse rsp = DropDMSPartitionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DropDMSPartitionsOutcome(rsp);
        else
            return DropDMSPartitionsOutcome(o.GetError());
    }
    else
    {
        return DropDMSPartitionsOutcome(outcome.GetError());
    }
}

void DlcClient::DropDMSPartitionsAsync(const DropDMSPartitionsRequest& request, const DropDMSPartitionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DropDMSPartitionsRequest&;
    using Resp = DropDMSPartitionsResponse;

    DoRequestAsync<Req, Resp>(
        "DropDMSPartitions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DropDMSPartitionsOutcomeCallable DlcClient::DropDMSPartitionsCallable(const DropDMSPartitionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DropDMSPartitionsOutcome>>();
    DropDMSPartitionsAsync(
    request,
    [prom](
        const DlcClient*,
        const DropDMSPartitionsRequest&,
        DropDMSPartitionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DropDMSTableOutcome DlcClient::DropDMSTable(const DropDMSTableRequest &request)
{
    auto outcome = MakeRequest(request, "DropDMSTable");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DropDMSTableResponse rsp = DropDMSTableResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DropDMSTableOutcome(rsp);
        else
            return DropDMSTableOutcome(o.GetError());
    }
    else
    {
        return DropDMSTableOutcome(outcome.GetError());
    }
}

void DlcClient::DropDMSTableAsync(const DropDMSTableRequest& request, const DropDMSTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DropDMSTableRequest&;
    using Resp = DropDMSTableResponse;

    DoRequestAsync<Req, Resp>(
        "DropDMSTable", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DropDMSTableOutcomeCallable DlcClient::DropDMSTableCallable(const DropDMSTableRequest &request)
{
    const auto prom = std::make_shared<std::promise<DropDMSTableOutcome>>();
    DropDMSTableAsync(
    request,
    [prom](
        const DlcClient*,
        const DropDMSTableRequest&,
        DropDMSTableOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::GenerateCreateMangedTableSqlOutcome DlcClient::GenerateCreateMangedTableSql(const GenerateCreateMangedTableSqlRequest &request)
{
    auto outcome = MakeRequest(request, "GenerateCreateMangedTableSql");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GenerateCreateMangedTableSqlResponse rsp = GenerateCreateMangedTableSqlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GenerateCreateMangedTableSqlOutcome(rsp);
        else
            return GenerateCreateMangedTableSqlOutcome(o.GetError());
    }
    else
    {
        return GenerateCreateMangedTableSqlOutcome(outcome.GetError());
    }
}

void DlcClient::GenerateCreateMangedTableSqlAsync(const GenerateCreateMangedTableSqlRequest& request, const GenerateCreateMangedTableSqlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GenerateCreateMangedTableSqlRequest&;
    using Resp = GenerateCreateMangedTableSqlResponse;

    DoRequestAsync<Req, Resp>(
        "GenerateCreateMangedTableSql", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::GenerateCreateMangedTableSqlOutcomeCallable DlcClient::GenerateCreateMangedTableSqlCallable(const GenerateCreateMangedTableSqlRequest &request)
{
    const auto prom = std::make_shared<std::promise<GenerateCreateMangedTableSqlOutcome>>();
    GenerateCreateMangedTableSqlAsync(
    request,
    [prom](
        const DlcClient*,
        const GenerateCreateMangedTableSqlRequest&,
        GenerateCreateMangedTableSqlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::GetOptimizerPolicyOutcome DlcClient::GetOptimizerPolicy(const GetOptimizerPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "GetOptimizerPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetOptimizerPolicyResponse rsp = GetOptimizerPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetOptimizerPolicyOutcome(rsp);
        else
            return GetOptimizerPolicyOutcome(o.GetError());
    }
    else
    {
        return GetOptimizerPolicyOutcome(outcome.GetError());
    }
}

void DlcClient::GetOptimizerPolicyAsync(const GetOptimizerPolicyRequest& request, const GetOptimizerPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetOptimizerPolicyRequest&;
    using Resp = GetOptimizerPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "GetOptimizerPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::GetOptimizerPolicyOutcomeCallable DlcClient::GetOptimizerPolicyCallable(const GetOptimizerPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetOptimizerPolicyOutcome>>();
    GetOptimizerPolicyAsync(
    request,
    [prom](
        const DlcClient*,
        const GetOptimizerPolicyRequest&,
        GetOptimizerPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::GrantDLCCatalogAccessOutcome DlcClient::GrantDLCCatalogAccess(const GrantDLCCatalogAccessRequest &request)
{
    auto outcome = MakeRequest(request, "GrantDLCCatalogAccess");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GrantDLCCatalogAccessResponse rsp = GrantDLCCatalogAccessResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GrantDLCCatalogAccessOutcome(rsp);
        else
            return GrantDLCCatalogAccessOutcome(o.GetError());
    }
    else
    {
        return GrantDLCCatalogAccessOutcome(outcome.GetError());
    }
}

void DlcClient::GrantDLCCatalogAccessAsync(const GrantDLCCatalogAccessRequest& request, const GrantDLCCatalogAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GrantDLCCatalogAccessRequest&;
    using Resp = GrantDLCCatalogAccessResponse;

    DoRequestAsync<Req, Resp>(
        "GrantDLCCatalogAccess", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::GrantDLCCatalogAccessOutcomeCallable DlcClient::GrantDLCCatalogAccessCallable(const GrantDLCCatalogAccessRequest &request)
{
    const auto prom = std::make_shared<std::promise<GrantDLCCatalogAccessOutcome>>();
    GrantDLCCatalogAccessAsync(
    request,
    [prom](
        const DlcClient*,
        const GrantDLCCatalogAccessRequest&,
        GrantDLCCatalogAccessOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::LaunchStandardEngineResourceGroupsOutcome DlcClient::LaunchStandardEngineResourceGroups(const LaunchStandardEngineResourceGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "LaunchStandardEngineResourceGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        LaunchStandardEngineResourceGroupsResponse rsp = LaunchStandardEngineResourceGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return LaunchStandardEngineResourceGroupsOutcome(rsp);
        else
            return LaunchStandardEngineResourceGroupsOutcome(o.GetError());
    }
    else
    {
        return LaunchStandardEngineResourceGroupsOutcome(outcome.GetError());
    }
}

void DlcClient::LaunchStandardEngineResourceGroupsAsync(const LaunchStandardEngineResourceGroupsRequest& request, const LaunchStandardEngineResourceGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const LaunchStandardEngineResourceGroupsRequest&;
    using Resp = LaunchStandardEngineResourceGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "LaunchStandardEngineResourceGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::LaunchStandardEngineResourceGroupsOutcomeCallable DlcClient::LaunchStandardEngineResourceGroupsCallable(const LaunchStandardEngineResourceGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<LaunchStandardEngineResourceGroupsOutcome>>();
    LaunchStandardEngineResourceGroupsAsync(
    request,
    [prom](
        const DlcClient*,
        const LaunchStandardEngineResourceGroupsRequest&,
        LaunchStandardEngineResourceGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::ListTaskJobLogDetailOutcome DlcClient::ListTaskJobLogDetail(const ListTaskJobLogDetailRequest &request)
{
    auto outcome = MakeRequest(request, "ListTaskJobLogDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListTaskJobLogDetailResponse rsp = ListTaskJobLogDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListTaskJobLogDetailOutcome(rsp);
        else
            return ListTaskJobLogDetailOutcome(o.GetError());
    }
    else
    {
        return ListTaskJobLogDetailOutcome(outcome.GetError());
    }
}

void DlcClient::ListTaskJobLogDetailAsync(const ListTaskJobLogDetailRequest& request, const ListTaskJobLogDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListTaskJobLogDetailRequest&;
    using Resp = ListTaskJobLogDetailResponse;

    DoRequestAsync<Req, Resp>(
        "ListTaskJobLogDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::ListTaskJobLogDetailOutcomeCallable DlcClient::ListTaskJobLogDetailCallable(const ListTaskJobLogDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListTaskJobLogDetailOutcome>>();
    ListTaskJobLogDetailAsync(
    request,
    [prom](
        const DlcClient*,
        const ListTaskJobLogDetailRequest&,
        ListTaskJobLogDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::ListTaskJobLogNameOutcome DlcClient::ListTaskJobLogName(const ListTaskJobLogNameRequest &request)
{
    auto outcome = MakeRequest(request, "ListTaskJobLogName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListTaskJobLogNameResponse rsp = ListTaskJobLogNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListTaskJobLogNameOutcome(rsp);
        else
            return ListTaskJobLogNameOutcome(o.GetError());
    }
    else
    {
        return ListTaskJobLogNameOutcome(outcome.GetError());
    }
}

void DlcClient::ListTaskJobLogNameAsync(const ListTaskJobLogNameRequest& request, const ListTaskJobLogNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListTaskJobLogNameRequest&;
    using Resp = ListTaskJobLogNameResponse;

    DoRequestAsync<Req, Resp>(
        "ListTaskJobLogName", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::ListTaskJobLogNameOutcomeCallable DlcClient::ListTaskJobLogNameCallable(const ListTaskJobLogNameRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListTaskJobLogNameOutcome>>();
    ListTaskJobLogNameAsync(
    request,
    [prom](
        const DlcClient*,
        const ListTaskJobLogNameRequest&,
        ListTaskJobLogNameOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::LockMetaDataOutcome DlcClient::LockMetaData(const LockMetaDataRequest &request)
{
    auto outcome = MakeRequest(request, "LockMetaData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        LockMetaDataResponse rsp = LockMetaDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return LockMetaDataOutcome(rsp);
        else
            return LockMetaDataOutcome(o.GetError());
    }
    else
    {
        return LockMetaDataOutcome(outcome.GetError());
    }
}

void DlcClient::LockMetaDataAsync(const LockMetaDataRequest& request, const LockMetaDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const LockMetaDataRequest&;
    using Resp = LockMetaDataResponse;

    DoRequestAsync<Req, Resp>(
        "LockMetaData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::LockMetaDataOutcomeCallable DlcClient::LockMetaDataCallable(const LockMetaDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<LockMetaDataOutcome>>();
    LockMetaDataAsync(
    request,
    [prom](
        const DlcClient*,
        const LockMetaDataRequest&,
        LockMetaDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::ModifyAdvancedStoreLocationOutcome DlcClient::ModifyAdvancedStoreLocation(const ModifyAdvancedStoreLocationRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAdvancedStoreLocation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAdvancedStoreLocationResponse rsp = ModifyAdvancedStoreLocationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAdvancedStoreLocationOutcome(rsp);
        else
            return ModifyAdvancedStoreLocationOutcome(o.GetError());
    }
    else
    {
        return ModifyAdvancedStoreLocationOutcome(outcome.GetError());
    }
}

void DlcClient::ModifyAdvancedStoreLocationAsync(const ModifyAdvancedStoreLocationRequest& request, const ModifyAdvancedStoreLocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAdvancedStoreLocationRequest&;
    using Resp = ModifyAdvancedStoreLocationResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAdvancedStoreLocation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::ModifyAdvancedStoreLocationOutcomeCallable DlcClient::ModifyAdvancedStoreLocationCallable(const ModifyAdvancedStoreLocationRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAdvancedStoreLocationOutcome>>();
    ModifyAdvancedStoreLocationAsync(
    request,
    [prom](
        const DlcClient*,
        const ModifyAdvancedStoreLocationRequest&,
        ModifyAdvancedStoreLocationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::ModifyDataEngineDescriptionOutcome DlcClient::ModifyDataEngineDescription(const ModifyDataEngineDescriptionRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDataEngineDescription");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDataEngineDescriptionResponse rsp = ModifyDataEngineDescriptionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDataEngineDescriptionOutcome(rsp);
        else
            return ModifyDataEngineDescriptionOutcome(o.GetError());
    }
    else
    {
        return ModifyDataEngineDescriptionOutcome(outcome.GetError());
    }
}

void DlcClient::ModifyDataEngineDescriptionAsync(const ModifyDataEngineDescriptionRequest& request, const ModifyDataEngineDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDataEngineDescriptionRequest&;
    using Resp = ModifyDataEngineDescriptionResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDataEngineDescription", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::ModifyDataEngineDescriptionOutcomeCallable DlcClient::ModifyDataEngineDescriptionCallable(const ModifyDataEngineDescriptionRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDataEngineDescriptionOutcome>>();
    ModifyDataEngineDescriptionAsync(
    request,
    [prom](
        const DlcClient*,
        const ModifyDataEngineDescriptionRequest&,
        ModifyDataEngineDescriptionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::ModifyGovernEventRuleOutcome DlcClient::ModifyGovernEventRule(const ModifyGovernEventRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyGovernEventRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyGovernEventRuleResponse rsp = ModifyGovernEventRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyGovernEventRuleOutcome(rsp);
        else
            return ModifyGovernEventRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyGovernEventRuleOutcome(outcome.GetError());
    }
}

void DlcClient::ModifyGovernEventRuleAsync(const ModifyGovernEventRuleRequest& request, const ModifyGovernEventRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyGovernEventRuleRequest&;
    using Resp = ModifyGovernEventRuleResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyGovernEventRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::ModifyGovernEventRuleOutcomeCallable DlcClient::ModifyGovernEventRuleCallable(const ModifyGovernEventRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyGovernEventRuleOutcome>>();
    ModifyGovernEventRuleAsync(
    request,
    [prom](
        const DlcClient*,
        const ModifyGovernEventRuleRequest&,
        ModifyGovernEventRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::ModifySparkAppOutcome DlcClient::ModifySparkApp(const ModifySparkAppRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySparkApp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySparkAppResponse rsp = ModifySparkAppResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySparkAppOutcome(rsp);
        else
            return ModifySparkAppOutcome(o.GetError());
    }
    else
    {
        return ModifySparkAppOutcome(outcome.GetError());
    }
}

void DlcClient::ModifySparkAppAsync(const ModifySparkAppRequest& request, const ModifySparkAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifySparkAppRequest&;
    using Resp = ModifySparkAppResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySparkApp", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::ModifySparkAppOutcomeCallable DlcClient::ModifySparkAppCallable(const ModifySparkAppRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySparkAppOutcome>>();
    ModifySparkAppAsync(
    request,
    [prom](
        const DlcClient*,
        const ModifySparkAppRequest&,
        ModifySparkAppOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::ModifySparkAppBatchOutcome DlcClient::ModifySparkAppBatch(const ModifySparkAppBatchRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySparkAppBatch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySparkAppBatchResponse rsp = ModifySparkAppBatchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySparkAppBatchOutcome(rsp);
        else
            return ModifySparkAppBatchOutcome(o.GetError());
    }
    else
    {
        return ModifySparkAppBatchOutcome(outcome.GetError());
    }
}

void DlcClient::ModifySparkAppBatchAsync(const ModifySparkAppBatchRequest& request, const ModifySparkAppBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifySparkAppBatchRequest&;
    using Resp = ModifySparkAppBatchResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySparkAppBatch", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::ModifySparkAppBatchOutcomeCallable DlcClient::ModifySparkAppBatchCallable(const ModifySparkAppBatchRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySparkAppBatchOutcome>>();
    ModifySparkAppBatchAsync(
    request,
    [prom](
        const DlcClient*,
        const ModifySparkAppBatchRequest&,
        ModifySparkAppBatchOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::ModifyUserOutcome DlcClient::ModifyUser(const ModifyUserRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyUserResponse rsp = ModifyUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyUserOutcome(rsp);
        else
            return ModifyUserOutcome(o.GetError());
    }
    else
    {
        return ModifyUserOutcome(outcome.GetError());
    }
}

void DlcClient::ModifyUserAsync(const ModifyUserRequest& request, const ModifyUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyUserRequest&;
    using Resp = ModifyUserResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::ModifyUserOutcomeCallable DlcClient::ModifyUserCallable(const ModifyUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyUserOutcome>>();
    ModifyUserAsync(
    request,
    [prom](
        const DlcClient*,
        const ModifyUserRequest&,
        ModifyUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::ModifyUserTypeOutcome DlcClient::ModifyUserType(const ModifyUserTypeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyUserType");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyUserTypeResponse rsp = ModifyUserTypeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyUserTypeOutcome(rsp);
        else
            return ModifyUserTypeOutcome(o.GetError());
    }
    else
    {
        return ModifyUserTypeOutcome(outcome.GetError());
    }
}

void DlcClient::ModifyUserTypeAsync(const ModifyUserTypeRequest& request, const ModifyUserTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyUserTypeRequest&;
    using Resp = ModifyUserTypeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyUserType", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::ModifyUserTypeOutcomeCallable DlcClient::ModifyUserTypeCallable(const ModifyUserTypeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyUserTypeOutcome>>();
    ModifyUserTypeAsync(
    request,
    [prom](
        const DlcClient*,
        const ModifyUserTypeRequest&,
        ModifyUserTypeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::ModifyWorkGroupOutcome DlcClient::ModifyWorkGroup(const ModifyWorkGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyWorkGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyWorkGroupResponse rsp = ModifyWorkGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyWorkGroupOutcome(rsp);
        else
            return ModifyWorkGroupOutcome(o.GetError());
    }
    else
    {
        return ModifyWorkGroupOutcome(outcome.GetError());
    }
}

void DlcClient::ModifyWorkGroupAsync(const ModifyWorkGroupRequest& request, const ModifyWorkGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyWorkGroupRequest&;
    using Resp = ModifyWorkGroupResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyWorkGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::ModifyWorkGroupOutcomeCallable DlcClient::ModifyWorkGroupCallable(const ModifyWorkGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyWorkGroupOutcome>>();
    ModifyWorkGroupAsync(
    request,
    [prom](
        const DlcClient*,
        const ModifyWorkGroupRequest&,
        ModifyWorkGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::PauseStandardEngineResourceGroupsOutcome DlcClient::PauseStandardEngineResourceGroups(const PauseStandardEngineResourceGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "PauseStandardEngineResourceGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PauseStandardEngineResourceGroupsResponse rsp = PauseStandardEngineResourceGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PauseStandardEngineResourceGroupsOutcome(rsp);
        else
            return PauseStandardEngineResourceGroupsOutcome(o.GetError());
    }
    else
    {
        return PauseStandardEngineResourceGroupsOutcome(outcome.GetError());
    }
}

void DlcClient::PauseStandardEngineResourceGroupsAsync(const PauseStandardEngineResourceGroupsRequest& request, const PauseStandardEngineResourceGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const PauseStandardEngineResourceGroupsRequest&;
    using Resp = PauseStandardEngineResourceGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "PauseStandardEngineResourceGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::PauseStandardEngineResourceGroupsOutcomeCallable DlcClient::PauseStandardEngineResourceGroupsCallable(const PauseStandardEngineResourceGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<PauseStandardEngineResourceGroupsOutcome>>();
    PauseStandardEngineResourceGroupsAsync(
    request,
    [prom](
        const DlcClient*,
        const PauseStandardEngineResourceGroupsRequest&,
        PauseStandardEngineResourceGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::QueryInternalTableWarehouseOutcome DlcClient::QueryInternalTableWarehouse(const QueryInternalTableWarehouseRequest &request)
{
    auto outcome = MakeRequest(request, "QueryInternalTableWarehouse");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryInternalTableWarehouseResponse rsp = QueryInternalTableWarehouseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryInternalTableWarehouseOutcome(rsp);
        else
            return QueryInternalTableWarehouseOutcome(o.GetError());
    }
    else
    {
        return QueryInternalTableWarehouseOutcome(outcome.GetError());
    }
}

void DlcClient::QueryInternalTableWarehouseAsync(const QueryInternalTableWarehouseRequest& request, const QueryInternalTableWarehouseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryInternalTableWarehouseRequest&;
    using Resp = QueryInternalTableWarehouseResponse;

    DoRequestAsync<Req, Resp>(
        "QueryInternalTableWarehouse", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::QueryInternalTableWarehouseOutcomeCallable DlcClient::QueryInternalTableWarehouseCallable(const QueryInternalTableWarehouseRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryInternalTableWarehouseOutcome>>();
    QueryInternalTableWarehouseAsync(
    request,
    [prom](
        const DlcClient*,
        const QueryInternalTableWarehouseRequest&,
        QueryInternalTableWarehouseOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::QueryResultOutcome DlcClient::QueryResult(const QueryResultRequest &request)
{
    auto outcome = MakeRequest(request, "QueryResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryResultResponse rsp = QueryResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryResultOutcome(rsp);
        else
            return QueryResultOutcome(o.GetError());
    }
    else
    {
        return QueryResultOutcome(outcome.GetError());
    }
}

void DlcClient::QueryResultAsync(const QueryResultRequest& request, const QueryResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryResultRequest&;
    using Resp = QueryResultResponse;

    DoRequestAsync<Req, Resp>(
        "QueryResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::QueryResultOutcomeCallable DlcClient::QueryResultCallable(const QueryResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryResultOutcome>>();
    QueryResultAsync(
    request,
    [prom](
        const DlcClient*,
        const QueryResultRequest&,
        QueryResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::QueryTaskCostDetailOutcome DlcClient::QueryTaskCostDetail(const QueryTaskCostDetailRequest &request)
{
    auto outcome = MakeRequest(request, "QueryTaskCostDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryTaskCostDetailResponse rsp = QueryTaskCostDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryTaskCostDetailOutcome(rsp);
        else
            return QueryTaskCostDetailOutcome(o.GetError());
    }
    else
    {
        return QueryTaskCostDetailOutcome(outcome.GetError());
    }
}

void DlcClient::QueryTaskCostDetailAsync(const QueryTaskCostDetailRequest& request, const QueryTaskCostDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryTaskCostDetailRequest&;
    using Resp = QueryTaskCostDetailResponse;

    DoRequestAsync<Req, Resp>(
        "QueryTaskCostDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::QueryTaskCostDetailOutcomeCallable DlcClient::QueryTaskCostDetailCallable(const QueryTaskCostDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryTaskCostDetailOutcome>>();
    QueryTaskCostDetailAsync(
    request,
    [prom](
        const DlcClient*,
        const QueryTaskCostDetailRequest&,
        QueryTaskCostDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::RegisterThirdPartyAccessUserOutcome DlcClient::RegisterThirdPartyAccessUser(const RegisterThirdPartyAccessUserRequest &request)
{
    auto outcome = MakeRequest(request, "RegisterThirdPartyAccessUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RegisterThirdPartyAccessUserResponse rsp = RegisterThirdPartyAccessUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RegisterThirdPartyAccessUserOutcome(rsp);
        else
            return RegisterThirdPartyAccessUserOutcome(o.GetError());
    }
    else
    {
        return RegisterThirdPartyAccessUserOutcome(outcome.GetError());
    }
}

void DlcClient::RegisterThirdPartyAccessUserAsync(const RegisterThirdPartyAccessUserRequest& request, const RegisterThirdPartyAccessUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RegisterThirdPartyAccessUserRequest&;
    using Resp = RegisterThirdPartyAccessUserResponse;

    DoRequestAsync<Req, Resp>(
        "RegisterThirdPartyAccessUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::RegisterThirdPartyAccessUserOutcomeCallable DlcClient::RegisterThirdPartyAccessUserCallable(const RegisterThirdPartyAccessUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<RegisterThirdPartyAccessUserOutcome>>();
    RegisterThirdPartyAccessUserAsync(
    request,
    [prom](
        const DlcClient*,
        const RegisterThirdPartyAccessUserRequest&,
        RegisterThirdPartyAccessUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::RenewDataEngineOutcome DlcClient::RenewDataEngine(const RenewDataEngineRequest &request)
{
    auto outcome = MakeRequest(request, "RenewDataEngine");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RenewDataEngineResponse rsp = RenewDataEngineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RenewDataEngineOutcome(rsp);
        else
            return RenewDataEngineOutcome(o.GetError());
    }
    else
    {
        return RenewDataEngineOutcome(outcome.GetError());
    }
}

void DlcClient::RenewDataEngineAsync(const RenewDataEngineRequest& request, const RenewDataEngineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RenewDataEngineRequest&;
    using Resp = RenewDataEngineResponse;

    DoRequestAsync<Req, Resp>(
        "RenewDataEngine", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::RenewDataEngineOutcomeCallable DlcClient::RenewDataEngineCallable(const RenewDataEngineRequest &request)
{
    const auto prom = std::make_shared<std::promise<RenewDataEngineOutcome>>();
    RenewDataEngineAsync(
    request,
    [prom](
        const DlcClient*,
        const RenewDataEngineRequest&,
        RenewDataEngineOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::ReportHeartbeatMetaDataOutcome DlcClient::ReportHeartbeatMetaData(const ReportHeartbeatMetaDataRequest &request)
{
    auto outcome = MakeRequest(request, "ReportHeartbeatMetaData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReportHeartbeatMetaDataResponse rsp = ReportHeartbeatMetaDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReportHeartbeatMetaDataOutcome(rsp);
        else
            return ReportHeartbeatMetaDataOutcome(o.GetError());
    }
    else
    {
        return ReportHeartbeatMetaDataOutcome(outcome.GetError());
    }
}

void DlcClient::ReportHeartbeatMetaDataAsync(const ReportHeartbeatMetaDataRequest& request, const ReportHeartbeatMetaDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ReportHeartbeatMetaDataRequest&;
    using Resp = ReportHeartbeatMetaDataResponse;

    DoRequestAsync<Req, Resp>(
        "ReportHeartbeatMetaData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::ReportHeartbeatMetaDataOutcomeCallable DlcClient::ReportHeartbeatMetaDataCallable(const ReportHeartbeatMetaDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<ReportHeartbeatMetaDataOutcome>>();
    ReportHeartbeatMetaDataAsync(
    request,
    [prom](
        const DlcClient*,
        const ReportHeartbeatMetaDataRequest&,
        ReportHeartbeatMetaDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::RestartDataEngineOutcome DlcClient::RestartDataEngine(const RestartDataEngineRequest &request)
{
    auto outcome = MakeRequest(request, "RestartDataEngine");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RestartDataEngineResponse rsp = RestartDataEngineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RestartDataEngineOutcome(rsp);
        else
            return RestartDataEngineOutcome(o.GetError());
    }
    else
    {
        return RestartDataEngineOutcome(outcome.GetError());
    }
}

void DlcClient::RestartDataEngineAsync(const RestartDataEngineRequest& request, const RestartDataEngineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RestartDataEngineRequest&;
    using Resp = RestartDataEngineResponse;

    DoRequestAsync<Req, Resp>(
        "RestartDataEngine", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::RestartDataEngineOutcomeCallable DlcClient::RestartDataEngineCallable(const RestartDataEngineRequest &request)
{
    const auto prom = std::make_shared<std::promise<RestartDataEngineOutcome>>();
    RestartDataEngineAsync(
    request,
    [prom](
        const DlcClient*,
        const RestartDataEngineRequest&,
        RestartDataEngineOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::RevokeDLCCatalogAccessOutcome DlcClient::RevokeDLCCatalogAccess(const RevokeDLCCatalogAccessRequest &request)
{
    auto outcome = MakeRequest(request, "RevokeDLCCatalogAccess");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RevokeDLCCatalogAccessResponse rsp = RevokeDLCCatalogAccessResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RevokeDLCCatalogAccessOutcome(rsp);
        else
            return RevokeDLCCatalogAccessOutcome(o.GetError());
    }
    else
    {
        return RevokeDLCCatalogAccessOutcome(outcome.GetError());
    }
}

void DlcClient::RevokeDLCCatalogAccessAsync(const RevokeDLCCatalogAccessRequest& request, const RevokeDLCCatalogAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RevokeDLCCatalogAccessRequest&;
    using Resp = RevokeDLCCatalogAccessResponse;

    DoRequestAsync<Req, Resp>(
        "RevokeDLCCatalogAccess", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::RevokeDLCCatalogAccessOutcomeCallable DlcClient::RevokeDLCCatalogAccessCallable(const RevokeDLCCatalogAccessRequest &request)
{
    const auto prom = std::make_shared<std::promise<RevokeDLCCatalogAccessOutcome>>();
    RevokeDLCCatalogAccessAsync(
    request,
    [prom](
        const DlcClient*,
        const RevokeDLCCatalogAccessRequest&,
        RevokeDLCCatalogAccessOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::RollbackDataEngineImageOutcome DlcClient::RollbackDataEngineImage(const RollbackDataEngineImageRequest &request)
{
    auto outcome = MakeRequest(request, "RollbackDataEngineImage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RollbackDataEngineImageResponse rsp = RollbackDataEngineImageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RollbackDataEngineImageOutcome(rsp);
        else
            return RollbackDataEngineImageOutcome(o.GetError());
    }
    else
    {
        return RollbackDataEngineImageOutcome(outcome.GetError());
    }
}

void DlcClient::RollbackDataEngineImageAsync(const RollbackDataEngineImageRequest& request, const RollbackDataEngineImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RollbackDataEngineImageRequest&;
    using Resp = RollbackDataEngineImageResponse;

    DoRequestAsync<Req, Resp>(
        "RollbackDataEngineImage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::RollbackDataEngineImageOutcomeCallable DlcClient::RollbackDataEngineImageCallable(const RollbackDataEngineImageRequest &request)
{
    const auto prom = std::make_shared<std::promise<RollbackDataEngineImageOutcome>>();
    RollbackDataEngineImageAsync(
    request,
    [prom](
        const DlcClient*,
        const RollbackDataEngineImageRequest&,
        RollbackDataEngineImageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::SetOptimizerPolicyOutcome DlcClient::SetOptimizerPolicy(const SetOptimizerPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "SetOptimizerPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetOptimizerPolicyResponse rsp = SetOptimizerPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetOptimizerPolicyOutcome(rsp);
        else
            return SetOptimizerPolicyOutcome(o.GetError());
    }
    else
    {
        return SetOptimizerPolicyOutcome(outcome.GetError());
    }
}

void DlcClient::SetOptimizerPolicyAsync(const SetOptimizerPolicyRequest& request, const SetOptimizerPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SetOptimizerPolicyRequest&;
    using Resp = SetOptimizerPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "SetOptimizerPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::SetOptimizerPolicyOutcomeCallable DlcClient::SetOptimizerPolicyCallable(const SetOptimizerPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetOptimizerPolicyOutcome>>();
    SetOptimizerPolicyAsync(
    request,
    [prom](
        const DlcClient*,
        const SetOptimizerPolicyRequest&,
        SetOptimizerPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::SuspendResumeDataEngineOutcome DlcClient::SuspendResumeDataEngine(const SuspendResumeDataEngineRequest &request)
{
    auto outcome = MakeRequest(request, "SuspendResumeDataEngine");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SuspendResumeDataEngineResponse rsp = SuspendResumeDataEngineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SuspendResumeDataEngineOutcome(rsp);
        else
            return SuspendResumeDataEngineOutcome(o.GetError());
    }
    else
    {
        return SuspendResumeDataEngineOutcome(outcome.GetError());
    }
}

void DlcClient::SuspendResumeDataEngineAsync(const SuspendResumeDataEngineRequest& request, const SuspendResumeDataEngineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SuspendResumeDataEngineRequest&;
    using Resp = SuspendResumeDataEngineResponse;

    DoRequestAsync<Req, Resp>(
        "SuspendResumeDataEngine", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::SuspendResumeDataEngineOutcomeCallable DlcClient::SuspendResumeDataEngineCallable(const SuspendResumeDataEngineRequest &request)
{
    const auto prom = std::make_shared<std::promise<SuspendResumeDataEngineOutcome>>();
    SuspendResumeDataEngineAsync(
    request,
    [prom](
        const DlcClient*,
        const SuspendResumeDataEngineRequest&,
        SuspendResumeDataEngineOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::SwitchDataEngineOutcome DlcClient::SwitchDataEngine(const SwitchDataEngineRequest &request)
{
    auto outcome = MakeRequest(request, "SwitchDataEngine");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SwitchDataEngineResponse rsp = SwitchDataEngineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SwitchDataEngineOutcome(rsp);
        else
            return SwitchDataEngineOutcome(o.GetError());
    }
    else
    {
        return SwitchDataEngineOutcome(outcome.GetError());
    }
}

void DlcClient::SwitchDataEngineAsync(const SwitchDataEngineRequest& request, const SwitchDataEngineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SwitchDataEngineRequest&;
    using Resp = SwitchDataEngineResponse;

    DoRequestAsync<Req, Resp>(
        "SwitchDataEngine", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::SwitchDataEngineOutcomeCallable DlcClient::SwitchDataEngineCallable(const SwitchDataEngineRequest &request)
{
    const auto prom = std::make_shared<std::promise<SwitchDataEngineOutcome>>();
    SwitchDataEngineAsync(
    request,
    [prom](
        const DlcClient*,
        const SwitchDataEngineRequest&,
        SwitchDataEngineOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::SwitchDataEngineImageOutcome DlcClient::SwitchDataEngineImage(const SwitchDataEngineImageRequest &request)
{
    auto outcome = MakeRequest(request, "SwitchDataEngineImage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SwitchDataEngineImageResponse rsp = SwitchDataEngineImageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SwitchDataEngineImageOutcome(rsp);
        else
            return SwitchDataEngineImageOutcome(o.GetError());
    }
    else
    {
        return SwitchDataEngineImageOutcome(outcome.GetError());
    }
}

void DlcClient::SwitchDataEngineImageAsync(const SwitchDataEngineImageRequest& request, const SwitchDataEngineImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SwitchDataEngineImageRequest&;
    using Resp = SwitchDataEngineImageResponse;

    DoRequestAsync<Req, Resp>(
        "SwitchDataEngineImage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::SwitchDataEngineImageOutcomeCallable DlcClient::SwitchDataEngineImageCallable(const SwitchDataEngineImageRequest &request)
{
    const auto prom = std::make_shared<std::promise<SwitchDataEngineImageOutcome>>();
    SwitchDataEngineImageAsync(
    request,
    [prom](
        const DlcClient*,
        const SwitchDataEngineImageRequest&,
        SwitchDataEngineImageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::UnbindWorkGroupsFromUserOutcome DlcClient::UnbindWorkGroupsFromUser(const UnbindWorkGroupsFromUserRequest &request)
{
    auto outcome = MakeRequest(request, "UnbindWorkGroupsFromUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnbindWorkGroupsFromUserResponse rsp = UnbindWorkGroupsFromUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnbindWorkGroupsFromUserOutcome(rsp);
        else
            return UnbindWorkGroupsFromUserOutcome(o.GetError());
    }
    else
    {
        return UnbindWorkGroupsFromUserOutcome(outcome.GetError());
    }
}

void DlcClient::UnbindWorkGroupsFromUserAsync(const UnbindWorkGroupsFromUserRequest& request, const UnbindWorkGroupsFromUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UnbindWorkGroupsFromUserRequest&;
    using Resp = UnbindWorkGroupsFromUserResponse;

    DoRequestAsync<Req, Resp>(
        "UnbindWorkGroupsFromUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::UnbindWorkGroupsFromUserOutcomeCallable DlcClient::UnbindWorkGroupsFromUserCallable(const UnbindWorkGroupsFromUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<UnbindWorkGroupsFromUserOutcome>>();
    UnbindWorkGroupsFromUserAsync(
    request,
    [prom](
        const DlcClient*,
        const UnbindWorkGroupsFromUserRequest&,
        UnbindWorkGroupsFromUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::UnboundDatasourceHouseOutcome DlcClient::UnboundDatasourceHouse(const UnboundDatasourceHouseRequest &request)
{
    auto outcome = MakeRequest(request, "UnboundDatasourceHouse");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnboundDatasourceHouseResponse rsp = UnboundDatasourceHouseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnboundDatasourceHouseOutcome(rsp);
        else
            return UnboundDatasourceHouseOutcome(o.GetError());
    }
    else
    {
        return UnboundDatasourceHouseOutcome(outcome.GetError());
    }
}

void DlcClient::UnboundDatasourceHouseAsync(const UnboundDatasourceHouseRequest& request, const UnboundDatasourceHouseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UnboundDatasourceHouseRequest&;
    using Resp = UnboundDatasourceHouseResponse;

    DoRequestAsync<Req, Resp>(
        "UnboundDatasourceHouse", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::UnboundDatasourceHouseOutcomeCallable DlcClient::UnboundDatasourceHouseCallable(const UnboundDatasourceHouseRequest &request)
{
    const auto prom = std::make_shared<std::promise<UnboundDatasourceHouseOutcome>>();
    UnboundDatasourceHouseAsync(
    request,
    [prom](
        const DlcClient*,
        const UnboundDatasourceHouseRequest&,
        UnboundDatasourceHouseOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::UnlockMetaDataOutcome DlcClient::UnlockMetaData(const UnlockMetaDataRequest &request)
{
    auto outcome = MakeRequest(request, "UnlockMetaData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnlockMetaDataResponse rsp = UnlockMetaDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnlockMetaDataOutcome(rsp);
        else
            return UnlockMetaDataOutcome(o.GetError());
    }
    else
    {
        return UnlockMetaDataOutcome(outcome.GetError());
    }
}

void DlcClient::UnlockMetaDataAsync(const UnlockMetaDataRequest& request, const UnlockMetaDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UnlockMetaDataRequest&;
    using Resp = UnlockMetaDataResponse;

    DoRequestAsync<Req, Resp>(
        "UnlockMetaData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::UnlockMetaDataOutcomeCallable DlcClient::UnlockMetaDataCallable(const UnlockMetaDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<UnlockMetaDataOutcome>>();
    UnlockMetaDataAsync(
    request,
    [prom](
        const DlcClient*,
        const UnlockMetaDataRequest&,
        UnlockMetaDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::UpdateDataEngineOutcome DlcClient::UpdateDataEngine(const UpdateDataEngineRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateDataEngine");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateDataEngineResponse rsp = UpdateDataEngineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateDataEngineOutcome(rsp);
        else
            return UpdateDataEngineOutcome(o.GetError());
    }
    else
    {
        return UpdateDataEngineOutcome(outcome.GetError());
    }
}

void DlcClient::UpdateDataEngineAsync(const UpdateDataEngineRequest& request, const UpdateDataEngineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateDataEngineRequest&;
    using Resp = UpdateDataEngineResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateDataEngine", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::UpdateDataEngineOutcomeCallable DlcClient::UpdateDataEngineCallable(const UpdateDataEngineRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateDataEngineOutcome>>();
    UpdateDataEngineAsync(
    request,
    [prom](
        const DlcClient*,
        const UpdateDataEngineRequest&,
        UpdateDataEngineOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::UpdateDataEngineConfigOutcome DlcClient::UpdateDataEngineConfig(const UpdateDataEngineConfigRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateDataEngineConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateDataEngineConfigResponse rsp = UpdateDataEngineConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateDataEngineConfigOutcome(rsp);
        else
            return UpdateDataEngineConfigOutcome(o.GetError());
    }
    else
    {
        return UpdateDataEngineConfigOutcome(outcome.GetError());
    }
}

void DlcClient::UpdateDataEngineConfigAsync(const UpdateDataEngineConfigRequest& request, const UpdateDataEngineConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateDataEngineConfigRequest&;
    using Resp = UpdateDataEngineConfigResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateDataEngineConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::UpdateDataEngineConfigOutcomeCallable DlcClient::UpdateDataEngineConfigCallable(const UpdateDataEngineConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateDataEngineConfigOutcome>>();
    UpdateDataEngineConfigAsync(
    request,
    [prom](
        const DlcClient*,
        const UpdateDataEngineConfigRequest&,
        UpdateDataEngineConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::UpdateDataMaskStrategyOutcome DlcClient::UpdateDataMaskStrategy(const UpdateDataMaskStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateDataMaskStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateDataMaskStrategyResponse rsp = UpdateDataMaskStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateDataMaskStrategyOutcome(rsp);
        else
            return UpdateDataMaskStrategyOutcome(o.GetError());
    }
    else
    {
        return UpdateDataMaskStrategyOutcome(outcome.GetError());
    }
}

void DlcClient::UpdateDataMaskStrategyAsync(const UpdateDataMaskStrategyRequest& request, const UpdateDataMaskStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateDataMaskStrategyRequest&;
    using Resp = UpdateDataMaskStrategyResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateDataMaskStrategy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::UpdateDataMaskStrategyOutcomeCallable DlcClient::UpdateDataMaskStrategyCallable(const UpdateDataMaskStrategyRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateDataMaskStrategyOutcome>>();
    UpdateDataMaskStrategyAsync(
    request,
    [prom](
        const DlcClient*,
        const UpdateDataMaskStrategyRequest&,
        UpdateDataMaskStrategyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::UpdateEngineResourceGroupNetworkConfigInfoOutcome DlcClient::UpdateEngineResourceGroupNetworkConfigInfo(const UpdateEngineResourceGroupNetworkConfigInfoRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateEngineResourceGroupNetworkConfigInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateEngineResourceGroupNetworkConfigInfoResponse rsp = UpdateEngineResourceGroupNetworkConfigInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateEngineResourceGroupNetworkConfigInfoOutcome(rsp);
        else
            return UpdateEngineResourceGroupNetworkConfigInfoOutcome(o.GetError());
    }
    else
    {
        return UpdateEngineResourceGroupNetworkConfigInfoOutcome(outcome.GetError());
    }
}

void DlcClient::UpdateEngineResourceGroupNetworkConfigInfoAsync(const UpdateEngineResourceGroupNetworkConfigInfoRequest& request, const UpdateEngineResourceGroupNetworkConfigInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateEngineResourceGroupNetworkConfigInfoRequest&;
    using Resp = UpdateEngineResourceGroupNetworkConfigInfoResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateEngineResourceGroupNetworkConfigInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::UpdateEngineResourceGroupNetworkConfigInfoOutcomeCallable DlcClient::UpdateEngineResourceGroupNetworkConfigInfoCallable(const UpdateEngineResourceGroupNetworkConfigInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateEngineResourceGroupNetworkConfigInfoOutcome>>();
    UpdateEngineResourceGroupNetworkConfigInfoAsync(
    request,
    [prom](
        const DlcClient*,
        const UpdateEngineResourceGroupNetworkConfigInfoRequest&,
        UpdateEngineResourceGroupNetworkConfigInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::UpdateNetworkConnectionOutcome DlcClient::UpdateNetworkConnection(const UpdateNetworkConnectionRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateNetworkConnection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateNetworkConnectionResponse rsp = UpdateNetworkConnectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateNetworkConnectionOutcome(rsp);
        else
            return UpdateNetworkConnectionOutcome(o.GetError());
    }
    else
    {
        return UpdateNetworkConnectionOutcome(outcome.GetError());
    }
}

void DlcClient::UpdateNetworkConnectionAsync(const UpdateNetworkConnectionRequest& request, const UpdateNetworkConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateNetworkConnectionRequest&;
    using Resp = UpdateNetworkConnectionResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateNetworkConnection", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::UpdateNetworkConnectionOutcomeCallable DlcClient::UpdateNetworkConnectionCallable(const UpdateNetworkConnectionRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateNetworkConnectionOutcome>>();
    UpdateNetworkConnectionAsync(
    request,
    [prom](
        const DlcClient*,
        const UpdateNetworkConnectionRequest&,
        UpdateNetworkConnectionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::UpdateRowFilterOutcome DlcClient::UpdateRowFilter(const UpdateRowFilterRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateRowFilter");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateRowFilterResponse rsp = UpdateRowFilterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateRowFilterOutcome(rsp);
        else
            return UpdateRowFilterOutcome(o.GetError());
    }
    else
    {
        return UpdateRowFilterOutcome(outcome.GetError());
    }
}

void DlcClient::UpdateRowFilterAsync(const UpdateRowFilterRequest& request, const UpdateRowFilterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateRowFilterRequest&;
    using Resp = UpdateRowFilterResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateRowFilter", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::UpdateRowFilterOutcomeCallable DlcClient::UpdateRowFilterCallable(const UpdateRowFilterRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateRowFilterOutcome>>();
    UpdateRowFilterAsync(
    request,
    [prom](
        const DlcClient*,
        const UpdateRowFilterRequest&,
        UpdateRowFilterOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::UpdateStandardEngineResourceGroupBaseInfoOutcome DlcClient::UpdateStandardEngineResourceGroupBaseInfo(const UpdateStandardEngineResourceGroupBaseInfoRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateStandardEngineResourceGroupBaseInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateStandardEngineResourceGroupBaseInfoResponse rsp = UpdateStandardEngineResourceGroupBaseInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateStandardEngineResourceGroupBaseInfoOutcome(rsp);
        else
            return UpdateStandardEngineResourceGroupBaseInfoOutcome(o.GetError());
    }
    else
    {
        return UpdateStandardEngineResourceGroupBaseInfoOutcome(outcome.GetError());
    }
}

void DlcClient::UpdateStandardEngineResourceGroupBaseInfoAsync(const UpdateStandardEngineResourceGroupBaseInfoRequest& request, const UpdateStandardEngineResourceGroupBaseInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateStandardEngineResourceGroupBaseInfoRequest&;
    using Resp = UpdateStandardEngineResourceGroupBaseInfoResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateStandardEngineResourceGroupBaseInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::UpdateStandardEngineResourceGroupBaseInfoOutcomeCallable DlcClient::UpdateStandardEngineResourceGroupBaseInfoCallable(const UpdateStandardEngineResourceGroupBaseInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateStandardEngineResourceGroupBaseInfoOutcome>>();
    UpdateStandardEngineResourceGroupBaseInfoAsync(
    request,
    [prom](
        const DlcClient*,
        const UpdateStandardEngineResourceGroupBaseInfoRequest&,
        UpdateStandardEngineResourceGroupBaseInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::UpdateStandardEngineResourceGroupConfigInfoOutcome DlcClient::UpdateStandardEngineResourceGroupConfigInfo(const UpdateStandardEngineResourceGroupConfigInfoRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateStandardEngineResourceGroupConfigInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateStandardEngineResourceGroupConfigInfoResponse rsp = UpdateStandardEngineResourceGroupConfigInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateStandardEngineResourceGroupConfigInfoOutcome(rsp);
        else
            return UpdateStandardEngineResourceGroupConfigInfoOutcome(o.GetError());
    }
    else
    {
        return UpdateStandardEngineResourceGroupConfigInfoOutcome(outcome.GetError());
    }
}

void DlcClient::UpdateStandardEngineResourceGroupConfigInfoAsync(const UpdateStandardEngineResourceGroupConfigInfoRequest& request, const UpdateStandardEngineResourceGroupConfigInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateStandardEngineResourceGroupConfigInfoRequest&;
    using Resp = UpdateStandardEngineResourceGroupConfigInfoResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateStandardEngineResourceGroupConfigInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::UpdateStandardEngineResourceGroupConfigInfoOutcomeCallable DlcClient::UpdateStandardEngineResourceGroupConfigInfoCallable(const UpdateStandardEngineResourceGroupConfigInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateStandardEngineResourceGroupConfigInfoOutcome>>();
    UpdateStandardEngineResourceGroupConfigInfoAsync(
    request,
    [prom](
        const DlcClient*,
        const UpdateStandardEngineResourceGroupConfigInfoRequest&,
        UpdateStandardEngineResourceGroupConfigInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::UpdateStandardEngineResourceGroupResourceInfoOutcome DlcClient::UpdateStandardEngineResourceGroupResourceInfo(const UpdateStandardEngineResourceGroupResourceInfoRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateStandardEngineResourceGroupResourceInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateStandardEngineResourceGroupResourceInfoResponse rsp = UpdateStandardEngineResourceGroupResourceInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateStandardEngineResourceGroupResourceInfoOutcome(rsp);
        else
            return UpdateStandardEngineResourceGroupResourceInfoOutcome(o.GetError());
    }
    else
    {
        return UpdateStandardEngineResourceGroupResourceInfoOutcome(outcome.GetError());
    }
}

void DlcClient::UpdateStandardEngineResourceGroupResourceInfoAsync(const UpdateStandardEngineResourceGroupResourceInfoRequest& request, const UpdateStandardEngineResourceGroupResourceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateStandardEngineResourceGroupResourceInfoRequest&;
    using Resp = UpdateStandardEngineResourceGroupResourceInfoResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateStandardEngineResourceGroupResourceInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::UpdateStandardEngineResourceGroupResourceInfoOutcomeCallable DlcClient::UpdateStandardEngineResourceGroupResourceInfoCallable(const UpdateStandardEngineResourceGroupResourceInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateStandardEngineResourceGroupResourceInfoOutcome>>();
    UpdateStandardEngineResourceGroupResourceInfoAsync(
    request,
    [prom](
        const DlcClient*,
        const UpdateStandardEngineResourceGroupResourceInfoRequest&,
        UpdateStandardEngineResourceGroupResourceInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::UpdateUDFPolicyOutcome DlcClient::UpdateUDFPolicy(const UpdateUDFPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateUDFPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateUDFPolicyResponse rsp = UpdateUDFPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateUDFPolicyOutcome(rsp);
        else
            return UpdateUDFPolicyOutcome(o.GetError());
    }
    else
    {
        return UpdateUDFPolicyOutcome(outcome.GetError());
    }
}

void DlcClient::UpdateUDFPolicyAsync(const UpdateUDFPolicyRequest& request, const UpdateUDFPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateUDFPolicyRequest&;
    using Resp = UpdateUDFPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateUDFPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::UpdateUDFPolicyOutcomeCallable DlcClient::UpdateUDFPolicyCallable(const UpdateUDFPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateUDFPolicyOutcome>>();
    UpdateUDFPolicyAsync(
    request,
    [prom](
        const DlcClient*,
        const UpdateUDFPolicyRequest&,
        UpdateUDFPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::UpdateUserDataEngineConfigOutcome DlcClient::UpdateUserDataEngineConfig(const UpdateUserDataEngineConfigRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateUserDataEngineConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateUserDataEngineConfigResponse rsp = UpdateUserDataEngineConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateUserDataEngineConfigOutcome(rsp);
        else
            return UpdateUserDataEngineConfigOutcome(o.GetError());
    }
    else
    {
        return UpdateUserDataEngineConfigOutcome(outcome.GetError());
    }
}

void DlcClient::UpdateUserDataEngineConfigAsync(const UpdateUserDataEngineConfigRequest& request, const UpdateUserDataEngineConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateUserDataEngineConfigRequest&;
    using Resp = UpdateUserDataEngineConfigResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateUserDataEngineConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::UpdateUserDataEngineConfigOutcomeCallable DlcClient::UpdateUserDataEngineConfigCallable(const UpdateUserDataEngineConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateUserDataEngineConfigOutcome>>();
    UpdateUserDataEngineConfigAsync(
    request,
    [prom](
        const DlcClient*,
        const UpdateUserDataEngineConfigRequest&,
        UpdateUserDataEngineConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::UpgradeDataEngineImageOutcome DlcClient::UpgradeDataEngineImage(const UpgradeDataEngineImageRequest &request)
{
    auto outcome = MakeRequest(request, "UpgradeDataEngineImage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpgradeDataEngineImageResponse rsp = UpgradeDataEngineImageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpgradeDataEngineImageOutcome(rsp);
        else
            return UpgradeDataEngineImageOutcome(o.GetError());
    }
    else
    {
        return UpgradeDataEngineImageOutcome(outcome.GetError());
    }
}

void DlcClient::UpgradeDataEngineImageAsync(const UpgradeDataEngineImageRequest& request, const UpgradeDataEngineImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpgradeDataEngineImageRequest&;
    using Resp = UpgradeDataEngineImageResponse;

    DoRequestAsync<Req, Resp>(
        "UpgradeDataEngineImage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::UpgradeDataEngineImageOutcomeCallable DlcClient::UpgradeDataEngineImageCallable(const UpgradeDataEngineImageRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpgradeDataEngineImageOutcome>>();
    UpgradeDataEngineImageAsync(
    request,
    [prom](
        const DlcClient*,
        const UpgradeDataEngineImageRequest&,
        UpgradeDataEngineImageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


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

DlcClient::AddDeploymentOutcome DlcClient::AddDeployment(const AddDeploymentRequest &request)
{
    auto outcome = MakeRequest(request, "AddDeployment");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddDeploymentResponse rsp = AddDeploymentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddDeploymentOutcome(rsp);
        else
            return AddDeploymentOutcome(o.GetError());
    }
    else
    {
        return AddDeploymentOutcome(outcome.GetError());
    }
}

void DlcClient::AddDeploymentAsync(const AddDeploymentRequest& request, const AddDeploymentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddDeploymentRequest&;
    using Resp = AddDeploymentResponse;

    DoRequestAsync<Req, Resp>(
        "AddDeployment", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::AddDeploymentOutcomeCallable DlcClient::AddDeploymentCallable(const AddDeploymentRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddDeploymentOutcome>>();
    AddDeploymentAsync(
    request,
    [prom](
        const DlcClient*,
        const AddDeploymentRequest&,
        AddDeploymentOutcome resp,
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

DlcClient::AlterTableCommentOutcome DlcClient::AlterTableComment(const AlterTableCommentRequest &request)
{
    auto outcome = MakeRequest(request, "AlterTableComment");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AlterTableCommentResponse rsp = AlterTableCommentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AlterTableCommentOutcome(rsp);
        else
            return AlterTableCommentOutcome(o.GetError());
    }
    else
    {
        return AlterTableCommentOutcome(outcome.GetError());
    }
}

void DlcClient::AlterTableCommentAsync(const AlterTableCommentRequest& request, const AlterTableCommentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AlterTableCommentRequest&;
    using Resp = AlterTableCommentResponse;

    DoRequestAsync<Req, Resp>(
        "AlterTableComment", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::AlterTableCommentOutcomeCallable DlcClient::AlterTableCommentCallable(const AlterTableCommentRequest &request)
{
    const auto prom = std::make_shared<std::promise<AlterTableCommentOutcome>>();
    AlterTableCommentAsync(
    request,
    [prom](
        const DlcClient*,
        const AlterTableCommentRequest&,
        AlterTableCommentOutcome resp,
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

DlcClient::BindApiKeyOutcome DlcClient::BindApiKey(const BindApiKeyRequest &request)
{
    auto outcome = MakeRequest(request, "BindApiKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindApiKeyResponse rsp = BindApiKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindApiKeyOutcome(rsp);
        else
            return BindApiKeyOutcome(o.GetError());
    }
    else
    {
        return BindApiKeyOutcome(outcome.GetError());
    }
}

void DlcClient::BindApiKeyAsync(const BindApiKeyRequest& request, const BindApiKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BindApiKeyRequest&;
    using Resp = BindApiKeyResponse;

    DoRequestAsync<Req, Resp>(
        "BindApiKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::BindApiKeyOutcomeCallable DlcClient::BindApiKeyCallable(const BindApiKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<BindApiKeyOutcome>>();
    BindApiKeyAsync(
    request,
    [prom](
        const DlcClient*,
        const BindApiKeyRequest&,
        BindApiKeyOutcome resp,
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

DlcClient::CancelRayJobOutcome DlcClient::CancelRayJob(const CancelRayJobRequest &request)
{
    auto outcome = MakeRequest(request, "CancelRayJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CancelRayJobResponse rsp = CancelRayJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CancelRayJobOutcome(rsp);
        else
            return CancelRayJobOutcome(o.GetError());
    }
    else
    {
        return CancelRayJobOutcome(outcome.GetError());
    }
}

void DlcClient::CancelRayJobAsync(const CancelRayJobRequest& request, const CancelRayJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CancelRayJobRequest&;
    using Resp = CancelRayJobResponse;

    DoRequestAsync<Req, Resp>(
        "CancelRayJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CancelRayJobOutcomeCallable DlcClient::CancelRayJobCallable(const CancelRayJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<CancelRayJobOutcome>>();
    CancelRayJobAsync(
    request,
    [prom](
        const DlcClient*,
        const CancelRayJobRequest&,
        CancelRayJobOutcome resp,
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

DlcClient::CancelTrainingJobInstanceOutcome DlcClient::CancelTrainingJobInstance(const CancelTrainingJobInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CancelTrainingJobInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CancelTrainingJobInstanceResponse rsp = CancelTrainingJobInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CancelTrainingJobInstanceOutcome(rsp);
        else
            return CancelTrainingJobInstanceOutcome(o.GetError());
    }
    else
    {
        return CancelTrainingJobInstanceOutcome(outcome.GetError());
    }
}

void DlcClient::CancelTrainingJobInstanceAsync(const CancelTrainingJobInstanceRequest& request, const CancelTrainingJobInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CancelTrainingJobInstanceRequest&;
    using Resp = CancelTrainingJobInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "CancelTrainingJobInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CancelTrainingJobInstanceOutcomeCallable DlcClient::CancelTrainingJobInstanceCallable(const CancelTrainingJobInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CancelTrainingJobInstanceOutcome>>();
    CancelTrainingJobInstanceAsync(
    request,
    [prom](
        const DlcClient*,
        const CancelTrainingJobInstanceRequest&,
        CancelTrainingJobInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::CheckApiKeyNameOutcome DlcClient::CheckApiKeyName(const CheckApiKeyNameRequest &request)
{
    auto outcome = MakeRequest(request, "CheckApiKeyName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckApiKeyNameResponse rsp = CheckApiKeyNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckApiKeyNameOutcome(rsp);
        else
            return CheckApiKeyNameOutcome(o.GetError());
    }
    else
    {
        return CheckApiKeyNameOutcome(outcome.GetError());
    }
}

void DlcClient::CheckApiKeyNameAsync(const CheckApiKeyNameRequest& request, const CheckApiKeyNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CheckApiKeyNameRequest&;
    using Resp = CheckApiKeyNameResponse;

    DoRequestAsync<Req, Resp>(
        "CheckApiKeyName", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CheckApiKeyNameOutcomeCallable DlcClient::CheckApiKeyNameCallable(const CheckApiKeyNameRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckApiKeyNameOutcome>>();
    CheckApiKeyNameAsync(
    request,
    [prom](
        const DlcClient*,
        const CheckApiKeyNameRequest&,
        CheckApiKeyNameOutcome resp,
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

DlcClient::CheckJobSpecNameOutcome DlcClient::CheckJobSpecName(const CheckJobSpecNameRequest &request)
{
    auto outcome = MakeRequest(request, "CheckJobSpecName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckJobSpecNameResponse rsp = CheckJobSpecNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckJobSpecNameOutcome(rsp);
        else
            return CheckJobSpecNameOutcome(o.GetError());
    }
    else
    {
        return CheckJobSpecNameOutcome(outcome.GetError());
    }
}

void DlcClient::CheckJobSpecNameAsync(const CheckJobSpecNameRequest& request, const CheckJobSpecNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CheckJobSpecNameRequest&;
    using Resp = CheckJobSpecNameResponse;

    DoRequestAsync<Req, Resp>(
        "CheckJobSpecName", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CheckJobSpecNameOutcomeCallable DlcClient::CheckJobSpecNameCallable(const CheckJobSpecNameRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckJobSpecNameOutcome>>();
    CheckJobSpecNameAsync(
    request,
    [prom](
        const DlcClient*,
        const CheckJobSpecNameRequest&,
        CheckJobSpecNameOutcome resp,
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

DlcClient::CheckModelIdentifierOutcome DlcClient::CheckModelIdentifier(const CheckModelIdentifierRequest &request)
{
    auto outcome = MakeRequest(request, "CheckModelIdentifier");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckModelIdentifierResponse rsp = CheckModelIdentifierResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckModelIdentifierOutcome(rsp);
        else
            return CheckModelIdentifierOutcome(o.GetError());
    }
    else
    {
        return CheckModelIdentifierOutcome(outcome.GetError());
    }
}

void DlcClient::CheckModelIdentifierAsync(const CheckModelIdentifierRequest& request, const CheckModelIdentifierAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CheckModelIdentifierRequest&;
    using Resp = CheckModelIdentifierResponse;

    DoRequestAsync<Req, Resp>(
        "CheckModelIdentifier", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CheckModelIdentifierOutcomeCallable DlcClient::CheckModelIdentifierCallable(const CheckModelIdentifierRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckModelIdentifierOutcome>>();
    CheckModelIdentifierAsync(
    request,
    [prom](
        const DlcClient*,
        const CheckModelIdentifierRequest&,
        CheckModelIdentifierOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::CheckModifyPartitionOutcome DlcClient::CheckModifyPartition(const CheckModifyPartitionRequest &request)
{
    auto outcome = MakeRequest(request, "CheckModifyPartition");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckModifyPartitionResponse rsp = CheckModifyPartitionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckModifyPartitionOutcome(rsp);
        else
            return CheckModifyPartitionOutcome(o.GetError());
    }
    else
    {
        return CheckModifyPartitionOutcome(outcome.GetError());
    }
}

void DlcClient::CheckModifyPartitionAsync(const CheckModifyPartitionRequest& request, const CheckModifyPartitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CheckModifyPartitionRequest&;
    using Resp = CheckModifyPartitionResponse;

    DoRequestAsync<Req, Resp>(
        "CheckModifyPartition", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CheckModifyPartitionOutcomeCallable DlcClient::CheckModifyPartitionCallable(const CheckModifyPartitionRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckModifyPartitionOutcome>>();
    CheckModifyPartitionAsync(
    request,
    [prom](
        const DlcClient*,
        const CheckModifyPartitionRequest&,
        CheckModifyPartitionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::CheckQueueNameOutcome DlcClient::CheckQueueName(const CheckQueueNameRequest &request)
{
    auto outcome = MakeRequest(request, "CheckQueueName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckQueueNameResponse rsp = CheckQueueNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckQueueNameOutcome(rsp);
        else
            return CheckQueueNameOutcome(o.GetError());
    }
    else
    {
        return CheckQueueNameOutcome(outcome.GetError());
    }
}

void DlcClient::CheckQueueNameAsync(const CheckQueueNameRequest& request, const CheckQueueNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CheckQueueNameRequest&;
    using Resp = CheckQueueNameResponse;

    DoRequestAsync<Req, Resp>(
        "CheckQueueName", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CheckQueueNameOutcomeCallable DlcClient::CheckQueueNameCallable(const CheckQueueNameRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckQueueNameOutcome>>();
    CheckQueueNameAsync(
    request,
    [prom](
        const DlcClient*,
        const CheckQueueNameRequest&,
        CheckQueueNameOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::CheckResourceNameOutcome DlcClient::CheckResourceName(const CheckResourceNameRequest &request)
{
    auto outcome = MakeRequest(request, "CheckResourceName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckResourceNameResponse rsp = CheckResourceNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckResourceNameOutcome(rsp);
        else
            return CheckResourceNameOutcome(o.GetError());
    }
    else
    {
        return CheckResourceNameOutcome(outcome.GetError());
    }
}

void DlcClient::CheckResourceNameAsync(const CheckResourceNameRequest& request, const CheckResourceNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CheckResourceNameRequest&;
    using Resp = CheckResourceNameResponse;

    DoRequestAsync<Req, Resp>(
        "CheckResourceName", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CheckResourceNameOutcomeCallable DlcClient::CheckResourceNameCallable(const CheckResourceNameRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckResourceNameOutcome>>();
    CheckResourceNameAsync(
    request,
    [prom](
        const DlcClient*,
        const CheckResourceNameRequest&,
        CheckResourceNameOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::CheckServiceNameOutcome DlcClient::CheckServiceName(const CheckServiceNameRequest &request)
{
    auto outcome = MakeRequest(request, "CheckServiceName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckServiceNameResponse rsp = CheckServiceNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckServiceNameOutcome(rsp);
        else
            return CheckServiceNameOutcome(o.GetError());
    }
    else
    {
        return CheckServiceNameOutcome(outcome.GetError());
    }
}

void DlcClient::CheckServiceNameAsync(const CheckServiceNameRequest& request, const CheckServiceNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CheckServiceNameRequest&;
    using Resp = CheckServiceNameResponse;

    DoRequestAsync<Req, Resp>(
        "CheckServiceName", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CheckServiceNameOutcomeCallable DlcClient::CheckServiceNameCallable(const CheckServiceNameRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckServiceNameOutcome>>();
    CheckServiceNameAsync(
    request,
    [prom](
        const DlcClient*,
        const CheckServiceNameRequest&,
        CheckServiceNameOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::CopyJobSpecOutcome DlcClient::CopyJobSpec(const CopyJobSpecRequest &request)
{
    auto outcome = MakeRequest(request, "CopyJobSpec");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CopyJobSpecResponse rsp = CopyJobSpecResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CopyJobSpecOutcome(rsp);
        else
            return CopyJobSpecOutcome(o.GetError());
    }
    else
    {
        return CopyJobSpecOutcome(outcome.GetError());
    }
}

void DlcClient::CopyJobSpecAsync(const CopyJobSpecRequest& request, const CopyJobSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CopyJobSpecRequest&;
    using Resp = CopyJobSpecResponse;

    DoRequestAsync<Req, Resp>(
        "CopyJobSpec", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CopyJobSpecOutcomeCallable DlcClient::CopyJobSpecCallable(const CopyJobSpecRequest &request)
{
    const auto prom = std::make_shared<std::promise<CopyJobSpecOutcome>>();
    CopyJobSpecAsync(
    request,
    [prom](
        const DlcClient*,
        const CopyJobSpecRequest&,
        CopyJobSpecOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::CreateApiKeyOutcome DlcClient::CreateApiKey(const CreateApiKeyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateApiKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateApiKeyResponse rsp = CreateApiKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateApiKeyOutcome(rsp);
        else
            return CreateApiKeyOutcome(o.GetError());
    }
    else
    {
        return CreateApiKeyOutcome(outcome.GetError());
    }
}

void DlcClient::CreateApiKeyAsync(const CreateApiKeyRequest& request, const CreateApiKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateApiKeyRequest&;
    using Resp = CreateApiKeyResponse;

    DoRequestAsync<Req, Resp>(
        "CreateApiKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CreateApiKeyOutcomeCallable DlcClient::CreateApiKeyCallable(const CreateApiKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateApiKeyOutcome>>();
    CreateApiKeyAsync(
    request,
    [prom](
        const DlcClient*,
        const CreateApiKeyRequest&,
        CreateApiKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::CreateBenchmarkTaskOutcome DlcClient::CreateBenchmarkTask(const CreateBenchmarkTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBenchmarkTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBenchmarkTaskResponse rsp = CreateBenchmarkTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBenchmarkTaskOutcome(rsp);
        else
            return CreateBenchmarkTaskOutcome(o.GetError());
    }
    else
    {
        return CreateBenchmarkTaskOutcome(outcome.GetError());
    }
}

void DlcClient::CreateBenchmarkTaskAsync(const CreateBenchmarkTaskRequest& request, const CreateBenchmarkTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateBenchmarkTaskRequest&;
    using Resp = CreateBenchmarkTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateBenchmarkTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CreateBenchmarkTaskOutcomeCallable DlcClient::CreateBenchmarkTaskCallable(const CreateBenchmarkTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateBenchmarkTaskOutcome>>();
    CreateBenchmarkTaskAsync(
    request,
    [prom](
        const DlcClient*,
        const CreateBenchmarkTaskRequest&,
        CreateBenchmarkTaskOutcome resp,
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

DlcClient::CreateClusterGroupOutcome DlcClient::CreateClusterGroup(const CreateClusterGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateClusterGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateClusterGroupResponse rsp = CreateClusterGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateClusterGroupOutcome(rsp);
        else
            return CreateClusterGroupOutcome(o.GetError());
    }
    else
    {
        return CreateClusterGroupOutcome(outcome.GetError());
    }
}

void DlcClient::CreateClusterGroupAsync(const CreateClusterGroupRequest& request, const CreateClusterGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateClusterGroupRequest&;
    using Resp = CreateClusterGroupResponse;

    DoRequestAsync<Req, Resp>(
        "CreateClusterGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CreateClusterGroupOutcomeCallable DlcClient::CreateClusterGroupCallable(const CreateClusterGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateClusterGroupOutcome>>();
    CreateClusterGroupAsync(
    request,
    [prom](
        const DlcClient*,
        const CreateClusterGroupRequest&,
        CreateClusterGroupOutcome resp,
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

DlcClient::CreateInferenceModelOutcome DlcClient::CreateInferenceModel(const CreateInferenceModelRequest &request)
{
    auto outcome = MakeRequest(request, "CreateInferenceModel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateInferenceModelResponse rsp = CreateInferenceModelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateInferenceModelOutcome(rsp);
        else
            return CreateInferenceModelOutcome(o.GetError());
    }
    else
    {
        return CreateInferenceModelOutcome(outcome.GetError());
    }
}

void DlcClient::CreateInferenceModelAsync(const CreateInferenceModelRequest& request, const CreateInferenceModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateInferenceModelRequest&;
    using Resp = CreateInferenceModelResponse;

    DoRequestAsync<Req, Resp>(
        "CreateInferenceModel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CreateInferenceModelOutcomeCallable DlcClient::CreateInferenceModelCallable(const CreateInferenceModelRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateInferenceModelOutcome>>();
    CreateInferenceModelAsync(
    request,
    [prom](
        const DlcClient*,
        const CreateInferenceModelRequest&,
        CreateInferenceModelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::CreateInferenceServiceOutcome DlcClient::CreateInferenceService(const CreateInferenceServiceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateInferenceService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateInferenceServiceResponse rsp = CreateInferenceServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateInferenceServiceOutcome(rsp);
        else
            return CreateInferenceServiceOutcome(o.GetError());
    }
    else
    {
        return CreateInferenceServiceOutcome(outcome.GetError());
    }
}

void DlcClient::CreateInferenceServiceAsync(const CreateInferenceServiceRequest& request, const CreateInferenceServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateInferenceServiceRequest&;
    using Resp = CreateInferenceServiceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateInferenceService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CreateInferenceServiceOutcomeCallable DlcClient::CreateInferenceServiceCallable(const CreateInferenceServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateInferenceServiceOutcome>>();
    CreateInferenceServiceAsync(
    request,
    [prom](
        const DlcClient*,
        const CreateInferenceServiceRequest&,
        CreateInferenceServiceOutcome resp,
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

DlcClient::CreateJobSpecOutcome DlcClient::CreateJobSpec(const CreateJobSpecRequest &request)
{
    auto outcome = MakeRequest(request, "CreateJobSpec");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateJobSpecResponse rsp = CreateJobSpecResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateJobSpecOutcome(rsp);
        else
            return CreateJobSpecOutcome(o.GetError());
    }
    else
    {
        return CreateJobSpecOutcome(outcome.GetError());
    }
}

void DlcClient::CreateJobSpecAsync(const CreateJobSpecRequest& request, const CreateJobSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateJobSpecRequest&;
    using Resp = CreateJobSpecResponse;

    DoRequestAsync<Req, Resp>(
        "CreateJobSpec", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CreateJobSpecOutcomeCallable DlcClient::CreateJobSpecCallable(const CreateJobSpecRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateJobSpecOutcome>>();
    CreateJobSpecAsync(
    request,
    [prom](
        const DlcClient*,
        const CreateJobSpecRequest&,
        CreateJobSpecOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::CreateLabOutcome DlcClient::CreateLab(const CreateLabRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLab");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLabResponse rsp = CreateLabResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLabOutcome(rsp);
        else
            return CreateLabOutcome(o.GetError());
    }
    else
    {
        return CreateLabOutcome(outcome.GetError());
    }
}

void DlcClient::CreateLabAsync(const CreateLabRequest& request, const CreateLabAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateLabRequest&;
    using Resp = CreateLabResponse;

    DoRequestAsync<Req, Resp>(
        "CreateLab", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CreateLabOutcomeCallable DlcClient::CreateLabCallable(const CreateLabRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateLabOutcome>>();
    CreateLabAsync(
    request,
    [prom](
        const DlcClient*,
        const CreateLabRequest&,
        CreateLabOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::CreateMetaDatabaseOutcome DlcClient::CreateMetaDatabase(const CreateMetaDatabaseRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMetaDatabase");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMetaDatabaseResponse rsp = CreateMetaDatabaseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMetaDatabaseOutcome(rsp);
        else
            return CreateMetaDatabaseOutcome(o.GetError());
    }
    else
    {
        return CreateMetaDatabaseOutcome(outcome.GetError());
    }
}

void DlcClient::CreateMetaDatabaseAsync(const CreateMetaDatabaseRequest& request, const CreateMetaDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateMetaDatabaseRequest&;
    using Resp = CreateMetaDatabaseResponse;

    DoRequestAsync<Req, Resp>(
        "CreateMetaDatabase", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CreateMetaDatabaseOutcomeCallable DlcClient::CreateMetaDatabaseCallable(const CreateMetaDatabaseRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateMetaDatabaseOutcome>>();
    CreateMetaDatabaseAsync(
    request,
    [prom](
        const DlcClient*,
        const CreateMetaDatabaseRequest&,
        CreateMetaDatabaseOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::CreateMlflowServerOutcome DlcClient::CreateMlflowServer(const CreateMlflowServerRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMlflowServer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMlflowServerResponse rsp = CreateMlflowServerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMlflowServerOutcome(rsp);
        else
            return CreateMlflowServerOutcome(o.GetError());
    }
    else
    {
        return CreateMlflowServerOutcome(outcome.GetError());
    }
}

void DlcClient::CreateMlflowServerAsync(const CreateMlflowServerRequest& request, const CreateMlflowServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateMlflowServerRequest&;
    using Resp = CreateMlflowServerResponse;

    DoRequestAsync<Req, Resp>(
        "CreateMlflowServer", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CreateMlflowServerOutcomeCallable DlcClient::CreateMlflowServerCallable(const CreateMlflowServerRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateMlflowServerOutcome>>();
    CreateMlflowServerAsync(
    request,
    [prom](
        const DlcClient*,
        const CreateMlflowServerRequest&,
        CreateMlflowServerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::CreateModelVersionOutcome DlcClient::CreateModelVersion(const CreateModelVersionRequest &request)
{
    auto outcome = MakeRequest(request, "CreateModelVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateModelVersionResponse rsp = CreateModelVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateModelVersionOutcome(rsp);
        else
            return CreateModelVersionOutcome(o.GetError());
    }
    else
    {
        return CreateModelVersionOutcome(outcome.GetError());
    }
}

void DlcClient::CreateModelVersionAsync(const CreateModelVersionRequest& request, const CreateModelVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateModelVersionRequest&;
    using Resp = CreateModelVersionResponse;

    DoRequestAsync<Req, Resp>(
        "CreateModelVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CreateModelVersionOutcomeCallable DlcClient::CreateModelVersionCallable(const CreateModelVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateModelVersionOutcome>>();
    CreateModelVersionAsync(
    request,
    [prom](
        const DlcClient*,
        const CreateModelVersionRequest&,
        CreateModelVersionOutcome resp,
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

DlcClient::CreatePartitionOutcome DlcClient::CreatePartition(const CreatePartitionRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePartition");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePartitionResponse rsp = CreatePartitionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePartitionOutcome(rsp);
        else
            return CreatePartitionOutcome(o.GetError());
    }
    else
    {
        return CreatePartitionOutcome(outcome.GetError());
    }
}

void DlcClient::CreatePartitionAsync(const CreatePartitionRequest& request, const CreatePartitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreatePartitionRequest&;
    using Resp = CreatePartitionResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePartition", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CreatePartitionOutcomeCallable DlcClient::CreatePartitionCallable(const CreatePartitionRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePartitionOutcome>>();
    CreatePartitionAsync(
    request,
    [prom](
        const DlcClient*,
        const CreatePartitionRequest&,
        CreatePartitionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::CreatePartitionQueueOutcome DlcClient::CreatePartitionQueue(const CreatePartitionQueueRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePartitionQueue");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePartitionQueueResponse rsp = CreatePartitionQueueResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePartitionQueueOutcome(rsp);
        else
            return CreatePartitionQueueOutcome(o.GetError());
    }
    else
    {
        return CreatePartitionQueueOutcome(outcome.GetError());
    }
}

void DlcClient::CreatePartitionQueueAsync(const CreatePartitionQueueRequest& request, const CreatePartitionQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreatePartitionQueueRequest&;
    using Resp = CreatePartitionQueueResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePartitionQueue", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CreatePartitionQueueOutcomeCallable DlcClient::CreatePartitionQueueCallable(const CreatePartitionQueueRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePartitionQueueOutcome>>();
    CreatePartitionQueueAsync(
    request,
    [prom](
        const DlcClient*,
        const CreatePartitionQueueRequest&,
        CreatePartitionQueueOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::CreateRayClusterOutcome DlcClient::CreateRayCluster(const CreateRayClusterRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRayCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRayClusterResponse rsp = CreateRayClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRayClusterOutcome(rsp);
        else
            return CreateRayClusterOutcome(o.GetError());
    }
    else
    {
        return CreateRayClusterOutcome(outcome.GetError());
    }
}

void DlcClient::CreateRayClusterAsync(const CreateRayClusterRequest& request, const CreateRayClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateRayClusterRequest&;
    using Resp = CreateRayClusterResponse;

    DoRequestAsync<Req, Resp>(
        "CreateRayCluster", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CreateRayClusterOutcomeCallable DlcClient::CreateRayClusterCallable(const CreateRayClusterRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateRayClusterOutcome>>();
    CreateRayClusterAsync(
    request,
    [prom](
        const DlcClient*,
        const CreateRayClusterRequest&,
        CreateRayClusterOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::CreateResourceConfigOutcome DlcClient::CreateResourceConfig(const CreateResourceConfigRequest &request)
{
    auto outcome = MakeRequest(request, "CreateResourceConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateResourceConfigResponse rsp = CreateResourceConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateResourceConfigOutcome(rsp);
        else
            return CreateResourceConfigOutcome(o.GetError());
    }
    else
    {
        return CreateResourceConfigOutcome(outcome.GetError());
    }
}

void DlcClient::CreateResourceConfigAsync(const CreateResourceConfigRequest& request, const CreateResourceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateResourceConfigRequest&;
    using Resp = CreateResourceConfigResponse;

    DoRequestAsync<Req, Resp>(
        "CreateResourceConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CreateResourceConfigOutcomeCallable DlcClient::CreateResourceConfigCallable(const CreateResourceConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateResourceConfigOutcome>>();
    CreateResourceConfigAsync(
    request,
    [prom](
        const DlcClient*,
        const CreateResourceConfigRequest&,
        CreateResourceConfigOutcome resp,
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

DlcClient::CreateSparkAppForTDLCOutcome DlcClient::CreateSparkAppForTDLC(const CreateSparkAppForTDLCRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSparkAppForTDLC");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSparkAppForTDLCResponse rsp = CreateSparkAppForTDLCResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSparkAppForTDLCOutcome(rsp);
        else
            return CreateSparkAppForTDLCOutcome(o.GetError());
    }
    else
    {
        return CreateSparkAppForTDLCOutcome(outcome.GetError());
    }
}

void DlcClient::CreateSparkAppForTDLCAsync(const CreateSparkAppForTDLCRequest& request, const CreateSparkAppForTDLCAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSparkAppForTDLCRequest&;
    using Resp = CreateSparkAppForTDLCResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSparkAppForTDLC", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CreateSparkAppForTDLCOutcomeCallable DlcClient::CreateSparkAppForTDLCCallable(const CreateSparkAppForTDLCRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSparkAppForTDLCOutcome>>();
    CreateSparkAppForTDLCAsync(
    request,
    [prom](
        const DlcClient*,
        const CreateSparkAppForTDLCRequest&,
        CreateSparkAppForTDLCOutcome resp,
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

DlcClient::CreateTrainingJobInstanceOutcome DlcClient::CreateTrainingJobInstance(const CreateTrainingJobInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTrainingJobInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTrainingJobInstanceResponse rsp = CreateTrainingJobInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTrainingJobInstanceOutcome(rsp);
        else
            return CreateTrainingJobInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateTrainingJobInstanceOutcome(outcome.GetError());
    }
}

void DlcClient::CreateTrainingJobInstanceAsync(const CreateTrainingJobInstanceRequest& request, const CreateTrainingJobInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTrainingJobInstanceRequest&;
    using Resp = CreateTrainingJobInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTrainingJobInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CreateTrainingJobInstanceOutcomeCallable DlcClient::CreateTrainingJobInstanceCallable(const CreateTrainingJobInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTrainingJobInstanceOutcome>>();
    CreateTrainingJobInstanceAsync(
    request,
    [prom](
        const DlcClient*,
        const CreateTrainingJobInstanceRequest&,
        CreateTrainingJobInstanceOutcome resp,
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

DlcClient::CreateUserRoleOutcome DlcClient::CreateUserRole(const CreateUserRoleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateUserRole");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateUserRoleResponse rsp = CreateUserRoleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateUserRoleOutcome(rsp);
        else
            return CreateUserRoleOutcome(o.GetError());
    }
    else
    {
        return CreateUserRoleOutcome(outcome.GetError());
    }
}

void DlcClient::CreateUserRoleAsync(const CreateUserRoleRequest& request, const CreateUserRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateUserRoleRequest&;
    using Resp = CreateUserRoleResponse;

    DoRequestAsync<Req, Resp>(
        "CreateUserRole", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CreateUserRoleOutcomeCallable DlcClient::CreateUserRoleCallable(const CreateUserRoleRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateUserRoleOutcome>>();
    CreateUserRoleAsync(
    request,
    [prom](
        const DlcClient*,
        const CreateUserRoleRequest&,
        CreateUserRoleOutcome resp,
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

DlcClient::DeleteApiKeyOutcome DlcClient::DeleteApiKey(const DeleteApiKeyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteApiKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteApiKeyResponse rsp = DeleteApiKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteApiKeyOutcome(rsp);
        else
            return DeleteApiKeyOutcome(o.GetError());
    }
    else
    {
        return DeleteApiKeyOutcome(outcome.GetError());
    }
}

void DlcClient::DeleteApiKeyAsync(const DeleteApiKeyRequest& request, const DeleteApiKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteApiKeyRequest&;
    using Resp = DeleteApiKeyResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteApiKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DeleteApiKeyOutcomeCallable DlcClient::DeleteApiKeyCallable(const DeleteApiKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteApiKeyOutcome>>();
    DeleteApiKeyAsync(
    request,
    [prom](
        const DlcClient*,
        const DeleteApiKeyRequest&,
        DeleteApiKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DeleteBenchmarkTaskOutcome DlcClient::DeleteBenchmarkTask(const DeleteBenchmarkTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteBenchmarkTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteBenchmarkTaskResponse rsp = DeleteBenchmarkTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteBenchmarkTaskOutcome(rsp);
        else
            return DeleteBenchmarkTaskOutcome(o.GetError());
    }
    else
    {
        return DeleteBenchmarkTaskOutcome(outcome.GetError());
    }
}

void DlcClient::DeleteBenchmarkTaskAsync(const DeleteBenchmarkTaskRequest& request, const DeleteBenchmarkTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteBenchmarkTaskRequest&;
    using Resp = DeleteBenchmarkTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteBenchmarkTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DeleteBenchmarkTaskOutcomeCallable DlcClient::DeleteBenchmarkTaskCallable(const DeleteBenchmarkTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteBenchmarkTaskOutcome>>();
    DeleteBenchmarkTaskAsync(
    request,
    [prom](
        const DlcClient*,
        const DeleteBenchmarkTaskRequest&,
        DeleteBenchmarkTaskOutcome resp,
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

DlcClient::DeleteClusterGroupOutcome DlcClient::DeleteClusterGroup(const DeleteClusterGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteClusterGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteClusterGroupResponse rsp = DeleteClusterGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteClusterGroupOutcome(rsp);
        else
            return DeleteClusterGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteClusterGroupOutcome(outcome.GetError());
    }
}

void DlcClient::DeleteClusterGroupAsync(const DeleteClusterGroupRequest& request, const DeleteClusterGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteClusterGroupRequest&;
    using Resp = DeleteClusterGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteClusterGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DeleteClusterGroupOutcomeCallable DlcClient::DeleteClusterGroupCallable(const DeleteClusterGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteClusterGroupOutcome>>();
    DeleteClusterGroupAsync(
    request,
    [prom](
        const DlcClient*,
        const DeleteClusterGroupRequest&,
        DeleteClusterGroupOutcome resp,
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

DlcClient::DeleteDeploymentOutcome DlcClient::DeleteDeployment(const DeleteDeploymentRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDeployment");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDeploymentResponse rsp = DeleteDeploymentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDeploymentOutcome(rsp);
        else
            return DeleteDeploymentOutcome(o.GetError());
    }
    else
    {
        return DeleteDeploymentOutcome(outcome.GetError());
    }
}

void DlcClient::DeleteDeploymentAsync(const DeleteDeploymentRequest& request, const DeleteDeploymentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDeploymentRequest&;
    using Resp = DeleteDeploymentResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDeployment", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DeleteDeploymentOutcomeCallable DlcClient::DeleteDeploymentCallable(const DeleteDeploymentRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDeploymentOutcome>>();
    DeleteDeploymentAsync(
    request,
    [prom](
        const DlcClient*,
        const DeleteDeploymentRequest&,
        DeleteDeploymentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DeleteInferenceServiceOutcome DlcClient::DeleteInferenceService(const DeleteInferenceServiceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteInferenceService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteInferenceServiceResponse rsp = DeleteInferenceServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteInferenceServiceOutcome(rsp);
        else
            return DeleteInferenceServiceOutcome(o.GetError());
    }
    else
    {
        return DeleteInferenceServiceOutcome(outcome.GetError());
    }
}

void DlcClient::DeleteInferenceServiceAsync(const DeleteInferenceServiceRequest& request, const DeleteInferenceServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteInferenceServiceRequest&;
    using Resp = DeleteInferenceServiceResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteInferenceService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DeleteInferenceServiceOutcomeCallable DlcClient::DeleteInferenceServiceCallable(const DeleteInferenceServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteInferenceServiceOutcome>>();
    DeleteInferenceServiceAsync(
    request,
    [prom](
        const DlcClient*,
        const DeleteInferenceServiceRequest&,
        DeleteInferenceServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DeleteJobSpecOutcome DlcClient::DeleteJobSpec(const DeleteJobSpecRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteJobSpec");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteJobSpecResponse rsp = DeleteJobSpecResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteJobSpecOutcome(rsp);
        else
            return DeleteJobSpecOutcome(o.GetError());
    }
    else
    {
        return DeleteJobSpecOutcome(outcome.GetError());
    }
}

void DlcClient::DeleteJobSpecAsync(const DeleteJobSpecRequest& request, const DeleteJobSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteJobSpecRequest&;
    using Resp = DeleteJobSpecResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteJobSpec", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DeleteJobSpecOutcomeCallable DlcClient::DeleteJobSpecCallable(const DeleteJobSpecRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteJobSpecOutcome>>();
    DeleteJobSpecAsync(
    request,
    [prom](
        const DlcClient*,
        const DeleteJobSpecRequest&,
        DeleteJobSpecOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DeleteLabOutcome DlcClient::DeleteLab(const DeleteLabRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLab");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLabResponse rsp = DeleteLabResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLabOutcome(rsp);
        else
            return DeleteLabOutcome(o.GetError());
    }
    else
    {
        return DeleteLabOutcome(outcome.GetError());
    }
}

void DlcClient::DeleteLabAsync(const DeleteLabRequest& request, const DeleteLabAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteLabRequest&;
    using Resp = DeleteLabResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteLab", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DeleteLabOutcomeCallable DlcClient::DeleteLabCallable(const DeleteLabRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteLabOutcome>>();
    DeleteLabAsync(
    request,
    [prom](
        const DlcClient*,
        const DeleteLabRequest&,
        DeleteLabOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DeleteMetaDatabaseOutcome DlcClient::DeleteMetaDatabase(const DeleteMetaDatabaseRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMetaDatabase");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMetaDatabaseResponse rsp = DeleteMetaDatabaseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMetaDatabaseOutcome(rsp);
        else
            return DeleteMetaDatabaseOutcome(o.GetError());
    }
    else
    {
        return DeleteMetaDatabaseOutcome(outcome.GetError());
    }
}

void DlcClient::DeleteMetaDatabaseAsync(const DeleteMetaDatabaseRequest& request, const DeleteMetaDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteMetaDatabaseRequest&;
    using Resp = DeleteMetaDatabaseResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteMetaDatabase", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DeleteMetaDatabaseOutcomeCallable DlcClient::DeleteMetaDatabaseCallable(const DeleteMetaDatabaseRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteMetaDatabaseOutcome>>();
    DeleteMetaDatabaseAsync(
    request,
    [prom](
        const DlcClient*,
        const DeleteMetaDatabaseRequest&,
        DeleteMetaDatabaseOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DeleteMlflowServerOutcome DlcClient::DeleteMlflowServer(const DeleteMlflowServerRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMlflowServer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMlflowServerResponse rsp = DeleteMlflowServerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMlflowServerOutcome(rsp);
        else
            return DeleteMlflowServerOutcome(o.GetError());
    }
    else
    {
        return DeleteMlflowServerOutcome(outcome.GetError());
    }
}

void DlcClient::DeleteMlflowServerAsync(const DeleteMlflowServerRequest& request, const DeleteMlflowServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteMlflowServerRequest&;
    using Resp = DeleteMlflowServerResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteMlflowServer", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DeleteMlflowServerOutcomeCallable DlcClient::DeleteMlflowServerCallable(const DeleteMlflowServerRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteMlflowServerOutcome>>();
    DeleteMlflowServerAsync(
    request,
    [prom](
        const DlcClient*,
        const DeleteMlflowServerRequest&,
        DeleteMlflowServerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DeleteModelOutcome DlcClient::DeleteModel(const DeleteModelRequest &request)
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

void DlcClient::DeleteModelAsync(const DeleteModelRequest& request, const DeleteModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

DlcClient::DeleteModelOutcomeCallable DlcClient::DeleteModelCallable(const DeleteModelRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteModelOutcome>>();
    DeleteModelAsync(
    request,
    [prom](
        const DlcClient*,
        const DeleteModelRequest&,
        DeleteModelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DeleteModelVersionOutcome DlcClient::DeleteModelVersion(const DeleteModelVersionRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteModelVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteModelVersionResponse rsp = DeleteModelVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteModelVersionOutcome(rsp);
        else
            return DeleteModelVersionOutcome(o.GetError());
    }
    else
    {
        return DeleteModelVersionOutcome(outcome.GetError());
    }
}

void DlcClient::DeleteModelVersionAsync(const DeleteModelVersionRequest& request, const DeleteModelVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteModelVersionRequest&;
    using Resp = DeleteModelVersionResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteModelVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DeleteModelVersionOutcomeCallable DlcClient::DeleteModelVersionCallable(const DeleteModelVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteModelVersionOutcome>>();
    DeleteModelVersionAsync(
    request,
    [prom](
        const DlcClient*,
        const DeleteModelVersionRequest&,
        DeleteModelVersionOutcome resp,
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

DlcClient::DeletePartitionQueueOutcome DlcClient::DeletePartitionQueue(const DeletePartitionQueueRequest &request)
{
    auto outcome = MakeRequest(request, "DeletePartitionQueue");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeletePartitionQueueResponse rsp = DeletePartitionQueueResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeletePartitionQueueOutcome(rsp);
        else
            return DeletePartitionQueueOutcome(o.GetError());
    }
    else
    {
        return DeletePartitionQueueOutcome(outcome.GetError());
    }
}

void DlcClient::DeletePartitionQueueAsync(const DeletePartitionQueueRequest& request, const DeletePartitionQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeletePartitionQueueRequest&;
    using Resp = DeletePartitionQueueResponse;

    DoRequestAsync<Req, Resp>(
        "DeletePartitionQueue", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DeletePartitionQueueOutcomeCallable DlcClient::DeletePartitionQueueCallable(const DeletePartitionQueueRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeletePartitionQueueOutcome>>();
    DeletePartitionQueueAsync(
    request,
    [prom](
        const DlcClient*,
        const DeletePartitionQueueRequest&,
        DeletePartitionQueueOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DeleteRayClusterOutcome DlcClient::DeleteRayCluster(const DeleteRayClusterRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRayCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRayClusterResponse rsp = DeleteRayClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRayClusterOutcome(rsp);
        else
            return DeleteRayClusterOutcome(o.GetError());
    }
    else
    {
        return DeleteRayClusterOutcome(outcome.GetError());
    }
}

void DlcClient::DeleteRayClusterAsync(const DeleteRayClusterRequest& request, const DeleteRayClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteRayClusterRequest&;
    using Resp = DeleteRayClusterResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRayCluster", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DeleteRayClusterOutcomeCallable DlcClient::DeleteRayClusterCallable(const DeleteRayClusterRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRayClusterOutcome>>();
    DeleteRayClusterAsync(
    request,
    [prom](
        const DlcClient*,
        const DeleteRayClusterRequest&,
        DeleteRayClusterOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DeleteRayJobOutcome DlcClient::DeleteRayJob(const DeleteRayJobRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRayJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRayJobResponse rsp = DeleteRayJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRayJobOutcome(rsp);
        else
            return DeleteRayJobOutcome(o.GetError());
    }
    else
    {
        return DeleteRayJobOutcome(outcome.GetError());
    }
}

void DlcClient::DeleteRayJobAsync(const DeleteRayJobRequest& request, const DeleteRayJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteRayJobRequest&;
    using Resp = DeleteRayJobResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRayJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DeleteRayJobOutcomeCallable DlcClient::DeleteRayJobCallable(const DeleteRayJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRayJobOutcome>>();
    DeleteRayJobAsync(
    request,
    [prom](
        const DlcClient*,
        const DeleteRayJobRequest&,
        DeleteRayJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DeleteResourceConfigOutcome DlcClient::DeleteResourceConfig(const DeleteResourceConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteResourceConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteResourceConfigResponse rsp = DeleteResourceConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteResourceConfigOutcome(rsp);
        else
            return DeleteResourceConfigOutcome(o.GetError());
    }
    else
    {
        return DeleteResourceConfigOutcome(outcome.GetError());
    }
}

void DlcClient::DeleteResourceConfigAsync(const DeleteResourceConfigRequest& request, const DeleteResourceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteResourceConfigRequest&;
    using Resp = DeleteResourceConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteResourceConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DeleteResourceConfigOutcomeCallable DlcClient::DeleteResourceConfigCallable(const DeleteResourceConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteResourceConfigOutcome>>();
    DeleteResourceConfigAsync(
    request,
    [prom](
        const DlcClient*,
        const DeleteResourceConfigRequest&,
        DeleteResourceConfigOutcome resp,
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

DlcClient::DeleteTrainingJobInstanceOutcome DlcClient::DeleteTrainingJobInstance(const DeleteTrainingJobInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTrainingJobInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTrainingJobInstanceResponse rsp = DeleteTrainingJobInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTrainingJobInstanceOutcome(rsp);
        else
            return DeleteTrainingJobInstanceOutcome(o.GetError());
    }
    else
    {
        return DeleteTrainingJobInstanceOutcome(outcome.GetError());
    }
}

void DlcClient::DeleteTrainingJobInstanceAsync(const DeleteTrainingJobInstanceRequest& request, const DeleteTrainingJobInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteTrainingJobInstanceRequest&;
    using Resp = DeleteTrainingJobInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteTrainingJobInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DeleteTrainingJobInstanceOutcomeCallable DlcClient::DeleteTrainingJobInstanceCallable(const DeleteTrainingJobInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteTrainingJobInstanceOutcome>>();
    DeleteTrainingJobInstanceAsync(
    request,
    [prom](
        const DlcClient*,
        const DeleteTrainingJobInstanceRequest&,
        DeleteTrainingJobInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DeleteTrainingJobSpecOutcome DlcClient::DeleteTrainingJobSpec(const DeleteTrainingJobSpecRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTrainingJobSpec");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTrainingJobSpecResponse rsp = DeleteTrainingJobSpecResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTrainingJobSpecOutcome(rsp);
        else
            return DeleteTrainingJobSpecOutcome(o.GetError());
    }
    else
    {
        return DeleteTrainingJobSpecOutcome(outcome.GetError());
    }
}

void DlcClient::DeleteTrainingJobSpecAsync(const DeleteTrainingJobSpecRequest& request, const DeleteTrainingJobSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteTrainingJobSpecRequest&;
    using Resp = DeleteTrainingJobSpecResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteTrainingJobSpec", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DeleteTrainingJobSpecOutcomeCallable DlcClient::DeleteTrainingJobSpecCallable(const DeleteTrainingJobSpecRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteTrainingJobSpecOutcome>>();
    DeleteTrainingJobSpecAsync(
    request,
    [prom](
        const DlcClient*,
        const DeleteTrainingJobSpecRequest&,
        DeleteTrainingJobSpecOutcome resp,
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

DlcClient::DescribeBindablePrometheusOutcome DlcClient::DescribeBindablePrometheus(const DescribeBindablePrometheusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBindablePrometheus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBindablePrometheusResponse rsp = DescribeBindablePrometheusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBindablePrometheusOutcome(rsp);
        else
            return DescribeBindablePrometheusOutcome(o.GetError());
    }
    else
    {
        return DescribeBindablePrometheusOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeBindablePrometheusAsync(const DescribeBindablePrometheusRequest& request, const DescribeBindablePrometheusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBindablePrometheusRequest&;
    using Resp = DescribeBindablePrometheusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBindablePrometheus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeBindablePrometheusOutcomeCallable DlcClient::DescribeBindablePrometheusCallable(const DescribeBindablePrometheusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBindablePrometheusOutcome>>();
    DescribeBindablePrometheusAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeBindablePrometheusRequest&,
        DescribeBindablePrometheusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeClsTopicsOutcome DlcClient::DescribeClsTopics(const DescribeClsTopicsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClsTopics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClsTopicsResponse rsp = DescribeClsTopicsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClsTopicsOutcome(rsp);
        else
            return DescribeClsTopicsOutcome(o.GetError());
    }
    else
    {
        return DescribeClsTopicsOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeClsTopicsAsync(const DescribeClsTopicsRequest& request, const DescribeClsTopicsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeClsTopicsRequest&;
    using Resp = DescribeClsTopicsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClsTopics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeClsTopicsOutcomeCallable DlcClient::DescribeClsTopicsCallable(const DescribeClsTopicsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClsTopicsOutcome>>();
    DescribeClsTopicsAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeClsTopicsRequest&,
        DescribeClsTopicsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeClusterEventLogSwitchOutcome DlcClient::DescribeClusterEventLogSwitch(const DescribeClusterEventLogSwitchRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterEventLogSwitch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterEventLogSwitchResponse rsp = DescribeClusterEventLogSwitchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterEventLogSwitchOutcome(rsp);
        else
            return DescribeClusterEventLogSwitchOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterEventLogSwitchOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeClusterEventLogSwitchAsync(const DescribeClusterEventLogSwitchRequest& request, const DescribeClusterEventLogSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeClusterEventLogSwitchRequest&;
    using Resp = DescribeClusterEventLogSwitchResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClusterEventLogSwitch", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeClusterEventLogSwitchOutcomeCallable DlcClient::DescribeClusterEventLogSwitchCallable(const DescribeClusterEventLogSwitchRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClusterEventLogSwitchOutcome>>();
    DescribeClusterEventLogSwitchAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeClusterEventLogSwitchRequest&,
        DescribeClusterEventLogSwitchOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeClusterGroupOutcome DlcClient::DescribeClusterGroup(const DescribeClusterGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterGroupResponse rsp = DescribeClusterGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterGroupOutcome(rsp);
        else
            return DescribeClusterGroupOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterGroupOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeClusterGroupAsync(const DescribeClusterGroupRequest& request, const DescribeClusterGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeClusterGroupRequest&;
    using Resp = DescribeClusterGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClusterGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeClusterGroupOutcomeCallable DlcClient::DescribeClusterGroupCallable(const DescribeClusterGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClusterGroupOutcome>>();
    DescribeClusterGroupAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeClusterGroupRequest&,
        DescribeClusterGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeClusterGroupClustersOutcome DlcClient::DescribeClusterGroupClusters(const DescribeClusterGroupClustersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterGroupClusters");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterGroupClustersResponse rsp = DescribeClusterGroupClustersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterGroupClustersOutcome(rsp);
        else
            return DescribeClusterGroupClustersOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterGroupClustersOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeClusterGroupClustersAsync(const DescribeClusterGroupClustersRequest& request, const DescribeClusterGroupClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeClusterGroupClustersRequest&;
    using Resp = DescribeClusterGroupClustersResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClusterGroupClusters", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeClusterGroupClustersOutcomeCallable DlcClient::DescribeClusterGroupClustersCallable(const DescribeClusterGroupClustersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClusterGroupClustersOutcome>>();
    DescribeClusterGroupClustersAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeClusterGroupClustersRequest&,
        DescribeClusterGroupClustersOutcome resp,
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

DlcClient::DescribeDatabaseOutcome DlcClient::DescribeDatabase(const DescribeDatabaseRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDatabase");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDatabaseResponse rsp = DescribeDatabaseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDatabaseOutcome(rsp);
        else
            return DescribeDatabaseOutcome(o.GetError());
    }
    else
    {
        return DescribeDatabaseOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeDatabaseAsync(const DescribeDatabaseRequest& request, const DescribeDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDatabaseRequest&;
    using Resp = DescribeDatabaseResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDatabase", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeDatabaseOutcomeCallable DlcClient::DescribeDatabaseCallable(const DescribeDatabaseRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDatabaseOutcome>>();
    DescribeDatabaseAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeDatabaseRequest&,
        DescribeDatabaseOutcome resp,
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

DlcClient::DescribeEmrClusterInfoOutcome DlcClient::DescribeEmrClusterInfo(const DescribeEmrClusterInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEmrClusterInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEmrClusterInfoResponse rsp = DescribeEmrClusterInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEmrClusterInfoOutcome(rsp);
        else
            return DescribeEmrClusterInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeEmrClusterInfoOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeEmrClusterInfoAsync(const DescribeEmrClusterInfoRequest& request, const DescribeEmrClusterInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEmrClusterInfoRequest&;
    using Resp = DescribeEmrClusterInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEmrClusterInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeEmrClusterInfoOutcomeCallable DlcClient::DescribeEmrClusterInfoCallable(const DescribeEmrClusterInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEmrClusterInfoOutcome>>();
    DescribeEmrClusterInfoAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeEmrClusterInfoRequest&,
        DescribeEmrClusterInfoOutcome resp,
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

DlcClient::DescribeFlowDetailListOutcome DlcClient::DescribeFlowDetailList(const DescribeFlowDetailListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFlowDetailList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFlowDetailListResponse rsp = DescribeFlowDetailListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFlowDetailListOutcome(rsp);
        else
            return DescribeFlowDetailListOutcome(o.GetError());
    }
    else
    {
        return DescribeFlowDetailListOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeFlowDetailListAsync(const DescribeFlowDetailListRequest& request, const DescribeFlowDetailListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFlowDetailListRequest&;
    using Resp = DescribeFlowDetailListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFlowDetailList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeFlowDetailListOutcomeCallable DlcClient::DescribeFlowDetailListCallable(const DescribeFlowDetailListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFlowDetailListOutcome>>();
    DescribeFlowDetailListAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeFlowDetailListRequest&,
        DescribeFlowDetailListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeFlowListOutcome DlcClient::DescribeFlowList(const DescribeFlowListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFlowList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFlowListResponse rsp = DescribeFlowListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFlowListOutcome(rsp);
        else
            return DescribeFlowListOutcome(o.GetError());
    }
    else
    {
        return DescribeFlowListOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeFlowListAsync(const DescribeFlowListRequest& request, const DescribeFlowListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFlowListRequest&;
    using Resp = DescribeFlowListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFlowList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeFlowListOutcomeCallable DlcClient::DescribeFlowListCallable(const DescribeFlowListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFlowListOutcome>>();
    DescribeFlowListAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeFlowListRequest&,
        DescribeFlowListOutcome resp,
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

DlcClient::DescribeMCPSubUinOutcome DlcClient::DescribeMCPSubUin(const DescribeMCPSubUinRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMCPSubUin");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMCPSubUinResponse rsp = DescribeMCPSubUinResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMCPSubUinOutcome(rsp);
        else
            return DescribeMCPSubUinOutcome(o.GetError());
    }
    else
    {
        return DescribeMCPSubUinOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeMCPSubUinAsync(const DescribeMCPSubUinRequest& request, const DescribeMCPSubUinAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMCPSubUinRequest&;
    using Resp = DescribeMCPSubUinResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMCPSubUin", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeMCPSubUinOutcomeCallable DlcClient::DescribeMCPSubUinCallable(const DescribeMCPSubUinRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMCPSubUinOutcome>>();
    DescribeMCPSubUinAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeMCPSubUinRequest&,
        DescribeMCPSubUinOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeMCPTaskOutcome DlcClient::DescribeMCPTask(const DescribeMCPTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMCPTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMCPTaskResponse rsp = DescribeMCPTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMCPTaskOutcome(rsp);
        else
            return DescribeMCPTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeMCPTaskOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeMCPTaskAsync(const DescribeMCPTaskRequest& request, const DescribeMCPTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMCPTaskRequest&;
    using Resp = DescribeMCPTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMCPTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeMCPTaskOutcomeCallable DlcClient::DescribeMCPTaskCallable(const DescribeMCPTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMCPTaskOutcome>>();
    DescribeMCPTaskAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeMCPTaskRequest&,
        DescribeMCPTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeMCPTaskResultOutcome DlcClient::DescribeMCPTaskResult(const DescribeMCPTaskResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMCPTaskResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMCPTaskResultResponse rsp = DescribeMCPTaskResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMCPTaskResultOutcome(rsp);
        else
            return DescribeMCPTaskResultOutcome(o.GetError());
    }
    else
    {
        return DescribeMCPTaskResultOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeMCPTaskResultAsync(const DescribeMCPTaskResultRequest& request, const DescribeMCPTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMCPTaskResultRequest&;
    using Resp = DescribeMCPTaskResultResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMCPTaskResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeMCPTaskResultOutcomeCallable DlcClient::DescribeMCPTaskResultCallable(const DescribeMCPTaskResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMCPTaskResultOutcome>>();
    DescribeMCPTaskResultAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeMCPTaskResultRequest&,
        DescribeMCPTaskResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeMlFlowConfigOutcome DlcClient::DescribeMlFlowConfig(const DescribeMlFlowConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMlFlowConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMlFlowConfigResponse rsp = DescribeMlFlowConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMlFlowConfigOutcome(rsp);
        else
            return DescribeMlFlowConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeMlFlowConfigOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeMlFlowConfigAsync(const DescribeMlFlowConfigRequest& request, const DescribeMlFlowConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMlFlowConfigRequest&;
    using Resp = DescribeMlFlowConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMlFlowConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeMlFlowConfigOutcomeCallable DlcClient::DescribeMlFlowConfigCallable(const DescribeMlFlowConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMlFlowConfigOutcome>>();
    DescribeMlFlowConfigAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeMlFlowConfigRequest&,
        DescribeMlFlowConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeMlflowServerOutcome DlcClient::DescribeMlflowServer(const DescribeMlflowServerRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMlflowServer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMlflowServerResponse rsp = DescribeMlflowServerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMlflowServerOutcome(rsp);
        else
            return DescribeMlflowServerOutcome(o.GetError());
    }
    else
    {
        return DescribeMlflowServerOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeMlflowServerAsync(const DescribeMlflowServerRequest& request, const DescribeMlflowServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMlflowServerRequest&;
    using Resp = DescribeMlflowServerResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMlflowServer", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeMlflowServerOutcomeCallable DlcClient::DescribeMlflowServerCallable(const DescribeMlflowServerRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMlflowServerOutcome>>();
    DescribeMlflowServerAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeMlflowServerRequest&,
        DescribeMlflowServerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeMlflowServerEventsOutcome DlcClient::DescribeMlflowServerEvents(const DescribeMlflowServerEventsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMlflowServerEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMlflowServerEventsResponse rsp = DescribeMlflowServerEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMlflowServerEventsOutcome(rsp);
        else
            return DescribeMlflowServerEventsOutcome(o.GetError());
    }
    else
    {
        return DescribeMlflowServerEventsOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeMlflowServerEventsAsync(const DescribeMlflowServerEventsRequest& request, const DescribeMlflowServerEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMlflowServerEventsRequest&;
    using Resp = DescribeMlflowServerEventsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMlflowServerEvents", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeMlflowServerEventsOutcomeCallable DlcClient::DescribeMlflowServerEventsCallable(const DescribeMlflowServerEventsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMlflowServerEventsOutcome>>();
    DescribeMlflowServerEventsAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeMlflowServerEventsRequest&,
        DescribeMlflowServerEventsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeMlflowServerPodsOutcome DlcClient::DescribeMlflowServerPods(const DescribeMlflowServerPodsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMlflowServerPods");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMlflowServerPodsResponse rsp = DescribeMlflowServerPodsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMlflowServerPodsOutcome(rsp);
        else
            return DescribeMlflowServerPodsOutcome(o.GetError());
    }
    else
    {
        return DescribeMlflowServerPodsOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeMlflowServerPodsAsync(const DescribeMlflowServerPodsRequest& request, const DescribeMlflowServerPodsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMlflowServerPodsRequest&;
    using Resp = DescribeMlflowServerPodsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMlflowServerPods", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeMlflowServerPodsOutcomeCallable DlcClient::DescribeMlflowServerPodsCallable(const DescribeMlflowServerPodsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMlflowServerPodsOutcome>>();
    DescribeMlflowServerPodsAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeMlflowServerPodsRequest&,
        DescribeMlflowServerPodsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeModelEnginesOutcome DlcClient::DescribeModelEngines(const DescribeModelEnginesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeModelEngines");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeModelEnginesResponse rsp = DescribeModelEnginesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeModelEnginesOutcome(rsp);
        else
            return DescribeModelEnginesOutcome(o.GetError());
    }
    else
    {
        return DescribeModelEnginesOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeModelEnginesAsync(const DescribeModelEnginesRequest& request, const DescribeModelEnginesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeModelEnginesRequest&;
    using Resp = DescribeModelEnginesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeModelEngines", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeModelEnginesOutcomeCallable DlcClient::DescribeModelEnginesCallable(const DescribeModelEnginesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeModelEnginesOutcome>>();
    DescribeModelEnginesAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeModelEnginesRequest&,
        DescribeModelEnginesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeModelTaskOptionsOutcome DlcClient::DescribeModelTaskOptions(const DescribeModelTaskOptionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeModelTaskOptions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeModelTaskOptionsResponse rsp = DescribeModelTaskOptionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeModelTaskOptionsOutcome(rsp);
        else
            return DescribeModelTaskOptionsOutcome(o.GetError());
    }
    else
    {
        return DescribeModelTaskOptionsOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeModelTaskOptionsAsync(const DescribeModelTaskOptionsRequest& request, const DescribeModelTaskOptionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeModelTaskOptionsRequest&;
    using Resp = DescribeModelTaskOptionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeModelTaskOptions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeModelTaskOptionsOutcomeCallable DlcClient::DescribeModelTaskOptionsCallable(const DescribeModelTaskOptionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeModelTaskOptionsOutcome>>();
    DescribeModelTaskOptionsAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeModelTaskOptionsRequest&,
        DescribeModelTaskOptionsOutcome resp,
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

DlcClient::DescribePartitionDetailOutcome DlcClient::DescribePartitionDetail(const DescribePartitionDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePartitionDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePartitionDetailResponse rsp = DescribePartitionDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePartitionDetailOutcome(rsp);
        else
            return DescribePartitionDetailOutcome(o.GetError());
    }
    else
    {
        return DescribePartitionDetailOutcome(outcome.GetError());
    }
}

void DlcClient::DescribePartitionDetailAsync(const DescribePartitionDetailRequest& request, const DescribePartitionDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePartitionDetailRequest&;
    using Resp = DescribePartitionDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePartitionDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribePartitionDetailOutcomeCallable DlcClient::DescribePartitionDetailCallable(const DescribePartitionDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePartitionDetailOutcome>>();
    DescribePartitionDetailAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribePartitionDetailRequest&,
        DescribePartitionDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribePartitionQueuesOutcome DlcClient::DescribePartitionQueues(const DescribePartitionQueuesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePartitionQueues");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePartitionQueuesResponse rsp = DescribePartitionQueuesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePartitionQueuesOutcome(rsp);
        else
            return DescribePartitionQueuesOutcome(o.GetError());
    }
    else
    {
        return DescribePartitionQueuesOutcome(outcome.GetError());
    }
}

void DlcClient::DescribePartitionQueuesAsync(const DescribePartitionQueuesRequest& request, const DescribePartitionQueuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePartitionQueuesRequest&;
    using Resp = DescribePartitionQueuesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePartitionQueues", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribePartitionQueuesOutcomeCallable DlcClient::DescribePartitionQueuesCallable(const DescribePartitionQueuesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePartitionQueuesOutcome>>();
    DescribePartitionQueuesAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribePartitionQueuesRequest&,
        DescribePartitionQueuesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribePartitionsOutcome DlcClient::DescribePartitions(const DescribePartitionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePartitions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePartitionsResponse rsp = DescribePartitionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePartitionsOutcome(rsp);
        else
            return DescribePartitionsOutcome(o.GetError());
    }
    else
    {
        return DescribePartitionsOutcome(outcome.GetError());
    }
}

void DlcClient::DescribePartitionsAsync(const DescribePartitionsRequest& request, const DescribePartitionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePartitionsRequest&;
    using Resp = DescribePartitionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePartitions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribePartitionsOutcomeCallable DlcClient::DescribePartitionsCallable(const DescribePartitionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePartitionsOutcome>>();
    DescribePartitionsAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribePartitionsRequest&,
        DescribePartitionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribePostTrainingPresetOutcome DlcClient::DescribePostTrainingPreset(const DescribePostTrainingPresetRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePostTrainingPreset");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePostTrainingPresetResponse rsp = DescribePostTrainingPresetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePostTrainingPresetOutcome(rsp);
        else
            return DescribePostTrainingPresetOutcome(o.GetError());
    }
    else
    {
        return DescribePostTrainingPresetOutcome(outcome.GetError());
    }
}

void DlcClient::DescribePostTrainingPresetAsync(const DescribePostTrainingPresetRequest& request, const DescribePostTrainingPresetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePostTrainingPresetRequest&;
    using Resp = DescribePostTrainingPresetResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePostTrainingPreset", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribePostTrainingPresetOutcomeCallable DlcClient::DescribePostTrainingPresetCallable(const DescribePostTrainingPresetRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePostTrainingPresetOutcome>>();
    DescribePostTrainingPresetAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribePostTrainingPresetRequest&,
        DescribePostTrainingPresetOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeRecommendedParamsOutcome DlcClient::DescribeRecommendedParams(const DescribeRecommendedParamsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRecommendedParams");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRecommendedParamsResponse rsp = DescribeRecommendedParamsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRecommendedParamsOutcome(rsp);
        else
            return DescribeRecommendedParamsOutcome(o.GetError());
    }
    else
    {
        return DescribeRecommendedParamsOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeRecommendedParamsAsync(const DescribeRecommendedParamsRequest& request, const DescribeRecommendedParamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRecommendedParamsRequest&;
    using Resp = DescribeRecommendedParamsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRecommendedParams", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeRecommendedParamsOutcomeCallable DlcClient::DescribeRecommendedParamsCallable(const DescribeRecommendedParamsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRecommendedParamsOutcome>>();
    DescribeRecommendedParamsAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeRecommendedParamsRequest&,
        DescribeRecommendedParamsOutcome resp,
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

DlcClient::DescribeSaleRegionsOutcome DlcClient::DescribeSaleRegions(const DescribeSaleRegionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSaleRegions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSaleRegionsResponse rsp = DescribeSaleRegionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSaleRegionsOutcome(rsp);
        else
            return DescribeSaleRegionsOutcome(o.GetError());
    }
    else
    {
        return DescribeSaleRegionsOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeSaleRegionsAsync(const DescribeSaleRegionsRequest& request, const DescribeSaleRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSaleRegionsRequest&;
    using Resp = DescribeSaleRegionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSaleRegions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeSaleRegionsOutcomeCallable DlcClient::DescribeSaleRegionsCallable(const DescribeSaleRegionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSaleRegionsOutcome>>();
    DescribeSaleRegionsAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeSaleRegionsRequest&,
        DescribeSaleRegionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeSaleResourceInfoOutcome DlcClient::DescribeSaleResourceInfo(const DescribeSaleResourceInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSaleResourceInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSaleResourceInfoResponse rsp = DescribeSaleResourceInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSaleResourceInfoOutcome(rsp);
        else
            return DescribeSaleResourceInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeSaleResourceInfoOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeSaleResourceInfoAsync(const DescribeSaleResourceInfoRequest& request, const DescribeSaleResourceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSaleResourceInfoRequest&;
    using Resp = DescribeSaleResourceInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSaleResourceInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeSaleResourceInfoOutcomeCallable DlcClient::DescribeSaleResourceInfoCallable(const DescribeSaleResourceInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSaleResourceInfoOutcome>>();
    DescribeSaleResourceInfoAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeSaleResourceInfoRequest&,
        DescribeSaleResourceInfoOutcome resp,
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

DlcClient::DescribeTCLakeMetaInstanceOutcome DlcClient::DescribeTCLakeMetaInstance(const DescribeTCLakeMetaInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTCLakeMetaInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTCLakeMetaInstanceResponse rsp = DescribeTCLakeMetaInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTCLakeMetaInstanceOutcome(rsp);
        else
            return DescribeTCLakeMetaInstanceOutcome(o.GetError());
    }
    else
    {
        return DescribeTCLakeMetaInstanceOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeTCLakeMetaInstanceAsync(const DescribeTCLakeMetaInstanceRequest& request, const DescribeTCLakeMetaInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTCLakeMetaInstanceRequest&;
    using Resp = DescribeTCLakeMetaInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTCLakeMetaInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeTCLakeMetaInstanceOutcomeCallable DlcClient::DescribeTCLakeMetaInstanceCallable(const DescribeTCLakeMetaInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTCLakeMetaInstanceOutcome>>();
    DescribeTCLakeMetaInstanceAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeTCLakeMetaInstanceRequest&,
        DescribeTCLakeMetaInstanceOutcome resp,
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

DlcClient::DescribeTaskDetailOutcome DlcClient::DescribeTaskDetail(const DescribeTaskDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskDetailResponse rsp = DescribeTaskDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskDetailOutcome(rsp);
        else
            return DescribeTaskDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskDetailOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeTaskDetailAsync(const DescribeTaskDetailRequest& request, const DescribeTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTaskDetailRequest&;
    using Resp = DescribeTaskDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTaskDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeTaskDetailOutcomeCallable DlcClient::DescribeTaskDetailCallable(const DescribeTaskDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTaskDetailOutcome>>();
    DescribeTaskDetailAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeTaskDetailRequest&,
        DescribeTaskDetailOutcome resp,
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

DlcClient::DescribeTkeClusterImportInfoOutcome DlcClient::DescribeTkeClusterImportInfo(const DescribeTkeClusterImportInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTkeClusterImportInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTkeClusterImportInfoResponse rsp = DescribeTkeClusterImportInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTkeClusterImportInfoOutcome(rsp);
        else
            return DescribeTkeClusterImportInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeTkeClusterImportInfoOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeTkeClusterImportInfoAsync(const DescribeTkeClusterImportInfoRequest& request, const DescribeTkeClusterImportInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTkeClusterImportInfoRequest&;
    using Resp = DescribeTkeClusterImportInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTkeClusterImportInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeTkeClusterImportInfoOutcomeCallable DlcClient::DescribeTkeClusterImportInfoCallable(const DescribeTkeClusterImportInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTkeClusterImportInfoOutcome>>();
    DescribeTkeClusterImportInfoAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeTkeClusterImportInfoRequest&,
        DescribeTkeClusterImportInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeTrainingCheckpointsOutcome DlcClient::DescribeTrainingCheckpoints(const DescribeTrainingCheckpointsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTrainingCheckpoints");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTrainingCheckpointsResponse rsp = DescribeTrainingCheckpointsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTrainingCheckpointsOutcome(rsp);
        else
            return DescribeTrainingCheckpointsOutcome(o.GetError());
    }
    else
    {
        return DescribeTrainingCheckpointsOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeTrainingCheckpointsAsync(const DescribeTrainingCheckpointsRequest& request, const DescribeTrainingCheckpointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTrainingCheckpointsRequest&;
    using Resp = DescribeTrainingCheckpointsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTrainingCheckpoints", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeTrainingCheckpointsOutcomeCallable DlcClient::DescribeTrainingCheckpointsCallable(const DescribeTrainingCheckpointsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTrainingCheckpointsOutcome>>();
    DescribeTrainingCheckpointsAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeTrainingCheckpointsRequest&,
        DescribeTrainingCheckpointsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeTrainingJobInstanceOutcome DlcClient::DescribeTrainingJobInstance(const DescribeTrainingJobInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTrainingJobInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTrainingJobInstanceResponse rsp = DescribeTrainingJobInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTrainingJobInstanceOutcome(rsp);
        else
            return DescribeTrainingJobInstanceOutcome(o.GetError());
    }
    else
    {
        return DescribeTrainingJobInstanceOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeTrainingJobInstanceAsync(const DescribeTrainingJobInstanceRequest& request, const DescribeTrainingJobInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTrainingJobInstanceRequest&;
    using Resp = DescribeTrainingJobInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTrainingJobInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeTrainingJobInstanceOutcomeCallable DlcClient::DescribeTrainingJobInstanceCallable(const DescribeTrainingJobInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTrainingJobInstanceOutcome>>();
    DescribeTrainingJobInstanceAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeTrainingJobInstanceRequest&,
        DescribeTrainingJobInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::DescribeTrainingJobSpecOutcome DlcClient::DescribeTrainingJobSpec(const DescribeTrainingJobSpecRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTrainingJobSpec");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTrainingJobSpecResponse rsp = DescribeTrainingJobSpecResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTrainingJobSpecOutcome(rsp);
        else
            return DescribeTrainingJobSpecOutcome(o.GetError());
    }
    else
    {
        return DescribeTrainingJobSpecOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeTrainingJobSpecAsync(const DescribeTrainingJobSpecRequest& request, const DescribeTrainingJobSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTrainingJobSpecRequest&;
    using Resp = DescribeTrainingJobSpecResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTrainingJobSpec", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeTrainingJobSpecOutcomeCallable DlcClient::DescribeTrainingJobSpecCallable(const DescribeTrainingJobSpecRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTrainingJobSpecOutcome>>();
    DescribeTrainingJobSpecAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeTrainingJobSpecRequest&,
        DescribeTrainingJobSpecOutcome resp,
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

DlcClient::GenerateInternalTableOutcome DlcClient::GenerateInternalTable(const GenerateInternalTableRequest &request)
{
    auto outcome = MakeRequest(request, "GenerateInternalTable");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GenerateInternalTableResponse rsp = GenerateInternalTableResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GenerateInternalTableOutcome(rsp);
        else
            return GenerateInternalTableOutcome(o.GetError());
    }
    else
    {
        return GenerateInternalTableOutcome(outcome.GetError());
    }
}

void DlcClient::GenerateInternalTableAsync(const GenerateInternalTableRequest& request, const GenerateInternalTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GenerateInternalTableRequest&;
    using Resp = GenerateInternalTableResponse;

    DoRequestAsync<Req, Resp>(
        "GenerateInternalTable", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::GenerateInternalTableOutcomeCallable DlcClient::GenerateInternalTableCallable(const GenerateInternalTableRequest &request)
{
    const auto prom = std::make_shared<std::promise<GenerateInternalTableOutcome>>();
    GenerateInternalTableAsync(
    request,
    [prom](
        const DlcClient*,
        const GenerateInternalTableRequest&,
        GenerateInternalTableOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::GetExampleDetailOutcome DlcClient::GetExampleDetail(const GetExampleDetailRequest &request)
{
    auto outcome = MakeRequest(request, "GetExampleDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetExampleDetailResponse rsp = GetExampleDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetExampleDetailOutcome(rsp);
        else
            return GetExampleDetailOutcome(o.GetError());
    }
    else
    {
        return GetExampleDetailOutcome(outcome.GetError());
    }
}

void DlcClient::GetExampleDetailAsync(const GetExampleDetailRequest& request, const GetExampleDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetExampleDetailRequest&;
    using Resp = GetExampleDetailResponse;

    DoRequestAsync<Req, Resp>(
        "GetExampleDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::GetExampleDetailOutcomeCallable DlcClient::GetExampleDetailCallable(const GetExampleDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetExampleDetailOutcome>>();
    GetExampleDetailAsync(
    request,
    [prom](
        const DlcClient*,
        const GetExampleDetailRequest&,
        GetExampleDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::GetInferenceModelOutcome DlcClient::GetInferenceModel(const GetInferenceModelRequest &request)
{
    auto outcome = MakeRequest(request, "GetInferenceModel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetInferenceModelResponse rsp = GetInferenceModelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetInferenceModelOutcome(rsp);
        else
            return GetInferenceModelOutcome(o.GetError());
    }
    else
    {
        return GetInferenceModelOutcome(outcome.GetError());
    }
}

void DlcClient::GetInferenceModelAsync(const GetInferenceModelRequest& request, const GetInferenceModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetInferenceModelRequest&;
    using Resp = GetInferenceModelResponse;

    DoRequestAsync<Req, Resp>(
        "GetInferenceModel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::GetInferenceModelOutcomeCallable DlcClient::GetInferenceModelCallable(const GetInferenceModelRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetInferenceModelOutcome>>();
    GetInferenceModelAsync(
    request,
    [prom](
        const DlcClient*,
        const GetInferenceModelRequest&,
        GetInferenceModelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::GetInferenceServiceOutcome DlcClient::GetInferenceService(const GetInferenceServiceRequest &request)
{
    auto outcome = MakeRequest(request, "GetInferenceService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetInferenceServiceResponse rsp = GetInferenceServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetInferenceServiceOutcome(rsp);
        else
            return GetInferenceServiceOutcome(o.GetError());
    }
    else
    {
        return GetInferenceServiceOutcome(outcome.GetError());
    }
}

void DlcClient::GetInferenceServiceAsync(const GetInferenceServiceRequest& request, const GetInferenceServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetInferenceServiceRequest&;
    using Resp = GetInferenceServiceResponse;

    DoRequestAsync<Req, Resp>(
        "GetInferenceService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::GetInferenceServiceOutcomeCallable DlcClient::GetInferenceServiceCallable(const GetInferenceServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetInferenceServiceOutcome>>();
    GetInferenceServiceAsync(
    request,
    [prom](
        const DlcClient*,
        const GetInferenceServiceRequest&,
        GetInferenceServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::GetJobSpecOutcome DlcClient::GetJobSpec(const GetJobSpecRequest &request)
{
    auto outcome = MakeRequest(request, "GetJobSpec");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetJobSpecResponse rsp = GetJobSpecResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetJobSpecOutcome(rsp);
        else
            return GetJobSpecOutcome(o.GetError());
    }
    else
    {
        return GetJobSpecOutcome(outcome.GetError());
    }
}

void DlcClient::GetJobSpecAsync(const GetJobSpecRequest& request, const GetJobSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetJobSpecRequest&;
    using Resp = GetJobSpecResponse;

    DoRequestAsync<Req, Resp>(
        "GetJobSpec", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::GetJobSpecOutcomeCallable DlcClient::GetJobSpecCallable(const GetJobSpecRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetJobSpecOutcome>>();
    GetJobSpecAsync(
    request,
    [prom](
        const DlcClient*,
        const GetJobSpecRequest&,
        GetJobSpecOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::GetLabDetailOutcome DlcClient::GetLabDetail(const GetLabDetailRequest &request)
{
    auto outcome = MakeRequest(request, "GetLabDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetLabDetailResponse rsp = GetLabDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetLabDetailOutcome(rsp);
        else
            return GetLabDetailOutcome(o.GetError());
    }
    else
    {
        return GetLabDetailOutcome(outcome.GetError());
    }
}

void DlcClient::GetLabDetailAsync(const GetLabDetailRequest& request, const GetLabDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetLabDetailRequest&;
    using Resp = GetLabDetailResponse;

    DoRequestAsync<Req, Resp>(
        "GetLabDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::GetLabDetailOutcomeCallable DlcClient::GetLabDetailCallable(const GetLabDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetLabDetailOutcome>>();
    GetLabDetailAsync(
    request,
    [prom](
        const DlcClient*,
        const GetLabDetailRequest&,
        GetLabDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::GetLabEventOutcome DlcClient::GetLabEvent(const GetLabEventRequest &request)
{
    auto outcome = MakeRequest(request, "GetLabEvent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetLabEventResponse rsp = GetLabEventResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetLabEventOutcome(rsp);
        else
            return GetLabEventOutcome(o.GetError());
    }
    else
    {
        return GetLabEventOutcome(outcome.GetError());
    }
}

void DlcClient::GetLabEventAsync(const GetLabEventRequest& request, const GetLabEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetLabEventRequest&;
    using Resp = GetLabEventResponse;

    DoRequestAsync<Req, Resp>(
        "GetLabEvent", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::GetLabEventOutcomeCallable DlcClient::GetLabEventCallable(const GetLabEventRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetLabEventOutcome>>();
    GetLabEventAsync(
    request,
    [prom](
        const DlcClient*,
        const GetLabEventRequest&,
        GetLabEventOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::GetLabHistoryOutcome DlcClient::GetLabHistory(const GetLabHistoryRequest &request)
{
    auto outcome = MakeRequest(request, "GetLabHistory");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetLabHistoryResponse rsp = GetLabHistoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetLabHistoryOutcome(rsp);
        else
            return GetLabHistoryOutcome(o.GetError());
    }
    else
    {
        return GetLabHistoryOutcome(outcome.GetError());
    }
}

void DlcClient::GetLabHistoryAsync(const GetLabHistoryRequest& request, const GetLabHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetLabHistoryRequest&;
    using Resp = GetLabHistoryResponse;

    DoRequestAsync<Req, Resp>(
        "GetLabHistory", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::GetLabHistoryOutcomeCallable DlcClient::GetLabHistoryCallable(const GetLabHistoryRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetLabHistoryOutcome>>();
    GetLabHistoryAsync(
    request,
    [prom](
        const DlcClient*,
        const GetLabHistoryRequest&,
        GetLabHistoryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::GetLabPodYamlOutcome DlcClient::GetLabPodYaml(const GetLabPodYamlRequest &request)
{
    auto outcome = MakeRequest(request, "GetLabPodYaml");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetLabPodYamlResponse rsp = GetLabPodYamlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetLabPodYamlOutcome(rsp);
        else
            return GetLabPodYamlOutcome(o.GetError());
    }
    else
    {
        return GetLabPodYamlOutcome(outcome.GetError());
    }
}

void DlcClient::GetLabPodYamlAsync(const GetLabPodYamlRequest& request, const GetLabPodYamlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetLabPodYamlRequest&;
    using Resp = GetLabPodYamlResponse;

    DoRequestAsync<Req, Resp>(
        "GetLabPodYaml", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::GetLabPodYamlOutcomeCallable DlcClient::GetLabPodYamlCallable(const GetLabPodYamlRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetLabPodYamlOutcome>>();
    GetLabPodYamlAsync(
    request,
    [prom](
        const DlcClient*,
        const GetLabPodYamlRequest&,
        GetLabPodYamlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::GetLabPodsOutcome DlcClient::GetLabPods(const GetLabPodsRequest &request)
{
    auto outcome = MakeRequest(request, "GetLabPods");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetLabPodsResponse rsp = GetLabPodsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetLabPodsOutcome(rsp);
        else
            return GetLabPodsOutcome(o.GetError());
    }
    else
    {
        return GetLabPodsOutcome(outcome.GetError());
    }
}

void DlcClient::GetLabPodsAsync(const GetLabPodsRequest& request, const GetLabPodsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetLabPodsRequest&;
    using Resp = GetLabPodsResponse;

    DoRequestAsync<Req, Resp>(
        "GetLabPods", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::GetLabPodsOutcomeCallable DlcClient::GetLabPodsCallable(const GetLabPodsRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetLabPodsOutcome>>();
    GetLabPodsAsync(
    request,
    [prom](
        const DlcClient*,
        const GetLabPodsRequest&,
        GetLabPodsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::GetLabServiceUrlsOutcome DlcClient::GetLabServiceUrls(const GetLabServiceUrlsRequest &request)
{
    auto outcome = MakeRequest(request, "GetLabServiceUrls");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetLabServiceUrlsResponse rsp = GetLabServiceUrlsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetLabServiceUrlsOutcome(rsp);
        else
            return GetLabServiceUrlsOutcome(o.GetError());
    }
    else
    {
        return GetLabServiceUrlsOutcome(outcome.GetError());
    }
}

void DlcClient::GetLabServiceUrlsAsync(const GetLabServiceUrlsRequest& request, const GetLabServiceUrlsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetLabServiceUrlsRequest&;
    using Resp = GetLabServiceUrlsResponse;

    DoRequestAsync<Req, Resp>(
        "GetLabServiceUrls", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::GetLabServiceUrlsOutcomeCallable DlcClient::GetLabServiceUrlsCallable(const GetLabServiceUrlsRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetLabServiceUrlsOutcome>>();
    GetLabServiceUrlsAsync(
    request,
    [prom](
        const DlcClient*,
        const GetLabServiceUrlsRequest&,
        GetLabServiceUrlsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::GetLabYamlOutcome DlcClient::GetLabYaml(const GetLabYamlRequest &request)
{
    auto outcome = MakeRequest(request, "GetLabYaml");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetLabYamlResponse rsp = GetLabYamlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetLabYamlOutcome(rsp);
        else
            return GetLabYamlOutcome(o.GetError());
    }
    else
    {
        return GetLabYamlOutcome(outcome.GetError());
    }
}

void DlcClient::GetLabYamlAsync(const GetLabYamlRequest& request, const GetLabYamlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetLabYamlRequest&;
    using Resp = GetLabYamlResponse;

    DoRequestAsync<Req, Resp>(
        "GetLabYaml", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::GetLabYamlOutcomeCallable DlcClient::GetLabYamlCallable(const GetLabYamlRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetLabYamlOutcome>>();
    GetLabYamlAsync(
    request,
    [prom](
        const DlcClient*,
        const GetLabYamlRequest&,
        GetLabYamlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::GetModelConfigOutcome DlcClient::GetModelConfig(const GetModelConfigRequest &request)
{
    auto outcome = MakeRequest(request, "GetModelConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetModelConfigResponse rsp = GetModelConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetModelConfigOutcome(rsp);
        else
            return GetModelConfigOutcome(o.GetError());
    }
    else
    {
        return GetModelConfigOutcome(outcome.GetError());
    }
}

void DlcClient::GetModelConfigAsync(const GetModelConfigRequest& request, const GetModelConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetModelConfigRequest&;
    using Resp = GetModelConfigResponse;

    DoRequestAsync<Req, Resp>(
        "GetModelConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::GetModelConfigOutcomeCallable DlcClient::GetModelConfigCallable(const GetModelConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetModelConfigOutcome>>();
    GetModelConfigAsync(
    request,
    [prom](
        const DlcClient*,
        const GetModelConfigRequest&,
        GetModelConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::GetModelFilesOutcome DlcClient::GetModelFiles(const GetModelFilesRequest &request)
{
    auto outcome = MakeRequest(request, "GetModelFiles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetModelFilesResponse rsp = GetModelFilesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetModelFilesOutcome(rsp);
        else
            return GetModelFilesOutcome(o.GetError());
    }
    else
    {
        return GetModelFilesOutcome(outcome.GetError());
    }
}

void DlcClient::GetModelFilesAsync(const GetModelFilesRequest& request, const GetModelFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetModelFilesRequest&;
    using Resp = GetModelFilesResponse;

    DoRequestAsync<Req, Resp>(
        "GetModelFiles", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::GetModelFilesOutcomeCallable DlcClient::GetModelFilesCallable(const GetModelFilesRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetModelFilesOutcome>>();
    GetModelFilesAsync(
    request,
    [prom](
        const DlcClient*,
        const GetModelFilesRequest&,
        GetModelFilesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::GetModelReadmeOutcome DlcClient::GetModelReadme(const GetModelReadmeRequest &request)
{
    auto outcome = MakeRequest(request, "GetModelReadme");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetModelReadmeResponse rsp = GetModelReadmeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetModelReadmeOutcome(rsp);
        else
            return GetModelReadmeOutcome(o.GetError());
    }
    else
    {
        return GetModelReadmeOutcome(outcome.GetError());
    }
}

void DlcClient::GetModelReadmeAsync(const GetModelReadmeRequest& request, const GetModelReadmeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetModelReadmeRequest&;
    using Resp = GetModelReadmeResponse;

    DoRequestAsync<Req, Resp>(
        "GetModelReadme", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::GetModelReadmeOutcomeCallable DlcClient::GetModelReadmeCallable(const GetModelReadmeRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetModelReadmeOutcome>>();
    GetModelReadmeAsync(
    request,
    [prom](
        const DlcClient*,
        const GetModelReadmeRequest&,
        GetModelReadmeOutcome resp,
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

DlcClient::GetRayClusterOutcome DlcClient::GetRayCluster(const GetRayClusterRequest &request)
{
    auto outcome = MakeRequest(request, "GetRayCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetRayClusterResponse rsp = GetRayClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetRayClusterOutcome(rsp);
        else
            return GetRayClusterOutcome(o.GetError());
    }
    else
    {
        return GetRayClusterOutcome(outcome.GetError());
    }
}

void DlcClient::GetRayClusterAsync(const GetRayClusterRequest& request, const GetRayClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetRayClusterRequest&;
    using Resp = GetRayClusterResponse;

    DoRequestAsync<Req, Resp>(
        "GetRayCluster", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::GetRayClusterOutcomeCallable DlcClient::GetRayClusterCallable(const GetRayClusterRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetRayClusterOutcome>>();
    GetRayClusterAsync(
    request,
    [prom](
        const DlcClient*,
        const GetRayClusterRequest&,
        GetRayClusterOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::GetRayClusterEventOutcome DlcClient::GetRayClusterEvent(const GetRayClusterEventRequest &request)
{
    auto outcome = MakeRequest(request, "GetRayClusterEvent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetRayClusterEventResponse rsp = GetRayClusterEventResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetRayClusterEventOutcome(rsp);
        else
            return GetRayClusterEventOutcome(o.GetError());
    }
    else
    {
        return GetRayClusterEventOutcome(outcome.GetError());
    }
}

void DlcClient::GetRayClusterEventAsync(const GetRayClusterEventRequest& request, const GetRayClusterEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetRayClusterEventRequest&;
    using Resp = GetRayClusterEventResponse;

    DoRequestAsync<Req, Resp>(
        "GetRayClusterEvent", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::GetRayClusterEventOutcomeCallable DlcClient::GetRayClusterEventCallable(const GetRayClusterEventRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetRayClusterEventOutcome>>();
    GetRayClusterEventAsync(
    request,
    [prom](
        const DlcClient*,
        const GetRayClusterEventRequest&,
        GetRayClusterEventOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::GetRayClusterHistoryOutcome DlcClient::GetRayClusterHistory(const GetRayClusterHistoryRequest &request)
{
    auto outcome = MakeRequest(request, "GetRayClusterHistory");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetRayClusterHistoryResponse rsp = GetRayClusterHistoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetRayClusterHistoryOutcome(rsp);
        else
            return GetRayClusterHistoryOutcome(o.GetError());
    }
    else
    {
        return GetRayClusterHistoryOutcome(outcome.GetError());
    }
}

void DlcClient::GetRayClusterHistoryAsync(const GetRayClusterHistoryRequest& request, const GetRayClusterHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetRayClusterHistoryRequest&;
    using Resp = GetRayClusterHistoryResponse;

    DoRequestAsync<Req, Resp>(
        "GetRayClusterHistory", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::GetRayClusterHistoryOutcomeCallable DlcClient::GetRayClusterHistoryCallable(const GetRayClusterHistoryRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetRayClusterHistoryOutcome>>();
    GetRayClusterHistoryAsync(
    request,
    [prom](
        const DlcClient*,
        const GetRayClusterHistoryRequest&,
        GetRayClusterHistoryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::GetRayClusterPodYamlOutcome DlcClient::GetRayClusterPodYaml(const GetRayClusterPodYamlRequest &request)
{
    auto outcome = MakeRequest(request, "GetRayClusterPodYaml");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetRayClusterPodYamlResponse rsp = GetRayClusterPodYamlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetRayClusterPodYamlOutcome(rsp);
        else
            return GetRayClusterPodYamlOutcome(o.GetError());
    }
    else
    {
        return GetRayClusterPodYamlOutcome(outcome.GetError());
    }
}

void DlcClient::GetRayClusterPodYamlAsync(const GetRayClusterPodYamlRequest& request, const GetRayClusterPodYamlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetRayClusterPodYamlRequest&;
    using Resp = GetRayClusterPodYamlResponse;

    DoRequestAsync<Req, Resp>(
        "GetRayClusterPodYaml", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::GetRayClusterPodYamlOutcomeCallable DlcClient::GetRayClusterPodYamlCallable(const GetRayClusterPodYamlRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetRayClusterPodYamlOutcome>>();
    GetRayClusterPodYamlAsync(
    request,
    [prom](
        const DlcClient*,
        const GetRayClusterPodYamlRequest&,
        GetRayClusterPodYamlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::GetRayClusterPodsOutcome DlcClient::GetRayClusterPods(const GetRayClusterPodsRequest &request)
{
    auto outcome = MakeRequest(request, "GetRayClusterPods");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetRayClusterPodsResponse rsp = GetRayClusterPodsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetRayClusterPodsOutcome(rsp);
        else
            return GetRayClusterPodsOutcome(o.GetError());
    }
    else
    {
        return GetRayClusterPodsOutcome(outcome.GetError());
    }
}

void DlcClient::GetRayClusterPodsAsync(const GetRayClusterPodsRequest& request, const GetRayClusterPodsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetRayClusterPodsRequest&;
    using Resp = GetRayClusterPodsResponse;

    DoRequestAsync<Req, Resp>(
        "GetRayClusterPods", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::GetRayClusterPodsOutcomeCallable DlcClient::GetRayClusterPodsCallable(const GetRayClusterPodsRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetRayClusterPodsOutcome>>();
    GetRayClusterPodsAsync(
    request,
    [prom](
        const DlcClient*,
        const GetRayClusterPodsRequest&,
        GetRayClusterPodsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::GetRayClusterYamlOutcome DlcClient::GetRayClusterYaml(const GetRayClusterYamlRequest &request)
{
    auto outcome = MakeRequest(request, "GetRayClusterYaml");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetRayClusterYamlResponse rsp = GetRayClusterYamlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetRayClusterYamlOutcome(rsp);
        else
            return GetRayClusterYamlOutcome(o.GetError());
    }
    else
    {
        return GetRayClusterYamlOutcome(outcome.GetError());
    }
}

void DlcClient::GetRayClusterYamlAsync(const GetRayClusterYamlRequest& request, const GetRayClusterYamlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetRayClusterYamlRequest&;
    using Resp = GetRayClusterYamlResponse;

    DoRequestAsync<Req, Resp>(
        "GetRayClusterYaml", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::GetRayClusterYamlOutcomeCallable DlcClient::GetRayClusterYamlCallable(const GetRayClusterYamlRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetRayClusterYamlOutcome>>();
    GetRayClusterYamlAsync(
    request,
    [prom](
        const DlcClient*,
        const GetRayClusterYamlRequest&,
        GetRayClusterYamlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::GetRayJobOutcome DlcClient::GetRayJob(const GetRayJobRequest &request)
{
    auto outcome = MakeRequest(request, "GetRayJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetRayJobResponse rsp = GetRayJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetRayJobOutcome(rsp);
        else
            return GetRayJobOutcome(o.GetError());
    }
    else
    {
        return GetRayJobOutcome(outcome.GetError());
    }
}

void DlcClient::GetRayJobAsync(const GetRayJobRequest& request, const GetRayJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetRayJobRequest&;
    using Resp = GetRayJobResponse;

    DoRequestAsync<Req, Resp>(
        "GetRayJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::GetRayJobOutcomeCallable DlcClient::GetRayJobCallable(const GetRayJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetRayJobOutcome>>();
    GetRayJobAsync(
    request,
    [prom](
        const DlcClient*,
        const GetRayJobRequest&,
        GetRayJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::GetRayJobEventOutcome DlcClient::GetRayJobEvent(const GetRayJobEventRequest &request)
{
    auto outcome = MakeRequest(request, "GetRayJobEvent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetRayJobEventResponse rsp = GetRayJobEventResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetRayJobEventOutcome(rsp);
        else
            return GetRayJobEventOutcome(o.GetError());
    }
    else
    {
        return GetRayJobEventOutcome(outcome.GetError());
    }
}

void DlcClient::GetRayJobEventAsync(const GetRayJobEventRequest& request, const GetRayJobEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetRayJobEventRequest&;
    using Resp = GetRayJobEventResponse;

    DoRequestAsync<Req, Resp>(
        "GetRayJobEvent", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::GetRayJobEventOutcomeCallable DlcClient::GetRayJobEventCallable(const GetRayJobEventRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetRayJobEventOutcome>>();
    GetRayJobEventAsync(
    request,
    [prom](
        const DlcClient*,
        const GetRayJobEventRequest&,
        GetRayJobEventOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::GetRayJobEventLogOutcome DlcClient::GetRayJobEventLog(const GetRayJobEventLogRequest &request)
{
    auto outcome = MakeRequest(request, "GetRayJobEventLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetRayJobEventLogResponse rsp = GetRayJobEventLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetRayJobEventLogOutcome(rsp);
        else
            return GetRayJobEventLogOutcome(o.GetError());
    }
    else
    {
        return GetRayJobEventLogOutcome(outcome.GetError());
    }
}

void DlcClient::GetRayJobEventLogAsync(const GetRayJobEventLogRequest& request, const GetRayJobEventLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetRayJobEventLogRequest&;
    using Resp = GetRayJobEventLogResponse;

    DoRequestAsync<Req, Resp>(
        "GetRayJobEventLog", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::GetRayJobEventLogOutcomeCallable DlcClient::GetRayJobEventLogCallable(const GetRayJobEventLogRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetRayJobEventLogOutcome>>();
    GetRayJobEventLogAsync(
    request,
    [prom](
        const DlcClient*,
        const GetRayJobEventLogRequest&,
        GetRayJobEventLogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::GetRayJobHistoryOutcome DlcClient::GetRayJobHistory(const GetRayJobHistoryRequest &request)
{
    auto outcome = MakeRequest(request, "GetRayJobHistory");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetRayJobHistoryResponse rsp = GetRayJobHistoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetRayJobHistoryOutcome(rsp);
        else
            return GetRayJobHistoryOutcome(o.GetError());
    }
    else
    {
        return GetRayJobHistoryOutcome(outcome.GetError());
    }
}

void DlcClient::GetRayJobHistoryAsync(const GetRayJobHistoryRequest& request, const GetRayJobHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetRayJobHistoryRequest&;
    using Resp = GetRayJobHistoryResponse;

    DoRequestAsync<Req, Resp>(
        "GetRayJobHistory", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::GetRayJobHistoryOutcomeCallable DlcClient::GetRayJobHistoryCallable(const GetRayJobHistoryRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetRayJobHistoryOutcome>>();
    GetRayJobHistoryAsync(
    request,
    [prom](
        const DlcClient*,
        const GetRayJobHistoryRequest&,
        GetRayJobHistoryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::GetRayJobPodYamlOutcome DlcClient::GetRayJobPodYaml(const GetRayJobPodYamlRequest &request)
{
    auto outcome = MakeRequest(request, "GetRayJobPodYaml");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetRayJobPodYamlResponse rsp = GetRayJobPodYamlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetRayJobPodYamlOutcome(rsp);
        else
            return GetRayJobPodYamlOutcome(o.GetError());
    }
    else
    {
        return GetRayJobPodYamlOutcome(outcome.GetError());
    }
}

void DlcClient::GetRayJobPodYamlAsync(const GetRayJobPodYamlRequest& request, const GetRayJobPodYamlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetRayJobPodYamlRequest&;
    using Resp = GetRayJobPodYamlResponse;

    DoRequestAsync<Req, Resp>(
        "GetRayJobPodYaml", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::GetRayJobPodYamlOutcomeCallable DlcClient::GetRayJobPodYamlCallable(const GetRayJobPodYamlRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetRayJobPodYamlOutcome>>();
    GetRayJobPodYamlAsync(
    request,
    [prom](
        const DlcClient*,
        const GetRayJobPodYamlRequest&,
        GetRayJobPodYamlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::GetRayJobPodsOutcome DlcClient::GetRayJobPods(const GetRayJobPodsRequest &request)
{
    auto outcome = MakeRequest(request, "GetRayJobPods");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetRayJobPodsResponse rsp = GetRayJobPodsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetRayJobPodsOutcome(rsp);
        else
            return GetRayJobPodsOutcome(o.GetError());
    }
    else
    {
        return GetRayJobPodsOutcome(outcome.GetError());
    }
}

void DlcClient::GetRayJobPodsAsync(const GetRayJobPodsRequest& request, const GetRayJobPodsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetRayJobPodsRequest&;
    using Resp = GetRayJobPodsResponse;

    DoRequestAsync<Req, Resp>(
        "GetRayJobPods", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::GetRayJobPodsOutcomeCallable DlcClient::GetRayJobPodsCallable(const GetRayJobPodsRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetRayJobPodsOutcome>>();
    GetRayJobPodsAsync(
    request,
    [prom](
        const DlcClient*,
        const GetRayJobPodsRequest&,
        GetRayJobPodsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::GetRayJobYamlOutcome DlcClient::GetRayJobYaml(const GetRayJobYamlRequest &request)
{
    auto outcome = MakeRequest(request, "GetRayJobYaml");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetRayJobYamlResponse rsp = GetRayJobYamlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetRayJobYamlOutcome(rsp);
        else
            return GetRayJobYamlOutcome(o.GetError());
    }
    else
    {
        return GetRayJobYamlOutcome(outcome.GetError());
    }
}

void DlcClient::GetRayJobYamlAsync(const GetRayJobYamlRequest& request, const GetRayJobYamlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetRayJobYamlRequest&;
    using Resp = GetRayJobYamlResponse;

    DoRequestAsync<Req, Resp>(
        "GetRayJobYaml", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::GetRayJobYamlOutcomeCallable DlcClient::GetRayJobYamlCallable(const GetRayJobYamlRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetRayJobYamlOutcome>>();
    GetRayJobYamlAsync(
    request,
    [prom](
        const DlcClient*,
        const GetRayJobYamlRequest&,
        GetRayJobYamlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::GetResourceConfigOutcome DlcClient::GetResourceConfig(const GetResourceConfigRequest &request)
{
    auto outcome = MakeRequest(request, "GetResourceConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetResourceConfigResponse rsp = GetResourceConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetResourceConfigOutcome(rsp);
        else
            return GetResourceConfigOutcome(o.GetError());
    }
    else
    {
        return GetResourceConfigOutcome(outcome.GetError());
    }
}

void DlcClient::GetResourceConfigAsync(const GetResourceConfigRequest& request, const GetResourceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetResourceConfigRequest&;
    using Resp = GetResourceConfigResponse;

    DoRequestAsync<Req, Resp>(
        "GetResourceConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::GetResourceConfigOutcomeCallable DlcClient::GetResourceConfigCallable(const GetResourceConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetResourceConfigOutcome>>();
    GetResourceConfigAsync(
    request,
    [prom](
        const DlcClient*,
        const GetResourceConfigRequest&,
        GetResourceConfigOutcome resp,
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

DlcClient::ImportExternalClusterOutcome DlcClient::ImportExternalCluster(const ImportExternalClusterRequest &request)
{
    auto outcome = MakeRequest(request, "ImportExternalCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ImportExternalClusterResponse rsp = ImportExternalClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ImportExternalClusterOutcome(rsp);
        else
            return ImportExternalClusterOutcome(o.GetError());
    }
    else
    {
        return ImportExternalClusterOutcome(outcome.GetError());
    }
}

void DlcClient::ImportExternalClusterAsync(const ImportExternalClusterRequest& request, const ImportExternalClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ImportExternalClusterRequest&;
    using Resp = ImportExternalClusterResponse;

    DoRequestAsync<Req, Resp>(
        "ImportExternalCluster", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::ImportExternalClusterOutcomeCallable DlcClient::ImportExternalClusterCallable(const ImportExternalClusterRequest &request)
{
    const auto prom = std::make_shared<std::promise<ImportExternalClusterOutcome>>();
    ImportExternalClusterAsync(
    request,
    [prom](
        const DlcClient*,
        const ImportExternalClusterRequest&,
        ImportExternalClusterOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::ImportTkeClusterOutcome DlcClient::ImportTkeCluster(const ImportTkeClusterRequest &request)
{
    auto outcome = MakeRequest(request, "ImportTkeCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ImportTkeClusterResponse rsp = ImportTkeClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ImportTkeClusterOutcome(rsp);
        else
            return ImportTkeClusterOutcome(o.GetError());
    }
    else
    {
        return ImportTkeClusterOutcome(outcome.GetError());
    }
}

void DlcClient::ImportTkeClusterAsync(const ImportTkeClusterRequest& request, const ImportTkeClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ImportTkeClusterRequest&;
    using Resp = ImportTkeClusterResponse;

    DoRequestAsync<Req, Resp>(
        "ImportTkeCluster", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::ImportTkeClusterOutcomeCallable DlcClient::ImportTkeClusterCallable(const ImportTkeClusterRequest &request)
{
    const auto prom = std::make_shared<std::promise<ImportTkeClusterOutcome>>();
    ImportTkeClusterAsync(
    request,
    [prom](
        const DlcClient*,
        const ImportTkeClusterRequest&,
        ImportTkeClusterOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::InitializeTCLakeOutcome DlcClient::InitializeTCLake(const InitializeTCLakeRequest &request)
{
    auto outcome = MakeRequest(request, "InitializeTCLake");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InitializeTCLakeResponse rsp = InitializeTCLakeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InitializeTCLakeOutcome(rsp);
        else
            return InitializeTCLakeOutcome(o.GetError());
    }
    else
    {
        return InitializeTCLakeOutcome(outcome.GetError());
    }
}

void DlcClient::InitializeTCLakeAsync(const InitializeTCLakeRequest& request, const InitializeTCLakeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const InitializeTCLakeRequest&;
    using Resp = InitializeTCLakeResponse;

    DoRequestAsync<Req, Resp>(
        "InitializeTCLake", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::InitializeTCLakeOutcomeCallable DlcClient::InitializeTCLakeCallable(const InitializeTCLakeRequest &request)
{
    const auto prom = std::make_shared<std::promise<InitializeTCLakeOutcome>>();
    InitializeTCLakeAsync(
    request,
    [prom](
        const DlcClient*,
        const InitializeTCLakeRequest&,
        InitializeTCLakeOutcome resp,
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

DlcClient::ListApiKeysOutcome DlcClient::ListApiKeys(const ListApiKeysRequest &request)
{
    auto outcome = MakeRequest(request, "ListApiKeys");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListApiKeysResponse rsp = ListApiKeysResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListApiKeysOutcome(rsp);
        else
            return ListApiKeysOutcome(o.GetError());
    }
    else
    {
        return ListApiKeysOutcome(outcome.GetError());
    }
}

void DlcClient::ListApiKeysAsync(const ListApiKeysRequest& request, const ListApiKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListApiKeysRequest&;
    using Resp = ListApiKeysResponse;

    DoRequestAsync<Req, Resp>(
        "ListApiKeys", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::ListApiKeysOutcomeCallable DlcClient::ListApiKeysCallable(const ListApiKeysRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListApiKeysOutcome>>();
    ListApiKeysAsync(
    request,
    [prom](
        const DlcClient*,
        const ListApiKeysRequest&,
        ListApiKeysOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::ListAvailableApiKeysOutcome DlcClient::ListAvailableApiKeys(const ListAvailableApiKeysRequest &request)
{
    auto outcome = MakeRequest(request, "ListAvailableApiKeys");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListAvailableApiKeysResponse rsp = ListAvailableApiKeysResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListAvailableApiKeysOutcome(rsp);
        else
            return ListAvailableApiKeysOutcome(o.GetError());
    }
    else
    {
        return ListAvailableApiKeysOutcome(outcome.GetError());
    }
}

void DlcClient::ListAvailableApiKeysAsync(const ListAvailableApiKeysRequest& request, const ListAvailableApiKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListAvailableApiKeysRequest&;
    using Resp = ListAvailableApiKeysResponse;

    DoRequestAsync<Req, Resp>(
        "ListAvailableApiKeys", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::ListAvailableApiKeysOutcomeCallable DlcClient::ListAvailableApiKeysCallable(const ListAvailableApiKeysRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListAvailableApiKeysOutcome>>();
    ListAvailableApiKeysAsync(
    request,
    [prom](
        const DlcClient*,
        const ListAvailableApiKeysRequest&,
        ListAvailableApiKeysOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::ListBenchmarkSummaryOutcome DlcClient::ListBenchmarkSummary(const ListBenchmarkSummaryRequest &request)
{
    auto outcome = MakeRequest(request, "ListBenchmarkSummary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListBenchmarkSummaryResponse rsp = ListBenchmarkSummaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListBenchmarkSummaryOutcome(rsp);
        else
            return ListBenchmarkSummaryOutcome(o.GetError());
    }
    else
    {
        return ListBenchmarkSummaryOutcome(outcome.GetError());
    }
}

void DlcClient::ListBenchmarkSummaryAsync(const ListBenchmarkSummaryRequest& request, const ListBenchmarkSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListBenchmarkSummaryRequest&;
    using Resp = ListBenchmarkSummaryResponse;

    DoRequestAsync<Req, Resp>(
        "ListBenchmarkSummary", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::ListBenchmarkSummaryOutcomeCallable DlcClient::ListBenchmarkSummaryCallable(const ListBenchmarkSummaryRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListBenchmarkSummaryOutcome>>();
    ListBenchmarkSummaryAsync(
    request,
    [prom](
        const DlcClient*,
        const ListBenchmarkSummaryRequest&,
        ListBenchmarkSummaryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::ListBenchmarkTasksOutcome DlcClient::ListBenchmarkTasks(const ListBenchmarkTasksRequest &request)
{
    auto outcome = MakeRequest(request, "ListBenchmarkTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListBenchmarkTasksResponse rsp = ListBenchmarkTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListBenchmarkTasksOutcome(rsp);
        else
            return ListBenchmarkTasksOutcome(o.GetError());
    }
    else
    {
        return ListBenchmarkTasksOutcome(outcome.GetError());
    }
}

void DlcClient::ListBenchmarkTasksAsync(const ListBenchmarkTasksRequest& request, const ListBenchmarkTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListBenchmarkTasksRequest&;
    using Resp = ListBenchmarkTasksResponse;

    DoRequestAsync<Req, Resp>(
        "ListBenchmarkTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::ListBenchmarkTasksOutcomeCallable DlcClient::ListBenchmarkTasksCallable(const ListBenchmarkTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListBenchmarkTasksOutcome>>();
    ListBenchmarkTasksAsync(
    request,
    [prom](
        const DlcClient*,
        const ListBenchmarkTasksRequest&,
        ListBenchmarkTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::ListClusterGroupsOutcome DlcClient::ListClusterGroups(const ListClusterGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "ListClusterGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListClusterGroupsResponse rsp = ListClusterGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListClusterGroupsOutcome(rsp);
        else
            return ListClusterGroupsOutcome(o.GetError());
    }
    else
    {
        return ListClusterGroupsOutcome(outcome.GetError());
    }
}

void DlcClient::ListClusterGroupsAsync(const ListClusterGroupsRequest& request, const ListClusterGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListClusterGroupsRequest&;
    using Resp = ListClusterGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "ListClusterGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::ListClusterGroupsOutcomeCallable DlcClient::ListClusterGroupsCallable(const ListClusterGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListClusterGroupsOutcome>>();
    ListClusterGroupsAsync(
    request,
    [prom](
        const DlcClient*,
        const ListClusterGroupsRequest&,
        ListClusterGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::ListDeploymentReplicasOutcome DlcClient::ListDeploymentReplicas(const ListDeploymentReplicasRequest &request)
{
    auto outcome = MakeRequest(request, "ListDeploymentReplicas");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListDeploymentReplicasResponse rsp = ListDeploymentReplicasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListDeploymentReplicasOutcome(rsp);
        else
            return ListDeploymentReplicasOutcome(o.GetError());
    }
    else
    {
        return ListDeploymentReplicasOutcome(outcome.GetError());
    }
}

void DlcClient::ListDeploymentReplicasAsync(const ListDeploymentReplicasRequest& request, const ListDeploymentReplicasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListDeploymentReplicasRequest&;
    using Resp = ListDeploymentReplicasResponse;

    DoRequestAsync<Req, Resp>(
        "ListDeploymentReplicas", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::ListDeploymentReplicasOutcomeCallable DlcClient::ListDeploymentReplicasCallable(const ListDeploymentReplicasRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListDeploymentReplicasOutcome>>();
    ListDeploymentReplicasAsync(
    request,
    [prom](
        const DlcClient*,
        const ListDeploymentReplicasRequest&,
        ListDeploymentReplicasOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::ListDeploymentsOutcome DlcClient::ListDeployments(const ListDeploymentsRequest &request)
{
    auto outcome = MakeRequest(request, "ListDeployments");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListDeploymentsResponse rsp = ListDeploymentsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListDeploymentsOutcome(rsp);
        else
            return ListDeploymentsOutcome(o.GetError());
    }
    else
    {
        return ListDeploymentsOutcome(outcome.GetError());
    }
}

void DlcClient::ListDeploymentsAsync(const ListDeploymentsRequest& request, const ListDeploymentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListDeploymentsRequest&;
    using Resp = ListDeploymentsResponse;

    DoRequestAsync<Req, Resp>(
        "ListDeployments", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::ListDeploymentsOutcomeCallable DlcClient::ListDeploymentsCallable(const ListDeploymentsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListDeploymentsOutcome>>();
    ListDeploymentsAsync(
    request,
    [prom](
        const DlcClient*,
        const ListDeploymentsRequest&,
        ListDeploymentsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::ListExampleCategoriesOutcome DlcClient::ListExampleCategories(const ListExampleCategoriesRequest &request)
{
    auto outcome = MakeRequest(request, "ListExampleCategories");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListExampleCategoriesResponse rsp = ListExampleCategoriesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListExampleCategoriesOutcome(rsp);
        else
            return ListExampleCategoriesOutcome(o.GetError());
    }
    else
    {
        return ListExampleCategoriesOutcome(outcome.GetError());
    }
}

void DlcClient::ListExampleCategoriesAsync(const ListExampleCategoriesRequest& request, const ListExampleCategoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListExampleCategoriesRequest&;
    using Resp = ListExampleCategoriesResponse;

    DoRequestAsync<Req, Resp>(
        "ListExampleCategories", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::ListExampleCategoriesOutcomeCallable DlcClient::ListExampleCategoriesCallable(const ListExampleCategoriesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListExampleCategoriesOutcome>>();
    ListExampleCategoriesAsync(
    request,
    [prom](
        const DlcClient*,
        const ListExampleCategoriesRequest&,
        ListExampleCategoriesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::ListExampleDifficultiesOutcome DlcClient::ListExampleDifficulties(const ListExampleDifficultiesRequest &request)
{
    auto outcome = MakeRequest(request, "ListExampleDifficulties");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListExampleDifficultiesResponse rsp = ListExampleDifficultiesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListExampleDifficultiesOutcome(rsp);
        else
            return ListExampleDifficultiesOutcome(o.GetError());
    }
    else
    {
        return ListExampleDifficultiesOutcome(outcome.GetError());
    }
}

void DlcClient::ListExampleDifficultiesAsync(const ListExampleDifficultiesRequest& request, const ListExampleDifficultiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListExampleDifficultiesRequest&;
    using Resp = ListExampleDifficultiesResponse;

    DoRequestAsync<Req, Resp>(
        "ListExampleDifficulties", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::ListExampleDifficultiesOutcomeCallable DlcClient::ListExampleDifficultiesCallable(const ListExampleDifficultiesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListExampleDifficultiesOutcome>>();
    ListExampleDifficultiesAsync(
    request,
    [prom](
        const DlcClient*,
        const ListExampleDifficultiesRequest&,
        ListExampleDifficultiesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::ListExampleTagsOutcome DlcClient::ListExampleTags(const ListExampleTagsRequest &request)
{
    auto outcome = MakeRequest(request, "ListExampleTags");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListExampleTagsResponse rsp = ListExampleTagsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListExampleTagsOutcome(rsp);
        else
            return ListExampleTagsOutcome(o.GetError());
    }
    else
    {
        return ListExampleTagsOutcome(outcome.GetError());
    }
}

void DlcClient::ListExampleTagsAsync(const ListExampleTagsRequest& request, const ListExampleTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListExampleTagsRequest&;
    using Resp = ListExampleTagsResponse;

    DoRequestAsync<Req, Resp>(
        "ListExampleTags", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::ListExampleTagsOutcomeCallable DlcClient::ListExampleTagsCallable(const ListExampleTagsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListExampleTagsOutcome>>();
    ListExampleTagsAsync(
    request,
    [prom](
        const DlcClient*,
        const ListExampleTagsRequest&,
        ListExampleTagsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::ListExamplesOutcome DlcClient::ListExamples(const ListExamplesRequest &request)
{
    auto outcome = MakeRequest(request, "ListExamples");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListExamplesResponse rsp = ListExamplesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListExamplesOutcome(rsp);
        else
            return ListExamplesOutcome(o.GetError());
    }
    else
    {
        return ListExamplesOutcome(outcome.GetError());
    }
}

void DlcClient::ListExamplesAsync(const ListExamplesRequest& request, const ListExamplesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListExamplesRequest&;
    using Resp = ListExamplesResponse;

    DoRequestAsync<Req, Resp>(
        "ListExamples", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::ListExamplesOutcomeCallable DlcClient::ListExamplesCallable(const ListExamplesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListExamplesOutcome>>();
    ListExamplesAsync(
    request,
    [prom](
        const DlcClient*,
        const ListExamplesRequest&,
        ListExamplesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::ListImagesOutcome DlcClient::ListImages(const ListImagesRequest &request)
{
    auto outcome = MakeRequest(request, "ListImages");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListImagesResponse rsp = ListImagesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListImagesOutcome(rsp);
        else
            return ListImagesOutcome(o.GetError());
    }
    else
    {
        return ListImagesOutcome(outcome.GetError());
    }
}

void DlcClient::ListImagesAsync(const ListImagesRequest& request, const ListImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListImagesRequest&;
    using Resp = ListImagesResponse;

    DoRequestAsync<Req, Resp>(
        "ListImages", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::ListImagesOutcomeCallable DlcClient::ListImagesCallable(const ListImagesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListImagesOutcome>>();
    ListImagesAsync(
    request,
    [prom](
        const DlcClient*,
        const ListImagesRequest&,
        ListImagesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::ListInferenceEnginesOutcome DlcClient::ListInferenceEngines(const ListInferenceEnginesRequest &request)
{
    auto outcome = MakeRequest(request, "ListInferenceEngines");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListInferenceEnginesResponse rsp = ListInferenceEnginesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListInferenceEnginesOutcome(rsp);
        else
            return ListInferenceEnginesOutcome(o.GetError());
    }
    else
    {
        return ListInferenceEnginesOutcome(outcome.GetError());
    }
}

void DlcClient::ListInferenceEnginesAsync(const ListInferenceEnginesRequest& request, const ListInferenceEnginesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListInferenceEnginesRequest&;
    using Resp = ListInferenceEnginesResponse;

    DoRequestAsync<Req, Resp>(
        "ListInferenceEngines", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::ListInferenceEnginesOutcomeCallable DlcClient::ListInferenceEnginesCallable(const ListInferenceEnginesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListInferenceEnginesOutcome>>();
    ListInferenceEnginesAsync(
    request,
    [prom](
        const DlcClient*,
        const ListInferenceEnginesRequest&,
        ListInferenceEnginesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::ListInferenceModelsOutcome DlcClient::ListInferenceModels(const ListInferenceModelsRequest &request)
{
    auto outcome = MakeRequest(request, "ListInferenceModels");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListInferenceModelsResponse rsp = ListInferenceModelsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListInferenceModelsOutcome(rsp);
        else
            return ListInferenceModelsOutcome(o.GetError());
    }
    else
    {
        return ListInferenceModelsOutcome(outcome.GetError());
    }
}

void DlcClient::ListInferenceModelsAsync(const ListInferenceModelsRequest& request, const ListInferenceModelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListInferenceModelsRequest&;
    using Resp = ListInferenceModelsResponse;

    DoRequestAsync<Req, Resp>(
        "ListInferenceModels", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::ListInferenceModelsOutcomeCallable DlcClient::ListInferenceModelsCallable(const ListInferenceModelsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListInferenceModelsOutcome>>();
    ListInferenceModelsAsync(
    request,
    [prom](
        const DlcClient*,
        const ListInferenceModelsRequest&,
        ListInferenceModelsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::ListInferenceServicesOutcome DlcClient::ListInferenceServices(const ListInferenceServicesRequest &request)
{
    auto outcome = MakeRequest(request, "ListInferenceServices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListInferenceServicesResponse rsp = ListInferenceServicesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListInferenceServicesOutcome(rsp);
        else
            return ListInferenceServicesOutcome(o.GetError());
    }
    else
    {
        return ListInferenceServicesOutcome(outcome.GetError());
    }
}

void DlcClient::ListInferenceServicesAsync(const ListInferenceServicesRequest& request, const ListInferenceServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListInferenceServicesRequest&;
    using Resp = ListInferenceServicesResponse;

    DoRequestAsync<Req, Resp>(
        "ListInferenceServices", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::ListInferenceServicesOutcomeCallable DlcClient::ListInferenceServicesCallable(const ListInferenceServicesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListInferenceServicesOutcome>>();
    ListInferenceServicesAsync(
    request,
    [prom](
        const DlcClient*,
        const ListInferenceServicesRequest&,
        ListInferenceServicesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::ListJobSpecsOutcome DlcClient::ListJobSpecs(const ListJobSpecsRequest &request)
{
    auto outcome = MakeRequest(request, "ListJobSpecs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListJobSpecsResponse rsp = ListJobSpecsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListJobSpecsOutcome(rsp);
        else
            return ListJobSpecsOutcome(o.GetError());
    }
    else
    {
        return ListJobSpecsOutcome(outcome.GetError());
    }
}

void DlcClient::ListJobSpecsAsync(const ListJobSpecsRequest& request, const ListJobSpecsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListJobSpecsRequest&;
    using Resp = ListJobSpecsResponse;

    DoRequestAsync<Req, Resp>(
        "ListJobSpecs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::ListJobSpecsOutcomeCallable DlcClient::ListJobSpecsCallable(const ListJobSpecsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListJobSpecsOutcome>>();
    ListJobSpecsAsync(
    request,
    [prom](
        const DlcClient*,
        const ListJobSpecsRequest&,
        ListJobSpecsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::ListJobsBySpecOutcome DlcClient::ListJobsBySpec(const ListJobsBySpecRequest &request)
{
    auto outcome = MakeRequest(request, "ListJobsBySpec");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListJobsBySpecResponse rsp = ListJobsBySpecResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListJobsBySpecOutcome(rsp);
        else
            return ListJobsBySpecOutcome(o.GetError());
    }
    else
    {
        return ListJobsBySpecOutcome(outcome.GetError());
    }
}

void DlcClient::ListJobsBySpecAsync(const ListJobsBySpecRequest& request, const ListJobsBySpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListJobsBySpecRequest&;
    using Resp = ListJobsBySpecResponse;

    DoRequestAsync<Req, Resp>(
        "ListJobsBySpec", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::ListJobsBySpecOutcomeCallable DlcClient::ListJobsBySpecCallable(const ListJobsBySpecRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListJobsBySpecOutcome>>();
    ListJobsBySpecAsync(
    request,
    [prom](
        const DlcClient*,
        const ListJobsBySpecRequest&,
        ListJobsBySpecOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::ListLabsOutcome DlcClient::ListLabs(const ListLabsRequest &request)
{
    auto outcome = MakeRequest(request, "ListLabs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListLabsResponse rsp = ListLabsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListLabsOutcome(rsp);
        else
            return ListLabsOutcome(o.GetError());
    }
    else
    {
        return ListLabsOutcome(outcome.GetError());
    }
}

void DlcClient::ListLabsAsync(const ListLabsRequest& request, const ListLabsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListLabsRequest&;
    using Resp = ListLabsResponse;

    DoRequestAsync<Req, Resp>(
        "ListLabs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::ListLabsOutcomeCallable DlcClient::ListLabsCallable(const ListLabsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListLabsOutcome>>();
    ListLabsAsync(
    request,
    [prom](
        const DlcClient*,
        const ListLabsRequest&,
        ListLabsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::ListMlflowServerTrainingInstancesOutcome DlcClient::ListMlflowServerTrainingInstances(const ListMlflowServerTrainingInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "ListMlflowServerTrainingInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListMlflowServerTrainingInstancesResponse rsp = ListMlflowServerTrainingInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListMlflowServerTrainingInstancesOutcome(rsp);
        else
            return ListMlflowServerTrainingInstancesOutcome(o.GetError());
    }
    else
    {
        return ListMlflowServerTrainingInstancesOutcome(outcome.GetError());
    }
}

void DlcClient::ListMlflowServerTrainingInstancesAsync(const ListMlflowServerTrainingInstancesRequest& request, const ListMlflowServerTrainingInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListMlflowServerTrainingInstancesRequest&;
    using Resp = ListMlflowServerTrainingInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "ListMlflowServerTrainingInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::ListMlflowServerTrainingInstancesOutcomeCallable DlcClient::ListMlflowServerTrainingInstancesCallable(const ListMlflowServerTrainingInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListMlflowServerTrainingInstancesOutcome>>();
    ListMlflowServerTrainingInstancesAsync(
    request,
    [prom](
        const DlcClient*,
        const ListMlflowServerTrainingInstancesRequest&,
        ListMlflowServerTrainingInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::ListMlflowServersOutcome DlcClient::ListMlflowServers(const ListMlflowServersRequest &request)
{
    auto outcome = MakeRequest(request, "ListMlflowServers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListMlflowServersResponse rsp = ListMlflowServersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListMlflowServersOutcome(rsp);
        else
            return ListMlflowServersOutcome(o.GetError());
    }
    else
    {
        return ListMlflowServersOutcome(outcome.GetError());
    }
}

void DlcClient::ListMlflowServersAsync(const ListMlflowServersRequest& request, const ListMlflowServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListMlflowServersRequest&;
    using Resp = ListMlflowServersResponse;

    DoRequestAsync<Req, Resp>(
        "ListMlflowServers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::ListMlflowServersOutcomeCallable DlcClient::ListMlflowServersCallable(const ListMlflowServersRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListMlflowServersOutcome>>();
    ListMlflowServersAsync(
    request,
    [prom](
        const DlcClient*,
        const ListMlflowServersRequest&,
        ListMlflowServersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::ListModelVersionsOutcome DlcClient::ListModelVersions(const ListModelVersionsRequest &request)
{
    auto outcome = MakeRequest(request, "ListModelVersions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListModelVersionsResponse rsp = ListModelVersionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListModelVersionsOutcome(rsp);
        else
            return ListModelVersionsOutcome(o.GetError());
    }
    else
    {
        return ListModelVersionsOutcome(outcome.GetError());
    }
}

void DlcClient::ListModelVersionsAsync(const ListModelVersionsRequest& request, const ListModelVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListModelVersionsRequest&;
    using Resp = ListModelVersionsResponse;

    DoRequestAsync<Req, Resp>(
        "ListModelVersions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::ListModelVersionsOutcomeCallable DlcClient::ListModelVersionsCallable(const ListModelVersionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListModelVersionsOutcome>>();
    ListModelVersionsAsync(
    request,
    [prom](
        const DlcClient*,
        const ListModelVersionsRequest&,
        ListModelVersionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::ListRayClusterJobsOutcome DlcClient::ListRayClusterJobs(const ListRayClusterJobsRequest &request)
{
    auto outcome = MakeRequest(request, "ListRayClusterJobs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListRayClusterJobsResponse rsp = ListRayClusterJobsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListRayClusterJobsOutcome(rsp);
        else
            return ListRayClusterJobsOutcome(o.GetError());
    }
    else
    {
        return ListRayClusterJobsOutcome(outcome.GetError());
    }
}

void DlcClient::ListRayClusterJobsAsync(const ListRayClusterJobsRequest& request, const ListRayClusterJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListRayClusterJobsRequest&;
    using Resp = ListRayClusterJobsResponse;

    DoRequestAsync<Req, Resp>(
        "ListRayClusterJobs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::ListRayClusterJobsOutcomeCallable DlcClient::ListRayClusterJobsCallable(const ListRayClusterJobsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListRayClusterJobsOutcome>>();
    ListRayClusterJobsAsync(
    request,
    [prom](
        const DlcClient*,
        const ListRayClusterJobsRequest&,
        ListRayClusterJobsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::ListRayClustersOutcome DlcClient::ListRayClusters(const ListRayClustersRequest &request)
{
    auto outcome = MakeRequest(request, "ListRayClusters");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListRayClustersResponse rsp = ListRayClustersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListRayClustersOutcome(rsp);
        else
            return ListRayClustersOutcome(o.GetError());
    }
    else
    {
        return ListRayClustersOutcome(outcome.GetError());
    }
}

void DlcClient::ListRayClustersAsync(const ListRayClustersRequest& request, const ListRayClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListRayClustersRequest&;
    using Resp = ListRayClustersResponse;

    DoRequestAsync<Req, Resp>(
        "ListRayClusters", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::ListRayClustersOutcomeCallable DlcClient::ListRayClustersCallable(const ListRayClustersRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListRayClustersOutcome>>();
    ListRayClustersAsync(
    request,
    [prom](
        const DlcClient*,
        const ListRayClustersRequest&,
        ListRayClustersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::ListRayJobsOutcome DlcClient::ListRayJobs(const ListRayJobsRequest &request)
{
    auto outcome = MakeRequest(request, "ListRayJobs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListRayJobsResponse rsp = ListRayJobsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListRayJobsOutcome(rsp);
        else
            return ListRayJobsOutcome(o.GetError());
    }
    else
    {
        return ListRayJobsOutcome(outcome.GetError());
    }
}

void DlcClient::ListRayJobsAsync(const ListRayJobsRequest& request, const ListRayJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListRayJobsRequest&;
    using Resp = ListRayJobsResponse;

    DoRequestAsync<Req, Resp>(
        "ListRayJobs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::ListRayJobsOutcomeCallable DlcClient::ListRayJobsCallable(const ListRayJobsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListRayJobsOutcome>>();
    ListRayJobsAsync(
    request,
    [prom](
        const DlcClient*,
        const ListRayJobsRequest&,
        ListRayJobsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::ListRegionLbsOutcome DlcClient::ListRegionLbs(const ListRegionLbsRequest &request)
{
    auto outcome = MakeRequest(request, "ListRegionLbs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListRegionLbsResponse rsp = ListRegionLbsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListRegionLbsOutcome(rsp);
        else
            return ListRegionLbsOutcome(o.GetError());
    }
    else
    {
        return ListRegionLbsOutcome(outcome.GetError());
    }
}

void DlcClient::ListRegionLbsAsync(const ListRegionLbsRequest& request, const ListRegionLbsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListRegionLbsRequest&;
    using Resp = ListRegionLbsResponse;

    DoRequestAsync<Req, Resp>(
        "ListRegionLbs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::ListRegionLbsOutcomeCallable DlcClient::ListRegionLbsCallable(const ListRegionLbsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListRegionLbsOutcome>>();
    ListRegionLbsAsync(
    request,
    [prom](
        const DlcClient*,
        const ListRegionLbsRequest&,
        ListRegionLbsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::ListResourceConfigsOutcome DlcClient::ListResourceConfigs(const ListResourceConfigsRequest &request)
{
    auto outcome = MakeRequest(request, "ListResourceConfigs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListResourceConfigsResponse rsp = ListResourceConfigsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListResourceConfigsOutcome(rsp);
        else
            return ListResourceConfigsOutcome(o.GetError());
    }
    else
    {
        return ListResourceConfigsOutcome(outcome.GetError());
    }
}

void DlcClient::ListResourceConfigsAsync(const ListResourceConfigsRequest& request, const ListResourceConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListResourceConfigsRequest&;
    using Resp = ListResourceConfigsResponse;

    DoRequestAsync<Req, Resp>(
        "ListResourceConfigs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::ListResourceConfigsOutcomeCallable DlcClient::ListResourceConfigsCallable(const ListResourceConfigsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListResourceConfigsOutcome>>();
    ListResourceConfigsAsync(
    request,
    [prom](
        const DlcClient*,
        const ListResourceConfigsRequest&,
        ListResourceConfigsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::ListServiceApiKeysOutcome DlcClient::ListServiceApiKeys(const ListServiceApiKeysRequest &request)
{
    auto outcome = MakeRequest(request, "ListServiceApiKeys");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListServiceApiKeysResponse rsp = ListServiceApiKeysResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListServiceApiKeysOutcome(rsp);
        else
            return ListServiceApiKeysOutcome(o.GetError());
    }
    else
    {
        return ListServiceApiKeysOutcome(outcome.GetError());
    }
}

void DlcClient::ListServiceApiKeysAsync(const ListServiceApiKeysRequest& request, const ListServiceApiKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListServiceApiKeysRequest&;
    using Resp = ListServiceApiKeysResponse;

    DoRequestAsync<Req, Resp>(
        "ListServiceApiKeys", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::ListServiceApiKeysOutcomeCallable DlcClient::ListServiceApiKeysCallable(const ListServiceApiKeysRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListServiceApiKeysOutcome>>();
    ListServiceApiKeysAsync(
    request,
    [prom](
        const DlcClient*,
        const ListServiceApiKeysRequest&,
        ListServiceApiKeysOutcome resp,
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

DlcClient::ListTkeCosBucketsOutcome DlcClient::ListTkeCosBuckets(const ListTkeCosBucketsRequest &request)
{
    auto outcome = MakeRequest(request, "ListTkeCosBuckets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListTkeCosBucketsResponse rsp = ListTkeCosBucketsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListTkeCosBucketsOutcome(rsp);
        else
            return ListTkeCosBucketsOutcome(o.GetError());
    }
    else
    {
        return ListTkeCosBucketsOutcome(outcome.GetError());
    }
}

void DlcClient::ListTkeCosBucketsAsync(const ListTkeCosBucketsRequest& request, const ListTkeCosBucketsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListTkeCosBucketsRequest&;
    using Resp = ListTkeCosBucketsResponse;

    DoRequestAsync<Req, Resp>(
        "ListTkeCosBuckets", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::ListTkeCosBucketsOutcomeCallable DlcClient::ListTkeCosBucketsCallable(const ListTkeCosBucketsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListTkeCosBucketsOutcome>>();
    ListTkeCosBucketsAsync(
    request,
    [prom](
        const DlcClient*,
        const ListTkeCosBucketsRequest&,
        ListTkeCosBucketsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::ListTrainingJobInstanceOutcome DlcClient::ListTrainingJobInstance(const ListTrainingJobInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "ListTrainingJobInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListTrainingJobInstanceResponse rsp = ListTrainingJobInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListTrainingJobInstanceOutcome(rsp);
        else
            return ListTrainingJobInstanceOutcome(o.GetError());
    }
    else
    {
        return ListTrainingJobInstanceOutcome(outcome.GetError());
    }
}

void DlcClient::ListTrainingJobInstanceAsync(const ListTrainingJobInstanceRequest& request, const ListTrainingJobInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListTrainingJobInstanceRequest&;
    using Resp = ListTrainingJobInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "ListTrainingJobInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::ListTrainingJobInstanceOutcomeCallable DlcClient::ListTrainingJobInstanceCallable(const ListTrainingJobInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListTrainingJobInstanceOutcome>>();
    ListTrainingJobInstanceAsync(
    request,
    [prom](
        const DlcClient*,
        const ListTrainingJobInstanceRequest&,
        ListTrainingJobInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::ListTrainingJobSpecOutcome DlcClient::ListTrainingJobSpec(const ListTrainingJobSpecRequest &request)
{
    auto outcome = MakeRequest(request, "ListTrainingJobSpec");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListTrainingJobSpecResponse rsp = ListTrainingJobSpecResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListTrainingJobSpecOutcome(rsp);
        else
            return ListTrainingJobSpecOutcome(o.GetError());
    }
    else
    {
        return ListTrainingJobSpecOutcome(outcome.GetError());
    }
}

void DlcClient::ListTrainingJobSpecAsync(const ListTrainingJobSpecRequest& request, const ListTrainingJobSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListTrainingJobSpecRequest&;
    using Resp = ListTrainingJobSpecResponse;

    DoRequestAsync<Req, Resp>(
        "ListTrainingJobSpec", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::ListTrainingJobSpecOutcomeCallable DlcClient::ListTrainingJobSpecCallable(const ListTrainingJobSpecRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListTrainingJobSpecOutcome>>();
    ListTrainingJobSpecAsync(
    request,
    [prom](
        const DlcClient*,
        const ListTrainingJobSpecRequest&,
        ListTrainingJobSpecOutcome resp,
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

DlcClient::ModifyClusterPriorityOutcome DlcClient::ModifyClusterPriority(const ModifyClusterPriorityRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyClusterPriority");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyClusterPriorityResponse rsp = ModifyClusterPriorityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyClusterPriorityOutcome(rsp);
        else
            return ModifyClusterPriorityOutcome(o.GetError());
    }
    else
    {
        return ModifyClusterPriorityOutcome(outcome.GetError());
    }
}

void DlcClient::ModifyClusterPriorityAsync(const ModifyClusterPriorityRequest& request, const ModifyClusterPriorityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyClusterPriorityRequest&;
    using Resp = ModifyClusterPriorityResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyClusterPriority", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::ModifyClusterPriorityOutcomeCallable DlcClient::ModifyClusterPriorityCallable(const ModifyClusterPriorityRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyClusterPriorityOutcome>>();
    ModifyClusterPriorityAsync(
    request,
    [prom](
        const DlcClient*,
        const ModifyClusterPriorityRequest&,
        ModifyClusterPriorityOutcome resp,
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

DlcClient::ModifyLabPriorityOutcome DlcClient::ModifyLabPriority(const ModifyLabPriorityRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLabPriority");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLabPriorityResponse rsp = ModifyLabPriorityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLabPriorityOutcome(rsp);
        else
            return ModifyLabPriorityOutcome(o.GetError());
    }
    else
    {
        return ModifyLabPriorityOutcome(outcome.GetError());
    }
}

void DlcClient::ModifyLabPriorityAsync(const ModifyLabPriorityRequest& request, const ModifyLabPriorityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyLabPriorityRequest&;
    using Resp = ModifyLabPriorityResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyLabPriority", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::ModifyLabPriorityOutcomeCallable DlcClient::ModifyLabPriorityCallable(const ModifyLabPriorityRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyLabPriorityOutcome>>();
    ModifyLabPriorityAsync(
    request,
    [prom](
        const DlcClient*,
        const ModifyLabPriorityRequest&,
        ModifyLabPriorityOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::ModifyPartitionDescriptionOutcome DlcClient::ModifyPartitionDescription(const ModifyPartitionDescriptionRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPartitionDescription");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPartitionDescriptionResponse rsp = ModifyPartitionDescriptionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPartitionDescriptionOutcome(rsp);
        else
            return ModifyPartitionDescriptionOutcome(o.GetError());
    }
    else
    {
        return ModifyPartitionDescriptionOutcome(outcome.GetError());
    }
}

void DlcClient::ModifyPartitionDescriptionAsync(const ModifyPartitionDescriptionRequest& request, const ModifyPartitionDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyPartitionDescriptionRequest&;
    using Resp = ModifyPartitionDescriptionResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyPartitionDescription", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::ModifyPartitionDescriptionOutcomeCallable DlcClient::ModifyPartitionDescriptionCallable(const ModifyPartitionDescriptionRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyPartitionDescriptionOutcome>>();
    ModifyPartitionDescriptionAsync(
    request,
    [prom](
        const DlcClient*,
        const ModifyPartitionDescriptionRequest&,
        ModifyPartitionDescriptionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::ModifyPartitionQueueOutcome DlcClient::ModifyPartitionQueue(const ModifyPartitionQueueRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPartitionQueue");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPartitionQueueResponse rsp = ModifyPartitionQueueResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPartitionQueueOutcome(rsp);
        else
            return ModifyPartitionQueueOutcome(o.GetError());
    }
    else
    {
        return ModifyPartitionQueueOutcome(outcome.GetError());
    }
}

void DlcClient::ModifyPartitionQueueAsync(const ModifyPartitionQueueRequest& request, const ModifyPartitionQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyPartitionQueueRequest&;
    using Resp = ModifyPartitionQueueResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyPartitionQueue", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::ModifyPartitionQueueOutcomeCallable DlcClient::ModifyPartitionQueueCallable(const ModifyPartitionQueueRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyPartitionQueueOutcome>>();
    ModifyPartitionQueueAsync(
    request,
    [prom](
        const DlcClient*,
        const ModifyPartitionQueueRequest&,
        ModifyPartitionQueueOutcome resp,
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

DlcClient::ModifySparkAppForTDLCOutcome DlcClient::ModifySparkAppForTDLC(const ModifySparkAppForTDLCRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySparkAppForTDLC");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySparkAppForTDLCResponse rsp = ModifySparkAppForTDLCResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySparkAppForTDLCOutcome(rsp);
        else
            return ModifySparkAppForTDLCOutcome(o.GetError());
    }
    else
    {
        return ModifySparkAppForTDLCOutcome(outcome.GetError());
    }
}

void DlcClient::ModifySparkAppForTDLCAsync(const ModifySparkAppForTDLCRequest& request, const ModifySparkAppForTDLCAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifySparkAppForTDLCRequest&;
    using Resp = ModifySparkAppForTDLCResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySparkAppForTDLC", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::ModifySparkAppForTDLCOutcomeCallable DlcClient::ModifySparkAppForTDLCCallable(const ModifySparkAppForTDLCRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySparkAppForTDLCOutcome>>();
    ModifySparkAppForTDLCAsync(
    request,
    [prom](
        const DlcClient*,
        const ModifySparkAppForTDLCRequest&,
        ModifySparkAppForTDLCOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::ModifyTrainingJobSpecOutcome DlcClient::ModifyTrainingJobSpec(const ModifyTrainingJobSpecRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTrainingJobSpec");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTrainingJobSpecResponse rsp = ModifyTrainingJobSpecResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTrainingJobSpecOutcome(rsp);
        else
            return ModifyTrainingJobSpecOutcome(o.GetError());
    }
    else
    {
        return ModifyTrainingJobSpecOutcome(outcome.GetError());
    }
}

void DlcClient::ModifyTrainingJobSpecAsync(const ModifyTrainingJobSpecRequest& request, const ModifyTrainingJobSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyTrainingJobSpecRequest&;
    using Resp = ModifyTrainingJobSpecResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyTrainingJobSpec", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::ModifyTrainingJobSpecOutcomeCallable DlcClient::ModifyTrainingJobSpecCallable(const ModifyTrainingJobSpecRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyTrainingJobSpecOutcome>>();
    ModifyTrainingJobSpecAsync(
    request,
    [prom](
        const DlcClient*,
        const ModifyTrainingJobSpecRequest&,
        ModifyTrainingJobSpecOutcome resp,
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

DlcClient::QueryDashboardOverviewOutcome DlcClient::QueryDashboardOverview(const QueryDashboardOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "QueryDashboardOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryDashboardOverviewResponse rsp = QueryDashboardOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryDashboardOverviewOutcome(rsp);
        else
            return QueryDashboardOverviewOutcome(o.GetError());
    }
    else
    {
        return QueryDashboardOverviewOutcome(outcome.GetError());
    }
}

void DlcClient::QueryDashboardOverviewAsync(const QueryDashboardOverviewRequest& request, const QueryDashboardOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryDashboardOverviewRequest&;
    using Resp = QueryDashboardOverviewResponse;

    DoRequestAsync<Req, Resp>(
        "QueryDashboardOverview", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::QueryDashboardOverviewOutcomeCallable DlcClient::QueryDashboardOverviewCallable(const QueryDashboardOverviewRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryDashboardOverviewOutcome>>();
    QueryDashboardOverviewAsync(
    request,
    [prom](
        const DlcClient*,
        const QueryDashboardOverviewRequest&,
        QueryDashboardOverviewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::QueryDashboardServiceListOutcome DlcClient::QueryDashboardServiceList(const QueryDashboardServiceListRequest &request)
{
    auto outcome = MakeRequest(request, "QueryDashboardServiceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryDashboardServiceListResponse rsp = QueryDashboardServiceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryDashboardServiceListOutcome(rsp);
        else
            return QueryDashboardServiceListOutcome(o.GetError());
    }
    else
    {
        return QueryDashboardServiceListOutcome(outcome.GetError());
    }
}

void DlcClient::QueryDashboardServiceListAsync(const QueryDashboardServiceListRequest& request, const QueryDashboardServiceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryDashboardServiceListRequest&;
    using Resp = QueryDashboardServiceListResponse;

    DoRequestAsync<Req, Resp>(
        "QueryDashboardServiceList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::QueryDashboardServiceListOutcomeCallable DlcClient::QueryDashboardServiceListCallable(const QueryDashboardServiceListRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryDashboardServiceListOutcome>>();
    QueryDashboardServiceListAsync(
    request,
    [prom](
        const DlcClient*,
        const QueryDashboardServiceListRequest&,
        QueryDashboardServiceListOutcome resp,
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

DlcClient::QueryMonitorOverviewOutcome DlcClient::QueryMonitorOverview(const QueryMonitorOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "QueryMonitorOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryMonitorOverviewResponse rsp = QueryMonitorOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryMonitorOverviewOutcome(rsp);
        else
            return QueryMonitorOverviewOutcome(o.GetError());
    }
    else
    {
        return QueryMonitorOverviewOutcome(outcome.GetError());
    }
}

void DlcClient::QueryMonitorOverviewAsync(const QueryMonitorOverviewRequest& request, const QueryMonitorOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryMonitorOverviewRequest&;
    using Resp = QueryMonitorOverviewResponse;

    DoRequestAsync<Req, Resp>(
        "QueryMonitorOverview", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::QueryMonitorOverviewOutcomeCallable DlcClient::QueryMonitorOverviewCallable(const QueryMonitorOverviewRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryMonitorOverviewOutcome>>();
    QueryMonitorOverviewAsync(
    request,
    [prom](
        const DlcClient*,
        const QueryMonitorOverviewRequest&,
        QueryMonitorOverviewOutcome resp,
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

DlcClient::RerunBenchmarkTaskOutcome DlcClient::RerunBenchmarkTask(const RerunBenchmarkTaskRequest &request)
{
    auto outcome = MakeRequest(request, "RerunBenchmarkTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RerunBenchmarkTaskResponse rsp = RerunBenchmarkTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RerunBenchmarkTaskOutcome(rsp);
        else
            return RerunBenchmarkTaskOutcome(o.GetError());
    }
    else
    {
        return RerunBenchmarkTaskOutcome(outcome.GetError());
    }
}

void DlcClient::RerunBenchmarkTaskAsync(const RerunBenchmarkTaskRequest& request, const RerunBenchmarkTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RerunBenchmarkTaskRequest&;
    using Resp = RerunBenchmarkTaskResponse;

    DoRequestAsync<Req, Resp>(
        "RerunBenchmarkTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::RerunBenchmarkTaskOutcomeCallable DlcClient::RerunBenchmarkTaskCallable(const RerunBenchmarkTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<RerunBenchmarkTaskOutcome>>();
    RerunBenchmarkTaskAsync(
    request,
    [prom](
        const DlcClient*,
        const RerunBenchmarkTaskRequest&,
        RerunBenchmarkTaskOutcome resp,
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

DlcClient::RestartDeploymentOutcome DlcClient::RestartDeployment(const RestartDeploymentRequest &request)
{
    auto outcome = MakeRequest(request, "RestartDeployment");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RestartDeploymentResponse rsp = RestartDeploymentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RestartDeploymentOutcome(rsp);
        else
            return RestartDeploymentOutcome(o.GetError());
    }
    else
    {
        return RestartDeploymentOutcome(outcome.GetError());
    }
}

void DlcClient::RestartDeploymentAsync(const RestartDeploymentRequest& request, const RestartDeploymentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RestartDeploymentRequest&;
    using Resp = RestartDeploymentResponse;

    DoRequestAsync<Req, Resp>(
        "RestartDeployment", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::RestartDeploymentOutcomeCallable DlcClient::RestartDeploymentCallable(const RestartDeploymentRequest &request)
{
    const auto prom = std::make_shared<std::promise<RestartDeploymentOutcome>>();
    RestartDeploymentAsync(
    request,
    [prom](
        const DlcClient*,
        const RestartDeploymentRequest&,
        RestartDeploymentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::RestartInferenceServiceOutcome DlcClient::RestartInferenceService(const RestartInferenceServiceRequest &request)
{
    auto outcome = MakeRequest(request, "RestartInferenceService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RestartInferenceServiceResponse rsp = RestartInferenceServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RestartInferenceServiceOutcome(rsp);
        else
            return RestartInferenceServiceOutcome(o.GetError());
    }
    else
    {
        return RestartInferenceServiceOutcome(outcome.GetError());
    }
}

void DlcClient::RestartInferenceServiceAsync(const RestartInferenceServiceRequest& request, const RestartInferenceServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RestartInferenceServiceRequest&;
    using Resp = RestartInferenceServiceResponse;

    DoRequestAsync<Req, Resp>(
        "RestartInferenceService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::RestartInferenceServiceOutcomeCallable DlcClient::RestartInferenceServiceCallable(const RestartInferenceServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<RestartInferenceServiceOutcome>>();
    RestartInferenceServiceAsync(
    request,
    [prom](
        const DlcClient*,
        const RestartInferenceServiceRequest&,
        RestartInferenceServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::ResumeTrainingJobInstanceOutcome DlcClient::ResumeTrainingJobInstance(const ResumeTrainingJobInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "ResumeTrainingJobInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResumeTrainingJobInstanceResponse rsp = ResumeTrainingJobInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResumeTrainingJobInstanceOutcome(rsp);
        else
            return ResumeTrainingJobInstanceOutcome(o.GetError());
    }
    else
    {
        return ResumeTrainingJobInstanceOutcome(outcome.GetError());
    }
}

void DlcClient::ResumeTrainingJobInstanceAsync(const ResumeTrainingJobInstanceRequest& request, const ResumeTrainingJobInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ResumeTrainingJobInstanceRequest&;
    using Resp = ResumeTrainingJobInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "ResumeTrainingJobInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::ResumeTrainingJobInstanceOutcomeCallable DlcClient::ResumeTrainingJobInstanceCallable(const ResumeTrainingJobInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResumeTrainingJobInstanceOutcome>>();
    ResumeTrainingJobInstanceAsync(
    request,
    [prom](
        const DlcClient*,
        const ResumeTrainingJobInstanceRequest&,
        ResumeTrainingJobInstanceOutcome resp,
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

DlcClient::RunJobSpecOutcome DlcClient::RunJobSpec(const RunJobSpecRequest &request)
{
    auto outcome = MakeRequest(request, "RunJobSpec");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RunJobSpecResponse rsp = RunJobSpecResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RunJobSpecOutcome(rsp);
        else
            return RunJobSpecOutcome(o.GetError());
    }
    else
    {
        return RunJobSpecOutcome(outcome.GetError());
    }
}

void DlcClient::RunJobSpecAsync(const RunJobSpecRequest& request, const RunJobSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RunJobSpecRequest&;
    using Resp = RunJobSpecResponse;

    DoRequestAsync<Req, Resp>(
        "RunJobSpec", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::RunJobSpecOutcomeCallable DlcClient::RunJobSpecCallable(const RunJobSpecRequest &request)
{
    const auto prom = std::make_shared<std::promise<RunJobSpecOutcome>>();
    RunJobSpecAsync(
    request,
    [prom](
        const DlcClient*,
        const RunJobSpecRequest&,
        RunJobSpecOutcome resp,
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

DlcClient::StartLabOutcome DlcClient::StartLab(const StartLabRequest &request)
{
    auto outcome = MakeRequest(request, "StartLab");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartLabResponse rsp = StartLabResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartLabOutcome(rsp);
        else
            return StartLabOutcome(o.GetError());
    }
    else
    {
        return StartLabOutcome(outcome.GetError());
    }
}

void DlcClient::StartLabAsync(const StartLabRequest& request, const StartLabAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartLabRequest&;
    using Resp = StartLabResponse;

    DoRequestAsync<Req, Resp>(
        "StartLab", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::StartLabOutcomeCallable DlcClient::StartLabCallable(const StartLabRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartLabOutcome>>();
    StartLabAsync(
    request,
    [prom](
        const DlcClient*,
        const StartLabRequest&,
        StartLabOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::StartMlflowServerOutcome DlcClient::StartMlflowServer(const StartMlflowServerRequest &request)
{
    auto outcome = MakeRequest(request, "StartMlflowServer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartMlflowServerResponse rsp = StartMlflowServerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartMlflowServerOutcome(rsp);
        else
            return StartMlflowServerOutcome(o.GetError());
    }
    else
    {
        return StartMlflowServerOutcome(outcome.GetError());
    }
}

void DlcClient::StartMlflowServerAsync(const StartMlflowServerRequest& request, const StartMlflowServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartMlflowServerRequest&;
    using Resp = StartMlflowServerResponse;

    DoRequestAsync<Req, Resp>(
        "StartMlflowServer", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::StartMlflowServerOutcomeCallable DlcClient::StartMlflowServerCallable(const StartMlflowServerRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartMlflowServerOutcome>>();
    StartMlflowServerAsync(
    request,
    [prom](
        const DlcClient*,
        const StartMlflowServerRequest&,
        StartMlflowServerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::StartRayClusterOutcome DlcClient::StartRayCluster(const StartRayClusterRequest &request)
{
    auto outcome = MakeRequest(request, "StartRayCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartRayClusterResponse rsp = StartRayClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartRayClusterOutcome(rsp);
        else
            return StartRayClusterOutcome(o.GetError());
    }
    else
    {
        return StartRayClusterOutcome(outcome.GetError());
    }
}

void DlcClient::StartRayClusterAsync(const StartRayClusterRequest& request, const StartRayClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartRayClusterRequest&;
    using Resp = StartRayClusterResponse;

    DoRequestAsync<Req, Resp>(
        "StartRayCluster", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::StartRayClusterOutcomeCallable DlcClient::StartRayClusterCallable(const StartRayClusterRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartRayClusterOutcome>>();
    StartRayClusterAsync(
    request,
    [prom](
        const DlcClient*,
        const StartRayClusterRequest&,
        StartRayClusterOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::StopBenchmarkTaskOutcome DlcClient::StopBenchmarkTask(const StopBenchmarkTaskRequest &request)
{
    auto outcome = MakeRequest(request, "StopBenchmarkTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopBenchmarkTaskResponse rsp = StopBenchmarkTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopBenchmarkTaskOutcome(rsp);
        else
            return StopBenchmarkTaskOutcome(o.GetError());
    }
    else
    {
        return StopBenchmarkTaskOutcome(outcome.GetError());
    }
}

void DlcClient::StopBenchmarkTaskAsync(const StopBenchmarkTaskRequest& request, const StopBenchmarkTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopBenchmarkTaskRequest&;
    using Resp = StopBenchmarkTaskResponse;

    DoRequestAsync<Req, Resp>(
        "StopBenchmarkTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::StopBenchmarkTaskOutcomeCallable DlcClient::StopBenchmarkTaskCallable(const StopBenchmarkTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopBenchmarkTaskOutcome>>();
    StopBenchmarkTaskAsync(
    request,
    [prom](
        const DlcClient*,
        const StopBenchmarkTaskRequest&,
        StopBenchmarkTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::StopDeploymentOutcome DlcClient::StopDeployment(const StopDeploymentRequest &request)
{
    auto outcome = MakeRequest(request, "StopDeployment");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopDeploymentResponse rsp = StopDeploymentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopDeploymentOutcome(rsp);
        else
            return StopDeploymentOutcome(o.GetError());
    }
    else
    {
        return StopDeploymentOutcome(outcome.GetError());
    }
}

void DlcClient::StopDeploymentAsync(const StopDeploymentRequest& request, const StopDeploymentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopDeploymentRequest&;
    using Resp = StopDeploymentResponse;

    DoRequestAsync<Req, Resp>(
        "StopDeployment", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::StopDeploymentOutcomeCallable DlcClient::StopDeploymentCallable(const StopDeploymentRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopDeploymentOutcome>>();
    StopDeploymentAsync(
    request,
    [prom](
        const DlcClient*,
        const StopDeploymentRequest&,
        StopDeploymentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::StopInferenceServiceOutcome DlcClient::StopInferenceService(const StopInferenceServiceRequest &request)
{
    auto outcome = MakeRequest(request, "StopInferenceService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopInferenceServiceResponse rsp = StopInferenceServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopInferenceServiceOutcome(rsp);
        else
            return StopInferenceServiceOutcome(o.GetError());
    }
    else
    {
        return StopInferenceServiceOutcome(outcome.GetError());
    }
}

void DlcClient::StopInferenceServiceAsync(const StopInferenceServiceRequest& request, const StopInferenceServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopInferenceServiceRequest&;
    using Resp = StopInferenceServiceResponse;

    DoRequestAsync<Req, Resp>(
        "StopInferenceService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::StopInferenceServiceOutcomeCallable DlcClient::StopInferenceServiceCallable(const StopInferenceServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopInferenceServiceOutcome>>();
    StopInferenceServiceAsync(
    request,
    [prom](
        const DlcClient*,
        const StopInferenceServiceRequest&,
        StopInferenceServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::StopLabOutcome DlcClient::StopLab(const StopLabRequest &request)
{
    auto outcome = MakeRequest(request, "StopLab");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopLabResponse rsp = StopLabResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopLabOutcome(rsp);
        else
            return StopLabOutcome(o.GetError());
    }
    else
    {
        return StopLabOutcome(outcome.GetError());
    }
}

void DlcClient::StopLabAsync(const StopLabRequest& request, const StopLabAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopLabRequest&;
    using Resp = StopLabResponse;

    DoRequestAsync<Req, Resp>(
        "StopLab", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::StopLabOutcomeCallable DlcClient::StopLabCallable(const StopLabRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopLabOutcome>>();
    StopLabAsync(
    request,
    [prom](
        const DlcClient*,
        const StopLabRequest&,
        StopLabOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::StopMlflowServerOutcome DlcClient::StopMlflowServer(const StopMlflowServerRequest &request)
{
    auto outcome = MakeRequest(request, "StopMlflowServer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopMlflowServerResponse rsp = StopMlflowServerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopMlflowServerOutcome(rsp);
        else
            return StopMlflowServerOutcome(o.GetError());
    }
    else
    {
        return StopMlflowServerOutcome(outcome.GetError());
    }
}

void DlcClient::StopMlflowServerAsync(const StopMlflowServerRequest& request, const StopMlflowServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopMlflowServerRequest&;
    using Resp = StopMlflowServerResponse;

    DoRequestAsync<Req, Resp>(
        "StopMlflowServer", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::StopMlflowServerOutcomeCallable DlcClient::StopMlflowServerCallable(const StopMlflowServerRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopMlflowServerOutcome>>();
    StopMlflowServerAsync(
    request,
    [prom](
        const DlcClient*,
        const StopMlflowServerRequest&,
        StopMlflowServerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::StopRayClusterOutcome DlcClient::StopRayCluster(const StopRayClusterRequest &request)
{
    auto outcome = MakeRequest(request, "StopRayCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopRayClusterResponse rsp = StopRayClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopRayClusterOutcome(rsp);
        else
            return StopRayClusterOutcome(o.GetError());
    }
    else
    {
        return StopRayClusterOutcome(outcome.GetError());
    }
}

void DlcClient::StopRayClusterAsync(const StopRayClusterRequest& request, const StopRayClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopRayClusterRequest&;
    using Resp = StopRayClusterResponse;

    DoRequestAsync<Req, Resp>(
        "StopRayCluster", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::StopRayClusterOutcomeCallable DlcClient::StopRayClusterCallable(const StopRayClusterRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopRayClusterOutcome>>();
    StopRayClusterAsync(
    request,
    [prom](
        const DlcClient*,
        const StopRayClusterRequest&,
        StopRayClusterOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::SubmitTrainingJobOutcome DlcClient::SubmitTrainingJob(const SubmitTrainingJobRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitTrainingJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitTrainingJobResponse rsp = SubmitTrainingJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitTrainingJobOutcome(rsp);
        else
            return SubmitTrainingJobOutcome(o.GetError());
    }
    else
    {
        return SubmitTrainingJobOutcome(outcome.GetError());
    }
}

void DlcClient::SubmitTrainingJobAsync(const SubmitTrainingJobRequest& request, const SubmitTrainingJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SubmitTrainingJobRequest&;
    using Resp = SubmitTrainingJobResponse;

    DoRequestAsync<Req, Resp>(
        "SubmitTrainingJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::SubmitTrainingJobOutcomeCallable DlcClient::SubmitTrainingJobCallable(const SubmitTrainingJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<SubmitTrainingJobOutcome>>();
    SubmitTrainingJobAsync(
    request,
    [prom](
        const DlcClient*,
        const SubmitTrainingJobRequest&,
        SubmitTrainingJobOutcome resp,
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

DlcClient::UpdateApiKeyStatusOutcome DlcClient::UpdateApiKeyStatus(const UpdateApiKeyStatusRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateApiKeyStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateApiKeyStatusResponse rsp = UpdateApiKeyStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateApiKeyStatusOutcome(rsp);
        else
            return UpdateApiKeyStatusOutcome(o.GetError());
    }
    else
    {
        return UpdateApiKeyStatusOutcome(outcome.GetError());
    }
}

void DlcClient::UpdateApiKeyStatusAsync(const UpdateApiKeyStatusRequest& request, const UpdateApiKeyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateApiKeyStatusRequest&;
    using Resp = UpdateApiKeyStatusResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateApiKeyStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::UpdateApiKeyStatusOutcomeCallable DlcClient::UpdateApiKeyStatusCallable(const UpdateApiKeyStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateApiKeyStatusOutcome>>();
    UpdateApiKeyStatusAsync(
    request,
    [prom](
        const DlcClient*,
        const UpdateApiKeyStatusRequest&,
        UpdateApiKeyStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::UpdateClusterGroupOutcome DlcClient::UpdateClusterGroup(const UpdateClusterGroupRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateClusterGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateClusterGroupResponse rsp = UpdateClusterGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateClusterGroupOutcome(rsp);
        else
            return UpdateClusterGroupOutcome(o.GetError());
    }
    else
    {
        return UpdateClusterGroupOutcome(outcome.GetError());
    }
}

void DlcClient::UpdateClusterGroupAsync(const UpdateClusterGroupRequest& request, const UpdateClusterGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateClusterGroupRequest&;
    using Resp = UpdateClusterGroupResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateClusterGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::UpdateClusterGroupOutcomeCallable DlcClient::UpdateClusterGroupCallable(const UpdateClusterGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateClusterGroupOutcome>>();
    UpdateClusterGroupAsync(
    request,
    [prom](
        const DlcClient*,
        const UpdateClusterGroupRequest&,
        UpdateClusterGroupOutcome resp,
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

DlcClient::UpdateDeploymentOutcome DlcClient::UpdateDeployment(const UpdateDeploymentRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateDeployment");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateDeploymentResponse rsp = UpdateDeploymentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateDeploymentOutcome(rsp);
        else
            return UpdateDeploymentOutcome(o.GetError());
    }
    else
    {
        return UpdateDeploymentOutcome(outcome.GetError());
    }
}

void DlcClient::UpdateDeploymentAsync(const UpdateDeploymentRequest& request, const UpdateDeploymentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateDeploymentRequest&;
    using Resp = UpdateDeploymentResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateDeployment", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::UpdateDeploymentOutcomeCallable DlcClient::UpdateDeploymentCallable(const UpdateDeploymentRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateDeploymentOutcome>>();
    UpdateDeploymentAsync(
    request,
    [prom](
        const DlcClient*,
        const UpdateDeploymentRequest&,
        UpdateDeploymentOutcome resp,
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

DlcClient::UpdateInferenceModelOutcome DlcClient::UpdateInferenceModel(const UpdateInferenceModelRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateInferenceModel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateInferenceModelResponse rsp = UpdateInferenceModelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateInferenceModelOutcome(rsp);
        else
            return UpdateInferenceModelOutcome(o.GetError());
    }
    else
    {
        return UpdateInferenceModelOutcome(outcome.GetError());
    }
}

void DlcClient::UpdateInferenceModelAsync(const UpdateInferenceModelRequest& request, const UpdateInferenceModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateInferenceModelRequest&;
    using Resp = UpdateInferenceModelResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateInferenceModel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::UpdateInferenceModelOutcomeCallable DlcClient::UpdateInferenceModelCallable(const UpdateInferenceModelRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateInferenceModelOutcome>>();
    UpdateInferenceModelAsync(
    request,
    [prom](
        const DlcClient*,
        const UpdateInferenceModelRequest&,
        UpdateInferenceModelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::UpdateJobSpecOutcome DlcClient::UpdateJobSpec(const UpdateJobSpecRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateJobSpec");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateJobSpecResponse rsp = UpdateJobSpecResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateJobSpecOutcome(rsp);
        else
            return UpdateJobSpecOutcome(o.GetError());
    }
    else
    {
        return UpdateJobSpecOutcome(outcome.GetError());
    }
}

void DlcClient::UpdateJobSpecAsync(const UpdateJobSpecRequest& request, const UpdateJobSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateJobSpecRequest&;
    using Resp = UpdateJobSpecResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateJobSpec", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::UpdateJobSpecOutcomeCallable DlcClient::UpdateJobSpecCallable(const UpdateJobSpecRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateJobSpecOutcome>>();
    UpdateJobSpecAsync(
    request,
    [prom](
        const DlcClient*,
        const UpdateJobSpecRequest&,
        UpdateJobSpecOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::UpdateJobSpecPriorityOutcome DlcClient::UpdateJobSpecPriority(const UpdateJobSpecPriorityRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateJobSpecPriority");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateJobSpecPriorityResponse rsp = UpdateJobSpecPriorityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateJobSpecPriorityOutcome(rsp);
        else
            return UpdateJobSpecPriorityOutcome(o.GetError());
    }
    else
    {
        return UpdateJobSpecPriorityOutcome(outcome.GetError());
    }
}

void DlcClient::UpdateJobSpecPriorityAsync(const UpdateJobSpecPriorityRequest& request, const UpdateJobSpecPriorityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateJobSpecPriorityRequest&;
    using Resp = UpdateJobSpecPriorityResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateJobSpecPriority", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::UpdateJobSpecPriorityOutcomeCallable DlcClient::UpdateJobSpecPriorityCallable(const UpdateJobSpecPriorityRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateJobSpecPriorityOutcome>>();
    UpdateJobSpecPriorityAsync(
    request,
    [prom](
        const DlcClient*,
        const UpdateJobSpecPriorityRequest&,
        UpdateJobSpecPriorityOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::UpdateLabOutcome DlcClient::UpdateLab(const UpdateLabRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateLab");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateLabResponse rsp = UpdateLabResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateLabOutcome(rsp);
        else
            return UpdateLabOutcome(o.GetError());
    }
    else
    {
        return UpdateLabOutcome(outcome.GetError());
    }
}

void DlcClient::UpdateLabAsync(const UpdateLabRequest& request, const UpdateLabAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateLabRequest&;
    using Resp = UpdateLabResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateLab", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::UpdateLabOutcomeCallable DlcClient::UpdateLabCallable(const UpdateLabRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateLabOutcome>>();
    UpdateLabAsync(
    request,
    [prom](
        const DlcClient*,
        const UpdateLabRequest&,
        UpdateLabOutcome resp,
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

DlcClient::UpdateRayClusterOutcome DlcClient::UpdateRayCluster(const UpdateRayClusterRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateRayCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateRayClusterResponse rsp = UpdateRayClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateRayClusterOutcome(rsp);
        else
            return UpdateRayClusterOutcome(o.GetError());
    }
    else
    {
        return UpdateRayClusterOutcome(outcome.GetError());
    }
}

void DlcClient::UpdateRayClusterAsync(const UpdateRayClusterRequest& request, const UpdateRayClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateRayClusterRequest&;
    using Resp = UpdateRayClusterResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateRayCluster", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::UpdateRayClusterOutcomeCallable DlcClient::UpdateRayClusterCallable(const UpdateRayClusterRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateRayClusterOutcome>>();
    UpdateRayClusterAsync(
    request,
    [prom](
        const DlcClient*,
        const UpdateRayClusterRequest&,
        UpdateRayClusterOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::UpdateRayJobPriorityOutcome DlcClient::UpdateRayJobPriority(const UpdateRayJobPriorityRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateRayJobPriority");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateRayJobPriorityResponse rsp = UpdateRayJobPriorityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateRayJobPriorityOutcome(rsp);
        else
            return UpdateRayJobPriorityOutcome(o.GetError());
    }
    else
    {
        return UpdateRayJobPriorityOutcome(outcome.GetError());
    }
}

void DlcClient::UpdateRayJobPriorityAsync(const UpdateRayJobPriorityRequest& request, const UpdateRayJobPriorityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateRayJobPriorityRequest&;
    using Resp = UpdateRayJobPriorityResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateRayJobPriority", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::UpdateRayJobPriorityOutcomeCallable DlcClient::UpdateRayJobPriorityCallable(const UpdateRayJobPriorityRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateRayJobPriorityOutcome>>();
    UpdateRayJobPriorityAsync(
    request,
    [prom](
        const DlcClient*,
        const UpdateRayJobPriorityRequest&,
        UpdateRayJobPriorityOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DlcClient::UpdateResourceConfigOutcome DlcClient::UpdateResourceConfig(const UpdateResourceConfigRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateResourceConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateResourceConfigResponse rsp = UpdateResourceConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateResourceConfigOutcome(rsp);
        else
            return UpdateResourceConfigOutcome(o.GetError());
    }
    else
    {
        return UpdateResourceConfigOutcome(outcome.GetError());
    }
}

void DlcClient::UpdateResourceConfigAsync(const UpdateResourceConfigRequest& request, const UpdateResourceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateResourceConfigRequest&;
    using Resp = UpdateResourceConfigResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateResourceConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::UpdateResourceConfigOutcomeCallable DlcClient::UpdateResourceConfigCallable(const UpdateResourceConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateResourceConfigOutcome>>();
    UpdateResourceConfigAsync(
    request,
    [prom](
        const DlcClient*,
        const UpdateResourceConfigRequest&,
        UpdateResourceConfigOutcome resp,
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

DlcClient::UpdateServiceAuthConfigOutcome DlcClient::UpdateServiceAuthConfig(const UpdateServiceAuthConfigRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateServiceAuthConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateServiceAuthConfigResponse rsp = UpdateServiceAuthConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateServiceAuthConfigOutcome(rsp);
        else
            return UpdateServiceAuthConfigOutcome(o.GetError());
    }
    else
    {
        return UpdateServiceAuthConfigOutcome(outcome.GetError());
    }
}

void DlcClient::UpdateServiceAuthConfigAsync(const UpdateServiceAuthConfigRequest& request, const UpdateServiceAuthConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateServiceAuthConfigRequest&;
    using Resp = UpdateServiceAuthConfigResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateServiceAuthConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::UpdateServiceAuthConfigOutcomeCallable DlcClient::UpdateServiceAuthConfigCallable(const UpdateServiceAuthConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateServiceAuthConfigOutcome>>();
    UpdateServiceAuthConfigAsync(
    request,
    [prom](
        const DlcClient*,
        const UpdateServiceAuthConfigRequest&,
        UpdateServiceAuthConfigOutcome resp,
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


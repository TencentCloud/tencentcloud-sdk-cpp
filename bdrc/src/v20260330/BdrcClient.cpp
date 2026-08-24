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

#include <tencentcloud/bdrc/v20260330/BdrcClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Bdrc::V20260330;
using namespace TencentCloud::Bdrc::V20260330::Model;
using namespace std;

namespace
{
    const string VERSION = "2026-03-30";
    const string ENDPOINT = "bdrc.tencentcloudapi.com";
}

BdrcClient::BdrcClient(const Credential &credential, const string &region) :
    BdrcClient(credential, region, ClientProfile())
{
}

BdrcClient::BdrcClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


BdrcClient::ApplyBackupGroupOutcome BdrcClient::ApplyBackupGroup(const ApplyBackupGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ApplyBackupGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ApplyBackupGroupResponse rsp = ApplyBackupGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ApplyBackupGroupOutcome(rsp);
        else
            return ApplyBackupGroupOutcome(o.GetError());
    }
    else
    {
        return ApplyBackupGroupOutcome(outcome.GetError());
    }
}

void BdrcClient::ApplyBackupGroupAsync(const ApplyBackupGroupRequest& request, const ApplyBackupGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ApplyBackupGroupRequest&;
    using Resp = ApplyBackupGroupResponse;

    DoRequestAsync<Req, Resp>(
        "ApplyBackupGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BdrcClient::ApplyBackupGroupOutcomeCallable BdrcClient::ApplyBackupGroupCallable(const ApplyBackupGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<ApplyBackupGroupOutcome>>();
    ApplyBackupGroupAsync(
    request,
    [prom](
        const BdrcClient*,
        const ApplyBackupGroupRequest&,
        ApplyBackupGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BdrcClient::BindAutoBackupPolicyOutcome BdrcClient::BindAutoBackupPolicy(const BindAutoBackupPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "BindAutoBackupPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindAutoBackupPolicyResponse rsp = BindAutoBackupPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindAutoBackupPolicyOutcome(rsp);
        else
            return BindAutoBackupPolicyOutcome(o.GetError());
    }
    else
    {
        return BindAutoBackupPolicyOutcome(outcome.GetError());
    }
}

void BdrcClient::BindAutoBackupPolicyAsync(const BindAutoBackupPolicyRequest& request, const BindAutoBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BindAutoBackupPolicyRequest&;
    using Resp = BindAutoBackupPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "BindAutoBackupPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BdrcClient::BindAutoBackupPolicyOutcomeCallable BdrcClient::BindAutoBackupPolicyCallable(const BindAutoBackupPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<BindAutoBackupPolicyOutcome>>();
    BindAutoBackupPolicyAsync(
    request,
    [prom](
        const BdrcClient*,
        const BindAutoBackupPolicyRequest&,
        BindAutoBackupPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BdrcClient::CreateAutoBackupPolicyOutcome BdrcClient::CreateAutoBackupPolicy(const CreateAutoBackupPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAutoBackupPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAutoBackupPolicyResponse rsp = CreateAutoBackupPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAutoBackupPolicyOutcome(rsp);
        else
            return CreateAutoBackupPolicyOutcome(o.GetError());
    }
    else
    {
        return CreateAutoBackupPolicyOutcome(outcome.GetError());
    }
}

void BdrcClient::CreateAutoBackupPolicyAsync(const CreateAutoBackupPolicyRequest& request, const CreateAutoBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAutoBackupPolicyRequest&;
    using Resp = CreateAutoBackupPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAutoBackupPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BdrcClient::CreateAutoBackupPolicyOutcomeCallable BdrcClient::CreateAutoBackupPolicyCallable(const CreateAutoBackupPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAutoBackupPolicyOutcome>>();
    CreateAutoBackupPolicyAsync(
    request,
    [prom](
        const BdrcClient*,
        const CreateAutoBackupPolicyRequest&,
        CreateAutoBackupPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BdrcClient::CreateBackupGroupOutcome BdrcClient::CreateBackupGroup(const CreateBackupGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBackupGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBackupGroupResponse rsp = CreateBackupGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBackupGroupOutcome(rsp);
        else
            return CreateBackupGroupOutcome(o.GetError());
    }
    else
    {
        return CreateBackupGroupOutcome(outcome.GetError());
    }
}

void BdrcClient::CreateBackupGroupAsync(const CreateBackupGroupRequest& request, const CreateBackupGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateBackupGroupRequest&;
    using Resp = CreateBackupGroupResponse;

    DoRequestAsync<Req, Resp>(
        "CreateBackupGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BdrcClient::CreateBackupGroupOutcomeCallable BdrcClient::CreateBackupGroupCallable(const CreateBackupGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateBackupGroupOutcome>>();
    CreateBackupGroupAsync(
    request,
    [prom](
        const BdrcClient*,
        const CreateBackupGroupRequest&,
        CreateBackupGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BdrcClient::CreateBackupVaultOutcome BdrcClient::CreateBackupVault(const CreateBackupVaultRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBackupVault");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBackupVaultResponse rsp = CreateBackupVaultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBackupVaultOutcome(rsp);
        else
            return CreateBackupVaultOutcome(o.GetError());
    }
    else
    {
        return CreateBackupVaultOutcome(outcome.GetError());
    }
}

void BdrcClient::CreateBackupVaultAsync(const CreateBackupVaultRequest& request, const CreateBackupVaultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateBackupVaultRequest&;
    using Resp = CreateBackupVaultResponse;

    DoRequestAsync<Req, Resp>(
        "CreateBackupVault", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BdrcClient::CreateBackupVaultOutcomeCallable BdrcClient::CreateBackupVaultCallable(const CreateBackupVaultRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateBackupVaultOutcome>>();
    CreateBackupVaultAsync(
    request,
    [prom](
        const BdrcClient*,
        const CreateBackupVaultRequest&,
        CreateBackupVaultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BdrcClient::CreateDisasterRecoveryProtectGroupOutcome BdrcClient::CreateDisasterRecoveryProtectGroup(const CreateDisasterRecoveryProtectGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDisasterRecoveryProtectGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDisasterRecoveryProtectGroupResponse rsp = CreateDisasterRecoveryProtectGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDisasterRecoveryProtectGroupOutcome(rsp);
        else
            return CreateDisasterRecoveryProtectGroupOutcome(o.GetError());
    }
    else
    {
        return CreateDisasterRecoveryProtectGroupOutcome(outcome.GetError());
    }
}

void BdrcClient::CreateDisasterRecoveryProtectGroupAsync(const CreateDisasterRecoveryProtectGroupRequest& request, const CreateDisasterRecoveryProtectGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDisasterRecoveryProtectGroupRequest&;
    using Resp = CreateDisasterRecoveryProtectGroupResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDisasterRecoveryProtectGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BdrcClient::CreateDisasterRecoveryProtectGroupOutcomeCallable BdrcClient::CreateDisasterRecoveryProtectGroupCallable(const CreateDisasterRecoveryProtectGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDisasterRecoveryProtectGroupOutcome>>();
    CreateDisasterRecoveryProtectGroupAsync(
    request,
    [prom](
        const BdrcClient*,
        const CreateDisasterRecoveryProtectGroupRequest&,
        CreateDisasterRecoveryProtectGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BdrcClient::CreateDisasterRecoverySitePairOutcome BdrcClient::CreateDisasterRecoverySitePair(const CreateDisasterRecoverySitePairRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDisasterRecoverySitePair");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDisasterRecoverySitePairResponse rsp = CreateDisasterRecoverySitePairResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDisasterRecoverySitePairOutcome(rsp);
        else
            return CreateDisasterRecoverySitePairOutcome(o.GetError());
    }
    else
    {
        return CreateDisasterRecoverySitePairOutcome(outcome.GetError());
    }
}

void BdrcClient::CreateDisasterRecoverySitePairAsync(const CreateDisasterRecoverySitePairRequest& request, const CreateDisasterRecoverySitePairAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDisasterRecoverySitePairRequest&;
    using Resp = CreateDisasterRecoverySitePairResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDisasterRecoverySitePair", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BdrcClient::CreateDisasterRecoverySitePairOutcomeCallable BdrcClient::CreateDisasterRecoverySitePairCallable(const CreateDisasterRecoverySitePairRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDisasterRecoverySitePairOutcome>>();
    CreateDisasterRecoverySitePairAsync(
    request,
    [prom](
        const BdrcClient*,
        const CreateDisasterRecoverySitePairRequest&,
        CreateDisasterRecoverySitePairOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BdrcClient::CreateDisasterRecoveryVpcMappingOutcome BdrcClient::CreateDisasterRecoveryVpcMapping(const CreateDisasterRecoveryVpcMappingRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDisasterRecoveryVpcMapping");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDisasterRecoveryVpcMappingResponse rsp = CreateDisasterRecoveryVpcMappingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDisasterRecoveryVpcMappingOutcome(rsp);
        else
            return CreateDisasterRecoveryVpcMappingOutcome(o.GetError());
    }
    else
    {
        return CreateDisasterRecoveryVpcMappingOutcome(outcome.GetError());
    }
}

void BdrcClient::CreateDisasterRecoveryVpcMappingAsync(const CreateDisasterRecoveryVpcMappingRequest& request, const CreateDisasterRecoveryVpcMappingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDisasterRecoveryVpcMappingRequest&;
    using Resp = CreateDisasterRecoveryVpcMappingResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDisasterRecoveryVpcMapping", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BdrcClient::CreateDisasterRecoveryVpcMappingOutcomeCallable BdrcClient::CreateDisasterRecoveryVpcMappingCallable(const CreateDisasterRecoveryVpcMappingRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDisasterRecoveryVpcMappingOutcome>>();
    CreateDisasterRecoveryVpcMappingAsync(
    request,
    [prom](
        const BdrcClient*,
        const CreateDisasterRecoveryVpcMappingRequest&,
        CreateDisasterRecoveryVpcMappingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BdrcClient::CreateFileBackupOutcome BdrcClient::CreateFileBackup(const CreateFileBackupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFileBackup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFileBackupResponse rsp = CreateFileBackupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFileBackupOutcome(rsp);
        else
            return CreateFileBackupOutcome(o.GetError());
    }
    else
    {
        return CreateFileBackupOutcome(outcome.GetError());
    }
}

void BdrcClient::CreateFileBackupAsync(const CreateFileBackupRequest& request, const CreateFileBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateFileBackupRequest&;
    using Resp = CreateFileBackupResponse;

    DoRequestAsync<Req, Resp>(
        "CreateFileBackup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BdrcClient::CreateFileBackupOutcomeCallable BdrcClient::CreateFileBackupCallable(const CreateFileBackupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateFileBackupOutcome>>();
    CreateFileBackupAsync(
    request,
    [prom](
        const BdrcClient*,
        const CreateFileBackupRequest&,
        CreateFileBackupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BdrcClient::CreateFileBackupPlanOutcome BdrcClient::CreateFileBackupPlan(const CreateFileBackupPlanRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFileBackupPlan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFileBackupPlanResponse rsp = CreateFileBackupPlanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFileBackupPlanOutcome(rsp);
        else
            return CreateFileBackupPlanOutcome(o.GetError());
    }
    else
    {
        return CreateFileBackupPlanOutcome(outcome.GetError());
    }
}

void BdrcClient::CreateFileBackupPlanAsync(const CreateFileBackupPlanRequest& request, const CreateFileBackupPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateFileBackupPlanRequest&;
    using Resp = CreateFileBackupPlanResponse;

    DoRequestAsync<Req, Resp>(
        "CreateFileBackupPlan", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BdrcClient::CreateFileBackupPlanOutcomeCallable BdrcClient::CreateFileBackupPlanCallable(const CreateFileBackupPlanRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateFileBackupPlanOutcome>>();
    CreateFileBackupPlanAsync(
    request,
    [prom](
        const BdrcClient*,
        const CreateFileBackupPlanRequest&,
        CreateFileBackupPlanOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BdrcClient::CreateFileRestoreTaskOutcome BdrcClient::CreateFileRestoreTask(const CreateFileRestoreTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFileRestoreTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFileRestoreTaskResponse rsp = CreateFileRestoreTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFileRestoreTaskOutcome(rsp);
        else
            return CreateFileRestoreTaskOutcome(o.GetError());
    }
    else
    {
        return CreateFileRestoreTaskOutcome(outcome.GetError());
    }
}

void BdrcClient::CreateFileRestoreTaskAsync(const CreateFileRestoreTaskRequest& request, const CreateFileRestoreTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateFileRestoreTaskRequest&;
    using Resp = CreateFileRestoreTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateFileRestoreTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BdrcClient::CreateFileRestoreTaskOutcomeCallable BdrcClient::CreateFileRestoreTaskCallable(const CreateFileRestoreTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateFileRestoreTaskOutcome>>();
    CreateFileRestoreTaskAsync(
    request,
    [prom](
        const BdrcClient*,
        const CreateFileRestoreTaskRequest&,
        CreateFileRestoreTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BdrcClient::CreateInstanceCopyPairOutcome BdrcClient::CreateInstanceCopyPair(const CreateInstanceCopyPairRequest &request)
{
    auto outcome = MakeRequest(request, "CreateInstanceCopyPair");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateInstanceCopyPairResponse rsp = CreateInstanceCopyPairResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateInstanceCopyPairOutcome(rsp);
        else
            return CreateInstanceCopyPairOutcome(o.GetError());
    }
    else
    {
        return CreateInstanceCopyPairOutcome(outcome.GetError());
    }
}

void BdrcClient::CreateInstanceCopyPairAsync(const CreateInstanceCopyPairRequest& request, const CreateInstanceCopyPairAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateInstanceCopyPairRequest&;
    using Resp = CreateInstanceCopyPairResponse;

    DoRequestAsync<Req, Resp>(
        "CreateInstanceCopyPair", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BdrcClient::CreateInstanceCopyPairOutcomeCallable BdrcClient::CreateInstanceCopyPairCallable(const CreateInstanceCopyPairRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateInstanceCopyPairOutcome>>();
    CreateInstanceCopyPairAsync(
    request,
    [prom](
        const BdrcClient*,
        const CreateInstanceCopyPairRequest&,
        CreateInstanceCopyPairOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BdrcClient::CreateInstanceDrillPairsOutcome BdrcClient::CreateInstanceDrillPairs(const CreateInstanceDrillPairsRequest &request)
{
    auto outcome = MakeRequest(request, "CreateInstanceDrillPairs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateInstanceDrillPairsResponse rsp = CreateInstanceDrillPairsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateInstanceDrillPairsOutcome(rsp);
        else
            return CreateInstanceDrillPairsOutcome(o.GetError());
    }
    else
    {
        return CreateInstanceDrillPairsOutcome(outcome.GetError());
    }
}

void BdrcClient::CreateInstanceDrillPairsAsync(const CreateInstanceDrillPairsRequest& request, const CreateInstanceDrillPairsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateInstanceDrillPairsRequest&;
    using Resp = CreateInstanceDrillPairsResponse;

    DoRequestAsync<Req, Resp>(
        "CreateInstanceDrillPairs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BdrcClient::CreateInstanceDrillPairsOutcomeCallable BdrcClient::CreateInstanceDrillPairsCallable(const CreateInstanceDrillPairsRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateInstanceDrillPairsOutcome>>();
    CreateInstanceDrillPairsAsync(
    request,
    [prom](
        const BdrcClient*,
        const CreateInstanceDrillPairsRequest&,
        CreateInstanceDrillPairsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BdrcClient::CreateSecurityGroupMappingOutcome BdrcClient::CreateSecurityGroupMapping(const CreateSecurityGroupMappingRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSecurityGroupMapping");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSecurityGroupMappingResponse rsp = CreateSecurityGroupMappingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSecurityGroupMappingOutcome(rsp);
        else
            return CreateSecurityGroupMappingOutcome(o.GetError());
    }
    else
    {
        return CreateSecurityGroupMappingOutcome(outcome.GetError());
    }
}

void BdrcClient::CreateSecurityGroupMappingAsync(const CreateSecurityGroupMappingRequest& request, const CreateSecurityGroupMappingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSecurityGroupMappingRequest&;
    using Resp = CreateSecurityGroupMappingResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSecurityGroupMapping", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BdrcClient::CreateSecurityGroupMappingOutcomeCallable BdrcClient::CreateSecurityGroupMappingCallable(const CreateSecurityGroupMappingRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSecurityGroupMappingOutcome>>();
    CreateSecurityGroupMappingAsync(
    request,
    [prom](
        const BdrcClient*,
        const CreateSecurityGroupMappingRequest&,
        CreateSecurityGroupMappingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BdrcClient::DeleteAutoBackupPoliciesOutcome BdrcClient::DeleteAutoBackupPolicies(const DeleteAutoBackupPoliciesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAutoBackupPolicies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAutoBackupPoliciesResponse rsp = DeleteAutoBackupPoliciesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAutoBackupPoliciesOutcome(rsp);
        else
            return DeleteAutoBackupPoliciesOutcome(o.GetError());
    }
    else
    {
        return DeleteAutoBackupPoliciesOutcome(outcome.GetError());
    }
}

void BdrcClient::DeleteAutoBackupPoliciesAsync(const DeleteAutoBackupPoliciesRequest& request, const DeleteAutoBackupPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAutoBackupPoliciesRequest&;
    using Resp = DeleteAutoBackupPoliciesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAutoBackupPolicies", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BdrcClient::DeleteAutoBackupPoliciesOutcomeCallable BdrcClient::DeleteAutoBackupPoliciesCallable(const DeleteAutoBackupPoliciesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAutoBackupPoliciesOutcome>>();
    DeleteAutoBackupPoliciesAsync(
    request,
    [prom](
        const BdrcClient*,
        const DeleteAutoBackupPoliciesRequest&,
        DeleteAutoBackupPoliciesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BdrcClient::DeleteBackupGroupsOutcome BdrcClient::DeleteBackupGroups(const DeleteBackupGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteBackupGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteBackupGroupsResponse rsp = DeleteBackupGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteBackupGroupsOutcome(rsp);
        else
            return DeleteBackupGroupsOutcome(o.GetError());
    }
    else
    {
        return DeleteBackupGroupsOutcome(outcome.GetError());
    }
}

void BdrcClient::DeleteBackupGroupsAsync(const DeleteBackupGroupsRequest& request, const DeleteBackupGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteBackupGroupsRequest&;
    using Resp = DeleteBackupGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteBackupGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BdrcClient::DeleteBackupGroupsOutcomeCallable BdrcClient::DeleteBackupGroupsCallable(const DeleteBackupGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteBackupGroupsOutcome>>();
    DeleteBackupGroupsAsync(
    request,
    [prom](
        const BdrcClient*,
        const DeleteBackupGroupsRequest&,
        DeleteBackupGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BdrcClient::DeleteBackupVaultsOutcome BdrcClient::DeleteBackupVaults(const DeleteBackupVaultsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteBackupVaults");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteBackupVaultsResponse rsp = DeleteBackupVaultsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteBackupVaultsOutcome(rsp);
        else
            return DeleteBackupVaultsOutcome(o.GetError());
    }
    else
    {
        return DeleteBackupVaultsOutcome(outcome.GetError());
    }
}

void BdrcClient::DeleteBackupVaultsAsync(const DeleteBackupVaultsRequest& request, const DeleteBackupVaultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteBackupVaultsRequest&;
    using Resp = DeleteBackupVaultsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteBackupVaults", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BdrcClient::DeleteBackupVaultsOutcomeCallable BdrcClient::DeleteBackupVaultsCallable(const DeleteBackupVaultsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteBackupVaultsOutcome>>();
    DeleteBackupVaultsAsync(
    request,
    [prom](
        const BdrcClient*,
        const DeleteBackupVaultsRequest&,
        DeleteBackupVaultsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BdrcClient::DeleteCopyPairsOutcome BdrcClient::DeleteCopyPairs(const DeleteCopyPairsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCopyPairs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCopyPairsResponse rsp = DeleteCopyPairsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCopyPairsOutcome(rsp);
        else
            return DeleteCopyPairsOutcome(o.GetError());
    }
    else
    {
        return DeleteCopyPairsOutcome(outcome.GetError());
    }
}

void BdrcClient::DeleteCopyPairsAsync(const DeleteCopyPairsRequest& request, const DeleteCopyPairsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCopyPairsRequest&;
    using Resp = DeleteCopyPairsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCopyPairs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BdrcClient::DeleteCopyPairsOutcomeCallable BdrcClient::DeleteCopyPairsCallable(const DeleteCopyPairsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCopyPairsOutcome>>();
    DeleteCopyPairsAsync(
    request,
    [prom](
        const BdrcClient*,
        const DeleteCopyPairsRequest&,
        DeleteCopyPairsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BdrcClient::DeleteDisasterRecoveryProtectGroupsOutcome BdrcClient::DeleteDisasterRecoveryProtectGroups(const DeleteDisasterRecoveryProtectGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDisasterRecoveryProtectGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDisasterRecoveryProtectGroupsResponse rsp = DeleteDisasterRecoveryProtectGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDisasterRecoveryProtectGroupsOutcome(rsp);
        else
            return DeleteDisasterRecoveryProtectGroupsOutcome(o.GetError());
    }
    else
    {
        return DeleteDisasterRecoveryProtectGroupsOutcome(outcome.GetError());
    }
}

void BdrcClient::DeleteDisasterRecoveryProtectGroupsAsync(const DeleteDisasterRecoveryProtectGroupsRequest& request, const DeleteDisasterRecoveryProtectGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDisasterRecoveryProtectGroupsRequest&;
    using Resp = DeleteDisasterRecoveryProtectGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDisasterRecoveryProtectGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BdrcClient::DeleteDisasterRecoveryProtectGroupsOutcomeCallable BdrcClient::DeleteDisasterRecoveryProtectGroupsCallable(const DeleteDisasterRecoveryProtectGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDisasterRecoveryProtectGroupsOutcome>>();
    DeleteDisasterRecoveryProtectGroupsAsync(
    request,
    [prom](
        const BdrcClient*,
        const DeleteDisasterRecoveryProtectGroupsRequest&,
        DeleteDisasterRecoveryProtectGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BdrcClient::DeleteDisasterRecoverySitePairsOutcome BdrcClient::DeleteDisasterRecoverySitePairs(const DeleteDisasterRecoverySitePairsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDisasterRecoverySitePairs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDisasterRecoverySitePairsResponse rsp = DeleteDisasterRecoverySitePairsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDisasterRecoverySitePairsOutcome(rsp);
        else
            return DeleteDisasterRecoverySitePairsOutcome(o.GetError());
    }
    else
    {
        return DeleteDisasterRecoverySitePairsOutcome(outcome.GetError());
    }
}

void BdrcClient::DeleteDisasterRecoverySitePairsAsync(const DeleteDisasterRecoverySitePairsRequest& request, const DeleteDisasterRecoverySitePairsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDisasterRecoverySitePairsRequest&;
    using Resp = DeleteDisasterRecoverySitePairsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDisasterRecoverySitePairs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BdrcClient::DeleteDisasterRecoverySitePairsOutcomeCallable BdrcClient::DeleteDisasterRecoverySitePairsCallable(const DeleteDisasterRecoverySitePairsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDisasterRecoverySitePairsOutcome>>();
    DeleteDisasterRecoverySitePairsAsync(
    request,
    [prom](
        const BdrcClient*,
        const DeleteDisasterRecoverySitePairsRequest&,
        DeleteDisasterRecoverySitePairsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BdrcClient::DeleteDisasterRecoveryVpcMappingOutcome BdrcClient::DeleteDisasterRecoveryVpcMapping(const DeleteDisasterRecoveryVpcMappingRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDisasterRecoveryVpcMapping");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDisasterRecoveryVpcMappingResponse rsp = DeleteDisasterRecoveryVpcMappingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDisasterRecoveryVpcMappingOutcome(rsp);
        else
            return DeleteDisasterRecoveryVpcMappingOutcome(o.GetError());
    }
    else
    {
        return DeleteDisasterRecoveryVpcMappingOutcome(outcome.GetError());
    }
}

void BdrcClient::DeleteDisasterRecoveryVpcMappingAsync(const DeleteDisasterRecoveryVpcMappingRequest& request, const DeleteDisasterRecoveryVpcMappingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDisasterRecoveryVpcMappingRequest&;
    using Resp = DeleteDisasterRecoveryVpcMappingResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDisasterRecoveryVpcMapping", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BdrcClient::DeleteDisasterRecoveryVpcMappingOutcomeCallable BdrcClient::DeleteDisasterRecoveryVpcMappingCallable(const DeleteDisasterRecoveryVpcMappingRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDisasterRecoveryVpcMappingOutcome>>();
    DeleteDisasterRecoveryVpcMappingAsync(
    request,
    [prom](
        const BdrcClient*,
        const DeleteDisasterRecoveryVpcMappingRequest&,
        DeleteDisasterRecoveryVpcMappingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BdrcClient::DeleteDrillPairsOutcome BdrcClient::DeleteDrillPairs(const DeleteDrillPairsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDrillPairs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDrillPairsResponse rsp = DeleteDrillPairsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDrillPairsOutcome(rsp);
        else
            return DeleteDrillPairsOutcome(o.GetError());
    }
    else
    {
        return DeleteDrillPairsOutcome(outcome.GetError());
    }
}

void BdrcClient::DeleteDrillPairsAsync(const DeleteDrillPairsRequest& request, const DeleteDrillPairsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDrillPairsRequest&;
    using Resp = DeleteDrillPairsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDrillPairs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BdrcClient::DeleteDrillPairsOutcomeCallable BdrcClient::DeleteDrillPairsCallable(const DeleteDrillPairsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDrillPairsOutcome>>();
    DeleteDrillPairsAsync(
    request,
    [prom](
        const BdrcClient*,
        const DeleteDrillPairsRequest&,
        DeleteDrillPairsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BdrcClient::DeleteFileBackupPlansOutcome BdrcClient::DeleteFileBackupPlans(const DeleteFileBackupPlansRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteFileBackupPlans");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteFileBackupPlansResponse rsp = DeleteFileBackupPlansResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteFileBackupPlansOutcome(rsp);
        else
            return DeleteFileBackupPlansOutcome(o.GetError());
    }
    else
    {
        return DeleteFileBackupPlansOutcome(outcome.GetError());
    }
}

void BdrcClient::DeleteFileBackupPlansAsync(const DeleteFileBackupPlansRequest& request, const DeleteFileBackupPlansAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteFileBackupPlansRequest&;
    using Resp = DeleteFileBackupPlansResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteFileBackupPlans", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BdrcClient::DeleteFileBackupPlansOutcomeCallable BdrcClient::DeleteFileBackupPlansCallable(const DeleteFileBackupPlansRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteFileBackupPlansOutcome>>();
    DeleteFileBackupPlansAsync(
    request,
    [prom](
        const BdrcClient*,
        const DeleteFileBackupPlansRequest&,
        DeleteFileBackupPlansOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BdrcClient::DeleteFileBackupsOutcome BdrcClient::DeleteFileBackups(const DeleteFileBackupsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteFileBackups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteFileBackupsResponse rsp = DeleteFileBackupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteFileBackupsOutcome(rsp);
        else
            return DeleteFileBackupsOutcome(o.GetError());
    }
    else
    {
        return DeleteFileBackupsOutcome(outcome.GetError());
    }
}

void BdrcClient::DeleteFileBackupsAsync(const DeleteFileBackupsRequest& request, const DeleteFileBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteFileBackupsRequest&;
    using Resp = DeleteFileBackupsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteFileBackups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BdrcClient::DeleteFileBackupsOutcomeCallable BdrcClient::DeleteFileBackupsCallable(const DeleteFileBackupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteFileBackupsOutcome>>();
    DeleteFileBackupsAsync(
    request,
    [prom](
        const BdrcClient*,
        const DeleteFileBackupsRequest&,
        DeleteFileBackupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BdrcClient::DeleteSecurityGroupMappingOutcome BdrcClient::DeleteSecurityGroupMapping(const DeleteSecurityGroupMappingRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSecurityGroupMapping");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSecurityGroupMappingResponse rsp = DeleteSecurityGroupMappingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSecurityGroupMappingOutcome(rsp);
        else
            return DeleteSecurityGroupMappingOutcome(o.GetError());
    }
    else
    {
        return DeleteSecurityGroupMappingOutcome(outcome.GetError());
    }
}

void BdrcClient::DeleteSecurityGroupMappingAsync(const DeleteSecurityGroupMappingRequest& request, const DeleteSecurityGroupMappingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteSecurityGroupMappingRequest&;
    using Resp = DeleteSecurityGroupMappingResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteSecurityGroupMapping", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BdrcClient::DeleteSecurityGroupMappingOutcomeCallable BdrcClient::DeleteSecurityGroupMappingCallable(const DeleteSecurityGroupMappingRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteSecurityGroupMappingOutcome>>();
    DeleteSecurityGroupMappingAsync(
    request,
    [prom](
        const BdrcClient*,
        const DeleteSecurityGroupMappingRequest&,
        DeleteSecurityGroupMappingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BdrcClient::DescribeAutoBackupPoliciesOutcome BdrcClient::DescribeAutoBackupPolicies(const DescribeAutoBackupPoliciesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAutoBackupPolicies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAutoBackupPoliciesResponse rsp = DescribeAutoBackupPoliciesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAutoBackupPoliciesOutcome(rsp);
        else
            return DescribeAutoBackupPoliciesOutcome(o.GetError());
    }
    else
    {
        return DescribeAutoBackupPoliciesOutcome(outcome.GetError());
    }
}

void BdrcClient::DescribeAutoBackupPoliciesAsync(const DescribeAutoBackupPoliciesRequest& request, const DescribeAutoBackupPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAutoBackupPoliciesRequest&;
    using Resp = DescribeAutoBackupPoliciesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAutoBackupPolicies", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BdrcClient::DescribeAutoBackupPoliciesOutcomeCallable BdrcClient::DescribeAutoBackupPoliciesCallable(const DescribeAutoBackupPoliciesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAutoBackupPoliciesOutcome>>();
    DescribeAutoBackupPoliciesAsync(
    request,
    [prom](
        const BdrcClient*,
        const DescribeAutoBackupPoliciesRequest&,
        DescribeAutoBackupPoliciesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BdrcClient::DescribeBackupGroupRollbackTasksOutcome BdrcClient::DescribeBackupGroupRollbackTasks(const DescribeBackupGroupRollbackTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackupGroupRollbackTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackupGroupRollbackTasksResponse rsp = DescribeBackupGroupRollbackTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackupGroupRollbackTasksOutcome(rsp);
        else
            return DescribeBackupGroupRollbackTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeBackupGroupRollbackTasksOutcome(outcome.GetError());
    }
}

void BdrcClient::DescribeBackupGroupRollbackTasksAsync(const DescribeBackupGroupRollbackTasksRequest& request, const DescribeBackupGroupRollbackTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBackupGroupRollbackTasksRequest&;
    using Resp = DescribeBackupGroupRollbackTasksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBackupGroupRollbackTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BdrcClient::DescribeBackupGroupRollbackTasksOutcomeCallable BdrcClient::DescribeBackupGroupRollbackTasksCallable(const DescribeBackupGroupRollbackTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBackupGroupRollbackTasksOutcome>>();
    DescribeBackupGroupRollbackTasksAsync(
    request,
    [prom](
        const BdrcClient*,
        const DescribeBackupGroupRollbackTasksRequest&,
        DescribeBackupGroupRollbackTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BdrcClient::DescribeBackupGroupsOutcome BdrcClient::DescribeBackupGroups(const DescribeBackupGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackupGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackupGroupsResponse rsp = DescribeBackupGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackupGroupsOutcome(rsp);
        else
            return DescribeBackupGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeBackupGroupsOutcome(outcome.GetError());
    }
}

void BdrcClient::DescribeBackupGroupsAsync(const DescribeBackupGroupsRequest& request, const DescribeBackupGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBackupGroupsRequest&;
    using Resp = DescribeBackupGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBackupGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BdrcClient::DescribeBackupGroupsOutcomeCallable BdrcClient::DescribeBackupGroupsCallable(const DescribeBackupGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBackupGroupsOutcome>>();
    DescribeBackupGroupsAsync(
    request,
    [prom](
        const BdrcClient*,
        const DescribeBackupGroupsRequest&,
        DescribeBackupGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BdrcClient::DescribeBackupGroupsDeniedActionsOutcome BdrcClient::DescribeBackupGroupsDeniedActions(const DescribeBackupGroupsDeniedActionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackupGroupsDeniedActions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackupGroupsDeniedActionsResponse rsp = DescribeBackupGroupsDeniedActionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackupGroupsDeniedActionsOutcome(rsp);
        else
            return DescribeBackupGroupsDeniedActionsOutcome(o.GetError());
    }
    else
    {
        return DescribeBackupGroupsDeniedActionsOutcome(outcome.GetError());
    }
}

void BdrcClient::DescribeBackupGroupsDeniedActionsAsync(const DescribeBackupGroupsDeniedActionsRequest& request, const DescribeBackupGroupsDeniedActionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBackupGroupsDeniedActionsRequest&;
    using Resp = DescribeBackupGroupsDeniedActionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBackupGroupsDeniedActions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BdrcClient::DescribeBackupGroupsDeniedActionsOutcomeCallable BdrcClient::DescribeBackupGroupsDeniedActionsCallable(const DescribeBackupGroupsDeniedActionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBackupGroupsDeniedActionsOutcome>>();
    DescribeBackupGroupsDeniedActionsAsync(
    request,
    [prom](
        const BdrcClient*,
        const DescribeBackupGroupsDeniedActionsRequest&,
        DescribeBackupGroupsDeniedActionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BdrcClient::DescribeBackupInstancesOutcome BdrcClient::DescribeBackupInstances(const DescribeBackupInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackupInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackupInstancesResponse rsp = DescribeBackupInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackupInstancesOutcome(rsp);
        else
            return DescribeBackupInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeBackupInstancesOutcome(outcome.GetError());
    }
}

void BdrcClient::DescribeBackupInstancesAsync(const DescribeBackupInstancesRequest& request, const DescribeBackupInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBackupInstancesRequest&;
    using Resp = DescribeBackupInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBackupInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BdrcClient::DescribeBackupInstancesOutcomeCallable BdrcClient::DescribeBackupInstancesCallable(const DescribeBackupInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBackupInstancesOutcome>>();
    DescribeBackupInstancesAsync(
    request,
    [prom](
        const BdrcClient*,
        const DescribeBackupInstancesRequest&,
        DescribeBackupInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BdrcClient::DescribeBackupOverviewGeneralOutcome BdrcClient::DescribeBackupOverviewGeneral(const DescribeBackupOverviewGeneralRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackupOverviewGeneral");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackupOverviewGeneralResponse rsp = DescribeBackupOverviewGeneralResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackupOverviewGeneralOutcome(rsp);
        else
            return DescribeBackupOverviewGeneralOutcome(o.GetError());
    }
    else
    {
        return DescribeBackupOverviewGeneralOutcome(outcome.GetError());
    }
}

void BdrcClient::DescribeBackupOverviewGeneralAsync(const DescribeBackupOverviewGeneralRequest& request, const DescribeBackupOverviewGeneralAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBackupOverviewGeneralRequest&;
    using Resp = DescribeBackupOverviewGeneralResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBackupOverviewGeneral", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BdrcClient::DescribeBackupOverviewGeneralOutcomeCallable BdrcClient::DescribeBackupOverviewGeneralCallable(const DescribeBackupOverviewGeneralRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBackupOverviewGeneralOutcome>>();
    DescribeBackupOverviewGeneralAsync(
    request,
    [prom](
        const BdrcClient*,
        const DescribeBackupOverviewGeneralRequest&,
        DescribeBackupOverviewGeneralOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BdrcClient::DescribeBackupPlansOutcome BdrcClient::DescribeBackupPlans(const DescribeBackupPlansRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackupPlans");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackupPlansResponse rsp = DescribeBackupPlansResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackupPlansOutcome(rsp);
        else
            return DescribeBackupPlansOutcome(o.GetError());
    }
    else
    {
        return DescribeBackupPlansOutcome(outcome.GetError());
    }
}

void BdrcClient::DescribeBackupPlansAsync(const DescribeBackupPlansRequest& request, const DescribeBackupPlansAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBackupPlansRequest&;
    using Resp = DescribeBackupPlansResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBackupPlans", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BdrcClient::DescribeBackupPlansOutcomeCallable BdrcClient::DescribeBackupPlansCallable(const DescribeBackupPlansRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBackupPlansOutcome>>();
    DescribeBackupPlansAsync(
    request,
    [prom](
        const BdrcClient*,
        const DescribeBackupPlansRequest&,
        DescribeBackupPlansOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BdrcClient::DescribeBackupVaultsOutcome BdrcClient::DescribeBackupVaults(const DescribeBackupVaultsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackupVaults");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackupVaultsResponse rsp = DescribeBackupVaultsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackupVaultsOutcome(rsp);
        else
            return DescribeBackupVaultsOutcome(o.GetError());
    }
    else
    {
        return DescribeBackupVaultsOutcome(outcome.GetError());
    }
}

void BdrcClient::DescribeBackupVaultsAsync(const DescribeBackupVaultsRequest& request, const DescribeBackupVaultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBackupVaultsRequest&;
    using Resp = DescribeBackupVaultsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBackupVaults", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BdrcClient::DescribeBackupVaultsOutcomeCallable BdrcClient::DescribeBackupVaultsCallable(const DescribeBackupVaultsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBackupVaultsOutcome>>();
    DescribeBackupVaultsAsync(
    request,
    [prom](
        const BdrcClient*,
        const DescribeBackupVaultsRequest&,
        DescribeBackupVaultsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BdrcClient::DescribeBackupVaultsDeniedActionsOutcome BdrcClient::DescribeBackupVaultsDeniedActions(const DescribeBackupVaultsDeniedActionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackupVaultsDeniedActions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackupVaultsDeniedActionsResponse rsp = DescribeBackupVaultsDeniedActionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackupVaultsDeniedActionsOutcome(rsp);
        else
            return DescribeBackupVaultsDeniedActionsOutcome(o.GetError());
    }
    else
    {
        return DescribeBackupVaultsDeniedActionsOutcome(outcome.GetError());
    }
}

void BdrcClient::DescribeBackupVaultsDeniedActionsAsync(const DescribeBackupVaultsDeniedActionsRequest& request, const DescribeBackupVaultsDeniedActionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBackupVaultsDeniedActionsRequest&;
    using Resp = DescribeBackupVaultsDeniedActionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBackupVaultsDeniedActions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BdrcClient::DescribeBackupVaultsDeniedActionsOutcomeCallable BdrcClient::DescribeBackupVaultsDeniedActionsCallable(const DescribeBackupVaultsDeniedActionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBackupVaultsDeniedActionsOutcome>>();
    DescribeBackupVaultsDeniedActionsAsync(
    request,
    [prom](
        const BdrcClient*,
        const DescribeBackupVaultsDeniedActionsRequest&,
        DescribeBackupVaultsDeniedActionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BdrcClient::DescribeCommonBackupPointsOutcome BdrcClient::DescribeCommonBackupPoints(const DescribeCommonBackupPointsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCommonBackupPoints");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCommonBackupPointsResponse rsp = DescribeCommonBackupPointsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCommonBackupPointsOutcome(rsp);
        else
            return DescribeCommonBackupPointsOutcome(o.GetError());
    }
    else
    {
        return DescribeCommonBackupPointsOutcome(outcome.GetError());
    }
}

void BdrcClient::DescribeCommonBackupPointsAsync(const DescribeCommonBackupPointsRequest& request, const DescribeCommonBackupPointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCommonBackupPointsRequest&;
    using Resp = DescribeCommonBackupPointsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCommonBackupPoints", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BdrcClient::DescribeCommonBackupPointsOutcomeCallable BdrcClient::DescribeCommonBackupPointsCallable(const DescribeCommonBackupPointsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCommonBackupPointsOutcome>>();
    DescribeCommonBackupPointsAsync(
    request,
    [prom](
        const BdrcClient*,
        const DescribeCommonBackupPointsRequest&,
        DescribeCommonBackupPointsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BdrcClient::DescribeCopyPairsOutcome BdrcClient::DescribeCopyPairs(const DescribeCopyPairsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCopyPairs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCopyPairsResponse rsp = DescribeCopyPairsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCopyPairsOutcome(rsp);
        else
            return DescribeCopyPairsOutcome(o.GetError());
    }
    else
    {
        return DescribeCopyPairsOutcome(outcome.GetError());
    }
}

void BdrcClient::DescribeCopyPairsAsync(const DescribeCopyPairsRequest& request, const DescribeCopyPairsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCopyPairsRequest&;
    using Resp = DescribeCopyPairsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCopyPairs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BdrcClient::DescribeCopyPairsOutcomeCallable BdrcClient::DescribeCopyPairsCallable(const DescribeCopyPairsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCopyPairsOutcome>>();
    DescribeCopyPairsAsync(
    request,
    [prom](
        const BdrcClient*,
        const DescribeCopyPairsRequest&,
        DescribeCopyPairsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BdrcClient::DescribeCopyPairsDeniedActionsOutcome BdrcClient::DescribeCopyPairsDeniedActions(const DescribeCopyPairsDeniedActionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCopyPairsDeniedActions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCopyPairsDeniedActionsResponse rsp = DescribeCopyPairsDeniedActionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCopyPairsDeniedActionsOutcome(rsp);
        else
            return DescribeCopyPairsDeniedActionsOutcome(o.GetError());
    }
    else
    {
        return DescribeCopyPairsDeniedActionsOutcome(outcome.GetError());
    }
}

void BdrcClient::DescribeCopyPairsDeniedActionsAsync(const DescribeCopyPairsDeniedActionsRequest& request, const DescribeCopyPairsDeniedActionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCopyPairsDeniedActionsRequest&;
    using Resp = DescribeCopyPairsDeniedActionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCopyPairsDeniedActions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BdrcClient::DescribeCopyPairsDeniedActionsOutcomeCallable BdrcClient::DescribeCopyPairsDeniedActionsCallable(const DescribeCopyPairsDeniedActionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCopyPairsDeniedActionsOutcome>>();
    DescribeCopyPairsDeniedActionsAsync(
    request,
    [prom](
        const BdrcClient*,
        const DescribeCopyPairsDeniedActionsRequest&,
        DescribeCopyPairsDeniedActionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BdrcClient::DescribeDisasterRecoveryDrillGroupsOutcome BdrcClient::DescribeDisasterRecoveryDrillGroups(const DescribeDisasterRecoveryDrillGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDisasterRecoveryDrillGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDisasterRecoveryDrillGroupsResponse rsp = DescribeDisasterRecoveryDrillGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDisasterRecoveryDrillGroupsOutcome(rsp);
        else
            return DescribeDisasterRecoveryDrillGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeDisasterRecoveryDrillGroupsOutcome(outcome.GetError());
    }
}

void BdrcClient::DescribeDisasterRecoveryDrillGroupsAsync(const DescribeDisasterRecoveryDrillGroupsRequest& request, const DescribeDisasterRecoveryDrillGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDisasterRecoveryDrillGroupsRequest&;
    using Resp = DescribeDisasterRecoveryDrillGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDisasterRecoveryDrillGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BdrcClient::DescribeDisasterRecoveryDrillGroupsOutcomeCallable BdrcClient::DescribeDisasterRecoveryDrillGroupsCallable(const DescribeDisasterRecoveryDrillGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDisasterRecoveryDrillGroupsOutcome>>();
    DescribeDisasterRecoveryDrillGroupsAsync(
    request,
    [prom](
        const BdrcClient*,
        const DescribeDisasterRecoveryDrillGroupsRequest&,
        DescribeDisasterRecoveryDrillGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BdrcClient::DescribeDisasterRecoveryOverviewOutcome BdrcClient::DescribeDisasterRecoveryOverview(const DescribeDisasterRecoveryOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDisasterRecoveryOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDisasterRecoveryOverviewResponse rsp = DescribeDisasterRecoveryOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDisasterRecoveryOverviewOutcome(rsp);
        else
            return DescribeDisasterRecoveryOverviewOutcome(o.GetError());
    }
    else
    {
        return DescribeDisasterRecoveryOverviewOutcome(outcome.GetError());
    }
}

void BdrcClient::DescribeDisasterRecoveryOverviewAsync(const DescribeDisasterRecoveryOverviewRequest& request, const DescribeDisasterRecoveryOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDisasterRecoveryOverviewRequest&;
    using Resp = DescribeDisasterRecoveryOverviewResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDisasterRecoveryOverview", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BdrcClient::DescribeDisasterRecoveryOverviewOutcomeCallable BdrcClient::DescribeDisasterRecoveryOverviewCallable(const DescribeDisasterRecoveryOverviewRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDisasterRecoveryOverviewOutcome>>();
    DescribeDisasterRecoveryOverviewAsync(
    request,
    [prom](
        const BdrcClient*,
        const DescribeDisasterRecoveryOverviewRequest&,
        DescribeDisasterRecoveryOverviewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BdrcClient::DescribeDisasterRecoveryProtectGroupsOutcome BdrcClient::DescribeDisasterRecoveryProtectGroups(const DescribeDisasterRecoveryProtectGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDisasterRecoveryProtectGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDisasterRecoveryProtectGroupsResponse rsp = DescribeDisasterRecoveryProtectGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDisasterRecoveryProtectGroupsOutcome(rsp);
        else
            return DescribeDisasterRecoveryProtectGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeDisasterRecoveryProtectGroupsOutcome(outcome.GetError());
    }
}

void BdrcClient::DescribeDisasterRecoveryProtectGroupsAsync(const DescribeDisasterRecoveryProtectGroupsRequest& request, const DescribeDisasterRecoveryProtectGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDisasterRecoveryProtectGroupsRequest&;
    using Resp = DescribeDisasterRecoveryProtectGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDisasterRecoveryProtectGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BdrcClient::DescribeDisasterRecoveryProtectGroupsOutcomeCallable BdrcClient::DescribeDisasterRecoveryProtectGroupsCallable(const DescribeDisasterRecoveryProtectGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDisasterRecoveryProtectGroupsOutcome>>();
    DescribeDisasterRecoveryProtectGroupsAsync(
    request,
    [prom](
        const BdrcClient*,
        const DescribeDisasterRecoveryProtectGroupsRequest&,
        DescribeDisasterRecoveryProtectGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BdrcClient::DescribeDisasterRecoverySitePairsOutcome BdrcClient::DescribeDisasterRecoverySitePairs(const DescribeDisasterRecoverySitePairsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDisasterRecoverySitePairs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDisasterRecoverySitePairsResponse rsp = DescribeDisasterRecoverySitePairsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDisasterRecoverySitePairsOutcome(rsp);
        else
            return DescribeDisasterRecoverySitePairsOutcome(o.GetError());
    }
    else
    {
        return DescribeDisasterRecoverySitePairsOutcome(outcome.GetError());
    }
}

void BdrcClient::DescribeDisasterRecoverySitePairsAsync(const DescribeDisasterRecoverySitePairsRequest& request, const DescribeDisasterRecoverySitePairsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDisasterRecoverySitePairsRequest&;
    using Resp = DescribeDisasterRecoverySitePairsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDisasterRecoverySitePairs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BdrcClient::DescribeDisasterRecoverySitePairsOutcomeCallable BdrcClient::DescribeDisasterRecoverySitePairsCallable(const DescribeDisasterRecoverySitePairsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDisasterRecoverySitePairsOutcome>>();
    DescribeDisasterRecoverySitePairsAsync(
    request,
    [prom](
        const BdrcClient*,
        const DescribeDisasterRecoverySitePairsRequest&,
        DescribeDisasterRecoverySitePairsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BdrcClient::DescribeDisasterRecoverySitePairsDeniedActionsOutcome BdrcClient::DescribeDisasterRecoverySitePairsDeniedActions(const DescribeDisasterRecoverySitePairsDeniedActionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDisasterRecoverySitePairsDeniedActions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDisasterRecoverySitePairsDeniedActionsResponse rsp = DescribeDisasterRecoverySitePairsDeniedActionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDisasterRecoverySitePairsDeniedActionsOutcome(rsp);
        else
            return DescribeDisasterRecoverySitePairsDeniedActionsOutcome(o.GetError());
    }
    else
    {
        return DescribeDisasterRecoverySitePairsDeniedActionsOutcome(outcome.GetError());
    }
}

void BdrcClient::DescribeDisasterRecoverySitePairsDeniedActionsAsync(const DescribeDisasterRecoverySitePairsDeniedActionsRequest& request, const DescribeDisasterRecoverySitePairsDeniedActionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDisasterRecoverySitePairsDeniedActionsRequest&;
    using Resp = DescribeDisasterRecoverySitePairsDeniedActionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDisasterRecoverySitePairsDeniedActions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BdrcClient::DescribeDisasterRecoverySitePairsDeniedActionsOutcomeCallable BdrcClient::DescribeDisasterRecoverySitePairsDeniedActionsCallable(const DescribeDisasterRecoverySitePairsDeniedActionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDisasterRecoverySitePairsDeniedActionsOutcome>>();
    DescribeDisasterRecoverySitePairsDeniedActionsAsync(
    request,
    [prom](
        const BdrcClient*,
        const DescribeDisasterRecoverySitePairsDeniedActionsRequest&,
        DescribeDisasterRecoverySitePairsDeniedActionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BdrcClient::DescribeDisasterRecoverySupportRegionOutcome BdrcClient::DescribeDisasterRecoverySupportRegion(const DescribeDisasterRecoverySupportRegionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDisasterRecoverySupportRegion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDisasterRecoverySupportRegionResponse rsp = DescribeDisasterRecoverySupportRegionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDisasterRecoverySupportRegionOutcome(rsp);
        else
            return DescribeDisasterRecoverySupportRegionOutcome(o.GetError());
    }
    else
    {
        return DescribeDisasterRecoverySupportRegionOutcome(outcome.GetError());
    }
}

void BdrcClient::DescribeDisasterRecoverySupportRegionAsync(const DescribeDisasterRecoverySupportRegionRequest& request, const DescribeDisasterRecoverySupportRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDisasterRecoverySupportRegionRequest&;
    using Resp = DescribeDisasterRecoverySupportRegionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDisasterRecoverySupportRegion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BdrcClient::DescribeDisasterRecoverySupportRegionOutcomeCallable BdrcClient::DescribeDisasterRecoverySupportRegionCallable(const DescribeDisasterRecoverySupportRegionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDisasterRecoverySupportRegionOutcome>>();
    DescribeDisasterRecoverySupportRegionAsync(
    request,
    [prom](
        const BdrcClient*,
        const DescribeDisasterRecoverySupportRegionRequest&,
        DescribeDisasterRecoverySupportRegionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BdrcClient::DescribeDisksOutcome BdrcClient::DescribeDisks(const DescribeDisksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDisks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDisksResponse rsp = DescribeDisksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDisksOutcome(rsp);
        else
            return DescribeDisksOutcome(o.GetError());
    }
    else
    {
        return DescribeDisksOutcome(outcome.GetError());
    }
}

void BdrcClient::DescribeDisksAsync(const DescribeDisksRequest& request, const DescribeDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDisksRequest&;
    using Resp = DescribeDisksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDisks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BdrcClient::DescribeDisksOutcomeCallable BdrcClient::DescribeDisksCallable(const DescribeDisksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDisksOutcome>>();
    DescribeDisksAsync(
    request,
    [prom](
        const BdrcClient*,
        const DescribeDisksRequest&,
        DescribeDisksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BdrcClient::DescribeDrillPairsOutcome BdrcClient::DescribeDrillPairs(const DescribeDrillPairsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDrillPairs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDrillPairsResponse rsp = DescribeDrillPairsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDrillPairsOutcome(rsp);
        else
            return DescribeDrillPairsOutcome(o.GetError());
    }
    else
    {
        return DescribeDrillPairsOutcome(outcome.GetError());
    }
}

void BdrcClient::DescribeDrillPairsAsync(const DescribeDrillPairsRequest& request, const DescribeDrillPairsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDrillPairsRequest&;
    using Resp = DescribeDrillPairsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDrillPairs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BdrcClient::DescribeDrillPairsOutcomeCallable BdrcClient::DescribeDrillPairsCallable(const DescribeDrillPairsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDrillPairsOutcome>>();
    DescribeDrillPairsAsync(
    request,
    [prom](
        const BdrcClient*,
        const DescribeDrillPairsRequest&,
        DescribeDrillPairsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BdrcClient::DescribeDrillPairsDeniedActionsOutcome BdrcClient::DescribeDrillPairsDeniedActions(const DescribeDrillPairsDeniedActionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDrillPairsDeniedActions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDrillPairsDeniedActionsResponse rsp = DescribeDrillPairsDeniedActionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDrillPairsDeniedActionsOutcome(rsp);
        else
            return DescribeDrillPairsDeniedActionsOutcome(o.GetError());
    }
    else
    {
        return DescribeDrillPairsDeniedActionsOutcome(outcome.GetError());
    }
}

void BdrcClient::DescribeDrillPairsDeniedActionsAsync(const DescribeDrillPairsDeniedActionsRequest& request, const DescribeDrillPairsDeniedActionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDrillPairsDeniedActionsRequest&;
    using Resp = DescribeDrillPairsDeniedActionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDrillPairsDeniedActions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BdrcClient::DescribeDrillPairsDeniedActionsOutcomeCallable BdrcClient::DescribeDrillPairsDeniedActionsCallable(const DescribeDrillPairsDeniedActionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDrillPairsDeniedActionsOutcome>>();
    DescribeDrillPairsDeniedActionsAsync(
    request,
    [prom](
        const BdrcClient*,
        const DescribeDrillPairsDeniedActionsRequest&,
        DescribeDrillPairsDeniedActionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BdrcClient::DescribeFileBackupObjectsOutcome BdrcClient::DescribeFileBackupObjects(const DescribeFileBackupObjectsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFileBackupObjects");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFileBackupObjectsResponse rsp = DescribeFileBackupObjectsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFileBackupObjectsOutcome(rsp);
        else
            return DescribeFileBackupObjectsOutcome(o.GetError());
    }
    else
    {
        return DescribeFileBackupObjectsOutcome(outcome.GetError());
    }
}

void BdrcClient::DescribeFileBackupObjectsAsync(const DescribeFileBackupObjectsRequest& request, const DescribeFileBackupObjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFileBackupObjectsRequest&;
    using Resp = DescribeFileBackupObjectsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFileBackupObjects", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BdrcClient::DescribeFileBackupObjectsOutcomeCallable BdrcClient::DescribeFileBackupObjectsCallable(const DescribeFileBackupObjectsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFileBackupObjectsOutcome>>();
    DescribeFileBackupObjectsAsync(
    request,
    [prom](
        const BdrcClient*,
        const DescribeFileBackupObjectsRequest&,
        DescribeFileBackupObjectsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BdrcClient::DescribeFileBackupPlansOutcome BdrcClient::DescribeFileBackupPlans(const DescribeFileBackupPlansRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFileBackupPlans");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFileBackupPlansResponse rsp = DescribeFileBackupPlansResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFileBackupPlansOutcome(rsp);
        else
            return DescribeFileBackupPlansOutcome(o.GetError());
    }
    else
    {
        return DescribeFileBackupPlansOutcome(outcome.GetError());
    }
}

void BdrcClient::DescribeFileBackupPlansAsync(const DescribeFileBackupPlansRequest& request, const DescribeFileBackupPlansAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFileBackupPlansRequest&;
    using Resp = DescribeFileBackupPlansResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFileBackupPlans", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BdrcClient::DescribeFileBackupPlansOutcomeCallable BdrcClient::DescribeFileBackupPlansCallable(const DescribeFileBackupPlansRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFileBackupPlansOutcome>>();
    DescribeFileBackupPlansAsync(
    request,
    [prom](
        const BdrcClient*,
        const DescribeFileBackupPlansRequest&,
        DescribeFileBackupPlansOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BdrcClient::DescribeFileBackupsOutcome BdrcClient::DescribeFileBackups(const DescribeFileBackupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFileBackups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFileBackupsResponse rsp = DescribeFileBackupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFileBackupsOutcome(rsp);
        else
            return DescribeFileBackupsOutcome(o.GetError());
    }
    else
    {
        return DescribeFileBackupsOutcome(outcome.GetError());
    }
}

void BdrcClient::DescribeFileBackupsAsync(const DescribeFileBackupsRequest& request, const DescribeFileBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFileBackupsRequest&;
    using Resp = DescribeFileBackupsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFileBackups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BdrcClient::DescribeFileBackupsOutcomeCallable BdrcClient::DescribeFileBackupsCallable(const DescribeFileBackupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFileBackupsOutcome>>();
    DescribeFileBackupsAsync(
    request,
    [prom](
        const BdrcClient*,
        const DescribeFileBackupsRequest&,
        DescribeFileBackupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BdrcClient::DescribeFileBackupsDeniedActionsOutcome BdrcClient::DescribeFileBackupsDeniedActions(const DescribeFileBackupsDeniedActionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFileBackupsDeniedActions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFileBackupsDeniedActionsResponse rsp = DescribeFileBackupsDeniedActionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFileBackupsDeniedActionsOutcome(rsp);
        else
            return DescribeFileBackupsDeniedActionsOutcome(o.GetError());
    }
    else
    {
        return DescribeFileBackupsDeniedActionsOutcome(outcome.GetError());
    }
}

void BdrcClient::DescribeFileBackupsDeniedActionsAsync(const DescribeFileBackupsDeniedActionsRequest& request, const DescribeFileBackupsDeniedActionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFileBackupsDeniedActionsRequest&;
    using Resp = DescribeFileBackupsDeniedActionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFileBackupsDeniedActions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BdrcClient::DescribeFileBackupsDeniedActionsOutcomeCallable BdrcClient::DescribeFileBackupsDeniedActionsCallable(const DescribeFileBackupsDeniedActionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFileBackupsDeniedActionsOutcome>>();
    DescribeFileBackupsDeniedActionsAsync(
    request,
    [prom](
        const BdrcClient*,
        const DescribeFileBackupsDeniedActionsRequest&,
        DescribeFileBackupsDeniedActionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BdrcClient::DescribeFileRestoreTasksOutcome BdrcClient::DescribeFileRestoreTasks(const DescribeFileRestoreTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFileRestoreTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFileRestoreTasksResponse rsp = DescribeFileRestoreTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFileRestoreTasksOutcome(rsp);
        else
            return DescribeFileRestoreTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeFileRestoreTasksOutcome(outcome.GetError());
    }
}

void BdrcClient::DescribeFileRestoreTasksAsync(const DescribeFileRestoreTasksRequest& request, const DescribeFileRestoreTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFileRestoreTasksRequest&;
    using Resp = DescribeFileRestoreTasksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFileRestoreTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BdrcClient::DescribeFileRestoreTasksOutcomeCallable BdrcClient::DescribeFileRestoreTasksCallable(const DescribeFileRestoreTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFileRestoreTasksOutcome>>();
    DescribeFileRestoreTasksAsync(
    request,
    [prom](
        const BdrcClient*,
        const DescribeFileRestoreTasksRequest&,
        DescribeFileRestoreTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BdrcClient::DescribeJobsOutcome BdrcClient::DescribeJobs(const DescribeJobsRequest &request)
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

void BdrcClient::DescribeJobsAsync(const DescribeJobsRequest& request, const DescribeJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

BdrcClient::DescribeJobsOutcomeCallable BdrcClient::DescribeJobsCallable(const DescribeJobsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeJobsOutcome>>();
    DescribeJobsAsync(
    request,
    [prom](
        const BdrcClient*,
        const DescribeJobsRequest&,
        DescribeJobsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BdrcClient::DescribePriceCreateCopyPairsOutcome BdrcClient::DescribePriceCreateCopyPairs(const DescribePriceCreateCopyPairsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePriceCreateCopyPairs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePriceCreateCopyPairsResponse rsp = DescribePriceCreateCopyPairsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePriceCreateCopyPairsOutcome(rsp);
        else
            return DescribePriceCreateCopyPairsOutcome(o.GetError());
    }
    else
    {
        return DescribePriceCreateCopyPairsOutcome(outcome.GetError());
    }
}

void BdrcClient::DescribePriceCreateCopyPairsAsync(const DescribePriceCreateCopyPairsRequest& request, const DescribePriceCreateCopyPairsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePriceCreateCopyPairsRequest&;
    using Resp = DescribePriceCreateCopyPairsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePriceCreateCopyPairs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BdrcClient::DescribePriceCreateCopyPairsOutcomeCallable BdrcClient::DescribePriceCreateCopyPairsCallable(const DescribePriceCreateCopyPairsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePriceCreateCopyPairsOutcome>>();
    DescribePriceCreateCopyPairsAsync(
    request,
    [prom](
        const BdrcClient*,
        const DescribePriceCreateCopyPairsRequest&,
        DescribePriceCreateCopyPairsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BdrcClient::DescribeProtectGroupsDeniedActionsOutcome BdrcClient::DescribeProtectGroupsDeniedActions(const DescribeProtectGroupsDeniedActionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProtectGroupsDeniedActions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProtectGroupsDeniedActionsResponse rsp = DescribeProtectGroupsDeniedActionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProtectGroupsDeniedActionsOutcome(rsp);
        else
            return DescribeProtectGroupsDeniedActionsOutcome(o.GetError());
    }
    else
    {
        return DescribeProtectGroupsDeniedActionsOutcome(outcome.GetError());
    }
}

void BdrcClient::DescribeProtectGroupsDeniedActionsAsync(const DescribeProtectGroupsDeniedActionsRequest& request, const DescribeProtectGroupsDeniedActionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeProtectGroupsDeniedActionsRequest&;
    using Resp = DescribeProtectGroupsDeniedActionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProtectGroupsDeniedActions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BdrcClient::DescribeProtectGroupsDeniedActionsOutcomeCallable BdrcClient::DescribeProtectGroupsDeniedActionsCallable(const DescribeProtectGroupsDeniedActionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProtectGroupsDeniedActionsOutcome>>();
    DescribeProtectGroupsDeniedActionsAsync(
    request,
    [prom](
        const BdrcClient*,
        const DescribeProtectGroupsDeniedActionsRequest&,
        DescribeProtectGroupsDeniedActionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BdrcClient::DescribeProtectedInstancesOutcome BdrcClient::DescribeProtectedInstances(const DescribeProtectedInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProtectedInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProtectedInstancesResponse rsp = DescribeProtectedInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProtectedInstancesOutcome(rsp);
        else
            return DescribeProtectedInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeProtectedInstancesOutcome(outcome.GetError());
    }
}

void BdrcClient::DescribeProtectedInstancesAsync(const DescribeProtectedInstancesRequest& request, const DescribeProtectedInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeProtectedInstancesRequest&;
    using Resp = DescribeProtectedInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProtectedInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BdrcClient::DescribeProtectedInstancesOutcomeCallable BdrcClient::DescribeProtectedInstancesCallable(const DescribeProtectedInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProtectedInstancesOutcome>>();
    DescribeProtectedInstancesAsync(
    request,
    [prom](
        const BdrcClient*,
        const DescribeProtectedInstancesRequest&,
        DescribeProtectedInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BdrcClient::DescribeSecurityGroupMappingsOutcome BdrcClient::DescribeSecurityGroupMappings(const DescribeSecurityGroupMappingsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecurityGroupMappings");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecurityGroupMappingsResponse rsp = DescribeSecurityGroupMappingsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecurityGroupMappingsOutcome(rsp);
        else
            return DescribeSecurityGroupMappingsOutcome(o.GetError());
    }
    else
    {
        return DescribeSecurityGroupMappingsOutcome(outcome.GetError());
    }
}

void BdrcClient::DescribeSecurityGroupMappingsAsync(const DescribeSecurityGroupMappingsRequest& request, const DescribeSecurityGroupMappingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSecurityGroupMappingsRequest&;
    using Resp = DescribeSecurityGroupMappingsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSecurityGroupMappings", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BdrcClient::DescribeSecurityGroupMappingsOutcomeCallable BdrcClient::DescribeSecurityGroupMappingsCallable(const DescribeSecurityGroupMappingsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSecurityGroupMappingsOutcome>>();
    DescribeSecurityGroupMappingsAsync(
    request,
    [prom](
        const BdrcClient*,
        const DescribeSecurityGroupMappingsRequest&,
        DescribeSecurityGroupMappingsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BdrcClient::DescribeVpcMappingsOutcome BdrcClient::DescribeVpcMappings(const DescribeVpcMappingsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVpcMappings");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVpcMappingsResponse rsp = DescribeVpcMappingsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVpcMappingsOutcome(rsp);
        else
            return DescribeVpcMappingsOutcome(o.GetError());
    }
    else
    {
        return DescribeVpcMappingsOutcome(outcome.GetError());
    }
}

void BdrcClient::DescribeVpcMappingsAsync(const DescribeVpcMappingsRequest& request, const DescribeVpcMappingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVpcMappingsRequest&;
    using Resp = DescribeVpcMappingsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVpcMappings", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BdrcClient::DescribeVpcMappingsOutcomeCallable BdrcClient::DescribeVpcMappingsCallable(const DescribeVpcMappingsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVpcMappingsOutcome>>();
    DescribeVpcMappingsAsync(
    request,
    [prom](
        const BdrcClient*,
        const DescribeVpcMappingsRequest&,
        DescribeVpcMappingsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BdrcClient::FinishFailoverCopyPairsOutcome BdrcClient::FinishFailoverCopyPairs(const FinishFailoverCopyPairsRequest &request)
{
    auto outcome = MakeRequest(request, "FinishFailoverCopyPairs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        FinishFailoverCopyPairsResponse rsp = FinishFailoverCopyPairsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return FinishFailoverCopyPairsOutcome(rsp);
        else
            return FinishFailoverCopyPairsOutcome(o.GetError());
    }
    else
    {
        return FinishFailoverCopyPairsOutcome(outcome.GetError());
    }
}

void BdrcClient::FinishFailoverCopyPairsAsync(const FinishFailoverCopyPairsRequest& request, const FinishFailoverCopyPairsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const FinishFailoverCopyPairsRequest&;
    using Resp = FinishFailoverCopyPairsResponse;

    DoRequestAsync<Req, Resp>(
        "FinishFailoverCopyPairs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BdrcClient::FinishFailoverCopyPairsOutcomeCallable BdrcClient::FinishFailoverCopyPairsCallable(const FinishFailoverCopyPairsRequest &request)
{
    const auto prom = std::make_shared<std::promise<FinishFailoverCopyPairsOutcome>>();
    FinishFailoverCopyPairsAsync(
    request,
    [prom](
        const BdrcClient*,
        const FinishFailoverCopyPairsRequest&,
        FinishFailoverCopyPairsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BdrcClient::ModifyAutoBackupPolicyAttributeOutcome BdrcClient::ModifyAutoBackupPolicyAttribute(const ModifyAutoBackupPolicyAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAutoBackupPolicyAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAutoBackupPolicyAttributeResponse rsp = ModifyAutoBackupPolicyAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAutoBackupPolicyAttributeOutcome(rsp);
        else
            return ModifyAutoBackupPolicyAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyAutoBackupPolicyAttributeOutcome(outcome.GetError());
    }
}

void BdrcClient::ModifyAutoBackupPolicyAttributeAsync(const ModifyAutoBackupPolicyAttributeRequest& request, const ModifyAutoBackupPolicyAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAutoBackupPolicyAttributeRequest&;
    using Resp = ModifyAutoBackupPolicyAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAutoBackupPolicyAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BdrcClient::ModifyAutoBackupPolicyAttributeOutcomeCallable BdrcClient::ModifyAutoBackupPolicyAttributeCallable(const ModifyAutoBackupPolicyAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAutoBackupPolicyAttributeOutcome>>();
    ModifyAutoBackupPolicyAttributeAsync(
    request,
    [prom](
        const BdrcClient*,
        const ModifyAutoBackupPolicyAttributeRequest&,
        ModifyAutoBackupPolicyAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BdrcClient::ModifyBackupAttributeOutcome BdrcClient::ModifyBackupAttribute(const ModifyBackupAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBackupAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBackupAttributeResponse rsp = ModifyBackupAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBackupAttributeOutcome(rsp);
        else
            return ModifyBackupAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyBackupAttributeOutcome(outcome.GetError());
    }
}

void BdrcClient::ModifyBackupAttributeAsync(const ModifyBackupAttributeRequest& request, const ModifyBackupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyBackupAttributeRequest&;
    using Resp = ModifyBackupAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyBackupAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BdrcClient::ModifyBackupAttributeOutcomeCallable BdrcClient::ModifyBackupAttributeCallable(const ModifyBackupAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyBackupAttributeOutcome>>();
    ModifyBackupAttributeAsync(
    request,
    [prom](
        const BdrcClient*,
        const ModifyBackupAttributeRequest&,
        ModifyBackupAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BdrcClient::ModifyBackupVaultAttributeOutcome BdrcClient::ModifyBackupVaultAttribute(const ModifyBackupVaultAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBackupVaultAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBackupVaultAttributeResponse rsp = ModifyBackupVaultAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBackupVaultAttributeOutcome(rsp);
        else
            return ModifyBackupVaultAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyBackupVaultAttributeOutcome(outcome.GetError());
    }
}

void BdrcClient::ModifyBackupVaultAttributeAsync(const ModifyBackupVaultAttributeRequest& request, const ModifyBackupVaultAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyBackupVaultAttributeRequest&;
    using Resp = ModifyBackupVaultAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyBackupVaultAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BdrcClient::ModifyBackupVaultAttributeOutcomeCallable BdrcClient::ModifyBackupVaultAttributeCallable(const ModifyBackupVaultAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyBackupVaultAttributeOutcome>>();
    ModifyBackupVaultAttributeAsync(
    request,
    [prom](
        const BdrcClient*,
        const ModifyBackupVaultAttributeRequest&,
        ModifyBackupVaultAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BdrcClient::ModifyCopyPairAttributeOutcome BdrcClient::ModifyCopyPairAttribute(const ModifyCopyPairAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCopyPairAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCopyPairAttributeResponse rsp = ModifyCopyPairAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCopyPairAttributeOutcome(rsp);
        else
            return ModifyCopyPairAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyCopyPairAttributeOutcome(outcome.GetError());
    }
}

void BdrcClient::ModifyCopyPairAttributeAsync(const ModifyCopyPairAttributeRequest& request, const ModifyCopyPairAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCopyPairAttributeRequest&;
    using Resp = ModifyCopyPairAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCopyPairAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BdrcClient::ModifyCopyPairAttributeOutcomeCallable BdrcClient::ModifyCopyPairAttributeCallable(const ModifyCopyPairAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCopyPairAttributeOutcome>>();
    ModifyCopyPairAttributeAsync(
    request,
    [prom](
        const BdrcClient*,
        const ModifyCopyPairAttributeRequest&,
        ModifyCopyPairAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BdrcClient::ModifyDrillGroupAttributeOutcome BdrcClient::ModifyDrillGroupAttribute(const ModifyDrillGroupAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDrillGroupAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDrillGroupAttributeResponse rsp = ModifyDrillGroupAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDrillGroupAttributeOutcome(rsp);
        else
            return ModifyDrillGroupAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyDrillGroupAttributeOutcome(outcome.GetError());
    }
}

void BdrcClient::ModifyDrillGroupAttributeAsync(const ModifyDrillGroupAttributeRequest& request, const ModifyDrillGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDrillGroupAttributeRequest&;
    using Resp = ModifyDrillGroupAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDrillGroupAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BdrcClient::ModifyDrillGroupAttributeOutcomeCallable BdrcClient::ModifyDrillGroupAttributeCallable(const ModifyDrillGroupAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDrillGroupAttributeOutcome>>();
    ModifyDrillGroupAttributeAsync(
    request,
    [prom](
        const BdrcClient*,
        const ModifyDrillGroupAttributeRequest&,
        ModifyDrillGroupAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BdrcClient::ModifyDrillPairAttributeOutcome BdrcClient::ModifyDrillPairAttribute(const ModifyDrillPairAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDrillPairAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDrillPairAttributeResponse rsp = ModifyDrillPairAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDrillPairAttributeOutcome(rsp);
        else
            return ModifyDrillPairAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyDrillPairAttributeOutcome(outcome.GetError());
    }
}

void BdrcClient::ModifyDrillPairAttributeAsync(const ModifyDrillPairAttributeRequest& request, const ModifyDrillPairAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDrillPairAttributeRequest&;
    using Resp = ModifyDrillPairAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDrillPairAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BdrcClient::ModifyDrillPairAttributeOutcomeCallable BdrcClient::ModifyDrillPairAttributeCallable(const ModifyDrillPairAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDrillPairAttributeOutcome>>();
    ModifyDrillPairAttributeAsync(
    request,
    [prom](
        const BdrcClient*,
        const ModifyDrillPairAttributeRequest&,
        ModifyDrillPairAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BdrcClient::ModifyFileBackupAttributeOutcome BdrcClient::ModifyFileBackupAttribute(const ModifyFileBackupAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyFileBackupAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyFileBackupAttributeResponse rsp = ModifyFileBackupAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyFileBackupAttributeOutcome(rsp);
        else
            return ModifyFileBackupAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyFileBackupAttributeOutcome(outcome.GetError());
    }
}

void BdrcClient::ModifyFileBackupAttributeAsync(const ModifyFileBackupAttributeRequest& request, const ModifyFileBackupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyFileBackupAttributeRequest&;
    using Resp = ModifyFileBackupAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyFileBackupAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BdrcClient::ModifyFileBackupAttributeOutcomeCallable BdrcClient::ModifyFileBackupAttributeCallable(const ModifyFileBackupAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyFileBackupAttributeOutcome>>();
    ModifyFileBackupAttributeAsync(
    request,
    [prom](
        const BdrcClient*,
        const ModifyFileBackupAttributeRequest&,
        ModifyFileBackupAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BdrcClient::ModifyFileBackupPlanOutcome BdrcClient::ModifyFileBackupPlan(const ModifyFileBackupPlanRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyFileBackupPlan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyFileBackupPlanResponse rsp = ModifyFileBackupPlanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyFileBackupPlanOutcome(rsp);
        else
            return ModifyFileBackupPlanOutcome(o.GetError());
    }
    else
    {
        return ModifyFileBackupPlanOutcome(outcome.GetError());
    }
}

void BdrcClient::ModifyFileBackupPlanAsync(const ModifyFileBackupPlanRequest& request, const ModifyFileBackupPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyFileBackupPlanRequest&;
    using Resp = ModifyFileBackupPlanResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyFileBackupPlan", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BdrcClient::ModifyFileBackupPlanOutcomeCallable BdrcClient::ModifyFileBackupPlanCallable(const ModifyFileBackupPlanRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyFileBackupPlanOutcome>>();
    ModifyFileBackupPlanAsync(
    request,
    [prom](
        const BdrcClient*,
        const ModifyFileBackupPlanRequest&,
        ModifyFileBackupPlanOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BdrcClient::ModifyProtectGroupAttributeOutcome BdrcClient::ModifyProtectGroupAttribute(const ModifyProtectGroupAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyProtectGroupAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyProtectGroupAttributeResponse rsp = ModifyProtectGroupAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyProtectGroupAttributeOutcome(rsp);
        else
            return ModifyProtectGroupAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyProtectGroupAttributeOutcome(outcome.GetError());
    }
}

void BdrcClient::ModifyProtectGroupAttributeAsync(const ModifyProtectGroupAttributeRequest& request, const ModifyProtectGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyProtectGroupAttributeRequest&;
    using Resp = ModifyProtectGroupAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyProtectGroupAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BdrcClient::ModifyProtectGroupAttributeOutcomeCallable BdrcClient::ModifyProtectGroupAttributeCallable(const ModifyProtectGroupAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyProtectGroupAttributeOutcome>>();
    ModifyProtectGroupAttributeAsync(
    request,
    [prom](
        const BdrcClient*,
        const ModifyProtectGroupAttributeRequest&,
        ModifyProtectGroupAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BdrcClient::ModifySitePairAttributeOutcome BdrcClient::ModifySitePairAttribute(const ModifySitePairAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySitePairAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySitePairAttributeResponse rsp = ModifySitePairAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySitePairAttributeOutcome(rsp);
        else
            return ModifySitePairAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifySitePairAttributeOutcome(outcome.GetError());
    }
}

void BdrcClient::ModifySitePairAttributeAsync(const ModifySitePairAttributeRequest& request, const ModifySitePairAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifySitePairAttributeRequest&;
    using Resp = ModifySitePairAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySitePairAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BdrcClient::ModifySitePairAttributeOutcomeCallable BdrcClient::ModifySitePairAttributeCallable(const ModifySitePairAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySitePairAttributeOutcome>>();
    ModifySitePairAttributeAsync(
    request,
    [prom](
        const BdrcClient*,
        const ModifySitePairAttributeRequest&,
        ModifySitePairAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BdrcClient::ReportAgentMetricsOutcome BdrcClient::ReportAgentMetrics(const ReportAgentMetricsRequest &request)
{
    auto outcome = MakeRequest(request, "ReportAgentMetrics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReportAgentMetricsResponse rsp = ReportAgentMetricsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReportAgentMetricsOutcome(rsp);
        else
            return ReportAgentMetricsOutcome(o.GetError());
    }
    else
    {
        return ReportAgentMetricsOutcome(outcome.GetError());
    }
}

void BdrcClient::ReportAgentMetricsAsync(const ReportAgentMetricsRequest& request, const ReportAgentMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ReportAgentMetricsRequest&;
    using Resp = ReportAgentMetricsResponse;

    DoRequestAsync<Req, Resp>(
        "ReportAgentMetrics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BdrcClient::ReportAgentMetricsOutcomeCallable BdrcClient::ReportAgentMetricsCallable(const ReportAgentMetricsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ReportAgentMetricsOutcome>>();
    ReportAgentMetricsAsync(
    request,
    [prom](
        const BdrcClient*,
        const ReportAgentMetricsRequest&,
        ReportAgentMetricsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BdrcClient::ReportGatewayHeartbeatOutcome BdrcClient::ReportGatewayHeartbeat(const ReportGatewayHeartbeatRequest &request)
{
    auto outcome = MakeRequest(request, "ReportGatewayHeartbeat");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReportGatewayHeartbeatResponse rsp = ReportGatewayHeartbeatResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReportGatewayHeartbeatOutcome(rsp);
        else
            return ReportGatewayHeartbeatOutcome(o.GetError());
    }
    else
    {
        return ReportGatewayHeartbeatOutcome(outcome.GetError());
    }
}

void BdrcClient::ReportGatewayHeartbeatAsync(const ReportGatewayHeartbeatRequest& request, const ReportGatewayHeartbeatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ReportGatewayHeartbeatRequest&;
    using Resp = ReportGatewayHeartbeatResponse;

    DoRequestAsync<Req, Resp>(
        "ReportGatewayHeartbeat", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BdrcClient::ReportGatewayHeartbeatOutcomeCallable BdrcClient::ReportGatewayHeartbeatCallable(const ReportGatewayHeartbeatRequest &request)
{
    const auto prom = std::make_shared<std::promise<ReportGatewayHeartbeatOutcome>>();
    ReportGatewayHeartbeatAsync(
    request,
    [prom](
        const BdrcClient*,
        const ReportGatewayHeartbeatRequest&,
        ReportGatewayHeartbeatOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BdrcClient::ReportJobProgressOutcome BdrcClient::ReportJobProgress(const ReportJobProgressRequest &request)
{
    auto outcome = MakeRequest(request, "ReportJobProgress");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReportJobProgressResponse rsp = ReportJobProgressResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReportJobProgressOutcome(rsp);
        else
            return ReportJobProgressOutcome(o.GetError());
    }
    else
    {
        return ReportJobProgressOutcome(outcome.GetError());
    }
}

void BdrcClient::ReportJobProgressAsync(const ReportJobProgressRequest& request, const ReportJobProgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ReportJobProgressRequest&;
    using Resp = ReportJobProgressResponse;

    DoRequestAsync<Req, Resp>(
        "ReportJobProgress", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BdrcClient::ReportJobProgressOutcomeCallable BdrcClient::ReportJobProgressCallable(const ReportJobProgressRequest &request)
{
    const auto prom = std::make_shared<std::promise<ReportJobProgressOutcome>>();
    ReportJobProgressAsync(
    request,
    [prom](
        const BdrcClient*,
        const ReportJobProgressRequest&,
        ReportJobProgressOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BdrcClient::RunCopyPairTasksOutcome BdrcClient::RunCopyPairTasks(const RunCopyPairTasksRequest &request)
{
    auto outcome = MakeRequest(request, "RunCopyPairTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RunCopyPairTasksResponse rsp = RunCopyPairTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RunCopyPairTasksOutcome(rsp);
        else
            return RunCopyPairTasksOutcome(o.GetError());
    }
    else
    {
        return RunCopyPairTasksOutcome(outcome.GetError());
    }
}

void BdrcClient::RunCopyPairTasksAsync(const RunCopyPairTasksRequest& request, const RunCopyPairTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RunCopyPairTasksRequest&;
    using Resp = RunCopyPairTasksResponse;

    DoRequestAsync<Req, Resp>(
        "RunCopyPairTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BdrcClient::RunCopyPairTasksOutcomeCallable BdrcClient::RunCopyPairTasksCallable(const RunCopyPairTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<RunCopyPairTasksOutcome>>();
    RunCopyPairTasksAsync(
    request,
    [prom](
        const BdrcClient*,
        const RunCopyPairTasksRequest&,
        RunCopyPairTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BdrcClient::RunFailoverCopyPairsOutcome BdrcClient::RunFailoverCopyPairs(const RunFailoverCopyPairsRequest &request)
{
    auto outcome = MakeRequest(request, "RunFailoverCopyPairs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RunFailoverCopyPairsResponse rsp = RunFailoverCopyPairsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RunFailoverCopyPairsOutcome(rsp);
        else
            return RunFailoverCopyPairsOutcome(o.GetError());
    }
    else
    {
        return RunFailoverCopyPairsOutcome(outcome.GetError());
    }
}

void BdrcClient::RunFailoverCopyPairsAsync(const RunFailoverCopyPairsRequest& request, const RunFailoverCopyPairsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RunFailoverCopyPairsRequest&;
    using Resp = RunFailoverCopyPairsResponse;

    DoRequestAsync<Req, Resp>(
        "RunFailoverCopyPairs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BdrcClient::RunFailoverCopyPairsOutcomeCallable BdrcClient::RunFailoverCopyPairsCallable(const RunFailoverCopyPairsRequest &request)
{
    const auto prom = std::make_shared<std::promise<RunFailoverCopyPairsOutcome>>();
    RunFailoverCopyPairsAsync(
    request,
    [prom](
        const BdrcClient*,
        const RunFailoverCopyPairsRequest&,
        RunFailoverCopyPairsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BdrcClient::RunInstancesWithBackupGroupOutcome BdrcClient::RunInstancesWithBackupGroup(const RunInstancesWithBackupGroupRequest &request)
{
    auto outcome = MakeRequest(request, "RunInstancesWithBackupGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RunInstancesWithBackupGroupResponse rsp = RunInstancesWithBackupGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RunInstancesWithBackupGroupOutcome(rsp);
        else
            return RunInstancesWithBackupGroupOutcome(o.GetError());
    }
    else
    {
        return RunInstancesWithBackupGroupOutcome(outcome.GetError());
    }
}

void BdrcClient::RunInstancesWithBackupGroupAsync(const RunInstancesWithBackupGroupRequest& request, const RunInstancesWithBackupGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RunInstancesWithBackupGroupRequest&;
    using Resp = RunInstancesWithBackupGroupResponse;

    DoRequestAsync<Req, Resp>(
        "RunInstancesWithBackupGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BdrcClient::RunInstancesWithBackupGroupOutcomeCallable BdrcClient::RunInstancesWithBackupGroupCallable(const RunInstancesWithBackupGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<RunInstancesWithBackupGroupOutcome>>();
    RunInstancesWithBackupGroupAsync(
    request,
    [prom](
        const BdrcClient*,
        const RunInstancesWithBackupGroupRequest&,
        RunInstancesWithBackupGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BdrcClient::StopCopyPairTasksOutcome BdrcClient::StopCopyPairTasks(const StopCopyPairTasksRequest &request)
{
    auto outcome = MakeRequest(request, "StopCopyPairTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopCopyPairTasksResponse rsp = StopCopyPairTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopCopyPairTasksOutcome(rsp);
        else
            return StopCopyPairTasksOutcome(o.GetError());
    }
    else
    {
        return StopCopyPairTasksOutcome(outcome.GetError());
    }
}

void BdrcClient::StopCopyPairTasksAsync(const StopCopyPairTasksRequest& request, const StopCopyPairTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopCopyPairTasksRequest&;
    using Resp = StopCopyPairTasksResponse;

    DoRequestAsync<Req, Resp>(
        "StopCopyPairTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BdrcClient::StopCopyPairTasksOutcomeCallable BdrcClient::StopCopyPairTasksCallable(const StopCopyPairTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopCopyPairTasksOutcome>>();
    StopCopyPairTasksAsync(
    request,
    [prom](
        const BdrcClient*,
        const StopCopyPairTasksRequest&,
        StopCopyPairTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BdrcClient::UnbindAutoBackupPolicyOutcome BdrcClient::UnbindAutoBackupPolicy(const UnbindAutoBackupPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "UnbindAutoBackupPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnbindAutoBackupPolicyResponse rsp = UnbindAutoBackupPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnbindAutoBackupPolicyOutcome(rsp);
        else
            return UnbindAutoBackupPolicyOutcome(o.GetError());
    }
    else
    {
        return UnbindAutoBackupPolicyOutcome(outcome.GetError());
    }
}

void BdrcClient::UnbindAutoBackupPolicyAsync(const UnbindAutoBackupPolicyRequest& request, const UnbindAutoBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UnbindAutoBackupPolicyRequest&;
    using Resp = UnbindAutoBackupPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "UnbindAutoBackupPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BdrcClient::UnbindAutoBackupPolicyOutcomeCallable BdrcClient::UnbindAutoBackupPolicyCallable(const UnbindAutoBackupPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<UnbindAutoBackupPolicyOutcome>>();
    UnbindAutoBackupPolicyAsync(
    request,
    [prom](
        const BdrcClient*,
        const UnbindAutoBackupPolicyRequest&,
        UnbindAutoBackupPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


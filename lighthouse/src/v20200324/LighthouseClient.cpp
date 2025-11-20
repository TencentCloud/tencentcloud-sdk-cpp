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

#include <tencentcloud/lighthouse/v20200324/LighthouseClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Lighthouse::V20200324;
using namespace TencentCloud::Lighthouse::V20200324::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-03-24";
    const string ENDPOINT = "lighthouse.tencentcloudapi.com";
}

LighthouseClient::LighthouseClient(const Credential &credential, const string &region) :
    LighthouseClient(credential, region, ClientProfile())
{
}

LighthouseClient::LighthouseClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


LighthouseClient::ApplyDiskBackupOutcome LighthouseClient::ApplyDiskBackup(const ApplyDiskBackupRequest &request)
{
    auto outcome = MakeRequest(request, "ApplyDiskBackup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ApplyDiskBackupResponse rsp = ApplyDiskBackupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ApplyDiskBackupOutcome(rsp);
        else
            return ApplyDiskBackupOutcome(o.GetError());
    }
    else
    {
        return ApplyDiskBackupOutcome(outcome.GetError());
    }
}

void LighthouseClient::ApplyDiskBackupAsync(const ApplyDiskBackupRequest& request, const ApplyDiskBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ApplyDiskBackupRequest&;
    using Resp = ApplyDiskBackupResponse;

    DoRequestAsync<Req, Resp>(
        "ApplyDiskBackup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::ApplyDiskBackupOutcomeCallable LighthouseClient::ApplyDiskBackupCallable(const ApplyDiskBackupRequest &request)
{
    const auto prom = std::make_shared<std::promise<ApplyDiskBackupOutcome>>();
    ApplyDiskBackupAsync(
    request,
    [prom](
        const LighthouseClient*,
        const ApplyDiskBackupRequest&,
        ApplyDiskBackupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::ApplyFirewallTemplateOutcome LighthouseClient::ApplyFirewallTemplate(const ApplyFirewallTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "ApplyFirewallTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ApplyFirewallTemplateResponse rsp = ApplyFirewallTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ApplyFirewallTemplateOutcome(rsp);
        else
            return ApplyFirewallTemplateOutcome(o.GetError());
    }
    else
    {
        return ApplyFirewallTemplateOutcome(outcome.GetError());
    }
}

void LighthouseClient::ApplyFirewallTemplateAsync(const ApplyFirewallTemplateRequest& request, const ApplyFirewallTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ApplyFirewallTemplateRequest&;
    using Resp = ApplyFirewallTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "ApplyFirewallTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::ApplyFirewallTemplateOutcomeCallable LighthouseClient::ApplyFirewallTemplateCallable(const ApplyFirewallTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ApplyFirewallTemplateOutcome>>();
    ApplyFirewallTemplateAsync(
    request,
    [prom](
        const LighthouseClient*,
        const ApplyFirewallTemplateRequest&,
        ApplyFirewallTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::ApplyInstanceSnapshotOutcome LighthouseClient::ApplyInstanceSnapshot(const ApplyInstanceSnapshotRequest &request)
{
    auto outcome = MakeRequest(request, "ApplyInstanceSnapshot");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ApplyInstanceSnapshotResponse rsp = ApplyInstanceSnapshotResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ApplyInstanceSnapshotOutcome(rsp);
        else
            return ApplyInstanceSnapshotOutcome(o.GetError());
    }
    else
    {
        return ApplyInstanceSnapshotOutcome(outcome.GetError());
    }
}

void LighthouseClient::ApplyInstanceSnapshotAsync(const ApplyInstanceSnapshotRequest& request, const ApplyInstanceSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ApplyInstanceSnapshotRequest&;
    using Resp = ApplyInstanceSnapshotResponse;

    DoRequestAsync<Req, Resp>(
        "ApplyInstanceSnapshot", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::ApplyInstanceSnapshotOutcomeCallable LighthouseClient::ApplyInstanceSnapshotCallable(const ApplyInstanceSnapshotRequest &request)
{
    const auto prom = std::make_shared<std::promise<ApplyInstanceSnapshotOutcome>>();
    ApplyInstanceSnapshotAsync(
    request,
    [prom](
        const LighthouseClient*,
        const ApplyInstanceSnapshotRequest&,
        ApplyInstanceSnapshotOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::AssociateInstancesKeyPairsOutcome LighthouseClient::AssociateInstancesKeyPairs(const AssociateInstancesKeyPairsRequest &request)
{
    auto outcome = MakeRequest(request, "AssociateInstancesKeyPairs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AssociateInstancesKeyPairsResponse rsp = AssociateInstancesKeyPairsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AssociateInstancesKeyPairsOutcome(rsp);
        else
            return AssociateInstancesKeyPairsOutcome(o.GetError());
    }
    else
    {
        return AssociateInstancesKeyPairsOutcome(outcome.GetError());
    }
}

void LighthouseClient::AssociateInstancesKeyPairsAsync(const AssociateInstancesKeyPairsRequest& request, const AssociateInstancesKeyPairsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AssociateInstancesKeyPairsRequest&;
    using Resp = AssociateInstancesKeyPairsResponse;

    DoRequestAsync<Req, Resp>(
        "AssociateInstancesKeyPairs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::AssociateInstancesKeyPairsOutcomeCallable LighthouseClient::AssociateInstancesKeyPairsCallable(const AssociateInstancesKeyPairsRequest &request)
{
    const auto prom = std::make_shared<std::promise<AssociateInstancesKeyPairsOutcome>>();
    AssociateInstancesKeyPairsAsync(
    request,
    [prom](
        const LighthouseClient*,
        const AssociateInstancesKeyPairsRequest&,
        AssociateInstancesKeyPairsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::AttachCcnOutcome LighthouseClient::AttachCcn(const AttachCcnRequest &request)
{
    auto outcome = MakeRequest(request, "AttachCcn");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AttachCcnResponse rsp = AttachCcnResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AttachCcnOutcome(rsp);
        else
            return AttachCcnOutcome(o.GetError());
    }
    else
    {
        return AttachCcnOutcome(outcome.GetError());
    }
}

void LighthouseClient::AttachCcnAsync(const AttachCcnRequest& request, const AttachCcnAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AttachCcnRequest&;
    using Resp = AttachCcnResponse;

    DoRequestAsync<Req, Resp>(
        "AttachCcn", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::AttachCcnOutcomeCallable LighthouseClient::AttachCcnCallable(const AttachCcnRequest &request)
{
    const auto prom = std::make_shared<std::promise<AttachCcnOutcome>>();
    AttachCcnAsync(
    request,
    [prom](
        const LighthouseClient*,
        const AttachCcnRequest&,
        AttachCcnOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::AttachDisksOutcome LighthouseClient::AttachDisks(const AttachDisksRequest &request)
{
    auto outcome = MakeRequest(request, "AttachDisks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AttachDisksResponse rsp = AttachDisksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AttachDisksOutcome(rsp);
        else
            return AttachDisksOutcome(o.GetError());
    }
    else
    {
        return AttachDisksOutcome(outcome.GetError());
    }
}

void LighthouseClient::AttachDisksAsync(const AttachDisksRequest& request, const AttachDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AttachDisksRequest&;
    using Resp = AttachDisksResponse;

    DoRequestAsync<Req, Resp>(
        "AttachDisks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::AttachDisksOutcomeCallable LighthouseClient::AttachDisksCallable(const AttachDisksRequest &request)
{
    const auto prom = std::make_shared<std::promise<AttachDisksOutcome>>();
    AttachDisksAsync(
    request,
    [prom](
        const LighthouseClient*,
        const AttachDisksRequest&,
        AttachDisksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::CancelShareBlueprintAcrossAccountsOutcome LighthouseClient::CancelShareBlueprintAcrossAccounts(const CancelShareBlueprintAcrossAccountsRequest &request)
{
    auto outcome = MakeRequest(request, "CancelShareBlueprintAcrossAccounts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CancelShareBlueprintAcrossAccountsResponse rsp = CancelShareBlueprintAcrossAccountsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CancelShareBlueprintAcrossAccountsOutcome(rsp);
        else
            return CancelShareBlueprintAcrossAccountsOutcome(o.GetError());
    }
    else
    {
        return CancelShareBlueprintAcrossAccountsOutcome(outcome.GetError());
    }
}

void LighthouseClient::CancelShareBlueprintAcrossAccountsAsync(const CancelShareBlueprintAcrossAccountsRequest& request, const CancelShareBlueprintAcrossAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CancelShareBlueprintAcrossAccountsRequest&;
    using Resp = CancelShareBlueprintAcrossAccountsResponse;

    DoRequestAsync<Req, Resp>(
        "CancelShareBlueprintAcrossAccounts", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::CancelShareBlueprintAcrossAccountsOutcomeCallable LighthouseClient::CancelShareBlueprintAcrossAccountsCallable(const CancelShareBlueprintAcrossAccountsRequest &request)
{
    const auto prom = std::make_shared<std::promise<CancelShareBlueprintAcrossAccountsOutcome>>();
    CancelShareBlueprintAcrossAccountsAsync(
    request,
    [prom](
        const LighthouseClient*,
        const CancelShareBlueprintAcrossAccountsRequest&,
        CancelShareBlueprintAcrossAccountsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::CreateBlueprintOutcome LighthouseClient::CreateBlueprint(const CreateBlueprintRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBlueprint");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBlueprintResponse rsp = CreateBlueprintResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBlueprintOutcome(rsp);
        else
            return CreateBlueprintOutcome(o.GetError());
    }
    else
    {
        return CreateBlueprintOutcome(outcome.GetError());
    }
}

void LighthouseClient::CreateBlueprintAsync(const CreateBlueprintRequest& request, const CreateBlueprintAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateBlueprintRequest&;
    using Resp = CreateBlueprintResponse;

    DoRequestAsync<Req, Resp>(
        "CreateBlueprint", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::CreateBlueprintOutcomeCallable LighthouseClient::CreateBlueprintCallable(const CreateBlueprintRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateBlueprintOutcome>>();
    CreateBlueprintAsync(
    request,
    [prom](
        const LighthouseClient*,
        const CreateBlueprintRequest&,
        CreateBlueprintOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::CreateDiskBackupOutcome LighthouseClient::CreateDiskBackup(const CreateDiskBackupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDiskBackup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDiskBackupResponse rsp = CreateDiskBackupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDiskBackupOutcome(rsp);
        else
            return CreateDiskBackupOutcome(o.GetError());
    }
    else
    {
        return CreateDiskBackupOutcome(outcome.GetError());
    }
}

void LighthouseClient::CreateDiskBackupAsync(const CreateDiskBackupRequest& request, const CreateDiskBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDiskBackupRequest&;
    using Resp = CreateDiskBackupResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDiskBackup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::CreateDiskBackupOutcomeCallable LighthouseClient::CreateDiskBackupCallable(const CreateDiskBackupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDiskBackupOutcome>>();
    CreateDiskBackupAsync(
    request,
    [prom](
        const LighthouseClient*,
        const CreateDiskBackupRequest&,
        CreateDiskBackupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::CreateDisksOutcome LighthouseClient::CreateDisks(const CreateDisksRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDisks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDisksResponse rsp = CreateDisksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDisksOutcome(rsp);
        else
            return CreateDisksOutcome(o.GetError());
    }
    else
    {
        return CreateDisksOutcome(outcome.GetError());
    }
}

void LighthouseClient::CreateDisksAsync(const CreateDisksRequest& request, const CreateDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDisksRequest&;
    using Resp = CreateDisksResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDisks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::CreateDisksOutcomeCallable LighthouseClient::CreateDisksCallable(const CreateDisksRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDisksOutcome>>();
    CreateDisksAsync(
    request,
    [prom](
        const LighthouseClient*,
        const CreateDisksRequest&,
        CreateDisksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::CreateFirewallRulesOutcome LighthouseClient::CreateFirewallRules(const CreateFirewallRulesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFirewallRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFirewallRulesResponse rsp = CreateFirewallRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFirewallRulesOutcome(rsp);
        else
            return CreateFirewallRulesOutcome(o.GetError());
    }
    else
    {
        return CreateFirewallRulesOutcome(outcome.GetError());
    }
}

void LighthouseClient::CreateFirewallRulesAsync(const CreateFirewallRulesRequest& request, const CreateFirewallRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateFirewallRulesRequest&;
    using Resp = CreateFirewallRulesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateFirewallRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::CreateFirewallRulesOutcomeCallable LighthouseClient::CreateFirewallRulesCallable(const CreateFirewallRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateFirewallRulesOutcome>>();
    CreateFirewallRulesAsync(
    request,
    [prom](
        const LighthouseClient*,
        const CreateFirewallRulesRequest&,
        CreateFirewallRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::CreateFirewallTemplateOutcome LighthouseClient::CreateFirewallTemplate(const CreateFirewallTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFirewallTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFirewallTemplateResponse rsp = CreateFirewallTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFirewallTemplateOutcome(rsp);
        else
            return CreateFirewallTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateFirewallTemplateOutcome(outcome.GetError());
    }
}

void LighthouseClient::CreateFirewallTemplateAsync(const CreateFirewallTemplateRequest& request, const CreateFirewallTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateFirewallTemplateRequest&;
    using Resp = CreateFirewallTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "CreateFirewallTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::CreateFirewallTemplateOutcomeCallable LighthouseClient::CreateFirewallTemplateCallable(const CreateFirewallTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateFirewallTemplateOutcome>>();
    CreateFirewallTemplateAsync(
    request,
    [prom](
        const LighthouseClient*,
        const CreateFirewallTemplateRequest&,
        CreateFirewallTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::CreateFirewallTemplateRulesOutcome LighthouseClient::CreateFirewallTemplateRules(const CreateFirewallTemplateRulesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFirewallTemplateRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFirewallTemplateRulesResponse rsp = CreateFirewallTemplateRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFirewallTemplateRulesOutcome(rsp);
        else
            return CreateFirewallTemplateRulesOutcome(o.GetError());
    }
    else
    {
        return CreateFirewallTemplateRulesOutcome(outcome.GetError());
    }
}

void LighthouseClient::CreateFirewallTemplateRulesAsync(const CreateFirewallTemplateRulesRequest& request, const CreateFirewallTemplateRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateFirewallTemplateRulesRequest&;
    using Resp = CreateFirewallTemplateRulesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateFirewallTemplateRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::CreateFirewallTemplateRulesOutcomeCallable LighthouseClient::CreateFirewallTemplateRulesCallable(const CreateFirewallTemplateRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateFirewallTemplateRulesOutcome>>();
    CreateFirewallTemplateRulesAsync(
    request,
    [prom](
        const LighthouseClient*,
        const CreateFirewallTemplateRulesRequest&,
        CreateFirewallTemplateRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::CreateInstanceSnapshotOutcome LighthouseClient::CreateInstanceSnapshot(const CreateInstanceSnapshotRequest &request)
{
    auto outcome = MakeRequest(request, "CreateInstanceSnapshot");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateInstanceSnapshotResponse rsp = CreateInstanceSnapshotResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateInstanceSnapshotOutcome(rsp);
        else
            return CreateInstanceSnapshotOutcome(o.GetError());
    }
    else
    {
        return CreateInstanceSnapshotOutcome(outcome.GetError());
    }
}

void LighthouseClient::CreateInstanceSnapshotAsync(const CreateInstanceSnapshotRequest& request, const CreateInstanceSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateInstanceSnapshotRequest&;
    using Resp = CreateInstanceSnapshotResponse;

    DoRequestAsync<Req, Resp>(
        "CreateInstanceSnapshot", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::CreateInstanceSnapshotOutcomeCallable LighthouseClient::CreateInstanceSnapshotCallable(const CreateInstanceSnapshotRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateInstanceSnapshotOutcome>>();
    CreateInstanceSnapshotAsync(
    request,
    [prom](
        const LighthouseClient*,
        const CreateInstanceSnapshotRequest&,
        CreateInstanceSnapshotOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::CreateInstancesOutcome LighthouseClient::CreateInstances(const CreateInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateInstancesResponse rsp = CreateInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateInstancesOutcome(rsp);
        else
            return CreateInstancesOutcome(o.GetError());
    }
    else
    {
        return CreateInstancesOutcome(outcome.GetError());
    }
}

void LighthouseClient::CreateInstancesAsync(const CreateInstancesRequest& request, const CreateInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateInstancesRequest&;
    using Resp = CreateInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::CreateInstancesOutcomeCallable LighthouseClient::CreateInstancesCallable(const CreateInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateInstancesOutcome>>();
    CreateInstancesAsync(
    request,
    [prom](
        const LighthouseClient*,
        const CreateInstancesRequest&,
        CreateInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::CreateKeyPairOutcome LighthouseClient::CreateKeyPair(const CreateKeyPairRequest &request)
{
    auto outcome = MakeRequest(request, "CreateKeyPair");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateKeyPairResponse rsp = CreateKeyPairResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateKeyPairOutcome(rsp);
        else
            return CreateKeyPairOutcome(o.GetError());
    }
    else
    {
        return CreateKeyPairOutcome(outcome.GetError());
    }
}

void LighthouseClient::CreateKeyPairAsync(const CreateKeyPairRequest& request, const CreateKeyPairAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateKeyPairRequest&;
    using Resp = CreateKeyPairResponse;

    DoRequestAsync<Req, Resp>(
        "CreateKeyPair", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::CreateKeyPairOutcomeCallable LighthouseClient::CreateKeyPairCallable(const CreateKeyPairRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateKeyPairOutcome>>();
    CreateKeyPairAsync(
    request,
    [prom](
        const LighthouseClient*,
        const CreateKeyPairRequest&,
        CreateKeyPairOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::CreateMcpServerOutcome LighthouseClient::CreateMcpServer(const CreateMcpServerRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMcpServer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMcpServerResponse rsp = CreateMcpServerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMcpServerOutcome(rsp);
        else
            return CreateMcpServerOutcome(o.GetError());
    }
    else
    {
        return CreateMcpServerOutcome(outcome.GetError());
    }
}

void LighthouseClient::CreateMcpServerAsync(const CreateMcpServerRequest& request, const CreateMcpServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateMcpServerRequest&;
    using Resp = CreateMcpServerResponse;

    DoRequestAsync<Req, Resp>(
        "CreateMcpServer", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::CreateMcpServerOutcomeCallable LighthouseClient::CreateMcpServerCallable(const CreateMcpServerRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateMcpServerOutcome>>();
    CreateMcpServerAsync(
    request,
    [prom](
        const LighthouseClient*,
        const CreateMcpServerRequest&,
        CreateMcpServerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::DeleteBlueprintsOutcome LighthouseClient::DeleteBlueprints(const DeleteBlueprintsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteBlueprints");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteBlueprintsResponse rsp = DeleteBlueprintsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteBlueprintsOutcome(rsp);
        else
            return DeleteBlueprintsOutcome(o.GetError());
    }
    else
    {
        return DeleteBlueprintsOutcome(outcome.GetError());
    }
}

void LighthouseClient::DeleteBlueprintsAsync(const DeleteBlueprintsRequest& request, const DeleteBlueprintsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteBlueprintsRequest&;
    using Resp = DeleteBlueprintsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteBlueprints", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::DeleteBlueprintsOutcomeCallable LighthouseClient::DeleteBlueprintsCallable(const DeleteBlueprintsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteBlueprintsOutcome>>();
    DeleteBlueprintsAsync(
    request,
    [prom](
        const LighthouseClient*,
        const DeleteBlueprintsRequest&,
        DeleteBlueprintsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::DeleteDiskBackupsOutcome LighthouseClient::DeleteDiskBackups(const DeleteDiskBackupsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDiskBackups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDiskBackupsResponse rsp = DeleteDiskBackupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDiskBackupsOutcome(rsp);
        else
            return DeleteDiskBackupsOutcome(o.GetError());
    }
    else
    {
        return DeleteDiskBackupsOutcome(outcome.GetError());
    }
}

void LighthouseClient::DeleteDiskBackupsAsync(const DeleteDiskBackupsRequest& request, const DeleteDiskBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDiskBackupsRequest&;
    using Resp = DeleteDiskBackupsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDiskBackups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::DeleteDiskBackupsOutcomeCallable LighthouseClient::DeleteDiskBackupsCallable(const DeleteDiskBackupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDiskBackupsOutcome>>();
    DeleteDiskBackupsAsync(
    request,
    [prom](
        const LighthouseClient*,
        const DeleteDiskBackupsRequest&,
        DeleteDiskBackupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::DeleteFirewallRulesOutcome LighthouseClient::DeleteFirewallRules(const DeleteFirewallRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteFirewallRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteFirewallRulesResponse rsp = DeleteFirewallRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteFirewallRulesOutcome(rsp);
        else
            return DeleteFirewallRulesOutcome(o.GetError());
    }
    else
    {
        return DeleteFirewallRulesOutcome(outcome.GetError());
    }
}

void LighthouseClient::DeleteFirewallRulesAsync(const DeleteFirewallRulesRequest& request, const DeleteFirewallRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteFirewallRulesRequest&;
    using Resp = DeleteFirewallRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteFirewallRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::DeleteFirewallRulesOutcomeCallable LighthouseClient::DeleteFirewallRulesCallable(const DeleteFirewallRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteFirewallRulesOutcome>>();
    DeleteFirewallRulesAsync(
    request,
    [prom](
        const LighthouseClient*,
        const DeleteFirewallRulesRequest&,
        DeleteFirewallRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::DeleteFirewallTemplateOutcome LighthouseClient::DeleteFirewallTemplate(const DeleteFirewallTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteFirewallTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteFirewallTemplateResponse rsp = DeleteFirewallTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteFirewallTemplateOutcome(rsp);
        else
            return DeleteFirewallTemplateOutcome(o.GetError());
    }
    else
    {
        return DeleteFirewallTemplateOutcome(outcome.GetError());
    }
}

void LighthouseClient::DeleteFirewallTemplateAsync(const DeleteFirewallTemplateRequest& request, const DeleteFirewallTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteFirewallTemplateRequest&;
    using Resp = DeleteFirewallTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteFirewallTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::DeleteFirewallTemplateOutcomeCallable LighthouseClient::DeleteFirewallTemplateCallable(const DeleteFirewallTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteFirewallTemplateOutcome>>();
    DeleteFirewallTemplateAsync(
    request,
    [prom](
        const LighthouseClient*,
        const DeleteFirewallTemplateRequest&,
        DeleteFirewallTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::DeleteFirewallTemplateRulesOutcome LighthouseClient::DeleteFirewallTemplateRules(const DeleteFirewallTemplateRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteFirewallTemplateRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteFirewallTemplateRulesResponse rsp = DeleteFirewallTemplateRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteFirewallTemplateRulesOutcome(rsp);
        else
            return DeleteFirewallTemplateRulesOutcome(o.GetError());
    }
    else
    {
        return DeleteFirewallTemplateRulesOutcome(outcome.GetError());
    }
}

void LighthouseClient::DeleteFirewallTemplateRulesAsync(const DeleteFirewallTemplateRulesRequest& request, const DeleteFirewallTemplateRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteFirewallTemplateRulesRequest&;
    using Resp = DeleteFirewallTemplateRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteFirewallTemplateRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::DeleteFirewallTemplateRulesOutcomeCallable LighthouseClient::DeleteFirewallTemplateRulesCallable(const DeleteFirewallTemplateRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteFirewallTemplateRulesOutcome>>();
    DeleteFirewallTemplateRulesAsync(
    request,
    [prom](
        const LighthouseClient*,
        const DeleteFirewallTemplateRulesRequest&,
        DeleteFirewallTemplateRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::DeleteKeyPairsOutcome LighthouseClient::DeleteKeyPairs(const DeleteKeyPairsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteKeyPairs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteKeyPairsResponse rsp = DeleteKeyPairsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteKeyPairsOutcome(rsp);
        else
            return DeleteKeyPairsOutcome(o.GetError());
    }
    else
    {
        return DeleteKeyPairsOutcome(outcome.GetError());
    }
}

void LighthouseClient::DeleteKeyPairsAsync(const DeleteKeyPairsRequest& request, const DeleteKeyPairsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteKeyPairsRequest&;
    using Resp = DeleteKeyPairsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteKeyPairs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::DeleteKeyPairsOutcomeCallable LighthouseClient::DeleteKeyPairsCallable(const DeleteKeyPairsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteKeyPairsOutcome>>();
    DeleteKeyPairsAsync(
    request,
    [prom](
        const LighthouseClient*,
        const DeleteKeyPairsRequest&,
        DeleteKeyPairsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::DeleteSnapshotsOutcome LighthouseClient::DeleteSnapshots(const DeleteSnapshotsRequest &request)
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

void LighthouseClient::DeleteSnapshotsAsync(const DeleteSnapshotsRequest& request, const DeleteSnapshotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

LighthouseClient::DeleteSnapshotsOutcomeCallable LighthouseClient::DeleteSnapshotsCallable(const DeleteSnapshotsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteSnapshotsOutcome>>();
    DeleteSnapshotsAsync(
    request,
    [prom](
        const LighthouseClient*,
        const DeleteSnapshotsRequest&,
        DeleteSnapshotsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::DescribeAllScenesOutcome LighthouseClient::DescribeAllScenes(const DescribeAllScenesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAllScenes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAllScenesResponse rsp = DescribeAllScenesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAllScenesOutcome(rsp);
        else
            return DescribeAllScenesOutcome(o.GetError());
    }
    else
    {
        return DescribeAllScenesOutcome(outcome.GetError());
    }
}

void LighthouseClient::DescribeAllScenesAsync(const DescribeAllScenesRequest& request, const DescribeAllScenesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAllScenesRequest&;
    using Resp = DescribeAllScenesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAllScenes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::DescribeAllScenesOutcomeCallable LighthouseClient::DescribeAllScenesCallable(const DescribeAllScenesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAllScenesOutcome>>();
    DescribeAllScenesAsync(
    request,
    [prom](
        const LighthouseClient*,
        const DescribeAllScenesRequest&,
        DescribeAllScenesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::DescribeBlueprintInstancesOutcome LighthouseClient::DescribeBlueprintInstances(const DescribeBlueprintInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBlueprintInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBlueprintInstancesResponse rsp = DescribeBlueprintInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBlueprintInstancesOutcome(rsp);
        else
            return DescribeBlueprintInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeBlueprintInstancesOutcome(outcome.GetError());
    }
}

void LighthouseClient::DescribeBlueprintInstancesAsync(const DescribeBlueprintInstancesRequest& request, const DescribeBlueprintInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBlueprintInstancesRequest&;
    using Resp = DescribeBlueprintInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBlueprintInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::DescribeBlueprintInstancesOutcomeCallable LighthouseClient::DescribeBlueprintInstancesCallable(const DescribeBlueprintInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBlueprintInstancesOutcome>>();
    DescribeBlueprintInstancesAsync(
    request,
    [prom](
        const LighthouseClient*,
        const DescribeBlueprintInstancesRequest&,
        DescribeBlueprintInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::DescribeBlueprintsOutcome LighthouseClient::DescribeBlueprints(const DescribeBlueprintsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBlueprints");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBlueprintsResponse rsp = DescribeBlueprintsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBlueprintsOutcome(rsp);
        else
            return DescribeBlueprintsOutcome(o.GetError());
    }
    else
    {
        return DescribeBlueprintsOutcome(outcome.GetError());
    }
}

void LighthouseClient::DescribeBlueprintsAsync(const DescribeBlueprintsRequest& request, const DescribeBlueprintsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBlueprintsRequest&;
    using Resp = DescribeBlueprintsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBlueprints", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::DescribeBlueprintsOutcomeCallable LighthouseClient::DescribeBlueprintsCallable(const DescribeBlueprintsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBlueprintsOutcome>>();
    DescribeBlueprintsAsync(
    request,
    [prom](
        const LighthouseClient*,
        const DescribeBlueprintsRequest&,
        DescribeBlueprintsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::DescribeBundleDiscountOutcome LighthouseClient::DescribeBundleDiscount(const DescribeBundleDiscountRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBundleDiscount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBundleDiscountResponse rsp = DescribeBundleDiscountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBundleDiscountOutcome(rsp);
        else
            return DescribeBundleDiscountOutcome(o.GetError());
    }
    else
    {
        return DescribeBundleDiscountOutcome(outcome.GetError());
    }
}

void LighthouseClient::DescribeBundleDiscountAsync(const DescribeBundleDiscountRequest& request, const DescribeBundleDiscountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBundleDiscountRequest&;
    using Resp = DescribeBundleDiscountResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBundleDiscount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::DescribeBundleDiscountOutcomeCallable LighthouseClient::DescribeBundleDiscountCallable(const DescribeBundleDiscountRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBundleDiscountOutcome>>();
    DescribeBundleDiscountAsync(
    request,
    [prom](
        const LighthouseClient*,
        const DescribeBundleDiscountRequest&,
        DescribeBundleDiscountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::DescribeBundlesOutcome LighthouseClient::DescribeBundles(const DescribeBundlesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBundles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBundlesResponse rsp = DescribeBundlesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBundlesOutcome(rsp);
        else
            return DescribeBundlesOutcome(o.GetError());
    }
    else
    {
        return DescribeBundlesOutcome(outcome.GetError());
    }
}

void LighthouseClient::DescribeBundlesAsync(const DescribeBundlesRequest& request, const DescribeBundlesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBundlesRequest&;
    using Resp = DescribeBundlesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBundles", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::DescribeBundlesOutcomeCallable LighthouseClient::DescribeBundlesCallable(const DescribeBundlesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBundlesOutcome>>();
    DescribeBundlesAsync(
    request,
    [prom](
        const LighthouseClient*,
        const DescribeBundlesRequest&,
        DescribeBundlesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::DescribeCcnAttachedInstancesOutcome LighthouseClient::DescribeCcnAttachedInstances(const DescribeCcnAttachedInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCcnAttachedInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCcnAttachedInstancesResponse rsp = DescribeCcnAttachedInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCcnAttachedInstancesOutcome(rsp);
        else
            return DescribeCcnAttachedInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeCcnAttachedInstancesOutcome(outcome.GetError());
    }
}

void LighthouseClient::DescribeCcnAttachedInstancesAsync(const DescribeCcnAttachedInstancesRequest& request, const DescribeCcnAttachedInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCcnAttachedInstancesRequest&;
    using Resp = DescribeCcnAttachedInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCcnAttachedInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::DescribeCcnAttachedInstancesOutcomeCallable LighthouseClient::DescribeCcnAttachedInstancesCallable(const DescribeCcnAttachedInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCcnAttachedInstancesOutcome>>();
    DescribeCcnAttachedInstancesAsync(
    request,
    [prom](
        const LighthouseClient*,
        const DescribeCcnAttachedInstancesRequest&,
        DescribeCcnAttachedInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::DescribeDiskBackupsOutcome LighthouseClient::DescribeDiskBackups(const DescribeDiskBackupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDiskBackups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDiskBackupsResponse rsp = DescribeDiskBackupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDiskBackupsOutcome(rsp);
        else
            return DescribeDiskBackupsOutcome(o.GetError());
    }
    else
    {
        return DescribeDiskBackupsOutcome(outcome.GetError());
    }
}

void LighthouseClient::DescribeDiskBackupsAsync(const DescribeDiskBackupsRequest& request, const DescribeDiskBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDiskBackupsRequest&;
    using Resp = DescribeDiskBackupsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDiskBackups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::DescribeDiskBackupsOutcomeCallable LighthouseClient::DescribeDiskBackupsCallable(const DescribeDiskBackupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDiskBackupsOutcome>>();
    DescribeDiskBackupsAsync(
    request,
    [prom](
        const LighthouseClient*,
        const DescribeDiskBackupsRequest&,
        DescribeDiskBackupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::DescribeDiskBackupsDeniedActionsOutcome LighthouseClient::DescribeDiskBackupsDeniedActions(const DescribeDiskBackupsDeniedActionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDiskBackupsDeniedActions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDiskBackupsDeniedActionsResponse rsp = DescribeDiskBackupsDeniedActionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDiskBackupsDeniedActionsOutcome(rsp);
        else
            return DescribeDiskBackupsDeniedActionsOutcome(o.GetError());
    }
    else
    {
        return DescribeDiskBackupsDeniedActionsOutcome(outcome.GetError());
    }
}

void LighthouseClient::DescribeDiskBackupsDeniedActionsAsync(const DescribeDiskBackupsDeniedActionsRequest& request, const DescribeDiskBackupsDeniedActionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDiskBackupsDeniedActionsRequest&;
    using Resp = DescribeDiskBackupsDeniedActionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDiskBackupsDeniedActions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::DescribeDiskBackupsDeniedActionsOutcomeCallable LighthouseClient::DescribeDiskBackupsDeniedActionsCallable(const DescribeDiskBackupsDeniedActionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDiskBackupsDeniedActionsOutcome>>();
    DescribeDiskBackupsDeniedActionsAsync(
    request,
    [prom](
        const LighthouseClient*,
        const DescribeDiskBackupsDeniedActionsRequest&,
        DescribeDiskBackupsDeniedActionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::DescribeDiskConfigsOutcome LighthouseClient::DescribeDiskConfigs(const DescribeDiskConfigsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDiskConfigs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDiskConfigsResponse rsp = DescribeDiskConfigsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDiskConfigsOutcome(rsp);
        else
            return DescribeDiskConfigsOutcome(o.GetError());
    }
    else
    {
        return DescribeDiskConfigsOutcome(outcome.GetError());
    }
}

void LighthouseClient::DescribeDiskConfigsAsync(const DescribeDiskConfigsRequest& request, const DescribeDiskConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDiskConfigsRequest&;
    using Resp = DescribeDiskConfigsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDiskConfigs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::DescribeDiskConfigsOutcomeCallable LighthouseClient::DescribeDiskConfigsCallable(const DescribeDiskConfigsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDiskConfigsOutcome>>();
    DescribeDiskConfigsAsync(
    request,
    [prom](
        const LighthouseClient*,
        const DescribeDiskConfigsRequest&,
        DescribeDiskConfigsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::DescribeDiskDiscountOutcome LighthouseClient::DescribeDiskDiscount(const DescribeDiskDiscountRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDiskDiscount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDiskDiscountResponse rsp = DescribeDiskDiscountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDiskDiscountOutcome(rsp);
        else
            return DescribeDiskDiscountOutcome(o.GetError());
    }
    else
    {
        return DescribeDiskDiscountOutcome(outcome.GetError());
    }
}

void LighthouseClient::DescribeDiskDiscountAsync(const DescribeDiskDiscountRequest& request, const DescribeDiskDiscountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDiskDiscountRequest&;
    using Resp = DescribeDiskDiscountResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDiskDiscount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::DescribeDiskDiscountOutcomeCallable LighthouseClient::DescribeDiskDiscountCallable(const DescribeDiskDiscountRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDiskDiscountOutcome>>();
    DescribeDiskDiscountAsync(
    request,
    [prom](
        const LighthouseClient*,
        const DescribeDiskDiscountRequest&,
        DescribeDiskDiscountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::DescribeDisksOutcome LighthouseClient::DescribeDisks(const DescribeDisksRequest &request)
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

void LighthouseClient::DescribeDisksAsync(const DescribeDisksRequest& request, const DescribeDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

LighthouseClient::DescribeDisksOutcomeCallable LighthouseClient::DescribeDisksCallable(const DescribeDisksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDisksOutcome>>();
    DescribeDisksAsync(
    request,
    [prom](
        const LighthouseClient*,
        const DescribeDisksRequest&,
        DescribeDisksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::DescribeDisksDeniedActionsOutcome LighthouseClient::DescribeDisksDeniedActions(const DescribeDisksDeniedActionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDisksDeniedActions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDisksDeniedActionsResponse rsp = DescribeDisksDeniedActionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDisksDeniedActionsOutcome(rsp);
        else
            return DescribeDisksDeniedActionsOutcome(o.GetError());
    }
    else
    {
        return DescribeDisksDeniedActionsOutcome(outcome.GetError());
    }
}

void LighthouseClient::DescribeDisksDeniedActionsAsync(const DescribeDisksDeniedActionsRequest& request, const DescribeDisksDeniedActionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDisksDeniedActionsRequest&;
    using Resp = DescribeDisksDeniedActionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDisksDeniedActions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::DescribeDisksDeniedActionsOutcomeCallable LighthouseClient::DescribeDisksDeniedActionsCallable(const DescribeDisksDeniedActionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDisksDeniedActionsOutcome>>();
    DescribeDisksDeniedActionsAsync(
    request,
    [prom](
        const LighthouseClient*,
        const DescribeDisksDeniedActionsRequest&,
        DescribeDisksDeniedActionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::DescribeDisksReturnableOutcome LighthouseClient::DescribeDisksReturnable(const DescribeDisksReturnableRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDisksReturnable");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDisksReturnableResponse rsp = DescribeDisksReturnableResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDisksReturnableOutcome(rsp);
        else
            return DescribeDisksReturnableOutcome(o.GetError());
    }
    else
    {
        return DescribeDisksReturnableOutcome(outcome.GetError());
    }
}

void LighthouseClient::DescribeDisksReturnableAsync(const DescribeDisksReturnableRequest& request, const DescribeDisksReturnableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDisksReturnableRequest&;
    using Resp = DescribeDisksReturnableResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDisksReturnable", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::DescribeDisksReturnableOutcomeCallable LighthouseClient::DescribeDisksReturnableCallable(const DescribeDisksReturnableRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDisksReturnableOutcome>>();
    DescribeDisksReturnableAsync(
    request,
    [prom](
        const LighthouseClient*,
        const DescribeDisksReturnableRequest&,
        DescribeDisksReturnableOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::DescribeDockerActivitiesOutcome LighthouseClient::DescribeDockerActivities(const DescribeDockerActivitiesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDockerActivities");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDockerActivitiesResponse rsp = DescribeDockerActivitiesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDockerActivitiesOutcome(rsp);
        else
            return DescribeDockerActivitiesOutcome(o.GetError());
    }
    else
    {
        return DescribeDockerActivitiesOutcome(outcome.GetError());
    }
}

void LighthouseClient::DescribeDockerActivitiesAsync(const DescribeDockerActivitiesRequest& request, const DescribeDockerActivitiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDockerActivitiesRequest&;
    using Resp = DescribeDockerActivitiesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDockerActivities", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::DescribeDockerActivitiesOutcomeCallable LighthouseClient::DescribeDockerActivitiesCallable(const DescribeDockerActivitiesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDockerActivitiesOutcome>>();
    DescribeDockerActivitiesAsync(
    request,
    [prom](
        const LighthouseClient*,
        const DescribeDockerActivitiesRequest&,
        DescribeDockerActivitiesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::DescribeDockerContainerConfigurationOutcome LighthouseClient::DescribeDockerContainerConfiguration(const DescribeDockerContainerConfigurationRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDockerContainerConfiguration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDockerContainerConfigurationResponse rsp = DescribeDockerContainerConfigurationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDockerContainerConfigurationOutcome(rsp);
        else
            return DescribeDockerContainerConfigurationOutcome(o.GetError());
    }
    else
    {
        return DescribeDockerContainerConfigurationOutcome(outcome.GetError());
    }
}

void LighthouseClient::DescribeDockerContainerConfigurationAsync(const DescribeDockerContainerConfigurationRequest& request, const DescribeDockerContainerConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDockerContainerConfigurationRequest&;
    using Resp = DescribeDockerContainerConfigurationResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDockerContainerConfiguration", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::DescribeDockerContainerConfigurationOutcomeCallable LighthouseClient::DescribeDockerContainerConfigurationCallable(const DescribeDockerContainerConfigurationRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDockerContainerConfigurationOutcome>>();
    DescribeDockerContainerConfigurationAsync(
    request,
    [prom](
        const LighthouseClient*,
        const DescribeDockerContainerConfigurationRequest&,
        DescribeDockerContainerConfigurationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::DescribeDockerContainerDetailOutcome LighthouseClient::DescribeDockerContainerDetail(const DescribeDockerContainerDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDockerContainerDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDockerContainerDetailResponse rsp = DescribeDockerContainerDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDockerContainerDetailOutcome(rsp);
        else
            return DescribeDockerContainerDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeDockerContainerDetailOutcome(outcome.GetError());
    }
}

void LighthouseClient::DescribeDockerContainerDetailAsync(const DescribeDockerContainerDetailRequest& request, const DescribeDockerContainerDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDockerContainerDetailRequest&;
    using Resp = DescribeDockerContainerDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDockerContainerDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::DescribeDockerContainerDetailOutcomeCallable LighthouseClient::DescribeDockerContainerDetailCallable(const DescribeDockerContainerDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDockerContainerDetailOutcome>>();
    DescribeDockerContainerDetailAsync(
    request,
    [prom](
        const LighthouseClient*,
        const DescribeDockerContainerDetailRequest&,
        DescribeDockerContainerDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::DescribeDockerContainersOutcome LighthouseClient::DescribeDockerContainers(const DescribeDockerContainersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDockerContainers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDockerContainersResponse rsp = DescribeDockerContainersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDockerContainersOutcome(rsp);
        else
            return DescribeDockerContainersOutcome(o.GetError());
    }
    else
    {
        return DescribeDockerContainersOutcome(outcome.GetError());
    }
}

void LighthouseClient::DescribeDockerContainersAsync(const DescribeDockerContainersRequest& request, const DescribeDockerContainersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDockerContainersRequest&;
    using Resp = DescribeDockerContainersResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDockerContainers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::DescribeDockerContainersOutcomeCallable LighthouseClient::DescribeDockerContainersCallable(const DescribeDockerContainersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDockerContainersOutcome>>();
    DescribeDockerContainersAsync(
    request,
    [prom](
        const LighthouseClient*,
        const DescribeDockerContainersRequest&,
        DescribeDockerContainersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::DescribeFirewallRulesOutcome LighthouseClient::DescribeFirewallRules(const DescribeFirewallRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFirewallRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFirewallRulesResponse rsp = DescribeFirewallRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFirewallRulesOutcome(rsp);
        else
            return DescribeFirewallRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeFirewallRulesOutcome(outcome.GetError());
    }
}

void LighthouseClient::DescribeFirewallRulesAsync(const DescribeFirewallRulesRequest& request, const DescribeFirewallRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFirewallRulesRequest&;
    using Resp = DescribeFirewallRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFirewallRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::DescribeFirewallRulesOutcomeCallable LighthouseClient::DescribeFirewallRulesCallable(const DescribeFirewallRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFirewallRulesOutcome>>();
    DescribeFirewallRulesAsync(
    request,
    [prom](
        const LighthouseClient*,
        const DescribeFirewallRulesRequest&,
        DescribeFirewallRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::DescribeFirewallRulesTemplateOutcome LighthouseClient::DescribeFirewallRulesTemplate(const DescribeFirewallRulesTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFirewallRulesTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFirewallRulesTemplateResponse rsp = DescribeFirewallRulesTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFirewallRulesTemplateOutcome(rsp);
        else
            return DescribeFirewallRulesTemplateOutcome(o.GetError());
    }
    else
    {
        return DescribeFirewallRulesTemplateOutcome(outcome.GetError());
    }
}

void LighthouseClient::DescribeFirewallRulesTemplateAsync(const DescribeFirewallRulesTemplateRequest& request, const DescribeFirewallRulesTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFirewallRulesTemplateRequest&;
    using Resp = DescribeFirewallRulesTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFirewallRulesTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::DescribeFirewallRulesTemplateOutcomeCallable LighthouseClient::DescribeFirewallRulesTemplateCallable(const DescribeFirewallRulesTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFirewallRulesTemplateOutcome>>();
    DescribeFirewallRulesTemplateAsync(
    request,
    [prom](
        const LighthouseClient*,
        const DescribeFirewallRulesTemplateRequest&,
        DescribeFirewallRulesTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::DescribeFirewallTemplateApplyRecordsOutcome LighthouseClient::DescribeFirewallTemplateApplyRecords(const DescribeFirewallTemplateApplyRecordsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFirewallTemplateApplyRecords");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFirewallTemplateApplyRecordsResponse rsp = DescribeFirewallTemplateApplyRecordsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFirewallTemplateApplyRecordsOutcome(rsp);
        else
            return DescribeFirewallTemplateApplyRecordsOutcome(o.GetError());
    }
    else
    {
        return DescribeFirewallTemplateApplyRecordsOutcome(outcome.GetError());
    }
}

void LighthouseClient::DescribeFirewallTemplateApplyRecordsAsync(const DescribeFirewallTemplateApplyRecordsRequest& request, const DescribeFirewallTemplateApplyRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFirewallTemplateApplyRecordsRequest&;
    using Resp = DescribeFirewallTemplateApplyRecordsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFirewallTemplateApplyRecords", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::DescribeFirewallTemplateApplyRecordsOutcomeCallable LighthouseClient::DescribeFirewallTemplateApplyRecordsCallable(const DescribeFirewallTemplateApplyRecordsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFirewallTemplateApplyRecordsOutcome>>();
    DescribeFirewallTemplateApplyRecordsAsync(
    request,
    [prom](
        const LighthouseClient*,
        const DescribeFirewallTemplateApplyRecordsRequest&,
        DescribeFirewallTemplateApplyRecordsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::DescribeFirewallTemplateQuotaOutcome LighthouseClient::DescribeFirewallTemplateQuota(const DescribeFirewallTemplateQuotaRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFirewallTemplateQuota");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFirewallTemplateQuotaResponse rsp = DescribeFirewallTemplateQuotaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFirewallTemplateQuotaOutcome(rsp);
        else
            return DescribeFirewallTemplateQuotaOutcome(o.GetError());
    }
    else
    {
        return DescribeFirewallTemplateQuotaOutcome(outcome.GetError());
    }
}

void LighthouseClient::DescribeFirewallTemplateQuotaAsync(const DescribeFirewallTemplateQuotaRequest& request, const DescribeFirewallTemplateQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFirewallTemplateQuotaRequest&;
    using Resp = DescribeFirewallTemplateQuotaResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFirewallTemplateQuota", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::DescribeFirewallTemplateQuotaOutcomeCallable LighthouseClient::DescribeFirewallTemplateQuotaCallable(const DescribeFirewallTemplateQuotaRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFirewallTemplateQuotaOutcome>>();
    DescribeFirewallTemplateQuotaAsync(
    request,
    [prom](
        const LighthouseClient*,
        const DescribeFirewallTemplateQuotaRequest&,
        DescribeFirewallTemplateQuotaOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::DescribeFirewallTemplateRuleQuotaOutcome LighthouseClient::DescribeFirewallTemplateRuleQuota(const DescribeFirewallTemplateRuleQuotaRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFirewallTemplateRuleQuota");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFirewallTemplateRuleQuotaResponse rsp = DescribeFirewallTemplateRuleQuotaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFirewallTemplateRuleQuotaOutcome(rsp);
        else
            return DescribeFirewallTemplateRuleQuotaOutcome(o.GetError());
    }
    else
    {
        return DescribeFirewallTemplateRuleQuotaOutcome(outcome.GetError());
    }
}

void LighthouseClient::DescribeFirewallTemplateRuleQuotaAsync(const DescribeFirewallTemplateRuleQuotaRequest& request, const DescribeFirewallTemplateRuleQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFirewallTemplateRuleQuotaRequest&;
    using Resp = DescribeFirewallTemplateRuleQuotaResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFirewallTemplateRuleQuota", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::DescribeFirewallTemplateRuleQuotaOutcomeCallable LighthouseClient::DescribeFirewallTemplateRuleQuotaCallable(const DescribeFirewallTemplateRuleQuotaRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFirewallTemplateRuleQuotaOutcome>>();
    DescribeFirewallTemplateRuleQuotaAsync(
    request,
    [prom](
        const LighthouseClient*,
        const DescribeFirewallTemplateRuleQuotaRequest&,
        DescribeFirewallTemplateRuleQuotaOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::DescribeFirewallTemplateRulesOutcome LighthouseClient::DescribeFirewallTemplateRules(const DescribeFirewallTemplateRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFirewallTemplateRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFirewallTemplateRulesResponse rsp = DescribeFirewallTemplateRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFirewallTemplateRulesOutcome(rsp);
        else
            return DescribeFirewallTemplateRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeFirewallTemplateRulesOutcome(outcome.GetError());
    }
}

void LighthouseClient::DescribeFirewallTemplateRulesAsync(const DescribeFirewallTemplateRulesRequest& request, const DescribeFirewallTemplateRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFirewallTemplateRulesRequest&;
    using Resp = DescribeFirewallTemplateRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFirewallTemplateRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::DescribeFirewallTemplateRulesOutcomeCallable LighthouseClient::DescribeFirewallTemplateRulesCallable(const DescribeFirewallTemplateRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFirewallTemplateRulesOutcome>>();
    DescribeFirewallTemplateRulesAsync(
    request,
    [prom](
        const LighthouseClient*,
        const DescribeFirewallTemplateRulesRequest&,
        DescribeFirewallTemplateRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::DescribeFirewallTemplatesOutcome LighthouseClient::DescribeFirewallTemplates(const DescribeFirewallTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFirewallTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFirewallTemplatesResponse rsp = DescribeFirewallTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFirewallTemplatesOutcome(rsp);
        else
            return DescribeFirewallTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeFirewallTemplatesOutcome(outcome.GetError());
    }
}

void LighthouseClient::DescribeFirewallTemplatesAsync(const DescribeFirewallTemplatesRequest& request, const DescribeFirewallTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFirewallTemplatesRequest&;
    using Resp = DescribeFirewallTemplatesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFirewallTemplates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::DescribeFirewallTemplatesOutcomeCallable LighthouseClient::DescribeFirewallTemplatesCallable(const DescribeFirewallTemplatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFirewallTemplatesOutcome>>();
    DescribeFirewallTemplatesAsync(
    request,
    [prom](
        const LighthouseClient*,
        const DescribeFirewallTemplatesRequest&,
        DescribeFirewallTemplatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::DescribeGeneralResourceQuotasOutcome LighthouseClient::DescribeGeneralResourceQuotas(const DescribeGeneralResourceQuotasRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGeneralResourceQuotas");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGeneralResourceQuotasResponse rsp = DescribeGeneralResourceQuotasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGeneralResourceQuotasOutcome(rsp);
        else
            return DescribeGeneralResourceQuotasOutcome(o.GetError());
    }
    else
    {
        return DescribeGeneralResourceQuotasOutcome(outcome.GetError());
    }
}

void LighthouseClient::DescribeGeneralResourceQuotasAsync(const DescribeGeneralResourceQuotasRequest& request, const DescribeGeneralResourceQuotasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeGeneralResourceQuotasRequest&;
    using Resp = DescribeGeneralResourceQuotasResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGeneralResourceQuotas", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::DescribeGeneralResourceQuotasOutcomeCallable LighthouseClient::DescribeGeneralResourceQuotasCallable(const DescribeGeneralResourceQuotasRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGeneralResourceQuotasOutcome>>();
    DescribeGeneralResourceQuotasAsync(
    request,
    [prom](
        const LighthouseClient*,
        const DescribeGeneralResourceQuotasRequest&,
        DescribeGeneralResourceQuotasOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::DescribeImagesToShareOutcome LighthouseClient::DescribeImagesToShare(const DescribeImagesToShareRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeImagesToShare");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeImagesToShareResponse rsp = DescribeImagesToShareResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeImagesToShareOutcome(rsp);
        else
            return DescribeImagesToShareOutcome(o.GetError());
    }
    else
    {
        return DescribeImagesToShareOutcome(outcome.GetError());
    }
}

void LighthouseClient::DescribeImagesToShareAsync(const DescribeImagesToShareRequest& request, const DescribeImagesToShareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeImagesToShareRequest&;
    using Resp = DescribeImagesToShareResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeImagesToShare", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::DescribeImagesToShareOutcomeCallable LighthouseClient::DescribeImagesToShareCallable(const DescribeImagesToShareRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeImagesToShareOutcome>>();
    DescribeImagesToShareAsync(
    request,
    [prom](
        const LighthouseClient*,
        const DescribeImagesToShareRequest&,
        DescribeImagesToShareOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::DescribeInstanceVncUrlOutcome LighthouseClient::DescribeInstanceVncUrl(const DescribeInstanceVncUrlRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceVncUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceVncUrlResponse rsp = DescribeInstanceVncUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceVncUrlOutcome(rsp);
        else
            return DescribeInstanceVncUrlOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceVncUrlOutcome(outcome.GetError());
    }
}

void LighthouseClient::DescribeInstanceVncUrlAsync(const DescribeInstanceVncUrlRequest& request, const DescribeInstanceVncUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceVncUrlRequest&;
    using Resp = DescribeInstanceVncUrlResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceVncUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::DescribeInstanceVncUrlOutcomeCallable LighthouseClient::DescribeInstanceVncUrlCallable(const DescribeInstanceVncUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceVncUrlOutcome>>();
    DescribeInstanceVncUrlAsync(
    request,
    [prom](
        const LighthouseClient*,
        const DescribeInstanceVncUrlRequest&,
        DescribeInstanceVncUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::DescribeInstancesOutcome LighthouseClient::DescribeInstances(const DescribeInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstancesResponse rsp = DescribeInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstancesOutcome(rsp);
        else
            return DescribeInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeInstancesOutcome(outcome.GetError());
    }
}

void LighthouseClient::DescribeInstancesAsync(const DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstancesRequest&;
    using Resp = DescribeInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::DescribeInstancesOutcomeCallable LighthouseClient::DescribeInstancesCallable(const DescribeInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstancesOutcome>>();
    DescribeInstancesAsync(
    request,
    [prom](
        const LighthouseClient*,
        const DescribeInstancesRequest&,
        DescribeInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::DescribeInstancesDeniedActionsOutcome LighthouseClient::DescribeInstancesDeniedActions(const DescribeInstancesDeniedActionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstancesDeniedActions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstancesDeniedActionsResponse rsp = DescribeInstancesDeniedActionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstancesDeniedActionsOutcome(rsp);
        else
            return DescribeInstancesDeniedActionsOutcome(o.GetError());
    }
    else
    {
        return DescribeInstancesDeniedActionsOutcome(outcome.GetError());
    }
}

void LighthouseClient::DescribeInstancesDeniedActionsAsync(const DescribeInstancesDeniedActionsRequest& request, const DescribeInstancesDeniedActionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstancesDeniedActionsRequest&;
    using Resp = DescribeInstancesDeniedActionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstancesDeniedActions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::DescribeInstancesDeniedActionsOutcomeCallable LighthouseClient::DescribeInstancesDeniedActionsCallable(const DescribeInstancesDeniedActionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstancesDeniedActionsOutcome>>();
    DescribeInstancesDeniedActionsAsync(
    request,
    [prom](
        const LighthouseClient*,
        const DescribeInstancesDeniedActionsRequest&,
        DescribeInstancesDeniedActionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::DescribeInstancesDiskNumOutcome LighthouseClient::DescribeInstancesDiskNum(const DescribeInstancesDiskNumRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstancesDiskNum");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstancesDiskNumResponse rsp = DescribeInstancesDiskNumResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstancesDiskNumOutcome(rsp);
        else
            return DescribeInstancesDiskNumOutcome(o.GetError());
    }
    else
    {
        return DescribeInstancesDiskNumOutcome(outcome.GetError());
    }
}

void LighthouseClient::DescribeInstancesDiskNumAsync(const DescribeInstancesDiskNumRequest& request, const DescribeInstancesDiskNumAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstancesDiskNumRequest&;
    using Resp = DescribeInstancesDiskNumResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstancesDiskNum", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::DescribeInstancesDiskNumOutcomeCallable LighthouseClient::DescribeInstancesDiskNumCallable(const DescribeInstancesDiskNumRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstancesDiskNumOutcome>>();
    DescribeInstancesDiskNumAsync(
    request,
    [prom](
        const LighthouseClient*,
        const DescribeInstancesDiskNumRequest&,
        DescribeInstancesDiskNumOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::DescribeInstancesReturnableOutcome LighthouseClient::DescribeInstancesReturnable(const DescribeInstancesReturnableRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstancesReturnable");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstancesReturnableResponse rsp = DescribeInstancesReturnableResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstancesReturnableOutcome(rsp);
        else
            return DescribeInstancesReturnableOutcome(o.GetError());
    }
    else
    {
        return DescribeInstancesReturnableOutcome(outcome.GetError());
    }
}

void LighthouseClient::DescribeInstancesReturnableAsync(const DescribeInstancesReturnableRequest& request, const DescribeInstancesReturnableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstancesReturnableRequest&;
    using Resp = DescribeInstancesReturnableResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstancesReturnable", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::DescribeInstancesReturnableOutcomeCallable LighthouseClient::DescribeInstancesReturnableCallable(const DescribeInstancesReturnableRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstancesReturnableOutcome>>();
    DescribeInstancesReturnableAsync(
    request,
    [prom](
        const LighthouseClient*,
        const DescribeInstancesReturnableRequest&,
        DescribeInstancesReturnableOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::DescribeInstancesTrafficPackagesOutcome LighthouseClient::DescribeInstancesTrafficPackages(const DescribeInstancesTrafficPackagesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstancesTrafficPackages");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstancesTrafficPackagesResponse rsp = DescribeInstancesTrafficPackagesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstancesTrafficPackagesOutcome(rsp);
        else
            return DescribeInstancesTrafficPackagesOutcome(o.GetError());
    }
    else
    {
        return DescribeInstancesTrafficPackagesOutcome(outcome.GetError());
    }
}

void LighthouseClient::DescribeInstancesTrafficPackagesAsync(const DescribeInstancesTrafficPackagesRequest& request, const DescribeInstancesTrafficPackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstancesTrafficPackagesRequest&;
    using Resp = DescribeInstancesTrafficPackagesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstancesTrafficPackages", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::DescribeInstancesTrafficPackagesOutcomeCallable LighthouseClient::DescribeInstancesTrafficPackagesCallable(const DescribeInstancesTrafficPackagesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstancesTrafficPackagesOutcome>>();
    DescribeInstancesTrafficPackagesAsync(
    request,
    [prom](
        const LighthouseClient*,
        const DescribeInstancesTrafficPackagesRequest&,
        DescribeInstancesTrafficPackagesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::DescribeKeyPairsOutcome LighthouseClient::DescribeKeyPairs(const DescribeKeyPairsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeKeyPairs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeKeyPairsResponse rsp = DescribeKeyPairsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeKeyPairsOutcome(rsp);
        else
            return DescribeKeyPairsOutcome(o.GetError());
    }
    else
    {
        return DescribeKeyPairsOutcome(outcome.GetError());
    }
}

void LighthouseClient::DescribeKeyPairsAsync(const DescribeKeyPairsRequest& request, const DescribeKeyPairsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeKeyPairsRequest&;
    using Resp = DescribeKeyPairsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeKeyPairs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::DescribeKeyPairsOutcomeCallable LighthouseClient::DescribeKeyPairsCallable(const DescribeKeyPairsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeKeyPairsOutcome>>();
    DescribeKeyPairsAsync(
    request,
    [prom](
        const LighthouseClient*,
        const DescribeKeyPairsRequest&,
        DescribeKeyPairsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::DescribeMcpServerTemplatesOutcome LighthouseClient::DescribeMcpServerTemplates(const DescribeMcpServerTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMcpServerTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMcpServerTemplatesResponse rsp = DescribeMcpServerTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMcpServerTemplatesOutcome(rsp);
        else
            return DescribeMcpServerTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeMcpServerTemplatesOutcome(outcome.GetError());
    }
}

void LighthouseClient::DescribeMcpServerTemplatesAsync(const DescribeMcpServerTemplatesRequest& request, const DescribeMcpServerTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMcpServerTemplatesRequest&;
    using Resp = DescribeMcpServerTemplatesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMcpServerTemplates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::DescribeMcpServerTemplatesOutcomeCallable LighthouseClient::DescribeMcpServerTemplatesCallable(const DescribeMcpServerTemplatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMcpServerTemplatesOutcome>>();
    DescribeMcpServerTemplatesAsync(
    request,
    [prom](
        const LighthouseClient*,
        const DescribeMcpServerTemplatesRequest&,
        DescribeMcpServerTemplatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::DescribeMcpServersOutcome LighthouseClient::DescribeMcpServers(const DescribeMcpServersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMcpServers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMcpServersResponse rsp = DescribeMcpServersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMcpServersOutcome(rsp);
        else
            return DescribeMcpServersOutcome(o.GetError());
    }
    else
    {
        return DescribeMcpServersOutcome(outcome.GetError());
    }
}

void LighthouseClient::DescribeMcpServersAsync(const DescribeMcpServersRequest& request, const DescribeMcpServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMcpServersRequest&;
    using Resp = DescribeMcpServersResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMcpServers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::DescribeMcpServersOutcomeCallable LighthouseClient::DescribeMcpServersCallable(const DescribeMcpServersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMcpServersOutcome>>();
    DescribeMcpServersAsync(
    request,
    [prom](
        const LighthouseClient*,
        const DescribeMcpServersRequest&,
        DescribeMcpServersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::DescribeModifyInstanceBundlesOutcome LighthouseClient::DescribeModifyInstanceBundles(const DescribeModifyInstanceBundlesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeModifyInstanceBundles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeModifyInstanceBundlesResponse rsp = DescribeModifyInstanceBundlesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeModifyInstanceBundlesOutcome(rsp);
        else
            return DescribeModifyInstanceBundlesOutcome(o.GetError());
    }
    else
    {
        return DescribeModifyInstanceBundlesOutcome(outcome.GetError());
    }
}

void LighthouseClient::DescribeModifyInstanceBundlesAsync(const DescribeModifyInstanceBundlesRequest& request, const DescribeModifyInstanceBundlesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeModifyInstanceBundlesRequest&;
    using Resp = DescribeModifyInstanceBundlesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeModifyInstanceBundles", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::DescribeModifyInstanceBundlesOutcomeCallable LighthouseClient::DescribeModifyInstanceBundlesCallable(const DescribeModifyInstanceBundlesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeModifyInstanceBundlesOutcome>>();
    DescribeModifyInstanceBundlesAsync(
    request,
    [prom](
        const LighthouseClient*,
        const DescribeModifyInstanceBundlesRequest&,
        DescribeModifyInstanceBundlesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::DescribeRegionsOutcome LighthouseClient::DescribeRegions(const DescribeRegionsRequest &request)
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

void LighthouseClient::DescribeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

LighthouseClient::DescribeRegionsOutcomeCallable LighthouseClient::DescribeRegionsCallable(const DescribeRegionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRegionsOutcome>>();
    DescribeRegionsAsync(
    request,
    [prom](
        const LighthouseClient*,
        const DescribeRegionsRequest&,
        DescribeRegionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::DescribeResetInstanceBlueprintsOutcome LighthouseClient::DescribeResetInstanceBlueprints(const DescribeResetInstanceBlueprintsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResetInstanceBlueprints");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResetInstanceBlueprintsResponse rsp = DescribeResetInstanceBlueprintsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResetInstanceBlueprintsOutcome(rsp);
        else
            return DescribeResetInstanceBlueprintsOutcome(o.GetError());
    }
    else
    {
        return DescribeResetInstanceBlueprintsOutcome(outcome.GetError());
    }
}

void LighthouseClient::DescribeResetInstanceBlueprintsAsync(const DescribeResetInstanceBlueprintsRequest& request, const DescribeResetInstanceBlueprintsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeResetInstanceBlueprintsRequest&;
    using Resp = DescribeResetInstanceBlueprintsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeResetInstanceBlueprints", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::DescribeResetInstanceBlueprintsOutcomeCallable LighthouseClient::DescribeResetInstanceBlueprintsCallable(const DescribeResetInstanceBlueprintsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeResetInstanceBlueprintsOutcome>>();
    DescribeResetInstanceBlueprintsAsync(
    request,
    [prom](
        const LighthouseClient*,
        const DescribeResetInstanceBlueprintsRequest&,
        DescribeResetInstanceBlueprintsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::DescribeScenesOutcome LighthouseClient::DescribeScenes(const DescribeScenesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScenes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScenesResponse rsp = DescribeScenesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScenesOutcome(rsp);
        else
            return DescribeScenesOutcome(o.GetError());
    }
    else
    {
        return DescribeScenesOutcome(outcome.GetError());
    }
}

void LighthouseClient::DescribeScenesAsync(const DescribeScenesRequest& request, const DescribeScenesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeScenesRequest&;
    using Resp = DescribeScenesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeScenes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::DescribeScenesOutcomeCallable LighthouseClient::DescribeScenesCallable(const DescribeScenesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeScenesOutcome>>();
    DescribeScenesAsync(
    request,
    [prom](
        const LighthouseClient*,
        const DescribeScenesRequest&,
        DescribeScenesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::DescribeSnapshotsOutcome LighthouseClient::DescribeSnapshots(const DescribeSnapshotsRequest &request)
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

void LighthouseClient::DescribeSnapshotsAsync(const DescribeSnapshotsRequest& request, const DescribeSnapshotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

LighthouseClient::DescribeSnapshotsOutcomeCallable LighthouseClient::DescribeSnapshotsCallable(const DescribeSnapshotsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSnapshotsOutcome>>();
    DescribeSnapshotsAsync(
    request,
    [prom](
        const LighthouseClient*,
        const DescribeSnapshotsRequest&,
        DescribeSnapshotsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::DescribeSnapshotsDeniedActionsOutcome LighthouseClient::DescribeSnapshotsDeniedActions(const DescribeSnapshotsDeniedActionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSnapshotsDeniedActions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSnapshotsDeniedActionsResponse rsp = DescribeSnapshotsDeniedActionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSnapshotsDeniedActionsOutcome(rsp);
        else
            return DescribeSnapshotsDeniedActionsOutcome(o.GetError());
    }
    else
    {
        return DescribeSnapshotsDeniedActionsOutcome(outcome.GetError());
    }
}

void LighthouseClient::DescribeSnapshotsDeniedActionsAsync(const DescribeSnapshotsDeniedActionsRequest& request, const DescribeSnapshotsDeniedActionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSnapshotsDeniedActionsRequest&;
    using Resp = DescribeSnapshotsDeniedActionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSnapshotsDeniedActions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::DescribeSnapshotsDeniedActionsOutcomeCallable LighthouseClient::DescribeSnapshotsDeniedActionsCallable(const DescribeSnapshotsDeniedActionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSnapshotsDeniedActionsOutcome>>();
    DescribeSnapshotsDeniedActionsAsync(
    request,
    [prom](
        const LighthouseClient*,
        const DescribeSnapshotsDeniedActionsRequest&,
        DescribeSnapshotsDeniedActionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::DescribeZonesOutcome LighthouseClient::DescribeZones(const DescribeZonesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeZones");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeZonesResponse rsp = DescribeZonesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeZonesOutcome(rsp);
        else
            return DescribeZonesOutcome(o.GetError());
    }
    else
    {
        return DescribeZonesOutcome(outcome.GetError());
    }
}

void LighthouseClient::DescribeZonesAsync(const DescribeZonesRequest& request, const DescribeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeZonesRequest&;
    using Resp = DescribeZonesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeZones", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::DescribeZonesOutcomeCallable LighthouseClient::DescribeZonesCallable(const DescribeZonesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeZonesOutcome>>();
    DescribeZonesAsync(
    request,
    [prom](
        const LighthouseClient*,
        const DescribeZonesRequest&,
        DescribeZonesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::DetachCcnOutcome LighthouseClient::DetachCcn(const DetachCcnRequest &request)
{
    auto outcome = MakeRequest(request, "DetachCcn");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DetachCcnResponse rsp = DetachCcnResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DetachCcnOutcome(rsp);
        else
            return DetachCcnOutcome(o.GetError());
    }
    else
    {
        return DetachCcnOutcome(outcome.GetError());
    }
}

void LighthouseClient::DetachCcnAsync(const DetachCcnRequest& request, const DetachCcnAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DetachCcnRequest&;
    using Resp = DetachCcnResponse;

    DoRequestAsync<Req, Resp>(
        "DetachCcn", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::DetachCcnOutcomeCallable LighthouseClient::DetachCcnCallable(const DetachCcnRequest &request)
{
    const auto prom = std::make_shared<std::promise<DetachCcnOutcome>>();
    DetachCcnAsync(
    request,
    [prom](
        const LighthouseClient*,
        const DetachCcnRequest&,
        DetachCcnOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::DetachDisksOutcome LighthouseClient::DetachDisks(const DetachDisksRequest &request)
{
    auto outcome = MakeRequest(request, "DetachDisks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DetachDisksResponse rsp = DetachDisksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DetachDisksOutcome(rsp);
        else
            return DetachDisksOutcome(o.GetError());
    }
    else
    {
        return DetachDisksOutcome(outcome.GetError());
    }
}

void LighthouseClient::DetachDisksAsync(const DetachDisksRequest& request, const DetachDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DetachDisksRequest&;
    using Resp = DetachDisksResponse;

    DoRequestAsync<Req, Resp>(
        "DetachDisks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::DetachDisksOutcomeCallable LighthouseClient::DetachDisksCallable(const DetachDisksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DetachDisksOutcome>>();
    DetachDisksAsync(
    request,
    [prom](
        const LighthouseClient*,
        const DetachDisksRequest&,
        DetachDisksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::DisassociateInstancesKeyPairsOutcome LighthouseClient::DisassociateInstancesKeyPairs(const DisassociateInstancesKeyPairsRequest &request)
{
    auto outcome = MakeRequest(request, "DisassociateInstancesKeyPairs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisassociateInstancesKeyPairsResponse rsp = DisassociateInstancesKeyPairsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisassociateInstancesKeyPairsOutcome(rsp);
        else
            return DisassociateInstancesKeyPairsOutcome(o.GetError());
    }
    else
    {
        return DisassociateInstancesKeyPairsOutcome(outcome.GetError());
    }
}

void LighthouseClient::DisassociateInstancesKeyPairsAsync(const DisassociateInstancesKeyPairsRequest& request, const DisassociateInstancesKeyPairsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DisassociateInstancesKeyPairsRequest&;
    using Resp = DisassociateInstancesKeyPairsResponse;

    DoRequestAsync<Req, Resp>(
        "DisassociateInstancesKeyPairs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::DisassociateInstancesKeyPairsOutcomeCallable LighthouseClient::DisassociateInstancesKeyPairsCallable(const DisassociateInstancesKeyPairsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisassociateInstancesKeyPairsOutcome>>();
    DisassociateInstancesKeyPairsAsync(
    request,
    [prom](
        const LighthouseClient*,
        const DisassociateInstancesKeyPairsRequest&,
        DisassociateInstancesKeyPairsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::ImportKeyPairOutcome LighthouseClient::ImportKeyPair(const ImportKeyPairRequest &request)
{
    auto outcome = MakeRequest(request, "ImportKeyPair");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ImportKeyPairResponse rsp = ImportKeyPairResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ImportKeyPairOutcome(rsp);
        else
            return ImportKeyPairOutcome(o.GetError());
    }
    else
    {
        return ImportKeyPairOutcome(outcome.GetError());
    }
}

void LighthouseClient::ImportKeyPairAsync(const ImportKeyPairRequest& request, const ImportKeyPairAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ImportKeyPairRequest&;
    using Resp = ImportKeyPairResponse;

    DoRequestAsync<Req, Resp>(
        "ImportKeyPair", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::ImportKeyPairOutcomeCallable LighthouseClient::ImportKeyPairCallable(const ImportKeyPairRequest &request)
{
    const auto prom = std::make_shared<std::promise<ImportKeyPairOutcome>>();
    ImportKeyPairAsync(
    request,
    [prom](
        const LighthouseClient*,
        const ImportKeyPairRequest&,
        ImportKeyPairOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::InquirePriceCreateBlueprintOutcome LighthouseClient::InquirePriceCreateBlueprint(const InquirePriceCreateBlueprintRequest &request)
{
    auto outcome = MakeRequest(request, "InquirePriceCreateBlueprint");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquirePriceCreateBlueprintResponse rsp = InquirePriceCreateBlueprintResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquirePriceCreateBlueprintOutcome(rsp);
        else
            return InquirePriceCreateBlueprintOutcome(o.GetError());
    }
    else
    {
        return InquirePriceCreateBlueprintOutcome(outcome.GetError());
    }
}

void LighthouseClient::InquirePriceCreateBlueprintAsync(const InquirePriceCreateBlueprintRequest& request, const InquirePriceCreateBlueprintAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const InquirePriceCreateBlueprintRequest&;
    using Resp = InquirePriceCreateBlueprintResponse;

    DoRequestAsync<Req, Resp>(
        "InquirePriceCreateBlueprint", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::InquirePriceCreateBlueprintOutcomeCallable LighthouseClient::InquirePriceCreateBlueprintCallable(const InquirePriceCreateBlueprintRequest &request)
{
    const auto prom = std::make_shared<std::promise<InquirePriceCreateBlueprintOutcome>>();
    InquirePriceCreateBlueprintAsync(
    request,
    [prom](
        const LighthouseClient*,
        const InquirePriceCreateBlueprintRequest&,
        InquirePriceCreateBlueprintOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::InquirePriceCreateDisksOutcome LighthouseClient::InquirePriceCreateDisks(const InquirePriceCreateDisksRequest &request)
{
    auto outcome = MakeRequest(request, "InquirePriceCreateDisks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquirePriceCreateDisksResponse rsp = InquirePriceCreateDisksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquirePriceCreateDisksOutcome(rsp);
        else
            return InquirePriceCreateDisksOutcome(o.GetError());
    }
    else
    {
        return InquirePriceCreateDisksOutcome(outcome.GetError());
    }
}

void LighthouseClient::InquirePriceCreateDisksAsync(const InquirePriceCreateDisksRequest& request, const InquirePriceCreateDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const InquirePriceCreateDisksRequest&;
    using Resp = InquirePriceCreateDisksResponse;

    DoRequestAsync<Req, Resp>(
        "InquirePriceCreateDisks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::InquirePriceCreateDisksOutcomeCallable LighthouseClient::InquirePriceCreateDisksCallable(const InquirePriceCreateDisksRequest &request)
{
    const auto prom = std::make_shared<std::promise<InquirePriceCreateDisksOutcome>>();
    InquirePriceCreateDisksAsync(
    request,
    [prom](
        const LighthouseClient*,
        const InquirePriceCreateDisksRequest&,
        InquirePriceCreateDisksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::InquirePriceCreateInstancesOutcome LighthouseClient::InquirePriceCreateInstances(const InquirePriceCreateInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "InquirePriceCreateInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquirePriceCreateInstancesResponse rsp = InquirePriceCreateInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquirePriceCreateInstancesOutcome(rsp);
        else
            return InquirePriceCreateInstancesOutcome(o.GetError());
    }
    else
    {
        return InquirePriceCreateInstancesOutcome(outcome.GetError());
    }
}

void LighthouseClient::InquirePriceCreateInstancesAsync(const InquirePriceCreateInstancesRequest& request, const InquirePriceCreateInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const InquirePriceCreateInstancesRequest&;
    using Resp = InquirePriceCreateInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "InquirePriceCreateInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::InquirePriceCreateInstancesOutcomeCallable LighthouseClient::InquirePriceCreateInstancesCallable(const InquirePriceCreateInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<InquirePriceCreateInstancesOutcome>>();
    InquirePriceCreateInstancesAsync(
    request,
    [prom](
        const LighthouseClient*,
        const InquirePriceCreateInstancesRequest&,
        InquirePriceCreateInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::InquirePriceRenewDisksOutcome LighthouseClient::InquirePriceRenewDisks(const InquirePriceRenewDisksRequest &request)
{
    auto outcome = MakeRequest(request, "InquirePriceRenewDisks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquirePriceRenewDisksResponse rsp = InquirePriceRenewDisksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquirePriceRenewDisksOutcome(rsp);
        else
            return InquirePriceRenewDisksOutcome(o.GetError());
    }
    else
    {
        return InquirePriceRenewDisksOutcome(outcome.GetError());
    }
}

void LighthouseClient::InquirePriceRenewDisksAsync(const InquirePriceRenewDisksRequest& request, const InquirePriceRenewDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const InquirePriceRenewDisksRequest&;
    using Resp = InquirePriceRenewDisksResponse;

    DoRequestAsync<Req, Resp>(
        "InquirePriceRenewDisks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::InquirePriceRenewDisksOutcomeCallable LighthouseClient::InquirePriceRenewDisksCallable(const InquirePriceRenewDisksRequest &request)
{
    const auto prom = std::make_shared<std::promise<InquirePriceRenewDisksOutcome>>();
    InquirePriceRenewDisksAsync(
    request,
    [prom](
        const LighthouseClient*,
        const InquirePriceRenewDisksRequest&,
        InquirePriceRenewDisksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::InquirePriceRenewInstancesOutcome LighthouseClient::InquirePriceRenewInstances(const InquirePriceRenewInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "InquirePriceRenewInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquirePriceRenewInstancesResponse rsp = InquirePriceRenewInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquirePriceRenewInstancesOutcome(rsp);
        else
            return InquirePriceRenewInstancesOutcome(o.GetError());
    }
    else
    {
        return InquirePriceRenewInstancesOutcome(outcome.GetError());
    }
}

void LighthouseClient::InquirePriceRenewInstancesAsync(const InquirePriceRenewInstancesRequest& request, const InquirePriceRenewInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const InquirePriceRenewInstancesRequest&;
    using Resp = InquirePriceRenewInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "InquirePriceRenewInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::InquirePriceRenewInstancesOutcomeCallable LighthouseClient::InquirePriceRenewInstancesCallable(const InquirePriceRenewInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<InquirePriceRenewInstancesOutcome>>();
    InquirePriceRenewInstancesAsync(
    request,
    [prom](
        const LighthouseClient*,
        const InquirePriceRenewInstancesRequest&,
        InquirePriceRenewInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::IsolateDisksOutcome LighthouseClient::IsolateDisks(const IsolateDisksRequest &request)
{
    auto outcome = MakeRequest(request, "IsolateDisks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        IsolateDisksResponse rsp = IsolateDisksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return IsolateDisksOutcome(rsp);
        else
            return IsolateDisksOutcome(o.GetError());
    }
    else
    {
        return IsolateDisksOutcome(outcome.GetError());
    }
}

void LighthouseClient::IsolateDisksAsync(const IsolateDisksRequest& request, const IsolateDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const IsolateDisksRequest&;
    using Resp = IsolateDisksResponse;

    DoRequestAsync<Req, Resp>(
        "IsolateDisks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::IsolateDisksOutcomeCallable LighthouseClient::IsolateDisksCallable(const IsolateDisksRequest &request)
{
    const auto prom = std::make_shared<std::promise<IsolateDisksOutcome>>();
    IsolateDisksAsync(
    request,
    [prom](
        const LighthouseClient*,
        const IsolateDisksRequest&,
        IsolateDisksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::IsolateInstancesOutcome LighthouseClient::IsolateInstances(const IsolateInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "IsolateInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        IsolateInstancesResponse rsp = IsolateInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return IsolateInstancesOutcome(rsp);
        else
            return IsolateInstancesOutcome(o.GetError());
    }
    else
    {
        return IsolateInstancesOutcome(outcome.GetError());
    }
}

void LighthouseClient::IsolateInstancesAsync(const IsolateInstancesRequest& request, const IsolateInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const IsolateInstancesRequest&;
    using Resp = IsolateInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "IsolateInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::IsolateInstancesOutcomeCallable LighthouseClient::IsolateInstancesCallable(const IsolateInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<IsolateInstancesOutcome>>();
    IsolateInstancesAsync(
    request,
    [prom](
        const LighthouseClient*,
        const IsolateInstancesRequest&,
        IsolateInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::ModifyBlueprintAttributeOutcome LighthouseClient::ModifyBlueprintAttribute(const ModifyBlueprintAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBlueprintAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBlueprintAttributeResponse rsp = ModifyBlueprintAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBlueprintAttributeOutcome(rsp);
        else
            return ModifyBlueprintAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyBlueprintAttributeOutcome(outcome.GetError());
    }
}

void LighthouseClient::ModifyBlueprintAttributeAsync(const ModifyBlueprintAttributeRequest& request, const ModifyBlueprintAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyBlueprintAttributeRequest&;
    using Resp = ModifyBlueprintAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyBlueprintAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::ModifyBlueprintAttributeOutcomeCallable LighthouseClient::ModifyBlueprintAttributeCallable(const ModifyBlueprintAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyBlueprintAttributeOutcome>>();
    ModifyBlueprintAttributeAsync(
    request,
    [prom](
        const LighthouseClient*,
        const ModifyBlueprintAttributeRequest&,
        ModifyBlueprintAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::ModifyDiskBackupsAttributeOutcome LighthouseClient::ModifyDiskBackupsAttribute(const ModifyDiskBackupsAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDiskBackupsAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDiskBackupsAttributeResponse rsp = ModifyDiskBackupsAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDiskBackupsAttributeOutcome(rsp);
        else
            return ModifyDiskBackupsAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyDiskBackupsAttributeOutcome(outcome.GetError());
    }
}

void LighthouseClient::ModifyDiskBackupsAttributeAsync(const ModifyDiskBackupsAttributeRequest& request, const ModifyDiskBackupsAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDiskBackupsAttributeRequest&;
    using Resp = ModifyDiskBackupsAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDiskBackupsAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::ModifyDiskBackupsAttributeOutcomeCallable LighthouseClient::ModifyDiskBackupsAttributeCallable(const ModifyDiskBackupsAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDiskBackupsAttributeOutcome>>();
    ModifyDiskBackupsAttributeAsync(
    request,
    [prom](
        const LighthouseClient*,
        const ModifyDiskBackupsAttributeRequest&,
        ModifyDiskBackupsAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::ModifyDisksAttributeOutcome LighthouseClient::ModifyDisksAttribute(const ModifyDisksAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDisksAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDisksAttributeResponse rsp = ModifyDisksAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDisksAttributeOutcome(rsp);
        else
            return ModifyDisksAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyDisksAttributeOutcome(outcome.GetError());
    }
}

void LighthouseClient::ModifyDisksAttributeAsync(const ModifyDisksAttributeRequest& request, const ModifyDisksAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDisksAttributeRequest&;
    using Resp = ModifyDisksAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDisksAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::ModifyDisksAttributeOutcomeCallable LighthouseClient::ModifyDisksAttributeCallable(const ModifyDisksAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDisksAttributeOutcome>>();
    ModifyDisksAttributeAsync(
    request,
    [prom](
        const LighthouseClient*,
        const ModifyDisksAttributeRequest&,
        ModifyDisksAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::ModifyDisksBackupQuotaOutcome LighthouseClient::ModifyDisksBackupQuota(const ModifyDisksBackupQuotaRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDisksBackupQuota");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDisksBackupQuotaResponse rsp = ModifyDisksBackupQuotaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDisksBackupQuotaOutcome(rsp);
        else
            return ModifyDisksBackupQuotaOutcome(o.GetError());
    }
    else
    {
        return ModifyDisksBackupQuotaOutcome(outcome.GetError());
    }
}

void LighthouseClient::ModifyDisksBackupQuotaAsync(const ModifyDisksBackupQuotaRequest& request, const ModifyDisksBackupQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDisksBackupQuotaRequest&;
    using Resp = ModifyDisksBackupQuotaResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDisksBackupQuota", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::ModifyDisksBackupQuotaOutcomeCallable LighthouseClient::ModifyDisksBackupQuotaCallable(const ModifyDisksBackupQuotaRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDisksBackupQuotaOutcome>>();
    ModifyDisksBackupQuotaAsync(
    request,
    [prom](
        const LighthouseClient*,
        const ModifyDisksBackupQuotaRequest&,
        ModifyDisksBackupQuotaOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::ModifyDisksRenewFlagOutcome LighthouseClient::ModifyDisksRenewFlag(const ModifyDisksRenewFlagRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDisksRenewFlag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDisksRenewFlagResponse rsp = ModifyDisksRenewFlagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDisksRenewFlagOutcome(rsp);
        else
            return ModifyDisksRenewFlagOutcome(o.GetError());
    }
    else
    {
        return ModifyDisksRenewFlagOutcome(outcome.GetError());
    }
}

void LighthouseClient::ModifyDisksRenewFlagAsync(const ModifyDisksRenewFlagRequest& request, const ModifyDisksRenewFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDisksRenewFlagRequest&;
    using Resp = ModifyDisksRenewFlagResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDisksRenewFlag", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::ModifyDisksRenewFlagOutcomeCallable LighthouseClient::ModifyDisksRenewFlagCallable(const ModifyDisksRenewFlagRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDisksRenewFlagOutcome>>();
    ModifyDisksRenewFlagAsync(
    request,
    [prom](
        const LighthouseClient*,
        const ModifyDisksRenewFlagRequest&,
        ModifyDisksRenewFlagOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::ModifyDockerContainerOutcome LighthouseClient::ModifyDockerContainer(const ModifyDockerContainerRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDockerContainer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDockerContainerResponse rsp = ModifyDockerContainerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDockerContainerOutcome(rsp);
        else
            return ModifyDockerContainerOutcome(o.GetError());
    }
    else
    {
        return ModifyDockerContainerOutcome(outcome.GetError());
    }
}

void LighthouseClient::ModifyDockerContainerAsync(const ModifyDockerContainerRequest& request, const ModifyDockerContainerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDockerContainerRequest&;
    using Resp = ModifyDockerContainerResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDockerContainer", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::ModifyDockerContainerOutcomeCallable LighthouseClient::ModifyDockerContainerCallable(const ModifyDockerContainerRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDockerContainerOutcome>>();
    ModifyDockerContainerAsync(
    request,
    [prom](
        const LighthouseClient*,
        const ModifyDockerContainerRequest&,
        ModifyDockerContainerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::ModifyFirewallRuleDescriptionOutcome LighthouseClient::ModifyFirewallRuleDescription(const ModifyFirewallRuleDescriptionRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyFirewallRuleDescription");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyFirewallRuleDescriptionResponse rsp = ModifyFirewallRuleDescriptionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyFirewallRuleDescriptionOutcome(rsp);
        else
            return ModifyFirewallRuleDescriptionOutcome(o.GetError());
    }
    else
    {
        return ModifyFirewallRuleDescriptionOutcome(outcome.GetError());
    }
}

void LighthouseClient::ModifyFirewallRuleDescriptionAsync(const ModifyFirewallRuleDescriptionRequest& request, const ModifyFirewallRuleDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyFirewallRuleDescriptionRequest&;
    using Resp = ModifyFirewallRuleDescriptionResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyFirewallRuleDescription", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::ModifyFirewallRuleDescriptionOutcomeCallable LighthouseClient::ModifyFirewallRuleDescriptionCallable(const ModifyFirewallRuleDescriptionRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyFirewallRuleDescriptionOutcome>>();
    ModifyFirewallRuleDescriptionAsync(
    request,
    [prom](
        const LighthouseClient*,
        const ModifyFirewallRuleDescriptionRequest&,
        ModifyFirewallRuleDescriptionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::ModifyFirewallRulesOutcome LighthouseClient::ModifyFirewallRules(const ModifyFirewallRulesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyFirewallRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyFirewallRulesResponse rsp = ModifyFirewallRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyFirewallRulesOutcome(rsp);
        else
            return ModifyFirewallRulesOutcome(o.GetError());
    }
    else
    {
        return ModifyFirewallRulesOutcome(outcome.GetError());
    }
}

void LighthouseClient::ModifyFirewallRulesAsync(const ModifyFirewallRulesRequest& request, const ModifyFirewallRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyFirewallRulesRequest&;
    using Resp = ModifyFirewallRulesResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyFirewallRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::ModifyFirewallRulesOutcomeCallable LighthouseClient::ModifyFirewallRulesCallable(const ModifyFirewallRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyFirewallRulesOutcome>>();
    ModifyFirewallRulesAsync(
    request,
    [prom](
        const LighthouseClient*,
        const ModifyFirewallRulesRequest&,
        ModifyFirewallRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::ModifyFirewallTemplateOutcome LighthouseClient::ModifyFirewallTemplate(const ModifyFirewallTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyFirewallTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyFirewallTemplateResponse rsp = ModifyFirewallTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyFirewallTemplateOutcome(rsp);
        else
            return ModifyFirewallTemplateOutcome(o.GetError());
    }
    else
    {
        return ModifyFirewallTemplateOutcome(outcome.GetError());
    }
}

void LighthouseClient::ModifyFirewallTemplateAsync(const ModifyFirewallTemplateRequest& request, const ModifyFirewallTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyFirewallTemplateRequest&;
    using Resp = ModifyFirewallTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyFirewallTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::ModifyFirewallTemplateOutcomeCallable LighthouseClient::ModifyFirewallTemplateCallable(const ModifyFirewallTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyFirewallTemplateOutcome>>();
    ModifyFirewallTemplateAsync(
    request,
    [prom](
        const LighthouseClient*,
        const ModifyFirewallTemplateRequest&,
        ModifyFirewallTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::ModifyImageSharePermissionOutcome LighthouseClient::ModifyImageSharePermission(const ModifyImageSharePermissionRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyImageSharePermission");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyImageSharePermissionResponse rsp = ModifyImageSharePermissionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyImageSharePermissionOutcome(rsp);
        else
            return ModifyImageSharePermissionOutcome(o.GetError());
    }
    else
    {
        return ModifyImageSharePermissionOutcome(outcome.GetError());
    }
}

void LighthouseClient::ModifyImageSharePermissionAsync(const ModifyImageSharePermissionRequest& request, const ModifyImageSharePermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyImageSharePermissionRequest&;
    using Resp = ModifyImageSharePermissionResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyImageSharePermission", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::ModifyImageSharePermissionOutcomeCallable LighthouseClient::ModifyImageSharePermissionCallable(const ModifyImageSharePermissionRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyImageSharePermissionOutcome>>();
    ModifyImageSharePermissionAsync(
    request,
    [prom](
        const LighthouseClient*,
        const ModifyImageSharePermissionRequest&,
        ModifyImageSharePermissionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::ModifyInstancesAttributeOutcome LighthouseClient::ModifyInstancesAttribute(const ModifyInstancesAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstancesAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstancesAttributeResponse rsp = ModifyInstancesAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstancesAttributeOutcome(rsp);
        else
            return ModifyInstancesAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyInstancesAttributeOutcome(outcome.GetError());
    }
}

void LighthouseClient::ModifyInstancesAttributeAsync(const ModifyInstancesAttributeRequest& request, const ModifyInstancesAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyInstancesAttributeRequest&;
    using Resp = ModifyInstancesAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyInstancesAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::ModifyInstancesAttributeOutcomeCallable LighthouseClient::ModifyInstancesAttributeCallable(const ModifyInstancesAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyInstancesAttributeOutcome>>();
    ModifyInstancesAttributeAsync(
    request,
    [prom](
        const LighthouseClient*,
        const ModifyInstancesAttributeRequest&,
        ModifyInstancesAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::ModifyInstancesBundleOutcome LighthouseClient::ModifyInstancesBundle(const ModifyInstancesBundleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstancesBundle");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstancesBundleResponse rsp = ModifyInstancesBundleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstancesBundleOutcome(rsp);
        else
            return ModifyInstancesBundleOutcome(o.GetError());
    }
    else
    {
        return ModifyInstancesBundleOutcome(outcome.GetError());
    }
}

void LighthouseClient::ModifyInstancesBundleAsync(const ModifyInstancesBundleRequest& request, const ModifyInstancesBundleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyInstancesBundleRequest&;
    using Resp = ModifyInstancesBundleResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyInstancesBundle", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::ModifyInstancesBundleOutcomeCallable LighthouseClient::ModifyInstancesBundleCallable(const ModifyInstancesBundleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyInstancesBundleOutcome>>();
    ModifyInstancesBundleAsync(
    request,
    [prom](
        const LighthouseClient*,
        const ModifyInstancesBundleRequest&,
        ModifyInstancesBundleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::ModifyInstancesRenewFlagOutcome LighthouseClient::ModifyInstancesRenewFlag(const ModifyInstancesRenewFlagRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstancesRenewFlag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstancesRenewFlagResponse rsp = ModifyInstancesRenewFlagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstancesRenewFlagOutcome(rsp);
        else
            return ModifyInstancesRenewFlagOutcome(o.GetError());
    }
    else
    {
        return ModifyInstancesRenewFlagOutcome(outcome.GetError());
    }
}

void LighthouseClient::ModifyInstancesRenewFlagAsync(const ModifyInstancesRenewFlagRequest& request, const ModifyInstancesRenewFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyInstancesRenewFlagRequest&;
    using Resp = ModifyInstancesRenewFlagResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyInstancesRenewFlag", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::ModifyInstancesRenewFlagOutcomeCallable LighthouseClient::ModifyInstancesRenewFlagCallable(const ModifyInstancesRenewFlagRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyInstancesRenewFlagOutcome>>();
    ModifyInstancesRenewFlagAsync(
    request,
    [prom](
        const LighthouseClient*,
        const ModifyInstancesRenewFlagRequest&,
        ModifyInstancesRenewFlagOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::ModifyMcpServerOutcome LighthouseClient::ModifyMcpServer(const ModifyMcpServerRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMcpServer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMcpServerResponse rsp = ModifyMcpServerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMcpServerOutcome(rsp);
        else
            return ModifyMcpServerOutcome(o.GetError());
    }
    else
    {
        return ModifyMcpServerOutcome(outcome.GetError());
    }
}

void LighthouseClient::ModifyMcpServerAsync(const ModifyMcpServerRequest& request, const ModifyMcpServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyMcpServerRequest&;
    using Resp = ModifyMcpServerResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyMcpServer", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::ModifyMcpServerOutcomeCallable LighthouseClient::ModifyMcpServerCallable(const ModifyMcpServerRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyMcpServerOutcome>>();
    ModifyMcpServerAsync(
    request,
    [prom](
        const LighthouseClient*,
        const ModifyMcpServerRequest&,
        ModifyMcpServerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::ModifySnapshotAttributeOutcome LighthouseClient::ModifySnapshotAttribute(const ModifySnapshotAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySnapshotAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySnapshotAttributeResponse rsp = ModifySnapshotAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySnapshotAttributeOutcome(rsp);
        else
            return ModifySnapshotAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifySnapshotAttributeOutcome(outcome.GetError());
    }
}

void LighthouseClient::ModifySnapshotAttributeAsync(const ModifySnapshotAttributeRequest& request, const ModifySnapshotAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifySnapshotAttributeRequest&;
    using Resp = ModifySnapshotAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySnapshotAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::ModifySnapshotAttributeOutcomeCallable LighthouseClient::ModifySnapshotAttributeCallable(const ModifySnapshotAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySnapshotAttributeOutcome>>();
    ModifySnapshotAttributeAsync(
    request,
    [prom](
        const LighthouseClient*,
        const ModifySnapshotAttributeRequest&,
        ModifySnapshotAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::RebootInstancesOutcome LighthouseClient::RebootInstances(const RebootInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "RebootInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RebootInstancesResponse rsp = RebootInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RebootInstancesOutcome(rsp);
        else
            return RebootInstancesOutcome(o.GetError());
    }
    else
    {
        return RebootInstancesOutcome(outcome.GetError());
    }
}

void LighthouseClient::RebootInstancesAsync(const RebootInstancesRequest& request, const RebootInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RebootInstancesRequest&;
    using Resp = RebootInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "RebootInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::RebootInstancesOutcomeCallable LighthouseClient::RebootInstancesCallable(const RebootInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<RebootInstancesOutcome>>();
    RebootInstancesAsync(
    request,
    [prom](
        const LighthouseClient*,
        const RebootInstancesRequest&,
        RebootInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::RemoveDockerContainersOutcome LighthouseClient::RemoveDockerContainers(const RemoveDockerContainersRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveDockerContainers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveDockerContainersResponse rsp = RemoveDockerContainersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveDockerContainersOutcome(rsp);
        else
            return RemoveDockerContainersOutcome(o.GetError());
    }
    else
    {
        return RemoveDockerContainersOutcome(outcome.GetError());
    }
}

void LighthouseClient::RemoveDockerContainersAsync(const RemoveDockerContainersRequest& request, const RemoveDockerContainersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RemoveDockerContainersRequest&;
    using Resp = RemoveDockerContainersResponse;

    DoRequestAsync<Req, Resp>(
        "RemoveDockerContainers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::RemoveDockerContainersOutcomeCallable LighthouseClient::RemoveDockerContainersCallable(const RemoveDockerContainersRequest &request)
{
    const auto prom = std::make_shared<std::promise<RemoveDockerContainersOutcome>>();
    RemoveDockerContainersAsync(
    request,
    [prom](
        const LighthouseClient*,
        const RemoveDockerContainersRequest&,
        RemoveDockerContainersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::RemoveMcpServersOutcome LighthouseClient::RemoveMcpServers(const RemoveMcpServersRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveMcpServers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveMcpServersResponse rsp = RemoveMcpServersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveMcpServersOutcome(rsp);
        else
            return RemoveMcpServersOutcome(o.GetError());
    }
    else
    {
        return RemoveMcpServersOutcome(outcome.GetError());
    }
}

void LighthouseClient::RemoveMcpServersAsync(const RemoveMcpServersRequest& request, const RemoveMcpServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RemoveMcpServersRequest&;
    using Resp = RemoveMcpServersResponse;

    DoRequestAsync<Req, Resp>(
        "RemoveMcpServers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::RemoveMcpServersOutcomeCallable LighthouseClient::RemoveMcpServersCallable(const RemoveMcpServersRequest &request)
{
    const auto prom = std::make_shared<std::promise<RemoveMcpServersOutcome>>();
    RemoveMcpServersAsync(
    request,
    [prom](
        const LighthouseClient*,
        const RemoveMcpServersRequest&,
        RemoveMcpServersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::RenameDockerContainerOutcome LighthouseClient::RenameDockerContainer(const RenameDockerContainerRequest &request)
{
    auto outcome = MakeRequest(request, "RenameDockerContainer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RenameDockerContainerResponse rsp = RenameDockerContainerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RenameDockerContainerOutcome(rsp);
        else
            return RenameDockerContainerOutcome(o.GetError());
    }
    else
    {
        return RenameDockerContainerOutcome(outcome.GetError());
    }
}

void LighthouseClient::RenameDockerContainerAsync(const RenameDockerContainerRequest& request, const RenameDockerContainerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RenameDockerContainerRequest&;
    using Resp = RenameDockerContainerResponse;

    DoRequestAsync<Req, Resp>(
        "RenameDockerContainer", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::RenameDockerContainerOutcomeCallable LighthouseClient::RenameDockerContainerCallable(const RenameDockerContainerRequest &request)
{
    const auto prom = std::make_shared<std::promise<RenameDockerContainerOutcome>>();
    RenameDockerContainerAsync(
    request,
    [prom](
        const LighthouseClient*,
        const RenameDockerContainerRequest&,
        RenameDockerContainerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::RenewDisksOutcome LighthouseClient::RenewDisks(const RenewDisksRequest &request)
{
    auto outcome = MakeRequest(request, "RenewDisks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RenewDisksResponse rsp = RenewDisksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RenewDisksOutcome(rsp);
        else
            return RenewDisksOutcome(o.GetError());
    }
    else
    {
        return RenewDisksOutcome(outcome.GetError());
    }
}

void LighthouseClient::RenewDisksAsync(const RenewDisksRequest& request, const RenewDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RenewDisksRequest&;
    using Resp = RenewDisksResponse;

    DoRequestAsync<Req, Resp>(
        "RenewDisks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::RenewDisksOutcomeCallable LighthouseClient::RenewDisksCallable(const RenewDisksRequest &request)
{
    const auto prom = std::make_shared<std::promise<RenewDisksOutcome>>();
    RenewDisksAsync(
    request,
    [prom](
        const LighthouseClient*,
        const RenewDisksRequest&,
        RenewDisksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::RenewInstancesOutcome LighthouseClient::RenewInstances(const RenewInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "RenewInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RenewInstancesResponse rsp = RenewInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RenewInstancesOutcome(rsp);
        else
            return RenewInstancesOutcome(o.GetError());
    }
    else
    {
        return RenewInstancesOutcome(outcome.GetError());
    }
}

void LighthouseClient::RenewInstancesAsync(const RenewInstancesRequest& request, const RenewInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RenewInstancesRequest&;
    using Resp = RenewInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "RenewInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::RenewInstancesOutcomeCallable LighthouseClient::RenewInstancesCallable(const RenewInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<RenewInstancesOutcome>>();
    RenewInstancesAsync(
    request,
    [prom](
        const LighthouseClient*,
        const RenewInstancesRequest&,
        RenewInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::ReplaceFirewallTemplateRuleOutcome LighthouseClient::ReplaceFirewallTemplateRule(const ReplaceFirewallTemplateRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ReplaceFirewallTemplateRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReplaceFirewallTemplateRuleResponse rsp = ReplaceFirewallTemplateRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReplaceFirewallTemplateRuleOutcome(rsp);
        else
            return ReplaceFirewallTemplateRuleOutcome(o.GetError());
    }
    else
    {
        return ReplaceFirewallTemplateRuleOutcome(outcome.GetError());
    }
}

void LighthouseClient::ReplaceFirewallTemplateRuleAsync(const ReplaceFirewallTemplateRuleRequest& request, const ReplaceFirewallTemplateRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ReplaceFirewallTemplateRuleRequest&;
    using Resp = ReplaceFirewallTemplateRuleResponse;

    DoRequestAsync<Req, Resp>(
        "ReplaceFirewallTemplateRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::ReplaceFirewallTemplateRuleOutcomeCallable LighthouseClient::ReplaceFirewallTemplateRuleCallable(const ReplaceFirewallTemplateRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ReplaceFirewallTemplateRuleOutcome>>();
    ReplaceFirewallTemplateRuleAsync(
    request,
    [prom](
        const LighthouseClient*,
        const ReplaceFirewallTemplateRuleRequest&,
        ReplaceFirewallTemplateRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::RerunDockerContainerOutcome LighthouseClient::RerunDockerContainer(const RerunDockerContainerRequest &request)
{
    auto outcome = MakeRequest(request, "RerunDockerContainer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RerunDockerContainerResponse rsp = RerunDockerContainerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RerunDockerContainerOutcome(rsp);
        else
            return RerunDockerContainerOutcome(o.GetError());
    }
    else
    {
        return RerunDockerContainerOutcome(outcome.GetError());
    }
}

void LighthouseClient::RerunDockerContainerAsync(const RerunDockerContainerRequest& request, const RerunDockerContainerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RerunDockerContainerRequest&;
    using Resp = RerunDockerContainerResponse;

    DoRequestAsync<Req, Resp>(
        "RerunDockerContainer", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::RerunDockerContainerOutcomeCallable LighthouseClient::RerunDockerContainerCallable(const RerunDockerContainerRequest &request)
{
    const auto prom = std::make_shared<std::promise<RerunDockerContainerOutcome>>();
    RerunDockerContainerAsync(
    request,
    [prom](
        const LighthouseClient*,
        const RerunDockerContainerRequest&,
        RerunDockerContainerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::ResetAttachCcnOutcome LighthouseClient::ResetAttachCcn(const ResetAttachCcnRequest &request)
{
    auto outcome = MakeRequest(request, "ResetAttachCcn");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetAttachCcnResponse rsp = ResetAttachCcnResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetAttachCcnOutcome(rsp);
        else
            return ResetAttachCcnOutcome(o.GetError());
    }
    else
    {
        return ResetAttachCcnOutcome(outcome.GetError());
    }
}

void LighthouseClient::ResetAttachCcnAsync(const ResetAttachCcnRequest& request, const ResetAttachCcnAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ResetAttachCcnRequest&;
    using Resp = ResetAttachCcnResponse;

    DoRequestAsync<Req, Resp>(
        "ResetAttachCcn", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::ResetAttachCcnOutcomeCallable LighthouseClient::ResetAttachCcnCallable(const ResetAttachCcnRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResetAttachCcnOutcome>>();
    ResetAttachCcnAsync(
    request,
    [prom](
        const LighthouseClient*,
        const ResetAttachCcnRequest&,
        ResetAttachCcnOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::ResetFirewallTemplateRulesOutcome LighthouseClient::ResetFirewallTemplateRules(const ResetFirewallTemplateRulesRequest &request)
{
    auto outcome = MakeRequest(request, "ResetFirewallTemplateRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetFirewallTemplateRulesResponse rsp = ResetFirewallTemplateRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetFirewallTemplateRulesOutcome(rsp);
        else
            return ResetFirewallTemplateRulesOutcome(o.GetError());
    }
    else
    {
        return ResetFirewallTemplateRulesOutcome(outcome.GetError());
    }
}

void LighthouseClient::ResetFirewallTemplateRulesAsync(const ResetFirewallTemplateRulesRequest& request, const ResetFirewallTemplateRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ResetFirewallTemplateRulesRequest&;
    using Resp = ResetFirewallTemplateRulesResponse;

    DoRequestAsync<Req, Resp>(
        "ResetFirewallTemplateRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::ResetFirewallTemplateRulesOutcomeCallable LighthouseClient::ResetFirewallTemplateRulesCallable(const ResetFirewallTemplateRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResetFirewallTemplateRulesOutcome>>();
    ResetFirewallTemplateRulesAsync(
    request,
    [prom](
        const LighthouseClient*,
        const ResetFirewallTemplateRulesRequest&,
        ResetFirewallTemplateRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::ResetInstanceOutcome LighthouseClient::ResetInstance(const ResetInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "ResetInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetInstanceResponse rsp = ResetInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetInstanceOutcome(rsp);
        else
            return ResetInstanceOutcome(o.GetError());
    }
    else
    {
        return ResetInstanceOutcome(outcome.GetError());
    }
}

void LighthouseClient::ResetInstanceAsync(const ResetInstanceRequest& request, const ResetInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ResetInstanceRequest&;
    using Resp = ResetInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "ResetInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::ResetInstanceOutcomeCallable LighthouseClient::ResetInstanceCallable(const ResetInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResetInstanceOutcome>>();
    ResetInstanceAsync(
    request,
    [prom](
        const LighthouseClient*,
        const ResetInstanceRequest&,
        ResetInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::ResetInstancesPasswordOutcome LighthouseClient::ResetInstancesPassword(const ResetInstancesPasswordRequest &request)
{
    auto outcome = MakeRequest(request, "ResetInstancesPassword");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetInstancesPasswordResponse rsp = ResetInstancesPasswordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetInstancesPasswordOutcome(rsp);
        else
            return ResetInstancesPasswordOutcome(o.GetError());
    }
    else
    {
        return ResetInstancesPasswordOutcome(outcome.GetError());
    }
}

void LighthouseClient::ResetInstancesPasswordAsync(const ResetInstancesPasswordRequest& request, const ResetInstancesPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ResetInstancesPasswordRequest&;
    using Resp = ResetInstancesPasswordResponse;

    DoRequestAsync<Req, Resp>(
        "ResetInstancesPassword", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::ResetInstancesPasswordOutcomeCallable LighthouseClient::ResetInstancesPasswordCallable(const ResetInstancesPasswordRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResetInstancesPasswordOutcome>>();
    ResetInstancesPasswordAsync(
    request,
    [prom](
        const LighthouseClient*,
        const ResetInstancesPasswordRequest&,
        ResetInstancesPasswordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::ResizeDisksOutcome LighthouseClient::ResizeDisks(const ResizeDisksRequest &request)
{
    auto outcome = MakeRequest(request, "ResizeDisks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResizeDisksResponse rsp = ResizeDisksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResizeDisksOutcome(rsp);
        else
            return ResizeDisksOutcome(o.GetError());
    }
    else
    {
        return ResizeDisksOutcome(outcome.GetError());
    }
}

void LighthouseClient::ResizeDisksAsync(const ResizeDisksRequest& request, const ResizeDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ResizeDisksRequest&;
    using Resp = ResizeDisksResponse;

    DoRequestAsync<Req, Resp>(
        "ResizeDisks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::ResizeDisksOutcomeCallable LighthouseClient::ResizeDisksCallable(const ResizeDisksRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResizeDisksOutcome>>();
    ResizeDisksAsync(
    request,
    [prom](
        const LighthouseClient*,
        const ResizeDisksRequest&,
        ResizeDisksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::RestartDockerContainersOutcome LighthouseClient::RestartDockerContainers(const RestartDockerContainersRequest &request)
{
    auto outcome = MakeRequest(request, "RestartDockerContainers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RestartDockerContainersResponse rsp = RestartDockerContainersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RestartDockerContainersOutcome(rsp);
        else
            return RestartDockerContainersOutcome(o.GetError());
    }
    else
    {
        return RestartDockerContainersOutcome(outcome.GetError());
    }
}

void LighthouseClient::RestartDockerContainersAsync(const RestartDockerContainersRequest& request, const RestartDockerContainersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RestartDockerContainersRequest&;
    using Resp = RestartDockerContainersResponse;

    DoRequestAsync<Req, Resp>(
        "RestartDockerContainers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::RestartDockerContainersOutcomeCallable LighthouseClient::RestartDockerContainersCallable(const RestartDockerContainersRequest &request)
{
    const auto prom = std::make_shared<std::promise<RestartDockerContainersOutcome>>();
    RestartDockerContainersAsync(
    request,
    [prom](
        const LighthouseClient*,
        const RestartDockerContainersRequest&,
        RestartDockerContainersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::RestartMcpServersOutcome LighthouseClient::RestartMcpServers(const RestartMcpServersRequest &request)
{
    auto outcome = MakeRequest(request, "RestartMcpServers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RestartMcpServersResponse rsp = RestartMcpServersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RestartMcpServersOutcome(rsp);
        else
            return RestartMcpServersOutcome(o.GetError());
    }
    else
    {
        return RestartMcpServersOutcome(outcome.GetError());
    }
}

void LighthouseClient::RestartMcpServersAsync(const RestartMcpServersRequest& request, const RestartMcpServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RestartMcpServersRequest&;
    using Resp = RestartMcpServersResponse;

    DoRequestAsync<Req, Resp>(
        "RestartMcpServers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::RestartMcpServersOutcomeCallable LighthouseClient::RestartMcpServersCallable(const RestartMcpServersRequest &request)
{
    const auto prom = std::make_shared<std::promise<RestartMcpServersOutcome>>();
    RestartMcpServersAsync(
    request,
    [prom](
        const LighthouseClient*,
        const RestartMcpServersRequest&,
        RestartMcpServersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::RunDockerContainersOutcome LighthouseClient::RunDockerContainers(const RunDockerContainersRequest &request)
{
    auto outcome = MakeRequest(request, "RunDockerContainers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RunDockerContainersResponse rsp = RunDockerContainersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RunDockerContainersOutcome(rsp);
        else
            return RunDockerContainersOutcome(o.GetError());
    }
    else
    {
        return RunDockerContainersOutcome(outcome.GetError());
    }
}

void LighthouseClient::RunDockerContainersAsync(const RunDockerContainersRequest& request, const RunDockerContainersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RunDockerContainersRequest&;
    using Resp = RunDockerContainersResponse;

    DoRequestAsync<Req, Resp>(
        "RunDockerContainers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::RunDockerContainersOutcomeCallable LighthouseClient::RunDockerContainersCallable(const RunDockerContainersRequest &request)
{
    const auto prom = std::make_shared<std::promise<RunDockerContainersOutcome>>();
    RunDockerContainersAsync(
    request,
    [prom](
        const LighthouseClient*,
        const RunDockerContainersRequest&,
        RunDockerContainersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::ShareBlueprintAcrossAccountsOutcome LighthouseClient::ShareBlueprintAcrossAccounts(const ShareBlueprintAcrossAccountsRequest &request)
{
    auto outcome = MakeRequest(request, "ShareBlueprintAcrossAccounts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ShareBlueprintAcrossAccountsResponse rsp = ShareBlueprintAcrossAccountsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ShareBlueprintAcrossAccountsOutcome(rsp);
        else
            return ShareBlueprintAcrossAccountsOutcome(o.GetError());
    }
    else
    {
        return ShareBlueprintAcrossAccountsOutcome(outcome.GetError());
    }
}

void LighthouseClient::ShareBlueprintAcrossAccountsAsync(const ShareBlueprintAcrossAccountsRequest& request, const ShareBlueprintAcrossAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ShareBlueprintAcrossAccountsRequest&;
    using Resp = ShareBlueprintAcrossAccountsResponse;

    DoRequestAsync<Req, Resp>(
        "ShareBlueprintAcrossAccounts", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::ShareBlueprintAcrossAccountsOutcomeCallable LighthouseClient::ShareBlueprintAcrossAccountsCallable(const ShareBlueprintAcrossAccountsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ShareBlueprintAcrossAccountsOutcome>>();
    ShareBlueprintAcrossAccountsAsync(
    request,
    [prom](
        const LighthouseClient*,
        const ShareBlueprintAcrossAccountsRequest&,
        ShareBlueprintAcrossAccountsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::StartDockerContainersOutcome LighthouseClient::StartDockerContainers(const StartDockerContainersRequest &request)
{
    auto outcome = MakeRequest(request, "StartDockerContainers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartDockerContainersResponse rsp = StartDockerContainersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartDockerContainersOutcome(rsp);
        else
            return StartDockerContainersOutcome(o.GetError());
    }
    else
    {
        return StartDockerContainersOutcome(outcome.GetError());
    }
}

void LighthouseClient::StartDockerContainersAsync(const StartDockerContainersRequest& request, const StartDockerContainersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartDockerContainersRequest&;
    using Resp = StartDockerContainersResponse;

    DoRequestAsync<Req, Resp>(
        "StartDockerContainers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::StartDockerContainersOutcomeCallable LighthouseClient::StartDockerContainersCallable(const StartDockerContainersRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartDockerContainersOutcome>>();
    StartDockerContainersAsync(
    request,
    [prom](
        const LighthouseClient*,
        const StartDockerContainersRequest&,
        StartDockerContainersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::StartInstancesOutcome LighthouseClient::StartInstances(const StartInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "StartInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartInstancesResponse rsp = StartInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartInstancesOutcome(rsp);
        else
            return StartInstancesOutcome(o.GetError());
    }
    else
    {
        return StartInstancesOutcome(outcome.GetError());
    }
}

void LighthouseClient::StartInstancesAsync(const StartInstancesRequest& request, const StartInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartInstancesRequest&;
    using Resp = StartInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "StartInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::StartInstancesOutcomeCallable LighthouseClient::StartInstancesCallable(const StartInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartInstancesOutcome>>();
    StartInstancesAsync(
    request,
    [prom](
        const LighthouseClient*,
        const StartInstancesRequest&,
        StartInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::StartMcpServersOutcome LighthouseClient::StartMcpServers(const StartMcpServersRequest &request)
{
    auto outcome = MakeRequest(request, "StartMcpServers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartMcpServersResponse rsp = StartMcpServersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartMcpServersOutcome(rsp);
        else
            return StartMcpServersOutcome(o.GetError());
    }
    else
    {
        return StartMcpServersOutcome(outcome.GetError());
    }
}

void LighthouseClient::StartMcpServersAsync(const StartMcpServersRequest& request, const StartMcpServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartMcpServersRequest&;
    using Resp = StartMcpServersResponse;

    DoRequestAsync<Req, Resp>(
        "StartMcpServers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::StartMcpServersOutcomeCallable LighthouseClient::StartMcpServersCallable(const StartMcpServersRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartMcpServersOutcome>>();
    StartMcpServersAsync(
    request,
    [prom](
        const LighthouseClient*,
        const StartMcpServersRequest&,
        StartMcpServersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::StopDockerContainersOutcome LighthouseClient::StopDockerContainers(const StopDockerContainersRequest &request)
{
    auto outcome = MakeRequest(request, "StopDockerContainers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopDockerContainersResponse rsp = StopDockerContainersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopDockerContainersOutcome(rsp);
        else
            return StopDockerContainersOutcome(o.GetError());
    }
    else
    {
        return StopDockerContainersOutcome(outcome.GetError());
    }
}

void LighthouseClient::StopDockerContainersAsync(const StopDockerContainersRequest& request, const StopDockerContainersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopDockerContainersRequest&;
    using Resp = StopDockerContainersResponse;

    DoRequestAsync<Req, Resp>(
        "StopDockerContainers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::StopDockerContainersOutcomeCallable LighthouseClient::StopDockerContainersCallable(const StopDockerContainersRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopDockerContainersOutcome>>();
    StopDockerContainersAsync(
    request,
    [prom](
        const LighthouseClient*,
        const StopDockerContainersRequest&,
        StopDockerContainersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::StopInstancesOutcome LighthouseClient::StopInstances(const StopInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "StopInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopInstancesResponse rsp = StopInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopInstancesOutcome(rsp);
        else
            return StopInstancesOutcome(o.GetError());
    }
    else
    {
        return StopInstancesOutcome(outcome.GetError());
    }
}

void LighthouseClient::StopInstancesAsync(const StopInstancesRequest& request, const StopInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopInstancesRequest&;
    using Resp = StopInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "StopInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::StopInstancesOutcomeCallable LighthouseClient::StopInstancesCallable(const StopInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopInstancesOutcome>>();
    StopInstancesAsync(
    request,
    [prom](
        const LighthouseClient*,
        const StopInstancesRequest&,
        StopInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::StopMcpServersOutcome LighthouseClient::StopMcpServers(const StopMcpServersRequest &request)
{
    auto outcome = MakeRequest(request, "StopMcpServers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopMcpServersResponse rsp = StopMcpServersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopMcpServersOutcome(rsp);
        else
            return StopMcpServersOutcome(o.GetError());
    }
    else
    {
        return StopMcpServersOutcome(outcome.GetError());
    }
}

void LighthouseClient::StopMcpServersAsync(const StopMcpServersRequest& request, const StopMcpServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopMcpServersRequest&;
    using Resp = StopMcpServersResponse;

    DoRequestAsync<Req, Resp>(
        "StopMcpServers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::StopMcpServersOutcomeCallable LighthouseClient::StopMcpServersCallable(const StopMcpServersRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopMcpServersOutcome>>();
    StopMcpServersAsync(
    request,
    [prom](
        const LighthouseClient*,
        const StopMcpServersRequest&,
        StopMcpServersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::SyncBlueprintOutcome LighthouseClient::SyncBlueprint(const SyncBlueprintRequest &request)
{
    auto outcome = MakeRequest(request, "SyncBlueprint");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SyncBlueprintResponse rsp = SyncBlueprintResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SyncBlueprintOutcome(rsp);
        else
            return SyncBlueprintOutcome(o.GetError());
    }
    else
    {
        return SyncBlueprintOutcome(outcome.GetError());
    }
}

void LighthouseClient::SyncBlueprintAsync(const SyncBlueprintRequest& request, const SyncBlueprintAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SyncBlueprintRequest&;
    using Resp = SyncBlueprintResponse;

    DoRequestAsync<Req, Resp>(
        "SyncBlueprint", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::SyncBlueprintOutcomeCallable LighthouseClient::SyncBlueprintCallable(const SyncBlueprintRequest &request)
{
    const auto prom = std::make_shared<std::promise<SyncBlueprintOutcome>>();
    SyncBlueprintAsync(
    request,
    [prom](
        const LighthouseClient*,
        const SyncBlueprintRequest&,
        SyncBlueprintOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::TerminateDisksOutcome LighthouseClient::TerminateDisks(const TerminateDisksRequest &request)
{
    auto outcome = MakeRequest(request, "TerminateDisks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TerminateDisksResponse rsp = TerminateDisksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TerminateDisksOutcome(rsp);
        else
            return TerminateDisksOutcome(o.GetError());
    }
    else
    {
        return TerminateDisksOutcome(outcome.GetError());
    }
}

void LighthouseClient::TerminateDisksAsync(const TerminateDisksRequest& request, const TerminateDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const TerminateDisksRequest&;
    using Resp = TerminateDisksResponse;

    DoRequestAsync<Req, Resp>(
        "TerminateDisks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::TerminateDisksOutcomeCallable LighthouseClient::TerminateDisksCallable(const TerminateDisksRequest &request)
{
    const auto prom = std::make_shared<std::promise<TerminateDisksOutcome>>();
    TerminateDisksAsync(
    request,
    [prom](
        const LighthouseClient*,
        const TerminateDisksRequest&,
        TerminateDisksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LighthouseClient::TerminateInstancesOutcome LighthouseClient::TerminateInstances(const TerminateInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "TerminateInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TerminateInstancesResponse rsp = TerminateInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TerminateInstancesOutcome(rsp);
        else
            return TerminateInstancesOutcome(o.GetError());
    }
    else
    {
        return TerminateInstancesOutcome(outcome.GetError());
    }
}

void LighthouseClient::TerminateInstancesAsync(const TerminateInstancesRequest& request, const TerminateInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const TerminateInstancesRequest&;
    using Resp = TerminateInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "TerminateInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LighthouseClient::TerminateInstancesOutcomeCallable LighthouseClient::TerminateInstancesCallable(const TerminateInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<TerminateInstancesOutcome>>();
    TerminateInstancesAsync(
    request,
    [prom](
        const LighthouseClient*,
        const TerminateInstancesRequest&,
        TerminateInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


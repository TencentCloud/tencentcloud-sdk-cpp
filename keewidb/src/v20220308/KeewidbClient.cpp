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

#include <tencentcloud/keewidb/v20220308/KeewidbClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Keewidb::V20220308;
using namespace TencentCloud::Keewidb::V20220308::Model;
using namespace std;

namespace
{
    const string VERSION = "2022-03-08";
    const string ENDPOINT = "keewidb.tencentcloudapi.com";
}

KeewidbClient::KeewidbClient(const Credential &credential, const string &region) :
    KeewidbClient(credential, region, ClientProfile())
{
}

KeewidbClient::KeewidbClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


KeewidbClient::AssociateSecurityGroupsOutcome KeewidbClient::AssociateSecurityGroups(const AssociateSecurityGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "AssociateSecurityGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AssociateSecurityGroupsResponse rsp = AssociateSecurityGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AssociateSecurityGroupsOutcome(rsp);
        else
            return AssociateSecurityGroupsOutcome(o.GetError());
    }
    else
    {
        return AssociateSecurityGroupsOutcome(outcome.GetError());
    }
}

void KeewidbClient::AssociateSecurityGroupsAsync(const AssociateSecurityGroupsRequest& request, const AssociateSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AssociateSecurityGroupsRequest&;
    using Resp = AssociateSecurityGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "AssociateSecurityGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KeewidbClient::AssociateSecurityGroupsOutcomeCallable KeewidbClient::AssociateSecurityGroupsCallable(const AssociateSecurityGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<AssociateSecurityGroupsOutcome>>();
    AssociateSecurityGroupsAsync(
    request,
    [prom](
        const KeewidbClient*,
        const AssociateSecurityGroupsRequest&,
        AssociateSecurityGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KeewidbClient::ChangeInstanceMasterOutcome KeewidbClient::ChangeInstanceMaster(const ChangeInstanceMasterRequest &request)
{
    auto outcome = MakeRequest(request, "ChangeInstanceMaster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChangeInstanceMasterResponse rsp = ChangeInstanceMasterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChangeInstanceMasterOutcome(rsp);
        else
            return ChangeInstanceMasterOutcome(o.GetError());
    }
    else
    {
        return ChangeInstanceMasterOutcome(outcome.GetError());
    }
}

void KeewidbClient::ChangeInstanceMasterAsync(const ChangeInstanceMasterRequest& request, const ChangeInstanceMasterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ChangeInstanceMasterRequest&;
    using Resp = ChangeInstanceMasterResponse;

    DoRequestAsync<Req, Resp>(
        "ChangeInstanceMaster", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KeewidbClient::ChangeInstanceMasterOutcomeCallable KeewidbClient::ChangeInstanceMasterCallable(const ChangeInstanceMasterRequest &request)
{
    const auto prom = std::make_shared<std::promise<ChangeInstanceMasterOutcome>>();
    ChangeInstanceMasterAsync(
    request,
    [prom](
        const KeewidbClient*,
        const ChangeInstanceMasterRequest&,
        ChangeInstanceMasterOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KeewidbClient::CleanUpInstanceOutcome KeewidbClient::CleanUpInstance(const CleanUpInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CleanUpInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CleanUpInstanceResponse rsp = CleanUpInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CleanUpInstanceOutcome(rsp);
        else
            return CleanUpInstanceOutcome(o.GetError());
    }
    else
    {
        return CleanUpInstanceOutcome(outcome.GetError());
    }
}

void KeewidbClient::CleanUpInstanceAsync(const CleanUpInstanceRequest& request, const CleanUpInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CleanUpInstanceRequest&;
    using Resp = CleanUpInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "CleanUpInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KeewidbClient::CleanUpInstanceOutcomeCallable KeewidbClient::CleanUpInstanceCallable(const CleanUpInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CleanUpInstanceOutcome>>();
    CleanUpInstanceAsync(
    request,
    [prom](
        const KeewidbClient*,
        const CleanUpInstanceRequest&,
        CleanUpInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KeewidbClient::ClearInstanceOutcome KeewidbClient::ClearInstance(const ClearInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "ClearInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ClearInstanceResponse rsp = ClearInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ClearInstanceOutcome(rsp);
        else
            return ClearInstanceOutcome(o.GetError());
    }
    else
    {
        return ClearInstanceOutcome(outcome.GetError());
    }
}

void KeewidbClient::ClearInstanceAsync(const ClearInstanceRequest& request, const ClearInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ClearInstanceRequest&;
    using Resp = ClearInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "ClearInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KeewidbClient::ClearInstanceOutcomeCallable KeewidbClient::ClearInstanceCallable(const ClearInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ClearInstanceOutcome>>();
    ClearInstanceAsync(
    request,
    [prom](
        const KeewidbClient*,
        const ClearInstanceRequest&,
        ClearInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KeewidbClient::CreateBackupManuallyOutcome KeewidbClient::CreateBackupManually(const CreateBackupManuallyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBackupManually");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBackupManuallyResponse rsp = CreateBackupManuallyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBackupManuallyOutcome(rsp);
        else
            return CreateBackupManuallyOutcome(o.GetError());
    }
    else
    {
        return CreateBackupManuallyOutcome(outcome.GetError());
    }
}

void KeewidbClient::CreateBackupManuallyAsync(const CreateBackupManuallyRequest& request, const CreateBackupManuallyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateBackupManuallyRequest&;
    using Resp = CreateBackupManuallyResponse;

    DoRequestAsync<Req, Resp>(
        "CreateBackupManually", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KeewidbClient::CreateBackupManuallyOutcomeCallable KeewidbClient::CreateBackupManuallyCallable(const CreateBackupManuallyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateBackupManuallyOutcome>>();
    CreateBackupManuallyAsync(
    request,
    [prom](
        const KeewidbClient*,
        const CreateBackupManuallyRequest&,
        CreateBackupManuallyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KeewidbClient::CreateInstancesOutcome KeewidbClient::CreateInstances(const CreateInstancesRequest &request)
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

void KeewidbClient::CreateInstancesAsync(const CreateInstancesRequest& request, const CreateInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

KeewidbClient::CreateInstancesOutcomeCallable KeewidbClient::CreateInstancesCallable(const CreateInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateInstancesOutcome>>();
    CreateInstancesAsync(
    request,
    [prom](
        const KeewidbClient*,
        const CreateInstancesRequest&,
        CreateInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KeewidbClient::DescribeAutoBackupConfigOutcome KeewidbClient::DescribeAutoBackupConfig(const DescribeAutoBackupConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAutoBackupConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAutoBackupConfigResponse rsp = DescribeAutoBackupConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAutoBackupConfigOutcome(rsp);
        else
            return DescribeAutoBackupConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeAutoBackupConfigOutcome(outcome.GetError());
    }
}

void KeewidbClient::DescribeAutoBackupConfigAsync(const DescribeAutoBackupConfigRequest& request, const DescribeAutoBackupConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAutoBackupConfigRequest&;
    using Resp = DescribeAutoBackupConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAutoBackupConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KeewidbClient::DescribeAutoBackupConfigOutcomeCallable KeewidbClient::DescribeAutoBackupConfigCallable(const DescribeAutoBackupConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAutoBackupConfigOutcome>>();
    DescribeAutoBackupConfigAsync(
    request,
    [prom](
        const KeewidbClient*,
        const DescribeAutoBackupConfigRequest&,
        DescribeAutoBackupConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KeewidbClient::DescribeConnectionConfigOutcome KeewidbClient::DescribeConnectionConfig(const DescribeConnectionConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConnectionConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConnectionConfigResponse rsp = DescribeConnectionConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConnectionConfigOutcome(rsp);
        else
            return DescribeConnectionConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeConnectionConfigOutcome(outcome.GetError());
    }
}

void KeewidbClient::DescribeConnectionConfigAsync(const DescribeConnectionConfigRequest& request, const DescribeConnectionConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeConnectionConfigRequest&;
    using Resp = DescribeConnectionConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeConnectionConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KeewidbClient::DescribeConnectionConfigOutcomeCallable KeewidbClient::DescribeConnectionConfigCallable(const DescribeConnectionConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeConnectionConfigOutcome>>();
    DescribeConnectionConfigAsync(
    request,
    [prom](
        const KeewidbClient*,
        const DescribeConnectionConfigRequest&,
        DescribeConnectionConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KeewidbClient::DescribeDBSecurityGroupsOutcome KeewidbClient::DescribeDBSecurityGroups(const DescribeDBSecurityGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBSecurityGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBSecurityGroupsResponse rsp = DescribeDBSecurityGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBSecurityGroupsOutcome(rsp);
        else
            return DescribeDBSecurityGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeDBSecurityGroupsOutcome(outcome.GetError());
    }
}

void KeewidbClient::DescribeDBSecurityGroupsAsync(const DescribeDBSecurityGroupsRequest& request, const DescribeDBSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDBSecurityGroupsRequest&;
    using Resp = DescribeDBSecurityGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDBSecurityGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KeewidbClient::DescribeDBSecurityGroupsOutcomeCallable KeewidbClient::DescribeDBSecurityGroupsCallable(const DescribeDBSecurityGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBSecurityGroupsOutcome>>();
    DescribeDBSecurityGroupsAsync(
    request,
    [prom](
        const KeewidbClient*,
        const DescribeDBSecurityGroupsRequest&,
        DescribeDBSecurityGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KeewidbClient::DescribeInstanceBackupsOutcome KeewidbClient::DescribeInstanceBackups(const DescribeInstanceBackupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceBackups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceBackupsResponse rsp = DescribeInstanceBackupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceBackupsOutcome(rsp);
        else
            return DescribeInstanceBackupsOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceBackupsOutcome(outcome.GetError());
    }
}

void KeewidbClient::DescribeInstanceBackupsAsync(const DescribeInstanceBackupsRequest& request, const DescribeInstanceBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceBackupsRequest&;
    using Resp = DescribeInstanceBackupsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceBackups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KeewidbClient::DescribeInstanceBackupsOutcomeCallable KeewidbClient::DescribeInstanceBackupsCallable(const DescribeInstanceBackupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceBackupsOutcome>>();
    DescribeInstanceBackupsAsync(
    request,
    [prom](
        const KeewidbClient*,
        const DescribeInstanceBackupsRequest&,
        DescribeInstanceBackupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KeewidbClient::DescribeInstanceBinlogsOutcome KeewidbClient::DescribeInstanceBinlogs(const DescribeInstanceBinlogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceBinlogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceBinlogsResponse rsp = DescribeInstanceBinlogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceBinlogsOutcome(rsp);
        else
            return DescribeInstanceBinlogsOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceBinlogsOutcome(outcome.GetError());
    }
}

void KeewidbClient::DescribeInstanceBinlogsAsync(const DescribeInstanceBinlogsRequest& request, const DescribeInstanceBinlogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceBinlogsRequest&;
    using Resp = DescribeInstanceBinlogsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceBinlogs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KeewidbClient::DescribeInstanceBinlogsOutcomeCallable KeewidbClient::DescribeInstanceBinlogsCallable(const DescribeInstanceBinlogsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceBinlogsOutcome>>();
    DescribeInstanceBinlogsAsync(
    request,
    [prom](
        const KeewidbClient*,
        const DescribeInstanceBinlogsRequest&,
        DescribeInstanceBinlogsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KeewidbClient::DescribeInstanceDealDetailOutcome KeewidbClient::DescribeInstanceDealDetail(const DescribeInstanceDealDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceDealDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceDealDetailResponse rsp = DescribeInstanceDealDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceDealDetailOutcome(rsp);
        else
            return DescribeInstanceDealDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceDealDetailOutcome(outcome.GetError());
    }
}

void KeewidbClient::DescribeInstanceDealDetailAsync(const DescribeInstanceDealDetailRequest& request, const DescribeInstanceDealDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceDealDetailRequest&;
    using Resp = DescribeInstanceDealDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceDealDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KeewidbClient::DescribeInstanceDealDetailOutcomeCallable KeewidbClient::DescribeInstanceDealDetailCallable(const DescribeInstanceDealDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceDealDetailOutcome>>();
    DescribeInstanceDealDetailAsync(
    request,
    [prom](
        const KeewidbClient*,
        const DescribeInstanceDealDetailRequest&,
        DescribeInstanceDealDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KeewidbClient::DescribeInstanceNodeInfoOutcome KeewidbClient::DescribeInstanceNodeInfo(const DescribeInstanceNodeInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceNodeInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceNodeInfoResponse rsp = DescribeInstanceNodeInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceNodeInfoOutcome(rsp);
        else
            return DescribeInstanceNodeInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceNodeInfoOutcome(outcome.GetError());
    }
}

void KeewidbClient::DescribeInstanceNodeInfoAsync(const DescribeInstanceNodeInfoRequest& request, const DescribeInstanceNodeInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceNodeInfoRequest&;
    using Resp = DescribeInstanceNodeInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceNodeInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KeewidbClient::DescribeInstanceNodeInfoOutcomeCallable KeewidbClient::DescribeInstanceNodeInfoCallable(const DescribeInstanceNodeInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceNodeInfoOutcome>>();
    DescribeInstanceNodeInfoAsync(
    request,
    [prom](
        const KeewidbClient*,
        const DescribeInstanceNodeInfoRequest&,
        DescribeInstanceNodeInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KeewidbClient::DescribeInstanceParamRecordsOutcome KeewidbClient::DescribeInstanceParamRecords(const DescribeInstanceParamRecordsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceParamRecords");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceParamRecordsResponse rsp = DescribeInstanceParamRecordsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceParamRecordsOutcome(rsp);
        else
            return DescribeInstanceParamRecordsOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceParamRecordsOutcome(outcome.GetError());
    }
}

void KeewidbClient::DescribeInstanceParamRecordsAsync(const DescribeInstanceParamRecordsRequest& request, const DescribeInstanceParamRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceParamRecordsRequest&;
    using Resp = DescribeInstanceParamRecordsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceParamRecords", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KeewidbClient::DescribeInstanceParamRecordsOutcomeCallable KeewidbClient::DescribeInstanceParamRecordsCallable(const DescribeInstanceParamRecordsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceParamRecordsOutcome>>();
    DescribeInstanceParamRecordsAsync(
    request,
    [prom](
        const KeewidbClient*,
        const DescribeInstanceParamRecordsRequest&,
        DescribeInstanceParamRecordsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KeewidbClient::DescribeInstanceParamsOutcome KeewidbClient::DescribeInstanceParams(const DescribeInstanceParamsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceParams");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceParamsResponse rsp = DescribeInstanceParamsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceParamsOutcome(rsp);
        else
            return DescribeInstanceParamsOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceParamsOutcome(outcome.GetError());
    }
}

void KeewidbClient::DescribeInstanceParamsAsync(const DescribeInstanceParamsRequest& request, const DescribeInstanceParamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceParamsRequest&;
    using Resp = DescribeInstanceParamsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceParams", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KeewidbClient::DescribeInstanceParamsOutcomeCallable KeewidbClient::DescribeInstanceParamsCallable(const DescribeInstanceParamsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceParamsOutcome>>();
    DescribeInstanceParamsAsync(
    request,
    [prom](
        const KeewidbClient*,
        const DescribeInstanceParamsRequest&,
        DescribeInstanceParamsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KeewidbClient::DescribeInstanceReplicasOutcome KeewidbClient::DescribeInstanceReplicas(const DescribeInstanceReplicasRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceReplicas");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceReplicasResponse rsp = DescribeInstanceReplicasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceReplicasOutcome(rsp);
        else
            return DescribeInstanceReplicasOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceReplicasOutcome(outcome.GetError());
    }
}

void KeewidbClient::DescribeInstanceReplicasAsync(const DescribeInstanceReplicasRequest& request, const DescribeInstanceReplicasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceReplicasRequest&;
    using Resp = DescribeInstanceReplicasResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceReplicas", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KeewidbClient::DescribeInstanceReplicasOutcomeCallable KeewidbClient::DescribeInstanceReplicasCallable(const DescribeInstanceReplicasRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceReplicasOutcome>>();
    DescribeInstanceReplicasAsync(
    request,
    [prom](
        const KeewidbClient*,
        const DescribeInstanceReplicasRequest&,
        DescribeInstanceReplicasOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KeewidbClient::DescribeInstancesOutcome KeewidbClient::DescribeInstances(const DescribeInstancesRequest &request)
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

void KeewidbClient::DescribeInstancesAsync(const DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

KeewidbClient::DescribeInstancesOutcomeCallable KeewidbClient::DescribeInstancesCallable(const DescribeInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstancesOutcome>>();
    DescribeInstancesAsync(
    request,
    [prom](
        const KeewidbClient*,
        const DescribeInstancesRequest&,
        DescribeInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KeewidbClient::DescribeMaintenanceWindowOutcome KeewidbClient::DescribeMaintenanceWindow(const DescribeMaintenanceWindowRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMaintenanceWindow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMaintenanceWindowResponse rsp = DescribeMaintenanceWindowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMaintenanceWindowOutcome(rsp);
        else
            return DescribeMaintenanceWindowOutcome(o.GetError());
    }
    else
    {
        return DescribeMaintenanceWindowOutcome(outcome.GetError());
    }
}

void KeewidbClient::DescribeMaintenanceWindowAsync(const DescribeMaintenanceWindowRequest& request, const DescribeMaintenanceWindowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMaintenanceWindowRequest&;
    using Resp = DescribeMaintenanceWindowResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMaintenanceWindow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KeewidbClient::DescribeMaintenanceWindowOutcomeCallable KeewidbClient::DescribeMaintenanceWindowCallable(const DescribeMaintenanceWindowRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMaintenanceWindowOutcome>>();
    DescribeMaintenanceWindowAsync(
    request,
    [prom](
        const KeewidbClient*,
        const DescribeMaintenanceWindowRequest&,
        DescribeMaintenanceWindowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KeewidbClient::DescribeProductInfoOutcome KeewidbClient::DescribeProductInfo(const DescribeProductInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProductInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProductInfoResponse rsp = DescribeProductInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProductInfoOutcome(rsp);
        else
            return DescribeProductInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeProductInfoOutcome(outcome.GetError());
    }
}

void KeewidbClient::DescribeProductInfoAsync(const DescribeProductInfoRequest& request, const DescribeProductInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeProductInfoRequest&;
    using Resp = DescribeProductInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProductInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KeewidbClient::DescribeProductInfoOutcomeCallable KeewidbClient::DescribeProductInfoCallable(const DescribeProductInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProductInfoOutcome>>();
    DescribeProductInfoAsync(
    request,
    [prom](
        const KeewidbClient*,
        const DescribeProductInfoRequest&,
        DescribeProductInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KeewidbClient::DescribeProjectSecurityGroupsOutcome KeewidbClient::DescribeProjectSecurityGroups(const DescribeProjectSecurityGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProjectSecurityGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProjectSecurityGroupsResponse rsp = DescribeProjectSecurityGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProjectSecurityGroupsOutcome(rsp);
        else
            return DescribeProjectSecurityGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeProjectSecurityGroupsOutcome(outcome.GetError());
    }
}

void KeewidbClient::DescribeProjectSecurityGroupsAsync(const DescribeProjectSecurityGroupsRequest& request, const DescribeProjectSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeProjectSecurityGroupsRequest&;
    using Resp = DescribeProjectSecurityGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProjectSecurityGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KeewidbClient::DescribeProjectSecurityGroupsOutcomeCallable KeewidbClient::DescribeProjectSecurityGroupsCallable(const DescribeProjectSecurityGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProjectSecurityGroupsOutcome>>();
    DescribeProjectSecurityGroupsAsync(
    request,
    [prom](
        const KeewidbClient*,
        const DescribeProjectSecurityGroupsRequest&,
        DescribeProjectSecurityGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KeewidbClient::DescribeProxySlowLogOutcome KeewidbClient::DescribeProxySlowLog(const DescribeProxySlowLogRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProxySlowLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProxySlowLogResponse rsp = DescribeProxySlowLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProxySlowLogOutcome(rsp);
        else
            return DescribeProxySlowLogOutcome(o.GetError());
    }
    else
    {
        return DescribeProxySlowLogOutcome(outcome.GetError());
    }
}

void KeewidbClient::DescribeProxySlowLogAsync(const DescribeProxySlowLogRequest& request, const DescribeProxySlowLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeProxySlowLogRequest&;
    using Resp = DescribeProxySlowLogResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProxySlowLog", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KeewidbClient::DescribeProxySlowLogOutcomeCallable KeewidbClient::DescribeProxySlowLogCallable(const DescribeProxySlowLogRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProxySlowLogOutcome>>();
    DescribeProxySlowLogAsync(
    request,
    [prom](
        const KeewidbClient*,
        const DescribeProxySlowLogRequest&,
        DescribeProxySlowLogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KeewidbClient::DescribeTaskInfoOutcome KeewidbClient::DescribeTaskInfo(const DescribeTaskInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskInfoResponse rsp = DescribeTaskInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskInfoOutcome(rsp);
        else
            return DescribeTaskInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskInfoOutcome(outcome.GetError());
    }
}

void KeewidbClient::DescribeTaskInfoAsync(const DescribeTaskInfoRequest& request, const DescribeTaskInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTaskInfoRequest&;
    using Resp = DescribeTaskInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTaskInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KeewidbClient::DescribeTaskInfoOutcomeCallable KeewidbClient::DescribeTaskInfoCallable(const DescribeTaskInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTaskInfoOutcome>>();
    DescribeTaskInfoAsync(
    request,
    [prom](
        const KeewidbClient*,
        const DescribeTaskInfoRequest&,
        DescribeTaskInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KeewidbClient::DescribeTaskListOutcome KeewidbClient::DescribeTaskList(const DescribeTaskListRequest &request)
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

void KeewidbClient::DescribeTaskListAsync(const DescribeTaskListRequest& request, const DescribeTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

KeewidbClient::DescribeTaskListOutcomeCallable KeewidbClient::DescribeTaskListCallable(const DescribeTaskListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTaskListOutcome>>();
    DescribeTaskListAsync(
    request,
    [prom](
        const KeewidbClient*,
        const DescribeTaskListRequest&,
        DescribeTaskListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KeewidbClient::DescribeTendisSlowLogOutcome KeewidbClient::DescribeTendisSlowLog(const DescribeTendisSlowLogRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTendisSlowLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTendisSlowLogResponse rsp = DescribeTendisSlowLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTendisSlowLogOutcome(rsp);
        else
            return DescribeTendisSlowLogOutcome(o.GetError());
    }
    else
    {
        return DescribeTendisSlowLogOutcome(outcome.GetError());
    }
}

void KeewidbClient::DescribeTendisSlowLogAsync(const DescribeTendisSlowLogRequest& request, const DescribeTendisSlowLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTendisSlowLogRequest&;
    using Resp = DescribeTendisSlowLogResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTendisSlowLog", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KeewidbClient::DescribeTendisSlowLogOutcomeCallable KeewidbClient::DescribeTendisSlowLogCallable(const DescribeTendisSlowLogRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTendisSlowLogOutcome>>();
    DescribeTendisSlowLogAsync(
    request,
    [prom](
        const KeewidbClient*,
        const DescribeTendisSlowLogRequest&,
        DescribeTendisSlowLogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KeewidbClient::DestroyPostpaidInstanceOutcome KeewidbClient::DestroyPostpaidInstance(const DestroyPostpaidInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DestroyPostpaidInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DestroyPostpaidInstanceResponse rsp = DestroyPostpaidInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DestroyPostpaidInstanceOutcome(rsp);
        else
            return DestroyPostpaidInstanceOutcome(o.GetError());
    }
    else
    {
        return DestroyPostpaidInstanceOutcome(outcome.GetError());
    }
}

void KeewidbClient::DestroyPostpaidInstanceAsync(const DestroyPostpaidInstanceRequest& request, const DestroyPostpaidInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DestroyPostpaidInstanceRequest&;
    using Resp = DestroyPostpaidInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "DestroyPostpaidInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KeewidbClient::DestroyPostpaidInstanceOutcomeCallable KeewidbClient::DestroyPostpaidInstanceCallable(const DestroyPostpaidInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DestroyPostpaidInstanceOutcome>>();
    DestroyPostpaidInstanceAsync(
    request,
    [prom](
        const KeewidbClient*,
        const DestroyPostpaidInstanceRequest&,
        DestroyPostpaidInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KeewidbClient::DestroyPrepaidInstanceOutcome KeewidbClient::DestroyPrepaidInstance(const DestroyPrepaidInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DestroyPrepaidInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DestroyPrepaidInstanceResponse rsp = DestroyPrepaidInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DestroyPrepaidInstanceOutcome(rsp);
        else
            return DestroyPrepaidInstanceOutcome(o.GetError());
    }
    else
    {
        return DestroyPrepaidInstanceOutcome(outcome.GetError());
    }
}

void KeewidbClient::DestroyPrepaidInstanceAsync(const DestroyPrepaidInstanceRequest& request, const DestroyPrepaidInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DestroyPrepaidInstanceRequest&;
    using Resp = DestroyPrepaidInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "DestroyPrepaidInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KeewidbClient::DestroyPrepaidInstanceOutcomeCallable KeewidbClient::DestroyPrepaidInstanceCallable(const DestroyPrepaidInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DestroyPrepaidInstanceOutcome>>();
    DestroyPrepaidInstanceAsync(
    request,
    [prom](
        const KeewidbClient*,
        const DestroyPrepaidInstanceRequest&,
        DestroyPrepaidInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KeewidbClient::DisassociateSecurityGroupsOutcome KeewidbClient::DisassociateSecurityGroups(const DisassociateSecurityGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DisassociateSecurityGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisassociateSecurityGroupsResponse rsp = DisassociateSecurityGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisassociateSecurityGroupsOutcome(rsp);
        else
            return DisassociateSecurityGroupsOutcome(o.GetError());
    }
    else
    {
        return DisassociateSecurityGroupsOutcome(outcome.GetError());
    }
}

void KeewidbClient::DisassociateSecurityGroupsAsync(const DisassociateSecurityGroupsRequest& request, const DisassociateSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DisassociateSecurityGroupsRequest&;
    using Resp = DisassociateSecurityGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DisassociateSecurityGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KeewidbClient::DisassociateSecurityGroupsOutcomeCallable KeewidbClient::DisassociateSecurityGroupsCallable(const DisassociateSecurityGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisassociateSecurityGroupsOutcome>>();
    DisassociateSecurityGroupsAsync(
    request,
    [prom](
        const KeewidbClient*,
        const DisassociateSecurityGroupsRequest&,
        DisassociateSecurityGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KeewidbClient::ModifyAutoBackupConfigOutcome KeewidbClient::ModifyAutoBackupConfig(const ModifyAutoBackupConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAutoBackupConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAutoBackupConfigResponse rsp = ModifyAutoBackupConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAutoBackupConfigOutcome(rsp);
        else
            return ModifyAutoBackupConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyAutoBackupConfigOutcome(outcome.GetError());
    }
}

void KeewidbClient::ModifyAutoBackupConfigAsync(const ModifyAutoBackupConfigRequest& request, const ModifyAutoBackupConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAutoBackupConfigRequest&;
    using Resp = ModifyAutoBackupConfigResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAutoBackupConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KeewidbClient::ModifyAutoBackupConfigOutcomeCallable KeewidbClient::ModifyAutoBackupConfigCallable(const ModifyAutoBackupConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAutoBackupConfigOutcome>>();
    ModifyAutoBackupConfigAsync(
    request,
    [prom](
        const KeewidbClient*,
        const ModifyAutoBackupConfigRequest&,
        ModifyAutoBackupConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KeewidbClient::ModifyConnectionConfigOutcome KeewidbClient::ModifyConnectionConfig(const ModifyConnectionConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyConnectionConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyConnectionConfigResponse rsp = ModifyConnectionConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyConnectionConfigOutcome(rsp);
        else
            return ModifyConnectionConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyConnectionConfigOutcome(outcome.GetError());
    }
}

void KeewidbClient::ModifyConnectionConfigAsync(const ModifyConnectionConfigRequest& request, const ModifyConnectionConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyConnectionConfigRequest&;
    using Resp = ModifyConnectionConfigResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyConnectionConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KeewidbClient::ModifyConnectionConfigOutcomeCallable KeewidbClient::ModifyConnectionConfigCallable(const ModifyConnectionConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyConnectionConfigOutcome>>();
    ModifyConnectionConfigAsync(
    request,
    [prom](
        const KeewidbClient*,
        const ModifyConnectionConfigRequest&,
        ModifyConnectionConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KeewidbClient::ModifyDBInstanceSecurityGroupsOutcome KeewidbClient::ModifyDBInstanceSecurityGroups(const ModifyDBInstanceSecurityGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDBInstanceSecurityGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDBInstanceSecurityGroupsResponse rsp = ModifyDBInstanceSecurityGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDBInstanceSecurityGroupsOutcome(rsp);
        else
            return ModifyDBInstanceSecurityGroupsOutcome(o.GetError());
    }
    else
    {
        return ModifyDBInstanceSecurityGroupsOutcome(outcome.GetError());
    }
}

void KeewidbClient::ModifyDBInstanceSecurityGroupsAsync(const ModifyDBInstanceSecurityGroupsRequest& request, const ModifyDBInstanceSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDBInstanceSecurityGroupsRequest&;
    using Resp = ModifyDBInstanceSecurityGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDBInstanceSecurityGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KeewidbClient::ModifyDBInstanceSecurityGroupsOutcomeCallable KeewidbClient::ModifyDBInstanceSecurityGroupsCallable(const ModifyDBInstanceSecurityGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDBInstanceSecurityGroupsOutcome>>();
    ModifyDBInstanceSecurityGroupsAsync(
    request,
    [prom](
        const KeewidbClient*,
        const ModifyDBInstanceSecurityGroupsRequest&,
        ModifyDBInstanceSecurityGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KeewidbClient::ModifyInstanceOutcome KeewidbClient::ModifyInstance(const ModifyInstanceRequest &request)
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

void KeewidbClient::ModifyInstanceAsync(const ModifyInstanceRequest& request, const ModifyInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

KeewidbClient::ModifyInstanceOutcomeCallable KeewidbClient::ModifyInstanceCallable(const ModifyInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyInstanceOutcome>>();
    ModifyInstanceAsync(
    request,
    [prom](
        const KeewidbClient*,
        const ModifyInstanceRequest&,
        ModifyInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KeewidbClient::ModifyInstanceParamsOutcome KeewidbClient::ModifyInstanceParams(const ModifyInstanceParamsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstanceParams");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstanceParamsResponse rsp = ModifyInstanceParamsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstanceParamsOutcome(rsp);
        else
            return ModifyInstanceParamsOutcome(o.GetError());
    }
    else
    {
        return ModifyInstanceParamsOutcome(outcome.GetError());
    }
}

void KeewidbClient::ModifyInstanceParamsAsync(const ModifyInstanceParamsRequest& request, const ModifyInstanceParamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyInstanceParamsRequest&;
    using Resp = ModifyInstanceParamsResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyInstanceParams", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KeewidbClient::ModifyInstanceParamsOutcomeCallable KeewidbClient::ModifyInstanceParamsCallable(const ModifyInstanceParamsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyInstanceParamsOutcome>>();
    ModifyInstanceParamsAsync(
    request,
    [prom](
        const KeewidbClient*,
        const ModifyInstanceParamsRequest&,
        ModifyInstanceParamsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KeewidbClient::ModifyMaintenanceWindowOutcome KeewidbClient::ModifyMaintenanceWindow(const ModifyMaintenanceWindowRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMaintenanceWindow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMaintenanceWindowResponse rsp = ModifyMaintenanceWindowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMaintenanceWindowOutcome(rsp);
        else
            return ModifyMaintenanceWindowOutcome(o.GetError());
    }
    else
    {
        return ModifyMaintenanceWindowOutcome(outcome.GetError());
    }
}

void KeewidbClient::ModifyMaintenanceWindowAsync(const ModifyMaintenanceWindowRequest& request, const ModifyMaintenanceWindowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyMaintenanceWindowRequest&;
    using Resp = ModifyMaintenanceWindowResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyMaintenanceWindow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KeewidbClient::ModifyMaintenanceWindowOutcomeCallable KeewidbClient::ModifyMaintenanceWindowCallable(const ModifyMaintenanceWindowRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyMaintenanceWindowOutcome>>();
    ModifyMaintenanceWindowAsync(
    request,
    [prom](
        const KeewidbClient*,
        const ModifyMaintenanceWindowRequest&,
        ModifyMaintenanceWindowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KeewidbClient::ModifyNetworkConfigOutcome KeewidbClient::ModifyNetworkConfig(const ModifyNetworkConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNetworkConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNetworkConfigResponse rsp = ModifyNetworkConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNetworkConfigOutcome(rsp);
        else
            return ModifyNetworkConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyNetworkConfigOutcome(outcome.GetError());
    }
}

void KeewidbClient::ModifyNetworkConfigAsync(const ModifyNetworkConfigRequest& request, const ModifyNetworkConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyNetworkConfigRequest&;
    using Resp = ModifyNetworkConfigResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyNetworkConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KeewidbClient::ModifyNetworkConfigOutcomeCallable KeewidbClient::ModifyNetworkConfigCallable(const ModifyNetworkConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyNetworkConfigOutcome>>();
    ModifyNetworkConfigAsync(
    request,
    [prom](
        const KeewidbClient*,
        const ModifyNetworkConfigRequest&,
        ModifyNetworkConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KeewidbClient::RenewInstanceOutcome KeewidbClient::RenewInstance(const RenewInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "RenewInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RenewInstanceResponse rsp = RenewInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RenewInstanceOutcome(rsp);
        else
            return RenewInstanceOutcome(o.GetError());
    }
    else
    {
        return RenewInstanceOutcome(outcome.GetError());
    }
}

void KeewidbClient::RenewInstanceAsync(const RenewInstanceRequest& request, const RenewInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RenewInstanceRequest&;
    using Resp = RenewInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "RenewInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KeewidbClient::RenewInstanceOutcomeCallable KeewidbClient::RenewInstanceCallable(const RenewInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<RenewInstanceOutcome>>();
    RenewInstanceAsync(
    request,
    [prom](
        const KeewidbClient*,
        const RenewInstanceRequest&,
        RenewInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KeewidbClient::ResetPasswordOutcome KeewidbClient::ResetPassword(const ResetPasswordRequest &request)
{
    auto outcome = MakeRequest(request, "ResetPassword");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetPasswordResponse rsp = ResetPasswordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetPasswordOutcome(rsp);
        else
            return ResetPasswordOutcome(o.GetError());
    }
    else
    {
        return ResetPasswordOutcome(outcome.GetError());
    }
}

void KeewidbClient::ResetPasswordAsync(const ResetPasswordRequest& request, const ResetPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ResetPasswordRequest&;
    using Resp = ResetPasswordResponse;

    DoRequestAsync<Req, Resp>(
        "ResetPassword", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KeewidbClient::ResetPasswordOutcomeCallable KeewidbClient::ResetPasswordCallable(const ResetPasswordRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResetPasswordOutcome>>();
    ResetPasswordAsync(
    request,
    [prom](
        const KeewidbClient*,
        const ResetPasswordRequest&,
        ResetPasswordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KeewidbClient::StartUpInstanceOutcome KeewidbClient::StartUpInstance(const StartUpInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "StartUpInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartUpInstanceResponse rsp = StartUpInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartUpInstanceOutcome(rsp);
        else
            return StartUpInstanceOutcome(o.GetError());
    }
    else
    {
        return StartUpInstanceOutcome(outcome.GetError());
    }
}

void KeewidbClient::StartUpInstanceAsync(const StartUpInstanceRequest& request, const StartUpInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartUpInstanceRequest&;
    using Resp = StartUpInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "StartUpInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KeewidbClient::StartUpInstanceOutcomeCallable KeewidbClient::StartUpInstanceCallable(const StartUpInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartUpInstanceOutcome>>();
    StartUpInstanceAsync(
    request,
    [prom](
        const KeewidbClient*,
        const StartUpInstanceRequest&,
        StartUpInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KeewidbClient::UpgradeInstanceOutcome KeewidbClient::UpgradeInstance(const UpgradeInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "UpgradeInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpgradeInstanceResponse rsp = UpgradeInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpgradeInstanceOutcome(rsp);
        else
            return UpgradeInstanceOutcome(o.GetError());
    }
    else
    {
        return UpgradeInstanceOutcome(outcome.GetError());
    }
}

void KeewidbClient::UpgradeInstanceAsync(const UpgradeInstanceRequest& request, const UpgradeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpgradeInstanceRequest&;
    using Resp = UpgradeInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "UpgradeInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KeewidbClient::UpgradeInstanceOutcomeCallable KeewidbClient::UpgradeInstanceCallable(const UpgradeInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpgradeInstanceOutcome>>();
    UpgradeInstanceAsync(
    request,
    [prom](
        const KeewidbClient*,
        const UpgradeInstanceRequest&,
        UpgradeInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


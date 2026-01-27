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

#include <tencentcloud/cbs/v20170312/CbsClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Cbs::V20170312;
using namespace TencentCloud::Cbs::V20170312::Model;
using namespace std;

namespace
{
    const string VERSION = "2017-03-12";
    const string ENDPOINT = "cbs.tencentcloudapi.com";
}

CbsClient::CbsClient(const Credential &credential, const string &region) :
    CbsClient(credential, region, ClientProfile())
{
}

CbsClient::CbsClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CbsClient::ApplyDiskBackupOutcome CbsClient::ApplyDiskBackup(const ApplyDiskBackupRequest &request)
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

void CbsClient::ApplyDiskBackupAsync(const ApplyDiskBackupRequest& request, const ApplyDiskBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CbsClient::ApplyDiskBackupOutcomeCallable CbsClient::ApplyDiskBackupCallable(const ApplyDiskBackupRequest &request)
{
    const auto prom = std::make_shared<std::promise<ApplyDiskBackupOutcome>>();
    ApplyDiskBackupAsync(
    request,
    [prom](
        const CbsClient*,
        const ApplyDiskBackupRequest&,
        ApplyDiskBackupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CbsClient::ApplySnapshotOutcome CbsClient::ApplySnapshot(const ApplySnapshotRequest &request)
{
    auto outcome = MakeRequest(request, "ApplySnapshot");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ApplySnapshotResponse rsp = ApplySnapshotResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ApplySnapshotOutcome(rsp);
        else
            return ApplySnapshotOutcome(o.GetError());
    }
    else
    {
        return ApplySnapshotOutcome(outcome.GetError());
    }
}

void CbsClient::ApplySnapshotAsync(const ApplySnapshotRequest& request, const ApplySnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ApplySnapshotRequest&;
    using Resp = ApplySnapshotResponse;

    DoRequestAsync<Req, Resp>(
        "ApplySnapshot", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CbsClient::ApplySnapshotOutcomeCallable CbsClient::ApplySnapshotCallable(const ApplySnapshotRequest &request)
{
    const auto prom = std::make_shared<std::promise<ApplySnapshotOutcome>>();
    ApplySnapshotAsync(
    request,
    [prom](
        const CbsClient*,
        const ApplySnapshotRequest&,
        ApplySnapshotOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CbsClient::ApplySnapshotGroupOutcome CbsClient::ApplySnapshotGroup(const ApplySnapshotGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ApplySnapshotGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ApplySnapshotGroupResponse rsp = ApplySnapshotGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ApplySnapshotGroupOutcome(rsp);
        else
            return ApplySnapshotGroupOutcome(o.GetError());
    }
    else
    {
        return ApplySnapshotGroupOutcome(outcome.GetError());
    }
}

void CbsClient::ApplySnapshotGroupAsync(const ApplySnapshotGroupRequest& request, const ApplySnapshotGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ApplySnapshotGroupRequest&;
    using Resp = ApplySnapshotGroupResponse;

    DoRequestAsync<Req, Resp>(
        "ApplySnapshotGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CbsClient::ApplySnapshotGroupOutcomeCallable CbsClient::ApplySnapshotGroupCallable(const ApplySnapshotGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<ApplySnapshotGroupOutcome>>();
    ApplySnapshotGroupAsync(
    request,
    [prom](
        const CbsClient*,
        const ApplySnapshotGroupRequest&,
        ApplySnapshotGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CbsClient::AttachDisksOutcome CbsClient::AttachDisks(const AttachDisksRequest &request)
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

void CbsClient::AttachDisksAsync(const AttachDisksRequest& request, const AttachDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CbsClient::AttachDisksOutcomeCallable CbsClient::AttachDisksCallable(const AttachDisksRequest &request)
{
    const auto prom = std::make_shared<std::promise<AttachDisksOutcome>>();
    AttachDisksAsync(
    request,
    [prom](
        const CbsClient*,
        const AttachDisksRequest&,
        AttachDisksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CbsClient::BindAutoSnapshotPolicyOutcome CbsClient::BindAutoSnapshotPolicy(const BindAutoSnapshotPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "BindAutoSnapshotPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindAutoSnapshotPolicyResponse rsp = BindAutoSnapshotPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindAutoSnapshotPolicyOutcome(rsp);
        else
            return BindAutoSnapshotPolicyOutcome(o.GetError());
    }
    else
    {
        return BindAutoSnapshotPolicyOutcome(outcome.GetError());
    }
}

void CbsClient::BindAutoSnapshotPolicyAsync(const BindAutoSnapshotPolicyRequest& request, const BindAutoSnapshotPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BindAutoSnapshotPolicyRequest&;
    using Resp = BindAutoSnapshotPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "BindAutoSnapshotPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CbsClient::BindAutoSnapshotPolicyOutcomeCallable CbsClient::BindAutoSnapshotPolicyCallable(const BindAutoSnapshotPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<BindAutoSnapshotPolicyOutcome>>();
    BindAutoSnapshotPolicyAsync(
    request,
    [prom](
        const CbsClient*,
        const BindAutoSnapshotPolicyRequest&,
        BindAutoSnapshotPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CbsClient::CopyAutoSnapshotPolicyCrossAccountOutcome CbsClient::CopyAutoSnapshotPolicyCrossAccount(const CopyAutoSnapshotPolicyCrossAccountRequest &request)
{
    auto outcome = MakeRequest(request, "CopyAutoSnapshotPolicyCrossAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CopyAutoSnapshotPolicyCrossAccountResponse rsp = CopyAutoSnapshotPolicyCrossAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CopyAutoSnapshotPolicyCrossAccountOutcome(rsp);
        else
            return CopyAutoSnapshotPolicyCrossAccountOutcome(o.GetError());
    }
    else
    {
        return CopyAutoSnapshotPolicyCrossAccountOutcome(outcome.GetError());
    }
}

void CbsClient::CopyAutoSnapshotPolicyCrossAccountAsync(const CopyAutoSnapshotPolicyCrossAccountRequest& request, const CopyAutoSnapshotPolicyCrossAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CopyAutoSnapshotPolicyCrossAccountRequest&;
    using Resp = CopyAutoSnapshotPolicyCrossAccountResponse;

    DoRequestAsync<Req, Resp>(
        "CopyAutoSnapshotPolicyCrossAccount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CbsClient::CopyAutoSnapshotPolicyCrossAccountOutcomeCallable CbsClient::CopyAutoSnapshotPolicyCrossAccountCallable(const CopyAutoSnapshotPolicyCrossAccountRequest &request)
{
    const auto prom = std::make_shared<std::promise<CopyAutoSnapshotPolicyCrossAccountOutcome>>();
    CopyAutoSnapshotPolicyCrossAccountAsync(
    request,
    [prom](
        const CbsClient*,
        const CopyAutoSnapshotPolicyCrossAccountRequest&,
        CopyAutoSnapshotPolicyCrossAccountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CbsClient::CopySnapshotCrossRegionsOutcome CbsClient::CopySnapshotCrossRegions(const CopySnapshotCrossRegionsRequest &request)
{
    auto outcome = MakeRequest(request, "CopySnapshotCrossRegions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CopySnapshotCrossRegionsResponse rsp = CopySnapshotCrossRegionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CopySnapshotCrossRegionsOutcome(rsp);
        else
            return CopySnapshotCrossRegionsOutcome(o.GetError());
    }
    else
    {
        return CopySnapshotCrossRegionsOutcome(outcome.GetError());
    }
}

void CbsClient::CopySnapshotCrossRegionsAsync(const CopySnapshotCrossRegionsRequest& request, const CopySnapshotCrossRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CopySnapshotCrossRegionsRequest&;
    using Resp = CopySnapshotCrossRegionsResponse;

    DoRequestAsync<Req, Resp>(
        "CopySnapshotCrossRegions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CbsClient::CopySnapshotCrossRegionsOutcomeCallable CbsClient::CopySnapshotCrossRegionsCallable(const CopySnapshotCrossRegionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<CopySnapshotCrossRegionsOutcome>>();
    CopySnapshotCrossRegionsAsync(
    request,
    [prom](
        const CbsClient*,
        const CopySnapshotCrossRegionsRequest&,
        CopySnapshotCrossRegionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CbsClient::CreateAutoSnapshotPolicyOutcome CbsClient::CreateAutoSnapshotPolicy(const CreateAutoSnapshotPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAutoSnapshotPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAutoSnapshotPolicyResponse rsp = CreateAutoSnapshotPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAutoSnapshotPolicyOutcome(rsp);
        else
            return CreateAutoSnapshotPolicyOutcome(o.GetError());
    }
    else
    {
        return CreateAutoSnapshotPolicyOutcome(outcome.GetError());
    }
}

void CbsClient::CreateAutoSnapshotPolicyAsync(const CreateAutoSnapshotPolicyRequest& request, const CreateAutoSnapshotPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAutoSnapshotPolicyRequest&;
    using Resp = CreateAutoSnapshotPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAutoSnapshotPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CbsClient::CreateAutoSnapshotPolicyOutcomeCallable CbsClient::CreateAutoSnapshotPolicyCallable(const CreateAutoSnapshotPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAutoSnapshotPolicyOutcome>>();
    CreateAutoSnapshotPolicyAsync(
    request,
    [prom](
        const CbsClient*,
        const CreateAutoSnapshotPolicyRequest&,
        CreateAutoSnapshotPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CbsClient::CreateDiskBackupOutcome CbsClient::CreateDiskBackup(const CreateDiskBackupRequest &request)
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

void CbsClient::CreateDiskBackupAsync(const CreateDiskBackupRequest& request, const CreateDiskBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CbsClient::CreateDiskBackupOutcomeCallable CbsClient::CreateDiskBackupCallable(const CreateDiskBackupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDiskBackupOutcome>>();
    CreateDiskBackupAsync(
    request,
    [prom](
        const CbsClient*,
        const CreateDiskBackupRequest&,
        CreateDiskBackupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CbsClient::CreateDisksOutcome CbsClient::CreateDisks(const CreateDisksRequest &request)
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

void CbsClient::CreateDisksAsync(const CreateDisksRequest& request, const CreateDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CbsClient::CreateDisksOutcomeCallable CbsClient::CreateDisksCallable(const CreateDisksRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDisksOutcome>>();
    CreateDisksAsync(
    request,
    [prom](
        const CbsClient*,
        const CreateDisksRequest&,
        CreateDisksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CbsClient::CreateSnapshotOutcome CbsClient::CreateSnapshot(const CreateSnapshotRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSnapshot");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSnapshotResponse rsp = CreateSnapshotResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSnapshotOutcome(rsp);
        else
            return CreateSnapshotOutcome(o.GetError());
    }
    else
    {
        return CreateSnapshotOutcome(outcome.GetError());
    }
}

void CbsClient::CreateSnapshotAsync(const CreateSnapshotRequest& request, const CreateSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSnapshotRequest&;
    using Resp = CreateSnapshotResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSnapshot", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CbsClient::CreateSnapshotOutcomeCallable CbsClient::CreateSnapshotCallable(const CreateSnapshotRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSnapshotOutcome>>();
    CreateSnapshotAsync(
    request,
    [prom](
        const CbsClient*,
        const CreateSnapshotRequest&,
        CreateSnapshotOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CbsClient::CreateSnapshotGroupOutcome CbsClient::CreateSnapshotGroup(const CreateSnapshotGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSnapshotGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSnapshotGroupResponse rsp = CreateSnapshotGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSnapshotGroupOutcome(rsp);
        else
            return CreateSnapshotGroupOutcome(o.GetError());
    }
    else
    {
        return CreateSnapshotGroupOutcome(outcome.GetError());
    }
}

void CbsClient::CreateSnapshotGroupAsync(const CreateSnapshotGroupRequest& request, const CreateSnapshotGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSnapshotGroupRequest&;
    using Resp = CreateSnapshotGroupResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSnapshotGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CbsClient::CreateSnapshotGroupOutcomeCallable CbsClient::CreateSnapshotGroupCallable(const CreateSnapshotGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSnapshotGroupOutcome>>();
    CreateSnapshotGroupAsync(
    request,
    [prom](
        const CbsClient*,
        const CreateSnapshotGroupRequest&,
        CreateSnapshotGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CbsClient::DeleteAutoSnapshotPoliciesOutcome CbsClient::DeleteAutoSnapshotPolicies(const DeleteAutoSnapshotPoliciesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAutoSnapshotPolicies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAutoSnapshotPoliciesResponse rsp = DeleteAutoSnapshotPoliciesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAutoSnapshotPoliciesOutcome(rsp);
        else
            return DeleteAutoSnapshotPoliciesOutcome(o.GetError());
    }
    else
    {
        return DeleteAutoSnapshotPoliciesOutcome(outcome.GetError());
    }
}

void CbsClient::DeleteAutoSnapshotPoliciesAsync(const DeleteAutoSnapshotPoliciesRequest& request, const DeleteAutoSnapshotPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAutoSnapshotPoliciesRequest&;
    using Resp = DeleteAutoSnapshotPoliciesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAutoSnapshotPolicies", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CbsClient::DeleteAutoSnapshotPoliciesOutcomeCallable CbsClient::DeleteAutoSnapshotPoliciesCallable(const DeleteAutoSnapshotPoliciesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAutoSnapshotPoliciesOutcome>>();
    DeleteAutoSnapshotPoliciesAsync(
    request,
    [prom](
        const CbsClient*,
        const DeleteAutoSnapshotPoliciesRequest&,
        DeleteAutoSnapshotPoliciesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CbsClient::DeleteDiskBackupsOutcome CbsClient::DeleteDiskBackups(const DeleteDiskBackupsRequest &request)
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

void CbsClient::DeleteDiskBackupsAsync(const DeleteDiskBackupsRequest& request, const DeleteDiskBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CbsClient::DeleteDiskBackupsOutcomeCallable CbsClient::DeleteDiskBackupsCallable(const DeleteDiskBackupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDiskBackupsOutcome>>();
    DeleteDiskBackupsAsync(
    request,
    [prom](
        const CbsClient*,
        const DeleteDiskBackupsRequest&,
        DeleteDiskBackupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CbsClient::DeleteSnapshotGroupOutcome CbsClient::DeleteSnapshotGroup(const DeleteSnapshotGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSnapshotGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSnapshotGroupResponse rsp = DeleteSnapshotGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSnapshotGroupOutcome(rsp);
        else
            return DeleteSnapshotGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteSnapshotGroupOutcome(outcome.GetError());
    }
}

void CbsClient::DeleteSnapshotGroupAsync(const DeleteSnapshotGroupRequest& request, const DeleteSnapshotGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteSnapshotGroupRequest&;
    using Resp = DeleteSnapshotGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteSnapshotGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CbsClient::DeleteSnapshotGroupOutcomeCallable CbsClient::DeleteSnapshotGroupCallable(const DeleteSnapshotGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteSnapshotGroupOutcome>>();
    DeleteSnapshotGroupAsync(
    request,
    [prom](
        const CbsClient*,
        const DeleteSnapshotGroupRequest&,
        DeleteSnapshotGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CbsClient::DeleteSnapshotsOutcome CbsClient::DeleteSnapshots(const DeleteSnapshotsRequest &request)
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

void CbsClient::DeleteSnapshotsAsync(const DeleteSnapshotsRequest& request, const DeleteSnapshotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CbsClient::DeleteSnapshotsOutcomeCallable CbsClient::DeleteSnapshotsCallable(const DeleteSnapshotsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteSnapshotsOutcome>>();
    DeleteSnapshotsAsync(
    request,
    [prom](
        const CbsClient*,
        const DeleteSnapshotsRequest&,
        DeleteSnapshotsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CbsClient::DescribeAutoSnapshotPoliciesOutcome CbsClient::DescribeAutoSnapshotPolicies(const DescribeAutoSnapshotPoliciesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAutoSnapshotPolicies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAutoSnapshotPoliciesResponse rsp = DescribeAutoSnapshotPoliciesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAutoSnapshotPoliciesOutcome(rsp);
        else
            return DescribeAutoSnapshotPoliciesOutcome(o.GetError());
    }
    else
    {
        return DescribeAutoSnapshotPoliciesOutcome(outcome.GetError());
    }
}

void CbsClient::DescribeAutoSnapshotPoliciesAsync(const DescribeAutoSnapshotPoliciesRequest& request, const DescribeAutoSnapshotPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAutoSnapshotPoliciesRequest&;
    using Resp = DescribeAutoSnapshotPoliciesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAutoSnapshotPolicies", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CbsClient::DescribeAutoSnapshotPoliciesOutcomeCallable CbsClient::DescribeAutoSnapshotPoliciesCallable(const DescribeAutoSnapshotPoliciesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAutoSnapshotPoliciesOutcome>>();
    DescribeAutoSnapshotPoliciesAsync(
    request,
    [prom](
        const CbsClient*,
        const DescribeAutoSnapshotPoliciesRequest&,
        DescribeAutoSnapshotPoliciesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CbsClient::DescribeDiskAssociatedAutoSnapshotPolicyOutcome CbsClient::DescribeDiskAssociatedAutoSnapshotPolicy(const DescribeDiskAssociatedAutoSnapshotPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDiskAssociatedAutoSnapshotPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDiskAssociatedAutoSnapshotPolicyResponse rsp = DescribeDiskAssociatedAutoSnapshotPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDiskAssociatedAutoSnapshotPolicyOutcome(rsp);
        else
            return DescribeDiskAssociatedAutoSnapshotPolicyOutcome(o.GetError());
    }
    else
    {
        return DescribeDiskAssociatedAutoSnapshotPolicyOutcome(outcome.GetError());
    }
}

void CbsClient::DescribeDiskAssociatedAutoSnapshotPolicyAsync(const DescribeDiskAssociatedAutoSnapshotPolicyRequest& request, const DescribeDiskAssociatedAutoSnapshotPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDiskAssociatedAutoSnapshotPolicyRequest&;
    using Resp = DescribeDiskAssociatedAutoSnapshotPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDiskAssociatedAutoSnapshotPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CbsClient::DescribeDiskAssociatedAutoSnapshotPolicyOutcomeCallable CbsClient::DescribeDiskAssociatedAutoSnapshotPolicyCallable(const DescribeDiskAssociatedAutoSnapshotPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDiskAssociatedAutoSnapshotPolicyOutcome>>();
    DescribeDiskAssociatedAutoSnapshotPolicyAsync(
    request,
    [prom](
        const CbsClient*,
        const DescribeDiskAssociatedAutoSnapshotPolicyRequest&,
        DescribeDiskAssociatedAutoSnapshotPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CbsClient::DescribeDiskBackupsOutcome CbsClient::DescribeDiskBackups(const DescribeDiskBackupsRequest &request)
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

void CbsClient::DescribeDiskBackupsAsync(const DescribeDiskBackupsRequest& request, const DescribeDiskBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CbsClient::DescribeDiskBackupsOutcomeCallable CbsClient::DescribeDiskBackupsCallable(const DescribeDiskBackupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDiskBackupsOutcome>>();
    DescribeDiskBackupsAsync(
    request,
    [prom](
        const CbsClient*,
        const DescribeDiskBackupsRequest&,
        DescribeDiskBackupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CbsClient::DescribeDiskConfigQuotaOutcome CbsClient::DescribeDiskConfigQuota(const DescribeDiskConfigQuotaRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDiskConfigQuota");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDiskConfigQuotaResponse rsp = DescribeDiskConfigQuotaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDiskConfigQuotaOutcome(rsp);
        else
            return DescribeDiskConfigQuotaOutcome(o.GetError());
    }
    else
    {
        return DescribeDiskConfigQuotaOutcome(outcome.GetError());
    }
}

void CbsClient::DescribeDiskConfigQuotaAsync(const DescribeDiskConfigQuotaRequest& request, const DescribeDiskConfigQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDiskConfigQuotaRequest&;
    using Resp = DescribeDiskConfigQuotaResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDiskConfigQuota", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CbsClient::DescribeDiskConfigQuotaOutcomeCallable CbsClient::DescribeDiskConfigQuotaCallable(const DescribeDiskConfigQuotaRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDiskConfigQuotaOutcome>>();
    DescribeDiskConfigQuotaAsync(
    request,
    [prom](
        const CbsClient*,
        const DescribeDiskConfigQuotaRequest&,
        DescribeDiskConfigQuotaOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CbsClient::DescribeDiskStoragePoolOutcome CbsClient::DescribeDiskStoragePool(const DescribeDiskStoragePoolRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDiskStoragePool");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDiskStoragePoolResponse rsp = DescribeDiskStoragePoolResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDiskStoragePoolOutcome(rsp);
        else
            return DescribeDiskStoragePoolOutcome(o.GetError());
    }
    else
    {
        return DescribeDiskStoragePoolOutcome(outcome.GetError());
    }
}

void CbsClient::DescribeDiskStoragePoolAsync(const DescribeDiskStoragePoolRequest& request, const DescribeDiskStoragePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDiskStoragePoolRequest&;
    using Resp = DescribeDiskStoragePoolResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDiskStoragePool", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CbsClient::DescribeDiskStoragePoolOutcomeCallable CbsClient::DescribeDiskStoragePoolCallable(const DescribeDiskStoragePoolRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDiskStoragePoolOutcome>>();
    DescribeDiskStoragePoolAsync(
    request,
    [prom](
        const CbsClient*,
        const DescribeDiskStoragePoolRequest&,
        DescribeDiskStoragePoolOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CbsClient::DescribeDisksOutcome CbsClient::DescribeDisks(const DescribeDisksRequest &request)
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

void CbsClient::DescribeDisksAsync(const DescribeDisksRequest& request, const DescribeDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CbsClient::DescribeDisksOutcomeCallable CbsClient::DescribeDisksCallable(const DescribeDisksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDisksOutcome>>();
    DescribeDisksAsync(
    request,
    [prom](
        const CbsClient*,
        const DescribeDisksRequest&,
        DescribeDisksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CbsClient::DescribeInstancesDiskNumOutcome CbsClient::DescribeInstancesDiskNum(const DescribeInstancesDiskNumRequest &request)
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

void CbsClient::DescribeInstancesDiskNumAsync(const DescribeInstancesDiskNumRequest& request, const DescribeInstancesDiskNumAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CbsClient::DescribeInstancesDiskNumOutcomeCallable CbsClient::DescribeInstancesDiskNumCallable(const DescribeInstancesDiskNumRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstancesDiskNumOutcome>>();
    DescribeInstancesDiskNumAsync(
    request,
    [prom](
        const CbsClient*,
        const DescribeInstancesDiskNumRequest&,
        DescribeInstancesDiskNumOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CbsClient::DescribeSnapshotGroupsOutcome CbsClient::DescribeSnapshotGroups(const DescribeSnapshotGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSnapshotGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSnapshotGroupsResponse rsp = DescribeSnapshotGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSnapshotGroupsOutcome(rsp);
        else
            return DescribeSnapshotGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeSnapshotGroupsOutcome(outcome.GetError());
    }
}

void CbsClient::DescribeSnapshotGroupsAsync(const DescribeSnapshotGroupsRequest& request, const DescribeSnapshotGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSnapshotGroupsRequest&;
    using Resp = DescribeSnapshotGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSnapshotGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CbsClient::DescribeSnapshotGroupsOutcomeCallable CbsClient::DescribeSnapshotGroupsCallable(const DescribeSnapshotGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSnapshotGroupsOutcome>>();
    DescribeSnapshotGroupsAsync(
    request,
    [prom](
        const CbsClient*,
        const DescribeSnapshotGroupsRequest&,
        DescribeSnapshotGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CbsClient::DescribeSnapshotOverviewOutcome CbsClient::DescribeSnapshotOverview(const DescribeSnapshotOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSnapshotOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSnapshotOverviewResponse rsp = DescribeSnapshotOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSnapshotOverviewOutcome(rsp);
        else
            return DescribeSnapshotOverviewOutcome(o.GetError());
    }
    else
    {
        return DescribeSnapshotOverviewOutcome(outcome.GetError());
    }
}

void CbsClient::DescribeSnapshotOverviewAsync(const DescribeSnapshotOverviewRequest& request, const DescribeSnapshotOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSnapshotOverviewRequest&;
    using Resp = DescribeSnapshotOverviewResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSnapshotOverview", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CbsClient::DescribeSnapshotOverviewOutcomeCallable CbsClient::DescribeSnapshotOverviewCallable(const DescribeSnapshotOverviewRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSnapshotOverviewOutcome>>();
    DescribeSnapshotOverviewAsync(
    request,
    [prom](
        const CbsClient*,
        const DescribeSnapshotOverviewRequest&,
        DescribeSnapshotOverviewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CbsClient::DescribeSnapshotSharePermissionOutcome CbsClient::DescribeSnapshotSharePermission(const DescribeSnapshotSharePermissionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSnapshotSharePermission");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSnapshotSharePermissionResponse rsp = DescribeSnapshotSharePermissionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSnapshotSharePermissionOutcome(rsp);
        else
            return DescribeSnapshotSharePermissionOutcome(o.GetError());
    }
    else
    {
        return DescribeSnapshotSharePermissionOutcome(outcome.GetError());
    }
}

void CbsClient::DescribeSnapshotSharePermissionAsync(const DescribeSnapshotSharePermissionRequest& request, const DescribeSnapshotSharePermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSnapshotSharePermissionRequest&;
    using Resp = DescribeSnapshotSharePermissionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSnapshotSharePermission", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CbsClient::DescribeSnapshotSharePermissionOutcomeCallable CbsClient::DescribeSnapshotSharePermissionCallable(const DescribeSnapshotSharePermissionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSnapshotSharePermissionOutcome>>();
    DescribeSnapshotSharePermissionAsync(
    request,
    [prom](
        const CbsClient*,
        const DescribeSnapshotSharePermissionRequest&,
        DescribeSnapshotSharePermissionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CbsClient::DescribeSnapshotsOutcome CbsClient::DescribeSnapshots(const DescribeSnapshotsRequest &request)
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

void CbsClient::DescribeSnapshotsAsync(const DescribeSnapshotsRequest& request, const DescribeSnapshotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CbsClient::DescribeSnapshotsOutcomeCallable CbsClient::DescribeSnapshotsCallable(const DescribeSnapshotsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSnapshotsOutcome>>();
    DescribeSnapshotsAsync(
    request,
    [prom](
        const CbsClient*,
        const DescribeSnapshotsRequest&,
        DescribeSnapshotsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CbsClient::DetachDisksOutcome CbsClient::DetachDisks(const DetachDisksRequest &request)
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

void CbsClient::DetachDisksAsync(const DetachDisksRequest& request, const DetachDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CbsClient::DetachDisksOutcomeCallable CbsClient::DetachDisksCallable(const DetachDisksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DetachDisksOutcome>>();
    DetachDisksAsync(
    request,
    [prom](
        const CbsClient*,
        const DetachDisksRequest&,
        DetachDisksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CbsClient::GetSnapOverviewOutcome CbsClient::GetSnapOverview(const GetSnapOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "GetSnapOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetSnapOverviewResponse rsp = GetSnapOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetSnapOverviewOutcome(rsp);
        else
            return GetSnapOverviewOutcome(o.GetError());
    }
    else
    {
        return GetSnapOverviewOutcome(outcome.GetError());
    }
}

void CbsClient::GetSnapOverviewAsync(const GetSnapOverviewRequest& request, const GetSnapOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetSnapOverviewRequest&;
    using Resp = GetSnapOverviewResponse;

    DoRequestAsync<Req, Resp>(
        "GetSnapOverview", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CbsClient::GetSnapOverviewOutcomeCallable CbsClient::GetSnapOverviewCallable(const GetSnapOverviewRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetSnapOverviewOutcome>>();
    GetSnapOverviewAsync(
    request,
    [prom](
        const CbsClient*,
        const GetSnapOverviewRequest&,
        GetSnapOverviewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CbsClient::InitializeDisksOutcome CbsClient::InitializeDisks(const InitializeDisksRequest &request)
{
    auto outcome = MakeRequest(request, "InitializeDisks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InitializeDisksResponse rsp = InitializeDisksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InitializeDisksOutcome(rsp);
        else
            return InitializeDisksOutcome(o.GetError());
    }
    else
    {
        return InitializeDisksOutcome(outcome.GetError());
    }
}

void CbsClient::InitializeDisksAsync(const InitializeDisksRequest& request, const InitializeDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const InitializeDisksRequest&;
    using Resp = InitializeDisksResponse;

    DoRequestAsync<Req, Resp>(
        "InitializeDisks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CbsClient::InitializeDisksOutcomeCallable CbsClient::InitializeDisksCallable(const InitializeDisksRequest &request)
{
    const auto prom = std::make_shared<std::promise<InitializeDisksOutcome>>();
    InitializeDisksAsync(
    request,
    [prom](
        const CbsClient*,
        const InitializeDisksRequest&,
        InitializeDisksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CbsClient::InquirePriceModifyDiskBackupQuotaOutcome CbsClient::InquirePriceModifyDiskBackupQuota(const InquirePriceModifyDiskBackupQuotaRequest &request)
{
    auto outcome = MakeRequest(request, "InquirePriceModifyDiskBackupQuota");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquirePriceModifyDiskBackupQuotaResponse rsp = InquirePriceModifyDiskBackupQuotaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquirePriceModifyDiskBackupQuotaOutcome(rsp);
        else
            return InquirePriceModifyDiskBackupQuotaOutcome(o.GetError());
    }
    else
    {
        return InquirePriceModifyDiskBackupQuotaOutcome(outcome.GetError());
    }
}

void CbsClient::InquirePriceModifyDiskBackupQuotaAsync(const InquirePriceModifyDiskBackupQuotaRequest& request, const InquirePriceModifyDiskBackupQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const InquirePriceModifyDiskBackupQuotaRequest&;
    using Resp = InquirePriceModifyDiskBackupQuotaResponse;

    DoRequestAsync<Req, Resp>(
        "InquirePriceModifyDiskBackupQuota", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CbsClient::InquirePriceModifyDiskBackupQuotaOutcomeCallable CbsClient::InquirePriceModifyDiskBackupQuotaCallable(const InquirePriceModifyDiskBackupQuotaRequest &request)
{
    const auto prom = std::make_shared<std::promise<InquirePriceModifyDiskBackupQuotaOutcome>>();
    InquirePriceModifyDiskBackupQuotaAsync(
    request,
    [prom](
        const CbsClient*,
        const InquirePriceModifyDiskBackupQuotaRequest&,
        InquirePriceModifyDiskBackupQuotaOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CbsClient::InquirePriceModifyDiskExtraPerformanceOutcome CbsClient::InquirePriceModifyDiskExtraPerformance(const InquirePriceModifyDiskExtraPerformanceRequest &request)
{
    auto outcome = MakeRequest(request, "InquirePriceModifyDiskExtraPerformance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquirePriceModifyDiskExtraPerformanceResponse rsp = InquirePriceModifyDiskExtraPerformanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquirePriceModifyDiskExtraPerformanceOutcome(rsp);
        else
            return InquirePriceModifyDiskExtraPerformanceOutcome(o.GetError());
    }
    else
    {
        return InquirePriceModifyDiskExtraPerformanceOutcome(outcome.GetError());
    }
}

void CbsClient::InquirePriceModifyDiskExtraPerformanceAsync(const InquirePriceModifyDiskExtraPerformanceRequest& request, const InquirePriceModifyDiskExtraPerformanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const InquirePriceModifyDiskExtraPerformanceRequest&;
    using Resp = InquirePriceModifyDiskExtraPerformanceResponse;

    DoRequestAsync<Req, Resp>(
        "InquirePriceModifyDiskExtraPerformance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CbsClient::InquirePriceModifyDiskExtraPerformanceOutcomeCallable CbsClient::InquirePriceModifyDiskExtraPerformanceCallable(const InquirePriceModifyDiskExtraPerformanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<InquirePriceModifyDiskExtraPerformanceOutcome>>();
    InquirePriceModifyDiskExtraPerformanceAsync(
    request,
    [prom](
        const CbsClient*,
        const InquirePriceModifyDiskExtraPerformanceRequest&,
        InquirePriceModifyDiskExtraPerformanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CbsClient::InquiryPriceCreateDisksOutcome CbsClient::InquiryPriceCreateDisks(const InquiryPriceCreateDisksRequest &request)
{
    auto outcome = MakeRequest(request, "InquiryPriceCreateDisks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquiryPriceCreateDisksResponse rsp = InquiryPriceCreateDisksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquiryPriceCreateDisksOutcome(rsp);
        else
            return InquiryPriceCreateDisksOutcome(o.GetError());
    }
    else
    {
        return InquiryPriceCreateDisksOutcome(outcome.GetError());
    }
}

void CbsClient::InquiryPriceCreateDisksAsync(const InquiryPriceCreateDisksRequest& request, const InquiryPriceCreateDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const InquiryPriceCreateDisksRequest&;
    using Resp = InquiryPriceCreateDisksResponse;

    DoRequestAsync<Req, Resp>(
        "InquiryPriceCreateDisks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CbsClient::InquiryPriceCreateDisksOutcomeCallable CbsClient::InquiryPriceCreateDisksCallable(const InquiryPriceCreateDisksRequest &request)
{
    const auto prom = std::make_shared<std::promise<InquiryPriceCreateDisksOutcome>>();
    InquiryPriceCreateDisksAsync(
    request,
    [prom](
        const CbsClient*,
        const InquiryPriceCreateDisksRequest&,
        InquiryPriceCreateDisksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CbsClient::InquiryPriceRenewDisksOutcome CbsClient::InquiryPriceRenewDisks(const InquiryPriceRenewDisksRequest &request)
{
    auto outcome = MakeRequest(request, "InquiryPriceRenewDisks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquiryPriceRenewDisksResponse rsp = InquiryPriceRenewDisksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquiryPriceRenewDisksOutcome(rsp);
        else
            return InquiryPriceRenewDisksOutcome(o.GetError());
    }
    else
    {
        return InquiryPriceRenewDisksOutcome(outcome.GetError());
    }
}

void CbsClient::InquiryPriceRenewDisksAsync(const InquiryPriceRenewDisksRequest& request, const InquiryPriceRenewDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const InquiryPriceRenewDisksRequest&;
    using Resp = InquiryPriceRenewDisksResponse;

    DoRequestAsync<Req, Resp>(
        "InquiryPriceRenewDisks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CbsClient::InquiryPriceRenewDisksOutcomeCallable CbsClient::InquiryPriceRenewDisksCallable(const InquiryPriceRenewDisksRequest &request)
{
    const auto prom = std::make_shared<std::promise<InquiryPriceRenewDisksOutcome>>();
    InquiryPriceRenewDisksAsync(
    request,
    [prom](
        const CbsClient*,
        const InquiryPriceRenewDisksRequest&,
        InquiryPriceRenewDisksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CbsClient::InquiryPriceResizeDiskOutcome CbsClient::InquiryPriceResizeDisk(const InquiryPriceResizeDiskRequest &request)
{
    auto outcome = MakeRequest(request, "InquiryPriceResizeDisk");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquiryPriceResizeDiskResponse rsp = InquiryPriceResizeDiskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquiryPriceResizeDiskOutcome(rsp);
        else
            return InquiryPriceResizeDiskOutcome(o.GetError());
    }
    else
    {
        return InquiryPriceResizeDiskOutcome(outcome.GetError());
    }
}

void CbsClient::InquiryPriceResizeDiskAsync(const InquiryPriceResizeDiskRequest& request, const InquiryPriceResizeDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const InquiryPriceResizeDiskRequest&;
    using Resp = InquiryPriceResizeDiskResponse;

    DoRequestAsync<Req, Resp>(
        "InquiryPriceResizeDisk", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CbsClient::InquiryPriceResizeDiskOutcomeCallable CbsClient::InquiryPriceResizeDiskCallable(const InquiryPriceResizeDiskRequest &request)
{
    const auto prom = std::make_shared<std::promise<InquiryPriceResizeDiskOutcome>>();
    InquiryPriceResizeDiskAsync(
    request,
    [prom](
        const CbsClient*,
        const InquiryPriceResizeDiskRequest&,
        InquiryPriceResizeDiskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CbsClient::ModifyAutoSnapshotPolicyAttributeOutcome CbsClient::ModifyAutoSnapshotPolicyAttribute(const ModifyAutoSnapshotPolicyAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAutoSnapshotPolicyAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAutoSnapshotPolicyAttributeResponse rsp = ModifyAutoSnapshotPolicyAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAutoSnapshotPolicyAttributeOutcome(rsp);
        else
            return ModifyAutoSnapshotPolicyAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyAutoSnapshotPolicyAttributeOutcome(outcome.GetError());
    }
}

void CbsClient::ModifyAutoSnapshotPolicyAttributeAsync(const ModifyAutoSnapshotPolicyAttributeRequest& request, const ModifyAutoSnapshotPolicyAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAutoSnapshotPolicyAttributeRequest&;
    using Resp = ModifyAutoSnapshotPolicyAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAutoSnapshotPolicyAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CbsClient::ModifyAutoSnapshotPolicyAttributeOutcomeCallable CbsClient::ModifyAutoSnapshotPolicyAttributeCallable(const ModifyAutoSnapshotPolicyAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAutoSnapshotPolicyAttributeOutcome>>();
    ModifyAutoSnapshotPolicyAttributeAsync(
    request,
    [prom](
        const CbsClient*,
        const ModifyAutoSnapshotPolicyAttributeRequest&,
        ModifyAutoSnapshotPolicyAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CbsClient::ModifyDiskAttributesOutcome CbsClient::ModifyDiskAttributes(const ModifyDiskAttributesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDiskAttributes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDiskAttributesResponse rsp = ModifyDiskAttributesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDiskAttributesOutcome(rsp);
        else
            return ModifyDiskAttributesOutcome(o.GetError());
    }
    else
    {
        return ModifyDiskAttributesOutcome(outcome.GetError());
    }
}

void CbsClient::ModifyDiskAttributesAsync(const ModifyDiskAttributesRequest& request, const ModifyDiskAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDiskAttributesRequest&;
    using Resp = ModifyDiskAttributesResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDiskAttributes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CbsClient::ModifyDiskAttributesOutcomeCallable CbsClient::ModifyDiskAttributesCallable(const ModifyDiskAttributesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDiskAttributesOutcome>>();
    ModifyDiskAttributesAsync(
    request,
    [prom](
        const CbsClient*,
        const ModifyDiskAttributesRequest&,
        ModifyDiskAttributesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CbsClient::ModifyDiskBackupQuotaOutcome CbsClient::ModifyDiskBackupQuota(const ModifyDiskBackupQuotaRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDiskBackupQuota");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDiskBackupQuotaResponse rsp = ModifyDiskBackupQuotaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDiskBackupQuotaOutcome(rsp);
        else
            return ModifyDiskBackupQuotaOutcome(o.GetError());
    }
    else
    {
        return ModifyDiskBackupQuotaOutcome(outcome.GetError());
    }
}

void CbsClient::ModifyDiskBackupQuotaAsync(const ModifyDiskBackupQuotaRequest& request, const ModifyDiskBackupQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDiskBackupQuotaRequest&;
    using Resp = ModifyDiskBackupQuotaResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDiskBackupQuota", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CbsClient::ModifyDiskBackupQuotaOutcomeCallable CbsClient::ModifyDiskBackupQuotaCallable(const ModifyDiskBackupQuotaRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDiskBackupQuotaOutcome>>();
    ModifyDiskBackupQuotaAsync(
    request,
    [prom](
        const CbsClient*,
        const ModifyDiskBackupQuotaRequest&,
        ModifyDiskBackupQuotaOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CbsClient::ModifyDiskExtraPerformanceOutcome CbsClient::ModifyDiskExtraPerformance(const ModifyDiskExtraPerformanceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDiskExtraPerformance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDiskExtraPerformanceResponse rsp = ModifyDiskExtraPerformanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDiskExtraPerformanceOutcome(rsp);
        else
            return ModifyDiskExtraPerformanceOutcome(o.GetError());
    }
    else
    {
        return ModifyDiskExtraPerformanceOutcome(outcome.GetError());
    }
}

void CbsClient::ModifyDiskExtraPerformanceAsync(const ModifyDiskExtraPerformanceRequest& request, const ModifyDiskExtraPerformanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDiskExtraPerformanceRequest&;
    using Resp = ModifyDiskExtraPerformanceResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDiskExtraPerformance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CbsClient::ModifyDiskExtraPerformanceOutcomeCallable CbsClient::ModifyDiskExtraPerformanceCallable(const ModifyDiskExtraPerformanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDiskExtraPerformanceOutcome>>();
    ModifyDiskExtraPerformanceAsync(
    request,
    [prom](
        const CbsClient*,
        const ModifyDiskExtraPerformanceRequest&,
        ModifyDiskExtraPerformanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CbsClient::ModifyDisksChargeTypeOutcome CbsClient::ModifyDisksChargeType(const ModifyDisksChargeTypeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDisksChargeType");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDisksChargeTypeResponse rsp = ModifyDisksChargeTypeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDisksChargeTypeOutcome(rsp);
        else
            return ModifyDisksChargeTypeOutcome(o.GetError());
    }
    else
    {
        return ModifyDisksChargeTypeOutcome(outcome.GetError());
    }
}

void CbsClient::ModifyDisksChargeTypeAsync(const ModifyDisksChargeTypeRequest& request, const ModifyDisksChargeTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDisksChargeTypeRequest&;
    using Resp = ModifyDisksChargeTypeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDisksChargeType", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CbsClient::ModifyDisksChargeTypeOutcomeCallable CbsClient::ModifyDisksChargeTypeCallable(const ModifyDisksChargeTypeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDisksChargeTypeOutcome>>();
    ModifyDisksChargeTypeAsync(
    request,
    [prom](
        const CbsClient*,
        const ModifyDisksChargeTypeRequest&,
        ModifyDisksChargeTypeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CbsClient::ModifyDisksRenewFlagOutcome CbsClient::ModifyDisksRenewFlag(const ModifyDisksRenewFlagRequest &request)
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

void CbsClient::ModifyDisksRenewFlagAsync(const ModifyDisksRenewFlagRequest& request, const ModifyDisksRenewFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CbsClient::ModifyDisksRenewFlagOutcomeCallable CbsClient::ModifyDisksRenewFlagCallable(const ModifyDisksRenewFlagRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDisksRenewFlagOutcome>>();
    ModifyDisksRenewFlagAsync(
    request,
    [prom](
        const CbsClient*,
        const ModifyDisksRenewFlagRequest&,
        ModifyDisksRenewFlagOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CbsClient::ModifySnapshotAttributeOutcome CbsClient::ModifySnapshotAttribute(const ModifySnapshotAttributeRequest &request)
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

void CbsClient::ModifySnapshotAttributeAsync(const ModifySnapshotAttributeRequest& request, const ModifySnapshotAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CbsClient::ModifySnapshotAttributeOutcomeCallable CbsClient::ModifySnapshotAttributeCallable(const ModifySnapshotAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySnapshotAttributeOutcome>>();
    ModifySnapshotAttributeAsync(
    request,
    [prom](
        const CbsClient*,
        const ModifySnapshotAttributeRequest&,
        ModifySnapshotAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CbsClient::ModifySnapshotsSharePermissionOutcome CbsClient::ModifySnapshotsSharePermission(const ModifySnapshotsSharePermissionRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySnapshotsSharePermission");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySnapshotsSharePermissionResponse rsp = ModifySnapshotsSharePermissionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySnapshotsSharePermissionOutcome(rsp);
        else
            return ModifySnapshotsSharePermissionOutcome(o.GetError());
    }
    else
    {
        return ModifySnapshotsSharePermissionOutcome(outcome.GetError());
    }
}

void CbsClient::ModifySnapshotsSharePermissionAsync(const ModifySnapshotsSharePermissionRequest& request, const ModifySnapshotsSharePermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifySnapshotsSharePermissionRequest&;
    using Resp = ModifySnapshotsSharePermissionResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySnapshotsSharePermission", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CbsClient::ModifySnapshotsSharePermissionOutcomeCallable CbsClient::ModifySnapshotsSharePermissionCallable(const ModifySnapshotsSharePermissionRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySnapshotsSharePermissionOutcome>>();
    ModifySnapshotsSharePermissionAsync(
    request,
    [prom](
        const CbsClient*,
        const ModifySnapshotsSharePermissionRequest&,
        ModifySnapshotsSharePermissionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CbsClient::RenewDiskOutcome CbsClient::RenewDisk(const RenewDiskRequest &request)
{
    auto outcome = MakeRequest(request, "RenewDisk");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RenewDiskResponse rsp = RenewDiskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RenewDiskOutcome(rsp);
        else
            return RenewDiskOutcome(o.GetError());
    }
    else
    {
        return RenewDiskOutcome(outcome.GetError());
    }
}

void CbsClient::RenewDiskAsync(const RenewDiskRequest& request, const RenewDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RenewDiskRequest&;
    using Resp = RenewDiskResponse;

    DoRequestAsync<Req, Resp>(
        "RenewDisk", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CbsClient::RenewDiskOutcomeCallable CbsClient::RenewDiskCallable(const RenewDiskRequest &request)
{
    const auto prom = std::make_shared<std::promise<RenewDiskOutcome>>();
    RenewDiskAsync(
    request,
    [prom](
        const CbsClient*,
        const RenewDiskRequest&,
        RenewDiskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CbsClient::ResizeDiskOutcome CbsClient::ResizeDisk(const ResizeDiskRequest &request)
{
    auto outcome = MakeRequest(request, "ResizeDisk");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResizeDiskResponse rsp = ResizeDiskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResizeDiskOutcome(rsp);
        else
            return ResizeDiskOutcome(o.GetError());
    }
    else
    {
        return ResizeDiskOutcome(outcome.GetError());
    }
}

void CbsClient::ResizeDiskAsync(const ResizeDiskRequest& request, const ResizeDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ResizeDiskRequest&;
    using Resp = ResizeDiskResponse;

    DoRequestAsync<Req, Resp>(
        "ResizeDisk", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CbsClient::ResizeDiskOutcomeCallable CbsClient::ResizeDiskCallable(const ResizeDiskRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResizeDiskOutcome>>();
    ResizeDiskAsync(
    request,
    [prom](
        const CbsClient*,
        const ResizeDiskRequest&,
        ResizeDiskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CbsClient::TerminateDisksOutcome CbsClient::TerminateDisks(const TerminateDisksRequest &request)
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

void CbsClient::TerminateDisksAsync(const TerminateDisksRequest& request, const TerminateDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CbsClient::TerminateDisksOutcomeCallable CbsClient::TerminateDisksCallable(const TerminateDisksRequest &request)
{
    const auto prom = std::make_shared<std::promise<TerminateDisksOutcome>>();
    TerminateDisksAsync(
    request,
    [prom](
        const CbsClient*,
        const TerminateDisksRequest&,
        TerminateDisksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CbsClient::UnbindAutoSnapshotPolicyOutcome CbsClient::UnbindAutoSnapshotPolicy(const UnbindAutoSnapshotPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "UnbindAutoSnapshotPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnbindAutoSnapshotPolicyResponse rsp = UnbindAutoSnapshotPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnbindAutoSnapshotPolicyOutcome(rsp);
        else
            return UnbindAutoSnapshotPolicyOutcome(o.GetError());
    }
    else
    {
        return UnbindAutoSnapshotPolicyOutcome(outcome.GetError());
    }
}

void CbsClient::UnbindAutoSnapshotPolicyAsync(const UnbindAutoSnapshotPolicyRequest& request, const UnbindAutoSnapshotPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UnbindAutoSnapshotPolicyRequest&;
    using Resp = UnbindAutoSnapshotPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "UnbindAutoSnapshotPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CbsClient::UnbindAutoSnapshotPolicyOutcomeCallable CbsClient::UnbindAutoSnapshotPolicyCallable(const UnbindAutoSnapshotPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<UnbindAutoSnapshotPolicyOutcome>>();
    UnbindAutoSnapshotPolicyAsync(
    request,
    [prom](
        const CbsClient*,
        const UnbindAutoSnapshotPolicyRequest&,
        UnbindAutoSnapshotPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


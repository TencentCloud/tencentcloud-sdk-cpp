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

#include <tencentcloud/dcdb/v20180411/DcdbClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Dcdb::V20180411;
using namespace TencentCloud::Dcdb::V20180411::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-04-11";
    const string ENDPOINT = "dcdb.tencentcloudapi.com";
}

DcdbClient::DcdbClient(const Credential &credential, const string &region) :
    DcdbClient(credential, region, ClientProfile())
{
}

DcdbClient::DcdbClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


DcdbClient::ActiveHourDCDBInstanceOutcome DcdbClient::ActiveHourDCDBInstance(const ActiveHourDCDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "ActiveHourDCDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ActiveHourDCDBInstanceResponse rsp = ActiveHourDCDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ActiveHourDCDBInstanceOutcome(rsp);
        else
            return ActiveHourDCDBInstanceOutcome(o.GetError());
    }
    else
    {
        return ActiveHourDCDBInstanceOutcome(outcome.GetError());
    }
}

void DcdbClient::ActiveHourDCDBInstanceAsync(const ActiveHourDCDBInstanceRequest& request, const ActiveHourDCDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ActiveHourDCDBInstanceRequest&;
    using Resp = ActiveHourDCDBInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "ActiveHourDCDBInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcdbClient::ActiveHourDCDBInstanceOutcomeCallable DcdbClient::ActiveHourDCDBInstanceCallable(const ActiveHourDCDBInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ActiveHourDCDBInstanceOutcome>>();
    ActiveHourDCDBInstanceAsync(
    request,
    [prom](
        const DcdbClient*,
        const ActiveHourDCDBInstanceRequest&,
        ActiveHourDCDBInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcdbClient::AssociateSecurityGroupsOutcome DcdbClient::AssociateSecurityGroups(const AssociateSecurityGroupsRequest &request)
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

void DcdbClient::AssociateSecurityGroupsAsync(const AssociateSecurityGroupsRequest& request, const AssociateSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

DcdbClient::AssociateSecurityGroupsOutcomeCallable DcdbClient::AssociateSecurityGroupsCallable(const AssociateSecurityGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<AssociateSecurityGroupsOutcome>>();
    AssociateSecurityGroupsAsync(
    request,
    [prom](
        const DcdbClient*,
        const AssociateSecurityGroupsRequest&,
        AssociateSecurityGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcdbClient::CancelDcnJobOutcome DcdbClient::CancelDcnJob(const CancelDcnJobRequest &request)
{
    auto outcome = MakeRequest(request, "CancelDcnJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CancelDcnJobResponse rsp = CancelDcnJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CancelDcnJobOutcome(rsp);
        else
            return CancelDcnJobOutcome(o.GetError());
    }
    else
    {
        return CancelDcnJobOutcome(outcome.GetError());
    }
}

void DcdbClient::CancelDcnJobAsync(const CancelDcnJobRequest& request, const CancelDcnJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CancelDcnJobRequest&;
    using Resp = CancelDcnJobResponse;

    DoRequestAsync<Req, Resp>(
        "CancelDcnJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcdbClient::CancelDcnJobOutcomeCallable DcdbClient::CancelDcnJobCallable(const CancelDcnJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<CancelDcnJobOutcome>>();
    CancelDcnJobAsync(
    request,
    [prom](
        const DcdbClient*,
        const CancelDcnJobRequest&,
        CancelDcnJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcdbClient::CancelOnlineDDLJobOutcome DcdbClient::CancelOnlineDDLJob(const CancelOnlineDDLJobRequest &request)
{
    auto outcome = MakeRequest(request, "CancelOnlineDDLJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CancelOnlineDDLJobResponse rsp = CancelOnlineDDLJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CancelOnlineDDLJobOutcome(rsp);
        else
            return CancelOnlineDDLJobOutcome(o.GetError());
    }
    else
    {
        return CancelOnlineDDLJobOutcome(outcome.GetError());
    }
}

void DcdbClient::CancelOnlineDDLJobAsync(const CancelOnlineDDLJobRequest& request, const CancelOnlineDDLJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CancelOnlineDDLJobRequest&;
    using Resp = CancelOnlineDDLJobResponse;

    DoRequestAsync<Req, Resp>(
        "CancelOnlineDDLJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcdbClient::CancelOnlineDDLJobOutcomeCallable DcdbClient::CancelOnlineDDLJobCallable(const CancelOnlineDDLJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<CancelOnlineDDLJobOutcome>>();
    CancelOnlineDDLJobAsync(
    request,
    [prom](
        const DcdbClient*,
        const CancelOnlineDDLJobRequest&,
        CancelOnlineDDLJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcdbClient::CloneAccountOutcome DcdbClient::CloneAccount(const CloneAccountRequest &request)
{
    auto outcome = MakeRequest(request, "CloneAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CloneAccountResponse rsp = CloneAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CloneAccountOutcome(rsp);
        else
            return CloneAccountOutcome(o.GetError());
    }
    else
    {
        return CloneAccountOutcome(outcome.GetError());
    }
}

void DcdbClient::CloneAccountAsync(const CloneAccountRequest& request, const CloneAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CloneAccountRequest&;
    using Resp = CloneAccountResponse;

    DoRequestAsync<Req, Resp>(
        "CloneAccount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcdbClient::CloneAccountOutcomeCallable DcdbClient::CloneAccountCallable(const CloneAccountRequest &request)
{
    const auto prom = std::make_shared<std::promise<CloneAccountOutcome>>();
    CloneAccountAsync(
    request,
    [prom](
        const DcdbClient*,
        const CloneAccountRequest&,
        CloneAccountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcdbClient::CloseDBExtranetAccessOutcome DcdbClient::CloseDBExtranetAccess(const CloseDBExtranetAccessRequest &request)
{
    auto outcome = MakeRequest(request, "CloseDBExtranetAccess");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CloseDBExtranetAccessResponse rsp = CloseDBExtranetAccessResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CloseDBExtranetAccessOutcome(rsp);
        else
            return CloseDBExtranetAccessOutcome(o.GetError());
    }
    else
    {
        return CloseDBExtranetAccessOutcome(outcome.GetError());
    }
}

void DcdbClient::CloseDBExtranetAccessAsync(const CloseDBExtranetAccessRequest& request, const CloseDBExtranetAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CloseDBExtranetAccessRequest&;
    using Resp = CloseDBExtranetAccessResponse;

    DoRequestAsync<Req, Resp>(
        "CloseDBExtranetAccess", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcdbClient::CloseDBExtranetAccessOutcomeCallable DcdbClient::CloseDBExtranetAccessCallable(const CloseDBExtranetAccessRequest &request)
{
    const auto prom = std::make_shared<std::promise<CloseDBExtranetAccessOutcome>>();
    CloseDBExtranetAccessAsync(
    request,
    [prom](
        const DcdbClient*,
        const CloseDBExtranetAccessRequest&,
        CloseDBExtranetAccessOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcdbClient::CopyAccountPrivilegesOutcome DcdbClient::CopyAccountPrivileges(const CopyAccountPrivilegesRequest &request)
{
    auto outcome = MakeRequest(request, "CopyAccountPrivileges");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CopyAccountPrivilegesResponse rsp = CopyAccountPrivilegesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CopyAccountPrivilegesOutcome(rsp);
        else
            return CopyAccountPrivilegesOutcome(o.GetError());
    }
    else
    {
        return CopyAccountPrivilegesOutcome(outcome.GetError());
    }
}

void DcdbClient::CopyAccountPrivilegesAsync(const CopyAccountPrivilegesRequest& request, const CopyAccountPrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CopyAccountPrivilegesRequest&;
    using Resp = CopyAccountPrivilegesResponse;

    DoRequestAsync<Req, Resp>(
        "CopyAccountPrivileges", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcdbClient::CopyAccountPrivilegesOutcomeCallable DcdbClient::CopyAccountPrivilegesCallable(const CopyAccountPrivilegesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CopyAccountPrivilegesOutcome>>();
    CopyAccountPrivilegesAsync(
    request,
    [prom](
        const DcdbClient*,
        const CopyAccountPrivilegesRequest&,
        CopyAccountPrivilegesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcdbClient::CreateAccountOutcome DcdbClient::CreateAccount(const CreateAccountRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAccountResponse rsp = CreateAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAccountOutcome(rsp);
        else
            return CreateAccountOutcome(o.GetError());
    }
    else
    {
        return CreateAccountOutcome(outcome.GetError());
    }
}

void DcdbClient::CreateAccountAsync(const CreateAccountRequest& request, const CreateAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAccountRequest&;
    using Resp = CreateAccountResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAccount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcdbClient::CreateAccountOutcomeCallable DcdbClient::CreateAccountCallable(const CreateAccountRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAccountOutcome>>();
    CreateAccountAsync(
    request,
    [prom](
        const DcdbClient*,
        const CreateAccountRequest&,
        CreateAccountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcdbClient::CreateDCDBInstanceOutcome DcdbClient::CreateDCDBInstance(const CreateDCDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDCDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDCDBInstanceResponse rsp = CreateDCDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDCDBInstanceOutcome(rsp);
        else
            return CreateDCDBInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateDCDBInstanceOutcome(outcome.GetError());
    }
}

void DcdbClient::CreateDCDBInstanceAsync(const CreateDCDBInstanceRequest& request, const CreateDCDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDCDBInstanceRequest&;
    using Resp = CreateDCDBInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDCDBInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcdbClient::CreateDCDBInstanceOutcomeCallable DcdbClient::CreateDCDBInstanceCallable(const CreateDCDBInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDCDBInstanceOutcome>>();
    CreateDCDBInstanceAsync(
    request,
    [prom](
        const DcdbClient*,
        const CreateDCDBInstanceRequest&,
        CreateDCDBInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcdbClient::CreateDedicatedClusterDCDBInstanceOutcome DcdbClient::CreateDedicatedClusterDCDBInstance(const CreateDedicatedClusterDCDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDedicatedClusterDCDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDedicatedClusterDCDBInstanceResponse rsp = CreateDedicatedClusterDCDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDedicatedClusterDCDBInstanceOutcome(rsp);
        else
            return CreateDedicatedClusterDCDBInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateDedicatedClusterDCDBInstanceOutcome(outcome.GetError());
    }
}

void DcdbClient::CreateDedicatedClusterDCDBInstanceAsync(const CreateDedicatedClusterDCDBInstanceRequest& request, const CreateDedicatedClusterDCDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDedicatedClusterDCDBInstanceRequest&;
    using Resp = CreateDedicatedClusterDCDBInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDedicatedClusterDCDBInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcdbClient::CreateDedicatedClusterDCDBInstanceOutcomeCallable DcdbClient::CreateDedicatedClusterDCDBInstanceCallable(const CreateDedicatedClusterDCDBInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDedicatedClusterDCDBInstanceOutcome>>();
    CreateDedicatedClusterDCDBInstanceAsync(
    request,
    [prom](
        const DcdbClient*,
        const CreateDedicatedClusterDCDBInstanceRequest&,
        CreateDedicatedClusterDCDBInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcdbClient::CreateHourDCDBInstanceOutcome DcdbClient::CreateHourDCDBInstance(const CreateHourDCDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateHourDCDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateHourDCDBInstanceResponse rsp = CreateHourDCDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateHourDCDBInstanceOutcome(rsp);
        else
            return CreateHourDCDBInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateHourDCDBInstanceOutcome(outcome.GetError());
    }
}

void DcdbClient::CreateHourDCDBInstanceAsync(const CreateHourDCDBInstanceRequest& request, const CreateHourDCDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateHourDCDBInstanceRequest&;
    using Resp = CreateHourDCDBInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateHourDCDBInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcdbClient::CreateHourDCDBInstanceOutcomeCallable DcdbClient::CreateHourDCDBInstanceCallable(const CreateHourDCDBInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateHourDCDBInstanceOutcome>>();
    CreateHourDCDBInstanceAsync(
    request,
    [prom](
        const DcdbClient*,
        const CreateHourDCDBInstanceRequest&,
        CreateHourDCDBInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcdbClient::CreateOnlineDDLJobOutcome DcdbClient::CreateOnlineDDLJob(const CreateOnlineDDLJobRequest &request)
{
    auto outcome = MakeRequest(request, "CreateOnlineDDLJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateOnlineDDLJobResponse rsp = CreateOnlineDDLJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateOnlineDDLJobOutcome(rsp);
        else
            return CreateOnlineDDLJobOutcome(o.GetError());
    }
    else
    {
        return CreateOnlineDDLJobOutcome(outcome.GetError());
    }
}

void DcdbClient::CreateOnlineDDLJobAsync(const CreateOnlineDDLJobRequest& request, const CreateOnlineDDLJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateOnlineDDLJobRequest&;
    using Resp = CreateOnlineDDLJobResponse;

    DoRequestAsync<Req, Resp>(
        "CreateOnlineDDLJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcdbClient::CreateOnlineDDLJobOutcomeCallable DcdbClient::CreateOnlineDDLJobCallable(const CreateOnlineDDLJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateOnlineDDLJobOutcome>>();
    CreateOnlineDDLJobAsync(
    request,
    [prom](
        const DcdbClient*,
        const CreateOnlineDDLJobRequest&,
        CreateOnlineDDLJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcdbClient::CreateTmpDCDBInstanceOutcome DcdbClient::CreateTmpDCDBInstance(const CreateTmpDCDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTmpDCDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTmpDCDBInstanceResponse rsp = CreateTmpDCDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTmpDCDBInstanceOutcome(rsp);
        else
            return CreateTmpDCDBInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateTmpDCDBInstanceOutcome(outcome.GetError());
    }
}

void DcdbClient::CreateTmpDCDBInstanceAsync(const CreateTmpDCDBInstanceRequest& request, const CreateTmpDCDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTmpDCDBInstanceRequest&;
    using Resp = CreateTmpDCDBInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTmpDCDBInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcdbClient::CreateTmpDCDBInstanceOutcomeCallable DcdbClient::CreateTmpDCDBInstanceCallable(const CreateTmpDCDBInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTmpDCDBInstanceOutcome>>();
    CreateTmpDCDBInstanceAsync(
    request,
    [prom](
        const DcdbClient*,
        const CreateTmpDCDBInstanceRequest&,
        CreateTmpDCDBInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcdbClient::DeleteAccountOutcome DcdbClient::DeleteAccount(const DeleteAccountRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAccountResponse rsp = DeleteAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAccountOutcome(rsp);
        else
            return DeleteAccountOutcome(o.GetError());
    }
    else
    {
        return DeleteAccountOutcome(outcome.GetError());
    }
}

void DcdbClient::DeleteAccountAsync(const DeleteAccountRequest& request, const DeleteAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAccountRequest&;
    using Resp = DeleteAccountResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAccount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcdbClient::DeleteAccountOutcomeCallable DcdbClient::DeleteAccountCallable(const DeleteAccountRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAccountOutcome>>();
    DeleteAccountAsync(
    request,
    [prom](
        const DcdbClient*,
        const DeleteAccountRequest&,
        DeleteAccountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcdbClient::DescribeAccountPrivilegesOutcome DcdbClient::DescribeAccountPrivileges(const DescribeAccountPrivilegesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAccountPrivileges");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAccountPrivilegesResponse rsp = DescribeAccountPrivilegesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAccountPrivilegesOutcome(rsp);
        else
            return DescribeAccountPrivilegesOutcome(o.GetError());
    }
    else
    {
        return DescribeAccountPrivilegesOutcome(outcome.GetError());
    }
}

void DcdbClient::DescribeAccountPrivilegesAsync(const DescribeAccountPrivilegesRequest& request, const DescribeAccountPrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAccountPrivilegesRequest&;
    using Resp = DescribeAccountPrivilegesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAccountPrivileges", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcdbClient::DescribeAccountPrivilegesOutcomeCallable DcdbClient::DescribeAccountPrivilegesCallable(const DescribeAccountPrivilegesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAccountPrivilegesOutcome>>();
    DescribeAccountPrivilegesAsync(
    request,
    [prom](
        const DcdbClient*,
        const DescribeAccountPrivilegesRequest&,
        DescribeAccountPrivilegesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcdbClient::DescribeAccountsOutcome DcdbClient::DescribeAccounts(const DescribeAccountsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAccounts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAccountsResponse rsp = DescribeAccountsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAccountsOutcome(rsp);
        else
            return DescribeAccountsOutcome(o.GetError());
    }
    else
    {
        return DescribeAccountsOutcome(outcome.GetError());
    }
}

void DcdbClient::DescribeAccountsAsync(const DescribeAccountsRequest& request, const DescribeAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAccountsRequest&;
    using Resp = DescribeAccountsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAccounts", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcdbClient::DescribeAccountsOutcomeCallable DcdbClient::DescribeAccountsCallable(const DescribeAccountsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAccountsOutcome>>();
    DescribeAccountsAsync(
    request,
    [prom](
        const DcdbClient*,
        const DescribeAccountsRequest&,
        DescribeAccountsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcdbClient::DescribeBackupConfigsOutcome DcdbClient::DescribeBackupConfigs(const DescribeBackupConfigsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackupConfigs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackupConfigsResponse rsp = DescribeBackupConfigsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackupConfigsOutcome(rsp);
        else
            return DescribeBackupConfigsOutcome(o.GetError());
    }
    else
    {
        return DescribeBackupConfigsOutcome(outcome.GetError());
    }
}

void DcdbClient::DescribeBackupConfigsAsync(const DescribeBackupConfigsRequest& request, const DescribeBackupConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBackupConfigsRequest&;
    using Resp = DescribeBackupConfigsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBackupConfigs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcdbClient::DescribeBackupConfigsOutcomeCallable DcdbClient::DescribeBackupConfigsCallable(const DescribeBackupConfigsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBackupConfigsOutcome>>();
    DescribeBackupConfigsAsync(
    request,
    [prom](
        const DcdbClient*,
        const DescribeBackupConfigsRequest&,
        DescribeBackupConfigsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcdbClient::DescribeBackupFilesOutcome DcdbClient::DescribeBackupFiles(const DescribeBackupFilesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackupFiles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackupFilesResponse rsp = DescribeBackupFilesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackupFilesOutcome(rsp);
        else
            return DescribeBackupFilesOutcome(o.GetError());
    }
    else
    {
        return DescribeBackupFilesOutcome(outcome.GetError());
    }
}

void DcdbClient::DescribeBackupFilesAsync(const DescribeBackupFilesRequest& request, const DescribeBackupFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBackupFilesRequest&;
    using Resp = DescribeBackupFilesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBackupFiles", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcdbClient::DescribeBackupFilesOutcomeCallable DcdbClient::DescribeBackupFilesCallable(const DescribeBackupFilesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBackupFilesOutcome>>();
    DescribeBackupFilesAsync(
    request,
    [prom](
        const DcdbClient*,
        const DescribeBackupFilesRequest&,
        DescribeBackupFilesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcdbClient::DescribeDBEncryptAttributesOutcome DcdbClient::DescribeDBEncryptAttributes(const DescribeDBEncryptAttributesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBEncryptAttributes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBEncryptAttributesResponse rsp = DescribeDBEncryptAttributesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBEncryptAttributesOutcome(rsp);
        else
            return DescribeDBEncryptAttributesOutcome(o.GetError());
    }
    else
    {
        return DescribeDBEncryptAttributesOutcome(outcome.GetError());
    }
}

void DcdbClient::DescribeDBEncryptAttributesAsync(const DescribeDBEncryptAttributesRequest& request, const DescribeDBEncryptAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDBEncryptAttributesRequest&;
    using Resp = DescribeDBEncryptAttributesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDBEncryptAttributes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcdbClient::DescribeDBEncryptAttributesOutcomeCallable DcdbClient::DescribeDBEncryptAttributesCallable(const DescribeDBEncryptAttributesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBEncryptAttributesOutcome>>();
    DescribeDBEncryptAttributesAsync(
    request,
    [prom](
        const DcdbClient*,
        const DescribeDBEncryptAttributesRequest&,
        DescribeDBEncryptAttributesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcdbClient::DescribeDBLogFilesOutcome DcdbClient::DescribeDBLogFiles(const DescribeDBLogFilesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBLogFiles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBLogFilesResponse rsp = DescribeDBLogFilesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBLogFilesOutcome(rsp);
        else
            return DescribeDBLogFilesOutcome(o.GetError());
    }
    else
    {
        return DescribeDBLogFilesOutcome(outcome.GetError());
    }
}

void DcdbClient::DescribeDBLogFilesAsync(const DescribeDBLogFilesRequest& request, const DescribeDBLogFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDBLogFilesRequest&;
    using Resp = DescribeDBLogFilesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDBLogFiles", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcdbClient::DescribeDBLogFilesOutcomeCallable DcdbClient::DescribeDBLogFilesCallable(const DescribeDBLogFilesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBLogFilesOutcome>>();
    DescribeDBLogFilesAsync(
    request,
    [prom](
        const DcdbClient*,
        const DescribeDBLogFilesRequest&,
        DescribeDBLogFilesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcdbClient::DescribeDBParametersOutcome DcdbClient::DescribeDBParameters(const DescribeDBParametersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBParameters");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBParametersResponse rsp = DescribeDBParametersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBParametersOutcome(rsp);
        else
            return DescribeDBParametersOutcome(o.GetError());
    }
    else
    {
        return DescribeDBParametersOutcome(outcome.GetError());
    }
}

void DcdbClient::DescribeDBParametersAsync(const DescribeDBParametersRequest& request, const DescribeDBParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDBParametersRequest&;
    using Resp = DescribeDBParametersResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDBParameters", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcdbClient::DescribeDBParametersOutcomeCallable DcdbClient::DescribeDBParametersCallable(const DescribeDBParametersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBParametersOutcome>>();
    DescribeDBParametersAsync(
    request,
    [prom](
        const DcdbClient*,
        const DescribeDBParametersRequest&,
        DescribeDBParametersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcdbClient::DescribeDBSecurityGroupsOutcome DcdbClient::DescribeDBSecurityGroups(const DescribeDBSecurityGroupsRequest &request)
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

void DcdbClient::DescribeDBSecurityGroupsAsync(const DescribeDBSecurityGroupsRequest& request, const DescribeDBSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

DcdbClient::DescribeDBSecurityGroupsOutcomeCallable DcdbClient::DescribeDBSecurityGroupsCallable(const DescribeDBSecurityGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBSecurityGroupsOutcome>>();
    DescribeDBSecurityGroupsAsync(
    request,
    [prom](
        const DcdbClient*,
        const DescribeDBSecurityGroupsRequest&,
        DescribeDBSecurityGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcdbClient::DescribeDBSlowLogsOutcome DcdbClient::DescribeDBSlowLogs(const DescribeDBSlowLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBSlowLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBSlowLogsResponse rsp = DescribeDBSlowLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBSlowLogsOutcome(rsp);
        else
            return DescribeDBSlowLogsOutcome(o.GetError());
    }
    else
    {
        return DescribeDBSlowLogsOutcome(outcome.GetError());
    }
}

void DcdbClient::DescribeDBSlowLogsAsync(const DescribeDBSlowLogsRequest& request, const DescribeDBSlowLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDBSlowLogsRequest&;
    using Resp = DescribeDBSlowLogsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDBSlowLogs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcdbClient::DescribeDBSlowLogsOutcomeCallable DcdbClient::DescribeDBSlowLogsCallable(const DescribeDBSlowLogsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBSlowLogsOutcome>>();
    DescribeDBSlowLogsAsync(
    request,
    [prom](
        const DcdbClient*,
        const DescribeDBSlowLogsRequest&,
        DescribeDBSlowLogsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcdbClient::DescribeDBSyncModeOutcome DcdbClient::DescribeDBSyncMode(const DescribeDBSyncModeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBSyncMode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBSyncModeResponse rsp = DescribeDBSyncModeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBSyncModeOutcome(rsp);
        else
            return DescribeDBSyncModeOutcome(o.GetError());
    }
    else
    {
        return DescribeDBSyncModeOutcome(outcome.GetError());
    }
}

void DcdbClient::DescribeDBSyncModeAsync(const DescribeDBSyncModeRequest& request, const DescribeDBSyncModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDBSyncModeRequest&;
    using Resp = DescribeDBSyncModeResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDBSyncMode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcdbClient::DescribeDBSyncModeOutcomeCallable DcdbClient::DescribeDBSyncModeCallable(const DescribeDBSyncModeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBSyncModeOutcome>>();
    DescribeDBSyncModeAsync(
    request,
    [prom](
        const DcdbClient*,
        const DescribeDBSyncModeRequest&,
        DescribeDBSyncModeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcdbClient::DescribeDBTmpInstancesOutcome DcdbClient::DescribeDBTmpInstances(const DescribeDBTmpInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBTmpInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBTmpInstancesResponse rsp = DescribeDBTmpInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBTmpInstancesOutcome(rsp);
        else
            return DescribeDBTmpInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeDBTmpInstancesOutcome(outcome.GetError());
    }
}

void DcdbClient::DescribeDBTmpInstancesAsync(const DescribeDBTmpInstancesRequest& request, const DescribeDBTmpInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDBTmpInstancesRequest&;
    using Resp = DescribeDBTmpInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDBTmpInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcdbClient::DescribeDBTmpInstancesOutcomeCallable DcdbClient::DescribeDBTmpInstancesCallable(const DescribeDBTmpInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBTmpInstancesOutcome>>();
    DescribeDBTmpInstancesAsync(
    request,
    [prom](
        const DcdbClient*,
        const DescribeDBTmpInstancesRequest&,
        DescribeDBTmpInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcdbClient::DescribeDCDBBinlogTimeOutcome DcdbClient::DescribeDCDBBinlogTime(const DescribeDCDBBinlogTimeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDCDBBinlogTime");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDCDBBinlogTimeResponse rsp = DescribeDCDBBinlogTimeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDCDBBinlogTimeOutcome(rsp);
        else
            return DescribeDCDBBinlogTimeOutcome(o.GetError());
    }
    else
    {
        return DescribeDCDBBinlogTimeOutcome(outcome.GetError());
    }
}

void DcdbClient::DescribeDCDBBinlogTimeAsync(const DescribeDCDBBinlogTimeRequest& request, const DescribeDCDBBinlogTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDCDBBinlogTimeRequest&;
    using Resp = DescribeDCDBBinlogTimeResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDCDBBinlogTime", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcdbClient::DescribeDCDBBinlogTimeOutcomeCallable DcdbClient::DescribeDCDBBinlogTimeCallable(const DescribeDCDBBinlogTimeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDCDBBinlogTimeOutcome>>();
    DescribeDCDBBinlogTimeAsync(
    request,
    [prom](
        const DcdbClient*,
        const DescribeDCDBBinlogTimeRequest&,
        DescribeDCDBBinlogTimeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcdbClient::DescribeDCDBInstanceDetailOutcome DcdbClient::DescribeDCDBInstanceDetail(const DescribeDCDBInstanceDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDCDBInstanceDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDCDBInstanceDetailResponse rsp = DescribeDCDBInstanceDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDCDBInstanceDetailOutcome(rsp);
        else
            return DescribeDCDBInstanceDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeDCDBInstanceDetailOutcome(outcome.GetError());
    }
}

void DcdbClient::DescribeDCDBInstanceDetailAsync(const DescribeDCDBInstanceDetailRequest& request, const DescribeDCDBInstanceDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDCDBInstanceDetailRequest&;
    using Resp = DescribeDCDBInstanceDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDCDBInstanceDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcdbClient::DescribeDCDBInstanceDetailOutcomeCallable DcdbClient::DescribeDCDBInstanceDetailCallable(const DescribeDCDBInstanceDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDCDBInstanceDetailOutcome>>();
    DescribeDCDBInstanceDetailAsync(
    request,
    [prom](
        const DcdbClient*,
        const DescribeDCDBInstanceDetailRequest&,
        DescribeDCDBInstanceDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcdbClient::DescribeDCDBInstanceNodeInfoOutcome DcdbClient::DescribeDCDBInstanceNodeInfo(const DescribeDCDBInstanceNodeInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDCDBInstanceNodeInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDCDBInstanceNodeInfoResponse rsp = DescribeDCDBInstanceNodeInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDCDBInstanceNodeInfoOutcome(rsp);
        else
            return DescribeDCDBInstanceNodeInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeDCDBInstanceNodeInfoOutcome(outcome.GetError());
    }
}

void DcdbClient::DescribeDCDBInstanceNodeInfoAsync(const DescribeDCDBInstanceNodeInfoRequest& request, const DescribeDCDBInstanceNodeInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDCDBInstanceNodeInfoRequest&;
    using Resp = DescribeDCDBInstanceNodeInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDCDBInstanceNodeInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcdbClient::DescribeDCDBInstanceNodeInfoOutcomeCallable DcdbClient::DescribeDCDBInstanceNodeInfoCallable(const DescribeDCDBInstanceNodeInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDCDBInstanceNodeInfoOutcome>>();
    DescribeDCDBInstanceNodeInfoAsync(
    request,
    [prom](
        const DcdbClient*,
        const DescribeDCDBInstanceNodeInfoRequest&,
        DescribeDCDBInstanceNodeInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcdbClient::DescribeDCDBInstancesOutcome DcdbClient::DescribeDCDBInstances(const DescribeDCDBInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDCDBInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDCDBInstancesResponse rsp = DescribeDCDBInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDCDBInstancesOutcome(rsp);
        else
            return DescribeDCDBInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeDCDBInstancesOutcome(outcome.GetError());
    }
}

void DcdbClient::DescribeDCDBInstancesAsync(const DescribeDCDBInstancesRequest& request, const DescribeDCDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDCDBInstancesRequest&;
    using Resp = DescribeDCDBInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDCDBInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcdbClient::DescribeDCDBInstancesOutcomeCallable DcdbClient::DescribeDCDBInstancesCallable(const DescribeDCDBInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDCDBInstancesOutcome>>();
    DescribeDCDBInstancesAsync(
    request,
    [prom](
        const DcdbClient*,
        const DescribeDCDBInstancesRequest&,
        DescribeDCDBInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcdbClient::DescribeDCDBPriceOutcome DcdbClient::DescribeDCDBPrice(const DescribeDCDBPriceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDCDBPrice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDCDBPriceResponse rsp = DescribeDCDBPriceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDCDBPriceOutcome(rsp);
        else
            return DescribeDCDBPriceOutcome(o.GetError());
    }
    else
    {
        return DescribeDCDBPriceOutcome(outcome.GetError());
    }
}

void DcdbClient::DescribeDCDBPriceAsync(const DescribeDCDBPriceRequest& request, const DescribeDCDBPriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDCDBPriceRequest&;
    using Resp = DescribeDCDBPriceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDCDBPrice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcdbClient::DescribeDCDBPriceOutcomeCallable DcdbClient::DescribeDCDBPriceCallable(const DescribeDCDBPriceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDCDBPriceOutcome>>();
    DescribeDCDBPriceAsync(
    request,
    [prom](
        const DcdbClient*,
        const DescribeDCDBPriceRequest&,
        DescribeDCDBPriceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcdbClient::DescribeDCDBRenewalPriceOutcome DcdbClient::DescribeDCDBRenewalPrice(const DescribeDCDBRenewalPriceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDCDBRenewalPrice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDCDBRenewalPriceResponse rsp = DescribeDCDBRenewalPriceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDCDBRenewalPriceOutcome(rsp);
        else
            return DescribeDCDBRenewalPriceOutcome(o.GetError());
    }
    else
    {
        return DescribeDCDBRenewalPriceOutcome(outcome.GetError());
    }
}

void DcdbClient::DescribeDCDBRenewalPriceAsync(const DescribeDCDBRenewalPriceRequest& request, const DescribeDCDBRenewalPriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDCDBRenewalPriceRequest&;
    using Resp = DescribeDCDBRenewalPriceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDCDBRenewalPrice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcdbClient::DescribeDCDBRenewalPriceOutcomeCallable DcdbClient::DescribeDCDBRenewalPriceCallable(const DescribeDCDBRenewalPriceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDCDBRenewalPriceOutcome>>();
    DescribeDCDBRenewalPriceAsync(
    request,
    [prom](
        const DcdbClient*,
        const DescribeDCDBRenewalPriceRequest&,
        DescribeDCDBRenewalPriceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcdbClient::DescribeDCDBSaleInfoOutcome DcdbClient::DescribeDCDBSaleInfo(const DescribeDCDBSaleInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDCDBSaleInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDCDBSaleInfoResponse rsp = DescribeDCDBSaleInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDCDBSaleInfoOutcome(rsp);
        else
            return DescribeDCDBSaleInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeDCDBSaleInfoOutcome(outcome.GetError());
    }
}

void DcdbClient::DescribeDCDBSaleInfoAsync(const DescribeDCDBSaleInfoRequest& request, const DescribeDCDBSaleInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDCDBSaleInfoRequest&;
    using Resp = DescribeDCDBSaleInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDCDBSaleInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcdbClient::DescribeDCDBSaleInfoOutcomeCallable DcdbClient::DescribeDCDBSaleInfoCallable(const DescribeDCDBSaleInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDCDBSaleInfoOutcome>>();
    DescribeDCDBSaleInfoAsync(
    request,
    [prom](
        const DcdbClient*,
        const DescribeDCDBSaleInfoRequest&,
        DescribeDCDBSaleInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcdbClient::DescribeDCDBShardsOutcome DcdbClient::DescribeDCDBShards(const DescribeDCDBShardsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDCDBShards");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDCDBShardsResponse rsp = DescribeDCDBShardsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDCDBShardsOutcome(rsp);
        else
            return DescribeDCDBShardsOutcome(o.GetError());
    }
    else
    {
        return DescribeDCDBShardsOutcome(outcome.GetError());
    }
}

void DcdbClient::DescribeDCDBShardsAsync(const DescribeDCDBShardsRequest& request, const DescribeDCDBShardsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDCDBShardsRequest&;
    using Resp = DescribeDCDBShardsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDCDBShards", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcdbClient::DescribeDCDBShardsOutcomeCallable DcdbClient::DescribeDCDBShardsCallable(const DescribeDCDBShardsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDCDBShardsOutcome>>();
    DescribeDCDBShardsAsync(
    request,
    [prom](
        const DcdbClient*,
        const DescribeDCDBShardsRequest&,
        DescribeDCDBShardsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcdbClient::DescribeDCDBUpgradePriceOutcome DcdbClient::DescribeDCDBUpgradePrice(const DescribeDCDBUpgradePriceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDCDBUpgradePrice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDCDBUpgradePriceResponse rsp = DescribeDCDBUpgradePriceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDCDBUpgradePriceOutcome(rsp);
        else
            return DescribeDCDBUpgradePriceOutcome(o.GetError());
    }
    else
    {
        return DescribeDCDBUpgradePriceOutcome(outcome.GetError());
    }
}

void DcdbClient::DescribeDCDBUpgradePriceAsync(const DescribeDCDBUpgradePriceRequest& request, const DescribeDCDBUpgradePriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDCDBUpgradePriceRequest&;
    using Resp = DescribeDCDBUpgradePriceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDCDBUpgradePrice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcdbClient::DescribeDCDBUpgradePriceOutcomeCallable DcdbClient::DescribeDCDBUpgradePriceCallable(const DescribeDCDBUpgradePriceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDCDBUpgradePriceOutcome>>();
    DescribeDCDBUpgradePriceAsync(
    request,
    [prom](
        const DcdbClient*,
        const DescribeDCDBUpgradePriceRequest&,
        DescribeDCDBUpgradePriceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcdbClient::DescribeDatabaseObjectsOutcome DcdbClient::DescribeDatabaseObjects(const DescribeDatabaseObjectsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDatabaseObjects");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDatabaseObjectsResponse rsp = DescribeDatabaseObjectsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDatabaseObjectsOutcome(rsp);
        else
            return DescribeDatabaseObjectsOutcome(o.GetError());
    }
    else
    {
        return DescribeDatabaseObjectsOutcome(outcome.GetError());
    }
}

void DcdbClient::DescribeDatabaseObjectsAsync(const DescribeDatabaseObjectsRequest& request, const DescribeDatabaseObjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDatabaseObjectsRequest&;
    using Resp = DescribeDatabaseObjectsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDatabaseObjects", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcdbClient::DescribeDatabaseObjectsOutcomeCallable DcdbClient::DescribeDatabaseObjectsCallable(const DescribeDatabaseObjectsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDatabaseObjectsOutcome>>();
    DescribeDatabaseObjectsAsync(
    request,
    [prom](
        const DcdbClient*,
        const DescribeDatabaseObjectsRequest&,
        DescribeDatabaseObjectsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcdbClient::DescribeDatabaseTableOutcome DcdbClient::DescribeDatabaseTable(const DescribeDatabaseTableRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDatabaseTable");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDatabaseTableResponse rsp = DescribeDatabaseTableResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDatabaseTableOutcome(rsp);
        else
            return DescribeDatabaseTableOutcome(o.GetError());
    }
    else
    {
        return DescribeDatabaseTableOutcome(outcome.GetError());
    }
}

void DcdbClient::DescribeDatabaseTableAsync(const DescribeDatabaseTableRequest& request, const DescribeDatabaseTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDatabaseTableRequest&;
    using Resp = DescribeDatabaseTableResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDatabaseTable", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcdbClient::DescribeDatabaseTableOutcomeCallable DcdbClient::DescribeDatabaseTableCallable(const DescribeDatabaseTableRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDatabaseTableOutcome>>();
    DescribeDatabaseTableAsync(
    request,
    [prom](
        const DcdbClient*,
        const DescribeDatabaseTableRequest&,
        DescribeDatabaseTableOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcdbClient::DescribeDatabasesOutcome DcdbClient::DescribeDatabases(const DescribeDatabasesRequest &request)
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

void DcdbClient::DescribeDatabasesAsync(const DescribeDatabasesRequest& request, const DescribeDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

DcdbClient::DescribeDatabasesOutcomeCallable DcdbClient::DescribeDatabasesCallable(const DescribeDatabasesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDatabasesOutcome>>();
    DescribeDatabasesAsync(
    request,
    [prom](
        const DcdbClient*,
        const DescribeDatabasesRequest&,
        DescribeDatabasesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcdbClient::DescribeDcnDetailOutcome DcdbClient::DescribeDcnDetail(const DescribeDcnDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDcnDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDcnDetailResponse rsp = DescribeDcnDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDcnDetailOutcome(rsp);
        else
            return DescribeDcnDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeDcnDetailOutcome(outcome.GetError());
    }
}

void DcdbClient::DescribeDcnDetailAsync(const DescribeDcnDetailRequest& request, const DescribeDcnDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDcnDetailRequest&;
    using Resp = DescribeDcnDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDcnDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcdbClient::DescribeDcnDetailOutcomeCallable DcdbClient::DescribeDcnDetailCallable(const DescribeDcnDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDcnDetailOutcome>>();
    DescribeDcnDetailAsync(
    request,
    [prom](
        const DcdbClient*,
        const DescribeDcnDetailRequest&,
        DescribeDcnDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcdbClient::DescribeFileDownloadUrlOutcome DcdbClient::DescribeFileDownloadUrl(const DescribeFileDownloadUrlRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFileDownloadUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFileDownloadUrlResponse rsp = DescribeFileDownloadUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFileDownloadUrlOutcome(rsp);
        else
            return DescribeFileDownloadUrlOutcome(o.GetError());
    }
    else
    {
        return DescribeFileDownloadUrlOutcome(outcome.GetError());
    }
}

void DcdbClient::DescribeFileDownloadUrlAsync(const DescribeFileDownloadUrlRequest& request, const DescribeFileDownloadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFileDownloadUrlRequest&;
    using Resp = DescribeFileDownloadUrlResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFileDownloadUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcdbClient::DescribeFileDownloadUrlOutcomeCallable DcdbClient::DescribeFileDownloadUrlCallable(const DescribeFileDownloadUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFileDownloadUrlOutcome>>();
    DescribeFileDownloadUrlAsync(
    request,
    [prom](
        const DcdbClient*,
        const DescribeFileDownloadUrlRequest&,
        DescribeFileDownloadUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcdbClient::DescribeFlowOutcome DcdbClient::DescribeFlow(const DescribeFlowRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFlow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFlowResponse rsp = DescribeFlowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFlowOutcome(rsp);
        else
            return DescribeFlowOutcome(o.GetError());
    }
    else
    {
        return DescribeFlowOutcome(outcome.GetError());
    }
}

void DcdbClient::DescribeFlowAsync(const DescribeFlowRequest& request, const DescribeFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFlowRequest&;
    using Resp = DescribeFlowResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFlow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcdbClient::DescribeFlowOutcomeCallable DcdbClient::DescribeFlowCallable(const DescribeFlowRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFlowOutcome>>();
    DescribeFlowAsync(
    request,
    [prom](
        const DcdbClient*,
        const DescribeFlowRequest&,
        DescribeFlowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcdbClient::DescribeInstanceSSLAttributesOutcome DcdbClient::DescribeInstanceSSLAttributes(const DescribeInstanceSSLAttributesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceSSLAttributes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceSSLAttributesResponse rsp = DescribeInstanceSSLAttributesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceSSLAttributesOutcome(rsp);
        else
            return DescribeInstanceSSLAttributesOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceSSLAttributesOutcome(outcome.GetError());
    }
}

void DcdbClient::DescribeInstanceSSLAttributesAsync(const DescribeInstanceSSLAttributesRequest& request, const DescribeInstanceSSLAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceSSLAttributesRequest&;
    using Resp = DescribeInstanceSSLAttributesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceSSLAttributes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcdbClient::DescribeInstanceSSLAttributesOutcomeCallable DcdbClient::DescribeInstanceSSLAttributesCallable(const DescribeInstanceSSLAttributesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceSSLAttributesOutcome>>();
    DescribeInstanceSSLAttributesAsync(
    request,
    [prom](
        const DcdbClient*,
        const DescribeInstanceSSLAttributesRequest&,
        DescribeInstanceSSLAttributesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcdbClient::DescribeLogFileRetentionPeriodOutcome DcdbClient::DescribeLogFileRetentionPeriod(const DescribeLogFileRetentionPeriodRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLogFileRetentionPeriod");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLogFileRetentionPeriodResponse rsp = DescribeLogFileRetentionPeriodResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLogFileRetentionPeriodOutcome(rsp);
        else
            return DescribeLogFileRetentionPeriodOutcome(o.GetError());
    }
    else
    {
        return DescribeLogFileRetentionPeriodOutcome(outcome.GetError());
    }
}

void DcdbClient::DescribeLogFileRetentionPeriodAsync(const DescribeLogFileRetentionPeriodRequest& request, const DescribeLogFileRetentionPeriodAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLogFileRetentionPeriodRequest&;
    using Resp = DescribeLogFileRetentionPeriodResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLogFileRetentionPeriod", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcdbClient::DescribeLogFileRetentionPeriodOutcomeCallable DcdbClient::DescribeLogFileRetentionPeriodCallable(const DescribeLogFileRetentionPeriodRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLogFileRetentionPeriodOutcome>>();
    DescribeLogFileRetentionPeriodAsync(
    request,
    [prom](
        const DcdbClient*,
        const DescribeLogFileRetentionPeriodRequest&,
        DescribeLogFileRetentionPeriodOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcdbClient::DescribeOnlineDDLJobOutcome DcdbClient::DescribeOnlineDDLJob(const DescribeOnlineDDLJobRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOnlineDDLJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOnlineDDLJobResponse rsp = DescribeOnlineDDLJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOnlineDDLJobOutcome(rsp);
        else
            return DescribeOnlineDDLJobOutcome(o.GetError());
    }
    else
    {
        return DescribeOnlineDDLJobOutcome(outcome.GetError());
    }
}

void DcdbClient::DescribeOnlineDDLJobAsync(const DescribeOnlineDDLJobRequest& request, const DescribeOnlineDDLJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeOnlineDDLJobRequest&;
    using Resp = DescribeOnlineDDLJobResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeOnlineDDLJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcdbClient::DescribeOnlineDDLJobOutcomeCallable DcdbClient::DescribeOnlineDDLJobCallable(const DescribeOnlineDDLJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOnlineDDLJobOutcome>>();
    DescribeOnlineDDLJobAsync(
    request,
    [prom](
        const DcdbClient*,
        const DescribeOnlineDDLJobRequest&,
        DescribeOnlineDDLJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcdbClient::DescribeOrdersOutcome DcdbClient::DescribeOrders(const DescribeOrdersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOrders");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOrdersResponse rsp = DescribeOrdersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOrdersOutcome(rsp);
        else
            return DescribeOrdersOutcome(o.GetError());
    }
    else
    {
        return DescribeOrdersOutcome(outcome.GetError());
    }
}

void DcdbClient::DescribeOrdersAsync(const DescribeOrdersRequest& request, const DescribeOrdersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeOrdersRequest&;
    using Resp = DescribeOrdersResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeOrders", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcdbClient::DescribeOrdersOutcomeCallable DcdbClient::DescribeOrdersCallable(const DescribeOrdersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOrdersOutcome>>();
    DescribeOrdersAsync(
    request,
    [prom](
        const DcdbClient*,
        const DescribeOrdersRequest&,
        DescribeOrdersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcdbClient::DescribeProcessListOutcome DcdbClient::DescribeProcessList(const DescribeProcessListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProcessList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProcessListResponse rsp = DescribeProcessListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProcessListOutcome(rsp);
        else
            return DescribeProcessListOutcome(o.GetError());
    }
    else
    {
        return DescribeProcessListOutcome(outcome.GetError());
    }
}

void DcdbClient::DescribeProcessListAsync(const DescribeProcessListRequest& request, const DescribeProcessListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeProcessListRequest&;
    using Resp = DescribeProcessListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProcessList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcdbClient::DescribeProcessListOutcomeCallable DcdbClient::DescribeProcessListCallable(const DescribeProcessListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProcessListOutcome>>();
    DescribeProcessListAsync(
    request,
    [prom](
        const DcdbClient*,
        const DescribeProcessListRequest&,
        DescribeProcessListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcdbClient::DescribeProjectSecurityGroupsOutcome DcdbClient::DescribeProjectSecurityGroups(const DescribeProjectSecurityGroupsRequest &request)
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

void DcdbClient::DescribeProjectSecurityGroupsAsync(const DescribeProjectSecurityGroupsRequest& request, const DescribeProjectSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

DcdbClient::DescribeProjectSecurityGroupsOutcomeCallable DcdbClient::DescribeProjectSecurityGroupsCallable(const DescribeProjectSecurityGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProjectSecurityGroupsOutcome>>();
    DescribeProjectSecurityGroupsAsync(
    request,
    [prom](
        const DcdbClient*,
        const DescribeProjectSecurityGroupsRequest&,
        DescribeProjectSecurityGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcdbClient::DescribeProjectsOutcome DcdbClient::DescribeProjects(const DescribeProjectsRequest &request)
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

void DcdbClient::DescribeProjectsAsync(const DescribeProjectsRequest& request, const DescribeProjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

DcdbClient::DescribeProjectsOutcomeCallable DcdbClient::DescribeProjectsCallable(const DescribeProjectsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProjectsOutcome>>();
    DescribeProjectsAsync(
    request,
    [prom](
        const DcdbClient*,
        const DescribeProjectsRequest&,
        DescribeProjectsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcdbClient::DescribeShardSpecOutcome DcdbClient::DescribeShardSpec(const DescribeShardSpecRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeShardSpec");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeShardSpecResponse rsp = DescribeShardSpecResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeShardSpecOutcome(rsp);
        else
            return DescribeShardSpecOutcome(o.GetError());
    }
    else
    {
        return DescribeShardSpecOutcome(outcome.GetError());
    }
}

void DcdbClient::DescribeShardSpecAsync(const DescribeShardSpecRequest& request, const DescribeShardSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeShardSpecRequest&;
    using Resp = DescribeShardSpecResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeShardSpec", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcdbClient::DescribeShardSpecOutcomeCallable DcdbClient::DescribeShardSpecCallable(const DescribeShardSpecRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeShardSpecOutcome>>();
    DescribeShardSpecAsync(
    request,
    [prom](
        const DcdbClient*,
        const DescribeShardSpecRequest&,
        DescribeShardSpecOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcdbClient::DescribeUserTasksOutcome DcdbClient::DescribeUserTasks(const DescribeUserTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserTasksResponse rsp = DescribeUserTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserTasksOutcome(rsp);
        else
            return DescribeUserTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeUserTasksOutcome(outcome.GetError());
    }
}

void DcdbClient::DescribeUserTasksAsync(const DescribeUserTasksRequest& request, const DescribeUserTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUserTasksRequest&;
    using Resp = DescribeUserTasksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUserTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcdbClient::DescribeUserTasksOutcomeCallable DcdbClient::DescribeUserTasksCallable(const DescribeUserTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUserTasksOutcome>>();
    DescribeUserTasksAsync(
    request,
    [prom](
        const DcdbClient*,
        const DescribeUserTasksRequest&,
        DescribeUserTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcdbClient::DestroyDCDBInstanceOutcome DcdbClient::DestroyDCDBInstance(const DestroyDCDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DestroyDCDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DestroyDCDBInstanceResponse rsp = DestroyDCDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DestroyDCDBInstanceOutcome(rsp);
        else
            return DestroyDCDBInstanceOutcome(o.GetError());
    }
    else
    {
        return DestroyDCDBInstanceOutcome(outcome.GetError());
    }
}

void DcdbClient::DestroyDCDBInstanceAsync(const DestroyDCDBInstanceRequest& request, const DestroyDCDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DestroyDCDBInstanceRequest&;
    using Resp = DestroyDCDBInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "DestroyDCDBInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcdbClient::DestroyDCDBInstanceOutcomeCallable DcdbClient::DestroyDCDBInstanceCallable(const DestroyDCDBInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DestroyDCDBInstanceOutcome>>();
    DestroyDCDBInstanceAsync(
    request,
    [prom](
        const DcdbClient*,
        const DestroyDCDBInstanceRequest&,
        DestroyDCDBInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcdbClient::DestroyHourDCDBInstanceOutcome DcdbClient::DestroyHourDCDBInstance(const DestroyHourDCDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DestroyHourDCDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DestroyHourDCDBInstanceResponse rsp = DestroyHourDCDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DestroyHourDCDBInstanceOutcome(rsp);
        else
            return DestroyHourDCDBInstanceOutcome(o.GetError());
    }
    else
    {
        return DestroyHourDCDBInstanceOutcome(outcome.GetError());
    }
}

void DcdbClient::DestroyHourDCDBInstanceAsync(const DestroyHourDCDBInstanceRequest& request, const DestroyHourDCDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DestroyHourDCDBInstanceRequest&;
    using Resp = DestroyHourDCDBInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "DestroyHourDCDBInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcdbClient::DestroyHourDCDBInstanceOutcomeCallable DcdbClient::DestroyHourDCDBInstanceCallable(const DestroyHourDCDBInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DestroyHourDCDBInstanceOutcome>>();
    DestroyHourDCDBInstanceAsync(
    request,
    [prom](
        const DcdbClient*,
        const DestroyHourDCDBInstanceRequest&,
        DestroyHourDCDBInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcdbClient::DisassociateSecurityGroupsOutcome DcdbClient::DisassociateSecurityGroups(const DisassociateSecurityGroupsRequest &request)
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

void DcdbClient::DisassociateSecurityGroupsAsync(const DisassociateSecurityGroupsRequest& request, const DisassociateSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

DcdbClient::DisassociateSecurityGroupsOutcomeCallable DcdbClient::DisassociateSecurityGroupsCallable(const DisassociateSecurityGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisassociateSecurityGroupsOutcome>>();
    DisassociateSecurityGroupsAsync(
    request,
    [prom](
        const DcdbClient*,
        const DisassociateSecurityGroupsRequest&,
        DisassociateSecurityGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcdbClient::FlushBinlogOutcome DcdbClient::FlushBinlog(const FlushBinlogRequest &request)
{
    auto outcome = MakeRequest(request, "FlushBinlog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        FlushBinlogResponse rsp = FlushBinlogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return FlushBinlogOutcome(rsp);
        else
            return FlushBinlogOutcome(o.GetError());
    }
    else
    {
        return FlushBinlogOutcome(outcome.GetError());
    }
}

void DcdbClient::FlushBinlogAsync(const FlushBinlogRequest& request, const FlushBinlogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const FlushBinlogRequest&;
    using Resp = FlushBinlogResponse;

    DoRequestAsync<Req, Resp>(
        "FlushBinlog", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcdbClient::FlushBinlogOutcomeCallable DcdbClient::FlushBinlogCallable(const FlushBinlogRequest &request)
{
    const auto prom = std::make_shared<std::promise<FlushBinlogOutcome>>();
    FlushBinlogAsync(
    request,
    [prom](
        const DcdbClient*,
        const FlushBinlogRequest&,
        FlushBinlogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcdbClient::GrantAccountPrivilegesOutcome DcdbClient::GrantAccountPrivileges(const GrantAccountPrivilegesRequest &request)
{
    auto outcome = MakeRequest(request, "GrantAccountPrivileges");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GrantAccountPrivilegesResponse rsp = GrantAccountPrivilegesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GrantAccountPrivilegesOutcome(rsp);
        else
            return GrantAccountPrivilegesOutcome(o.GetError());
    }
    else
    {
        return GrantAccountPrivilegesOutcome(outcome.GetError());
    }
}

void DcdbClient::GrantAccountPrivilegesAsync(const GrantAccountPrivilegesRequest& request, const GrantAccountPrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GrantAccountPrivilegesRequest&;
    using Resp = GrantAccountPrivilegesResponse;

    DoRequestAsync<Req, Resp>(
        "GrantAccountPrivileges", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcdbClient::GrantAccountPrivilegesOutcomeCallable DcdbClient::GrantAccountPrivilegesCallable(const GrantAccountPrivilegesRequest &request)
{
    const auto prom = std::make_shared<std::promise<GrantAccountPrivilegesOutcome>>();
    GrantAccountPrivilegesAsync(
    request,
    [prom](
        const DcdbClient*,
        const GrantAccountPrivilegesRequest&,
        GrantAccountPrivilegesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcdbClient::InitDCDBInstancesOutcome DcdbClient::InitDCDBInstances(const InitDCDBInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "InitDCDBInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InitDCDBInstancesResponse rsp = InitDCDBInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InitDCDBInstancesOutcome(rsp);
        else
            return InitDCDBInstancesOutcome(o.GetError());
    }
    else
    {
        return InitDCDBInstancesOutcome(outcome.GetError());
    }
}

void DcdbClient::InitDCDBInstancesAsync(const InitDCDBInstancesRequest& request, const InitDCDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const InitDCDBInstancesRequest&;
    using Resp = InitDCDBInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "InitDCDBInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcdbClient::InitDCDBInstancesOutcomeCallable DcdbClient::InitDCDBInstancesCallable(const InitDCDBInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<InitDCDBInstancesOutcome>>();
    InitDCDBInstancesAsync(
    request,
    [prom](
        const DcdbClient*,
        const InitDCDBInstancesRequest&,
        InitDCDBInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcdbClient::IsolateDCDBInstanceOutcome DcdbClient::IsolateDCDBInstance(const IsolateDCDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "IsolateDCDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        IsolateDCDBInstanceResponse rsp = IsolateDCDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return IsolateDCDBInstanceOutcome(rsp);
        else
            return IsolateDCDBInstanceOutcome(o.GetError());
    }
    else
    {
        return IsolateDCDBInstanceOutcome(outcome.GetError());
    }
}

void DcdbClient::IsolateDCDBInstanceAsync(const IsolateDCDBInstanceRequest& request, const IsolateDCDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const IsolateDCDBInstanceRequest&;
    using Resp = IsolateDCDBInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "IsolateDCDBInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcdbClient::IsolateDCDBInstanceOutcomeCallable DcdbClient::IsolateDCDBInstanceCallable(const IsolateDCDBInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<IsolateDCDBInstanceOutcome>>();
    IsolateDCDBInstanceAsync(
    request,
    [prom](
        const DcdbClient*,
        const IsolateDCDBInstanceRequest&,
        IsolateDCDBInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcdbClient::IsolateDedicatedDBInstanceOutcome DcdbClient::IsolateDedicatedDBInstance(const IsolateDedicatedDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "IsolateDedicatedDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        IsolateDedicatedDBInstanceResponse rsp = IsolateDedicatedDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return IsolateDedicatedDBInstanceOutcome(rsp);
        else
            return IsolateDedicatedDBInstanceOutcome(o.GetError());
    }
    else
    {
        return IsolateDedicatedDBInstanceOutcome(outcome.GetError());
    }
}

void DcdbClient::IsolateDedicatedDBInstanceAsync(const IsolateDedicatedDBInstanceRequest& request, const IsolateDedicatedDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const IsolateDedicatedDBInstanceRequest&;
    using Resp = IsolateDedicatedDBInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "IsolateDedicatedDBInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcdbClient::IsolateDedicatedDBInstanceOutcomeCallable DcdbClient::IsolateDedicatedDBInstanceCallable(const IsolateDedicatedDBInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<IsolateDedicatedDBInstanceOutcome>>();
    IsolateDedicatedDBInstanceAsync(
    request,
    [prom](
        const DcdbClient*,
        const IsolateDedicatedDBInstanceRequest&,
        IsolateDedicatedDBInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcdbClient::IsolateHourDCDBInstanceOutcome DcdbClient::IsolateHourDCDBInstance(const IsolateHourDCDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "IsolateHourDCDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        IsolateHourDCDBInstanceResponse rsp = IsolateHourDCDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return IsolateHourDCDBInstanceOutcome(rsp);
        else
            return IsolateHourDCDBInstanceOutcome(o.GetError());
    }
    else
    {
        return IsolateHourDCDBInstanceOutcome(outcome.GetError());
    }
}

void DcdbClient::IsolateHourDCDBInstanceAsync(const IsolateHourDCDBInstanceRequest& request, const IsolateHourDCDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const IsolateHourDCDBInstanceRequest&;
    using Resp = IsolateHourDCDBInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "IsolateHourDCDBInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcdbClient::IsolateHourDCDBInstanceOutcomeCallable DcdbClient::IsolateHourDCDBInstanceCallable(const IsolateHourDCDBInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<IsolateHourDCDBInstanceOutcome>>();
    IsolateHourDCDBInstanceAsync(
    request,
    [prom](
        const DcdbClient*,
        const IsolateHourDCDBInstanceRequest&,
        IsolateHourDCDBInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcdbClient::KillSessionOutcome DcdbClient::KillSession(const KillSessionRequest &request)
{
    auto outcome = MakeRequest(request, "KillSession");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        KillSessionResponse rsp = KillSessionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return KillSessionOutcome(rsp);
        else
            return KillSessionOutcome(o.GetError());
    }
    else
    {
        return KillSessionOutcome(outcome.GetError());
    }
}

void DcdbClient::KillSessionAsync(const KillSessionRequest& request, const KillSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const KillSessionRequest&;
    using Resp = KillSessionResponse;

    DoRequestAsync<Req, Resp>(
        "KillSession", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcdbClient::KillSessionOutcomeCallable DcdbClient::KillSessionCallable(const KillSessionRequest &request)
{
    const auto prom = std::make_shared<std::promise<KillSessionOutcome>>();
    KillSessionAsync(
    request,
    [prom](
        const DcdbClient*,
        const KillSessionRequest&,
        KillSessionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcdbClient::ModifyAccountConfigOutcome DcdbClient::ModifyAccountConfig(const ModifyAccountConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAccountConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAccountConfigResponse rsp = ModifyAccountConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAccountConfigOutcome(rsp);
        else
            return ModifyAccountConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyAccountConfigOutcome(outcome.GetError());
    }
}

void DcdbClient::ModifyAccountConfigAsync(const ModifyAccountConfigRequest& request, const ModifyAccountConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAccountConfigRequest&;
    using Resp = ModifyAccountConfigResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAccountConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcdbClient::ModifyAccountConfigOutcomeCallable DcdbClient::ModifyAccountConfigCallable(const ModifyAccountConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAccountConfigOutcome>>();
    ModifyAccountConfigAsync(
    request,
    [prom](
        const DcdbClient*,
        const ModifyAccountConfigRequest&,
        ModifyAccountConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcdbClient::ModifyAccountDescriptionOutcome DcdbClient::ModifyAccountDescription(const ModifyAccountDescriptionRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAccountDescription");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAccountDescriptionResponse rsp = ModifyAccountDescriptionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAccountDescriptionOutcome(rsp);
        else
            return ModifyAccountDescriptionOutcome(o.GetError());
    }
    else
    {
        return ModifyAccountDescriptionOutcome(outcome.GetError());
    }
}

void DcdbClient::ModifyAccountDescriptionAsync(const ModifyAccountDescriptionRequest& request, const ModifyAccountDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAccountDescriptionRequest&;
    using Resp = ModifyAccountDescriptionResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAccountDescription", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcdbClient::ModifyAccountDescriptionOutcomeCallable DcdbClient::ModifyAccountDescriptionCallable(const ModifyAccountDescriptionRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAccountDescriptionOutcome>>();
    ModifyAccountDescriptionAsync(
    request,
    [prom](
        const DcdbClient*,
        const ModifyAccountDescriptionRequest&,
        ModifyAccountDescriptionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcdbClient::ModifyAccountPrivilegesOutcome DcdbClient::ModifyAccountPrivileges(const ModifyAccountPrivilegesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAccountPrivileges");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAccountPrivilegesResponse rsp = ModifyAccountPrivilegesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAccountPrivilegesOutcome(rsp);
        else
            return ModifyAccountPrivilegesOutcome(o.GetError());
    }
    else
    {
        return ModifyAccountPrivilegesOutcome(outcome.GetError());
    }
}

void DcdbClient::ModifyAccountPrivilegesAsync(const ModifyAccountPrivilegesRequest& request, const ModifyAccountPrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAccountPrivilegesRequest&;
    using Resp = ModifyAccountPrivilegesResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAccountPrivileges", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcdbClient::ModifyAccountPrivilegesOutcomeCallable DcdbClient::ModifyAccountPrivilegesCallable(const ModifyAccountPrivilegesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAccountPrivilegesOutcome>>();
    ModifyAccountPrivilegesAsync(
    request,
    [prom](
        const DcdbClient*,
        const ModifyAccountPrivilegesRequest&,
        ModifyAccountPrivilegesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcdbClient::ModifyBackupConfigsOutcome DcdbClient::ModifyBackupConfigs(const ModifyBackupConfigsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBackupConfigs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBackupConfigsResponse rsp = ModifyBackupConfigsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBackupConfigsOutcome(rsp);
        else
            return ModifyBackupConfigsOutcome(o.GetError());
    }
    else
    {
        return ModifyBackupConfigsOutcome(outcome.GetError());
    }
}

void DcdbClient::ModifyBackupConfigsAsync(const ModifyBackupConfigsRequest& request, const ModifyBackupConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyBackupConfigsRequest&;
    using Resp = ModifyBackupConfigsResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyBackupConfigs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcdbClient::ModifyBackupConfigsOutcomeCallable DcdbClient::ModifyBackupConfigsCallable(const ModifyBackupConfigsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyBackupConfigsOutcome>>();
    ModifyBackupConfigsAsync(
    request,
    [prom](
        const DcdbClient*,
        const ModifyBackupConfigsRequest&,
        ModifyBackupConfigsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcdbClient::ModifyDBEncryptAttributesOutcome DcdbClient::ModifyDBEncryptAttributes(const ModifyDBEncryptAttributesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDBEncryptAttributes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDBEncryptAttributesResponse rsp = ModifyDBEncryptAttributesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDBEncryptAttributesOutcome(rsp);
        else
            return ModifyDBEncryptAttributesOutcome(o.GetError());
    }
    else
    {
        return ModifyDBEncryptAttributesOutcome(outcome.GetError());
    }
}

void DcdbClient::ModifyDBEncryptAttributesAsync(const ModifyDBEncryptAttributesRequest& request, const ModifyDBEncryptAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDBEncryptAttributesRequest&;
    using Resp = ModifyDBEncryptAttributesResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDBEncryptAttributes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcdbClient::ModifyDBEncryptAttributesOutcomeCallable DcdbClient::ModifyDBEncryptAttributesCallable(const ModifyDBEncryptAttributesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDBEncryptAttributesOutcome>>();
    ModifyDBEncryptAttributesAsync(
    request,
    [prom](
        const DcdbClient*,
        const ModifyDBEncryptAttributesRequest&,
        ModifyDBEncryptAttributesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcdbClient::ModifyDBInstanceNameOutcome DcdbClient::ModifyDBInstanceName(const ModifyDBInstanceNameRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDBInstanceName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDBInstanceNameResponse rsp = ModifyDBInstanceNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDBInstanceNameOutcome(rsp);
        else
            return ModifyDBInstanceNameOutcome(o.GetError());
    }
    else
    {
        return ModifyDBInstanceNameOutcome(outcome.GetError());
    }
}

void DcdbClient::ModifyDBInstanceNameAsync(const ModifyDBInstanceNameRequest& request, const ModifyDBInstanceNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDBInstanceNameRequest&;
    using Resp = ModifyDBInstanceNameResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDBInstanceName", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcdbClient::ModifyDBInstanceNameOutcomeCallable DcdbClient::ModifyDBInstanceNameCallable(const ModifyDBInstanceNameRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDBInstanceNameOutcome>>();
    ModifyDBInstanceNameAsync(
    request,
    [prom](
        const DcdbClient*,
        const ModifyDBInstanceNameRequest&,
        ModifyDBInstanceNameOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcdbClient::ModifyDBInstanceSecurityGroupsOutcome DcdbClient::ModifyDBInstanceSecurityGroups(const ModifyDBInstanceSecurityGroupsRequest &request)
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

void DcdbClient::ModifyDBInstanceSecurityGroupsAsync(const ModifyDBInstanceSecurityGroupsRequest& request, const ModifyDBInstanceSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

DcdbClient::ModifyDBInstanceSecurityGroupsOutcomeCallable DcdbClient::ModifyDBInstanceSecurityGroupsCallable(const ModifyDBInstanceSecurityGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDBInstanceSecurityGroupsOutcome>>();
    ModifyDBInstanceSecurityGroupsAsync(
    request,
    [prom](
        const DcdbClient*,
        const ModifyDBInstanceSecurityGroupsRequest&,
        ModifyDBInstanceSecurityGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcdbClient::ModifyDBInstancesProjectOutcome DcdbClient::ModifyDBInstancesProject(const ModifyDBInstancesProjectRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDBInstancesProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDBInstancesProjectResponse rsp = ModifyDBInstancesProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDBInstancesProjectOutcome(rsp);
        else
            return ModifyDBInstancesProjectOutcome(o.GetError());
    }
    else
    {
        return ModifyDBInstancesProjectOutcome(outcome.GetError());
    }
}

void DcdbClient::ModifyDBInstancesProjectAsync(const ModifyDBInstancesProjectRequest& request, const ModifyDBInstancesProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDBInstancesProjectRequest&;
    using Resp = ModifyDBInstancesProjectResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDBInstancesProject", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcdbClient::ModifyDBInstancesProjectOutcomeCallable DcdbClient::ModifyDBInstancesProjectCallable(const ModifyDBInstancesProjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDBInstancesProjectOutcome>>();
    ModifyDBInstancesProjectAsync(
    request,
    [prom](
        const DcdbClient*,
        const ModifyDBInstancesProjectRequest&,
        ModifyDBInstancesProjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcdbClient::ModifyDBParametersOutcome DcdbClient::ModifyDBParameters(const ModifyDBParametersRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDBParameters");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDBParametersResponse rsp = ModifyDBParametersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDBParametersOutcome(rsp);
        else
            return ModifyDBParametersOutcome(o.GetError());
    }
    else
    {
        return ModifyDBParametersOutcome(outcome.GetError());
    }
}

void DcdbClient::ModifyDBParametersAsync(const ModifyDBParametersRequest& request, const ModifyDBParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDBParametersRequest&;
    using Resp = ModifyDBParametersResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDBParameters", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcdbClient::ModifyDBParametersOutcomeCallable DcdbClient::ModifyDBParametersCallable(const ModifyDBParametersRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDBParametersOutcome>>();
    ModifyDBParametersAsync(
    request,
    [prom](
        const DcdbClient*,
        const ModifyDBParametersRequest&,
        ModifyDBParametersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcdbClient::ModifyDBSyncModeOutcome DcdbClient::ModifyDBSyncMode(const ModifyDBSyncModeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDBSyncMode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDBSyncModeResponse rsp = ModifyDBSyncModeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDBSyncModeOutcome(rsp);
        else
            return ModifyDBSyncModeOutcome(o.GetError());
    }
    else
    {
        return ModifyDBSyncModeOutcome(outcome.GetError());
    }
}

void DcdbClient::ModifyDBSyncModeAsync(const ModifyDBSyncModeRequest& request, const ModifyDBSyncModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDBSyncModeRequest&;
    using Resp = ModifyDBSyncModeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDBSyncMode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcdbClient::ModifyDBSyncModeOutcomeCallable DcdbClient::ModifyDBSyncModeCallable(const ModifyDBSyncModeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDBSyncModeOutcome>>();
    ModifyDBSyncModeAsync(
    request,
    [prom](
        const DcdbClient*,
        const ModifyDBSyncModeRequest&,
        ModifyDBSyncModeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcdbClient::ModifyInstanceNetworkOutcome DcdbClient::ModifyInstanceNetwork(const ModifyInstanceNetworkRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstanceNetwork");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstanceNetworkResponse rsp = ModifyInstanceNetworkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstanceNetworkOutcome(rsp);
        else
            return ModifyInstanceNetworkOutcome(o.GetError());
    }
    else
    {
        return ModifyInstanceNetworkOutcome(outcome.GetError());
    }
}

void DcdbClient::ModifyInstanceNetworkAsync(const ModifyInstanceNetworkRequest& request, const ModifyInstanceNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyInstanceNetworkRequest&;
    using Resp = ModifyInstanceNetworkResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyInstanceNetwork", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcdbClient::ModifyInstanceNetworkOutcomeCallable DcdbClient::ModifyInstanceNetworkCallable(const ModifyInstanceNetworkRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyInstanceNetworkOutcome>>();
    ModifyInstanceNetworkAsync(
    request,
    [prom](
        const DcdbClient*,
        const ModifyInstanceNetworkRequest&,
        ModifyInstanceNetworkOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcdbClient::ModifyInstanceProtectedPropertyOutcome DcdbClient::ModifyInstanceProtectedProperty(const ModifyInstanceProtectedPropertyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstanceProtectedProperty");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstanceProtectedPropertyResponse rsp = ModifyInstanceProtectedPropertyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstanceProtectedPropertyOutcome(rsp);
        else
            return ModifyInstanceProtectedPropertyOutcome(o.GetError());
    }
    else
    {
        return ModifyInstanceProtectedPropertyOutcome(outcome.GetError());
    }
}

void DcdbClient::ModifyInstanceProtectedPropertyAsync(const ModifyInstanceProtectedPropertyRequest& request, const ModifyInstanceProtectedPropertyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyInstanceProtectedPropertyRequest&;
    using Resp = ModifyInstanceProtectedPropertyResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyInstanceProtectedProperty", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcdbClient::ModifyInstanceProtectedPropertyOutcomeCallable DcdbClient::ModifyInstanceProtectedPropertyCallable(const ModifyInstanceProtectedPropertyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyInstanceProtectedPropertyOutcome>>();
    ModifyInstanceProtectedPropertyAsync(
    request,
    [prom](
        const DcdbClient*,
        const ModifyInstanceProtectedPropertyRequest&,
        ModifyInstanceProtectedPropertyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcdbClient::ModifyInstanceSSLAttributesOutcome DcdbClient::ModifyInstanceSSLAttributes(const ModifyInstanceSSLAttributesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstanceSSLAttributes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstanceSSLAttributesResponse rsp = ModifyInstanceSSLAttributesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstanceSSLAttributesOutcome(rsp);
        else
            return ModifyInstanceSSLAttributesOutcome(o.GetError());
    }
    else
    {
        return ModifyInstanceSSLAttributesOutcome(outcome.GetError());
    }
}

void DcdbClient::ModifyInstanceSSLAttributesAsync(const ModifyInstanceSSLAttributesRequest& request, const ModifyInstanceSSLAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyInstanceSSLAttributesRequest&;
    using Resp = ModifyInstanceSSLAttributesResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyInstanceSSLAttributes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcdbClient::ModifyInstanceSSLAttributesOutcomeCallable DcdbClient::ModifyInstanceSSLAttributesCallable(const ModifyInstanceSSLAttributesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyInstanceSSLAttributesOutcome>>();
    ModifyInstanceSSLAttributesAsync(
    request,
    [prom](
        const DcdbClient*,
        const ModifyInstanceSSLAttributesRequest&,
        ModifyInstanceSSLAttributesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcdbClient::ModifyInstanceVipOutcome DcdbClient::ModifyInstanceVip(const ModifyInstanceVipRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstanceVip");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstanceVipResponse rsp = ModifyInstanceVipResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstanceVipOutcome(rsp);
        else
            return ModifyInstanceVipOutcome(o.GetError());
    }
    else
    {
        return ModifyInstanceVipOutcome(outcome.GetError());
    }
}

void DcdbClient::ModifyInstanceVipAsync(const ModifyInstanceVipRequest& request, const ModifyInstanceVipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyInstanceVipRequest&;
    using Resp = ModifyInstanceVipResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyInstanceVip", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcdbClient::ModifyInstanceVipOutcomeCallable DcdbClient::ModifyInstanceVipCallable(const ModifyInstanceVipRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyInstanceVipOutcome>>();
    ModifyInstanceVipAsync(
    request,
    [prom](
        const DcdbClient*,
        const ModifyInstanceVipRequest&,
        ModifyInstanceVipOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcdbClient::ModifyInstanceVportOutcome DcdbClient::ModifyInstanceVport(const ModifyInstanceVportRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstanceVport");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstanceVportResponse rsp = ModifyInstanceVportResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstanceVportOutcome(rsp);
        else
            return ModifyInstanceVportOutcome(o.GetError());
    }
    else
    {
        return ModifyInstanceVportOutcome(outcome.GetError());
    }
}

void DcdbClient::ModifyInstanceVportAsync(const ModifyInstanceVportRequest& request, const ModifyInstanceVportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyInstanceVportRequest&;
    using Resp = ModifyInstanceVportResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyInstanceVport", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcdbClient::ModifyInstanceVportOutcomeCallable DcdbClient::ModifyInstanceVportCallable(const ModifyInstanceVportRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyInstanceVportOutcome>>();
    ModifyInstanceVportAsync(
    request,
    [prom](
        const DcdbClient*,
        const ModifyInstanceVportRequest&,
        ModifyInstanceVportOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcdbClient::ModifyRealServerAccessStrategyOutcome DcdbClient::ModifyRealServerAccessStrategy(const ModifyRealServerAccessStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRealServerAccessStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRealServerAccessStrategyResponse rsp = ModifyRealServerAccessStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRealServerAccessStrategyOutcome(rsp);
        else
            return ModifyRealServerAccessStrategyOutcome(o.GetError());
    }
    else
    {
        return ModifyRealServerAccessStrategyOutcome(outcome.GetError());
    }
}

void DcdbClient::ModifyRealServerAccessStrategyAsync(const ModifyRealServerAccessStrategyRequest& request, const ModifyRealServerAccessStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyRealServerAccessStrategyRequest&;
    using Resp = ModifyRealServerAccessStrategyResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyRealServerAccessStrategy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcdbClient::ModifyRealServerAccessStrategyOutcomeCallable DcdbClient::ModifyRealServerAccessStrategyCallable(const ModifyRealServerAccessStrategyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyRealServerAccessStrategyOutcome>>();
    ModifyRealServerAccessStrategyAsync(
    request,
    [prom](
        const DcdbClient*,
        const ModifyRealServerAccessStrategyRequest&,
        ModifyRealServerAccessStrategyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcdbClient::OpenDBExtranetAccessOutcome DcdbClient::OpenDBExtranetAccess(const OpenDBExtranetAccessRequest &request)
{
    auto outcome = MakeRequest(request, "OpenDBExtranetAccess");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OpenDBExtranetAccessResponse rsp = OpenDBExtranetAccessResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OpenDBExtranetAccessOutcome(rsp);
        else
            return OpenDBExtranetAccessOutcome(o.GetError());
    }
    else
    {
        return OpenDBExtranetAccessOutcome(outcome.GetError());
    }
}

void DcdbClient::OpenDBExtranetAccessAsync(const OpenDBExtranetAccessRequest& request, const OpenDBExtranetAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const OpenDBExtranetAccessRequest&;
    using Resp = OpenDBExtranetAccessResponse;

    DoRequestAsync<Req, Resp>(
        "OpenDBExtranetAccess", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcdbClient::OpenDBExtranetAccessOutcomeCallable DcdbClient::OpenDBExtranetAccessCallable(const OpenDBExtranetAccessRequest &request)
{
    const auto prom = std::make_shared<std::promise<OpenDBExtranetAccessOutcome>>();
    OpenDBExtranetAccessAsync(
    request,
    [prom](
        const DcdbClient*,
        const OpenDBExtranetAccessRequest&,
        OpenDBExtranetAccessOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcdbClient::RenewDCDBInstanceOutcome DcdbClient::RenewDCDBInstance(const RenewDCDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "RenewDCDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RenewDCDBInstanceResponse rsp = RenewDCDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RenewDCDBInstanceOutcome(rsp);
        else
            return RenewDCDBInstanceOutcome(o.GetError());
    }
    else
    {
        return RenewDCDBInstanceOutcome(outcome.GetError());
    }
}

void DcdbClient::RenewDCDBInstanceAsync(const RenewDCDBInstanceRequest& request, const RenewDCDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RenewDCDBInstanceRequest&;
    using Resp = RenewDCDBInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "RenewDCDBInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcdbClient::RenewDCDBInstanceOutcomeCallable DcdbClient::RenewDCDBInstanceCallable(const RenewDCDBInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<RenewDCDBInstanceOutcome>>();
    RenewDCDBInstanceAsync(
    request,
    [prom](
        const DcdbClient*,
        const RenewDCDBInstanceRequest&,
        RenewDCDBInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcdbClient::ResetAccountPasswordOutcome DcdbClient::ResetAccountPassword(const ResetAccountPasswordRequest &request)
{
    auto outcome = MakeRequest(request, "ResetAccountPassword");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetAccountPasswordResponse rsp = ResetAccountPasswordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetAccountPasswordOutcome(rsp);
        else
            return ResetAccountPasswordOutcome(o.GetError());
    }
    else
    {
        return ResetAccountPasswordOutcome(outcome.GetError());
    }
}

void DcdbClient::ResetAccountPasswordAsync(const ResetAccountPasswordRequest& request, const ResetAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ResetAccountPasswordRequest&;
    using Resp = ResetAccountPasswordResponse;

    DoRequestAsync<Req, Resp>(
        "ResetAccountPassword", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcdbClient::ResetAccountPasswordOutcomeCallable DcdbClient::ResetAccountPasswordCallable(const ResetAccountPasswordRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResetAccountPasswordOutcome>>();
    ResetAccountPasswordAsync(
    request,
    [prom](
        const DcdbClient*,
        const ResetAccountPasswordRequest&,
        ResetAccountPasswordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcdbClient::SwitchDBInstanceHAOutcome DcdbClient::SwitchDBInstanceHA(const SwitchDBInstanceHARequest &request)
{
    auto outcome = MakeRequest(request, "SwitchDBInstanceHA");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SwitchDBInstanceHAResponse rsp = SwitchDBInstanceHAResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SwitchDBInstanceHAOutcome(rsp);
        else
            return SwitchDBInstanceHAOutcome(o.GetError());
    }
    else
    {
        return SwitchDBInstanceHAOutcome(outcome.GetError());
    }
}

void DcdbClient::SwitchDBInstanceHAAsync(const SwitchDBInstanceHARequest& request, const SwitchDBInstanceHAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SwitchDBInstanceHARequest&;
    using Resp = SwitchDBInstanceHAResponse;

    DoRequestAsync<Req, Resp>(
        "SwitchDBInstanceHA", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcdbClient::SwitchDBInstanceHAOutcomeCallable DcdbClient::SwitchDBInstanceHACallable(const SwitchDBInstanceHARequest &request)
{
    const auto prom = std::make_shared<std::promise<SwitchDBInstanceHAOutcome>>();
    SwitchDBInstanceHAAsync(
    request,
    [prom](
        const DcdbClient*,
        const SwitchDBInstanceHARequest&,
        SwitchDBInstanceHAOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcdbClient::TerminateDedicatedDBInstanceOutcome DcdbClient::TerminateDedicatedDBInstance(const TerminateDedicatedDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "TerminateDedicatedDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TerminateDedicatedDBInstanceResponse rsp = TerminateDedicatedDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TerminateDedicatedDBInstanceOutcome(rsp);
        else
            return TerminateDedicatedDBInstanceOutcome(o.GetError());
    }
    else
    {
        return TerminateDedicatedDBInstanceOutcome(outcome.GetError());
    }
}

void DcdbClient::TerminateDedicatedDBInstanceAsync(const TerminateDedicatedDBInstanceRequest& request, const TerminateDedicatedDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const TerminateDedicatedDBInstanceRequest&;
    using Resp = TerminateDedicatedDBInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "TerminateDedicatedDBInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcdbClient::TerminateDedicatedDBInstanceOutcomeCallable DcdbClient::TerminateDedicatedDBInstanceCallable(const TerminateDedicatedDBInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<TerminateDedicatedDBInstanceOutcome>>();
    TerminateDedicatedDBInstanceAsync(
    request,
    [prom](
        const DcdbClient*,
        const TerminateDedicatedDBInstanceRequest&,
        TerminateDedicatedDBInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcdbClient::UpgradeDCDBInstanceOutcome DcdbClient::UpgradeDCDBInstance(const UpgradeDCDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "UpgradeDCDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpgradeDCDBInstanceResponse rsp = UpgradeDCDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpgradeDCDBInstanceOutcome(rsp);
        else
            return UpgradeDCDBInstanceOutcome(o.GetError());
    }
    else
    {
        return UpgradeDCDBInstanceOutcome(outcome.GetError());
    }
}

void DcdbClient::UpgradeDCDBInstanceAsync(const UpgradeDCDBInstanceRequest& request, const UpgradeDCDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpgradeDCDBInstanceRequest&;
    using Resp = UpgradeDCDBInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "UpgradeDCDBInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcdbClient::UpgradeDCDBInstanceOutcomeCallable DcdbClient::UpgradeDCDBInstanceCallable(const UpgradeDCDBInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpgradeDCDBInstanceOutcome>>();
    UpgradeDCDBInstanceAsync(
    request,
    [prom](
        const DcdbClient*,
        const UpgradeDCDBInstanceRequest&,
        UpgradeDCDBInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcdbClient::UpgradeDedicatedDCDBInstanceOutcome DcdbClient::UpgradeDedicatedDCDBInstance(const UpgradeDedicatedDCDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "UpgradeDedicatedDCDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpgradeDedicatedDCDBInstanceResponse rsp = UpgradeDedicatedDCDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpgradeDedicatedDCDBInstanceOutcome(rsp);
        else
            return UpgradeDedicatedDCDBInstanceOutcome(o.GetError());
    }
    else
    {
        return UpgradeDedicatedDCDBInstanceOutcome(outcome.GetError());
    }
}

void DcdbClient::UpgradeDedicatedDCDBInstanceAsync(const UpgradeDedicatedDCDBInstanceRequest& request, const UpgradeDedicatedDCDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpgradeDedicatedDCDBInstanceRequest&;
    using Resp = UpgradeDedicatedDCDBInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "UpgradeDedicatedDCDBInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcdbClient::UpgradeDedicatedDCDBInstanceOutcomeCallable DcdbClient::UpgradeDedicatedDCDBInstanceCallable(const UpgradeDedicatedDCDBInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpgradeDedicatedDCDBInstanceOutcome>>();
    UpgradeDedicatedDCDBInstanceAsync(
    request,
    [prom](
        const DcdbClient*,
        const UpgradeDedicatedDCDBInstanceRequest&,
        UpgradeDedicatedDCDBInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcdbClient::UpgradeHourDCDBInstanceOutcome DcdbClient::UpgradeHourDCDBInstance(const UpgradeHourDCDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "UpgradeHourDCDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpgradeHourDCDBInstanceResponse rsp = UpgradeHourDCDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpgradeHourDCDBInstanceOutcome(rsp);
        else
            return UpgradeHourDCDBInstanceOutcome(o.GetError());
    }
    else
    {
        return UpgradeHourDCDBInstanceOutcome(outcome.GetError());
    }
}

void DcdbClient::UpgradeHourDCDBInstanceAsync(const UpgradeHourDCDBInstanceRequest& request, const UpgradeHourDCDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpgradeHourDCDBInstanceRequest&;
    using Resp = UpgradeHourDCDBInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "UpgradeHourDCDBInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcdbClient::UpgradeHourDCDBInstanceOutcomeCallable DcdbClient::UpgradeHourDCDBInstanceCallable(const UpgradeHourDCDBInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpgradeHourDCDBInstanceOutcome>>();
    UpgradeHourDCDBInstanceAsync(
    request,
    [prom](
        const DcdbClient*,
        const UpgradeHourDCDBInstanceRequest&,
        UpgradeHourDCDBInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


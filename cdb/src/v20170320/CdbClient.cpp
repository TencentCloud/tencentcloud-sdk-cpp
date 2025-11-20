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

#include <tencentcloud/cdb/v20170320/CdbClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Cdb::V20170320;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

namespace
{
    const string VERSION = "2017-03-20";
    const string ENDPOINT = "cdb.tencentcloudapi.com";
}

CdbClient::CdbClient(const Credential &credential, const string &region) :
    CdbClient(credential, region, ClientProfile())
{
}

CdbClient::CdbClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CdbClient::AddTimeWindowOutcome CdbClient::AddTimeWindow(const AddTimeWindowRequest &request)
{
    auto outcome = MakeRequest(request, "AddTimeWindow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddTimeWindowResponse rsp = AddTimeWindowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddTimeWindowOutcome(rsp);
        else
            return AddTimeWindowOutcome(o.GetError());
    }
    else
    {
        return AddTimeWindowOutcome(outcome.GetError());
    }
}

void CdbClient::AddTimeWindowAsync(const AddTimeWindowRequest& request, const AddTimeWindowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddTimeWindowRequest&;
    using Resp = AddTimeWindowResponse;

    DoRequestAsync<Req, Resp>(
        "AddTimeWindow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::AddTimeWindowOutcomeCallable CdbClient::AddTimeWindowCallable(const AddTimeWindowRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddTimeWindowOutcome>>();
    AddTimeWindowAsync(
    request,
    [prom](
        const CdbClient*,
        const AddTimeWindowRequest&,
        AddTimeWindowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::AdjustCdbProxyOutcome CdbClient::AdjustCdbProxy(const AdjustCdbProxyRequest &request)
{
    auto outcome = MakeRequest(request, "AdjustCdbProxy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AdjustCdbProxyResponse rsp = AdjustCdbProxyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AdjustCdbProxyOutcome(rsp);
        else
            return AdjustCdbProxyOutcome(o.GetError());
    }
    else
    {
        return AdjustCdbProxyOutcome(outcome.GetError());
    }
}

void CdbClient::AdjustCdbProxyAsync(const AdjustCdbProxyRequest& request, const AdjustCdbProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AdjustCdbProxyRequest&;
    using Resp = AdjustCdbProxyResponse;

    DoRequestAsync<Req, Resp>(
        "AdjustCdbProxy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::AdjustCdbProxyOutcomeCallable CdbClient::AdjustCdbProxyCallable(const AdjustCdbProxyRequest &request)
{
    const auto prom = std::make_shared<std::promise<AdjustCdbProxyOutcome>>();
    AdjustCdbProxyAsync(
    request,
    [prom](
        const CdbClient*,
        const AdjustCdbProxyRequest&,
        AdjustCdbProxyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::AdjustCdbProxyAddressOutcome CdbClient::AdjustCdbProxyAddress(const AdjustCdbProxyAddressRequest &request)
{
    auto outcome = MakeRequest(request, "AdjustCdbProxyAddress");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AdjustCdbProxyAddressResponse rsp = AdjustCdbProxyAddressResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AdjustCdbProxyAddressOutcome(rsp);
        else
            return AdjustCdbProxyAddressOutcome(o.GetError());
    }
    else
    {
        return AdjustCdbProxyAddressOutcome(outcome.GetError());
    }
}

void CdbClient::AdjustCdbProxyAddressAsync(const AdjustCdbProxyAddressRequest& request, const AdjustCdbProxyAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AdjustCdbProxyAddressRequest&;
    using Resp = AdjustCdbProxyAddressResponse;

    DoRequestAsync<Req, Resp>(
        "AdjustCdbProxyAddress", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::AdjustCdbProxyAddressOutcomeCallable CdbClient::AdjustCdbProxyAddressCallable(const AdjustCdbProxyAddressRequest &request)
{
    const auto prom = std::make_shared<std::promise<AdjustCdbProxyAddressOutcome>>();
    AdjustCdbProxyAddressAsync(
    request,
    [prom](
        const CdbClient*,
        const AdjustCdbProxyAddressRequest&,
        AdjustCdbProxyAddressOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::AnalyzeAuditLogsOutcome CdbClient::AnalyzeAuditLogs(const AnalyzeAuditLogsRequest &request)
{
    auto outcome = MakeRequest(request, "AnalyzeAuditLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AnalyzeAuditLogsResponse rsp = AnalyzeAuditLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AnalyzeAuditLogsOutcome(rsp);
        else
            return AnalyzeAuditLogsOutcome(o.GetError());
    }
    else
    {
        return AnalyzeAuditLogsOutcome(outcome.GetError());
    }
}

void CdbClient::AnalyzeAuditLogsAsync(const AnalyzeAuditLogsRequest& request, const AnalyzeAuditLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AnalyzeAuditLogsRequest&;
    using Resp = AnalyzeAuditLogsResponse;

    DoRequestAsync<Req, Resp>(
        "AnalyzeAuditLogs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::AnalyzeAuditLogsOutcomeCallable CdbClient::AnalyzeAuditLogsCallable(const AnalyzeAuditLogsRequest &request)
{
    const auto prom = std::make_shared<std::promise<AnalyzeAuditLogsOutcome>>();
    AnalyzeAuditLogsAsync(
    request,
    [prom](
        const CdbClient*,
        const AnalyzeAuditLogsRequest&,
        AnalyzeAuditLogsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::AssociateSecurityGroupsOutcome CdbClient::AssociateSecurityGroups(const AssociateSecurityGroupsRequest &request)
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

void CdbClient::AssociateSecurityGroupsAsync(const AssociateSecurityGroupsRequest& request, const AssociateSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CdbClient::AssociateSecurityGroupsOutcomeCallable CdbClient::AssociateSecurityGroupsCallable(const AssociateSecurityGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<AssociateSecurityGroupsOutcome>>();
    AssociateSecurityGroupsAsync(
    request,
    [prom](
        const CdbClient*,
        const AssociateSecurityGroupsRequest&,
        AssociateSecurityGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::BalanceRoGroupLoadOutcome CdbClient::BalanceRoGroupLoad(const BalanceRoGroupLoadRequest &request)
{
    auto outcome = MakeRequest(request, "BalanceRoGroupLoad");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BalanceRoGroupLoadResponse rsp = BalanceRoGroupLoadResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BalanceRoGroupLoadOutcome(rsp);
        else
            return BalanceRoGroupLoadOutcome(o.GetError());
    }
    else
    {
        return BalanceRoGroupLoadOutcome(outcome.GetError());
    }
}

void CdbClient::BalanceRoGroupLoadAsync(const BalanceRoGroupLoadRequest& request, const BalanceRoGroupLoadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BalanceRoGroupLoadRequest&;
    using Resp = BalanceRoGroupLoadResponse;

    DoRequestAsync<Req, Resp>(
        "BalanceRoGroupLoad", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::BalanceRoGroupLoadOutcomeCallable CdbClient::BalanceRoGroupLoadCallable(const BalanceRoGroupLoadRequest &request)
{
    const auto prom = std::make_shared<std::promise<BalanceRoGroupLoadOutcome>>();
    BalanceRoGroupLoadAsync(
    request,
    [prom](
        const CdbClient*,
        const BalanceRoGroupLoadRequest&,
        BalanceRoGroupLoadOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::CheckMigrateClusterOutcome CdbClient::CheckMigrateCluster(const CheckMigrateClusterRequest &request)
{
    auto outcome = MakeRequest(request, "CheckMigrateCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckMigrateClusterResponse rsp = CheckMigrateClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckMigrateClusterOutcome(rsp);
        else
            return CheckMigrateClusterOutcome(o.GetError());
    }
    else
    {
        return CheckMigrateClusterOutcome(outcome.GetError());
    }
}

void CdbClient::CheckMigrateClusterAsync(const CheckMigrateClusterRequest& request, const CheckMigrateClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CheckMigrateClusterRequest&;
    using Resp = CheckMigrateClusterResponse;

    DoRequestAsync<Req, Resp>(
        "CheckMigrateCluster", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::CheckMigrateClusterOutcomeCallable CdbClient::CheckMigrateClusterCallable(const CheckMigrateClusterRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckMigrateClusterOutcome>>();
    CheckMigrateClusterAsync(
    request,
    [prom](
        const CdbClient*,
        const CheckMigrateClusterRequest&,
        CheckMigrateClusterOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::CloseAuditServiceOutcome CdbClient::CloseAuditService(const CloseAuditServiceRequest &request)
{
    auto outcome = MakeRequest(request, "CloseAuditService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CloseAuditServiceResponse rsp = CloseAuditServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CloseAuditServiceOutcome(rsp);
        else
            return CloseAuditServiceOutcome(o.GetError());
    }
    else
    {
        return CloseAuditServiceOutcome(outcome.GetError());
    }
}

void CdbClient::CloseAuditServiceAsync(const CloseAuditServiceRequest& request, const CloseAuditServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CloseAuditServiceRequest&;
    using Resp = CloseAuditServiceResponse;

    DoRequestAsync<Req, Resp>(
        "CloseAuditService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::CloseAuditServiceOutcomeCallable CdbClient::CloseAuditServiceCallable(const CloseAuditServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CloseAuditServiceOutcome>>();
    CloseAuditServiceAsync(
    request,
    [prom](
        const CdbClient*,
        const CloseAuditServiceRequest&,
        CloseAuditServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::CloseCDBProxyOutcome CdbClient::CloseCDBProxy(const CloseCDBProxyRequest &request)
{
    auto outcome = MakeRequest(request, "CloseCDBProxy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CloseCDBProxyResponse rsp = CloseCDBProxyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CloseCDBProxyOutcome(rsp);
        else
            return CloseCDBProxyOutcome(o.GetError());
    }
    else
    {
        return CloseCDBProxyOutcome(outcome.GetError());
    }
}

void CdbClient::CloseCDBProxyAsync(const CloseCDBProxyRequest& request, const CloseCDBProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CloseCDBProxyRequest&;
    using Resp = CloseCDBProxyResponse;

    DoRequestAsync<Req, Resp>(
        "CloseCDBProxy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::CloseCDBProxyOutcomeCallable CdbClient::CloseCDBProxyCallable(const CloseCDBProxyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CloseCDBProxyOutcome>>();
    CloseCDBProxyAsync(
    request,
    [prom](
        const CdbClient*,
        const CloseCDBProxyRequest&,
        CloseCDBProxyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::CloseCdbProxyAddressOutcome CdbClient::CloseCdbProxyAddress(const CloseCdbProxyAddressRequest &request)
{
    auto outcome = MakeRequest(request, "CloseCdbProxyAddress");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CloseCdbProxyAddressResponse rsp = CloseCdbProxyAddressResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CloseCdbProxyAddressOutcome(rsp);
        else
            return CloseCdbProxyAddressOutcome(o.GetError());
    }
    else
    {
        return CloseCdbProxyAddressOutcome(outcome.GetError());
    }
}

void CdbClient::CloseCdbProxyAddressAsync(const CloseCdbProxyAddressRequest& request, const CloseCdbProxyAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CloseCdbProxyAddressRequest&;
    using Resp = CloseCdbProxyAddressResponse;

    DoRequestAsync<Req, Resp>(
        "CloseCdbProxyAddress", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::CloseCdbProxyAddressOutcomeCallable CdbClient::CloseCdbProxyAddressCallable(const CloseCdbProxyAddressRequest &request)
{
    const auto prom = std::make_shared<std::promise<CloseCdbProxyAddressOutcome>>();
    CloseCdbProxyAddressAsync(
    request,
    [prom](
        const CdbClient*,
        const CloseCdbProxyAddressRequest&,
        CloseCdbProxyAddressOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::CloseSSLOutcome CdbClient::CloseSSL(const CloseSSLRequest &request)
{
    auto outcome = MakeRequest(request, "CloseSSL");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CloseSSLResponse rsp = CloseSSLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CloseSSLOutcome(rsp);
        else
            return CloseSSLOutcome(o.GetError());
    }
    else
    {
        return CloseSSLOutcome(outcome.GetError());
    }
}

void CdbClient::CloseSSLAsync(const CloseSSLRequest& request, const CloseSSLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CloseSSLRequest&;
    using Resp = CloseSSLResponse;

    DoRequestAsync<Req, Resp>(
        "CloseSSL", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::CloseSSLOutcomeCallable CdbClient::CloseSSLCallable(const CloseSSLRequest &request)
{
    const auto prom = std::make_shared<std::promise<CloseSSLOutcome>>();
    CloseSSLAsync(
    request,
    [prom](
        const CdbClient*,
        const CloseSSLRequest&,
        CloseSSLOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::CloseWanServiceOutcome CdbClient::CloseWanService(const CloseWanServiceRequest &request)
{
    auto outcome = MakeRequest(request, "CloseWanService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CloseWanServiceResponse rsp = CloseWanServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CloseWanServiceOutcome(rsp);
        else
            return CloseWanServiceOutcome(o.GetError());
    }
    else
    {
        return CloseWanServiceOutcome(outcome.GetError());
    }
}

void CdbClient::CloseWanServiceAsync(const CloseWanServiceRequest& request, const CloseWanServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CloseWanServiceRequest&;
    using Resp = CloseWanServiceResponse;

    DoRequestAsync<Req, Resp>(
        "CloseWanService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::CloseWanServiceOutcomeCallable CdbClient::CloseWanServiceCallable(const CloseWanServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CloseWanServiceOutcome>>();
    CloseWanServiceAsync(
    request,
    [prom](
        const CdbClient*,
        const CloseWanServiceRequest&,
        CloseWanServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::CreateAccountsOutcome CdbClient::CreateAccounts(const CreateAccountsRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAccounts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAccountsResponse rsp = CreateAccountsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAccountsOutcome(rsp);
        else
            return CreateAccountsOutcome(o.GetError());
    }
    else
    {
        return CreateAccountsOutcome(outcome.GetError());
    }
}

void CdbClient::CreateAccountsAsync(const CreateAccountsRequest& request, const CreateAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAccountsRequest&;
    using Resp = CreateAccountsResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAccounts", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::CreateAccountsOutcomeCallable CdbClient::CreateAccountsCallable(const CreateAccountsRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAccountsOutcome>>();
    CreateAccountsAsync(
    request,
    [prom](
        const CdbClient*,
        const CreateAccountsRequest&,
        CreateAccountsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::CreateAuditLogFileOutcome CdbClient::CreateAuditLogFile(const CreateAuditLogFileRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAuditLogFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAuditLogFileResponse rsp = CreateAuditLogFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAuditLogFileOutcome(rsp);
        else
            return CreateAuditLogFileOutcome(o.GetError());
    }
    else
    {
        return CreateAuditLogFileOutcome(outcome.GetError());
    }
}

void CdbClient::CreateAuditLogFileAsync(const CreateAuditLogFileRequest& request, const CreateAuditLogFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAuditLogFileRequest&;
    using Resp = CreateAuditLogFileResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAuditLogFile", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::CreateAuditLogFileOutcomeCallable CdbClient::CreateAuditLogFileCallable(const CreateAuditLogFileRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAuditLogFileOutcome>>();
    CreateAuditLogFileAsync(
    request,
    [prom](
        const CdbClient*,
        const CreateAuditLogFileRequest&,
        CreateAuditLogFileOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::CreateAuditPolicyOutcome CdbClient::CreateAuditPolicy(const CreateAuditPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAuditPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAuditPolicyResponse rsp = CreateAuditPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAuditPolicyOutcome(rsp);
        else
            return CreateAuditPolicyOutcome(o.GetError());
    }
    else
    {
        return CreateAuditPolicyOutcome(outcome.GetError());
    }
}

void CdbClient::CreateAuditPolicyAsync(const CreateAuditPolicyRequest& request, const CreateAuditPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAuditPolicyRequest&;
    using Resp = CreateAuditPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAuditPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::CreateAuditPolicyOutcomeCallable CdbClient::CreateAuditPolicyCallable(const CreateAuditPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAuditPolicyOutcome>>();
    CreateAuditPolicyAsync(
    request,
    [prom](
        const CdbClient*,
        const CreateAuditPolicyRequest&,
        CreateAuditPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::CreateAuditRuleOutcome CdbClient::CreateAuditRule(const CreateAuditRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAuditRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAuditRuleResponse rsp = CreateAuditRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAuditRuleOutcome(rsp);
        else
            return CreateAuditRuleOutcome(o.GetError());
    }
    else
    {
        return CreateAuditRuleOutcome(outcome.GetError());
    }
}

void CdbClient::CreateAuditRuleAsync(const CreateAuditRuleRequest& request, const CreateAuditRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAuditRuleRequest&;
    using Resp = CreateAuditRuleResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAuditRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::CreateAuditRuleOutcomeCallable CdbClient::CreateAuditRuleCallable(const CreateAuditRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAuditRuleOutcome>>();
    CreateAuditRuleAsync(
    request,
    [prom](
        const CdbClient*,
        const CreateAuditRuleRequest&,
        CreateAuditRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::CreateAuditRuleTemplateOutcome CdbClient::CreateAuditRuleTemplate(const CreateAuditRuleTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAuditRuleTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAuditRuleTemplateResponse rsp = CreateAuditRuleTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAuditRuleTemplateOutcome(rsp);
        else
            return CreateAuditRuleTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateAuditRuleTemplateOutcome(outcome.GetError());
    }
}

void CdbClient::CreateAuditRuleTemplateAsync(const CreateAuditRuleTemplateRequest& request, const CreateAuditRuleTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAuditRuleTemplateRequest&;
    using Resp = CreateAuditRuleTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAuditRuleTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::CreateAuditRuleTemplateOutcomeCallable CdbClient::CreateAuditRuleTemplateCallable(const CreateAuditRuleTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAuditRuleTemplateOutcome>>();
    CreateAuditRuleTemplateAsync(
    request,
    [prom](
        const CdbClient*,
        const CreateAuditRuleTemplateRequest&,
        CreateAuditRuleTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::CreateBackupOutcome CdbClient::CreateBackup(const CreateBackupRequest &request)
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

void CdbClient::CreateBackupAsync(const CreateBackupRequest& request, const CreateBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CdbClient::CreateBackupOutcomeCallable CdbClient::CreateBackupCallable(const CreateBackupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateBackupOutcome>>();
    CreateBackupAsync(
    request,
    [prom](
        const CdbClient*,
        const CreateBackupRequest&,
        CreateBackupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::CreateCdbProxyOutcome CdbClient::CreateCdbProxy(const CreateCdbProxyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCdbProxy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCdbProxyResponse rsp = CreateCdbProxyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCdbProxyOutcome(rsp);
        else
            return CreateCdbProxyOutcome(o.GetError());
    }
    else
    {
        return CreateCdbProxyOutcome(outcome.GetError());
    }
}

void CdbClient::CreateCdbProxyAsync(const CreateCdbProxyRequest& request, const CreateCdbProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCdbProxyRequest&;
    using Resp = CreateCdbProxyResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCdbProxy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::CreateCdbProxyOutcomeCallable CdbClient::CreateCdbProxyCallable(const CreateCdbProxyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCdbProxyOutcome>>();
    CreateCdbProxyAsync(
    request,
    [prom](
        const CdbClient*,
        const CreateCdbProxyRequest&,
        CreateCdbProxyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::CreateCdbProxyAddressOutcome CdbClient::CreateCdbProxyAddress(const CreateCdbProxyAddressRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCdbProxyAddress");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCdbProxyAddressResponse rsp = CreateCdbProxyAddressResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCdbProxyAddressOutcome(rsp);
        else
            return CreateCdbProxyAddressOutcome(o.GetError());
    }
    else
    {
        return CreateCdbProxyAddressOutcome(outcome.GetError());
    }
}

void CdbClient::CreateCdbProxyAddressAsync(const CreateCdbProxyAddressRequest& request, const CreateCdbProxyAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCdbProxyAddressRequest&;
    using Resp = CreateCdbProxyAddressResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCdbProxyAddress", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::CreateCdbProxyAddressOutcomeCallable CdbClient::CreateCdbProxyAddressCallable(const CreateCdbProxyAddressRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCdbProxyAddressOutcome>>();
    CreateCdbProxyAddressAsync(
    request,
    [prom](
        const CdbClient*,
        const CreateCdbProxyAddressRequest&,
        CreateCdbProxyAddressOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::CreateCloneInstanceOutcome CdbClient::CreateCloneInstance(const CreateCloneInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCloneInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCloneInstanceResponse rsp = CreateCloneInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCloneInstanceOutcome(rsp);
        else
            return CreateCloneInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateCloneInstanceOutcome(outcome.GetError());
    }
}

void CdbClient::CreateCloneInstanceAsync(const CreateCloneInstanceRequest& request, const CreateCloneInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCloneInstanceRequest&;
    using Resp = CreateCloneInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCloneInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::CreateCloneInstanceOutcomeCallable CdbClient::CreateCloneInstanceCallable(const CreateCloneInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCloneInstanceOutcome>>();
    CreateCloneInstanceAsync(
    request,
    [prom](
        const CdbClient*,
        const CreateCloneInstanceRequest&,
        CreateCloneInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::CreateDBImportJobOutcome CdbClient::CreateDBImportJob(const CreateDBImportJobRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDBImportJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDBImportJobResponse rsp = CreateDBImportJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDBImportJobOutcome(rsp);
        else
            return CreateDBImportJobOutcome(o.GetError());
    }
    else
    {
        return CreateDBImportJobOutcome(outcome.GetError());
    }
}

void CdbClient::CreateDBImportJobAsync(const CreateDBImportJobRequest& request, const CreateDBImportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDBImportJobRequest&;
    using Resp = CreateDBImportJobResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDBImportJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::CreateDBImportJobOutcomeCallable CdbClient::CreateDBImportJobCallable(const CreateDBImportJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDBImportJobOutcome>>();
    CreateDBImportJobAsync(
    request,
    [prom](
        const CdbClient*,
        const CreateDBImportJobRequest&,
        CreateDBImportJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::CreateDBInstanceOutcome CdbClient::CreateDBInstance(const CreateDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDBInstanceResponse rsp = CreateDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDBInstanceOutcome(rsp);
        else
            return CreateDBInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateDBInstanceOutcome(outcome.GetError());
    }
}

void CdbClient::CreateDBInstanceAsync(const CreateDBInstanceRequest& request, const CreateDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDBInstanceRequest&;
    using Resp = CreateDBInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDBInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::CreateDBInstanceOutcomeCallable CdbClient::CreateDBInstanceCallable(const CreateDBInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDBInstanceOutcome>>();
    CreateDBInstanceAsync(
    request,
    [prom](
        const CdbClient*,
        const CreateDBInstanceRequest&,
        CreateDBInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::CreateDBInstanceHourOutcome CdbClient::CreateDBInstanceHour(const CreateDBInstanceHourRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDBInstanceHour");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDBInstanceHourResponse rsp = CreateDBInstanceHourResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDBInstanceHourOutcome(rsp);
        else
            return CreateDBInstanceHourOutcome(o.GetError());
    }
    else
    {
        return CreateDBInstanceHourOutcome(outcome.GetError());
    }
}

void CdbClient::CreateDBInstanceHourAsync(const CreateDBInstanceHourRequest& request, const CreateDBInstanceHourAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDBInstanceHourRequest&;
    using Resp = CreateDBInstanceHourResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDBInstanceHour", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::CreateDBInstanceHourOutcomeCallable CdbClient::CreateDBInstanceHourCallable(const CreateDBInstanceHourRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDBInstanceHourOutcome>>();
    CreateDBInstanceHourAsync(
    request,
    [prom](
        const CdbClient*,
        const CreateDBInstanceHourRequest&,
        CreateDBInstanceHourOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::CreateDatabaseOutcome CdbClient::CreateDatabase(const CreateDatabaseRequest &request)
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

void CdbClient::CreateDatabaseAsync(const CreateDatabaseRequest& request, const CreateDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CdbClient::CreateDatabaseOutcomeCallable CdbClient::CreateDatabaseCallable(const CreateDatabaseRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDatabaseOutcome>>();
    CreateDatabaseAsync(
    request,
    [prom](
        const CdbClient*,
        const CreateDatabaseRequest&,
        CreateDatabaseOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::CreateDeployGroupOutcome CdbClient::CreateDeployGroup(const CreateDeployGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDeployGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDeployGroupResponse rsp = CreateDeployGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDeployGroupOutcome(rsp);
        else
            return CreateDeployGroupOutcome(o.GetError());
    }
    else
    {
        return CreateDeployGroupOutcome(outcome.GetError());
    }
}

void CdbClient::CreateDeployGroupAsync(const CreateDeployGroupRequest& request, const CreateDeployGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDeployGroupRequest&;
    using Resp = CreateDeployGroupResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDeployGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::CreateDeployGroupOutcomeCallable CdbClient::CreateDeployGroupCallable(const CreateDeployGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDeployGroupOutcome>>();
    CreateDeployGroupAsync(
    request,
    [prom](
        const CdbClient*,
        const CreateDeployGroupRequest&,
        CreateDeployGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::CreateParamTemplateOutcome CdbClient::CreateParamTemplate(const CreateParamTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateParamTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateParamTemplateResponse rsp = CreateParamTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateParamTemplateOutcome(rsp);
        else
            return CreateParamTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateParamTemplateOutcome(outcome.GetError());
    }
}

void CdbClient::CreateParamTemplateAsync(const CreateParamTemplateRequest& request, const CreateParamTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateParamTemplateRequest&;
    using Resp = CreateParamTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "CreateParamTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::CreateParamTemplateOutcomeCallable CdbClient::CreateParamTemplateCallable(const CreateParamTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateParamTemplateOutcome>>();
    CreateParamTemplateAsync(
    request,
    [prom](
        const CdbClient*,
        const CreateParamTemplateRequest&,
        CreateParamTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::CreateRoInstanceIpOutcome CdbClient::CreateRoInstanceIp(const CreateRoInstanceIpRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRoInstanceIp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRoInstanceIpResponse rsp = CreateRoInstanceIpResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRoInstanceIpOutcome(rsp);
        else
            return CreateRoInstanceIpOutcome(o.GetError());
    }
    else
    {
        return CreateRoInstanceIpOutcome(outcome.GetError());
    }
}

void CdbClient::CreateRoInstanceIpAsync(const CreateRoInstanceIpRequest& request, const CreateRoInstanceIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateRoInstanceIpRequest&;
    using Resp = CreateRoInstanceIpResponse;

    DoRequestAsync<Req, Resp>(
        "CreateRoInstanceIp", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::CreateRoInstanceIpOutcomeCallable CdbClient::CreateRoInstanceIpCallable(const CreateRoInstanceIpRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateRoInstanceIpOutcome>>();
    CreateRoInstanceIpAsync(
    request,
    [prom](
        const CdbClient*,
        const CreateRoInstanceIpRequest&,
        CreateRoInstanceIpOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::CreateRotationPasswordOutcome CdbClient::CreateRotationPassword(const CreateRotationPasswordRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRotationPassword");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRotationPasswordResponse rsp = CreateRotationPasswordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRotationPasswordOutcome(rsp);
        else
            return CreateRotationPasswordOutcome(o.GetError());
    }
    else
    {
        return CreateRotationPasswordOutcome(outcome.GetError());
    }
}

void CdbClient::CreateRotationPasswordAsync(const CreateRotationPasswordRequest& request, const CreateRotationPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateRotationPasswordRequest&;
    using Resp = CreateRotationPasswordResponse;

    DoRequestAsync<Req, Resp>(
        "CreateRotationPassword", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::CreateRotationPasswordOutcomeCallable CdbClient::CreateRotationPasswordCallable(const CreateRotationPasswordRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateRotationPasswordOutcome>>();
    CreateRotationPasswordAsync(
    request,
    [prom](
        const CdbClient*,
        const CreateRotationPasswordRequest&,
        CreateRotationPasswordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DeleteAccountsOutcome CdbClient::DeleteAccounts(const DeleteAccountsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAccounts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAccountsResponse rsp = DeleteAccountsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAccountsOutcome(rsp);
        else
            return DeleteAccountsOutcome(o.GetError());
    }
    else
    {
        return DeleteAccountsOutcome(outcome.GetError());
    }
}

void CdbClient::DeleteAccountsAsync(const DeleteAccountsRequest& request, const DeleteAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAccountsRequest&;
    using Resp = DeleteAccountsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAccounts", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::DeleteAccountsOutcomeCallable CdbClient::DeleteAccountsCallable(const DeleteAccountsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAccountsOutcome>>();
    DeleteAccountsAsync(
    request,
    [prom](
        const CdbClient*,
        const DeleteAccountsRequest&,
        DeleteAccountsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DeleteAuditLogFileOutcome CdbClient::DeleteAuditLogFile(const DeleteAuditLogFileRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAuditLogFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAuditLogFileResponse rsp = DeleteAuditLogFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAuditLogFileOutcome(rsp);
        else
            return DeleteAuditLogFileOutcome(o.GetError());
    }
    else
    {
        return DeleteAuditLogFileOutcome(outcome.GetError());
    }
}

void CdbClient::DeleteAuditLogFileAsync(const DeleteAuditLogFileRequest& request, const DeleteAuditLogFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAuditLogFileRequest&;
    using Resp = DeleteAuditLogFileResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAuditLogFile", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::DeleteAuditLogFileOutcomeCallable CdbClient::DeleteAuditLogFileCallable(const DeleteAuditLogFileRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAuditLogFileOutcome>>();
    DeleteAuditLogFileAsync(
    request,
    [prom](
        const CdbClient*,
        const DeleteAuditLogFileRequest&,
        DeleteAuditLogFileOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DeleteAuditPolicyOutcome CdbClient::DeleteAuditPolicy(const DeleteAuditPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAuditPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAuditPolicyResponse rsp = DeleteAuditPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAuditPolicyOutcome(rsp);
        else
            return DeleteAuditPolicyOutcome(o.GetError());
    }
    else
    {
        return DeleteAuditPolicyOutcome(outcome.GetError());
    }
}

void CdbClient::DeleteAuditPolicyAsync(const DeleteAuditPolicyRequest& request, const DeleteAuditPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAuditPolicyRequest&;
    using Resp = DeleteAuditPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAuditPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::DeleteAuditPolicyOutcomeCallable CdbClient::DeleteAuditPolicyCallable(const DeleteAuditPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAuditPolicyOutcome>>();
    DeleteAuditPolicyAsync(
    request,
    [prom](
        const CdbClient*,
        const DeleteAuditPolicyRequest&,
        DeleteAuditPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DeleteAuditRuleOutcome CdbClient::DeleteAuditRule(const DeleteAuditRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAuditRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAuditRuleResponse rsp = DeleteAuditRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAuditRuleOutcome(rsp);
        else
            return DeleteAuditRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteAuditRuleOutcome(outcome.GetError());
    }
}

void CdbClient::DeleteAuditRuleAsync(const DeleteAuditRuleRequest& request, const DeleteAuditRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAuditRuleRequest&;
    using Resp = DeleteAuditRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAuditRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::DeleteAuditRuleOutcomeCallable CdbClient::DeleteAuditRuleCallable(const DeleteAuditRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAuditRuleOutcome>>();
    DeleteAuditRuleAsync(
    request,
    [prom](
        const CdbClient*,
        const DeleteAuditRuleRequest&,
        DeleteAuditRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DeleteAuditRuleTemplatesOutcome CdbClient::DeleteAuditRuleTemplates(const DeleteAuditRuleTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAuditRuleTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAuditRuleTemplatesResponse rsp = DeleteAuditRuleTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAuditRuleTemplatesOutcome(rsp);
        else
            return DeleteAuditRuleTemplatesOutcome(o.GetError());
    }
    else
    {
        return DeleteAuditRuleTemplatesOutcome(outcome.GetError());
    }
}

void CdbClient::DeleteAuditRuleTemplatesAsync(const DeleteAuditRuleTemplatesRequest& request, const DeleteAuditRuleTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAuditRuleTemplatesRequest&;
    using Resp = DeleteAuditRuleTemplatesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAuditRuleTemplates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::DeleteAuditRuleTemplatesOutcomeCallable CdbClient::DeleteAuditRuleTemplatesCallable(const DeleteAuditRuleTemplatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAuditRuleTemplatesOutcome>>();
    DeleteAuditRuleTemplatesAsync(
    request,
    [prom](
        const CdbClient*,
        const DeleteAuditRuleTemplatesRequest&,
        DeleteAuditRuleTemplatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DeleteBackupOutcome CdbClient::DeleteBackup(const DeleteBackupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteBackup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteBackupResponse rsp = DeleteBackupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteBackupOutcome(rsp);
        else
            return DeleteBackupOutcome(o.GetError());
    }
    else
    {
        return DeleteBackupOutcome(outcome.GetError());
    }
}

void CdbClient::DeleteBackupAsync(const DeleteBackupRequest& request, const DeleteBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteBackupRequest&;
    using Resp = DeleteBackupResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteBackup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::DeleteBackupOutcomeCallable CdbClient::DeleteBackupCallable(const DeleteBackupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteBackupOutcome>>();
    DeleteBackupAsync(
    request,
    [prom](
        const CdbClient*,
        const DeleteBackupRequest&,
        DeleteBackupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DeleteDatabaseOutcome CdbClient::DeleteDatabase(const DeleteDatabaseRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDatabase");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDatabaseResponse rsp = DeleteDatabaseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDatabaseOutcome(rsp);
        else
            return DeleteDatabaseOutcome(o.GetError());
    }
    else
    {
        return DeleteDatabaseOutcome(outcome.GetError());
    }
}

void CdbClient::DeleteDatabaseAsync(const DeleteDatabaseRequest& request, const DeleteDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDatabaseRequest&;
    using Resp = DeleteDatabaseResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDatabase", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::DeleteDatabaseOutcomeCallable CdbClient::DeleteDatabaseCallable(const DeleteDatabaseRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDatabaseOutcome>>();
    DeleteDatabaseAsync(
    request,
    [prom](
        const CdbClient*,
        const DeleteDatabaseRequest&,
        DeleteDatabaseOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DeleteDeployGroupsOutcome CdbClient::DeleteDeployGroups(const DeleteDeployGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDeployGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDeployGroupsResponse rsp = DeleteDeployGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDeployGroupsOutcome(rsp);
        else
            return DeleteDeployGroupsOutcome(o.GetError());
    }
    else
    {
        return DeleteDeployGroupsOutcome(outcome.GetError());
    }
}

void CdbClient::DeleteDeployGroupsAsync(const DeleteDeployGroupsRequest& request, const DeleteDeployGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDeployGroupsRequest&;
    using Resp = DeleteDeployGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDeployGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::DeleteDeployGroupsOutcomeCallable CdbClient::DeleteDeployGroupsCallable(const DeleteDeployGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDeployGroupsOutcome>>();
    DeleteDeployGroupsAsync(
    request,
    [prom](
        const CdbClient*,
        const DeleteDeployGroupsRequest&,
        DeleteDeployGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DeleteParamTemplateOutcome CdbClient::DeleteParamTemplate(const DeleteParamTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteParamTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteParamTemplateResponse rsp = DeleteParamTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteParamTemplateOutcome(rsp);
        else
            return DeleteParamTemplateOutcome(o.GetError());
    }
    else
    {
        return DeleteParamTemplateOutcome(outcome.GetError());
    }
}

void CdbClient::DeleteParamTemplateAsync(const DeleteParamTemplateRequest& request, const DeleteParamTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteParamTemplateRequest&;
    using Resp = DeleteParamTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteParamTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::DeleteParamTemplateOutcomeCallable CdbClient::DeleteParamTemplateCallable(const DeleteParamTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteParamTemplateOutcome>>();
    DeleteParamTemplateAsync(
    request,
    [prom](
        const CdbClient*,
        const DeleteParamTemplateRequest&,
        DeleteParamTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DeleteRotationPasswordOutcome CdbClient::DeleteRotationPassword(const DeleteRotationPasswordRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRotationPassword");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRotationPasswordResponse rsp = DeleteRotationPasswordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRotationPasswordOutcome(rsp);
        else
            return DeleteRotationPasswordOutcome(o.GetError());
    }
    else
    {
        return DeleteRotationPasswordOutcome(outcome.GetError());
    }
}

void CdbClient::DeleteRotationPasswordAsync(const DeleteRotationPasswordRequest& request, const DeleteRotationPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteRotationPasswordRequest&;
    using Resp = DeleteRotationPasswordResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRotationPassword", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::DeleteRotationPasswordOutcomeCallable CdbClient::DeleteRotationPasswordCallable(const DeleteRotationPasswordRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRotationPasswordOutcome>>();
    DeleteRotationPasswordAsync(
    request,
    [prom](
        const CdbClient*,
        const DeleteRotationPasswordRequest&,
        DeleteRotationPasswordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DeleteTimeWindowOutcome CdbClient::DeleteTimeWindow(const DeleteTimeWindowRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTimeWindow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTimeWindowResponse rsp = DeleteTimeWindowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTimeWindowOutcome(rsp);
        else
            return DeleteTimeWindowOutcome(o.GetError());
    }
    else
    {
        return DeleteTimeWindowOutcome(outcome.GetError());
    }
}

void CdbClient::DeleteTimeWindowAsync(const DeleteTimeWindowRequest& request, const DeleteTimeWindowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteTimeWindowRequest&;
    using Resp = DeleteTimeWindowResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteTimeWindow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::DeleteTimeWindowOutcomeCallable CdbClient::DeleteTimeWindowCallable(const DeleteTimeWindowRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteTimeWindowOutcome>>();
    DeleteTimeWindowAsync(
    request,
    [prom](
        const CdbClient*,
        const DeleteTimeWindowRequest&,
        DeleteTimeWindowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DescribeAccountPrivilegesOutcome CdbClient::DescribeAccountPrivileges(const DescribeAccountPrivilegesRequest &request)
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

void CdbClient::DescribeAccountPrivilegesAsync(const DescribeAccountPrivilegesRequest& request, const DescribeAccountPrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CdbClient::DescribeAccountPrivilegesOutcomeCallable CdbClient::DescribeAccountPrivilegesCallable(const DescribeAccountPrivilegesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAccountPrivilegesOutcome>>();
    DescribeAccountPrivilegesAsync(
    request,
    [prom](
        const CdbClient*,
        const DescribeAccountPrivilegesRequest&,
        DescribeAccountPrivilegesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DescribeAccountsOutcome CdbClient::DescribeAccounts(const DescribeAccountsRequest &request)
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

void CdbClient::DescribeAccountsAsync(const DescribeAccountsRequest& request, const DescribeAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CdbClient::DescribeAccountsOutcomeCallable CdbClient::DescribeAccountsCallable(const DescribeAccountsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAccountsOutcome>>();
    DescribeAccountsAsync(
    request,
    [prom](
        const CdbClient*,
        const DescribeAccountsRequest&,
        DescribeAccountsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DescribeAsyncRequestInfoOutcome CdbClient::DescribeAsyncRequestInfo(const DescribeAsyncRequestInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAsyncRequestInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAsyncRequestInfoResponse rsp = DescribeAsyncRequestInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAsyncRequestInfoOutcome(rsp);
        else
            return DescribeAsyncRequestInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeAsyncRequestInfoOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeAsyncRequestInfoAsync(const DescribeAsyncRequestInfoRequest& request, const DescribeAsyncRequestInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAsyncRequestInfoRequest&;
    using Resp = DescribeAsyncRequestInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAsyncRequestInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::DescribeAsyncRequestInfoOutcomeCallable CdbClient::DescribeAsyncRequestInfoCallable(const DescribeAsyncRequestInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAsyncRequestInfoOutcome>>();
    DescribeAsyncRequestInfoAsync(
    request,
    [prom](
        const CdbClient*,
        const DescribeAsyncRequestInfoRequest&,
        DescribeAsyncRequestInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DescribeAuditConfigOutcome CdbClient::DescribeAuditConfig(const DescribeAuditConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAuditConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAuditConfigResponse rsp = DescribeAuditConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAuditConfigOutcome(rsp);
        else
            return DescribeAuditConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeAuditConfigOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeAuditConfigAsync(const DescribeAuditConfigRequest& request, const DescribeAuditConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAuditConfigRequest&;
    using Resp = DescribeAuditConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAuditConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::DescribeAuditConfigOutcomeCallable CdbClient::DescribeAuditConfigCallable(const DescribeAuditConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAuditConfigOutcome>>();
    DescribeAuditConfigAsync(
    request,
    [prom](
        const CdbClient*,
        const DescribeAuditConfigRequest&,
        DescribeAuditConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DescribeAuditInstanceListOutcome CdbClient::DescribeAuditInstanceList(const DescribeAuditInstanceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAuditInstanceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAuditInstanceListResponse rsp = DescribeAuditInstanceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAuditInstanceListOutcome(rsp);
        else
            return DescribeAuditInstanceListOutcome(o.GetError());
    }
    else
    {
        return DescribeAuditInstanceListOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeAuditInstanceListAsync(const DescribeAuditInstanceListRequest& request, const DescribeAuditInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAuditInstanceListRequest&;
    using Resp = DescribeAuditInstanceListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAuditInstanceList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::DescribeAuditInstanceListOutcomeCallable CdbClient::DescribeAuditInstanceListCallable(const DescribeAuditInstanceListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAuditInstanceListOutcome>>();
    DescribeAuditInstanceListAsync(
    request,
    [prom](
        const CdbClient*,
        const DescribeAuditInstanceListRequest&,
        DescribeAuditInstanceListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DescribeAuditLogFilesOutcome CdbClient::DescribeAuditLogFiles(const DescribeAuditLogFilesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAuditLogFiles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAuditLogFilesResponse rsp = DescribeAuditLogFilesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAuditLogFilesOutcome(rsp);
        else
            return DescribeAuditLogFilesOutcome(o.GetError());
    }
    else
    {
        return DescribeAuditLogFilesOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeAuditLogFilesAsync(const DescribeAuditLogFilesRequest& request, const DescribeAuditLogFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAuditLogFilesRequest&;
    using Resp = DescribeAuditLogFilesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAuditLogFiles", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::DescribeAuditLogFilesOutcomeCallable CdbClient::DescribeAuditLogFilesCallable(const DescribeAuditLogFilesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAuditLogFilesOutcome>>();
    DescribeAuditLogFilesAsync(
    request,
    [prom](
        const CdbClient*,
        const DescribeAuditLogFilesRequest&,
        DescribeAuditLogFilesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DescribeAuditLogsOutcome CdbClient::DescribeAuditLogs(const DescribeAuditLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAuditLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAuditLogsResponse rsp = DescribeAuditLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAuditLogsOutcome(rsp);
        else
            return DescribeAuditLogsOutcome(o.GetError());
    }
    else
    {
        return DescribeAuditLogsOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeAuditLogsAsync(const DescribeAuditLogsRequest& request, const DescribeAuditLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAuditLogsRequest&;
    using Resp = DescribeAuditLogsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAuditLogs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::DescribeAuditLogsOutcomeCallable CdbClient::DescribeAuditLogsCallable(const DescribeAuditLogsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAuditLogsOutcome>>();
    DescribeAuditLogsAsync(
    request,
    [prom](
        const CdbClient*,
        const DescribeAuditLogsRequest&,
        DescribeAuditLogsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DescribeAuditPoliciesOutcome CdbClient::DescribeAuditPolicies(const DescribeAuditPoliciesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAuditPolicies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAuditPoliciesResponse rsp = DescribeAuditPoliciesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAuditPoliciesOutcome(rsp);
        else
            return DescribeAuditPoliciesOutcome(o.GetError());
    }
    else
    {
        return DescribeAuditPoliciesOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeAuditPoliciesAsync(const DescribeAuditPoliciesRequest& request, const DescribeAuditPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAuditPoliciesRequest&;
    using Resp = DescribeAuditPoliciesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAuditPolicies", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::DescribeAuditPoliciesOutcomeCallable CdbClient::DescribeAuditPoliciesCallable(const DescribeAuditPoliciesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAuditPoliciesOutcome>>();
    DescribeAuditPoliciesAsync(
    request,
    [prom](
        const CdbClient*,
        const DescribeAuditPoliciesRequest&,
        DescribeAuditPoliciesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DescribeAuditRuleTemplateModifyHistoryOutcome CdbClient::DescribeAuditRuleTemplateModifyHistory(const DescribeAuditRuleTemplateModifyHistoryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAuditRuleTemplateModifyHistory");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAuditRuleTemplateModifyHistoryResponse rsp = DescribeAuditRuleTemplateModifyHistoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAuditRuleTemplateModifyHistoryOutcome(rsp);
        else
            return DescribeAuditRuleTemplateModifyHistoryOutcome(o.GetError());
    }
    else
    {
        return DescribeAuditRuleTemplateModifyHistoryOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeAuditRuleTemplateModifyHistoryAsync(const DescribeAuditRuleTemplateModifyHistoryRequest& request, const DescribeAuditRuleTemplateModifyHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAuditRuleTemplateModifyHistoryRequest&;
    using Resp = DescribeAuditRuleTemplateModifyHistoryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAuditRuleTemplateModifyHistory", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::DescribeAuditRuleTemplateModifyHistoryOutcomeCallable CdbClient::DescribeAuditRuleTemplateModifyHistoryCallable(const DescribeAuditRuleTemplateModifyHistoryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAuditRuleTemplateModifyHistoryOutcome>>();
    DescribeAuditRuleTemplateModifyHistoryAsync(
    request,
    [prom](
        const CdbClient*,
        const DescribeAuditRuleTemplateModifyHistoryRequest&,
        DescribeAuditRuleTemplateModifyHistoryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DescribeAuditRuleTemplatesOutcome CdbClient::DescribeAuditRuleTemplates(const DescribeAuditRuleTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAuditRuleTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAuditRuleTemplatesResponse rsp = DescribeAuditRuleTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAuditRuleTemplatesOutcome(rsp);
        else
            return DescribeAuditRuleTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeAuditRuleTemplatesOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeAuditRuleTemplatesAsync(const DescribeAuditRuleTemplatesRequest& request, const DescribeAuditRuleTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAuditRuleTemplatesRequest&;
    using Resp = DescribeAuditRuleTemplatesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAuditRuleTemplates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::DescribeAuditRuleTemplatesOutcomeCallable CdbClient::DescribeAuditRuleTemplatesCallable(const DescribeAuditRuleTemplatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAuditRuleTemplatesOutcome>>();
    DescribeAuditRuleTemplatesAsync(
    request,
    [prom](
        const CdbClient*,
        const DescribeAuditRuleTemplatesRequest&,
        DescribeAuditRuleTemplatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DescribeAuditRulesOutcome CdbClient::DescribeAuditRules(const DescribeAuditRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAuditRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAuditRulesResponse rsp = DescribeAuditRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAuditRulesOutcome(rsp);
        else
            return DescribeAuditRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeAuditRulesOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeAuditRulesAsync(const DescribeAuditRulesRequest& request, const DescribeAuditRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAuditRulesRequest&;
    using Resp = DescribeAuditRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAuditRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::DescribeAuditRulesOutcomeCallable CdbClient::DescribeAuditRulesCallable(const DescribeAuditRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAuditRulesOutcome>>();
    DescribeAuditRulesAsync(
    request,
    [prom](
        const CdbClient*,
        const DescribeAuditRulesRequest&,
        DescribeAuditRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DescribeBackupConfigOutcome CdbClient::DescribeBackupConfig(const DescribeBackupConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackupConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackupConfigResponse rsp = DescribeBackupConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackupConfigOutcome(rsp);
        else
            return DescribeBackupConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeBackupConfigOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeBackupConfigAsync(const DescribeBackupConfigRequest& request, const DescribeBackupConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBackupConfigRequest&;
    using Resp = DescribeBackupConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBackupConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::DescribeBackupConfigOutcomeCallable CdbClient::DescribeBackupConfigCallable(const DescribeBackupConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBackupConfigOutcome>>();
    DescribeBackupConfigAsync(
    request,
    [prom](
        const CdbClient*,
        const DescribeBackupConfigRequest&,
        DescribeBackupConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DescribeBackupDecryptionKeyOutcome CdbClient::DescribeBackupDecryptionKey(const DescribeBackupDecryptionKeyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackupDecryptionKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackupDecryptionKeyResponse rsp = DescribeBackupDecryptionKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackupDecryptionKeyOutcome(rsp);
        else
            return DescribeBackupDecryptionKeyOutcome(o.GetError());
    }
    else
    {
        return DescribeBackupDecryptionKeyOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeBackupDecryptionKeyAsync(const DescribeBackupDecryptionKeyRequest& request, const DescribeBackupDecryptionKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBackupDecryptionKeyRequest&;
    using Resp = DescribeBackupDecryptionKeyResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBackupDecryptionKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::DescribeBackupDecryptionKeyOutcomeCallable CdbClient::DescribeBackupDecryptionKeyCallable(const DescribeBackupDecryptionKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBackupDecryptionKeyOutcome>>();
    DescribeBackupDecryptionKeyAsync(
    request,
    [prom](
        const CdbClient*,
        const DescribeBackupDecryptionKeyRequest&,
        DescribeBackupDecryptionKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DescribeBackupDownloadRestrictionOutcome CdbClient::DescribeBackupDownloadRestriction(const DescribeBackupDownloadRestrictionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackupDownloadRestriction");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackupDownloadRestrictionResponse rsp = DescribeBackupDownloadRestrictionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackupDownloadRestrictionOutcome(rsp);
        else
            return DescribeBackupDownloadRestrictionOutcome(o.GetError());
    }
    else
    {
        return DescribeBackupDownloadRestrictionOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeBackupDownloadRestrictionAsync(const DescribeBackupDownloadRestrictionRequest& request, const DescribeBackupDownloadRestrictionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBackupDownloadRestrictionRequest&;
    using Resp = DescribeBackupDownloadRestrictionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBackupDownloadRestriction", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::DescribeBackupDownloadRestrictionOutcomeCallable CdbClient::DescribeBackupDownloadRestrictionCallable(const DescribeBackupDownloadRestrictionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBackupDownloadRestrictionOutcome>>();
    DescribeBackupDownloadRestrictionAsync(
    request,
    [prom](
        const CdbClient*,
        const DescribeBackupDownloadRestrictionRequest&,
        DescribeBackupDownloadRestrictionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DescribeBackupEncryptionStatusOutcome CdbClient::DescribeBackupEncryptionStatus(const DescribeBackupEncryptionStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackupEncryptionStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackupEncryptionStatusResponse rsp = DescribeBackupEncryptionStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackupEncryptionStatusOutcome(rsp);
        else
            return DescribeBackupEncryptionStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeBackupEncryptionStatusOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeBackupEncryptionStatusAsync(const DescribeBackupEncryptionStatusRequest& request, const DescribeBackupEncryptionStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBackupEncryptionStatusRequest&;
    using Resp = DescribeBackupEncryptionStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBackupEncryptionStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::DescribeBackupEncryptionStatusOutcomeCallable CdbClient::DescribeBackupEncryptionStatusCallable(const DescribeBackupEncryptionStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBackupEncryptionStatusOutcome>>();
    DescribeBackupEncryptionStatusAsync(
    request,
    [prom](
        const CdbClient*,
        const DescribeBackupEncryptionStatusRequest&,
        DescribeBackupEncryptionStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DescribeBackupOverviewOutcome CdbClient::DescribeBackupOverview(const DescribeBackupOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackupOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackupOverviewResponse rsp = DescribeBackupOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackupOverviewOutcome(rsp);
        else
            return DescribeBackupOverviewOutcome(o.GetError());
    }
    else
    {
        return DescribeBackupOverviewOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeBackupOverviewAsync(const DescribeBackupOverviewRequest& request, const DescribeBackupOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBackupOverviewRequest&;
    using Resp = DescribeBackupOverviewResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBackupOverview", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::DescribeBackupOverviewOutcomeCallable CdbClient::DescribeBackupOverviewCallable(const DescribeBackupOverviewRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBackupOverviewOutcome>>();
    DescribeBackupOverviewAsync(
    request,
    [prom](
        const CdbClient*,
        const DescribeBackupOverviewRequest&,
        DescribeBackupOverviewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DescribeBackupSummariesOutcome CdbClient::DescribeBackupSummaries(const DescribeBackupSummariesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackupSummaries");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackupSummariesResponse rsp = DescribeBackupSummariesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackupSummariesOutcome(rsp);
        else
            return DescribeBackupSummariesOutcome(o.GetError());
    }
    else
    {
        return DescribeBackupSummariesOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeBackupSummariesAsync(const DescribeBackupSummariesRequest& request, const DescribeBackupSummariesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBackupSummariesRequest&;
    using Resp = DescribeBackupSummariesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBackupSummaries", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::DescribeBackupSummariesOutcomeCallable CdbClient::DescribeBackupSummariesCallable(const DescribeBackupSummariesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBackupSummariesOutcome>>();
    DescribeBackupSummariesAsync(
    request,
    [prom](
        const CdbClient*,
        const DescribeBackupSummariesRequest&,
        DescribeBackupSummariesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DescribeBackupsOutcome CdbClient::DescribeBackups(const DescribeBackupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackupsResponse rsp = DescribeBackupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackupsOutcome(rsp);
        else
            return DescribeBackupsOutcome(o.GetError());
    }
    else
    {
        return DescribeBackupsOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeBackupsAsync(const DescribeBackupsRequest& request, const DescribeBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBackupsRequest&;
    using Resp = DescribeBackupsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBackups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::DescribeBackupsOutcomeCallable CdbClient::DescribeBackupsCallable(const DescribeBackupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBackupsOutcome>>();
    DescribeBackupsAsync(
    request,
    [prom](
        const CdbClient*,
        const DescribeBackupsRequest&,
        DescribeBackupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DescribeBinlogBackupOverviewOutcome CdbClient::DescribeBinlogBackupOverview(const DescribeBinlogBackupOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBinlogBackupOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBinlogBackupOverviewResponse rsp = DescribeBinlogBackupOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBinlogBackupOverviewOutcome(rsp);
        else
            return DescribeBinlogBackupOverviewOutcome(o.GetError());
    }
    else
    {
        return DescribeBinlogBackupOverviewOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeBinlogBackupOverviewAsync(const DescribeBinlogBackupOverviewRequest& request, const DescribeBinlogBackupOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBinlogBackupOverviewRequest&;
    using Resp = DescribeBinlogBackupOverviewResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBinlogBackupOverview", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::DescribeBinlogBackupOverviewOutcomeCallable CdbClient::DescribeBinlogBackupOverviewCallable(const DescribeBinlogBackupOverviewRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBinlogBackupOverviewOutcome>>();
    DescribeBinlogBackupOverviewAsync(
    request,
    [prom](
        const CdbClient*,
        const DescribeBinlogBackupOverviewRequest&,
        DescribeBinlogBackupOverviewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DescribeBinlogsOutcome CdbClient::DescribeBinlogs(const DescribeBinlogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBinlogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBinlogsResponse rsp = DescribeBinlogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBinlogsOutcome(rsp);
        else
            return DescribeBinlogsOutcome(o.GetError());
    }
    else
    {
        return DescribeBinlogsOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeBinlogsAsync(const DescribeBinlogsRequest& request, const DescribeBinlogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBinlogsRequest&;
    using Resp = DescribeBinlogsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBinlogs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::DescribeBinlogsOutcomeCallable CdbClient::DescribeBinlogsCallable(const DescribeBinlogsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBinlogsOutcome>>();
    DescribeBinlogsAsync(
    request,
    [prom](
        const CdbClient*,
        const DescribeBinlogsRequest&,
        DescribeBinlogsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DescribeCPUExpandStrategyInfoOutcome CdbClient::DescribeCPUExpandStrategyInfo(const DescribeCPUExpandStrategyInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCPUExpandStrategyInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCPUExpandStrategyInfoResponse rsp = DescribeCPUExpandStrategyInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCPUExpandStrategyInfoOutcome(rsp);
        else
            return DescribeCPUExpandStrategyInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeCPUExpandStrategyInfoOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeCPUExpandStrategyInfoAsync(const DescribeCPUExpandStrategyInfoRequest& request, const DescribeCPUExpandStrategyInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCPUExpandStrategyInfoRequest&;
    using Resp = DescribeCPUExpandStrategyInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCPUExpandStrategyInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::DescribeCPUExpandStrategyInfoOutcomeCallable CdbClient::DescribeCPUExpandStrategyInfoCallable(const DescribeCPUExpandStrategyInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCPUExpandStrategyInfoOutcome>>();
    DescribeCPUExpandStrategyInfoAsync(
    request,
    [prom](
        const CdbClient*,
        const DescribeCPUExpandStrategyInfoRequest&,
        DescribeCPUExpandStrategyInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DescribeCdbProxyInfoOutcome CdbClient::DescribeCdbProxyInfo(const DescribeCdbProxyInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCdbProxyInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCdbProxyInfoResponse rsp = DescribeCdbProxyInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCdbProxyInfoOutcome(rsp);
        else
            return DescribeCdbProxyInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeCdbProxyInfoOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeCdbProxyInfoAsync(const DescribeCdbProxyInfoRequest& request, const DescribeCdbProxyInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCdbProxyInfoRequest&;
    using Resp = DescribeCdbProxyInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCdbProxyInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::DescribeCdbProxyInfoOutcomeCallable CdbClient::DescribeCdbProxyInfoCallable(const DescribeCdbProxyInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCdbProxyInfoOutcome>>();
    DescribeCdbProxyInfoAsync(
    request,
    [prom](
        const CdbClient*,
        const DescribeCdbProxyInfoRequest&,
        DescribeCdbProxyInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DescribeCdbZoneConfigOutcome CdbClient::DescribeCdbZoneConfig(const DescribeCdbZoneConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCdbZoneConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCdbZoneConfigResponse rsp = DescribeCdbZoneConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCdbZoneConfigOutcome(rsp);
        else
            return DescribeCdbZoneConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeCdbZoneConfigOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeCdbZoneConfigAsync(const DescribeCdbZoneConfigRequest& request, const DescribeCdbZoneConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCdbZoneConfigRequest&;
    using Resp = DescribeCdbZoneConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCdbZoneConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::DescribeCdbZoneConfigOutcomeCallable CdbClient::DescribeCdbZoneConfigCallable(const DescribeCdbZoneConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCdbZoneConfigOutcome>>();
    DescribeCdbZoneConfigAsync(
    request,
    [prom](
        const CdbClient*,
        const DescribeCdbZoneConfigRequest&,
        DescribeCdbZoneConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DescribeCloneListOutcome CdbClient::DescribeCloneList(const DescribeCloneListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloneList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloneListResponse rsp = DescribeCloneListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloneListOutcome(rsp);
        else
            return DescribeCloneListOutcome(o.GetError());
    }
    else
    {
        return DescribeCloneListOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeCloneListAsync(const DescribeCloneListRequest& request, const DescribeCloneListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloneListRequest&;
    using Resp = DescribeCloneListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloneList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::DescribeCloneListOutcomeCallable CdbClient::DescribeCloneListCallable(const DescribeCloneListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloneListOutcome>>();
    DescribeCloneListAsync(
    request,
    [prom](
        const CdbClient*,
        const DescribeCloneListRequest&,
        DescribeCloneListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DescribeClusterInfoOutcome CdbClient::DescribeClusterInfo(const DescribeClusterInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterInfoResponse rsp = DescribeClusterInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterInfoOutcome(rsp);
        else
            return DescribeClusterInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterInfoOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeClusterInfoAsync(const DescribeClusterInfoRequest& request, const DescribeClusterInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeClusterInfoRequest&;
    using Resp = DescribeClusterInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClusterInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::DescribeClusterInfoOutcomeCallable CdbClient::DescribeClusterInfoCallable(const DescribeClusterInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClusterInfoOutcome>>();
    DescribeClusterInfoAsync(
    request,
    [prom](
        const CdbClient*,
        const DescribeClusterInfoRequest&,
        DescribeClusterInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DescribeCpuExpandHistoryOutcome CdbClient::DescribeCpuExpandHistory(const DescribeCpuExpandHistoryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCpuExpandHistory");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCpuExpandHistoryResponse rsp = DescribeCpuExpandHistoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCpuExpandHistoryOutcome(rsp);
        else
            return DescribeCpuExpandHistoryOutcome(o.GetError());
    }
    else
    {
        return DescribeCpuExpandHistoryOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeCpuExpandHistoryAsync(const DescribeCpuExpandHistoryRequest& request, const DescribeCpuExpandHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCpuExpandHistoryRequest&;
    using Resp = DescribeCpuExpandHistoryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCpuExpandHistory", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::DescribeCpuExpandHistoryOutcomeCallable CdbClient::DescribeCpuExpandHistoryCallable(const DescribeCpuExpandHistoryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCpuExpandHistoryOutcome>>();
    DescribeCpuExpandHistoryAsync(
    request,
    [prom](
        const CdbClient*,
        const DescribeCpuExpandHistoryRequest&,
        DescribeCpuExpandHistoryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DescribeDBFeaturesOutcome CdbClient::DescribeDBFeatures(const DescribeDBFeaturesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBFeatures");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBFeaturesResponse rsp = DescribeDBFeaturesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBFeaturesOutcome(rsp);
        else
            return DescribeDBFeaturesOutcome(o.GetError());
    }
    else
    {
        return DescribeDBFeaturesOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeDBFeaturesAsync(const DescribeDBFeaturesRequest& request, const DescribeDBFeaturesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDBFeaturesRequest&;
    using Resp = DescribeDBFeaturesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDBFeatures", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::DescribeDBFeaturesOutcomeCallable CdbClient::DescribeDBFeaturesCallable(const DescribeDBFeaturesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBFeaturesOutcome>>();
    DescribeDBFeaturesAsync(
    request,
    [prom](
        const CdbClient*,
        const DescribeDBFeaturesRequest&,
        DescribeDBFeaturesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DescribeDBImportRecordsOutcome CdbClient::DescribeDBImportRecords(const DescribeDBImportRecordsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBImportRecords");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBImportRecordsResponse rsp = DescribeDBImportRecordsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBImportRecordsOutcome(rsp);
        else
            return DescribeDBImportRecordsOutcome(o.GetError());
    }
    else
    {
        return DescribeDBImportRecordsOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeDBImportRecordsAsync(const DescribeDBImportRecordsRequest& request, const DescribeDBImportRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDBImportRecordsRequest&;
    using Resp = DescribeDBImportRecordsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDBImportRecords", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::DescribeDBImportRecordsOutcomeCallable CdbClient::DescribeDBImportRecordsCallable(const DescribeDBImportRecordsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBImportRecordsOutcome>>();
    DescribeDBImportRecordsAsync(
    request,
    [prom](
        const CdbClient*,
        const DescribeDBImportRecordsRequest&,
        DescribeDBImportRecordsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DescribeDBInstanceCharsetOutcome CdbClient::DescribeDBInstanceCharset(const DescribeDBInstanceCharsetRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBInstanceCharset");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBInstanceCharsetResponse rsp = DescribeDBInstanceCharsetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBInstanceCharsetOutcome(rsp);
        else
            return DescribeDBInstanceCharsetOutcome(o.GetError());
    }
    else
    {
        return DescribeDBInstanceCharsetOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeDBInstanceCharsetAsync(const DescribeDBInstanceCharsetRequest& request, const DescribeDBInstanceCharsetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDBInstanceCharsetRequest&;
    using Resp = DescribeDBInstanceCharsetResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDBInstanceCharset", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::DescribeDBInstanceCharsetOutcomeCallable CdbClient::DescribeDBInstanceCharsetCallable(const DescribeDBInstanceCharsetRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBInstanceCharsetOutcome>>();
    DescribeDBInstanceCharsetAsync(
    request,
    [prom](
        const CdbClient*,
        const DescribeDBInstanceCharsetRequest&,
        DescribeDBInstanceCharsetOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DescribeDBInstanceConfigOutcome CdbClient::DescribeDBInstanceConfig(const DescribeDBInstanceConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBInstanceConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBInstanceConfigResponse rsp = DescribeDBInstanceConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBInstanceConfigOutcome(rsp);
        else
            return DescribeDBInstanceConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeDBInstanceConfigOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeDBInstanceConfigAsync(const DescribeDBInstanceConfigRequest& request, const DescribeDBInstanceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDBInstanceConfigRequest&;
    using Resp = DescribeDBInstanceConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDBInstanceConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::DescribeDBInstanceConfigOutcomeCallable CdbClient::DescribeDBInstanceConfigCallable(const DescribeDBInstanceConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBInstanceConfigOutcome>>();
    DescribeDBInstanceConfigAsync(
    request,
    [prom](
        const CdbClient*,
        const DescribeDBInstanceConfigRequest&,
        DescribeDBInstanceConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DescribeDBInstanceGTIDOutcome CdbClient::DescribeDBInstanceGTID(const DescribeDBInstanceGTIDRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBInstanceGTID");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBInstanceGTIDResponse rsp = DescribeDBInstanceGTIDResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBInstanceGTIDOutcome(rsp);
        else
            return DescribeDBInstanceGTIDOutcome(o.GetError());
    }
    else
    {
        return DescribeDBInstanceGTIDOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeDBInstanceGTIDAsync(const DescribeDBInstanceGTIDRequest& request, const DescribeDBInstanceGTIDAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDBInstanceGTIDRequest&;
    using Resp = DescribeDBInstanceGTIDResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDBInstanceGTID", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::DescribeDBInstanceGTIDOutcomeCallable CdbClient::DescribeDBInstanceGTIDCallable(const DescribeDBInstanceGTIDRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBInstanceGTIDOutcome>>();
    DescribeDBInstanceGTIDAsync(
    request,
    [prom](
        const CdbClient*,
        const DescribeDBInstanceGTIDRequest&,
        DescribeDBInstanceGTIDOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DescribeDBInstanceInfoOutcome CdbClient::DescribeDBInstanceInfo(const DescribeDBInstanceInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBInstanceInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBInstanceInfoResponse rsp = DescribeDBInstanceInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBInstanceInfoOutcome(rsp);
        else
            return DescribeDBInstanceInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeDBInstanceInfoOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeDBInstanceInfoAsync(const DescribeDBInstanceInfoRequest& request, const DescribeDBInstanceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDBInstanceInfoRequest&;
    using Resp = DescribeDBInstanceInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDBInstanceInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::DescribeDBInstanceInfoOutcomeCallable CdbClient::DescribeDBInstanceInfoCallable(const DescribeDBInstanceInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBInstanceInfoOutcome>>();
    DescribeDBInstanceInfoAsync(
    request,
    [prom](
        const CdbClient*,
        const DescribeDBInstanceInfoRequest&,
        DescribeDBInstanceInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DescribeDBInstanceLogToCLSOutcome CdbClient::DescribeDBInstanceLogToCLS(const DescribeDBInstanceLogToCLSRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBInstanceLogToCLS");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBInstanceLogToCLSResponse rsp = DescribeDBInstanceLogToCLSResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBInstanceLogToCLSOutcome(rsp);
        else
            return DescribeDBInstanceLogToCLSOutcome(o.GetError());
    }
    else
    {
        return DescribeDBInstanceLogToCLSOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeDBInstanceLogToCLSAsync(const DescribeDBInstanceLogToCLSRequest& request, const DescribeDBInstanceLogToCLSAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDBInstanceLogToCLSRequest&;
    using Resp = DescribeDBInstanceLogToCLSResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDBInstanceLogToCLS", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::DescribeDBInstanceLogToCLSOutcomeCallable CdbClient::DescribeDBInstanceLogToCLSCallable(const DescribeDBInstanceLogToCLSRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBInstanceLogToCLSOutcome>>();
    DescribeDBInstanceLogToCLSAsync(
    request,
    [prom](
        const CdbClient*,
        const DescribeDBInstanceLogToCLSRequest&,
        DescribeDBInstanceLogToCLSOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DescribeDBInstanceRebootTimeOutcome CdbClient::DescribeDBInstanceRebootTime(const DescribeDBInstanceRebootTimeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBInstanceRebootTime");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBInstanceRebootTimeResponse rsp = DescribeDBInstanceRebootTimeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBInstanceRebootTimeOutcome(rsp);
        else
            return DescribeDBInstanceRebootTimeOutcome(o.GetError());
    }
    else
    {
        return DescribeDBInstanceRebootTimeOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeDBInstanceRebootTimeAsync(const DescribeDBInstanceRebootTimeRequest& request, const DescribeDBInstanceRebootTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDBInstanceRebootTimeRequest&;
    using Resp = DescribeDBInstanceRebootTimeResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDBInstanceRebootTime", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::DescribeDBInstanceRebootTimeOutcomeCallable CdbClient::DescribeDBInstanceRebootTimeCallable(const DescribeDBInstanceRebootTimeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBInstanceRebootTimeOutcome>>();
    DescribeDBInstanceRebootTimeAsync(
    request,
    [prom](
        const CdbClient*,
        const DescribeDBInstanceRebootTimeRequest&,
        DescribeDBInstanceRebootTimeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DescribeDBInstancesOutcome CdbClient::DescribeDBInstances(const DescribeDBInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBInstancesResponse rsp = DescribeDBInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBInstancesOutcome(rsp);
        else
            return DescribeDBInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeDBInstancesOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeDBInstancesAsync(const DescribeDBInstancesRequest& request, const DescribeDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDBInstancesRequest&;
    using Resp = DescribeDBInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDBInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::DescribeDBInstancesOutcomeCallable CdbClient::DescribeDBInstancesCallable(const DescribeDBInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBInstancesOutcome>>();
    DescribeDBInstancesAsync(
    request,
    [prom](
        const CdbClient*,
        const DescribeDBInstancesRequest&,
        DescribeDBInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DescribeDBPriceOutcome CdbClient::DescribeDBPrice(const DescribeDBPriceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBPrice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBPriceResponse rsp = DescribeDBPriceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBPriceOutcome(rsp);
        else
            return DescribeDBPriceOutcome(o.GetError());
    }
    else
    {
        return DescribeDBPriceOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeDBPriceAsync(const DescribeDBPriceRequest& request, const DescribeDBPriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDBPriceRequest&;
    using Resp = DescribeDBPriceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDBPrice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::DescribeDBPriceOutcomeCallable CdbClient::DescribeDBPriceCallable(const DescribeDBPriceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBPriceOutcome>>();
    DescribeDBPriceAsync(
    request,
    [prom](
        const CdbClient*,
        const DescribeDBPriceRequest&,
        DescribeDBPriceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DescribeDBSecurityGroupsOutcome CdbClient::DescribeDBSecurityGroups(const DescribeDBSecurityGroupsRequest &request)
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

void CdbClient::DescribeDBSecurityGroupsAsync(const DescribeDBSecurityGroupsRequest& request, const DescribeDBSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CdbClient::DescribeDBSecurityGroupsOutcomeCallable CdbClient::DescribeDBSecurityGroupsCallable(const DescribeDBSecurityGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBSecurityGroupsOutcome>>();
    DescribeDBSecurityGroupsAsync(
    request,
    [prom](
        const CdbClient*,
        const DescribeDBSecurityGroupsRequest&,
        DescribeDBSecurityGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DescribeDBSwitchRecordsOutcome CdbClient::DescribeDBSwitchRecords(const DescribeDBSwitchRecordsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBSwitchRecords");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBSwitchRecordsResponse rsp = DescribeDBSwitchRecordsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBSwitchRecordsOutcome(rsp);
        else
            return DescribeDBSwitchRecordsOutcome(o.GetError());
    }
    else
    {
        return DescribeDBSwitchRecordsOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeDBSwitchRecordsAsync(const DescribeDBSwitchRecordsRequest& request, const DescribeDBSwitchRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDBSwitchRecordsRequest&;
    using Resp = DescribeDBSwitchRecordsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDBSwitchRecords", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::DescribeDBSwitchRecordsOutcomeCallable CdbClient::DescribeDBSwitchRecordsCallable(const DescribeDBSwitchRecordsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBSwitchRecordsOutcome>>();
    DescribeDBSwitchRecordsAsync(
    request,
    [prom](
        const CdbClient*,
        const DescribeDBSwitchRecordsRequest&,
        DescribeDBSwitchRecordsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DescribeDataBackupOverviewOutcome CdbClient::DescribeDataBackupOverview(const DescribeDataBackupOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataBackupOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataBackupOverviewResponse rsp = DescribeDataBackupOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataBackupOverviewOutcome(rsp);
        else
            return DescribeDataBackupOverviewOutcome(o.GetError());
    }
    else
    {
        return DescribeDataBackupOverviewOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeDataBackupOverviewAsync(const DescribeDataBackupOverviewRequest& request, const DescribeDataBackupOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDataBackupOverviewRequest&;
    using Resp = DescribeDataBackupOverviewResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDataBackupOverview", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::DescribeDataBackupOverviewOutcomeCallable CdbClient::DescribeDataBackupOverviewCallable(const DescribeDataBackupOverviewRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataBackupOverviewOutcome>>();
    DescribeDataBackupOverviewAsync(
    request,
    [prom](
        const CdbClient*,
        const DescribeDataBackupOverviewRequest&,
        DescribeDataBackupOverviewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DescribeDatabasesOutcome CdbClient::DescribeDatabases(const DescribeDatabasesRequest &request)
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

void CdbClient::DescribeDatabasesAsync(const DescribeDatabasesRequest& request, const DescribeDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CdbClient::DescribeDatabasesOutcomeCallable CdbClient::DescribeDatabasesCallable(const DescribeDatabasesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDatabasesOutcome>>();
    DescribeDatabasesAsync(
    request,
    [prom](
        const CdbClient*,
        const DescribeDatabasesRequest&,
        DescribeDatabasesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DescribeDefaultParamsOutcome CdbClient::DescribeDefaultParams(const DescribeDefaultParamsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDefaultParams");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDefaultParamsResponse rsp = DescribeDefaultParamsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDefaultParamsOutcome(rsp);
        else
            return DescribeDefaultParamsOutcome(o.GetError());
    }
    else
    {
        return DescribeDefaultParamsOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeDefaultParamsAsync(const DescribeDefaultParamsRequest& request, const DescribeDefaultParamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDefaultParamsRequest&;
    using Resp = DescribeDefaultParamsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDefaultParams", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::DescribeDefaultParamsOutcomeCallable CdbClient::DescribeDefaultParamsCallable(const DescribeDefaultParamsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDefaultParamsOutcome>>();
    DescribeDefaultParamsAsync(
    request,
    [prom](
        const CdbClient*,
        const DescribeDefaultParamsRequest&,
        DescribeDefaultParamsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DescribeDeployGroupListOutcome CdbClient::DescribeDeployGroupList(const DescribeDeployGroupListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeployGroupList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeployGroupListResponse rsp = DescribeDeployGroupListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeployGroupListOutcome(rsp);
        else
            return DescribeDeployGroupListOutcome(o.GetError());
    }
    else
    {
        return DescribeDeployGroupListOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeDeployGroupListAsync(const DescribeDeployGroupListRequest& request, const DescribeDeployGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDeployGroupListRequest&;
    using Resp = DescribeDeployGroupListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDeployGroupList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::DescribeDeployGroupListOutcomeCallable CdbClient::DescribeDeployGroupListCallable(const DescribeDeployGroupListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDeployGroupListOutcome>>();
    DescribeDeployGroupListAsync(
    request,
    [prom](
        const CdbClient*,
        const DescribeDeployGroupListRequest&,
        DescribeDeployGroupListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DescribeDeviceMonitorInfoOutcome CdbClient::DescribeDeviceMonitorInfo(const DescribeDeviceMonitorInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeviceMonitorInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceMonitorInfoResponse rsp = DescribeDeviceMonitorInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceMonitorInfoOutcome(rsp);
        else
            return DescribeDeviceMonitorInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceMonitorInfoOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeDeviceMonitorInfoAsync(const DescribeDeviceMonitorInfoRequest& request, const DescribeDeviceMonitorInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDeviceMonitorInfoRequest&;
    using Resp = DescribeDeviceMonitorInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDeviceMonitorInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::DescribeDeviceMonitorInfoOutcomeCallable CdbClient::DescribeDeviceMonitorInfoCallable(const DescribeDeviceMonitorInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDeviceMonitorInfoOutcome>>();
    DescribeDeviceMonitorInfoAsync(
    request,
    [prom](
        const CdbClient*,
        const DescribeDeviceMonitorInfoRequest&,
        DescribeDeviceMonitorInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DescribeErrorLogDataOutcome CdbClient::DescribeErrorLogData(const DescribeErrorLogDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeErrorLogData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeErrorLogDataResponse rsp = DescribeErrorLogDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeErrorLogDataOutcome(rsp);
        else
            return DescribeErrorLogDataOutcome(o.GetError());
    }
    else
    {
        return DescribeErrorLogDataOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeErrorLogDataAsync(const DescribeErrorLogDataRequest& request, const DescribeErrorLogDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeErrorLogDataRequest&;
    using Resp = DescribeErrorLogDataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeErrorLogData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::DescribeErrorLogDataOutcomeCallable CdbClient::DescribeErrorLogDataCallable(const DescribeErrorLogDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeErrorLogDataOutcome>>();
    DescribeErrorLogDataAsync(
    request,
    [prom](
        const CdbClient*,
        const DescribeErrorLogDataRequest&,
        DescribeErrorLogDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DescribeInstanceAlarmEventsOutcome CdbClient::DescribeInstanceAlarmEvents(const DescribeInstanceAlarmEventsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceAlarmEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceAlarmEventsResponse rsp = DescribeInstanceAlarmEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceAlarmEventsOutcome(rsp);
        else
            return DescribeInstanceAlarmEventsOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceAlarmEventsOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeInstanceAlarmEventsAsync(const DescribeInstanceAlarmEventsRequest& request, const DescribeInstanceAlarmEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceAlarmEventsRequest&;
    using Resp = DescribeInstanceAlarmEventsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceAlarmEvents", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::DescribeInstanceAlarmEventsOutcomeCallable CdbClient::DescribeInstanceAlarmEventsCallable(const DescribeInstanceAlarmEventsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceAlarmEventsOutcome>>();
    DescribeInstanceAlarmEventsAsync(
    request,
    [prom](
        const CdbClient*,
        const DescribeInstanceAlarmEventsRequest&,
        DescribeInstanceAlarmEventsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DescribeInstanceParamRecordsOutcome CdbClient::DescribeInstanceParamRecords(const DescribeInstanceParamRecordsRequest &request)
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

void CdbClient::DescribeInstanceParamRecordsAsync(const DescribeInstanceParamRecordsRequest& request, const DescribeInstanceParamRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CdbClient::DescribeInstanceParamRecordsOutcomeCallable CdbClient::DescribeInstanceParamRecordsCallable(const DescribeInstanceParamRecordsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceParamRecordsOutcome>>();
    DescribeInstanceParamRecordsAsync(
    request,
    [prom](
        const CdbClient*,
        const DescribeInstanceParamRecordsRequest&,
        DescribeInstanceParamRecordsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DescribeInstanceParamsOutcome CdbClient::DescribeInstanceParams(const DescribeInstanceParamsRequest &request)
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

void CdbClient::DescribeInstanceParamsAsync(const DescribeInstanceParamsRequest& request, const DescribeInstanceParamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CdbClient::DescribeInstanceParamsOutcomeCallable CdbClient::DescribeInstanceParamsCallable(const DescribeInstanceParamsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceParamsOutcome>>();
    DescribeInstanceParamsAsync(
    request,
    [prom](
        const CdbClient*,
        const DescribeInstanceParamsRequest&,
        DescribeInstanceParamsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DescribeInstancePasswordComplexityOutcome CdbClient::DescribeInstancePasswordComplexity(const DescribeInstancePasswordComplexityRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstancePasswordComplexity");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstancePasswordComplexityResponse rsp = DescribeInstancePasswordComplexityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstancePasswordComplexityOutcome(rsp);
        else
            return DescribeInstancePasswordComplexityOutcome(o.GetError());
    }
    else
    {
        return DescribeInstancePasswordComplexityOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeInstancePasswordComplexityAsync(const DescribeInstancePasswordComplexityRequest& request, const DescribeInstancePasswordComplexityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstancePasswordComplexityRequest&;
    using Resp = DescribeInstancePasswordComplexityResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstancePasswordComplexity", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::DescribeInstancePasswordComplexityOutcomeCallable CdbClient::DescribeInstancePasswordComplexityCallable(const DescribeInstancePasswordComplexityRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstancePasswordComplexityOutcome>>();
    DescribeInstancePasswordComplexityAsync(
    request,
    [prom](
        const CdbClient*,
        const DescribeInstancePasswordComplexityRequest&,
        DescribeInstancePasswordComplexityOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DescribeInstanceUpgradeCheckJobOutcome CdbClient::DescribeInstanceUpgradeCheckJob(const DescribeInstanceUpgradeCheckJobRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceUpgradeCheckJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceUpgradeCheckJobResponse rsp = DescribeInstanceUpgradeCheckJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceUpgradeCheckJobOutcome(rsp);
        else
            return DescribeInstanceUpgradeCheckJobOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceUpgradeCheckJobOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeInstanceUpgradeCheckJobAsync(const DescribeInstanceUpgradeCheckJobRequest& request, const DescribeInstanceUpgradeCheckJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceUpgradeCheckJobRequest&;
    using Resp = DescribeInstanceUpgradeCheckJobResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceUpgradeCheckJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::DescribeInstanceUpgradeCheckJobOutcomeCallable CdbClient::DescribeInstanceUpgradeCheckJobCallable(const DescribeInstanceUpgradeCheckJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceUpgradeCheckJobOutcome>>();
    DescribeInstanceUpgradeCheckJobAsync(
    request,
    [prom](
        const CdbClient*,
        const DescribeInstanceUpgradeCheckJobRequest&,
        DescribeInstanceUpgradeCheckJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DescribeInstanceUpgradeTypeOutcome CdbClient::DescribeInstanceUpgradeType(const DescribeInstanceUpgradeTypeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceUpgradeType");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceUpgradeTypeResponse rsp = DescribeInstanceUpgradeTypeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceUpgradeTypeOutcome(rsp);
        else
            return DescribeInstanceUpgradeTypeOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceUpgradeTypeOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeInstanceUpgradeTypeAsync(const DescribeInstanceUpgradeTypeRequest& request, const DescribeInstanceUpgradeTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceUpgradeTypeRequest&;
    using Resp = DescribeInstanceUpgradeTypeResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceUpgradeType", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::DescribeInstanceUpgradeTypeOutcomeCallable CdbClient::DescribeInstanceUpgradeTypeCallable(const DescribeInstanceUpgradeTypeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceUpgradeTypeOutcome>>();
    DescribeInstanceUpgradeTypeAsync(
    request,
    [prom](
        const CdbClient*,
        const DescribeInstanceUpgradeTypeRequest&,
        DescribeInstanceUpgradeTypeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DescribeLocalBinlogConfigOutcome CdbClient::DescribeLocalBinlogConfig(const DescribeLocalBinlogConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLocalBinlogConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLocalBinlogConfigResponse rsp = DescribeLocalBinlogConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLocalBinlogConfigOutcome(rsp);
        else
            return DescribeLocalBinlogConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeLocalBinlogConfigOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeLocalBinlogConfigAsync(const DescribeLocalBinlogConfigRequest& request, const DescribeLocalBinlogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLocalBinlogConfigRequest&;
    using Resp = DescribeLocalBinlogConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLocalBinlogConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::DescribeLocalBinlogConfigOutcomeCallable CdbClient::DescribeLocalBinlogConfigCallable(const DescribeLocalBinlogConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLocalBinlogConfigOutcome>>();
    DescribeLocalBinlogConfigAsync(
    request,
    [prom](
        const CdbClient*,
        const DescribeLocalBinlogConfigRequest&,
        DescribeLocalBinlogConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DescribeParamTemplateInfoOutcome CdbClient::DescribeParamTemplateInfo(const DescribeParamTemplateInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeParamTemplateInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeParamTemplateInfoResponse rsp = DescribeParamTemplateInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeParamTemplateInfoOutcome(rsp);
        else
            return DescribeParamTemplateInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeParamTemplateInfoOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeParamTemplateInfoAsync(const DescribeParamTemplateInfoRequest& request, const DescribeParamTemplateInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeParamTemplateInfoRequest&;
    using Resp = DescribeParamTemplateInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeParamTemplateInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::DescribeParamTemplateInfoOutcomeCallable CdbClient::DescribeParamTemplateInfoCallable(const DescribeParamTemplateInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeParamTemplateInfoOutcome>>();
    DescribeParamTemplateInfoAsync(
    request,
    [prom](
        const CdbClient*,
        const DescribeParamTemplateInfoRequest&,
        DescribeParamTemplateInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DescribeParamTemplatesOutcome CdbClient::DescribeParamTemplates(const DescribeParamTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeParamTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeParamTemplatesResponse rsp = DescribeParamTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeParamTemplatesOutcome(rsp);
        else
            return DescribeParamTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeParamTemplatesOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeParamTemplatesAsync(const DescribeParamTemplatesRequest& request, const DescribeParamTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeParamTemplatesRequest&;
    using Resp = DescribeParamTemplatesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeParamTemplates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::DescribeParamTemplatesOutcomeCallable CdbClient::DescribeParamTemplatesCallable(const DescribeParamTemplatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeParamTemplatesOutcome>>();
    DescribeParamTemplatesAsync(
    request,
    [prom](
        const CdbClient*,
        const DescribeParamTemplatesRequest&,
        DescribeParamTemplatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DescribeProjectSecurityGroupsOutcome CdbClient::DescribeProjectSecurityGroups(const DescribeProjectSecurityGroupsRequest &request)
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

void CdbClient::DescribeProjectSecurityGroupsAsync(const DescribeProjectSecurityGroupsRequest& request, const DescribeProjectSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CdbClient::DescribeProjectSecurityGroupsOutcomeCallable CdbClient::DescribeProjectSecurityGroupsCallable(const DescribeProjectSecurityGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProjectSecurityGroupsOutcome>>();
    DescribeProjectSecurityGroupsAsync(
    request,
    [prom](
        const CdbClient*,
        const DescribeProjectSecurityGroupsRequest&,
        DescribeProjectSecurityGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DescribeProxyCustomConfOutcome CdbClient::DescribeProxyCustomConf(const DescribeProxyCustomConfRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProxyCustomConf");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProxyCustomConfResponse rsp = DescribeProxyCustomConfResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProxyCustomConfOutcome(rsp);
        else
            return DescribeProxyCustomConfOutcome(o.GetError());
    }
    else
    {
        return DescribeProxyCustomConfOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeProxyCustomConfAsync(const DescribeProxyCustomConfRequest& request, const DescribeProxyCustomConfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeProxyCustomConfRequest&;
    using Resp = DescribeProxyCustomConfResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProxyCustomConf", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::DescribeProxyCustomConfOutcomeCallable CdbClient::DescribeProxyCustomConfCallable(const DescribeProxyCustomConfRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProxyCustomConfOutcome>>();
    DescribeProxyCustomConfAsync(
    request,
    [prom](
        const CdbClient*,
        const DescribeProxyCustomConfRequest&,
        DescribeProxyCustomConfOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DescribeProxySupportParamOutcome CdbClient::DescribeProxySupportParam(const DescribeProxySupportParamRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProxySupportParam");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProxySupportParamResponse rsp = DescribeProxySupportParamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProxySupportParamOutcome(rsp);
        else
            return DescribeProxySupportParamOutcome(o.GetError());
    }
    else
    {
        return DescribeProxySupportParamOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeProxySupportParamAsync(const DescribeProxySupportParamRequest& request, const DescribeProxySupportParamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeProxySupportParamRequest&;
    using Resp = DescribeProxySupportParamResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProxySupportParam", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::DescribeProxySupportParamOutcomeCallable CdbClient::DescribeProxySupportParamCallable(const DescribeProxySupportParamRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProxySupportParamOutcome>>();
    DescribeProxySupportParamAsync(
    request,
    [prom](
        const CdbClient*,
        const DescribeProxySupportParamRequest&,
        DescribeProxySupportParamOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DescribeRemoteBackupConfigOutcome CdbClient::DescribeRemoteBackupConfig(const DescribeRemoteBackupConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRemoteBackupConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRemoteBackupConfigResponse rsp = DescribeRemoteBackupConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRemoteBackupConfigOutcome(rsp);
        else
            return DescribeRemoteBackupConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeRemoteBackupConfigOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeRemoteBackupConfigAsync(const DescribeRemoteBackupConfigRequest& request, const DescribeRemoteBackupConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRemoteBackupConfigRequest&;
    using Resp = DescribeRemoteBackupConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRemoteBackupConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::DescribeRemoteBackupConfigOutcomeCallable CdbClient::DescribeRemoteBackupConfigCallable(const DescribeRemoteBackupConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRemoteBackupConfigOutcome>>();
    DescribeRemoteBackupConfigAsync(
    request,
    [prom](
        const CdbClient*,
        const DescribeRemoteBackupConfigRequest&,
        DescribeRemoteBackupConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DescribeRoGroupsOutcome CdbClient::DescribeRoGroups(const DescribeRoGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRoGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRoGroupsResponse rsp = DescribeRoGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRoGroupsOutcome(rsp);
        else
            return DescribeRoGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeRoGroupsOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeRoGroupsAsync(const DescribeRoGroupsRequest& request, const DescribeRoGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRoGroupsRequest&;
    using Resp = DescribeRoGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRoGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::DescribeRoGroupsOutcomeCallable CdbClient::DescribeRoGroupsCallable(const DescribeRoGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRoGroupsOutcome>>();
    DescribeRoGroupsAsync(
    request,
    [prom](
        const CdbClient*,
        const DescribeRoGroupsRequest&,
        DescribeRoGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DescribeRoMinScaleOutcome CdbClient::DescribeRoMinScale(const DescribeRoMinScaleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRoMinScale");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRoMinScaleResponse rsp = DescribeRoMinScaleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRoMinScaleOutcome(rsp);
        else
            return DescribeRoMinScaleOutcome(o.GetError());
    }
    else
    {
        return DescribeRoMinScaleOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeRoMinScaleAsync(const DescribeRoMinScaleRequest& request, const DescribeRoMinScaleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRoMinScaleRequest&;
    using Resp = DescribeRoMinScaleResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRoMinScale", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::DescribeRoMinScaleOutcomeCallable CdbClient::DescribeRoMinScaleCallable(const DescribeRoMinScaleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRoMinScaleOutcome>>();
    DescribeRoMinScaleAsync(
    request,
    [prom](
        const CdbClient*,
        const DescribeRoMinScaleRequest&,
        DescribeRoMinScaleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DescribeRollbackRangeTimeOutcome CdbClient::DescribeRollbackRangeTime(const DescribeRollbackRangeTimeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRollbackRangeTime");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRollbackRangeTimeResponse rsp = DescribeRollbackRangeTimeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRollbackRangeTimeOutcome(rsp);
        else
            return DescribeRollbackRangeTimeOutcome(o.GetError());
    }
    else
    {
        return DescribeRollbackRangeTimeOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeRollbackRangeTimeAsync(const DescribeRollbackRangeTimeRequest& request, const DescribeRollbackRangeTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRollbackRangeTimeRequest&;
    using Resp = DescribeRollbackRangeTimeResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRollbackRangeTime", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::DescribeRollbackRangeTimeOutcomeCallable CdbClient::DescribeRollbackRangeTimeCallable(const DescribeRollbackRangeTimeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRollbackRangeTimeOutcome>>();
    DescribeRollbackRangeTimeAsync(
    request,
    [prom](
        const CdbClient*,
        const DescribeRollbackRangeTimeRequest&,
        DescribeRollbackRangeTimeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DescribeRollbackTaskDetailOutcome CdbClient::DescribeRollbackTaskDetail(const DescribeRollbackTaskDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRollbackTaskDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRollbackTaskDetailResponse rsp = DescribeRollbackTaskDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRollbackTaskDetailOutcome(rsp);
        else
            return DescribeRollbackTaskDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeRollbackTaskDetailOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeRollbackTaskDetailAsync(const DescribeRollbackTaskDetailRequest& request, const DescribeRollbackTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRollbackTaskDetailRequest&;
    using Resp = DescribeRollbackTaskDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRollbackTaskDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::DescribeRollbackTaskDetailOutcomeCallable CdbClient::DescribeRollbackTaskDetailCallable(const DescribeRollbackTaskDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRollbackTaskDetailOutcome>>();
    DescribeRollbackTaskDetailAsync(
    request,
    [prom](
        const CdbClient*,
        const DescribeRollbackTaskDetailRequest&,
        DescribeRollbackTaskDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DescribeSSLStatusOutcome CdbClient::DescribeSSLStatus(const DescribeSSLStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSSLStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSSLStatusResponse rsp = DescribeSSLStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSSLStatusOutcome(rsp);
        else
            return DescribeSSLStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeSSLStatusOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeSSLStatusAsync(const DescribeSSLStatusRequest& request, const DescribeSSLStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSSLStatusRequest&;
    using Resp = DescribeSSLStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSSLStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::DescribeSSLStatusOutcomeCallable CdbClient::DescribeSSLStatusCallable(const DescribeSSLStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSSLStatusOutcome>>();
    DescribeSSLStatusAsync(
    request,
    [prom](
        const CdbClient*,
        const DescribeSSLStatusRequest&,
        DescribeSSLStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DescribeSlowLogDataOutcome CdbClient::DescribeSlowLogData(const DescribeSlowLogDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSlowLogData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSlowLogDataResponse rsp = DescribeSlowLogDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSlowLogDataOutcome(rsp);
        else
            return DescribeSlowLogDataOutcome(o.GetError());
    }
    else
    {
        return DescribeSlowLogDataOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeSlowLogDataAsync(const DescribeSlowLogDataRequest& request, const DescribeSlowLogDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSlowLogDataRequest&;
    using Resp = DescribeSlowLogDataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSlowLogData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::DescribeSlowLogDataOutcomeCallable CdbClient::DescribeSlowLogDataCallable(const DescribeSlowLogDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSlowLogDataOutcome>>();
    DescribeSlowLogDataAsync(
    request,
    [prom](
        const CdbClient*,
        const DescribeSlowLogDataRequest&,
        DescribeSlowLogDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DescribeSlowLogsOutcome CdbClient::DescribeSlowLogs(const DescribeSlowLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSlowLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSlowLogsResponse rsp = DescribeSlowLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSlowLogsOutcome(rsp);
        else
            return DescribeSlowLogsOutcome(o.GetError());
    }
    else
    {
        return DescribeSlowLogsOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeSlowLogsAsync(const DescribeSlowLogsRequest& request, const DescribeSlowLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSlowLogsRequest&;
    using Resp = DescribeSlowLogsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSlowLogs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::DescribeSlowLogsOutcomeCallable CdbClient::DescribeSlowLogsCallable(const DescribeSlowLogsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSlowLogsOutcome>>();
    DescribeSlowLogsAsync(
    request,
    [prom](
        const CdbClient*,
        const DescribeSlowLogsRequest&,
        DescribeSlowLogsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DescribeSupportedPrivilegesOutcome CdbClient::DescribeSupportedPrivileges(const DescribeSupportedPrivilegesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSupportedPrivileges");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSupportedPrivilegesResponse rsp = DescribeSupportedPrivilegesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSupportedPrivilegesOutcome(rsp);
        else
            return DescribeSupportedPrivilegesOutcome(o.GetError());
    }
    else
    {
        return DescribeSupportedPrivilegesOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeSupportedPrivilegesAsync(const DescribeSupportedPrivilegesRequest& request, const DescribeSupportedPrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSupportedPrivilegesRequest&;
    using Resp = DescribeSupportedPrivilegesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSupportedPrivileges", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::DescribeSupportedPrivilegesOutcomeCallable CdbClient::DescribeSupportedPrivilegesCallable(const DescribeSupportedPrivilegesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSupportedPrivilegesOutcome>>();
    DescribeSupportedPrivilegesAsync(
    request,
    [prom](
        const CdbClient*,
        const DescribeSupportedPrivilegesRequest&,
        DescribeSupportedPrivilegesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DescribeTableColumnsOutcome CdbClient::DescribeTableColumns(const DescribeTableColumnsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTableColumns");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTableColumnsResponse rsp = DescribeTableColumnsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTableColumnsOutcome(rsp);
        else
            return DescribeTableColumnsOutcome(o.GetError());
    }
    else
    {
        return DescribeTableColumnsOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeTableColumnsAsync(const DescribeTableColumnsRequest& request, const DescribeTableColumnsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTableColumnsRequest&;
    using Resp = DescribeTableColumnsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTableColumns", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::DescribeTableColumnsOutcomeCallable CdbClient::DescribeTableColumnsCallable(const DescribeTableColumnsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTableColumnsOutcome>>();
    DescribeTableColumnsAsync(
    request,
    [prom](
        const CdbClient*,
        const DescribeTableColumnsRequest&,
        DescribeTableColumnsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DescribeTablesOutcome CdbClient::DescribeTables(const DescribeTablesRequest &request)
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

void CdbClient::DescribeTablesAsync(const DescribeTablesRequest& request, const DescribeTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CdbClient::DescribeTablesOutcomeCallable CdbClient::DescribeTablesCallable(const DescribeTablesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTablesOutcome>>();
    DescribeTablesAsync(
    request,
    [prom](
        const CdbClient*,
        const DescribeTablesRequest&,
        DescribeTablesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DescribeTagsOfInstanceIdsOutcome CdbClient::DescribeTagsOfInstanceIds(const DescribeTagsOfInstanceIdsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTagsOfInstanceIds");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTagsOfInstanceIdsResponse rsp = DescribeTagsOfInstanceIdsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTagsOfInstanceIdsOutcome(rsp);
        else
            return DescribeTagsOfInstanceIdsOutcome(o.GetError());
    }
    else
    {
        return DescribeTagsOfInstanceIdsOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeTagsOfInstanceIdsAsync(const DescribeTagsOfInstanceIdsRequest& request, const DescribeTagsOfInstanceIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTagsOfInstanceIdsRequest&;
    using Resp = DescribeTagsOfInstanceIdsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTagsOfInstanceIds", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::DescribeTagsOfInstanceIdsOutcomeCallable CdbClient::DescribeTagsOfInstanceIdsCallable(const DescribeTagsOfInstanceIdsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTagsOfInstanceIdsOutcome>>();
    DescribeTagsOfInstanceIdsAsync(
    request,
    [prom](
        const CdbClient*,
        const DescribeTagsOfInstanceIdsRequest&,
        DescribeTagsOfInstanceIdsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DescribeTasksOutcome CdbClient::DescribeTasks(const DescribeTasksRequest &request)
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

void CdbClient::DescribeTasksAsync(const DescribeTasksRequest& request, const DescribeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CdbClient::DescribeTasksOutcomeCallable CdbClient::DescribeTasksCallable(const DescribeTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTasksOutcome>>();
    DescribeTasksAsync(
    request,
    [prom](
        const CdbClient*,
        const DescribeTasksRequest&,
        DescribeTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DescribeTimeWindowOutcome CdbClient::DescribeTimeWindow(const DescribeTimeWindowRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTimeWindow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTimeWindowResponse rsp = DescribeTimeWindowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTimeWindowOutcome(rsp);
        else
            return DescribeTimeWindowOutcome(o.GetError());
    }
    else
    {
        return DescribeTimeWindowOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeTimeWindowAsync(const DescribeTimeWindowRequest& request, const DescribeTimeWindowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTimeWindowRequest&;
    using Resp = DescribeTimeWindowResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTimeWindow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::DescribeTimeWindowOutcomeCallable CdbClient::DescribeTimeWindowCallable(const DescribeTimeWindowRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTimeWindowOutcome>>();
    DescribeTimeWindowAsync(
    request,
    [prom](
        const CdbClient*,
        const DescribeTimeWindowRequest&,
        DescribeTimeWindowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DescribeUploadedFilesOutcome CdbClient::DescribeUploadedFiles(const DescribeUploadedFilesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUploadedFiles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUploadedFilesResponse rsp = DescribeUploadedFilesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUploadedFilesOutcome(rsp);
        else
            return DescribeUploadedFilesOutcome(o.GetError());
    }
    else
    {
        return DescribeUploadedFilesOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeUploadedFilesAsync(const DescribeUploadedFilesRequest& request, const DescribeUploadedFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUploadedFilesRequest&;
    using Resp = DescribeUploadedFilesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUploadedFiles", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::DescribeUploadedFilesOutcomeCallable CdbClient::DescribeUploadedFilesCallable(const DescribeUploadedFilesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUploadedFilesOutcome>>();
    DescribeUploadedFilesAsync(
    request,
    [prom](
        const CdbClient*,
        const DescribeUploadedFilesRequest&,
        DescribeUploadedFilesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::DisassociateSecurityGroupsOutcome CdbClient::DisassociateSecurityGroups(const DisassociateSecurityGroupsRequest &request)
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

void CdbClient::DisassociateSecurityGroupsAsync(const DisassociateSecurityGroupsRequest& request, const DisassociateSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CdbClient::DisassociateSecurityGroupsOutcomeCallable CdbClient::DisassociateSecurityGroupsCallable(const DisassociateSecurityGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisassociateSecurityGroupsOutcome>>();
    DisassociateSecurityGroupsAsync(
    request,
    [prom](
        const CdbClient*,
        const DisassociateSecurityGroupsRequest&,
        DisassociateSecurityGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::InquiryPriceUpgradeInstancesOutcome CdbClient::InquiryPriceUpgradeInstances(const InquiryPriceUpgradeInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "InquiryPriceUpgradeInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquiryPriceUpgradeInstancesResponse rsp = InquiryPriceUpgradeInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquiryPriceUpgradeInstancesOutcome(rsp);
        else
            return InquiryPriceUpgradeInstancesOutcome(o.GetError());
    }
    else
    {
        return InquiryPriceUpgradeInstancesOutcome(outcome.GetError());
    }
}

void CdbClient::InquiryPriceUpgradeInstancesAsync(const InquiryPriceUpgradeInstancesRequest& request, const InquiryPriceUpgradeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const InquiryPriceUpgradeInstancesRequest&;
    using Resp = InquiryPriceUpgradeInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "InquiryPriceUpgradeInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::InquiryPriceUpgradeInstancesOutcomeCallable CdbClient::InquiryPriceUpgradeInstancesCallable(const InquiryPriceUpgradeInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<InquiryPriceUpgradeInstancesOutcome>>();
    InquiryPriceUpgradeInstancesAsync(
    request,
    [prom](
        const CdbClient*,
        const InquiryPriceUpgradeInstancesRequest&,
        InquiryPriceUpgradeInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::IsolateDBInstanceOutcome CdbClient::IsolateDBInstance(const IsolateDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "IsolateDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        IsolateDBInstanceResponse rsp = IsolateDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return IsolateDBInstanceOutcome(rsp);
        else
            return IsolateDBInstanceOutcome(o.GetError());
    }
    else
    {
        return IsolateDBInstanceOutcome(outcome.GetError());
    }
}

void CdbClient::IsolateDBInstanceAsync(const IsolateDBInstanceRequest& request, const IsolateDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const IsolateDBInstanceRequest&;
    using Resp = IsolateDBInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "IsolateDBInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::IsolateDBInstanceOutcomeCallable CdbClient::IsolateDBInstanceCallable(const IsolateDBInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<IsolateDBInstanceOutcome>>();
    IsolateDBInstanceAsync(
    request,
    [prom](
        const CdbClient*,
        const IsolateDBInstanceRequest&,
        IsolateDBInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::ModifyAccountDescriptionOutcome CdbClient::ModifyAccountDescription(const ModifyAccountDescriptionRequest &request)
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

void CdbClient::ModifyAccountDescriptionAsync(const ModifyAccountDescriptionRequest& request, const ModifyAccountDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CdbClient::ModifyAccountDescriptionOutcomeCallable CdbClient::ModifyAccountDescriptionCallable(const ModifyAccountDescriptionRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAccountDescriptionOutcome>>();
    ModifyAccountDescriptionAsync(
    request,
    [prom](
        const CdbClient*,
        const ModifyAccountDescriptionRequest&,
        ModifyAccountDescriptionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::ModifyAccountHostOutcome CdbClient::ModifyAccountHost(const ModifyAccountHostRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAccountHost");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAccountHostResponse rsp = ModifyAccountHostResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAccountHostOutcome(rsp);
        else
            return ModifyAccountHostOutcome(o.GetError());
    }
    else
    {
        return ModifyAccountHostOutcome(outcome.GetError());
    }
}

void CdbClient::ModifyAccountHostAsync(const ModifyAccountHostRequest& request, const ModifyAccountHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAccountHostRequest&;
    using Resp = ModifyAccountHostResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAccountHost", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::ModifyAccountHostOutcomeCallable CdbClient::ModifyAccountHostCallable(const ModifyAccountHostRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAccountHostOutcome>>();
    ModifyAccountHostAsync(
    request,
    [prom](
        const CdbClient*,
        const ModifyAccountHostRequest&,
        ModifyAccountHostOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::ModifyAccountMaxUserConnectionsOutcome CdbClient::ModifyAccountMaxUserConnections(const ModifyAccountMaxUserConnectionsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAccountMaxUserConnections");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAccountMaxUserConnectionsResponse rsp = ModifyAccountMaxUserConnectionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAccountMaxUserConnectionsOutcome(rsp);
        else
            return ModifyAccountMaxUserConnectionsOutcome(o.GetError());
    }
    else
    {
        return ModifyAccountMaxUserConnectionsOutcome(outcome.GetError());
    }
}

void CdbClient::ModifyAccountMaxUserConnectionsAsync(const ModifyAccountMaxUserConnectionsRequest& request, const ModifyAccountMaxUserConnectionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAccountMaxUserConnectionsRequest&;
    using Resp = ModifyAccountMaxUserConnectionsResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAccountMaxUserConnections", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::ModifyAccountMaxUserConnectionsOutcomeCallable CdbClient::ModifyAccountMaxUserConnectionsCallable(const ModifyAccountMaxUserConnectionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAccountMaxUserConnectionsOutcome>>();
    ModifyAccountMaxUserConnectionsAsync(
    request,
    [prom](
        const CdbClient*,
        const ModifyAccountMaxUserConnectionsRequest&,
        ModifyAccountMaxUserConnectionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::ModifyAccountPasswordOutcome CdbClient::ModifyAccountPassword(const ModifyAccountPasswordRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAccountPassword");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAccountPasswordResponse rsp = ModifyAccountPasswordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAccountPasswordOutcome(rsp);
        else
            return ModifyAccountPasswordOutcome(o.GetError());
    }
    else
    {
        return ModifyAccountPasswordOutcome(outcome.GetError());
    }
}

void CdbClient::ModifyAccountPasswordAsync(const ModifyAccountPasswordRequest& request, const ModifyAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAccountPasswordRequest&;
    using Resp = ModifyAccountPasswordResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAccountPassword", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::ModifyAccountPasswordOutcomeCallable CdbClient::ModifyAccountPasswordCallable(const ModifyAccountPasswordRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAccountPasswordOutcome>>();
    ModifyAccountPasswordAsync(
    request,
    [prom](
        const CdbClient*,
        const ModifyAccountPasswordRequest&,
        ModifyAccountPasswordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::ModifyAccountPrivilegesOutcome CdbClient::ModifyAccountPrivileges(const ModifyAccountPrivilegesRequest &request)
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

void CdbClient::ModifyAccountPrivilegesAsync(const ModifyAccountPrivilegesRequest& request, const ModifyAccountPrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CdbClient::ModifyAccountPrivilegesOutcomeCallable CdbClient::ModifyAccountPrivilegesCallable(const ModifyAccountPrivilegesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAccountPrivilegesOutcome>>();
    ModifyAccountPrivilegesAsync(
    request,
    [prom](
        const CdbClient*,
        const ModifyAccountPrivilegesRequest&,
        ModifyAccountPrivilegesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::ModifyAuditConfigOutcome CdbClient::ModifyAuditConfig(const ModifyAuditConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAuditConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAuditConfigResponse rsp = ModifyAuditConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAuditConfigOutcome(rsp);
        else
            return ModifyAuditConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyAuditConfigOutcome(outcome.GetError());
    }
}

void CdbClient::ModifyAuditConfigAsync(const ModifyAuditConfigRequest& request, const ModifyAuditConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAuditConfigRequest&;
    using Resp = ModifyAuditConfigResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAuditConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::ModifyAuditConfigOutcomeCallable CdbClient::ModifyAuditConfigCallable(const ModifyAuditConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAuditConfigOutcome>>();
    ModifyAuditConfigAsync(
    request,
    [prom](
        const CdbClient*,
        const ModifyAuditConfigRequest&,
        ModifyAuditConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::ModifyAuditRuleOutcome CdbClient::ModifyAuditRule(const ModifyAuditRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAuditRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAuditRuleResponse rsp = ModifyAuditRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAuditRuleOutcome(rsp);
        else
            return ModifyAuditRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyAuditRuleOutcome(outcome.GetError());
    }
}

void CdbClient::ModifyAuditRuleAsync(const ModifyAuditRuleRequest& request, const ModifyAuditRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAuditRuleRequest&;
    using Resp = ModifyAuditRuleResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAuditRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::ModifyAuditRuleOutcomeCallable CdbClient::ModifyAuditRuleCallable(const ModifyAuditRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAuditRuleOutcome>>();
    ModifyAuditRuleAsync(
    request,
    [prom](
        const CdbClient*,
        const ModifyAuditRuleRequest&,
        ModifyAuditRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::ModifyAuditRuleTemplatesOutcome CdbClient::ModifyAuditRuleTemplates(const ModifyAuditRuleTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAuditRuleTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAuditRuleTemplatesResponse rsp = ModifyAuditRuleTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAuditRuleTemplatesOutcome(rsp);
        else
            return ModifyAuditRuleTemplatesOutcome(o.GetError());
    }
    else
    {
        return ModifyAuditRuleTemplatesOutcome(outcome.GetError());
    }
}

void CdbClient::ModifyAuditRuleTemplatesAsync(const ModifyAuditRuleTemplatesRequest& request, const ModifyAuditRuleTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAuditRuleTemplatesRequest&;
    using Resp = ModifyAuditRuleTemplatesResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAuditRuleTemplates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::ModifyAuditRuleTemplatesOutcomeCallable CdbClient::ModifyAuditRuleTemplatesCallable(const ModifyAuditRuleTemplatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAuditRuleTemplatesOutcome>>();
    ModifyAuditRuleTemplatesAsync(
    request,
    [prom](
        const CdbClient*,
        const ModifyAuditRuleTemplatesRequest&,
        ModifyAuditRuleTemplatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::ModifyAuditServiceOutcome CdbClient::ModifyAuditService(const ModifyAuditServiceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAuditService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAuditServiceResponse rsp = ModifyAuditServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAuditServiceOutcome(rsp);
        else
            return ModifyAuditServiceOutcome(o.GetError());
    }
    else
    {
        return ModifyAuditServiceOutcome(outcome.GetError());
    }
}

void CdbClient::ModifyAuditServiceAsync(const ModifyAuditServiceRequest& request, const ModifyAuditServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAuditServiceRequest&;
    using Resp = ModifyAuditServiceResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAuditService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::ModifyAuditServiceOutcomeCallable CdbClient::ModifyAuditServiceCallable(const ModifyAuditServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAuditServiceOutcome>>();
    ModifyAuditServiceAsync(
    request,
    [prom](
        const CdbClient*,
        const ModifyAuditServiceRequest&,
        ModifyAuditServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::ModifyAutoRenewFlagOutcome CdbClient::ModifyAutoRenewFlag(const ModifyAutoRenewFlagRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAutoRenewFlag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAutoRenewFlagResponse rsp = ModifyAutoRenewFlagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAutoRenewFlagOutcome(rsp);
        else
            return ModifyAutoRenewFlagOutcome(o.GetError());
    }
    else
    {
        return ModifyAutoRenewFlagOutcome(outcome.GetError());
    }
}

void CdbClient::ModifyAutoRenewFlagAsync(const ModifyAutoRenewFlagRequest& request, const ModifyAutoRenewFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAutoRenewFlagRequest&;
    using Resp = ModifyAutoRenewFlagResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAutoRenewFlag", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::ModifyAutoRenewFlagOutcomeCallable CdbClient::ModifyAutoRenewFlagCallable(const ModifyAutoRenewFlagRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAutoRenewFlagOutcome>>();
    ModifyAutoRenewFlagAsync(
    request,
    [prom](
        const CdbClient*,
        const ModifyAutoRenewFlagRequest&,
        ModifyAutoRenewFlagOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::ModifyBackupConfigOutcome CdbClient::ModifyBackupConfig(const ModifyBackupConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBackupConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBackupConfigResponse rsp = ModifyBackupConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBackupConfigOutcome(rsp);
        else
            return ModifyBackupConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyBackupConfigOutcome(outcome.GetError());
    }
}

void CdbClient::ModifyBackupConfigAsync(const ModifyBackupConfigRequest& request, const ModifyBackupConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyBackupConfigRequest&;
    using Resp = ModifyBackupConfigResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyBackupConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::ModifyBackupConfigOutcomeCallable CdbClient::ModifyBackupConfigCallable(const ModifyBackupConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyBackupConfigOutcome>>();
    ModifyBackupConfigAsync(
    request,
    [prom](
        const CdbClient*,
        const ModifyBackupConfigRequest&,
        ModifyBackupConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::ModifyBackupDownloadRestrictionOutcome CdbClient::ModifyBackupDownloadRestriction(const ModifyBackupDownloadRestrictionRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBackupDownloadRestriction");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBackupDownloadRestrictionResponse rsp = ModifyBackupDownloadRestrictionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBackupDownloadRestrictionOutcome(rsp);
        else
            return ModifyBackupDownloadRestrictionOutcome(o.GetError());
    }
    else
    {
        return ModifyBackupDownloadRestrictionOutcome(outcome.GetError());
    }
}

void CdbClient::ModifyBackupDownloadRestrictionAsync(const ModifyBackupDownloadRestrictionRequest& request, const ModifyBackupDownloadRestrictionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyBackupDownloadRestrictionRequest&;
    using Resp = ModifyBackupDownloadRestrictionResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyBackupDownloadRestriction", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::ModifyBackupDownloadRestrictionOutcomeCallable CdbClient::ModifyBackupDownloadRestrictionCallable(const ModifyBackupDownloadRestrictionRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyBackupDownloadRestrictionOutcome>>();
    ModifyBackupDownloadRestrictionAsync(
    request,
    [prom](
        const CdbClient*,
        const ModifyBackupDownloadRestrictionRequest&,
        ModifyBackupDownloadRestrictionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::ModifyBackupEncryptionStatusOutcome CdbClient::ModifyBackupEncryptionStatus(const ModifyBackupEncryptionStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBackupEncryptionStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBackupEncryptionStatusResponse rsp = ModifyBackupEncryptionStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBackupEncryptionStatusOutcome(rsp);
        else
            return ModifyBackupEncryptionStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyBackupEncryptionStatusOutcome(outcome.GetError());
    }
}

void CdbClient::ModifyBackupEncryptionStatusAsync(const ModifyBackupEncryptionStatusRequest& request, const ModifyBackupEncryptionStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyBackupEncryptionStatusRequest&;
    using Resp = ModifyBackupEncryptionStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyBackupEncryptionStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::ModifyBackupEncryptionStatusOutcomeCallable CdbClient::ModifyBackupEncryptionStatusCallable(const ModifyBackupEncryptionStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyBackupEncryptionStatusOutcome>>();
    ModifyBackupEncryptionStatusAsync(
    request,
    [prom](
        const CdbClient*,
        const ModifyBackupEncryptionStatusRequest&,
        ModifyBackupEncryptionStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::ModifyCdbProxyAddressDescOutcome CdbClient::ModifyCdbProxyAddressDesc(const ModifyCdbProxyAddressDescRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCdbProxyAddressDesc");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCdbProxyAddressDescResponse rsp = ModifyCdbProxyAddressDescResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCdbProxyAddressDescOutcome(rsp);
        else
            return ModifyCdbProxyAddressDescOutcome(o.GetError());
    }
    else
    {
        return ModifyCdbProxyAddressDescOutcome(outcome.GetError());
    }
}

void CdbClient::ModifyCdbProxyAddressDescAsync(const ModifyCdbProxyAddressDescRequest& request, const ModifyCdbProxyAddressDescAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCdbProxyAddressDescRequest&;
    using Resp = ModifyCdbProxyAddressDescResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCdbProxyAddressDesc", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::ModifyCdbProxyAddressDescOutcomeCallable CdbClient::ModifyCdbProxyAddressDescCallable(const ModifyCdbProxyAddressDescRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCdbProxyAddressDescOutcome>>();
    ModifyCdbProxyAddressDescAsync(
    request,
    [prom](
        const CdbClient*,
        const ModifyCdbProxyAddressDescRequest&,
        ModifyCdbProxyAddressDescOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::ModifyCdbProxyAddressVipAndVPortOutcome CdbClient::ModifyCdbProxyAddressVipAndVPort(const ModifyCdbProxyAddressVipAndVPortRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCdbProxyAddressVipAndVPort");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCdbProxyAddressVipAndVPortResponse rsp = ModifyCdbProxyAddressVipAndVPortResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCdbProxyAddressVipAndVPortOutcome(rsp);
        else
            return ModifyCdbProxyAddressVipAndVPortOutcome(o.GetError());
    }
    else
    {
        return ModifyCdbProxyAddressVipAndVPortOutcome(outcome.GetError());
    }
}

void CdbClient::ModifyCdbProxyAddressVipAndVPortAsync(const ModifyCdbProxyAddressVipAndVPortRequest& request, const ModifyCdbProxyAddressVipAndVPortAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCdbProxyAddressVipAndVPortRequest&;
    using Resp = ModifyCdbProxyAddressVipAndVPortResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCdbProxyAddressVipAndVPort", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::ModifyCdbProxyAddressVipAndVPortOutcomeCallable CdbClient::ModifyCdbProxyAddressVipAndVPortCallable(const ModifyCdbProxyAddressVipAndVPortRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCdbProxyAddressVipAndVPortOutcome>>();
    ModifyCdbProxyAddressVipAndVPortAsync(
    request,
    [prom](
        const CdbClient*,
        const ModifyCdbProxyAddressVipAndVPortRequest&,
        ModifyCdbProxyAddressVipAndVPortOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::ModifyCdbProxyParamOutcome CdbClient::ModifyCdbProxyParam(const ModifyCdbProxyParamRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCdbProxyParam");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCdbProxyParamResponse rsp = ModifyCdbProxyParamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCdbProxyParamOutcome(rsp);
        else
            return ModifyCdbProxyParamOutcome(o.GetError());
    }
    else
    {
        return ModifyCdbProxyParamOutcome(outcome.GetError());
    }
}

void CdbClient::ModifyCdbProxyParamAsync(const ModifyCdbProxyParamRequest& request, const ModifyCdbProxyParamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCdbProxyParamRequest&;
    using Resp = ModifyCdbProxyParamResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCdbProxyParam", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::ModifyCdbProxyParamOutcomeCallable CdbClient::ModifyCdbProxyParamCallable(const ModifyCdbProxyParamRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCdbProxyParamOutcome>>();
    ModifyCdbProxyParamAsync(
    request,
    [prom](
        const CdbClient*,
        const ModifyCdbProxyParamRequest&,
        ModifyCdbProxyParamOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::ModifyDBInstanceLogToCLSOutcome CdbClient::ModifyDBInstanceLogToCLS(const ModifyDBInstanceLogToCLSRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDBInstanceLogToCLS");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDBInstanceLogToCLSResponse rsp = ModifyDBInstanceLogToCLSResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDBInstanceLogToCLSOutcome(rsp);
        else
            return ModifyDBInstanceLogToCLSOutcome(o.GetError());
    }
    else
    {
        return ModifyDBInstanceLogToCLSOutcome(outcome.GetError());
    }
}

void CdbClient::ModifyDBInstanceLogToCLSAsync(const ModifyDBInstanceLogToCLSRequest& request, const ModifyDBInstanceLogToCLSAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDBInstanceLogToCLSRequest&;
    using Resp = ModifyDBInstanceLogToCLSResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDBInstanceLogToCLS", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::ModifyDBInstanceLogToCLSOutcomeCallable CdbClient::ModifyDBInstanceLogToCLSCallable(const ModifyDBInstanceLogToCLSRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDBInstanceLogToCLSOutcome>>();
    ModifyDBInstanceLogToCLSAsync(
    request,
    [prom](
        const CdbClient*,
        const ModifyDBInstanceLogToCLSRequest&,
        ModifyDBInstanceLogToCLSOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::ModifyDBInstanceModesOutcome CdbClient::ModifyDBInstanceModes(const ModifyDBInstanceModesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDBInstanceModes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDBInstanceModesResponse rsp = ModifyDBInstanceModesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDBInstanceModesOutcome(rsp);
        else
            return ModifyDBInstanceModesOutcome(o.GetError());
    }
    else
    {
        return ModifyDBInstanceModesOutcome(outcome.GetError());
    }
}

void CdbClient::ModifyDBInstanceModesAsync(const ModifyDBInstanceModesRequest& request, const ModifyDBInstanceModesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDBInstanceModesRequest&;
    using Resp = ModifyDBInstanceModesResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDBInstanceModes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::ModifyDBInstanceModesOutcomeCallable CdbClient::ModifyDBInstanceModesCallable(const ModifyDBInstanceModesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDBInstanceModesOutcome>>();
    ModifyDBInstanceModesAsync(
    request,
    [prom](
        const CdbClient*,
        const ModifyDBInstanceModesRequest&,
        ModifyDBInstanceModesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::ModifyDBInstanceNameOutcome CdbClient::ModifyDBInstanceName(const ModifyDBInstanceNameRequest &request)
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

void CdbClient::ModifyDBInstanceNameAsync(const ModifyDBInstanceNameRequest& request, const ModifyDBInstanceNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CdbClient::ModifyDBInstanceNameOutcomeCallable CdbClient::ModifyDBInstanceNameCallable(const ModifyDBInstanceNameRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDBInstanceNameOutcome>>();
    ModifyDBInstanceNameAsync(
    request,
    [prom](
        const CdbClient*,
        const ModifyDBInstanceNameRequest&,
        ModifyDBInstanceNameOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::ModifyDBInstanceProjectOutcome CdbClient::ModifyDBInstanceProject(const ModifyDBInstanceProjectRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDBInstanceProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDBInstanceProjectResponse rsp = ModifyDBInstanceProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDBInstanceProjectOutcome(rsp);
        else
            return ModifyDBInstanceProjectOutcome(o.GetError());
    }
    else
    {
        return ModifyDBInstanceProjectOutcome(outcome.GetError());
    }
}

void CdbClient::ModifyDBInstanceProjectAsync(const ModifyDBInstanceProjectRequest& request, const ModifyDBInstanceProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDBInstanceProjectRequest&;
    using Resp = ModifyDBInstanceProjectResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDBInstanceProject", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::ModifyDBInstanceProjectOutcomeCallable CdbClient::ModifyDBInstanceProjectCallable(const ModifyDBInstanceProjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDBInstanceProjectOutcome>>();
    ModifyDBInstanceProjectAsync(
    request,
    [prom](
        const CdbClient*,
        const ModifyDBInstanceProjectRequest&,
        ModifyDBInstanceProjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::ModifyDBInstanceReadOnlyStatusOutcome CdbClient::ModifyDBInstanceReadOnlyStatus(const ModifyDBInstanceReadOnlyStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDBInstanceReadOnlyStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDBInstanceReadOnlyStatusResponse rsp = ModifyDBInstanceReadOnlyStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDBInstanceReadOnlyStatusOutcome(rsp);
        else
            return ModifyDBInstanceReadOnlyStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyDBInstanceReadOnlyStatusOutcome(outcome.GetError());
    }
}

void CdbClient::ModifyDBInstanceReadOnlyStatusAsync(const ModifyDBInstanceReadOnlyStatusRequest& request, const ModifyDBInstanceReadOnlyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDBInstanceReadOnlyStatusRequest&;
    using Resp = ModifyDBInstanceReadOnlyStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDBInstanceReadOnlyStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::ModifyDBInstanceReadOnlyStatusOutcomeCallable CdbClient::ModifyDBInstanceReadOnlyStatusCallable(const ModifyDBInstanceReadOnlyStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDBInstanceReadOnlyStatusOutcome>>();
    ModifyDBInstanceReadOnlyStatusAsync(
    request,
    [prom](
        const CdbClient*,
        const ModifyDBInstanceReadOnlyStatusRequest&,
        ModifyDBInstanceReadOnlyStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::ModifyDBInstanceSecurityGroupsOutcome CdbClient::ModifyDBInstanceSecurityGroups(const ModifyDBInstanceSecurityGroupsRequest &request)
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

void CdbClient::ModifyDBInstanceSecurityGroupsAsync(const ModifyDBInstanceSecurityGroupsRequest& request, const ModifyDBInstanceSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CdbClient::ModifyDBInstanceSecurityGroupsOutcomeCallable CdbClient::ModifyDBInstanceSecurityGroupsCallable(const ModifyDBInstanceSecurityGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDBInstanceSecurityGroupsOutcome>>();
    ModifyDBInstanceSecurityGroupsAsync(
    request,
    [prom](
        const CdbClient*,
        const ModifyDBInstanceSecurityGroupsRequest&,
        ModifyDBInstanceSecurityGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::ModifyDBInstanceVipVportOutcome CdbClient::ModifyDBInstanceVipVport(const ModifyDBInstanceVipVportRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDBInstanceVipVport");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDBInstanceVipVportResponse rsp = ModifyDBInstanceVipVportResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDBInstanceVipVportOutcome(rsp);
        else
            return ModifyDBInstanceVipVportOutcome(o.GetError());
    }
    else
    {
        return ModifyDBInstanceVipVportOutcome(outcome.GetError());
    }
}

void CdbClient::ModifyDBInstanceVipVportAsync(const ModifyDBInstanceVipVportRequest& request, const ModifyDBInstanceVipVportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDBInstanceVipVportRequest&;
    using Resp = ModifyDBInstanceVipVportResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDBInstanceVipVport", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::ModifyDBInstanceVipVportOutcomeCallable CdbClient::ModifyDBInstanceVipVportCallable(const ModifyDBInstanceVipVportRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDBInstanceVipVportOutcome>>();
    ModifyDBInstanceVipVportAsync(
    request,
    [prom](
        const CdbClient*,
        const ModifyDBInstanceVipVportRequest&,
        ModifyDBInstanceVipVportOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::ModifyInstanceParamOutcome CdbClient::ModifyInstanceParam(const ModifyInstanceParamRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstanceParam");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstanceParamResponse rsp = ModifyInstanceParamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstanceParamOutcome(rsp);
        else
            return ModifyInstanceParamOutcome(o.GetError());
    }
    else
    {
        return ModifyInstanceParamOutcome(outcome.GetError());
    }
}

void CdbClient::ModifyInstanceParamAsync(const ModifyInstanceParamRequest& request, const ModifyInstanceParamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyInstanceParamRequest&;
    using Resp = ModifyInstanceParamResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyInstanceParam", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::ModifyInstanceParamOutcomeCallable CdbClient::ModifyInstanceParamCallable(const ModifyInstanceParamRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyInstanceParamOutcome>>();
    ModifyInstanceParamAsync(
    request,
    [prom](
        const CdbClient*,
        const ModifyInstanceParamRequest&,
        ModifyInstanceParamOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::ModifyInstancePasswordComplexityOutcome CdbClient::ModifyInstancePasswordComplexity(const ModifyInstancePasswordComplexityRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstancePasswordComplexity");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstancePasswordComplexityResponse rsp = ModifyInstancePasswordComplexityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstancePasswordComplexityOutcome(rsp);
        else
            return ModifyInstancePasswordComplexityOutcome(o.GetError());
    }
    else
    {
        return ModifyInstancePasswordComplexityOutcome(outcome.GetError());
    }
}

void CdbClient::ModifyInstancePasswordComplexityAsync(const ModifyInstancePasswordComplexityRequest& request, const ModifyInstancePasswordComplexityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyInstancePasswordComplexityRequest&;
    using Resp = ModifyInstancePasswordComplexityResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyInstancePasswordComplexity", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::ModifyInstancePasswordComplexityOutcomeCallable CdbClient::ModifyInstancePasswordComplexityCallable(const ModifyInstancePasswordComplexityRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyInstancePasswordComplexityOutcome>>();
    ModifyInstancePasswordComplexityAsync(
    request,
    [prom](
        const CdbClient*,
        const ModifyInstancePasswordComplexityRequest&,
        ModifyInstancePasswordComplexityOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::ModifyInstanceTagOutcome CdbClient::ModifyInstanceTag(const ModifyInstanceTagRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstanceTag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstanceTagResponse rsp = ModifyInstanceTagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstanceTagOutcome(rsp);
        else
            return ModifyInstanceTagOutcome(o.GetError());
    }
    else
    {
        return ModifyInstanceTagOutcome(outcome.GetError());
    }
}

void CdbClient::ModifyInstanceTagAsync(const ModifyInstanceTagRequest& request, const ModifyInstanceTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyInstanceTagRequest&;
    using Resp = ModifyInstanceTagResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyInstanceTag", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::ModifyInstanceTagOutcomeCallable CdbClient::ModifyInstanceTagCallable(const ModifyInstanceTagRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyInstanceTagOutcome>>();
    ModifyInstanceTagAsync(
    request,
    [prom](
        const CdbClient*,
        const ModifyInstanceTagRequest&,
        ModifyInstanceTagOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::ModifyLocalBinlogConfigOutcome CdbClient::ModifyLocalBinlogConfig(const ModifyLocalBinlogConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLocalBinlogConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLocalBinlogConfigResponse rsp = ModifyLocalBinlogConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLocalBinlogConfigOutcome(rsp);
        else
            return ModifyLocalBinlogConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyLocalBinlogConfigOutcome(outcome.GetError());
    }
}

void CdbClient::ModifyLocalBinlogConfigAsync(const ModifyLocalBinlogConfigRequest& request, const ModifyLocalBinlogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyLocalBinlogConfigRequest&;
    using Resp = ModifyLocalBinlogConfigResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyLocalBinlogConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::ModifyLocalBinlogConfigOutcomeCallable CdbClient::ModifyLocalBinlogConfigCallable(const ModifyLocalBinlogConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyLocalBinlogConfigOutcome>>();
    ModifyLocalBinlogConfigAsync(
    request,
    [prom](
        const CdbClient*,
        const ModifyLocalBinlogConfigRequest&,
        ModifyLocalBinlogConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::ModifyNameOrDescByDpIdOutcome CdbClient::ModifyNameOrDescByDpId(const ModifyNameOrDescByDpIdRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNameOrDescByDpId");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNameOrDescByDpIdResponse rsp = ModifyNameOrDescByDpIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNameOrDescByDpIdOutcome(rsp);
        else
            return ModifyNameOrDescByDpIdOutcome(o.GetError());
    }
    else
    {
        return ModifyNameOrDescByDpIdOutcome(outcome.GetError());
    }
}

void CdbClient::ModifyNameOrDescByDpIdAsync(const ModifyNameOrDescByDpIdRequest& request, const ModifyNameOrDescByDpIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyNameOrDescByDpIdRequest&;
    using Resp = ModifyNameOrDescByDpIdResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyNameOrDescByDpId", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::ModifyNameOrDescByDpIdOutcomeCallable CdbClient::ModifyNameOrDescByDpIdCallable(const ModifyNameOrDescByDpIdRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyNameOrDescByDpIdOutcome>>();
    ModifyNameOrDescByDpIdAsync(
    request,
    [prom](
        const CdbClient*,
        const ModifyNameOrDescByDpIdRequest&,
        ModifyNameOrDescByDpIdOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::ModifyParamTemplateOutcome CdbClient::ModifyParamTemplate(const ModifyParamTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyParamTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyParamTemplateResponse rsp = ModifyParamTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyParamTemplateOutcome(rsp);
        else
            return ModifyParamTemplateOutcome(o.GetError());
    }
    else
    {
        return ModifyParamTemplateOutcome(outcome.GetError());
    }
}

void CdbClient::ModifyParamTemplateAsync(const ModifyParamTemplateRequest& request, const ModifyParamTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyParamTemplateRequest&;
    using Resp = ModifyParamTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyParamTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::ModifyParamTemplateOutcomeCallable CdbClient::ModifyParamTemplateCallable(const ModifyParamTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyParamTemplateOutcome>>();
    ModifyParamTemplateAsync(
    request,
    [prom](
        const CdbClient*,
        const ModifyParamTemplateRequest&,
        ModifyParamTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::ModifyProtectModeOutcome CdbClient::ModifyProtectMode(const ModifyProtectModeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyProtectMode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyProtectModeResponse rsp = ModifyProtectModeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyProtectModeOutcome(rsp);
        else
            return ModifyProtectModeOutcome(o.GetError());
    }
    else
    {
        return ModifyProtectModeOutcome(outcome.GetError());
    }
}

void CdbClient::ModifyProtectModeAsync(const ModifyProtectModeRequest& request, const ModifyProtectModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyProtectModeRequest&;
    using Resp = ModifyProtectModeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyProtectMode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::ModifyProtectModeOutcomeCallable CdbClient::ModifyProtectModeCallable(const ModifyProtectModeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyProtectModeOutcome>>();
    ModifyProtectModeAsync(
    request,
    [prom](
        const CdbClient*,
        const ModifyProtectModeRequest&,
        ModifyProtectModeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::ModifyRemoteBackupConfigOutcome CdbClient::ModifyRemoteBackupConfig(const ModifyRemoteBackupConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRemoteBackupConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRemoteBackupConfigResponse rsp = ModifyRemoteBackupConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRemoteBackupConfigOutcome(rsp);
        else
            return ModifyRemoteBackupConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyRemoteBackupConfigOutcome(outcome.GetError());
    }
}

void CdbClient::ModifyRemoteBackupConfigAsync(const ModifyRemoteBackupConfigRequest& request, const ModifyRemoteBackupConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyRemoteBackupConfigRequest&;
    using Resp = ModifyRemoteBackupConfigResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyRemoteBackupConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::ModifyRemoteBackupConfigOutcomeCallable CdbClient::ModifyRemoteBackupConfigCallable(const ModifyRemoteBackupConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyRemoteBackupConfigOutcome>>();
    ModifyRemoteBackupConfigAsync(
    request,
    [prom](
        const CdbClient*,
        const ModifyRemoteBackupConfigRequest&,
        ModifyRemoteBackupConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::ModifyRoGroupInfoOutcome CdbClient::ModifyRoGroupInfo(const ModifyRoGroupInfoRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRoGroupInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRoGroupInfoResponse rsp = ModifyRoGroupInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRoGroupInfoOutcome(rsp);
        else
            return ModifyRoGroupInfoOutcome(o.GetError());
    }
    else
    {
        return ModifyRoGroupInfoOutcome(outcome.GetError());
    }
}

void CdbClient::ModifyRoGroupInfoAsync(const ModifyRoGroupInfoRequest& request, const ModifyRoGroupInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyRoGroupInfoRequest&;
    using Resp = ModifyRoGroupInfoResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyRoGroupInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::ModifyRoGroupInfoOutcomeCallable CdbClient::ModifyRoGroupInfoCallable(const ModifyRoGroupInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyRoGroupInfoOutcome>>();
    ModifyRoGroupInfoAsync(
    request,
    [prom](
        const CdbClient*,
        const ModifyRoGroupInfoRequest&,
        ModifyRoGroupInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::ModifyRoGroupVipVportOutcome CdbClient::ModifyRoGroupVipVport(const ModifyRoGroupVipVportRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRoGroupVipVport");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRoGroupVipVportResponse rsp = ModifyRoGroupVipVportResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRoGroupVipVportOutcome(rsp);
        else
            return ModifyRoGroupVipVportOutcome(o.GetError());
    }
    else
    {
        return ModifyRoGroupVipVportOutcome(outcome.GetError());
    }
}

void CdbClient::ModifyRoGroupVipVportAsync(const ModifyRoGroupVipVportRequest& request, const ModifyRoGroupVipVportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyRoGroupVipVportRequest&;
    using Resp = ModifyRoGroupVipVportResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyRoGroupVipVport", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::ModifyRoGroupVipVportOutcomeCallable CdbClient::ModifyRoGroupVipVportCallable(const ModifyRoGroupVipVportRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyRoGroupVipVportOutcome>>();
    ModifyRoGroupVipVportAsync(
    request,
    [prom](
        const CdbClient*,
        const ModifyRoGroupVipVportRequest&,
        ModifyRoGroupVipVportOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::ModifyTimeWindowOutcome CdbClient::ModifyTimeWindow(const ModifyTimeWindowRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTimeWindow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTimeWindowResponse rsp = ModifyTimeWindowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTimeWindowOutcome(rsp);
        else
            return ModifyTimeWindowOutcome(o.GetError());
    }
    else
    {
        return ModifyTimeWindowOutcome(outcome.GetError());
    }
}

void CdbClient::ModifyTimeWindowAsync(const ModifyTimeWindowRequest& request, const ModifyTimeWindowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyTimeWindowRequest&;
    using Resp = ModifyTimeWindowResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyTimeWindow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::ModifyTimeWindowOutcomeCallable CdbClient::ModifyTimeWindowCallable(const ModifyTimeWindowRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyTimeWindowOutcome>>();
    ModifyTimeWindowAsync(
    request,
    [prom](
        const CdbClient*,
        const ModifyTimeWindowRequest&,
        ModifyTimeWindowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::OfflineIsolatedInstancesOutcome CdbClient::OfflineIsolatedInstances(const OfflineIsolatedInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "OfflineIsolatedInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OfflineIsolatedInstancesResponse rsp = OfflineIsolatedInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OfflineIsolatedInstancesOutcome(rsp);
        else
            return OfflineIsolatedInstancesOutcome(o.GetError());
    }
    else
    {
        return OfflineIsolatedInstancesOutcome(outcome.GetError());
    }
}

void CdbClient::OfflineIsolatedInstancesAsync(const OfflineIsolatedInstancesRequest& request, const OfflineIsolatedInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const OfflineIsolatedInstancesRequest&;
    using Resp = OfflineIsolatedInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "OfflineIsolatedInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::OfflineIsolatedInstancesOutcomeCallable CdbClient::OfflineIsolatedInstancesCallable(const OfflineIsolatedInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<OfflineIsolatedInstancesOutcome>>();
    OfflineIsolatedInstancesAsync(
    request,
    [prom](
        const CdbClient*,
        const OfflineIsolatedInstancesRequest&,
        OfflineIsolatedInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::OpenAuditServiceOutcome CdbClient::OpenAuditService(const OpenAuditServiceRequest &request)
{
    auto outcome = MakeRequest(request, "OpenAuditService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OpenAuditServiceResponse rsp = OpenAuditServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OpenAuditServiceOutcome(rsp);
        else
            return OpenAuditServiceOutcome(o.GetError());
    }
    else
    {
        return OpenAuditServiceOutcome(outcome.GetError());
    }
}

void CdbClient::OpenAuditServiceAsync(const OpenAuditServiceRequest& request, const OpenAuditServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const OpenAuditServiceRequest&;
    using Resp = OpenAuditServiceResponse;

    DoRequestAsync<Req, Resp>(
        "OpenAuditService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::OpenAuditServiceOutcomeCallable CdbClient::OpenAuditServiceCallable(const OpenAuditServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<OpenAuditServiceOutcome>>();
    OpenAuditServiceAsync(
    request,
    [prom](
        const CdbClient*,
        const OpenAuditServiceRequest&,
        OpenAuditServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::OpenDBInstanceEncryptionOutcome CdbClient::OpenDBInstanceEncryption(const OpenDBInstanceEncryptionRequest &request)
{
    auto outcome = MakeRequest(request, "OpenDBInstanceEncryption");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OpenDBInstanceEncryptionResponse rsp = OpenDBInstanceEncryptionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OpenDBInstanceEncryptionOutcome(rsp);
        else
            return OpenDBInstanceEncryptionOutcome(o.GetError());
    }
    else
    {
        return OpenDBInstanceEncryptionOutcome(outcome.GetError());
    }
}

void CdbClient::OpenDBInstanceEncryptionAsync(const OpenDBInstanceEncryptionRequest& request, const OpenDBInstanceEncryptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const OpenDBInstanceEncryptionRequest&;
    using Resp = OpenDBInstanceEncryptionResponse;

    DoRequestAsync<Req, Resp>(
        "OpenDBInstanceEncryption", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::OpenDBInstanceEncryptionOutcomeCallable CdbClient::OpenDBInstanceEncryptionCallable(const OpenDBInstanceEncryptionRequest &request)
{
    const auto prom = std::make_shared<std::promise<OpenDBInstanceEncryptionOutcome>>();
    OpenDBInstanceEncryptionAsync(
    request,
    [prom](
        const CdbClient*,
        const OpenDBInstanceEncryptionRequest&,
        OpenDBInstanceEncryptionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::OpenDBInstanceGTIDOutcome CdbClient::OpenDBInstanceGTID(const OpenDBInstanceGTIDRequest &request)
{
    auto outcome = MakeRequest(request, "OpenDBInstanceGTID");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OpenDBInstanceGTIDResponse rsp = OpenDBInstanceGTIDResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OpenDBInstanceGTIDOutcome(rsp);
        else
            return OpenDBInstanceGTIDOutcome(o.GetError());
    }
    else
    {
        return OpenDBInstanceGTIDOutcome(outcome.GetError());
    }
}

void CdbClient::OpenDBInstanceGTIDAsync(const OpenDBInstanceGTIDRequest& request, const OpenDBInstanceGTIDAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const OpenDBInstanceGTIDRequest&;
    using Resp = OpenDBInstanceGTIDResponse;

    DoRequestAsync<Req, Resp>(
        "OpenDBInstanceGTID", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::OpenDBInstanceGTIDOutcomeCallable CdbClient::OpenDBInstanceGTIDCallable(const OpenDBInstanceGTIDRequest &request)
{
    const auto prom = std::make_shared<std::promise<OpenDBInstanceGTIDOutcome>>();
    OpenDBInstanceGTIDAsync(
    request,
    [prom](
        const CdbClient*,
        const OpenDBInstanceGTIDRequest&,
        OpenDBInstanceGTIDOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::OpenSSLOutcome CdbClient::OpenSSL(const OpenSSLRequest &request)
{
    auto outcome = MakeRequest(request, "OpenSSL");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OpenSSLResponse rsp = OpenSSLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OpenSSLOutcome(rsp);
        else
            return OpenSSLOutcome(o.GetError());
    }
    else
    {
        return OpenSSLOutcome(outcome.GetError());
    }
}

void CdbClient::OpenSSLAsync(const OpenSSLRequest& request, const OpenSSLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const OpenSSLRequest&;
    using Resp = OpenSSLResponse;

    DoRequestAsync<Req, Resp>(
        "OpenSSL", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::OpenSSLOutcomeCallable CdbClient::OpenSSLCallable(const OpenSSLRequest &request)
{
    const auto prom = std::make_shared<std::promise<OpenSSLOutcome>>();
    OpenSSLAsync(
    request,
    [prom](
        const CdbClient*,
        const OpenSSLRequest&,
        OpenSSLOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::OpenWanServiceOutcome CdbClient::OpenWanService(const OpenWanServiceRequest &request)
{
    auto outcome = MakeRequest(request, "OpenWanService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OpenWanServiceResponse rsp = OpenWanServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OpenWanServiceOutcome(rsp);
        else
            return OpenWanServiceOutcome(o.GetError());
    }
    else
    {
        return OpenWanServiceOutcome(outcome.GetError());
    }
}

void CdbClient::OpenWanServiceAsync(const OpenWanServiceRequest& request, const OpenWanServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const OpenWanServiceRequest&;
    using Resp = OpenWanServiceResponse;

    DoRequestAsync<Req, Resp>(
        "OpenWanService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::OpenWanServiceOutcomeCallable CdbClient::OpenWanServiceCallable(const OpenWanServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<OpenWanServiceOutcome>>();
    OpenWanServiceAsync(
    request,
    [prom](
        const CdbClient*,
        const OpenWanServiceRequest&,
        OpenWanServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::ReleaseIsolatedDBInstancesOutcome CdbClient::ReleaseIsolatedDBInstances(const ReleaseIsolatedDBInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "ReleaseIsolatedDBInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReleaseIsolatedDBInstancesResponse rsp = ReleaseIsolatedDBInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReleaseIsolatedDBInstancesOutcome(rsp);
        else
            return ReleaseIsolatedDBInstancesOutcome(o.GetError());
    }
    else
    {
        return ReleaseIsolatedDBInstancesOutcome(outcome.GetError());
    }
}

void CdbClient::ReleaseIsolatedDBInstancesAsync(const ReleaseIsolatedDBInstancesRequest& request, const ReleaseIsolatedDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ReleaseIsolatedDBInstancesRequest&;
    using Resp = ReleaseIsolatedDBInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "ReleaseIsolatedDBInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::ReleaseIsolatedDBInstancesOutcomeCallable CdbClient::ReleaseIsolatedDBInstancesCallable(const ReleaseIsolatedDBInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ReleaseIsolatedDBInstancesOutcome>>();
    ReleaseIsolatedDBInstancesAsync(
    request,
    [prom](
        const CdbClient*,
        const ReleaseIsolatedDBInstancesRequest&,
        ReleaseIsolatedDBInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::ReloadBalanceProxyNodeOutcome CdbClient::ReloadBalanceProxyNode(const ReloadBalanceProxyNodeRequest &request)
{
    auto outcome = MakeRequest(request, "ReloadBalanceProxyNode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReloadBalanceProxyNodeResponse rsp = ReloadBalanceProxyNodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReloadBalanceProxyNodeOutcome(rsp);
        else
            return ReloadBalanceProxyNodeOutcome(o.GetError());
    }
    else
    {
        return ReloadBalanceProxyNodeOutcome(outcome.GetError());
    }
}

void CdbClient::ReloadBalanceProxyNodeAsync(const ReloadBalanceProxyNodeRequest& request, const ReloadBalanceProxyNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ReloadBalanceProxyNodeRequest&;
    using Resp = ReloadBalanceProxyNodeResponse;

    DoRequestAsync<Req, Resp>(
        "ReloadBalanceProxyNode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::ReloadBalanceProxyNodeOutcomeCallable CdbClient::ReloadBalanceProxyNodeCallable(const ReloadBalanceProxyNodeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ReloadBalanceProxyNodeOutcome>>();
    ReloadBalanceProxyNodeAsync(
    request,
    [prom](
        const CdbClient*,
        const ReloadBalanceProxyNodeRequest&,
        ReloadBalanceProxyNodeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::RenewDBInstanceOutcome CdbClient::RenewDBInstance(const RenewDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "RenewDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RenewDBInstanceResponse rsp = RenewDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RenewDBInstanceOutcome(rsp);
        else
            return RenewDBInstanceOutcome(o.GetError());
    }
    else
    {
        return RenewDBInstanceOutcome(outcome.GetError());
    }
}

void CdbClient::RenewDBInstanceAsync(const RenewDBInstanceRequest& request, const RenewDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RenewDBInstanceRequest&;
    using Resp = RenewDBInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "RenewDBInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::RenewDBInstanceOutcomeCallable CdbClient::RenewDBInstanceCallable(const RenewDBInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<RenewDBInstanceOutcome>>();
    RenewDBInstanceAsync(
    request,
    [prom](
        const CdbClient*,
        const RenewDBInstanceRequest&,
        RenewDBInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::ResetPasswordOutcome CdbClient::ResetPassword(const ResetPasswordRequest &request)
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

void CdbClient::ResetPasswordAsync(const ResetPasswordRequest& request, const ResetPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CdbClient::ResetPasswordOutcomeCallable CdbClient::ResetPasswordCallable(const ResetPasswordRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResetPasswordOutcome>>();
    ResetPasswordAsync(
    request,
    [prom](
        const CdbClient*,
        const ResetPasswordRequest&,
        ResetPasswordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::ResetRootAccountOutcome CdbClient::ResetRootAccount(const ResetRootAccountRequest &request)
{
    auto outcome = MakeRequest(request, "ResetRootAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetRootAccountResponse rsp = ResetRootAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetRootAccountOutcome(rsp);
        else
            return ResetRootAccountOutcome(o.GetError());
    }
    else
    {
        return ResetRootAccountOutcome(outcome.GetError());
    }
}

void CdbClient::ResetRootAccountAsync(const ResetRootAccountRequest& request, const ResetRootAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ResetRootAccountRequest&;
    using Resp = ResetRootAccountResponse;

    DoRequestAsync<Req, Resp>(
        "ResetRootAccount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::ResetRootAccountOutcomeCallable CdbClient::ResetRootAccountCallable(const ResetRootAccountRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResetRootAccountOutcome>>();
    ResetRootAccountAsync(
    request,
    [prom](
        const CdbClient*,
        const ResetRootAccountRequest&,
        ResetRootAccountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::RestartDBInstancesOutcome CdbClient::RestartDBInstances(const RestartDBInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "RestartDBInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RestartDBInstancesResponse rsp = RestartDBInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RestartDBInstancesOutcome(rsp);
        else
            return RestartDBInstancesOutcome(o.GetError());
    }
    else
    {
        return RestartDBInstancesOutcome(outcome.GetError());
    }
}

void CdbClient::RestartDBInstancesAsync(const RestartDBInstancesRequest& request, const RestartDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RestartDBInstancesRequest&;
    using Resp = RestartDBInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "RestartDBInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::RestartDBInstancesOutcomeCallable CdbClient::RestartDBInstancesCallable(const RestartDBInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<RestartDBInstancesOutcome>>();
    RestartDBInstancesAsync(
    request,
    [prom](
        const CdbClient*,
        const RestartDBInstancesRequest&,
        RestartDBInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::StartBatchRollbackOutcome CdbClient::StartBatchRollback(const StartBatchRollbackRequest &request)
{
    auto outcome = MakeRequest(request, "StartBatchRollback");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartBatchRollbackResponse rsp = StartBatchRollbackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartBatchRollbackOutcome(rsp);
        else
            return StartBatchRollbackOutcome(o.GetError());
    }
    else
    {
        return StartBatchRollbackOutcome(outcome.GetError());
    }
}

void CdbClient::StartBatchRollbackAsync(const StartBatchRollbackRequest& request, const StartBatchRollbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartBatchRollbackRequest&;
    using Resp = StartBatchRollbackResponse;

    DoRequestAsync<Req, Resp>(
        "StartBatchRollback", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::StartBatchRollbackOutcomeCallable CdbClient::StartBatchRollbackCallable(const StartBatchRollbackRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartBatchRollbackOutcome>>();
    StartBatchRollbackAsync(
    request,
    [prom](
        const CdbClient*,
        const StartBatchRollbackRequest&,
        StartBatchRollbackOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::StartCpuExpandOutcome CdbClient::StartCpuExpand(const StartCpuExpandRequest &request)
{
    auto outcome = MakeRequest(request, "StartCpuExpand");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartCpuExpandResponse rsp = StartCpuExpandResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartCpuExpandOutcome(rsp);
        else
            return StartCpuExpandOutcome(o.GetError());
    }
    else
    {
        return StartCpuExpandOutcome(outcome.GetError());
    }
}

void CdbClient::StartCpuExpandAsync(const StartCpuExpandRequest& request, const StartCpuExpandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartCpuExpandRequest&;
    using Resp = StartCpuExpandResponse;

    DoRequestAsync<Req, Resp>(
        "StartCpuExpand", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::StartCpuExpandOutcomeCallable CdbClient::StartCpuExpandCallable(const StartCpuExpandRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartCpuExpandOutcome>>();
    StartCpuExpandAsync(
    request,
    [prom](
        const CdbClient*,
        const StartCpuExpandRequest&,
        StartCpuExpandOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::StartReplicationOutcome CdbClient::StartReplication(const StartReplicationRequest &request)
{
    auto outcome = MakeRequest(request, "StartReplication");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartReplicationResponse rsp = StartReplicationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartReplicationOutcome(rsp);
        else
            return StartReplicationOutcome(o.GetError());
    }
    else
    {
        return StartReplicationOutcome(outcome.GetError());
    }
}

void CdbClient::StartReplicationAsync(const StartReplicationRequest& request, const StartReplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartReplicationRequest&;
    using Resp = StartReplicationResponse;

    DoRequestAsync<Req, Resp>(
        "StartReplication", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::StartReplicationOutcomeCallable CdbClient::StartReplicationCallable(const StartReplicationRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartReplicationOutcome>>();
    StartReplicationAsync(
    request,
    [prom](
        const CdbClient*,
        const StartReplicationRequest&,
        StartReplicationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::StopCpuExpandOutcome CdbClient::StopCpuExpand(const StopCpuExpandRequest &request)
{
    auto outcome = MakeRequest(request, "StopCpuExpand");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopCpuExpandResponse rsp = StopCpuExpandResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopCpuExpandOutcome(rsp);
        else
            return StopCpuExpandOutcome(o.GetError());
    }
    else
    {
        return StopCpuExpandOutcome(outcome.GetError());
    }
}

void CdbClient::StopCpuExpandAsync(const StopCpuExpandRequest& request, const StopCpuExpandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopCpuExpandRequest&;
    using Resp = StopCpuExpandResponse;

    DoRequestAsync<Req, Resp>(
        "StopCpuExpand", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::StopCpuExpandOutcomeCallable CdbClient::StopCpuExpandCallable(const StopCpuExpandRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopCpuExpandOutcome>>();
    StopCpuExpandAsync(
    request,
    [prom](
        const CdbClient*,
        const StopCpuExpandRequest&,
        StopCpuExpandOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::StopDBImportJobOutcome CdbClient::StopDBImportJob(const StopDBImportJobRequest &request)
{
    auto outcome = MakeRequest(request, "StopDBImportJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopDBImportJobResponse rsp = StopDBImportJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopDBImportJobOutcome(rsp);
        else
            return StopDBImportJobOutcome(o.GetError());
    }
    else
    {
        return StopDBImportJobOutcome(outcome.GetError());
    }
}

void CdbClient::StopDBImportJobAsync(const StopDBImportJobRequest& request, const StopDBImportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopDBImportJobRequest&;
    using Resp = StopDBImportJobResponse;

    DoRequestAsync<Req, Resp>(
        "StopDBImportJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::StopDBImportJobOutcomeCallable CdbClient::StopDBImportJobCallable(const StopDBImportJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopDBImportJobOutcome>>();
    StopDBImportJobAsync(
    request,
    [prom](
        const CdbClient*,
        const StopDBImportJobRequest&,
        StopDBImportJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::StopReplicationOutcome CdbClient::StopReplication(const StopReplicationRequest &request)
{
    auto outcome = MakeRequest(request, "StopReplication");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopReplicationResponse rsp = StopReplicationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopReplicationOutcome(rsp);
        else
            return StopReplicationOutcome(o.GetError());
    }
    else
    {
        return StopReplicationOutcome(outcome.GetError());
    }
}

void CdbClient::StopReplicationAsync(const StopReplicationRequest& request, const StopReplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopReplicationRequest&;
    using Resp = StopReplicationResponse;

    DoRequestAsync<Req, Resp>(
        "StopReplication", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::StopReplicationOutcomeCallable CdbClient::StopReplicationCallable(const StopReplicationRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopReplicationOutcome>>();
    StopReplicationAsync(
    request,
    [prom](
        const CdbClient*,
        const StopReplicationRequest&,
        StopReplicationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::StopRollbackOutcome CdbClient::StopRollback(const StopRollbackRequest &request)
{
    auto outcome = MakeRequest(request, "StopRollback");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopRollbackResponse rsp = StopRollbackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopRollbackOutcome(rsp);
        else
            return StopRollbackOutcome(o.GetError());
    }
    else
    {
        return StopRollbackOutcome(outcome.GetError());
    }
}

void CdbClient::StopRollbackAsync(const StopRollbackRequest& request, const StopRollbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopRollbackRequest&;
    using Resp = StopRollbackResponse;

    DoRequestAsync<Req, Resp>(
        "StopRollback", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::StopRollbackOutcomeCallable CdbClient::StopRollbackCallable(const StopRollbackRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopRollbackOutcome>>();
    StopRollbackAsync(
    request,
    [prom](
        const CdbClient*,
        const StopRollbackRequest&,
        StopRollbackOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::SubmitInstanceUpgradeCheckJobOutcome CdbClient::SubmitInstanceUpgradeCheckJob(const SubmitInstanceUpgradeCheckJobRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitInstanceUpgradeCheckJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitInstanceUpgradeCheckJobResponse rsp = SubmitInstanceUpgradeCheckJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitInstanceUpgradeCheckJobOutcome(rsp);
        else
            return SubmitInstanceUpgradeCheckJobOutcome(o.GetError());
    }
    else
    {
        return SubmitInstanceUpgradeCheckJobOutcome(outcome.GetError());
    }
}

void CdbClient::SubmitInstanceUpgradeCheckJobAsync(const SubmitInstanceUpgradeCheckJobRequest& request, const SubmitInstanceUpgradeCheckJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SubmitInstanceUpgradeCheckJobRequest&;
    using Resp = SubmitInstanceUpgradeCheckJobResponse;

    DoRequestAsync<Req, Resp>(
        "SubmitInstanceUpgradeCheckJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::SubmitInstanceUpgradeCheckJobOutcomeCallable CdbClient::SubmitInstanceUpgradeCheckJobCallable(const SubmitInstanceUpgradeCheckJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<SubmitInstanceUpgradeCheckJobOutcome>>();
    SubmitInstanceUpgradeCheckJobAsync(
    request,
    [prom](
        const CdbClient*,
        const SubmitInstanceUpgradeCheckJobRequest&,
        SubmitInstanceUpgradeCheckJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::SwitchCDBProxyOutcome CdbClient::SwitchCDBProxy(const SwitchCDBProxyRequest &request)
{
    auto outcome = MakeRequest(request, "SwitchCDBProxy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SwitchCDBProxyResponse rsp = SwitchCDBProxyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SwitchCDBProxyOutcome(rsp);
        else
            return SwitchCDBProxyOutcome(o.GetError());
    }
    else
    {
        return SwitchCDBProxyOutcome(outcome.GetError());
    }
}

void CdbClient::SwitchCDBProxyAsync(const SwitchCDBProxyRequest& request, const SwitchCDBProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SwitchCDBProxyRequest&;
    using Resp = SwitchCDBProxyResponse;

    DoRequestAsync<Req, Resp>(
        "SwitchCDBProxy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::SwitchCDBProxyOutcomeCallable CdbClient::SwitchCDBProxyCallable(const SwitchCDBProxyRequest &request)
{
    const auto prom = std::make_shared<std::promise<SwitchCDBProxyOutcome>>();
    SwitchCDBProxyAsync(
    request,
    [prom](
        const CdbClient*,
        const SwitchCDBProxyRequest&,
        SwitchCDBProxyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::SwitchDBInstanceMasterSlaveOutcome CdbClient::SwitchDBInstanceMasterSlave(const SwitchDBInstanceMasterSlaveRequest &request)
{
    auto outcome = MakeRequest(request, "SwitchDBInstanceMasterSlave");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SwitchDBInstanceMasterSlaveResponse rsp = SwitchDBInstanceMasterSlaveResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SwitchDBInstanceMasterSlaveOutcome(rsp);
        else
            return SwitchDBInstanceMasterSlaveOutcome(o.GetError());
    }
    else
    {
        return SwitchDBInstanceMasterSlaveOutcome(outcome.GetError());
    }
}

void CdbClient::SwitchDBInstanceMasterSlaveAsync(const SwitchDBInstanceMasterSlaveRequest& request, const SwitchDBInstanceMasterSlaveAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SwitchDBInstanceMasterSlaveRequest&;
    using Resp = SwitchDBInstanceMasterSlaveResponse;

    DoRequestAsync<Req, Resp>(
        "SwitchDBInstanceMasterSlave", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::SwitchDBInstanceMasterSlaveOutcomeCallable CdbClient::SwitchDBInstanceMasterSlaveCallable(const SwitchDBInstanceMasterSlaveRequest &request)
{
    const auto prom = std::make_shared<std::promise<SwitchDBInstanceMasterSlaveOutcome>>();
    SwitchDBInstanceMasterSlaveAsync(
    request,
    [prom](
        const CdbClient*,
        const SwitchDBInstanceMasterSlaveRequest&,
        SwitchDBInstanceMasterSlaveOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::SwitchDrInstanceToMasterOutcome CdbClient::SwitchDrInstanceToMaster(const SwitchDrInstanceToMasterRequest &request)
{
    auto outcome = MakeRequest(request, "SwitchDrInstanceToMaster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SwitchDrInstanceToMasterResponse rsp = SwitchDrInstanceToMasterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SwitchDrInstanceToMasterOutcome(rsp);
        else
            return SwitchDrInstanceToMasterOutcome(o.GetError());
    }
    else
    {
        return SwitchDrInstanceToMasterOutcome(outcome.GetError());
    }
}

void CdbClient::SwitchDrInstanceToMasterAsync(const SwitchDrInstanceToMasterRequest& request, const SwitchDrInstanceToMasterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SwitchDrInstanceToMasterRequest&;
    using Resp = SwitchDrInstanceToMasterResponse;

    DoRequestAsync<Req, Resp>(
        "SwitchDrInstanceToMaster", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::SwitchDrInstanceToMasterOutcomeCallable CdbClient::SwitchDrInstanceToMasterCallable(const SwitchDrInstanceToMasterRequest &request)
{
    const auto prom = std::make_shared<std::promise<SwitchDrInstanceToMasterOutcome>>();
    SwitchDrInstanceToMasterAsync(
    request,
    [prom](
        const CdbClient*,
        const SwitchDrInstanceToMasterRequest&,
        SwitchDrInstanceToMasterOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::SwitchForUpgradeOutcome CdbClient::SwitchForUpgrade(const SwitchForUpgradeRequest &request)
{
    auto outcome = MakeRequest(request, "SwitchForUpgrade");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SwitchForUpgradeResponse rsp = SwitchForUpgradeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SwitchForUpgradeOutcome(rsp);
        else
            return SwitchForUpgradeOutcome(o.GetError());
    }
    else
    {
        return SwitchForUpgradeOutcome(outcome.GetError());
    }
}

void CdbClient::SwitchForUpgradeAsync(const SwitchForUpgradeRequest& request, const SwitchForUpgradeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SwitchForUpgradeRequest&;
    using Resp = SwitchForUpgradeResponse;

    DoRequestAsync<Req, Resp>(
        "SwitchForUpgrade", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::SwitchForUpgradeOutcomeCallable CdbClient::SwitchForUpgradeCallable(const SwitchForUpgradeRequest &request)
{
    const auto prom = std::make_shared<std::promise<SwitchForUpgradeOutcome>>();
    SwitchForUpgradeAsync(
    request,
    [prom](
        const CdbClient*,
        const SwitchForUpgradeRequest&,
        SwitchForUpgradeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::UpgradeCDBProxyVersionOutcome CdbClient::UpgradeCDBProxyVersion(const UpgradeCDBProxyVersionRequest &request)
{
    auto outcome = MakeRequest(request, "UpgradeCDBProxyVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpgradeCDBProxyVersionResponse rsp = UpgradeCDBProxyVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpgradeCDBProxyVersionOutcome(rsp);
        else
            return UpgradeCDBProxyVersionOutcome(o.GetError());
    }
    else
    {
        return UpgradeCDBProxyVersionOutcome(outcome.GetError());
    }
}

void CdbClient::UpgradeCDBProxyVersionAsync(const UpgradeCDBProxyVersionRequest& request, const UpgradeCDBProxyVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpgradeCDBProxyVersionRequest&;
    using Resp = UpgradeCDBProxyVersionResponse;

    DoRequestAsync<Req, Resp>(
        "UpgradeCDBProxyVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::UpgradeCDBProxyVersionOutcomeCallable CdbClient::UpgradeCDBProxyVersionCallable(const UpgradeCDBProxyVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpgradeCDBProxyVersionOutcome>>();
    UpgradeCDBProxyVersionAsync(
    request,
    [prom](
        const CdbClient*,
        const UpgradeCDBProxyVersionRequest&,
        UpgradeCDBProxyVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::UpgradeDBInstanceOutcome CdbClient::UpgradeDBInstance(const UpgradeDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "UpgradeDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpgradeDBInstanceResponse rsp = UpgradeDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpgradeDBInstanceOutcome(rsp);
        else
            return UpgradeDBInstanceOutcome(o.GetError());
    }
    else
    {
        return UpgradeDBInstanceOutcome(outcome.GetError());
    }
}

void CdbClient::UpgradeDBInstanceAsync(const UpgradeDBInstanceRequest& request, const UpgradeDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpgradeDBInstanceRequest&;
    using Resp = UpgradeDBInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "UpgradeDBInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::UpgradeDBInstanceOutcomeCallable CdbClient::UpgradeDBInstanceCallable(const UpgradeDBInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpgradeDBInstanceOutcome>>();
    UpgradeDBInstanceAsync(
    request,
    [prom](
        const CdbClient*,
        const UpgradeDBInstanceRequest&,
        UpgradeDBInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::UpgradeDBInstanceEngineVersionOutcome CdbClient::UpgradeDBInstanceEngineVersion(const UpgradeDBInstanceEngineVersionRequest &request)
{
    auto outcome = MakeRequest(request, "UpgradeDBInstanceEngineVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpgradeDBInstanceEngineVersionResponse rsp = UpgradeDBInstanceEngineVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpgradeDBInstanceEngineVersionOutcome(rsp);
        else
            return UpgradeDBInstanceEngineVersionOutcome(o.GetError());
    }
    else
    {
        return UpgradeDBInstanceEngineVersionOutcome(outcome.GetError());
    }
}

void CdbClient::UpgradeDBInstanceEngineVersionAsync(const UpgradeDBInstanceEngineVersionRequest& request, const UpgradeDBInstanceEngineVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpgradeDBInstanceEngineVersionRequest&;
    using Resp = UpgradeDBInstanceEngineVersionResponse;

    DoRequestAsync<Req, Resp>(
        "UpgradeDBInstanceEngineVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::UpgradeDBInstanceEngineVersionOutcomeCallable CdbClient::UpgradeDBInstanceEngineVersionCallable(const UpgradeDBInstanceEngineVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpgradeDBInstanceEngineVersionOutcome>>();
    UpgradeDBInstanceEngineVersionAsync(
    request,
    [prom](
        const CdbClient*,
        const UpgradeDBInstanceEngineVersionRequest&,
        UpgradeDBInstanceEngineVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdbClient::VerifyRootAccountOutcome CdbClient::VerifyRootAccount(const VerifyRootAccountRequest &request)
{
    auto outcome = MakeRequest(request, "VerifyRootAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VerifyRootAccountResponse rsp = VerifyRootAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VerifyRootAccountOutcome(rsp);
        else
            return VerifyRootAccountOutcome(o.GetError());
    }
    else
    {
        return VerifyRootAccountOutcome(outcome.GetError());
    }
}

void CdbClient::VerifyRootAccountAsync(const VerifyRootAccountRequest& request, const VerifyRootAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const VerifyRootAccountRequest&;
    using Resp = VerifyRootAccountResponse;

    DoRequestAsync<Req, Resp>(
        "VerifyRootAccount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdbClient::VerifyRootAccountOutcomeCallable CdbClient::VerifyRootAccountCallable(const VerifyRootAccountRequest &request)
{
    const auto prom = std::make_shared<std::promise<VerifyRootAccountOutcome>>();
    VerifyRootAccountAsync(
    request,
    [prom](
        const CdbClient*,
        const VerifyRootAccountRequest&,
        VerifyRootAccountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


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

#include <tencentcloud/cynosdb/v20190107/CynosdbClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Cynosdb::V20190107;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-01-07";
    const string ENDPOINT = "cynosdb.tencentcloudapi.com";
}

CynosdbClient::CynosdbClient(const Credential &credential, const string &region) :
    CynosdbClient(credential, region, ClientProfile())
{
}

CynosdbClient::CynosdbClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CynosdbClient::ActivateInstanceOutcome CynosdbClient::ActivateInstance(const ActivateInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "ActivateInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ActivateInstanceResponse rsp = ActivateInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ActivateInstanceOutcome(rsp);
        else
            return ActivateInstanceOutcome(o.GetError());
    }
    else
    {
        return ActivateInstanceOutcome(outcome.GetError());
    }
}

void CynosdbClient::ActivateInstanceAsync(const ActivateInstanceRequest& request, const ActivateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ActivateInstanceRequest&;
    using Resp = ActivateInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "ActivateInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::ActivateInstanceOutcomeCallable CynosdbClient::ActivateInstanceCallable(const ActivateInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ActivateInstanceOutcome>>();
    ActivateInstanceAsync(
    request,
    [prom](
        const CynosdbClient*,
        const ActivateInstanceRequest&,
        ActivateInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::AddClusterSlaveZoneOutcome CynosdbClient::AddClusterSlaveZone(const AddClusterSlaveZoneRequest &request)
{
    auto outcome = MakeRequest(request, "AddClusterSlaveZone");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddClusterSlaveZoneResponse rsp = AddClusterSlaveZoneResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddClusterSlaveZoneOutcome(rsp);
        else
            return AddClusterSlaveZoneOutcome(o.GetError());
    }
    else
    {
        return AddClusterSlaveZoneOutcome(outcome.GetError());
    }
}

void CynosdbClient::AddClusterSlaveZoneAsync(const AddClusterSlaveZoneRequest& request, const AddClusterSlaveZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddClusterSlaveZoneRequest&;
    using Resp = AddClusterSlaveZoneResponse;

    DoRequestAsync<Req, Resp>(
        "AddClusterSlaveZone", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::AddClusterSlaveZoneOutcomeCallable CynosdbClient::AddClusterSlaveZoneCallable(const AddClusterSlaveZoneRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddClusterSlaveZoneOutcome>>();
    AddClusterSlaveZoneAsync(
    request,
    [prom](
        const CynosdbClient*,
        const AddClusterSlaveZoneRequest&,
        AddClusterSlaveZoneOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::AddInstancesOutcome CynosdbClient::AddInstances(const AddInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "AddInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddInstancesResponse rsp = AddInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddInstancesOutcome(rsp);
        else
            return AddInstancesOutcome(o.GetError());
    }
    else
    {
        return AddInstancesOutcome(outcome.GetError());
    }
}

void CynosdbClient::AddInstancesAsync(const AddInstancesRequest& request, const AddInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddInstancesRequest&;
    using Resp = AddInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "AddInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::AddInstancesOutcomeCallable CynosdbClient::AddInstancesCallable(const AddInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddInstancesOutcome>>();
    AddInstancesAsync(
    request,
    [prom](
        const CynosdbClient*,
        const AddInstancesRequest&,
        AddInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::AssociateSecurityGroupsOutcome CynosdbClient::AssociateSecurityGroups(const AssociateSecurityGroupsRequest &request)
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

void CynosdbClient::AssociateSecurityGroupsAsync(const AssociateSecurityGroupsRequest& request, const AssociateSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CynosdbClient::AssociateSecurityGroupsOutcomeCallable CynosdbClient::AssociateSecurityGroupsCallable(const AssociateSecurityGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<AssociateSecurityGroupsOutcome>>();
    AssociateSecurityGroupsAsync(
    request,
    [prom](
        const CynosdbClient*,
        const AssociateSecurityGroupsRequest&,
        AssociateSecurityGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::BindClusterResourcePackagesOutcome CynosdbClient::BindClusterResourcePackages(const BindClusterResourcePackagesRequest &request)
{
    auto outcome = MakeRequest(request, "BindClusterResourcePackages");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindClusterResourcePackagesResponse rsp = BindClusterResourcePackagesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindClusterResourcePackagesOutcome(rsp);
        else
            return BindClusterResourcePackagesOutcome(o.GetError());
    }
    else
    {
        return BindClusterResourcePackagesOutcome(outcome.GetError());
    }
}

void CynosdbClient::BindClusterResourcePackagesAsync(const BindClusterResourcePackagesRequest& request, const BindClusterResourcePackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BindClusterResourcePackagesRequest&;
    using Resp = BindClusterResourcePackagesResponse;

    DoRequestAsync<Req, Resp>(
        "BindClusterResourcePackages", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::BindClusterResourcePackagesOutcomeCallable CynosdbClient::BindClusterResourcePackagesCallable(const BindClusterResourcePackagesRequest &request)
{
    const auto prom = std::make_shared<std::promise<BindClusterResourcePackagesOutcome>>();
    BindClusterResourcePackagesAsync(
    request,
    [prom](
        const CynosdbClient*,
        const BindClusterResourcePackagesRequest&,
        BindClusterResourcePackagesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::CloseAuditServiceOutcome CynosdbClient::CloseAuditService(const CloseAuditServiceRequest &request)
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

void CynosdbClient::CloseAuditServiceAsync(const CloseAuditServiceRequest& request, const CloseAuditServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CynosdbClient::CloseAuditServiceOutcomeCallable CynosdbClient::CloseAuditServiceCallable(const CloseAuditServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CloseAuditServiceOutcome>>();
    CloseAuditServiceAsync(
    request,
    [prom](
        const CynosdbClient*,
        const CloseAuditServiceRequest&,
        CloseAuditServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::CloseClusterPasswordComplexityOutcome CynosdbClient::CloseClusterPasswordComplexity(const CloseClusterPasswordComplexityRequest &request)
{
    auto outcome = MakeRequest(request, "CloseClusterPasswordComplexity");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CloseClusterPasswordComplexityResponse rsp = CloseClusterPasswordComplexityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CloseClusterPasswordComplexityOutcome(rsp);
        else
            return CloseClusterPasswordComplexityOutcome(o.GetError());
    }
    else
    {
        return CloseClusterPasswordComplexityOutcome(outcome.GetError());
    }
}

void CynosdbClient::CloseClusterPasswordComplexityAsync(const CloseClusterPasswordComplexityRequest& request, const CloseClusterPasswordComplexityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CloseClusterPasswordComplexityRequest&;
    using Resp = CloseClusterPasswordComplexityResponse;

    DoRequestAsync<Req, Resp>(
        "CloseClusterPasswordComplexity", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::CloseClusterPasswordComplexityOutcomeCallable CynosdbClient::CloseClusterPasswordComplexityCallable(const CloseClusterPasswordComplexityRequest &request)
{
    const auto prom = std::make_shared<std::promise<CloseClusterPasswordComplexityOutcome>>();
    CloseClusterPasswordComplexityAsync(
    request,
    [prom](
        const CynosdbClient*,
        const CloseClusterPasswordComplexityRequest&,
        CloseClusterPasswordComplexityOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::CloseProxyOutcome CynosdbClient::CloseProxy(const CloseProxyRequest &request)
{
    auto outcome = MakeRequest(request, "CloseProxy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CloseProxyResponse rsp = CloseProxyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CloseProxyOutcome(rsp);
        else
            return CloseProxyOutcome(o.GetError());
    }
    else
    {
        return CloseProxyOutcome(outcome.GetError());
    }
}

void CynosdbClient::CloseProxyAsync(const CloseProxyRequest& request, const CloseProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CloseProxyRequest&;
    using Resp = CloseProxyResponse;

    DoRequestAsync<Req, Resp>(
        "CloseProxy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::CloseProxyOutcomeCallable CynosdbClient::CloseProxyCallable(const CloseProxyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CloseProxyOutcome>>();
    CloseProxyAsync(
    request,
    [prom](
        const CynosdbClient*,
        const CloseProxyRequest&,
        CloseProxyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::CloseProxyEndPointOutcome CynosdbClient::CloseProxyEndPoint(const CloseProxyEndPointRequest &request)
{
    auto outcome = MakeRequest(request, "CloseProxyEndPoint");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CloseProxyEndPointResponse rsp = CloseProxyEndPointResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CloseProxyEndPointOutcome(rsp);
        else
            return CloseProxyEndPointOutcome(o.GetError());
    }
    else
    {
        return CloseProxyEndPointOutcome(outcome.GetError());
    }
}

void CynosdbClient::CloseProxyEndPointAsync(const CloseProxyEndPointRequest& request, const CloseProxyEndPointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CloseProxyEndPointRequest&;
    using Resp = CloseProxyEndPointResponse;

    DoRequestAsync<Req, Resp>(
        "CloseProxyEndPoint", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::CloseProxyEndPointOutcomeCallable CynosdbClient::CloseProxyEndPointCallable(const CloseProxyEndPointRequest &request)
{
    const auto prom = std::make_shared<std::promise<CloseProxyEndPointOutcome>>();
    CloseProxyEndPointAsync(
    request,
    [prom](
        const CynosdbClient*,
        const CloseProxyEndPointRequest&,
        CloseProxyEndPointOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::CloseSSLOutcome CynosdbClient::CloseSSL(const CloseSSLRequest &request)
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

void CynosdbClient::CloseSSLAsync(const CloseSSLRequest& request, const CloseSSLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CynosdbClient::CloseSSLOutcomeCallable CynosdbClient::CloseSSLCallable(const CloseSSLRequest &request)
{
    const auto prom = std::make_shared<std::promise<CloseSSLOutcome>>();
    CloseSSLAsync(
    request,
    [prom](
        const CynosdbClient*,
        const CloseSSLRequest&,
        CloseSSLOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::CloseWanOutcome CynosdbClient::CloseWan(const CloseWanRequest &request)
{
    auto outcome = MakeRequest(request, "CloseWan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CloseWanResponse rsp = CloseWanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CloseWanOutcome(rsp);
        else
            return CloseWanOutcome(o.GetError());
    }
    else
    {
        return CloseWanOutcome(outcome.GetError());
    }
}

void CynosdbClient::CloseWanAsync(const CloseWanRequest& request, const CloseWanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CloseWanRequest&;
    using Resp = CloseWanResponse;

    DoRequestAsync<Req, Resp>(
        "CloseWan", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::CloseWanOutcomeCallable CynosdbClient::CloseWanCallable(const CloseWanRequest &request)
{
    const auto prom = std::make_shared<std::promise<CloseWanOutcome>>();
    CloseWanAsync(
    request,
    [prom](
        const CynosdbClient*,
        const CloseWanRequest&,
        CloseWanOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::CopyClusterPasswordComplexityOutcome CynosdbClient::CopyClusterPasswordComplexity(const CopyClusterPasswordComplexityRequest &request)
{
    auto outcome = MakeRequest(request, "CopyClusterPasswordComplexity");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CopyClusterPasswordComplexityResponse rsp = CopyClusterPasswordComplexityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CopyClusterPasswordComplexityOutcome(rsp);
        else
            return CopyClusterPasswordComplexityOutcome(o.GetError());
    }
    else
    {
        return CopyClusterPasswordComplexityOutcome(outcome.GetError());
    }
}

void CynosdbClient::CopyClusterPasswordComplexityAsync(const CopyClusterPasswordComplexityRequest& request, const CopyClusterPasswordComplexityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CopyClusterPasswordComplexityRequest&;
    using Resp = CopyClusterPasswordComplexityResponse;

    DoRequestAsync<Req, Resp>(
        "CopyClusterPasswordComplexity", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::CopyClusterPasswordComplexityOutcomeCallable CynosdbClient::CopyClusterPasswordComplexityCallable(const CopyClusterPasswordComplexityRequest &request)
{
    const auto prom = std::make_shared<std::promise<CopyClusterPasswordComplexityOutcome>>();
    CopyClusterPasswordComplexityAsync(
    request,
    [prom](
        const CynosdbClient*,
        const CopyClusterPasswordComplexityRequest&,
        CopyClusterPasswordComplexityOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::CreateAccountsOutcome CynosdbClient::CreateAccounts(const CreateAccountsRequest &request)
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

void CynosdbClient::CreateAccountsAsync(const CreateAccountsRequest& request, const CreateAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CynosdbClient::CreateAccountsOutcomeCallable CynosdbClient::CreateAccountsCallable(const CreateAccountsRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAccountsOutcome>>();
    CreateAccountsAsync(
    request,
    [prom](
        const CynosdbClient*,
        const CreateAccountsRequest&,
        CreateAccountsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::CreateAuditLogFileOutcome CynosdbClient::CreateAuditLogFile(const CreateAuditLogFileRequest &request)
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

void CynosdbClient::CreateAuditLogFileAsync(const CreateAuditLogFileRequest& request, const CreateAuditLogFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CynosdbClient::CreateAuditLogFileOutcomeCallable CynosdbClient::CreateAuditLogFileCallable(const CreateAuditLogFileRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAuditLogFileOutcome>>();
    CreateAuditLogFileAsync(
    request,
    [prom](
        const CynosdbClient*,
        const CreateAuditLogFileRequest&,
        CreateAuditLogFileOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::CreateAuditRuleTemplateOutcome CynosdbClient::CreateAuditRuleTemplate(const CreateAuditRuleTemplateRequest &request)
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

void CynosdbClient::CreateAuditRuleTemplateAsync(const CreateAuditRuleTemplateRequest& request, const CreateAuditRuleTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CynosdbClient::CreateAuditRuleTemplateOutcomeCallable CynosdbClient::CreateAuditRuleTemplateCallable(const CreateAuditRuleTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAuditRuleTemplateOutcome>>();
    CreateAuditRuleTemplateAsync(
    request,
    [prom](
        const CynosdbClient*,
        const CreateAuditRuleTemplateRequest&,
        CreateAuditRuleTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::CreateBackupOutcome CynosdbClient::CreateBackup(const CreateBackupRequest &request)
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

void CynosdbClient::CreateBackupAsync(const CreateBackupRequest& request, const CreateBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CynosdbClient::CreateBackupOutcomeCallable CynosdbClient::CreateBackupCallable(const CreateBackupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateBackupOutcome>>();
    CreateBackupAsync(
    request,
    [prom](
        const CynosdbClient*,
        const CreateBackupRequest&,
        CreateBackupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::CreateCLSDeliveryOutcome CynosdbClient::CreateCLSDelivery(const CreateCLSDeliveryRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCLSDelivery");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCLSDeliveryResponse rsp = CreateCLSDeliveryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCLSDeliveryOutcome(rsp);
        else
            return CreateCLSDeliveryOutcome(o.GetError());
    }
    else
    {
        return CreateCLSDeliveryOutcome(outcome.GetError());
    }
}

void CynosdbClient::CreateCLSDeliveryAsync(const CreateCLSDeliveryRequest& request, const CreateCLSDeliveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCLSDeliveryRequest&;
    using Resp = CreateCLSDeliveryResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCLSDelivery", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::CreateCLSDeliveryOutcomeCallable CynosdbClient::CreateCLSDeliveryCallable(const CreateCLSDeliveryRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCLSDeliveryOutcome>>();
    CreateCLSDeliveryAsync(
    request,
    [prom](
        const CynosdbClient*,
        const CreateCLSDeliveryRequest&,
        CreateCLSDeliveryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::CreateClusterDatabaseOutcome CynosdbClient::CreateClusterDatabase(const CreateClusterDatabaseRequest &request)
{
    auto outcome = MakeRequest(request, "CreateClusterDatabase");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateClusterDatabaseResponse rsp = CreateClusterDatabaseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateClusterDatabaseOutcome(rsp);
        else
            return CreateClusterDatabaseOutcome(o.GetError());
    }
    else
    {
        return CreateClusterDatabaseOutcome(outcome.GetError());
    }
}

void CynosdbClient::CreateClusterDatabaseAsync(const CreateClusterDatabaseRequest& request, const CreateClusterDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateClusterDatabaseRequest&;
    using Resp = CreateClusterDatabaseResponse;

    DoRequestAsync<Req, Resp>(
        "CreateClusterDatabase", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::CreateClusterDatabaseOutcomeCallable CynosdbClient::CreateClusterDatabaseCallable(const CreateClusterDatabaseRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateClusterDatabaseOutcome>>();
    CreateClusterDatabaseAsync(
    request,
    [prom](
        const CynosdbClient*,
        const CreateClusterDatabaseRequest&,
        CreateClusterDatabaseOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::CreateClustersOutcome CynosdbClient::CreateClusters(const CreateClustersRequest &request)
{
    auto outcome = MakeRequest(request, "CreateClusters");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateClustersResponse rsp = CreateClustersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateClustersOutcome(rsp);
        else
            return CreateClustersOutcome(o.GetError());
    }
    else
    {
        return CreateClustersOutcome(outcome.GetError());
    }
}

void CynosdbClient::CreateClustersAsync(const CreateClustersRequest& request, const CreateClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateClustersRequest&;
    using Resp = CreateClustersResponse;

    DoRequestAsync<Req, Resp>(
        "CreateClusters", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::CreateClustersOutcomeCallable CynosdbClient::CreateClustersCallable(const CreateClustersRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateClustersOutcome>>();
    CreateClustersAsync(
    request,
    [prom](
        const CynosdbClient*,
        const CreateClustersRequest&,
        CreateClustersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::CreateIntegrateClusterOutcome CynosdbClient::CreateIntegrateCluster(const CreateIntegrateClusterRequest &request)
{
    auto outcome = MakeRequest(request, "CreateIntegrateCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateIntegrateClusterResponse rsp = CreateIntegrateClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateIntegrateClusterOutcome(rsp);
        else
            return CreateIntegrateClusterOutcome(o.GetError());
    }
    else
    {
        return CreateIntegrateClusterOutcome(outcome.GetError());
    }
}

void CynosdbClient::CreateIntegrateClusterAsync(const CreateIntegrateClusterRequest& request, const CreateIntegrateClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateIntegrateClusterRequest&;
    using Resp = CreateIntegrateClusterResponse;

    DoRequestAsync<Req, Resp>(
        "CreateIntegrateCluster", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::CreateIntegrateClusterOutcomeCallable CynosdbClient::CreateIntegrateClusterCallable(const CreateIntegrateClusterRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateIntegrateClusterOutcome>>();
    CreateIntegrateClusterAsync(
    request,
    [prom](
        const CynosdbClient*,
        const CreateIntegrateClusterRequest&,
        CreateIntegrateClusterOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::CreateParamTemplateOutcome CynosdbClient::CreateParamTemplate(const CreateParamTemplateRequest &request)
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

void CynosdbClient::CreateParamTemplateAsync(const CreateParamTemplateRequest& request, const CreateParamTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CynosdbClient::CreateParamTemplateOutcomeCallable CynosdbClient::CreateParamTemplateCallable(const CreateParamTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateParamTemplateOutcome>>();
    CreateParamTemplateAsync(
    request,
    [prom](
        const CynosdbClient*,
        const CreateParamTemplateRequest&,
        CreateParamTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::CreateProxyOutcome CynosdbClient::CreateProxy(const CreateProxyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateProxy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateProxyResponse rsp = CreateProxyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateProxyOutcome(rsp);
        else
            return CreateProxyOutcome(o.GetError());
    }
    else
    {
        return CreateProxyOutcome(outcome.GetError());
    }
}

void CynosdbClient::CreateProxyAsync(const CreateProxyRequest& request, const CreateProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateProxyRequest&;
    using Resp = CreateProxyResponse;

    DoRequestAsync<Req, Resp>(
        "CreateProxy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::CreateProxyOutcomeCallable CynosdbClient::CreateProxyCallable(const CreateProxyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateProxyOutcome>>();
    CreateProxyAsync(
    request,
    [prom](
        const CynosdbClient*,
        const CreateProxyRequest&,
        CreateProxyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::CreateProxyEndPointOutcome CynosdbClient::CreateProxyEndPoint(const CreateProxyEndPointRequest &request)
{
    auto outcome = MakeRequest(request, "CreateProxyEndPoint");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateProxyEndPointResponse rsp = CreateProxyEndPointResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateProxyEndPointOutcome(rsp);
        else
            return CreateProxyEndPointOutcome(o.GetError());
    }
    else
    {
        return CreateProxyEndPointOutcome(outcome.GetError());
    }
}

void CynosdbClient::CreateProxyEndPointAsync(const CreateProxyEndPointRequest& request, const CreateProxyEndPointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateProxyEndPointRequest&;
    using Resp = CreateProxyEndPointResponse;

    DoRequestAsync<Req, Resp>(
        "CreateProxyEndPoint", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::CreateProxyEndPointOutcomeCallable CynosdbClient::CreateProxyEndPointCallable(const CreateProxyEndPointRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateProxyEndPointOutcome>>();
    CreateProxyEndPointAsync(
    request,
    [prom](
        const CynosdbClient*,
        const CreateProxyEndPointRequest&,
        CreateProxyEndPointOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::CreateResourcePackageOutcome CynosdbClient::CreateResourcePackage(const CreateResourcePackageRequest &request)
{
    auto outcome = MakeRequest(request, "CreateResourcePackage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateResourcePackageResponse rsp = CreateResourcePackageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateResourcePackageOutcome(rsp);
        else
            return CreateResourcePackageOutcome(o.GetError());
    }
    else
    {
        return CreateResourcePackageOutcome(outcome.GetError());
    }
}

void CynosdbClient::CreateResourcePackageAsync(const CreateResourcePackageRequest& request, const CreateResourcePackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateResourcePackageRequest&;
    using Resp = CreateResourcePackageResponse;

    DoRequestAsync<Req, Resp>(
        "CreateResourcePackage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::CreateResourcePackageOutcomeCallable CynosdbClient::CreateResourcePackageCallable(const CreateResourcePackageRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateResourcePackageOutcome>>();
    CreateResourcePackageAsync(
    request,
    [prom](
        const CynosdbClient*,
        const CreateResourcePackageRequest&,
        CreateResourcePackageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::DeleteAccountsOutcome CynosdbClient::DeleteAccounts(const DeleteAccountsRequest &request)
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

void CynosdbClient::DeleteAccountsAsync(const DeleteAccountsRequest& request, const DeleteAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CynosdbClient::DeleteAccountsOutcomeCallable CynosdbClient::DeleteAccountsCallable(const DeleteAccountsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAccountsOutcome>>();
    DeleteAccountsAsync(
    request,
    [prom](
        const CynosdbClient*,
        const DeleteAccountsRequest&,
        DeleteAccountsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::DeleteAuditLogFileOutcome CynosdbClient::DeleteAuditLogFile(const DeleteAuditLogFileRequest &request)
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

void CynosdbClient::DeleteAuditLogFileAsync(const DeleteAuditLogFileRequest& request, const DeleteAuditLogFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CynosdbClient::DeleteAuditLogFileOutcomeCallable CynosdbClient::DeleteAuditLogFileCallable(const DeleteAuditLogFileRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAuditLogFileOutcome>>();
    DeleteAuditLogFileAsync(
    request,
    [prom](
        const CynosdbClient*,
        const DeleteAuditLogFileRequest&,
        DeleteAuditLogFileOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::DeleteAuditRuleTemplatesOutcome CynosdbClient::DeleteAuditRuleTemplates(const DeleteAuditRuleTemplatesRequest &request)
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

void CynosdbClient::DeleteAuditRuleTemplatesAsync(const DeleteAuditRuleTemplatesRequest& request, const DeleteAuditRuleTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CynosdbClient::DeleteAuditRuleTemplatesOutcomeCallable CynosdbClient::DeleteAuditRuleTemplatesCallable(const DeleteAuditRuleTemplatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAuditRuleTemplatesOutcome>>();
    DeleteAuditRuleTemplatesAsync(
    request,
    [prom](
        const CynosdbClient*,
        const DeleteAuditRuleTemplatesRequest&,
        DeleteAuditRuleTemplatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::DeleteBackupOutcome CynosdbClient::DeleteBackup(const DeleteBackupRequest &request)
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

void CynosdbClient::DeleteBackupAsync(const DeleteBackupRequest& request, const DeleteBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CynosdbClient::DeleteBackupOutcomeCallable CynosdbClient::DeleteBackupCallable(const DeleteBackupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteBackupOutcome>>();
    DeleteBackupAsync(
    request,
    [prom](
        const CynosdbClient*,
        const DeleteBackupRequest&,
        DeleteBackupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::DeleteCLSDeliveryOutcome CynosdbClient::DeleteCLSDelivery(const DeleteCLSDeliveryRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCLSDelivery");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCLSDeliveryResponse rsp = DeleteCLSDeliveryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCLSDeliveryOutcome(rsp);
        else
            return DeleteCLSDeliveryOutcome(o.GetError());
    }
    else
    {
        return DeleteCLSDeliveryOutcome(outcome.GetError());
    }
}

void CynosdbClient::DeleteCLSDeliveryAsync(const DeleteCLSDeliveryRequest& request, const DeleteCLSDeliveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCLSDeliveryRequest&;
    using Resp = DeleteCLSDeliveryResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCLSDelivery", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::DeleteCLSDeliveryOutcomeCallable CynosdbClient::DeleteCLSDeliveryCallable(const DeleteCLSDeliveryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCLSDeliveryOutcome>>();
    DeleteCLSDeliveryAsync(
    request,
    [prom](
        const CynosdbClient*,
        const DeleteCLSDeliveryRequest&,
        DeleteCLSDeliveryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::DeleteClusterDatabaseOutcome CynosdbClient::DeleteClusterDatabase(const DeleteClusterDatabaseRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteClusterDatabase");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteClusterDatabaseResponse rsp = DeleteClusterDatabaseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteClusterDatabaseOutcome(rsp);
        else
            return DeleteClusterDatabaseOutcome(o.GetError());
    }
    else
    {
        return DeleteClusterDatabaseOutcome(outcome.GetError());
    }
}

void CynosdbClient::DeleteClusterDatabaseAsync(const DeleteClusterDatabaseRequest& request, const DeleteClusterDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteClusterDatabaseRequest&;
    using Resp = DeleteClusterDatabaseResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteClusterDatabase", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::DeleteClusterDatabaseOutcomeCallable CynosdbClient::DeleteClusterDatabaseCallable(const DeleteClusterDatabaseRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteClusterDatabaseOutcome>>();
    DeleteClusterDatabaseAsync(
    request,
    [prom](
        const CynosdbClient*,
        const DeleteClusterDatabaseRequest&,
        DeleteClusterDatabaseOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::DeleteParamTemplateOutcome CynosdbClient::DeleteParamTemplate(const DeleteParamTemplateRequest &request)
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

void CynosdbClient::DeleteParamTemplateAsync(const DeleteParamTemplateRequest& request, const DeleteParamTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CynosdbClient::DeleteParamTemplateOutcomeCallable CynosdbClient::DeleteParamTemplateCallable(const DeleteParamTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteParamTemplateOutcome>>();
    DeleteParamTemplateAsync(
    request,
    [prom](
        const CynosdbClient*,
        const DeleteParamTemplateRequest&,
        DeleteParamTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::DescribeAccountAllGrantPrivilegesOutcome CynosdbClient::DescribeAccountAllGrantPrivileges(const DescribeAccountAllGrantPrivilegesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAccountAllGrantPrivileges");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAccountAllGrantPrivilegesResponse rsp = DescribeAccountAllGrantPrivilegesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAccountAllGrantPrivilegesOutcome(rsp);
        else
            return DescribeAccountAllGrantPrivilegesOutcome(o.GetError());
    }
    else
    {
        return DescribeAccountAllGrantPrivilegesOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeAccountAllGrantPrivilegesAsync(const DescribeAccountAllGrantPrivilegesRequest& request, const DescribeAccountAllGrantPrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAccountAllGrantPrivilegesRequest&;
    using Resp = DescribeAccountAllGrantPrivilegesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAccountAllGrantPrivileges", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::DescribeAccountAllGrantPrivilegesOutcomeCallable CynosdbClient::DescribeAccountAllGrantPrivilegesCallable(const DescribeAccountAllGrantPrivilegesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAccountAllGrantPrivilegesOutcome>>();
    DescribeAccountAllGrantPrivilegesAsync(
    request,
    [prom](
        const CynosdbClient*,
        const DescribeAccountAllGrantPrivilegesRequest&,
        DescribeAccountAllGrantPrivilegesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::DescribeAccountPrivilegesOutcome CynosdbClient::DescribeAccountPrivileges(const DescribeAccountPrivilegesRequest &request)
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

void CynosdbClient::DescribeAccountPrivilegesAsync(const DescribeAccountPrivilegesRequest& request, const DescribeAccountPrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CynosdbClient::DescribeAccountPrivilegesOutcomeCallable CynosdbClient::DescribeAccountPrivilegesCallable(const DescribeAccountPrivilegesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAccountPrivilegesOutcome>>();
    DescribeAccountPrivilegesAsync(
    request,
    [prom](
        const CynosdbClient*,
        const DescribeAccountPrivilegesRequest&,
        DescribeAccountPrivilegesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::DescribeAccountsOutcome CynosdbClient::DescribeAccounts(const DescribeAccountsRequest &request)
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

void CynosdbClient::DescribeAccountsAsync(const DescribeAccountsRequest& request, const DescribeAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CynosdbClient::DescribeAccountsOutcomeCallable CynosdbClient::DescribeAccountsCallable(const DescribeAccountsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAccountsOutcome>>();
    DescribeAccountsAsync(
    request,
    [prom](
        const CynosdbClient*,
        const DescribeAccountsRequest&,
        DescribeAccountsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::DescribeAuditInstanceListOutcome CynosdbClient::DescribeAuditInstanceList(const DescribeAuditInstanceListRequest &request)
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

void CynosdbClient::DescribeAuditInstanceListAsync(const DescribeAuditInstanceListRequest& request, const DescribeAuditInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CynosdbClient::DescribeAuditInstanceListOutcomeCallable CynosdbClient::DescribeAuditInstanceListCallable(const DescribeAuditInstanceListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAuditInstanceListOutcome>>();
    DescribeAuditInstanceListAsync(
    request,
    [prom](
        const CynosdbClient*,
        const DescribeAuditInstanceListRequest&,
        DescribeAuditInstanceListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::DescribeAuditLogFilesOutcome CynosdbClient::DescribeAuditLogFiles(const DescribeAuditLogFilesRequest &request)
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

void CynosdbClient::DescribeAuditLogFilesAsync(const DescribeAuditLogFilesRequest& request, const DescribeAuditLogFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CynosdbClient::DescribeAuditLogFilesOutcomeCallable CynosdbClient::DescribeAuditLogFilesCallable(const DescribeAuditLogFilesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAuditLogFilesOutcome>>();
    DescribeAuditLogFilesAsync(
    request,
    [prom](
        const CynosdbClient*,
        const DescribeAuditLogFilesRequest&,
        DescribeAuditLogFilesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::DescribeAuditLogsOutcome CynosdbClient::DescribeAuditLogs(const DescribeAuditLogsRequest &request)
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

void CynosdbClient::DescribeAuditLogsAsync(const DescribeAuditLogsRequest& request, const DescribeAuditLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CynosdbClient::DescribeAuditLogsOutcomeCallable CynosdbClient::DescribeAuditLogsCallable(const DescribeAuditLogsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAuditLogsOutcome>>();
    DescribeAuditLogsAsync(
    request,
    [prom](
        const CynosdbClient*,
        const DescribeAuditLogsRequest&,
        DescribeAuditLogsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::DescribeAuditRuleTemplatesOutcome CynosdbClient::DescribeAuditRuleTemplates(const DescribeAuditRuleTemplatesRequest &request)
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

void CynosdbClient::DescribeAuditRuleTemplatesAsync(const DescribeAuditRuleTemplatesRequest& request, const DescribeAuditRuleTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CynosdbClient::DescribeAuditRuleTemplatesOutcomeCallable CynosdbClient::DescribeAuditRuleTemplatesCallable(const DescribeAuditRuleTemplatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAuditRuleTemplatesOutcome>>();
    DescribeAuditRuleTemplatesAsync(
    request,
    [prom](
        const CynosdbClient*,
        const DescribeAuditRuleTemplatesRequest&,
        DescribeAuditRuleTemplatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::DescribeAuditRuleWithInstanceIdsOutcome CynosdbClient::DescribeAuditRuleWithInstanceIds(const DescribeAuditRuleWithInstanceIdsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAuditRuleWithInstanceIds");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAuditRuleWithInstanceIdsResponse rsp = DescribeAuditRuleWithInstanceIdsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAuditRuleWithInstanceIdsOutcome(rsp);
        else
            return DescribeAuditRuleWithInstanceIdsOutcome(o.GetError());
    }
    else
    {
        return DescribeAuditRuleWithInstanceIdsOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeAuditRuleWithInstanceIdsAsync(const DescribeAuditRuleWithInstanceIdsRequest& request, const DescribeAuditRuleWithInstanceIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAuditRuleWithInstanceIdsRequest&;
    using Resp = DescribeAuditRuleWithInstanceIdsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAuditRuleWithInstanceIds", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::DescribeAuditRuleWithInstanceIdsOutcomeCallable CynosdbClient::DescribeAuditRuleWithInstanceIdsCallable(const DescribeAuditRuleWithInstanceIdsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAuditRuleWithInstanceIdsOutcome>>();
    DescribeAuditRuleWithInstanceIdsAsync(
    request,
    [prom](
        const CynosdbClient*,
        const DescribeAuditRuleWithInstanceIdsRequest&,
        DescribeAuditRuleWithInstanceIdsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::DescribeBackupConfigOutcome CynosdbClient::DescribeBackupConfig(const DescribeBackupConfigRequest &request)
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

void CynosdbClient::DescribeBackupConfigAsync(const DescribeBackupConfigRequest& request, const DescribeBackupConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CynosdbClient::DescribeBackupConfigOutcomeCallable CynosdbClient::DescribeBackupConfigCallable(const DescribeBackupConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBackupConfigOutcome>>();
    DescribeBackupConfigAsync(
    request,
    [prom](
        const CynosdbClient*,
        const DescribeBackupConfigRequest&,
        DescribeBackupConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::DescribeBackupDownloadRestrictionOutcome CynosdbClient::DescribeBackupDownloadRestriction(const DescribeBackupDownloadRestrictionRequest &request)
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

void CynosdbClient::DescribeBackupDownloadRestrictionAsync(const DescribeBackupDownloadRestrictionRequest& request, const DescribeBackupDownloadRestrictionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CynosdbClient::DescribeBackupDownloadRestrictionOutcomeCallable CynosdbClient::DescribeBackupDownloadRestrictionCallable(const DescribeBackupDownloadRestrictionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBackupDownloadRestrictionOutcome>>();
    DescribeBackupDownloadRestrictionAsync(
    request,
    [prom](
        const CynosdbClient*,
        const DescribeBackupDownloadRestrictionRequest&,
        DescribeBackupDownloadRestrictionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::DescribeBackupDownloadUrlOutcome CynosdbClient::DescribeBackupDownloadUrl(const DescribeBackupDownloadUrlRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackupDownloadUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackupDownloadUrlResponse rsp = DescribeBackupDownloadUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackupDownloadUrlOutcome(rsp);
        else
            return DescribeBackupDownloadUrlOutcome(o.GetError());
    }
    else
    {
        return DescribeBackupDownloadUrlOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeBackupDownloadUrlAsync(const DescribeBackupDownloadUrlRequest& request, const DescribeBackupDownloadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBackupDownloadUrlRequest&;
    using Resp = DescribeBackupDownloadUrlResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBackupDownloadUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::DescribeBackupDownloadUrlOutcomeCallable CynosdbClient::DescribeBackupDownloadUrlCallable(const DescribeBackupDownloadUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBackupDownloadUrlOutcome>>();
    DescribeBackupDownloadUrlAsync(
    request,
    [prom](
        const CynosdbClient*,
        const DescribeBackupDownloadUrlRequest&,
        DescribeBackupDownloadUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::DescribeBackupDownloadUserRestrictionOutcome CynosdbClient::DescribeBackupDownloadUserRestriction(const DescribeBackupDownloadUserRestrictionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackupDownloadUserRestriction");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackupDownloadUserRestrictionResponse rsp = DescribeBackupDownloadUserRestrictionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackupDownloadUserRestrictionOutcome(rsp);
        else
            return DescribeBackupDownloadUserRestrictionOutcome(o.GetError());
    }
    else
    {
        return DescribeBackupDownloadUserRestrictionOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeBackupDownloadUserRestrictionAsync(const DescribeBackupDownloadUserRestrictionRequest& request, const DescribeBackupDownloadUserRestrictionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBackupDownloadUserRestrictionRequest&;
    using Resp = DescribeBackupDownloadUserRestrictionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBackupDownloadUserRestriction", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::DescribeBackupDownloadUserRestrictionOutcomeCallable CynosdbClient::DescribeBackupDownloadUserRestrictionCallable(const DescribeBackupDownloadUserRestrictionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBackupDownloadUserRestrictionOutcome>>();
    DescribeBackupDownloadUserRestrictionAsync(
    request,
    [prom](
        const CynosdbClient*,
        const DescribeBackupDownloadUserRestrictionRequest&,
        DescribeBackupDownloadUserRestrictionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::DescribeBackupListOutcome CynosdbClient::DescribeBackupList(const DescribeBackupListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackupList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackupListResponse rsp = DescribeBackupListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackupListOutcome(rsp);
        else
            return DescribeBackupListOutcome(o.GetError());
    }
    else
    {
        return DescribeBackupListOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeBackupListAsync(const DescribeBackupListRequest& request, const DescribeBackupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBackupListRequest&;
    using Resp = DescribeBackupListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBackupList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::DescribeBackupListOutcomeCallable CynosdbClient::DescribeBackupListCallable(const DescribeBackupListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBackupListOutcome>>();
    DescribeBackupListAsync(
    request,
    [prom](
        const CynosdbClient*,
        const DescribeBackupListRequest&,
        DescribeBackupListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::DescribeBinlogConfigOutcome CynosdbClient::DescribeBinlogConfig(const DescribeBinlogConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBinlogConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBinlogConfigResponse rsp = DescribeBinlogConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBinlogConfigOutcome(rsp);
        else
            return DescribeBinlogConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeBinlogConfigOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeBinlogConfigAsync(const DescribeBinlogConfigRequest& request, const DescribeBinlogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBinlogConfigRequest&;
    using Resp = DescribeBinlogConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBinlogConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::DescribeBinlogConfigOutcomeCallable CynosdbClient::DescribeBinlogConfigCallable(const DescribeBinlogConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBinlogConfigOutcome>>();
    DescribeBinlogConfigAsync(
    request,
    [prom](
        const CynosdbClient*,
        const DescribeBinlogConfigRequest&,
        DescribeBinlogConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::DescribeBinlogDownloadUrlOutcome CynosdbClient::DescribeBinlogDownloadUrl(const DescribeBinlogDownloadUrlRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBinlogDownloadUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBinlogDownloadUrlResponse rsp = DescribeBinlogDownloadUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBinlogDownloadUrlOutcome(rsp);
        else
            return DescribeBinlogDownloadUrlOutcome(o.GetError());
    }
    else
    {
        return DescribeBinlogDownloadUrlOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeBinlogDownloadUrlAsync(const DescribeBinlogDownloadUrlRequest& request, const DescribeBinlogDownloadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBinlogDownloadUrlRequest&;
    using Resp = DescribeBinlogDownloadUrlResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBinlogDownloadUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::DescribeBinlogDownloadUrlOutcomeCallable CynosdbClient::DescribeBinlogDownloadUrlCallable(const DescribeBinlogDownloadUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBinlogDownloadUrlOutcome>>();
    DescribeBinlogDownloadUrlAsync(
    request,
    [prom](
        const CynosdbClient*,
        const DescribeBinlogDownloadUrlRequest&,
        DescribeBinlogDownloadUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::DescribeBinlogSaveDaysOutcome CynosdbClient::DescribeBinlogSaveDays(const DescribeBinlogSaveDaysRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBinlogSaveDays");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBinlogSaveDaysResponse rsp = DescribeBinlogSaveDaysResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBinlogSaveDaysOutcome(rsp);
        else
            return DescribeBinlogSaveDaysOutcome(o.GetError());
    }
    else
    {
        return DescribeBinlogSaveDaysOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeBinlogSaveDaysAsync(const DescribeBinlogSaveDaysRequest& request, const DescribeBinlogSaveDaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBinlogSaveDaysRequest&;
    using Resp = DescribeBinlogSaveDaysResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBinlogSaveDays", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::DescribeBinlogSaveDaysOutcomeCallable CynosdbClient::DescribeBinlogSaveDaysCallable(const DescribeBinlogSaveDaysRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBinlogSaveDaysOutcome>>();
    DescribeBinlogSaveDaysAsync(
    request,
    [prom](
        const CynosdbClient*,
        const DescribeBinlogSaveDaysRequest&,
        DescribeBinlogSaveDaysOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::DescribeBinlogsOutcome CynosdbClient::DescribeBinlogs(const DescribeBinlogsRequest &request)
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

void CynosdbClient::DescribeBinlogsAsync(const DescribeBinlogsRequest& request, const DescribeBinlogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CynosdbClient::DescribeBinlogsOutcomeCallable CynosdbClient::DescribeBinlogsCallable(const DescribeBinlogsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBinlogsOutcome>>();
    DescribeBinlogsAsync(
    request,
    [prom](
        const CynosdbClient*,
        const DescribeBinlogsRequest&,
        DescribeBinlogsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::DescribeChangedParamsAfterUpgradeOutcome CynosdbClient::DescribeChangedParamsAfterUpgrade(const DescribeChangedParamsAfterUpgradeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeChangedParamsAfterUpgrade");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeChangedParamsAfterUpgradeResponse rsp = DescribeChangedParamsAfterUpgradeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeChangedParamsAfterUpgradeOutcome(rsp);
        else
            return DescribeChangedParamsAfterUpgradeOutcome(o.GetError());
    }
    else
    {
        return DescribeChangedParamsAfterUpgradeOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeChangedParamsAfterUpgradeAsync(const DescribeChangedParamsAfterUpgradeRequest& request, const DescribeChangedParamsAfterUpgradeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeChangedParamsAfterUpgradeRequest&;
    using Resp = DescribeChangedParamsAfterUpgradeResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeChangedParamsAfterUpgrade", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::DescribeChangedParamsAfterUpgradeOutcomeCallable CynosdbClient::DescribeChangedParamsAfterUpgradeCallable(const DescribeChangedParamsAfterUpgradeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeChangedParamsAfterUpgradeOutcome>>();
    DescribeChangedParamsAfterUpgradeAsync(
    request,
    [prom](
        const CynosdbClient*,
        const DescribeChangedParamsAfterUpgradeRequest&,
        DescribeChangedParamsAfterUpgradeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::DescribeClusterDatabaseTablesOutcome CynosdbClient::DescribeClusterDatabaseTables(const DescribeClusterDatabaseTablesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterDatabaseTables");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterDatabaseTablesResponse rsp = DescribeClusterDatabaseTablesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterDatabaseTablesOutcome(rsp);
        else
            return DescribeClusterDatabaseTablesOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterDatabaseTablesOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeClusterDatabaseTablesAsync(const DescribeClusterDatabaseTablesRequest& request, const DescribeClusterDatabaseTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeClusterDatabaseTablesRequest&;
    using Resp = DescribeClusterDatabaseTablesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClusterDatabaseTables", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::DescribeClusterDatabaseTablesOutcomeCallable CynosdbClient::DescribeClusterDatabaseTablesCallable(const DescribeClusterDatabaseTablesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClusterDatabaseTablesOutcome>>();
    DescribeClusterDatabaseTablesAsync(
    request,
    [prom](
        const CynosdbClient*,
        const DescribeClusterDatabaseTablesRequest&,
        DescribeClusterDatabaseTablesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::DescribeClusterDatabasesOutcome CynosdbClient::DescribeClusterDatabases(const DescribeClusterDatabasesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterDatabases");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterDatabasesResponse rsp = DescribeClusterDatabasesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterDatabasesOutcome(rsp);
        else
            return DescribeClusterDatabasesOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterDatabasesOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeClusterDatabasesAsync(const DescribeClusterDatabasesRequest& request, const DescribeClusterDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeClusterDatabasesRequest&;
    using Resp = DescribeClusterDatabasesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClusterDatabases", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::DescribeClusterDatabasesOutcomeCallable CynosdbClient::DescribeClusterDatabasesCallable(const DescribeClusterDatabasesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClusterDatabasesOutcome>>();
    DescribeClusterDatabasesAsync(
    request,
    [prom](
        const CynosdbClient*,
        const DescribeClusterDatabasesRequest&,
        DescribeClusterDatabasesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::DescribeClusterDetailOutcome CynosdbClient::DescribeClusterDetail(const DescribeClusterDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterDetailResponse rsp = DescribeClusterDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterDetailOutcome(rsp);
        else
            return DescribeClusterDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterDetailOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeClusterDetailAsync(const DescribeClusterDetailRequest& request, const DescribeClusterDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeClusterDetailRequest&;
    using Resp = DescribeClusterDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClusterDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::DescribeClusterDetailOutcomeCallable CynosdbClient::DescribeClusterDetailCallable(const DescribeClusterDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClusterDetailOutcome>>();
    DescribeClusterDetailAsync(
    request,
    [prom](
        const CynosdbClient*,
        const DescribeClusterDetailRequest&,
        DescribeClusterDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::DescribeClusterDetailDatabasesOutcome CynosdbClient::DescribeClusterDetailDatabases(const DescribeClusterDetailDatabasesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterDetailDatabases");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterDetailDatabasesResponse rsp = DescribeClusterDetailDatabasesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterDetailDatabasesOutcome(rsp);
        else
            return DescribeClusterDetailDatabasesOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterDetailDatabasesOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeClusterDetailDatabasesAsync(const DescribeClusterDetailDatabasesRequest& request, const DescribeClusterDetailDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeClusterDetailDatabasesRequest&;
    using Resp = DescribeClusterDetailDatabasesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClusterDetailDatabases", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::DescribeClusterDetailDatabasesOutcomeCallable CynosdbClient::DescribeClusterDetailDatabasesCallable(const DescribeClusterDetailDatabasesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClusterDetailDatabasesOutcome>>();
    DescribeClusterDetailDatabasesAsync(
    request,
    [prom](
        const CynosdbClient*,
        const DescribeClusterDetailDatabasesRequest&,
        DescribeClusterDetailDatabasesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::DescribeClusterInstanceGroupsOutcome CynosdbClient::DescribeClusterInstanceGroups(const DescribeClusterInstanceGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterInstanceGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterInstanceGroupsResponse rsp = DescribeClusterInstanceGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterInstanceGroupsOutcome(rsp);
        else
            return DescribeClusterInstanceGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterInstanceGroupsOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeClusterInstanceGroupsAsync(const DescribeClusterInstanceGroupsRequest& request, const DescribeClusterInstanceGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeClusterInstanceGroupsRequest&;
    using Resp = DescribeClusterInstanceGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClusterInstanceGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::DescribeClusterInstanceGroupsOutcomeCallable CynosdbClient::DescribeClusterInstanceGroupsCallable(const DescribeClusterInstanceGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClusterInstanceGroupsOutcome>>();
    DescribeClusterInstanceGroupsAsync(
    request,
    [prom](
        const CynosdbClient*,
        const DescribeClusterInstanceGroupsRequest&,
        DescribeClusterInstanceGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::DescribeClusterInstanceGrpsOutcome CynosdbClient::DescribeClusterInstanceGrps(const DescribeClusterInstanceGrpsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterInstanceGrps");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterInstanceGrpsResponse rsp = DescribeClusterInstanceGrpsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterInstanceGrpsOutcome(rsp);
        else
            return DescribeClusterInstanceGrpsOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterInstanceGrpsOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeClusterInstanceGrpsAsync(const DescribeClusterInstanceGrpsRequest& request, const DescribeClusterInstanceGrpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeClusterInstanceGrpsRequest&;
    using Resp = DescribeClusterInstanceGrpsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClusterInstanceGrps", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::DescribeClusterInstanceGrpsOutcomeCallable CynosdbClient::DescribeClusterInstanceGrpsCallable(const DescribeClusterInstanceGrpsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClusterInstanceGrpsOutcome>>();
    DescribeClusterInstanceGrpsAsync(
    request,
    [prom](
        const CynosdbClient*,
        const DescribeClusterInstanceGrpsRequest&,
        DescribeClusterInstanceGrpsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::DescribeClusterParamLogsOutcome CynosdbClient::DescribeClusterParamLogs(const DescribeClusterParamLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterParamLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterParamLogsResponse rsp = DescribeClusterParamLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterParamLogsOutcome(rsp);
        else
            return DescribeClusterParamLogsOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterParamLogsOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeClusterParamLogsAsync(const DescribeClusterParamLogsRequest& request, const DescribeClusterParamLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeClusterParamLogsRequest&;
    using Resp = DescribeClusterParamLogsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClusterParamLogs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::DescribeClusterParamLogsOutcomeCallable CynosdbClient::DescribeClusterParamLogsCallable(const DescribeClusterParamLogsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClusterParamLogsOutcome>>();
    DescribeClusterParamLogsAsync(
    request,
    [prom](
        const CynosdbClient*,
        const DescribeClusterParamLogsRequest&,
        DescribeClusterParamLogsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::DescribeClusterParamsOutcome CynosdbClient::DescribeClusterParams(const DescribeClusterParamsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterParams");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterParamsResponse rsp = DescribeClusterParamsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterParamsOutcome(rsp);
        else
            return DescribeClusterParamsOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterParamsOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeClusterParamsAsync(const DescribeClusterParamsRequest& request, const DescribeClusterParamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeClusterParamsRequest&;
    using Resp = DescribeClusterParamsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClusterParams", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::DescribeClusterParamsOutcomeCallable CynosdbClient::DescribeClusterParamsCallable(const DescribeClusterParamsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClusterParamsOutcome>>();
    DescribeClusterParamsAsync(
    request,
    [prom](
        const CynosdbClient*,
        const DescribeClusterParamsRequest&,
        DescribeClusterParamsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::DescribeClusterPasswordComplexityOutcome CynosdbClient::DescribeClusterPasswordComplexity(const DescribeClusterPasswordComplexityRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterPasswordComplexity");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterPasswordComplexityResponse rsp = DescribeClusterPasswordComplexityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterPasswordComplexityOutcome(rsp);
        else
            return DescribeClusterPasswordComplexityOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterPasswordComplexityOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeClusterPasswordComplexityAsync(const DescribeClusterPasswordComplexityRequest& request, const DescribeClusterPasswordComplexityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeClusterPasswordComplexityRequest&;
    using Resp = DescribeClusterPasswordComplexityResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClusterPasswordComplexity", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::DescribeClusterPasswordComplexityOutcomeCallable CynosdbClient::DescribeClusterPasswordComplexityCallable(const DescribeClusterPasswordComplexityRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClusterPasswordComplexityOutcome>>();
    DescribeClusterPasswordComplexityAsync(
    request,
    [prom](
        const CynosdbClient*,
        const DescribeClusterPasswordComplexityRequest&,
        DescribeClusterPasswordComplexityOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::DescribeClusterReadOnlyOutcome CynosdbClient::DescribeClusterReadOnly(const DescribeClusterReadOnlyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterReadOnly");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterReadOnlyResponse rsp = DescribeClusterReadOnlyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterReadOnlyOutcome(rsp);
        else
            return DescribeClusterReadOnlyOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterReadOnlyOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeClusterReadOnlyAsync(const DescribeClusterReadOnlyRequest& request, const DescribeClusterReadOnlyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeClusterReadOnlyRequest&;
    using Resp = DescribeClusterReadOnlyResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClusterReadOnly", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::DescribeClusterReadOnlyOutcomeCallable CynosdbClient::DescribeClusterReadOnlyCallable(const DescribeClusterReadOnlyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClusterReadOnlyOutcome>>();
    DescribeClusterReadOnlyAsync(
    request,
    [prom](
        const CynosdbClient*,
        const DescribeClusterReadOnlyRequest&,
        DescribeClusterReadOnlyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::DescribeClusterTransparentEncryptInfoOutcome CynosdbClient::DescribeClusterTransparentEncryptInfo(const DescribeClusterTransparentEncryptInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterTransparentEncryptInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterTransparentEncryptInfoResponse rsp = DescribeClusterTransparentEncryptInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterTransparentEncryptInfoOutcome(rsp);
        else
            return DescribeClusterTransparentEncryptInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterTransparentEncryptInfoOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeClusterTransparentEncryptInfoAsync(const DescribeClusterTransparentEncryptInfoRequest& request, const DescribeClusterTransparentEncryptInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeClusterTransparentEncryptInfoRequest&;
    using Resp = DescribeClusterTransparentEncryptInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClusterTransparentEncryptInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::DescribeClusterTransparentEncryptInfoOutcomeCallable CynosdbClient::DescribeClusterTransparentEncryptInfoCallable(const DescribeClusterTransparentEncryptInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClusterTransparentEncryptInfoOutcome>>();
    DescribeClusterTransparentEncryptInfoAsync(
    request,
    [prom](
        const CynosdbClient*,
        const DescribeClusterTransparentEncryptInfoRequest&,
        DescribeClusterTransparentEncryptInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::DescribeClustersOutcome CynosdbClient::DescribeClusters(const DescribeClustersRequest &request)
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

void CynosdbClient::DescribeClustersAsync(const DescribeClustersRequest& request, const DescribeClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CynosdbClient::DescribeClustersOutcomeCallable CynosdbClient::DescribeClustersCallable(const DescribeClustersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClustersOutcome>>();
    DescribeClustersAsync(
    request,
    [prom](
        const CynosdbClient*,
        const DescribeClustersRequest&,
        DescribeClustersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::DescribeDBSecurityGroupsOutcome CynosdbClient::DescribeDBSecurityGroups(const DescribeDBSecurityGroupsRequest &request)
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

void CynosdbClient::DescribeDBSecurityGroupsAsync(const DescribeDBSecurityGroupsRequest& request, const DescribeDBSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CynosdbClient::DescribeDBSecurityGroupsOutcomeCallable CynosdbClient::DescribeDBSecurityGroupsCallable(const DescribeDBSecurityGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBSecurityGroupsOutcome>>();
    DescribeDBSecurityGroupsAsync(
    request,
    [prom](
        const CynosdbClient*,
        const DescribeDBSecurityGroupsRequest&,
        DescribeDBSecurityGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::DescribeFlowOutcome CynosdbClient::DescribeFlow(const DescribeFlowRequest &request)
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

void CynosdbClient::DescribeFlowAsync(const DescribeFlowRequest& request, const DescribeFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CynosdbClient::DescribeFlowOutcomeCallable CynosdbClient::DescribeFlowCallable(const DescribeFlowRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFlowOutcome>>();
    DescribeFlowAsync(
    request,
    [prom](
        const CynosdbClient*,
        const DescribeFlowRequest&,
        DescribeFlowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::DescribeInstanceCLSLogDeliveryOutcome CynosdbClient::DescribeInstanceCLSLogDelivery(const DescribeInstanceCLSLogDeliveryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceCLSLogDelivery");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceCLSLogDeliveryResponse rsp = DescribeInstanceCLSLogDeliveryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceCLSLogDeliveryOutcome(rsp);
        else
            return DescribeInstanceCLSLogDeliveryOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceCLSLogDeliveryOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeInstanceCLSLogDeliveryAsync(const DescribeInstanceCLSLogDeliveryRequest& request, const DescribeInstanceCLSLogDeliveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceCLSLogDeliveryRequest&;
    using Resp = DescribeInstanceCLSLogDeliveryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceCLSLogDelivery", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::DescribeInstanceCLSLogDeliveryOutcomeCallable CynosdbClient::DescribeInstanceCLSLogDeliveryCallable(const DescribeInstanceCLSLogDeliveryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceCLSLogDeliveryOutcome>>();
    DescribeInstanceCLSLogDeliveryAsync(
    request,
    [prom](
        const CynosdbClient*,
        const DescribeInstanceCLSLogDeliveryRequest&,
        DescribeInstanceCLSLogDeliveryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::DescribeInstanceDetailOutcome CynosdbClient::DescribeInstanceDetail(const DescribeInstanceDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceDetailResponse rsp = DescribeInstanceDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceDetailOutcome(rsp);
        else
            return DescribeInstanceDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceDetailOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeInstanceDetailAsync(const DescribeInstanceDetailRequest& request, const DescribeInstanceDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceDetailRequest&;
    using Resp = DescribeInstanceDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::DescribeInstanceDetailOutcomeCallable CynosdbClient::DescribeInstanceDetailCallable(const DescribeInstanceDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceDetailOutcome>>();
    DescribeInstanceDetailAsync(
    request,
    [prom](
        const CynosdbClient*,
        const DescribeInstanceDetailRequest&,
        DescribeInstanceDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::DescribeInstanceErrorLogsOutcome CynosdbClient::DescribeInstanceErrorLogs(const DescribeInstanceErrorLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceErrorLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceErrorLogsResponse rsp = DescribeInstanceErrorLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceErrorLogsOutcome(rsp);
        else
            return DescribeInstanceErrorLogsOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceErrorLogsOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeInstanceErrorLogsAsync(const DescribeInstanceErrorLogsRequest& request, const DescribeInstanceErrorLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceErrorLogsRequest&;
    using Resp = DescribeInstanceErrorLogsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceErrorLogs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::DescribeInstanceErrorLogsOutcomeCallable CynosdbClient::DescribeInstanceErrorLogsCallable(const DescribeInstanceErrorLogsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceErrorLogsOutcome>>();
    DescribeInstanceErrorLogsAsync(
    request,
    [prom](
        const CynosdbClient*,
        const DescribeInstanceErrorLogsRequest&,
        DescribeInstanceErrorLogsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::DescribeInstanceParamsOutcome CynosdbClient::DescribeInstanceParams(const DescribeInstanceParamsRequest &request)
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

void CynosdbClient::DescribeInstanceParamsAsync(const DescribeInstanceParamsRequest& request, const DescribeInstanceParamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CynosdbClient::DescribeInstanceParamsOutcomeCallable CynosdbClient::DescribeInstanceParamsCallable(const DescribeInstanceParamsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceParamsOutcome>>();
    DescribeInstanceParamsAsync(
    request,
    [prom](
        const CynosdbClient*,
        const DescribeInstanceParamsRequest&,
        DescribeInstanceParamsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::DescribeInstanceSlowQueriesOutcome CynosdbClient::DescribeInstanceSlowQueries(const DescribeInstanceSlowQueriesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceSlowQueries");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceSlowQueriesResponse rsp = DescribeInstanceSlowQueriesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceSlowQueriesOutcome(rsp);
        else
            return DescribeInstanceSlowQueriesOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceSlowQueriesOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeInstanceSlowQueriesAsync(const DescribeInstanceSlowQueriesRequest& request, const DescribeInstanceSlowQueriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceSlowQueriesRequest&;
    using Resp = DescribeInstanceSlowQueriesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceSlowQueries", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::DescribeInstanceSlowQueriesOutcomeCallable CynosdbClient::DescribeInstanceSlowQueriesCallable(const DescribeInstanceSlowQueriesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceSlowQueriesOutcome>>();
    DescribeInstanceSlowQueriesAsync(
    request,
    [prom](
        const CynosdbClient*,
        const DescribeInstanceSlowQueriesRequest&,
        DescribeInstanceSlowQueriesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::DescribeInstanceSpecsOutcome CynosdbClient::DescribeInstanceSpecs(const DescribeInstanceSpecsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceSpecs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceSpecsResponse rsp = DescribeInstanceSpecsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceSpecsOutcome(rsp);
        else
            return DescribeInstanceSpecsOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceSpecsOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeInstanceSpecsAsync(const DescribeInstanceSpecsRequest& request, const DescribeInstanceSpecsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceSpecsRequest&;
    using Resp = DescribeInstanceSpecsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceSpecs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::DescribeInstanceSpecsOutcomeCallable CynosdbClient::DescribeInstanceSpecsCallable(const DescribeInstanceSpecsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceSpecsOutcome>>();
    DescribeInstanceSpecsAsync(
    request,
    [prom](
        const CynosdbClient*,
        const DescribeInstanceSpecsRequest&,
        DescribeInstanceSpecsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::DescribeInstancesOutcome CynosdbClient::DescribeInstances(const DescribeInstancesRequest &request)
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

void CynosdbClient::DescribeInstancesAsync(const DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CynosdbClient::DescribeInstancesOutcomeCallable CynosdbClient::DescribeInstancesCallable(const DescribeInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstancesOutcome>>();
    DescribeInstancesAsync(
    request,
    [prom](
        const CynosdbClient*,
        const DescribeInstancesRequest&,
        DescribeInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::DescribeInstancesWithinSameClusterOutcome CynosdbClient::DescribeInstancesWithinSameCluster(const DescribeInstancesWithinSameClusterRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstancesWithinSameCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstancesWithinSameClusterResponse rsp = DescribeInstancesWithinSameClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstancesWithinSameClusterOutcome(rsp);
        else
            return DescribeInstancesWithinSameClusterOutcome(o.GetError());
    }
    else
    {
        return DescribeInstancesWithinSameClusterOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeInstancesWithinSameClusterAsync(const DescribeInstancesWithinSameClusterRequest& request, const DescribeInstancesWithinSameClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstancesWithinSameClusterRequest&;
    using Resp = DescribeInstancesWithinSameClusterResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstancesWithinSameCluster", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::DescribeInstancesWithinSameClusterOutcomeCallable CynosdbClient::DescribeInstancesWithinSameClusterCallable(const DescribeInstancesWithinSameClusterRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstancesWithinSameClusterOutcome>>();
    DescribeInstancesWithinSameClusterAsync(
    request,
    [prom](
        const CynosdbClient*,
        const DescribeInstancesWithinSameClusterRequest&,
        DescribeInstancesWithinSameClusterOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::DescribeIntegrateTaskOutcome CynosdbClient::DescribeIntegrateTask(const DescribeIntegrateTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIntegrateTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIntegrateTaskResponse rsp = DescribeIntegrateTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIntegrateTaskOutcome(rsp);
        else
            return DescribeIntegrateTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeIntegrateTaskOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeIntegrateTaskAsync(const DescribeIntegrateTaskRequest& request, const DescribeIntegrateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIntegrateTaskRequest&;
    using Resp = DescribeIntegrateTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIntegrateTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::DescribeIntegrateTaskOutcomeCallable CynosdbClient::DescribeIntegrateTaskCallable(const DescribeIntegrateTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIntegrateTaskOutcome>>();
    DescribeIntegrateTaskAsync(
    request,
    [prom](
        const CynosdbClient*,
        const DescribeIntegrateTaskRequest&,
        DescribeIntegrateTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::DescribeIsolatedInstancesOutcome CynosdbClient::DescribeIsolatedInstances(const DescribeIsolatedInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIsolatedInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIsolatedInstancesResponse rsp = DescribeIsolatedInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIsolatedInstancesOutcome(rsp);
        else
            return DescribeIsolatedInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeIsolatedInstancesOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeIsolatedInstancesAsync(const DescribeIsolatedInstancesRequest& request, const DescribeIsolatedInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIsolatedInstancesRequest&;
    using Resp = DescribeIsolatedInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIsolatedInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::DescribeIsolatedInstancesOutcomeCallable CynosdbClient::DescribeIsolatedInstancesCallable(const DescribeIsolatedInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIsolatedInstancesOutcome>>();
    DescribeIsolatedInstancesAsync(
    request,
    [prom](
        const CynosdbClient*,
        const DescribeIsolatedInstancesRequest&,
        DescribeIsolatedInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::DescribeMaintainPeriodOutcome CynosdbClient::DescribeMaintainPeriod(const DescribeMaintainPeriodRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMaintainPeriod");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMaintainPeriodResponse rsp = DescribeMaintainPeriodResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMaintainPeriodOutcome(rsp);
        else
            return DescribeMaintainPeriodOutcome(o.GetError());
    }
    else
    {
        return DescribeMaintainPeriodOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeMaintainPeriodAsync(const DescribeMaintainPeriodRequest& request, const DescribeMaintainPeriodAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMaintainPeriodRequest&;
    using Resp = DescribeMaintainPeriodResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMaintainPeriod", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::DescribeMaintainPeriodOutcomeCallable CynosdbClient::DescribeMaintainPeriodCallable(const DescribeMaintainPeriodRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMaintainPeriodOutcome>>();
    DescribeMaintainPeriodAsync(
    request,
    [prom](
        const CynosdbClient*,
        const DescribeMaintainPeriodRequest&,
        DescribeMaintainPeriodOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::DescribeParamTemplateDetailOutcome CynosdbClient::DescribeParamTemplateDetail(const DescribeParamTemplateDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeParamTemplateDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeParamTemplateDetailResponse rsp = DescribeParamTemplateDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeParamTemplateDetailOutcome(rsp);
        else
            return DescribeParamTemplateDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeParamTemplateDetailOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeParamTemplateDetailAsync(const DescribeParamTemplateDetailRequest& request, const DescribeParamTemplateDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeParamTemplateDetailRequest&;
    using Resp = DescribeParamTemplateDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeParamTemplateDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::DescribeParamTemplateDetailOutcomeCallable CynosdbClient::DescribeParamTemplateDetailCallable(const DescribeParamTemplateDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeParamTemplateDetailOutcome>>();
    DescribeParamTemplateDetailAsync(
    request,
    [prom](
        const CynosdbClient*,
        const DescribeParamTemplateDetailRequest&,
        DescribeParamTemplateDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::DescribeParamTemplatesOutcome CynosdbClient::DescribeParamTemplates(const DescribeParamTemplatesRequest &request)
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

void CynosdbClient::DescribeParamTemplatesAsync(const DescribeParamTemplatesRequest& request, const DescribeParamTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CynosdbClient::DescribeParamTemplatesOutcomeCallable CynosdbClient::DescribeParamTemplatesCallable(const DescribeParamTemplatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeParamTemplatesOutcome>>();
    DescribeParamTemplatesAsync(
    request,
    [prom](
        const CynosdbClient*,
        const DescribeParamTemplatesRequest&,
        DescribeParamTemplatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::DescribeProjectSecurityGroupsOutcome CynosdbClient::DescribeProjectSecurityGroups(const DescribeProjectSecurityGroupsRequest &request)
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

void CynosdbClient::DescribeProjectSecurityGroupsAsync(const DescribeProjectSecurityGroupsRequest& request, const DescribeProjectSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CynosdbClient::DescribeProjectSecurityGroupsOutcomeCallable CynosdbClient::DescribeProjectSecurityGroupsCallable(const DescribeProjectSecurityGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProjectSecurityGroupsOutcome>>();
    DescribeProjectSecurityGroupsAsync(
    request,
    [prom](
        const CynosdbClient*,
        const DescribeProjectSecurityGroupsRequest&,
        DescribeProjectSecurityGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::DescribeProxiesOutcome CynosdbClient::DescribeProxies(const DescribeProxiesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProxies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProxiesResponse rsp = DescribeProxiesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProxiesOutcome(rsp);
        else
            return DescribeProxiesOutcome(o.GetError());
    }
    else
    {
        return DescribeProxiesOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeProxiesAsync(const DescribeProxiesRequest& request, const DescribeProxiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeProxiesRequest&;
    using Resp = DescribeProxiesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProxies", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::DescribeProxiesOutcomeCallable CynosdbClient::DescribeProxiesCallable(const DescribeProxiesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProxiesOutcome>>();
    DescribeProxiesAsync(
    request,
    [prom](
        const CynosdbClient*,
        const DescribeProxiesRequest&,
        DescribeProxiesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::DescribeProxyNodesOutcome CynosdbClient::DescribeProxyNodes(const DescribeProxyNodesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProxyNodes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProxyNodesResponse rsp = DescribeProxyNodesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProxyNodesOutcome(rsp);
        else
            return DescribeProxyNodesOutcome(o.GetError());
    }
    else
    {
        return DescribeProxyNodesOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeProxyNodesAsync(const DescribeProxyNodesRequest& request, const DescribeProxyNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeProxyNodesRequest&;
    using Resp = DescribeProxyNodesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProxyNodes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::DescribeProxyNodesOutcomeCallable CynosdbClient::DescribeProxyNodesCallable(const DescribeProxyNodesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProxyNodesOutcome>>();
    DescribeProxyNodesAsync(
    request,
    [prom](
        const CynosdbClient*,
        const DescribeProxyNodesRequest&,
        DescribeProxyNodesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::DescribeProxySpecsOutcome CynosdbClient::DescribeProxySpecs(const DescribeProxySpecsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProxySpecs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProxySpecsResponse rsp = DescribeProxySpecsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProxySpecsOutcome(rsp);
        else
            return DescribeProxySpecsOutcome(o.GetError());
    }
    else
    {
        return DescribeProxySpecsOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeProxySpecsAsync(const DescribeProxySpecsRequest& request, const DescribeProxySpecsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeProxySpecsRequest&;
    using Resp = DescribeProxySpecsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProxySpecs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::DescribeProxySpecsOutcomeCallable CynosdbClient::DescribeProxySpecsCallable(const DescribeProxySpecsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProxySpecsOutcome>>();
    DescribeProxySpecsAsync(
    request,
    [prom](
        const CynosdbClient*,
        const DescribeProxySpecsRequest&,
        DescribeProxySpecsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::DescribeResourcePackageDetailOutcome CynosdbClient::DescribeResourcePackageDetail(const DescribeResourcePackageDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResourcePackageDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResourcePackageDetailResponse rsp = DescribeResourcePackageDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResourcePackageDetailOutcome(rsp);
        else
            return DescribeResourcePackageDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeResourcePackageDetailOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeResourcePackageDetailAsync(const DescribeResourcePackageDetailRequest& request, const DescribeResourcePackageDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeResourcePackageDetailRequest&;
    using Resp = DescribeResourcePackageDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeResourcePackageDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::DescribeResourcePackageDetailOutcomeCallable CynosdbClient::DescribeResourcePackageDetailCallable(const DescribeResourcePackageDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeResourcePackageDetailOutcome>>();
    DescribeResourcePackageDetailAsync(
    request,
    [prom](
        const CynosdbClient*,
        const DescribeResourcePackageDetailRequest&,
        DescribeResourcePackageDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::DescribeResourcePackageListOutcome CynosdbClient::DescribeResourcePackageList(const DescribeResourcePackageListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResourcePackageList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResourcePackageListResponse rsp = DescribeResourcePackageListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResourcePackageListOutcome(rsp);
        else
            return DescribeResourcePackageListOutcome(o.GetError());
    }
    else
    {
        return DescribeResourcePackageListOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeResourcePackageListAsync(const DescribeResourcePackageListRequest& request, const DescribeResourcePackageListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeResourcePackageListRequest&;
    using Resp = DescribeResourcePackageListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeResourcePackageList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::DescribeResourcePackageListOutcomeCallable CynosdbClient::DescribeResourcePackageListCallable(const DescribeResourcePackageListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeResourcePackageListOutcome>>();
    DescribeResourcePackageListAsync(
    request,
    [prom](
        const CynosdbClient*,
        const DescribeResourcePackageListRequest&,
        DescribeResourcePackageListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::DescribeResourcePackageSaleSpecOutcome CynosdbClient::DescribeResourcePackageSaleSpec(const DescribeResourcePackageSaleSpecRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResourcePackageSaleSpec");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResourcePackageSaleSpecResponse rsp = DescribeResourcePackageSaleSpecResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResourcePackageSaleSpecOutcome(rsp);
        else
            return DescribeResourcePackageSaleSpecOutcome(o.GetError());
    }
    else
    {
        return DescribeResourcePackageSaleSpecOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeResourcePackageSaleSpecAsync(const DescribeResourcePackageSaleSpecRequest& request, const DescribeResourcePackageSaleSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeResourcePackageSaleSpecRequest&;
    using Resp = DescribeResourcePackageSaleSpecResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeResourcePackageSaleSpec", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::DescribeResourcePackageSaleSpecOutcomeCallable CynosdbClient::DescribeResourcePackageSaleSpecCallable(const DescribeResourcePackageSaleSpecRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeResourcePackageSaleSpecOutcome>>();
    DescribeResourcePackageSaleSpecAsync(
    request,
    [prom](
        const CynosdbClient*,
        const DescribeResourcePackageSaleSpecRequest&,
        DescribeResourcePackageSaleSpecOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::DescribeResourcesByDealNameOutcome CynosdbClient::DescribeResourcesByDealName(const DescribeResourcesByDealNameRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResourcesByDealName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResourcesByDealNameResponse rsp = DescribeResourcesByDealNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResourcesByDealNameOutcome(rsp);
        else
            return DescribeResourcesByDealNameOutcome(o.GetError());
    }
    else
    {
        return DescribeResourcesByDealNameOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeResourcesByDealNameAsync(const DescribeResourcesByDealNameRequest& request, const DescribeResourcesByDealNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeResourcesByDealNameRequest&;
    using Resp = DescribeResourcesByDealNameResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeResourcesByDealName", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::DescribeResourcesByDealNameOutcomeCallable CynosdbClient::DescribeResourcesByDealNameCallable(const DescribeResourcesByDealNameRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeResourcesByDealNameOutcome>>();
    DescribeResourcesByDealNameAsync(
    request,
    [prom](
        const CynosdbClient*,
        const DescribeResourcesByDealNameRequest&,
        DescribeResourcesByDealNameOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::DescribeRollbackTimeRangeOutcome CynosdbClient::DescribeRollbackTimeRange(const DescribeRollbackTimeRangeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRollbackTimeRange");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRollbackTimeRangeResponse rsp = DescribeRollbackTimeRangeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRollbackTimeRangeOutcome(rsp);
        else
            return DescribeRollbackTimeRangeOutcome(o.GetError());
    }
    else
    {
        return DescribeRollbackTimeRangeOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeRollbackTimeRangeAsync(const DescribeRollbackTimeRangeRequest& request, const DescribeRollbackTimeRangeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRollbackTimeRangeRequest&;
    using Resp = DescribeRollbackTimeRangeResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRollbackTimeRange", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::DescribeRollbackTimeRangeOutcomeCallable CynosdbClient::DescribeRollbackTimeRangeCallable(const DescribeRollbackTimeRangeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRollbackTimeRangeOutcome>>();
    DescribeRollbackTimeRangeAsync(
    request,
    [prom](
        const CynosdbClient*,
        const DescribeRollbackTimeRangeRequest&,
        DescribeRollbackTimeRangeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::DescribeSSLStatusOutcome CynosdbClient::DescribeSSLStatus(const DescribeSSLStatusRequest &request)
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

void CynosdbClient::DescribeSSLStatusAsync(const DescribeSSLStatusRequest& request, const DescribeSSLStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CynosdbClient::DescribeSSLStatusOutcomeCallable CynosdbClient::DescribeSSLStatusCallable(const DescribeSSLStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSSLStatusOutcome>>();
    DescribeSSLStatusAsync(
    request,
    [prom](
        const CynosdbClient*,
        const DescribeSSLStatusRequest&,
        DescribeSSLStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::DescribeServerlessInstanceSpecsOutcome CynosdbClient::DescribeServerlessInstanceSpecs(const DescribeServerlessInstanceSpecsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeServerlessInstanceSpecs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeServerlessInstanceSpecsResponse rsp = DescribeServerlessInstanceSpecsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeServerlessInstanceSpecsOutcome(rsp);
        else
            return DescribeServerlessInstanceSpecsOutcome(o.GetError());
    }
    else
    {
        return DescribeServerlessInstanceSpecsOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeServerlessInstanceSpecsAsync(const DescribeServerlessInstanceSpecsRequest& request, const DescribeServerlessInstanceSpecsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeServerlessInstanceSpecsRequest&;
    using Resp = DescribeServerlessInstanceSpecsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeServerlessInstanceSpecs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::DescribeServerlessInstanceSpecsOutcomeCallable CynosdbClient::DescribeServerlessInstanceSpecsCallable(const DescribeServerlessInstanceSpecsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeServerlessInstanceSpecsOutcome>>();
    DescribeServerlessInstanceSpecsAsync(
    request,
    [prom](
        const CynosdbClient*,
        const DescribeServerlessInstanceSpecsRequest&,
        DescribeServerlessInstanceSpecsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::DescribeServerlessStrategyOutcome CynosdbClient::DescribeServerlessStrategy(const DescribeServerlessStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeServerlessStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeServerlessStrategyResponse rsp = DescribeServerlessStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeServerlessStrategyOutcome(rsp);
        else
            return DescribeServerlessStrategyOutcome(o.GetError());
    }
    else
    {
        return DescribeServerlessStrategyOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeServerlessStrategyAsync(const DescribeServerlessStrategyRequest& request, const DescribeServerlessStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeServerlessStrategyRequest&;
    using Resp = DescribeServerlessStrategyResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeServerlessStrategy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::DescribeServerlessStrategyOutcomeCallable CynosdbClient::DescribeServerlessStrategyCallable(const DescribeServerlessStrategyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeServerlessStrategyOutcome>>();
    DescribeServerlessStrategyAsync(
    request,
    [prom](
        const CynosdbClient*,
        const DescribeServerlessStrategyRequest&,
        DescribeServerlessStrategyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::DescribeSlaveZonesOutcome CynosdbClient::DescribeSlaveZones(const DescribeSlaveZonesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSlaveZones");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSlaveZonesResponse rsp = DescribeSlaveZonesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSlaveZonesOutcome(rsp);
        else
            return DescribeSlaveZonesOutcome(o.GetError());
    }
    else
    {
        return DescribeSlaveZonesOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeSlaveZonesAsync(const DescribeSlaveZonesRequest& request, const DescribeSlaveZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSlaveZonesRequest&;
    using Resp = DescribeSlaveZonesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSlaveZones", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::DescribeSlaveZonesOutcomeCallable CynosdbClient::DescribeSlaveZonesCallable(const DescribeSlaveZonesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSlaveZonesOutcome>>();
    DescribeSlaveZonesAsync(
    request,
    [prom](
        const CynosdbClient*,
        const DescribeSlaveZonesRequest&,
        DescribeSlaveZonesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::DescribeSupportProxyVersionOutcome CynosdbClient::DescribeSupportProxyVersion(const DescribeSupportProxyVersionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSupportProxyVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSupportProxyVersionResponse rsp = DescribeSupportProxyVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSupportProxyVersionOutcome(rsp);
        else
            return DescribeSupportProxyVersionOutcome(o.GetError());
    }
    else
    {
        return DescribeSupportProxyVersionOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeSupportProxyVersionAsync(const DescribeSupportProxyVersionRequest& request, const DescribeSupportProxyVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSupportProxyVersionRequest&;
    using Resp = DescribeSupportProxyVersionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSupportProxyVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::DescribeSupportProxyVersionOutcomeCallable CynosdbClient::DescribeSupportProxyVersionCallable(const DescribeSupportProxyVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSupportProxyVersionOutcome>>();
    DescribeSupportProxyVersionAsync(
    request,
    [prom](
        const CynosdbClient*,
        const DescribeSupportProxyVersionRequest&,
        DescribeSupportProxyVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::DescribeTasksOutcome CynosdbClient::DescribeTasks(const DescribeTasksRequest &request)
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

void CynosdbClient::DescribeTasksAsync(const DescribeTasksRequest& request, const DescribeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CynosdbClient::DescribeTasksOutcomeCallable CynosdbClient::DescribeTasksCallable(const DescribeTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTasksOutcome>>();
    DescribeTasksAsync(
    request,
    [prom](
        const CynosdbClient*,
        const DescribeTasksRequest&,
        DescribeTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::DescribeZonesOutcome CynosdbClient::DescribeZones(const DescribeZonesRequest &request)
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

void CynosdbClient::DescribeZonesAsync(const DescribeZonesRequest& request, const DescribeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CynosdbClient::DescribeZonesOutcomeCallable CynosdbClient::DescribeZonesCallable(const DescribeZonesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeZonesOutcome>>();
    DescribeZonesAsync(
    request,
    [prom](
        const CynosdbClient*,
        const DescribeZonesRequest&,
        DescribeZonesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::DisassociateSecurityGroupsOutcome CynosdbClient::DisassociateSecurityGroups(const DisassociateSecurityGroupsRequest &request)
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

void CynosdbClient::DisassociateSecurityGroupsAsync(const DisassociateSecurityGroupsRequest& request, const DisassociateSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CynosdbClient::DisassociateSecurityGroupsOutcomeCallable CynosdbClient::DisassociateSecurityGroupsCallable(const DisassociateSecurityGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisassociateSecurityGroupsOutcome>>();
    DisassociateSecurityGroupsAsync(
    request,
    [prom](
        const CynosdbClient*,
        const DisassociateSecurityGroupsRequest&,
        DisassociateSecurityGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::ExportInstanceErrorLogsOutcome CynosdbClient::ExportInstanceErrorLogs(const ExportInstanceErrorLogsRequest &request)
{
    auto outcome = MakeRequest(request, "ExportInstanceErrorLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportInstanceErrorLogsResponse rsp = ExportInstanceErrorLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportInstanceErrorLogsOutcome(rsp);
        else
            return ExportInstanceErrorLogsOutcome(o.GetError());
    }
    else
    {
        return ExportInstanceErrorLogsOutcome(outcome.GetError());
    }
}

void CynosdbClient::ExportInstanceErrorLogsAsync(const ExportInstanceErrorLogsRequest& request, const ExportInstanceErrorLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportInstanceErrorLogsRequest&;
    using Resp = ExportInstanceErrorLogsResponse;

    DoRequestAsync<Req, Resp>(
        "ExportInstanceErrorLogs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::ExportInstanceErrorLogsOutcomeCallable CynosdbClient::ExportInstanceErrorLogsCallable(const ExportInstanceErrorLogsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportInstanceErrorLogsOutcome>>();
    ExportInstanceErrorLogsAsync(
    request,
    [prom](
        const CynosdbClient*,
        const ExportInstanceErrorLogsRequest&,
        ExportInstanceErrorLogsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::ExportInstanceSlowQueriesOutcome CynosdbClient::ExportInstanceSlowQueries(const ExportInstanceSlowQueriesRequest &request)
{
    auto outcome = MakeRequest(request, "ExportInstanceSlowQueries");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportInstanceSlowQueriesResponse rsp = ExportInstanceSlowQueriesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportInstanceSlowQueriesOutcome(rsp);
        else
            return ExportInstanceSlowQueriesOutcome(o.GetError());
    }
    else
    {
        return ExportInstanceSlowQueriesOutcome(outcome.GetError());
    }
}

void CynosdbClient::ExportInstanceSlowQueriesAsync(const ExportInstanceSlowQueriesRequest& request, const ExportInstanceSlowQueriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportInstanceSlowQueriesRequest&;
    using Resp = ExportInstanceSlowQueriesResponse;

    DoRequestAsync<Req, Resp>(
        "ExportInstanceSlowQueries", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::ExportInstanceSlowQueriesOutcomeCallable CynosdbClient::ExportInstanceSlowQueriesCallable(const ExportInstanceSlowQueriesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportInstanceSlowQueriesOutcome>>();
    ExportInstanceSlowQueriesAsync(
    request,
    [prom](
        const CynosdbClient*,
        const ExportInstanceSlowQueriesRequest&,
        ExportInstanceSlowQueriesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::ExportResourcePackageDeductDetailsOutcome CynosdbClient::ExportResourcePackageDeductDetails(const ExportResourcePackageDeductDetailsRequest &request)
{
    auto outcome = MakeRequest(request, "ExportResourcePackageDeductDetails");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportResourcePackageDeductDetailsResponse rsp = ExportResourcePackageDeductDetailsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportResourcePackageDeductDetailsOutcome(rsp);
        else
            return ExportResourcePackageDeductDetailsOutcome(o.GetError());
    }
    else
    {
        return ExportResourcePackageDeductDetailsOutcome(outcome.GetError());
    }
}

void CynosdbClient::ExportResourcePackageDeductDetailsAsync(const ExportResourcePackageDeductDetailsRequest& request, const ExportResourcePackageDeductDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportResourcePackageDeductDetailsRequest&;
    using Resp = ExportResourcePackageDeductDetailsResponse;

    DoRequestAsync<Req, Resp>(
        "ExportResourcePackageDeductDetails", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::ExportResourcePackageDeductDetailsOutcomeCallable CynosdbClient::ExportResourcePackageDeductDetailsCallable(const ExportResourcePackageDeductDetailsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportResourcePackageDeductDetailsOutcome>>();
    ExportResourcePackageDeductDetailsAsync(
    request,
    [prom](
        const CynosdbClient*,
        const ExportResourcePackageDeductDetailsRequest&,
        ExportResourcePackageDeductDetailsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::GrantAccountPrivilegesOutcome CynosdbClient::GrantAccountPrivileges(const GrantAccountPrivilegesRequest &request)
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

void CynosdbClient::GrantAccountPrivilegesAsync(const GrantAccountPrivilegesRequest& request, const GrantAccountPrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CynosdbClient::GrantAccountPrivilegesOutcomeCallable CynosdbClient::GrantAccountPrivilegesCallable(const GrantAccountPrivilegesRequest &request)
{
    const auto prom = std::make_shared<std::promise<GrantAccountPrivilegesOutcome>>();
    GrantAccountPrivilegesAsync(
    request,
    [prom](
        const CynosdbClient*,
        const GrantAccountPrivilegesRequest&,
        GrantAccountPrivilegesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::InquirePriceCreateOutcome CynosdbClient::InquirePriceCreate(const InquirePriceCreateRequest &request)
{
    auto outcome = MakeRequest(request, "InquirePriceCreate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquirePriceCreateResponse rsp = InquirePriceCreateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquirePriceCreateOutcome(rsp);
        else
            return InquirePriceCreateOutcome(o.GetError());
    }
    else
    {
        return InquirePriceCreateOutcome(outcome.GetError());
    }
}

void CynosdbClient::InquirePriceCreateAsync(const InquirePriceCreateRequest& request, const InquirePriceCreateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const InquirePriceCreateRequest&;
    using Resp = InquirePriceCreateResponse;

    DoRequestAsync<Req, Resp>(
        "InquirePriceCreate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::InquirePriceCreateOutcomeCallable CynosdbClient::InquirePriceCreateCallable(const InquirePriceCreateRequest &request)
{
    const auto prom = std::make_shared<std::promise<InquirePriceCreateOutcome>>();
    InquirePriceCreateAsync(
    request,
    [prom](
        const CynosdbClient*,
        const InquirePriceCreateRequest&,
        InquirePriceCreateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::InquirePriceModifyOutcome CynosdbClient::InquirePriceModify(const InquirePriceModifyRequest &request)
{
    auto outcome = MakeRequest(request, "InquirePriceModify");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquirePriceModifyResponse rsp = InquirePriceModifyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquirePriceModifyOutcome(rsp);
        else
            return InquirePriceModifyOutcome(o.GetError());
    }
    else
    {
        return InquirePriceModifyOutcome(outcome.GetError());
    }
}

void CynosdbClient::InquirePriceModifyAsync(const InquirePriceModifyRequest& request, const InquirePriceModifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const InquirePriceModifyRequest&;
    using Resp = InquirePriceModifyResponse;

    DoRequestAsync<Req, Resp>(
        "InquirePriceModify", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::InquirePriceModifyOutcomeCallable CynosdbClient::InquirePriceModifyCallable(const InquirePriceModifyRequest &request)
{
    const auto prom = std::make_shared<std::promise<InquirePriceModifyOutcome>>();
    InquirePriceModifyAsync(
    request,
    [prom](
        const CynosdbClient*,
        const InquirePriceModifyRequest&,
        InquirePriceModifyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::InquirePriceMultiSpecOutcome CynosdbClient::InquirePriceMultiSpec(const InquirePriceMultiSpecRequest &request)
{
    auto outcome = MakeRequest(request, "InquirePriceMultiSpec");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquirePriceMultiSpecResponse rsp = InquirePriceMultiSpecResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquirePriceMultiSpecOutcome(rsp);
        else
            return InquirePriceMultiSpecOutcome(o.GetError());
    }
    else
    {
        return InquirePriceMultiSpecOutcome(outcome.GetError());
    }
}

void CynosdbClient::InquirePriceMultiSpecAsync(const InquirePriceMultiSpecRequest& request, const InquirePriceMultiSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const InquirePriceMultiSpecRequest&;
    using Resp = InquirePriceMultiSpecResponse;

    DoRequestAsync<Req, Resp>(
        "InquirePriceMultiSpec", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::InquirePriceMultiSpecOutcomeCallable CynosdbClient::InquirePriceMultiSpecCallable(const InquirePriceMultiSpecRequest &request)
{
    const auto prom = std::make_shared<std::promise<InquirePriceMultiSpecOutcome>>();
    InquirePriceMultiSpecAsync(
    request,
    [prom](
        const CynosdbClient*,
        const InquirePriceMultiSpecRequest&,
        InquirePriceMultiSpecOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::InquirePriceRenewOutcome CynosdbClient::InquirePriceRenew(const InquirePriceRenewRequest &request)
{
    auto outcome = MakeRequest(request, "InquirePriceRenew");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquirePriceRenewResponse rsp = InquirePriceRenewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquirePriceRenewOutcome(rsp);
        else
            return InquirePriceRenewOutcome(o.GetError());
    }
    else
    {
        return InquirePriceRenewOutcome(outcome.GetError());
    }
}

void CynosdbClient::InquirePriceRenewAsync(const InquirePriceRenewRequest& request, const InquirePriceRenewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const InquirePriceRenewRequest&;
    using Resp = InquirePriceRenewResponse;

    DoRequestAsync<Req, Resp>(
        "InquirePriceRenew", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::InquirePriceRenewOutcomeCallable CynosdbClient::InquirePriceRenewCallable(const InquirePriceRenewRequest &request)
{
    const auto prom = std::make_shared<std::promise<InquirePriceRenewOutcome>>();
    InquirePriceRenewAsync(
    request,
    [prom](
        const CynosdbClient*,
        const InquirePriceRenewRequest&,
        InquirePriceRenewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::IsolateClusterOutcome CynosdbClient::IsolateCluster(const IsolateClusterRequest &request)
{
    auto outcome = MakeRequest(request, "IsolateCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        IsolateClusterResponse rsp = IsolateClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return IsolateClusterOutcome(rsp);
        else
            return IsolateClusterOutcome(o.GetError());
    }
    else
    {
        return IsolateClusterOutcome(outcome.GetError());
    }
}

void CynosdbClient::IsolateClusterAsync(const IsolateClusterRequest& request, const IsolateClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const IsolateClusterRequest&;
    using Resp = IsolateClusterResponse;

    DoRequestAsync<Req, Resp>(
        "IsolateCluster", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::IsolateClusterOutcomeCallable CynosdbClient::IsolateClusterCallable(const IsolateClusterRequest &request)
{
    const auto prom = std::make_shared<std::promise<IsolateClusterOutcome>>();
    IsolateClusterAsync(
    request,
    [prom](
        const CynosdbClient*,
        const IsolateClusterRequest&,
        IsolateClusterOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::IsolateInstanceOutcome CynosdbClient::IsolateInstance(const IsolateInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "IsolateInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        IsolateInstanceResponse rsp = IsolateInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return IsolateInstanceOutcome(rsp);
        else
            return IsolateInstanceOutcome(o.GetError());
    }
    else
    {
        return IsolateInstanceOutcome(outcome.GetError());
    }
}

void CynosdbClient::IsolateInstanceAsync(const IsolateInstanceRequest& request, const IsolateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const IsolateInstanceRequest&;
    using Resp = IsolateInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "IsolateInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::IsolateInstanceOutcomeCallable CynosdbClient::IsolateInstanceCallable(const IsolateInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<IsolateInstanceOutcome>>();
    IsolateInstanceAsync(
    request,
    [prom](
        const CynosdbClient*,
        const IsolateInstanceRequest&,
        IsolateInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::ModifyAccountDescriptionOutcome CynosdbClient::ModifyAccountDescription(const ModifyAccountDescriptionRequest &request)
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

void CynosdbClient::ModifyAccountDescriptionAsync(const ModifyAccountDescriptionRequest& request, const ModifyAccountDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CynosdbClient::ModifyAccountDescriptionOutcomeCallable CynosdbClient::ModifyAccountDescriptionCallable(const ModifyAccountDescriptionRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAccountDescriptionOutcome>>();
    ModifyAccountDescriptionAsync(
    request,
    [prom](
        const CynosdbClient*,
        const ModifyAccountDescriptionRequest&,
        ModifyAccountDescriptionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::ModifyAccountHostOutcome CynosdbClient::ModifyAccountHost(const ModifyAccountHostRequest &request)
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

void CynosdbClient::ModifyAccountHostAsync(const ModifyAccountHostRequest& request, const ModifyAccountHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CynosdbClient::ModifyAccountHostOutcomeCallable CynosdbClient::ModifyAccountHostCallable(const ModifyAccountHostRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAccountHostOutcome>>();
    ModifyAccountHostAsync(
    request,
    [prom](
        const CynosdbClient*,
        const ModifyAccountHostRequest&,
        ModifyAccountHostOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::ModifyAccountParamsOutcome CynosdbClient::ModifyAccountParams(const ModifyAccountParamsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAccountParams");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAccountParamsResponse rsp = ModifyAccountParamsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAccountParamsOutcome(rsp);
        else
            return ModifyAccountParamsOutcome(o.GetError());
    }
    else
    {
        return ModifyAccountParamsOutcome(outcome.GetError());
    }
}

void CynosdbClient::ModifyAccountParamsAsync(const ModifyAccountParamsRequest& request, const ModifyAccountParamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAccountParamsRequest&;
    using Resp = ModifyAccountParamsResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAccountParams", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::ModifyAccountParamsOutcomeCallable CynosdbClient::ModifyAccountParamsCallable(const ModifyAccountParamsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAccountParamsOutcome>>();
    ModifyAccountParamsAsync(
    request,
    [prom](
        const CynosdbClient*,
        const ModifyAccountParamsRequest&,
        ModifyAccountParamsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::ModifyAccountPrivilegesOutcome CynosdbClient::ModifyAccountPrivileges(const ModifyAccountPrivilegesRequest &request)
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

void CynosdbClient::ModifyAccountPrivilegesAsync(const ModifyAccountPrivilegesRequest& request, const ModifyAccountPrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CynosdbClient::ModifyAccountPrivilegesOutcomeCallable CynosdbClient::ModifyAccountPrivilegesCallable(const ModifyAccountPrivilegesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAccountPrivilegesOutcome>>();
    ModifyAccountPrivilegesAsync(
    request,
    [prom](
        const CynosdbClient*,
        const ModifyAccountPrivilegesRequest&,
        ModifyAccountPrivilegesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::ModifyAuditRuleTemplatesOutcome CynosdbClient::ModifyAuditRuleTemplates(const ModifyAuditRuleTemplatesRequest &request)
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

void CynosdbClient::ModifyAuditRuleTemplatesAsync(const ModifyAuditRuleTemplatesRequest& request, const ModifyAuditRuleTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CynosdbClient::ModifyAuditRuleTemplatesOutcomeCallable CynosdbClient::ModifyAuditRuleTemplatesCallable(const ModifyAuditRuleTemplatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAuditRuleTemplatesOutcome>>();
    ModifyAuditRuleTemplatesAsync(
    request,
    [prom](
        const CynosdbClient*,
        const ModifyAuditRuleTemplatesRequest&,
        ModifyAuditRuleTemplatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::ModifyAuditServiceOutcome CynosdbClient::ModifyAuditService(const ModifyAuditServiceRequest &request)
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

void CynosdbClient::ModifyAuditServiceAsync(const ModifyAuditServiceRequest& request, const ModifyAuditServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CynosdbClient::ModifyAuditServiceOutcomeCallable CynosdbClient::ModifyAuditServiceCallable(const ModifyAuditServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAuditServiceOutcome>>();
    ModifyAuditServiceAsync(
    request,
    [prom](
        const CynosdbClient*,
        const ModifyAuditServiceRequest&,
        ModifyAuditServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::ModifyBackupConfigOutcome CynosdbClient::ModifyBackupConfig(const ModifyBackupConfigRequest &request)
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

void CynosdbClient::ModifyBackupConfigAsync(const ModifyBackupConfigRequest& request, const ModifyBackupConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CynosdbClient::ModifyBackupConfigOutcomeCallable CynosdbClient::ModifyBackupConfigCallable(const ModifyBackupConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyBackupConfigOutcome>>();
    ModifyBackupConfigAsync(
    request,
    [prom](
        const CynosdbClient*,
        const ModifyBackupConfigRequest&,
        ModifyBackupConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::ModifyBackupDownloadRestrictionOutcome CynosdbClient::ModifyBackupDownloadRestriction(const ModifyBackupDownloadRestrictionRequest &request)
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

void CynosdbClient::ModifyBackupDownloadRestrictionAsync(const ModifyBackupDownloadRestrictionRequest& request, const ModifyBackupDownloadRestrictionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CynosdbClient::ModifyBackupDownloadRestrictionOutcomeCallable CynosdbClient::ModifyBackupDownloadRestrictionCallable(const ModifyBackupDownloadRestrictionRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyBackupDownloadRestrictionOutcome>>();
    ModifyBackupDownloadRestrictionAsync(
    request,
    [prom](
        const CynosdbClient*,
        const ModifyBackupDownloadRestrictionRequest&,
        ModifyBackupDownloadRestrictionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::ModifyBackupDownloadUserRestrictionOutcome CynosdbClient::ModifyBackupDownloadUserRestriction(const ModifyBackupDownloadUserRestrictionRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBackupDownloadUserRestriction");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBackupDownloadUserRestrictionResponse rsp = ModifyBackupDownloadUserRestrictionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBackupDownloadUserRestrictionOutcome(rsp);
        else
            return ModifyBackupDownloadUserRestrictionOutcome(o.GetError());
    }
    else
    {
        return ModifyBackupDownloadUserRestrictionOutcome(outcome.GetError());
    }
}

void CynosdbClient::ModifyBackupDownloadUserRestrictionAsync(const ModifyBackupDownloadUserRestrictionRequest& request, const ModifyBackupDownloadUserRestrictionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyBackupDownloadUserRestrictionRequest&;
    using Resp = ModifyBackupDownloadUserRestrictionResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyBackupDownloadUserRestriction", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::ModifyBackupDownloadUserRestrictionOutcomeCallable CynosdbClient::ModifyBackupDownloadUserRestrictionCallable(const ModifyBackupDownloadUserRestrictionRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyBackupDownloadUserRestrictionOutcome>>();
    ModifyBackupDownloadUserRestrictionAsync(
    request,
    [prom](
        const CynosdbClient*,
        const ModifyBackupDownloadUserRestrictionRequest&,
        ModifyBackupDownloadUserRestrictionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::ModifyBackupNameOutcome CynosdbClient::ModifyBackupName(const ModifyBackupNameRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBackupName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBackupNameResponse rsp = ModifyBackupNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBackupNameOutcome(rsp);
        else
            return ModifyBackupNameOutcome(o.GetError());
    }
    else
    {
        return ModifyBackupNameOutcome(outcome.GetError());
    }
}

void CynosdbClient::ModifyBackupNameAsync(const ModifyBackupNameRequest& request, const ModifyBackupNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyBackupNameRequest&;
    using Resp = ModifyBackupNameResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyBackupName", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::ModifyBackupNameOutcomeCallable CynosdbClient::ModifyBackupNameCallable(const ModifyBackupNameRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyBackupNameOutcome>>();
    ModifyBackupNameAsync(
    request,
    [prom](
        const CynosdbClient*,
        const ModifyBackupNameRequest&,
        ModifyBackupNameOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::ModifyBinlogConfigOutcome CynosdbClient::ModifyBinlogConfig(const ModifyBinlogConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBinlogConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBinlogConfigResponse rsp = ModifyBinlogConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBinlogConfigOutcome(rsp);
        else
            return ModifyBinlogConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyBinlogConfigOutcome(outcome.GetError());
    }
}

void CynosdbClient::ModifyBinlogConfigAsync(const ModifyBinlogConfigRequest& request, const ModifyBinlogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyBinlogConfigRequest&;
    using Resp = ModifyBinlogConfigResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyBinlogConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::ModifyBinlogConfigOutcomeCallable CynosdbClient::ModifyBinlogConfigCallable(const ModifyBinlogConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyBinlogConfigOutcome>>();
    ModifyBinlogConfigAsync(
    request,
    [prom](
        const CynosdbClient*,
        const ModifyBinlogConfigRequest&,
        ModifyBinlogConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::ModifyBinlogSaveDaysOutcome CynosdbClient::ModifyBinlogSaveDays(const ModifyBinlogSaveDaysRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBinlogSaveDays");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBinlogSaveDaysResponse rsp = ModifyBinlogSaveDaysResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBinlogSaveDaysOutcome(rsp);
        else
            return ModifyBinlogSaveDaysOutcome(o.GetError());
    }
    else
    {
        return ModifyBinlogSaveDaysOutcome(outcome.GetError());
    }
}

void CynosdbClient::ModifyBinlogSaveDaysAsync(const ModifyBinlogSaveDaysRequest& request, const ModifyBinlogSaveDaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyBinlogSaveDaysRequest&;
    using Resp = ModifyBinlogSaveDaysResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyBinlogSaveDays", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::ModifyBinlogSaveDaysOutcomeCallable CynosdbClient::ModifyBinlogSaveDaysCallable(const ModifyBinlogSaveDaysRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyBinlogSaveDaysOutcome>>();
    ModifyBinlogSaveDaysAsync(
    request,
    [prom](
        const CynosdbClient*,
        const ModifyBinlogSaveDaysRequest&,
        ModifyBinlogSaveDaysOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::ModifyClusterDatabaseOutcome CynosdbClient::ModifyClusterDatabase(const ModifyClusterDatabaseRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyClusterDatabase");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyClusterDatabaseResponse rsp = ModifyClusterDatabaseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyClusterDatabaseOutcome(rsp);
        else
            return ModifyClusterDatabaseOutcome(o.GetError());
    }
    else
    {
        return ModifyClusterDatabaseOutcome(outcome.GetError());
    }
}

void CynosdbClient::ModifyClusterDatabaseAsync(const ModifyClusterDatabaseRequest& request, const ModifyClusterDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyClusterDatabaseRequest&;
    using Resp = ModifyClusterDatabaseResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyClusterDatabase", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::ModifyClusterDatabaseOutcomeCallable CynosdbClient::ModifyClusterDatabaseCallable(const ModifyClusterDatabaseRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyClusterDatabaseOutcome>>();
    ModifyClusterDatabaseAsync(
    request,
    [prom](
        const CynosdbClient*,
        const ModifyClusterDatabaseRequest&,
        ModifyClusterDatabaseOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::ModifyClusterNameOutcome CynosdbClient::ModifyClusterName(const ModifyClusterNameRequest &request)
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

void CynosdbClient::ModifyClusterNameAsync(const ModifyClusterNameRequest& request, const ModifyClusterNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CynosdbClient::ModifyClusterNameOutcomeCallable CynosdbClient::ModifyClusterNameCallable(const ModifyClusterNameRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyClusterNameOutcome>>();
    ModifyClusterNameAsync(
    request,
    [prom](
        const CynosdbClient*,
        const ModifyClusterNameRequest&,
        ModifyClusterNameOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::ModifyClusterParamOutcome CynosdbClient::ModifyClusterParam(const ModifyClusterParamRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyClusterParam");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyClusterParamResponse rsp = ModifyClusterParamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyClusterParamOutcome(rsp);
        else
            return ModifyClusterParamOutcome(o.GetError());
    }
    else
    {
        return ModifyClusterParamOutcome(outcome.GetError());
    }
}

void CynosdbClient::ModifyClusterParamAsync(const ModifyClusterParamRequest& request, const ModifyClusterParamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyClusterParamRequest&;
    using Resp = ModifyClusterParamResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyClusterParam", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::ModifyClusterParamOutcomeCallable CynosdbClient::ModifyClusterParamCallable(const ModifyClusterParamRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyClusterParamOutcome>>();
    ModifyClusterParamAsync(
    request,
    [prom](
        const CynosdbClient*,
        const ModifyClusterParamRequest&,
        ModifyClusterParamOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::ModifyClusterPasswordComplexityOutcome CynosdbClient::ModifyClusterPasswordComplexity(const ModifyClusterPasswordComplexityRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyClusterPasswordComplexity");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyClusterPasswordComplexityResponse rsp = ModifyClusterPasswordComplexityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyClusterPasswordComplexityOutcome(rsp);
        else
            return ModifyClusterPasswordComplexityOutcome(o.GetError());
    }
    else
    {
        return ModifyClusterPasswordComplexityOutcome(outcome.GetError());
    }
}

void CynosdbClient::ModifyClusterPasswordComplexityAsync(const ModifyClusterPasswordComplexityRequest& request, const ModifyClusterPasswordComplexityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyClusterPasswordComplexityRequest&;
    using Resp = ModifyClusterPasswordComplexityResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyClusterPasswordComplexity", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::ModifyClusterPasswordComplexityOutcomeCallable CynosdbClient::ModifyClusterPasswordComplexityCallable(const ModifyClusterPasswordComplexityRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyClusterPasswordComplexityOutcome>>();
    ModifyClusterPasswordComplexityAsync(
    request,
    [prom](
        const CynosdbClient*,
        const ModifyClusterPasswordComplexityRequest&,
        ModifyClusterPasswordComplexityOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::ModifyClusterReadOnlyOutcome CynosdbClient::ModifyClusterReadOnly(const ModifyClusterReadOnlyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyClusterReadOnly");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyClusterReadOnlyResponse rsp = ModifyClusterReadOnlyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyClusterReadOnlyOutcome(rsp);
        else
            return ModifyClusterReadOnlyOutcome(o.GetError());
    }
    else
    {
        return ModifyClusterReadOnlyOutcome(outcome.GetError());
    }
}

void CynosdbClient::ModifyClusterReadOnlyAsync(const ModifyClusterReadOnlyRequest& request, const ModifyClusterReadOnlyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyClusterReadOnlyRequest&;
    using Resp = ModifyClusterReadOnlyResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyClusterReadOnly", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::ModifyClusterReadOnlyOutcomeCallable CynosdbClient::ModifyClusterReadOnlyCallable(const ModifyClusterReadOnlyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyClusterReadOnlyOutcome>>();
    ModifyClusterReadOnlyAsync(
    request,
    [prom](
        const CynosdbClient*,
        const ModifyClusterReadOnlyRequest&,
        ModifyClusterReadOnlyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::ModifyClusterSlaveZoneOutcome CynosdbClient::ModifyClusterSlaveZone(const ModifyClusterSlaveZoneRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyClusterSlaveZone");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyClusterSlaveZoneResponse rsp = ModifyClusterSlaveZoneResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyClusterSlaveZoneOutcome(rsp);
        else
            return ModifyClusterSlaveZoneOutcome(o.GetError());
    }
    else
    {
        return ModifyClusterSlaveZoneOutcome(outcome.GetError());
    }
}

void CynosdbClient::ModifyClusterSlaveZoneAsync(const ModifyClusterSlaveZoneRequest& request, const ModifyClusterSlaveZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyClusterSlaveZoneRequest&;
    using Resp = ModifyClusterSlaveZoneResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyClusterSlaveZone", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::ModifyClusterSlaveZoneOutcomeCallable CynosdbClient::ModifyClusterSlaveZoneCallable(const ModifyClusterSlaveZoneRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyClusterSlaveZoneOutcome>>();
    ModifyClusterSlaveZoneAsync(
    request,
    [prom](
        const CynosdbClient*,
        const ModifyClusterSlaveZoneRequest&,
        ModifyClusterSlaveZoneOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::ModifyClusterStorageOutcome CynosdbClient::ModifyClusterStorage(const ModifyClusterStorageRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyClusterStorage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyClusterStorageResponse rsp = ModifyClusterStorageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyClusterStorageOutcome(rsp);
        else
            return ModifyClusterStorageOutcome(o.GetError());
    }
    else
    {
        return ModifyClusterStorageOutcome(outcome.GetError());
    }
}

void CynosdbClient::ModifyClusterStorageAsync(const ModifyClusterStorageRequest& request, const ModifyClusterStorageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyClusterStorageRequest&;
    using Resp = ModifyClusterStorageResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyClusterStorage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::ModifyClusterStorageOutcomeCallable CynosdbClient::ModifyClusterStorageCallable(const ModifyClusterStorageRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyClusterStorageOutcome>>();
    ModifyClusterStorageAsync(
    request,
    [prom](
        const CynosdbClient*,
        const ModifyClusterStorageRequest&,
        ModifyClusterStorageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::ModifyDBInstanceSecurityGroupsOutcome CynosdbClient::ModifyDBInstanceSecurityGroups(const ModifyDBInstanceSecurityGroupsRequest &request)
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

void CynosdbClient::ModifyDBInstanceSecurityGroupsAsync(const ModifyDBInstanceSecurityGroupsRequest& request, const ModifyDBInstanceSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CynosdbClient::ModifyDBInstanceSecurityGroupsOutcomeCallable CynosdbClient::ModifyDBInstanceSecurityGroupsCallable(const ModifyDBInstanceSecurityGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDBInstanceSecurityGroupsOutcome>>();
    ModifyDBInstanceSecurityGroupsAsync(
    request,
    [prom](
        const CynosdbClient*,
        const ModifyDBInstanceSecurityGroupsRequest&,
        ModifyDBInstanceSecurityGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::ModifyInstanceNameOutcome CynosdbClient::ModifyInstanceName(const ModifyInstanceNameRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstanceName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstanceNameResponse rsp = ModifyInstanceNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstanceNameOutcome(rsp);
        else
            return ModifyInstanceNameOutcome(o.GetError());
    }
    else
    {
        return ModifyInstanceNameOutcome(outcome.GetError());
    }
}

void CynosdbClient::ModifyInstanceNameAsync(const ModifyInstanceNameRequest& request, const ModifyInstanceNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyInstanceNameRequest&;
    using Resp = ModifyInstanceNameResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyInstanceName", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::ModifyInstanceNameOutcomeCallable CynosdbClient::ModifyInstanceNameCallable(const ModifyInstanceNameRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyInstanceNameOutcome>>();
    ModifyInstanceNameAsync(
    request,
    [prom](
        const CynosdbClient*,
        const ModifyInstanceNameRequest&,
        ModifyInstanceNameOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::ModifyInstanceParamOutcome CynosdbClient::ModifyInstanceParam(const ModifyInstanceParamRequest &request)
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

void CynosdbClient::ModifyInstanceParamAsync(const ModifyInstanceParamRequest& request, const ModifyInstanceParamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CynosdbClient::ModifyInstanceParamOutcomeCallable CynosdbClient::ModifyInstanceParamCallable(const ModifyInstanceParamRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyInstanceParamOutcome>>();
    ModifyInstanceParamAsync(
    request,
    [prom](
        const CynosdbClient*,
        const ModifyInstanceParamRequest&,
        ModifyInstanceParamOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::ModifyInstanceUpgradeLimitDaysOutcome CynosdbClient::ModifyInstanceUpgradeLimitDays(const ModifyInstanceUpgradeLimitDaysRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstanceUpgradeLimitDays");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstanceUpgradeLimitDaysResponse rsp = ModifyInstanceUpgradeLimitDaysResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstanceUpgradeLimitDaysOutcome(rsp);
        else
            return ModifyInstanceUpgradeLimitDaysOutcome(o.GetError());
    }
    else
    {
        return ModifyInstanceUpgradeLimitDaysOutcome(outcome.GetError());
    }
}

void CynosdbClient::ModifyInstanceUpgradeLimitDaysAsync(const ModifyInstanceUpgradeLimitDaysRequest& request, const ModifyInstanceUpgradeLimitDaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyInstanceUpgradeLimitDaysRequest&;
    using Resp = ModifyInstanceUpgradeLimitDaysResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyInstanceUpgradeLimitDays", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::ModifyInstanceUpgradeLimitDaysOutcomeCallable CynosdbClient::ModifyInstanceUpgradeLimitDaysCallable(const ModifyInstanceUpgradeLimitDaysRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyInstanceUpgradeLimitDaysOutcome>>();
    ModifyInstanceUpgradeLimitDaysAsync(
    request,
    [prom](
        const CynosdbClient*,
        const ModifyInstanceUpgradeLimitDaysRequest&,
        ModifyInstanceUpgradeLimitDaysOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::ModifyMaintainPeriodConfigOutcome CynosdbClient::ModifyMaintainPeriodConfig(const ModifyMaintainPeriodConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMaintainPeriodConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMaintainPeriodConfigResponse rsp = ModifyMaintainPeriodConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMaintainPeriodConfigOutcome(rsp);
        else
            return ModifyMaintainPeriodConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyMaintainPeriodConfigOutcome(outcome.GetError());
    }
}

void CynosdbClient::ModifyMaintainPeriodConfigAsync(const ModifyMaintainPeriodConfigRequest& request, const ModifyMaintainPeriodConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyMaintainPeriodConfigRequest&;
    using Resp = ModifyMaintainPeriodConfigResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyMaintainPeriodConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::ModifyMaintainPeriodConfigOutcomeCallable CynosdbClient::ModifyMaintainPeriodConfigCallable(const ModifyMaintainPeriodConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyMaintainPeriodConfigOutcome>>();
    ModifyMaintainPeriodConfigAsync(
    request,
    [prom](
        const CynosdbClient*,
        const ModifyMaintainPeriodConfigRequest&,
        ModifyMaintainPeriodConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::ModifyParamTemplateOutcome CynosdbClient::ModifyParamTemplate(const ModifyParamTemplateRequest &request)
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

void CynosdbClient::ModifyParamTemplateAsync(const ModifyParamTemplateRequest& request, const ModifyParamTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CynosdbClient::ModifyParamTemplateOutcomeCallable CynosdbClient::ModifyParamTemplateCallable(const ModifyParamTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyParamTemplateOutcome>>();
    ModifyParamTemplateAsync(
    request,
    [prom](
        const CynosdbClient*,
        const ModifyParamTemplateRequest&,
        ModifyParamTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::ModifyProxyDescOutcome CynosdbClient::ModifyProxyDesc(const ModifyProxyDescRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyProxyDesc");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyProxyDescResponse rsp = ModifyProxyDescResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyProxyDescOutcome(rsp);
        else
            return ModifyProxyDescOutcome(o.GetError());
    }
    else
    {
        return ModifyProxyDescOutcome(outcome.GetError());
    }
}

void CynosdbClient::ModifyProxyDescAsync(const ModifyProxyDescRequest& request, const ModifyProxyDescAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyProxyDescRequest&;
    using Resp = ModifyProxyDescResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyProxyDesc", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::ModifyProxyDescOutcomeCallable CynosdbClient::ModifyProxyDescCallable(const ModifyProxyDescRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyProxyDescOutcome>>();
    ModifyProxyDescAsync(
    request,
    [prom](
        const CynosdbClient*,
        const ModifyProxyDescRequest&,
        ModifyProxyDescOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::ModifyProxyRwSplitOutcome CynosdbClient::ModifyProxyRwSplit(const ModifyProxyRwSplitRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyProxyRwSplit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyProxyRwSplitResponse rsp = ModifyProxyRwSplitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyProxyRwSplitOutcome(rsp);
        else
            return ModifyProxyRwSplitOutcome(o.GetError());
    }
    else
    {
        return ModifyProxyRwSplitOutcome(outcome.GetError());
    }
}

void CynosdbClient::ModifyProxyRwSplitAsync(const ModifyProxyRwSplitRequest& request, const ModifyProxyRwSplitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyProxyRwSplitRequest&;
    using Resp = ModifyProxyRwSplitResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyProxyRwSplit", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::ModifyProxyRwSplitOutcomeCallable CynosdbClient::ModifyProxyRwSplitCallable(const ModifyProxyRwSplitRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyProxyRwSplitOutcome>>();
    ModifyProxyRwSplitAsync(
    request,
    [prom](
        const CynosdbClient*,
        const ModifyProxyRwSplitRequest&,
        ModifyProxyRwSplitOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::ModifyResourcePackageClustersOutcome CynosdbClient::ModifyResourcePackageClusters(const ModifyResourcePackageClustersRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyResourcePackageClusters");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyResourcePackageClustersResponse rsp = ModifyResourcePackageClustersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyResourcePackageClustersOutcome(rsp);
        else
            return ModifyResourcePackageClustersOutcome(o.GetError());
    }
    else
    {
        return ModifyResourcePackageClustersOutcome(outcome.GetError());
    }
}

void CynosdbClient::ModifyResourcePackageClustersAsync(const ModifyResourcePackageClustersRequest& request, const ModifyResourcePackageClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyResourcePackageClustersRequest&;
    using Resp = ModifyResourcePackageClustersResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyResourcePackageClusters", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::ModifyResourcePackageClustersOutcomeCallable CynosdbClient::ModifyResourcePackageClustersCallable(const ModifyResourcePackageClustersRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyResourcePackageClustersOutcome>>();
    ModifyResourcePackageClustersAsync(
    request,
    [prom](
        const CynosdbClient*,
        const ModifyResourcePackageClustersRequest&,
        ModifyResourcePackageClustersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::ModifyResourcePackageNameOutcome CynosdbClient::ModifyResourcePackageName(const ModifyResourcePackageNameRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyResourcePackageName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyResourcePackageNameResponse rsp = ModifyResourcePackageNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyResourcePackageNameOutcome(rsp);
        else
            return ModifyResourcePackageNameOutcome(o.GetError());
    }
    else
    {
        return ModifyResourcePackageNameOutcome(outcome.GetError());
    }
}

void CynosdbClient::ModifyResourcePackageNameAsync(const ModifyResourcePackageNameRequest& request, const ModifyResourcePackageNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyResourcePackageNameRequest&;
    using Resp = ModifyResourcePackageNameResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyResourcePackageName", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::ModifyResourcePackageNameOutcomeCallable CynosdbClient::ModifyResourcePackageNameCallable(const ModifyResourcePackageNameRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyResourcePackageNameOutcome>>();
    ModifyResourcePackageNameAsync(
    request,
    [prom](
        const CynosdbClient*,
        const ModifyResourcePackageNameRequest&,
        ModifyResourcePackageNameOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::ModifyResourcePackagesDeductionPriorityOutcome CynosdbClient::ModifyResourcePackagesDeductionPriority(const ModifyResourcePackagesDeductionPriorityRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyResourcePackagesDeductionPriority");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyResourcePackagesDeductionPriorityResponse rsp = ModifyResourcePackagesDeductionPriorityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyResourcePackagesDeductionPriorityOutcome(rsp);
        else
            return ModifyResourcePackagesDeductionPriorityOutcome(o.GetError());
    }
    else
    {
        return ModifyResourcePackagesDeductionPriorityOutcome(outcome.GetError());
    }
}

void CynosdbClient::ModifyResourcePackagesDeductionPriorityAsync(const ModifyResourcePackagesDeductionPriorityRequest& request, const ModifyResourcePackagesDeductionPriorityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyResourcePackagesDeductionPriorityRequest&;
    using Resp = ModifyResourcePackagesDeductionPriorityResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyResourcePackagesDeductionPriority", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::ModifyResourcePackagesDeductionPriorityOutcomeCallable CynosdbClient::ModifyResourcePackagesDeductionPriorityCallable(const ModifyResourcePackagesDeductionPriorityRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyResourcePackagesDeductionPriorityOutcome>>();
    ModifyResourcePackagesDeductionPriorityAsync(
    request,
    [prom](
        const CynosdbClient*,
        const ModifyResourcePackagesDeductionPriorityRequest&,
        ModifyResourcePackagesDeductionPriorityOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::ModifyServerlessStrategyOutcome CynosdbClient::ModifyServerlessStrategy(const ModifyServerlessStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyServerlessStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyServerlessStrategyResponse rsp = ModifyServerlessStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyServerlessStrategyOutcome(rsp);
        else
            return ModifyServerlessStrategyOutcome(o.GetError());
    }
    else
    {
        return ModifyServerlessStrategyOutcome(outcome.GetError());
    }
}

void CynosdbClient::ModifyServerlessStrategyAsync(const ModifyServerlessStrategyRequest& request, const ModifyServerlessStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyServerlessStrategyRequest&;
    using Resp = ModifyServerlessStrategyResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyServerlessStrategy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::ModifyServerlessStrategyOutcomeCallable CynosdbClient::ModifyServerlessStrategyCallable(const ModifyServerlessStrategyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyServerlessStrategyOutcome>>();
    ModifyServerlessStrategyAsync(
    request,
    [prom](
        const CynosdbClient*,
        const ModifyServerlessStrategyRequest&,
        ModifyServerlessStrategyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::ModifyVipVportOutcome CynosdbClient::ModifyVipVport(const ModifyVipVportRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyVipVport");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyVipVportResponse rsp = ModifyVipVportResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyVipVportOutcome(rsp);
        else
            return ModifyVipVportOutcome(o.GetError());
    }
    else
    {
        return ModifyVipVportOutcome(outcome.GetError());
    }
}

void CynosdbClient::ModifyVipVportAsync(const ModifyVipVportRequest& request, const ModifyVipVportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyVipVportRequest&;
    using Resp = ModifyVipVportResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyVipVport", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::ModifyVipVportOutcomeCallable CynosdbClient::ModifyVipVportCallable(const ModifyVipVportRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyVipVportOutcome>>();
    ModifyVipVportAsync(
    request,
    [prom](
        const CynosdbClient*,
        const ModifyVipVportRequest&,
        ModifyVipVportOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::OfflineClusterOutcome CynosdbClient::OfflineCluster(const OfflineClusterRequest &request)
{
    auto outcome = MakeRequest(request, "OfflineCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OfflineClusterResponse rsp = OfflineClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OfflineClusterOutcome(rsp);
        else
            return OfflineClusterOutcome(o.GetError());
    }
    else
    {
        return OfflineClusterOutcome(outcome.GetError());
    }
}

void CynosdbClient::OfflineClusterAsync(const OfflineClusterRequest& request, const OfflineClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const OfflineClusterRequest&;
    using Resp = OfflineClusterResponse;

    DoRequestAsync<Req, Resp>(
        "OfflineCluster", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::OfflineClusterOutcomeCallable CynosdbClient::OfflineClusterCallable(const OfflineClusterRequest &request)
{
    const auto prom = std::make_shared<std::promise<OfflineClusterOutcome>>();
    OfflineClusterAsync(
    request,
    [prom](
        const CynosdbClient*,
        const OfflineClusterRequest&,
        OfflineClusterOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::OfflineInstanceOutcome CynosdbClient::OfflineInstance(const OfflineInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "OfflineInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OfflineInstanceResponse rsp = OfflineInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OfflineInstanceOutcome(rsp);
        else
            return OfflineInstanceOutcome(o.GetError());
    }
    else
    {
        return OfflineInstanceOutcome(outcome.GetError());
    }
}

void CynosdbClient::OfflineInstanceAsync(const OfflineInstanceRequest& request, const OfflineInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const OfflineInstanceRequest&;
    using Resp = OfflineInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "OfflineInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::OfflineInstanceOutcomeCallable CynosdbClient::OfflineInstanceCallable(const OfflineInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<OfflineInstanceOutcome>>();
    OfflineInstanceAsync(
    request,
    [prom](
        const CynosdbClient*,
        const OfflineInstanceRequest&,
        OfflineInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::OpenAuditServiceOutcome CynosdbClient::OpenAuditService(const OpenAuditServiceRequest &request)
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

void CynosdbClient::OpenAuditServiceAsync(const OpenAuditServiceRequest& request, const OpenAuditServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CynosdbClient::OpenAuditServiceOutcomeCallable CynosdbClient::OpenAuditServiceCallable(const OpenAuditServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<OpenAuditServiceOutcome>>();
    OpenAuditServiceAsync(
    request,
    [prom](
        const CynosdbClient*,
        const OpenAuditServiceRequest&,
        OpenAuditServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::OpenClusterPasswordComplexityOutcome CynosdbClient::OpenClusterPasswordComplexity(const OpenClusterPasswordComplexityRequest &request)
{
    auto outcome = MakeRequest(request, "OpenClusterPasswordComplexity");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OpenClusterPasswordComplexityResponse rsp = OpenClusterPasswordComplexityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OpenClusterPasswordComplexityOutcome(rsp);
        else
            return OpenClusterPasswordComplexityOutcome(o.GetError());
    }
    else
    {
        return OpenClusterPasswordComplexityOutcome(outcome.GetError());
    }
}

void CynosdbClient::OpenClusterPasswordComplexityAsync(const OpenClusterPasswordComplexityRequest& request, const OpenClusterPasswordComplexityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const OpenClusterPasswordComplexityRequest&;
    using Resp = OpenClusterPasswordComplexityResponse;

    DoRequestAsync<Req, Resp>(
        "OpenClusterPasswordComplexity", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::OpenClusterPasswordComplexityOutcomeCallable CynosdbClient::OpenClusterPasswordComplexityCallable(const OpenClusterPasswordComplexityRequest &request)
{
    const auto prom = std::make_shared<std::promise<OpenClusterPasswordComplexityOutcome>>();
    OpenClusterPasswordComplexityAsync(
    request,
    [prom](
        const CynosdbClient*,
        const OpenClusterPasswordComplexityRequest&,
        OpenClusterPasswordComplexityOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::OpenClusterReadOnlyInstanceGroupAccessOutcome CynosdbClient::OpenClusterReadOnlyInstanceGroupAccess(const OpenClusterReadOnlyInstanceGroupAccessRequest &request)
{
    auto outcome = MakeRequest(request, "OpenClusterReadOnlyInstanceGroupAccess");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OpenClusterReadOnlyInstanceGroupAccessResponse rsp = OpenClusterReadOnlyInstanceGroupAccessResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OpenClusterReadOnlyInstanceGroupAccessOutcome(rsp);
        else
            return OpenClusterReadOnlyInstanceGroupAccessOutcome(o.GetError());
    }
    else
    {
        return OpenClusterReadOnlyInstanceGroupAccessOutcome(outcome.GetError());
    }
}

void CynosdbClient::OpenClusterReadOnlyInstanceGroupAccessAsync(const OpenClusterReadOnlyInstanceGroupAccessRequest& request, const OpenClusterReadOnlyInstanceGroupAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const OpenClusterReadOnlyInstanceGroupAccessRequest&;
    using Resp = OpenClusterReadOnlyInstanceGroupAccessResponse;

    DoRequestAsync<Req, Resp>(
        "OpenClusterReadOnlyInstanceGroupAccess", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::OpenClusterReadOnlyInstanceGroupAccessOutcomeCallable CynosdbClient::OpenClusterReadOnlyInstanceGroupAccessCallable(const OpenClusterReadOnlyInstanceGroupAccessRequest &request)
{
    const auto prom = std::make_shared<std::promise<OpenClusterReadOnlyInstanceGroupAccessOutcome>>();
    OpenClusterReadOnlyInstanceGroupAccessAsync(
    request,
    [prom](
        const CynosdbClient*,
        const OpenClusterReadOnlyInstanceGroupAccessRequest&,
        OpenClusterReadOnlyInstanceGroupAccessOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::OpenClusterTransparentEncryptOutcome CynosdbClient::OpenClusterTransparentEncrypt(const OpenClusterTransparentEncryptRequest &request)
{
    auto outcome = MakeRequest(request, "OpenClusterTransparentEncrypt");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OpenClusterTransparentEncryptResponse rsp = OpenClusterTransparentEncryptResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OpenClusterTransparentEncryptOutcome(rsp);
        else
            return OpenClusterTransparentEncryptOutcome(o.GetError());
    }
    else
    {
        return OpenClusterTransparentEncryptOutcome(outcome.GetError());
    }
}

void CynosdbClient::OpenClusterTransparentEncryptAsync(const OpenClusterTransparentEncryptRequest& request, const OpenClusterTransparentEncryptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const OpenClusterTransparentEncryptRequest&;
    using Resp = OpenClusterTransparentEncryptResponse;

    DoRequestAsync<Req, Resp>(
        "OpenClusterTransparentEncrypt", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::OpenClusterTransparentEncryptOutcomeCallable CynosdbClient::OpenClusterTransparentEncryptCallable(const OpenClusterTransparentEncryptRequest &request)
{
    const auto prom = std::make_shared<std::promise<OpenClusterTransparentEncryptOutcome>>();
    OpenClusterTransparentEncryptAsync(
    request,
    [prom](
        const CynosdbClient*,
        const OpenClusterTransparentEncryptRequest&,
        OpenClusterTransparentEncryptOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::OpenReadOnlyInstanceExclusiveAccessOutcome CynosdbClient::OpenReadOnlyInstanceExclusiveAccess(const OpenReadOnlyInstanceExclusiveAccessRequest &request)
{
    auto outcome = MakeRequest(request, "OpenReadOnlyInstanceExclusiveAccess");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OpenReadOnlyInstanceExclusiveAccessResponse rsp = OpenReadOnlyInstanceExclusiveAccessResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OpenReadOnlyInstanceExclusiveAccessOutcome(rsp);
        else
            return OpenReadOnlyInstanceExclusiveAccessOutcome(o.GetError());
    }
    else
    {
        return OpenReadOnlyInstanceExclusiveAccessOutcome(outcome.GetError());
    }
}

void CynosdbClient::OpenReadOnlyInstanceExclusiveAccessAsync(const OpenReadOnlyInstanceExclusiveAccessRequest& request, const OpenReadOnlyInstanceExclusiveAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const OpenReadOnlyInstanceExclusiveAccessRequest&;
    using Resp = OpenReadOnlyInstanceExclusiveAccessResponse;

    DoRequestAsync<Req, Resp>(
        "OpenReadOnlyInstanceExclusiveAccess", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::OpenReadOnlyInstanceExclusiveAccessOutcomeCallable CynosdbClient::OpenReadOnlyInstanceExclusiveAccessCallable(const OpenReadOnlyInstanceExclusiveAccessRequest &request)
{
    const auto prom = std::make_shared<std::promise<OpenReadOnlyInstanceExclusiveAccessOutcome>>();
    OpenReadOnlyInstanceExclusiveAccessAsync(
    request,
    [prom](
        const CynosdbClient*,
        const OpenReadOnlyInstanceExclusiveAccessRequest&,
        OpenReadOnlyInstanceExclusiveAccessOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::OpenSSLOutcome CynosdbClient::OpenSSL(const OpenSSLRequest &request)
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

void CynosdbClient::OpenSSLAsync(const OpenSSLRequest& request, const OpenSSLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CynosdbClient::OpenSSLOutcomeCallable CynosdbClient::OpenSSLCallable(const OpenSSLRequest &request)
{
    const auto prom = std::make_shared<std::promise<OpenSSLOutcome>>();
    OpenSSLAsync(
    request,
    [prom](
        const CynosdbClient*,
        const OpenSSLRequest&,
        OpenSSLOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::OpenWanOutcome CynosdbClient::OpenWan(const OpenWanRequest &request)
{
    auto outcome = MakeRequest(request, "OpenWan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OpenWanResponse rsp = OpenWanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OpenWanOutcome(rsp);
        else
            return OpenWanOutcome(o.GetError());
    }
    else
    {
        return OpenWanOutcome(outcome.GetError());
    }
}

void CynosdbClient::OpenWanAsync(const OpenWanRequest& request, const OpenWanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const OpenWanRequest&;
    using Resp = OpenWanResponse;

    DoRequestAsync<Req, Resp>(
        "OpenWan", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::OpenWanOutcomeCallable CynosdbClient::OpenWanCallable(const OpenWanRequest &request)
{
    const auto prom = std::make_shared<std::promise<OpenWanOutcome>>();
    OpenWanAsync(
    request,
    [prom](
        const CynosdbClient*,
        const OpenWanRequest&,
        OpenWanOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::PauseServerlessOutcome CynosdbClient::PauseServerless(const PauseServerlessRequest &request)
{
    auto outcome = MakeRequest(request, "PauseServerless");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PauseServerlessResponse rsp = PauseServerlessResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PauseServerlessOutcome(rsp);
        else
            return PauseServerlessOutcome(o.GetError());
    }
    else
    {
        return PauseServerlessOutcome(outcome.GetError());
    }
}

void CynosdbClient::PauseServerlessAsync(const PauseServerlessRequest& request, const PauseServerlessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const PauseServerlessRequest&;
    using Resp = PauseServerlessResponse;

    DoRequestAsync<Req, Resp>(
        "PauseServerless", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::PauseServerlessOutcomeCallable CynosdbClient::PauseServerlessCallable(const PauseServerlessRequest &request)
{
    const auto prom = std::make_shared<std::promise<PauseServerlessOutcome>>();
    PauseServerlessAsync(
    request,
    [prom](
        const CynosdbClient*,
        const PauseServerlessRequest&,
        PauseServerlessOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::RefundResourcePackageOutcome CynosdbClient::RefundResourcePackage(const RefundResourcePackageRequest &request)
{
    auto outcome = MakeRequest(request, "RefundResourcePackage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RefundResourcePackageResponse rsp = RefundResourcePackageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RefundResourcePackageOutcome(rsp);
        else
            return RefundResourcePackageOutcome(o.GetError());
    }
    else
    {
        return RefundResourcePackageOutcome(outcome.GetError());
    }
}

void CynosdbClient::RefundResourcePackageAsync(const RefundResourcePackageRequest& request, const RefundResourcePackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RefundResourcePackageRequest&;
    using Resp = RefundResourcePackageResponse;

    DoRequestAsync<Req, Resp>(
        "RefundResourcePackage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::RefundResourcePackageOutcomeCallable CynosdbClient::RefundResourcePackageCallable(const RefundResourcePackageRequest &request)
{
    const auto prom = std::make_shared<std::promise<RefundResourcePackageOutcome>>();
    RefundResourcePackageAsync(
    request,
    [prom](
        const CynosdbClient*,
        const RefundResourcePackageRequest&,
        RefundResourcePackageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::ReloadBalanceProxyNodeOutcome CynosdbClient::ReloadBalanceProxyNode(const ReloadBalanceProxyNodeRequest &request)
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

void CynosdbClient::ReloadBalanceProxyNodeAsync(const ReloadBalanceProxyNodeRequest& request, const ReloadBalanceProxyNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CynosdbClient::ReloadBalanceProxyNodeOutcomeCallable CynosdbClient::ReloadBalanceProxyNodeCallable(const ReloadBalanceProxyNodeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ReloadBalanceProxyNodeOutcome>>();
    ReloadBalanceProxyNodeAsync(
    request,
    [prom](
        const CynosdbClient*,
        const ReloadBalanceProxyNodeRequest&,
        ReloadBalanceProxyNodeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::RemoveClusterSlaveZoneOutcome CynosdbClient::RemoveClusterSlaveZone(const RemoveClusterSlaveZoneRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveClusterSlaveZone");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveClusterSlaveZoneResponse rsp = RemoveClusterSlaveZoneResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveClusterSlaveZoneOutcome(rsp);
        else
            return RemoveClusterSlaveZoneOutcome(o.GetError());
    }
    else
    {
        return RemoveClusterSlaveZoneOutcome(outcome.GetError());
    }
}

void CynosdbClient::RemoveClusterSlaveZoneAsync(const RemoveClusterSlaveZoneRequest& request, const RemoveClusterSlaveZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RemoveClusterSlaveZoneRequest&;
    using Resp = RemoveClusterSlaveZoneResponse;

    DoRequestAsync<Req, Resp>(
        "RemoveClusterSlaveZone", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::RemoveClusterSlaveZoneOutcomeCallable CynosdbClient::RemoveClusterSlaveZoneCallable(const RemoveClusterSlaveZoneRequest &request)
{
    const auto prom = std::make_shared<std::promise<RemoveClusterSlaveZoneOutcome>>();
    RemoveClusterSlaveZoneAsync(
    request,
    [prom](
        const CynosdbClient*,
        const RemoveClusterSlaveZoneRequest&,
        RemoveClusterSlaveZoneOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::RenewClustersOutcome CynosdbClient::RenewClusters(const RenewClustersRequest &request)
{
    auto outcome = MakeRequest(request, "RenewClusters");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RenewClustersResponse rsp = RenewClustersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RenewClustersOutcome(rsp);
        else
            return RenewClustersOutcome(o.GetError());
    }
    else
    {
        return RenewClustersOutcome(outcome.GetError());
    }
}

void CynosdbClient::RenewClustersAsync(const RenewClustersRequest& request, const RenewClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RenewClustersRequest&;
    using Resp = RenewClustersResponse;

    DoRequestAsync<Req, Resp>(
        "RenewClusters", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::RenewClustersOutcomeCallable CynosdbClient::RenewClustersCallable(const RenewClustersRequest &request)
{
    const auto prom = std::make_shared<std::promise<RenewClustersOutcome>>();
    RenewClustersAsync(
    request,
    [prom](
        const CynosdbClient*,
        const RenewClustersRequest&,
        RenewClustersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::ReplayInstanceAuditLogOutcome CynosdbClient::ReplayInstanceAuditLog(const ReplayInstanceAuditLogRequest &request)
{
    auto outcome = MakeRequest(request, "ReplayInstanceAuditLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReplayInstanceAuditLogResponse rsp = ReplayInstanceAuditLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReplayInstanceAuditLogOutcome(rsp);
        else
            return ReplayInstanceAuditLogOutcome(o.GetError());
    }
    else
    {
        return ReplayInstanceAuditLogOutcome(outcome.GetError());
    }
}

void CynosdbClient::ReplayInstanceAuditLogAsync(const ReplayInstanceAuditLogRequest& request, const ReplayInstanceAuditLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ReplayInstanceAuditLogRequest&;
    using Resp = ReplayInstanceAuditLogResponse;

    DoRequestAsync<Req, Resp>(
        "ReplayInstanceAuditLog", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::ReplayInstanceAuditLogOutcomeCallable CynosdbClient::ReplayInstanceAuditLogCallable(const ReplayInstanceAuditLogRequest &request)
{
    const auto prom = std::make_shared<std::promise<ReplayInstanceAuditLogOutcome>>();
    ReplayInstanceAuditLogAsync(
    request,
    [prom](
        const CynosdbClient*,
        const ReplayInstanceAuditLogRequest&,
        ReplayInstanceAuditLogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::ResetAccountPasswordOutcome CynosdbClient::ResetAccountPassword(const ResetAccountPasswordRequest &request)
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

void CynosdbClient::ResetAccountPasswordAsync(const ResetAccountPasswordRequest& request, const ResetAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CynosdbClient::ResetAccountPasswordOutcomeCallable CynosdbClient::ResetAccountPasswordCallable(const ResetAccountPasswordRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResetAccountPasswordOutcome>>();
    ResetAccountPasswordAsync(
    request,
    [prom](
        const CynosdbClient*,
        const ResetAccountPasswordRequest&,
        ResetAccountPasswordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::RestartInstanceOutcome CynosdbClient::RestartInstance(const RestartInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "RestartInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RestartInstanceResponse rsp = RestartInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RestartInstanceOutcome(rsp);
        else
            return RestartInstanceOutcome(o.GetError());
    }
    else
    {
        return RestartInstanceOutcome(outcome.GetError());
    }
}

void CynosdbClient::RestartInstanceAsync(const RestartInstanceRequest& request, const RestartInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RestartInstanceRequest&;
    using Resp = RestartInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "RestartInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::RestartInstanceOutcomeCallable CynosdbClient::RestartInstanceCallable(const RestartInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<RestartInstanceOutcome>>();
    RestartInstanceAsync(
    request,
    [prom](
        const CynosdbClient*,
        const RestartInstanceRequest&,
        RestartInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::ResumeServerlessOutcome CynosdbClient::ResumeServerless(const ResumeServerlessRequest &request)
{
    auto outcome = MakeRequest(request, "ResumeServerless");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResumeServerlessResponse rsp = ResumeServerlessResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResumeServerlessOutcome(rsp);
        else
            return ResumeServerlessOutcome(o.GetError());
    }
    else
    {
        return ResumeServerlessOutcome(outcome.GetError());
    }
}

void CynosdbClient::ResumeServerlessAsync(const ResumeServerlessRequest& request, const ResumeServerlessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ResumeServerlessRequest&;
    using Resp = ResumeServerlessResponse;

    DoRequestAsync<Req, Resp>(
        "ResumeServerless", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::ResumeServerlessOutcomeCallable CynosdbClient::ResumeServerlessCallable(const ResumeServerlessRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResumeServerlessOutcome>>();
    ResumeServerlessAsync(
    request,
    [prom](
        const CynosdbClient*,
        const ResumeServerlessRequest&,
        ResumeServerlessOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::RevokeAccountPrivilegesOutcome CynosdbClient::RevokeAccountPrivileges(const RevokeAccountPrivilegesRequest &request)
{
    auto outcome = MakeRequest(request, "RevokeAccountPrivileges");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RevokeAccountPrivilegesResponse rsp = RevokeAccountPrivilegesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RevokeAccountPrivilegesOutcome(rsp);
        else
            return RevokeAccountPrivilegesOutcome(o.GetError());
    }
    else
    {
        return RevokeAccountPrivilegesOutcome(outcome.GetError());
    }
}

void CynosdbClient::RevokeAccountPrivilegesAsync(const RevokeAccountPrivilegesRequest& request, const RevokeAccountPrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RevokeAccountPrivilegesRequest&;
    using Resp = RevokeAccountPrivilegesResponse;

    DoRequestAsync<Req, Resp>(
        "RevokeAccountPrivileges", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::RevokeAccountPrivilegesOutcomeCallable CynosdbClient::RevokeAccountPrivilegesCallable(const RevokeAccountPrivilegesRequest &request)
{
    const auto prom = std::make_shared<std::promise<RevokeAccountPrivilegesOutcome>>();
    RevokeAccountPrivilegesAsync(
    request,
    [prom](
        const CynosdbClient*,
        const RevokeAccountPrivilegesRequest&,
        RevokeAccountPrivilegesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::RollBackClusterOutcome CynosdbClient::RollBackCluster(const RollBackClusterRequest &request)
{
    auto outcome = MakeRequest(request, "RollBackCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RollBackClusterResponse rsp = RollBackClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RollBackClusterOutcome(rsp);
        else
            return RollBackClusterOutcome(o.GetError());
    }
    else
    {
        return RollBackClusterOutcome(outcome.GetError());
    }
}

void CynosdbClient::RollBackClusterAsync(const RollBackClusterRequest& request, const RollBackClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RollBackClusterRequest&;
    using Resp = RollBackClusterResponse;

    DoRequestAsync<Req, Resp>(
        "RollBackCluster", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::RollBackClusterOutcomeCallable CynosdbClient::RollBackClusterCallable(const RollBackClusterRequest &request)
{
    const auto prom = std::make_shared<std::promise<RollBackClusterOutcome>>();
    RollBackClusterAsync(
    request,
    [prom](
        const CynosdbClient*,
        const RollBackClusterRequest&,
        RollBackClusterOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::RollbackToNewClusterOutcome CynosdbClient::RollbackToNewCluster(const RollbackToNewClusterRequest &request)
{
    auto outcome = MakeRequest(request, "RollbackToNewCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RollbackToNewClusterResponse rsp = RollbackToNewClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RollbackToNewClusterOutcome(rsp);
        else
            return RollbackToNewClusterOutcome(o.GetError());
    }
    else
    {
        return RollbackToNewClusterOutcome(outcome.GetError());
    }
}

void CynosdbClient::RollbackToNewClusterAsync(const RollbackToNewClusterRequest& request, const RollbackToNewClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RollbackToNewClusterRequest&;
    using Resp = RollbackToNewClusterResponse;

    DoRequestAsync<Req, Resp>(
        "RollbackToNewCluster", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::RollbackToNewClusterOutcomeCallable CynosdbClient::RollbackToNewClusterCallable(const RollbackToNewClusterRequest &request)
{
    const auto prom = std::make_shared<std::promise<RollbackToNewClusterOutcome>>();
    RollbackToNewClusterAsync(
    request,
    [prom](
        const CynosdbClient*,
        const RollbackToNewClusterRequest&,
        RollbackToNewClusterOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::SearchClusterDatabasesOutcome CynosdbClient::SearchClusterDatabases(const SearchClusterDatabasesRequest &request)
{
    auto outcome = MakeRequest(request, "SearchClusterDatabases");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SearchClusterDatabasesResponse rsp = SearchClusterDatabasesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SearchClusterDatabasesOutcome(rsp);
        else
            return SearchClusterDatabasesOutcome(o.GetError());
    }
    else
    {
        return SearchClusterDatabasesOutcome(outcome.GetError());
    }
}

void CynosdbClient::SearchClusterDatabasesAsync(const SearchClusterDatabasesRequest& request, const SearchClusterDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SearchClusterDatabasesRequest&;
    using Resp = SearchClusterDatabasesResponse;

    DoRequestAsync<Req, Resp>(
        "SearchClusterDatabases", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::SearchClusterDatabasesOutcomeCallable CynosdbClient::SearchClusterDatabasesCallable(const SearchClusterDatabasesRequest &request)
{
    const auto prom = std::make_shared<std::promise<SearchClusterDatabasesOutcome>>();
    SearchClusterDatabasesAsync(
    request,
    [prom](
        const CynosdbClient*,
        const SearchClusterDatabasesRequest&,
        SearchClusterDatabasesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::SearchClusterTablesOutcome CynosdbClient::SearchClusterTables(const SearchClusterTablesRequest &request)
{
    auto outcome = MakeRequest(request, "SearchClusterTables");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SearchClusterTablesResponse rsp = SearchClusterTablesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SearchClusterTablesOutcome(rsp);
        else
            return SearchClusterTablesOutcome(o.GetError());
    }
    else
    {
        return SearchClusterTablesOutcome(outcome.GetError());
    }
}

void CynosdbClient::SearchClusterTablesAsync(const SearchClusterTablesRequest& request, const SearchClusterTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SearchClusterTablesRequest&;
    using Resp = SearchClusterTablesResponse;

    DoRequestAsync<Req, Resp>(
        "SearchClusterTables", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::SearchClusterTablesOutcomeCallable CynosdbClient::SearchClusterTablesCallable(const SearchClusterTablesRequest &request)
{
    const auto prom = std::make_shared<std::promise<SearchClusterTablesOutcome>>();
    SearchClusterTablesAsync(
    request,
    [prom](
        const CynosdbClient*,
        const SearchClusterTablesRequest&,
        SearchClusterTablesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::SetRenewFlagOutcome CynosdbClient::SetRenewFlag(const SetRenewFlagRequest &request)
{
    auto outcome = MakeRequest(request, "SetRenewFlag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetRenewFlagResponse rsp = SetRenewFlagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetRenewFlagOutcome(rsp);
        else
            return SetRenewFlagOutcome(o.GetError());
    }
    else
    {
        return SetRenewFlagOutcome(outcome.GetError());
    }
}

void CynosdbClient::SetRenewFlagAsync(const SetRenewFlagRequest& request, const SetRenewFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SetRenewFlagRequest&;
    using Resp = SetRenewFlagResponse;

    DoRequestAsync<Req, Resp>(
        "SetRenewFlag", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::SetRenewFlagOutcomeCallable CynosdbClient::SetRenewFlagCallable(const SetRenewFlagRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetRenewFlagOutcome>>();
    SetRenewFlagAsync(
    request,
    [prom](
        const CynosdbClient*,
        const SetRenewFlagRequest&,
        SetRenewFlagOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::StartCLSDeliveryOutcome CynosdbClient::StartCLSDelivery(const StartCLSDeliveryRequest &request)
{
    auto outcome = MakeRequest(request, "StartCLSDelivery");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartCLSDeliveryResponse rsp = StartCLSDeliveryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartCLSDeliveryOutcome(rsp);
        else
            return StartCLSDeliveryOutcome(o.GetError());
    }
    else
    {
        return StartCLSDeliveryOutcome(outcome.GetError());
    }
}

void CynosdbClient::StartCLSDeliveryAsync(const StartCLSDeliveryRequest& request, const StartCLSDeliveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartCLSDeliveryRequest&;
    using Resp = StartCLSDeliveryResponse;

    DoRequestAsync<Req, Resp>(
        "StartCLSDelivery", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::StartCLSDeliveryOutcomeCallable CynosdbClient::StartCLSDeliveryCallable(const StartCLSDeliveryRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartCLSDeliveryOutcome>>();
    StartCLSDeliveryAsync(
    request,
    [prom](
        const CynosdbClient*,
        const StartCLSDeliveryRequest&,
        StartCLSDeliveryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::StopCLSDeliveryOutcome CynosdbClient::StopCLSDelivery(const StopCLSDeliveryRequest &request)
{
    auto outcome = MakeRequest(request, "StopCLSDelivery");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopCLSDeliveryResponse rsp = StopCLSDeliveryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopCLSDeliveryOutcome(rsp);
        else
            return StopCLSDeliveryOutcome(o.GetError());
    }
    else
    {
        return StopCLSDeliveryOutcome(outcome.GetError());
    }
}

void CynosdbClient::StopCLSDeliveryAsync(const StopCLSDeliveryRequest& request, const StopCLSDeliveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopCLSDeliveryRequest&;
    using Resp = StopCLSDeliveryResponse;

    DoRequestAsync<Req, Resp>(
        "StopCLSDelivery", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::StopCLSDeliveryOutcomeCallable CynosdbClient::StopCLSDeliveryCallable(const StopCLSDeliveryRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopCLSDeliveryOutcome>>();
    StopCLSDeliveryAsync(
    request,
    [prom](
        const CynosdbClient*,
        const StopCLSDeliveryRequest&,
        StopCLSDeliveryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::SwitchClusterVpcOutcome CynosdbClient::SwitchClusterVpc(const SwitchClusterVpcRequest &request)
{
    auto outcome = MakeRequest(request, "SwitchClusterVpc");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SwitchClusterVpcResponse rsp = SwitchClusterVpcResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SwitchClusterVpcOutcome(rsp);
        else
            return SwitchClusterVpcOutcome(o.GetError());
    }
    else
    {
        return SwitchClusterVpcOutcome(outcome.GetError());
    }
}

void CynosdbClient::SwitchClusterVpcAsync(const SwitchClusterVpcRequest& request, const SwitchClusterVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SwitchClusterVpcRequest&;
    using Resp = SwitchClusterVpcResponse;

    DoRequestAsync<Req, Resp>(
        "SwitchClusterVpc", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::SwitchClusterVpcOutcomeCallable CynosdbClient::SwitchClusterVpcCallable(const SwitchClusterVpcRequest &request)
{
    const auto prom = std::make_shared<std::promise<SwitchClusterVpcOutcome>>();
    SwitchClusterVpcAsync(
    request,
    [prom](
        const CynosdbClient*,
        const SwitchClusterVpcRequest&,
        SwitchClusterVpcOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::SwitchClusterZoneOutcome CynosdbClient::SwitchClusterZone(const SwitchClusterZoneRequest &request)
{
    auto outcome = MakeRequest(request, "SwitchClusterZone");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SwitchClusterZoneResponse rsp = SwitchClusterZoneResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SwitchClusterZoneOutcome(rsp);
        else
            return SwitchClusterZoneOutcome(o.GetError());
    }
    else
    {
        return SwitchClusterZoneOutcome(outcome.GetError());
    }
}

void CynosdbClient::SwitchClusterZoneAsync(const SwitchClusterZoneRequest& request, const SwitchClusterZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SwitchClusterZoneRequest&;
    using Resp = SwitchClusterZoneResponse;

    DoRequestAsync<Req, Resp>(
        "SwitchClusterZone", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::SwitchClusterZoneOutcomeCallable CynosdbClient::SwitchClusterZoneCallable(const SwitchClusterZoneRequest &request)
{
    const auto prom = std::make_shared<std::promise<SwitchClusterZoneOutcome>>();
    SwitchClusterZoneAsync(
    request,
    [prom](
        const CynosdbClient*,
        const SwitchClusterZoneRequest&,
        SwitchClusterZoneOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::SwitchProxyVpcOutcome CynosdbClient::SwitchProxyVpc(const SwitchProxyVpcRequest &request)
{
    auto outcome = MakeRequest(request, "SwitchProxyVpc");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SwitchProxyVpcResponse rsp = SwitchProxyVpcResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SwitchProxyVpcOutcome(rsp);
        else
            return SwitchProxyVpcOutcome(o.GetError());
    }
    else
    {
        return SwitchProxyVpcOutcome(outcome.GetError());
    }
}

void CynosdbClient::SwitchProxyVpcAsync(const SwitchProxyVpcRequest& request, const SwitchProxyVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SwitchProxyVpcRequest&;
    using Resp = SwitchProxyVpcResponse;

    DoRequestAsync<Req, Resp>(
        "SwitchProxyVpc", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::SwitchProxyVpcOutcomeCallable CynosdbClient::SwitchProxyVpcCallable(const SwitchProxyVpcRequest &request)
{
    const auto prom = std::make_shared<std::promise<SwitchProxyVpcOutcome>>();
    SwitchProxyVpcAsync(
    request,
    [prom](
        const CynosdbClient*,
        const SwitchProxyVpcRequest&,
        SwitchProxyVpcOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::UnbindClusterResourcePackagesOutcome CynosdbClient::UnbindClusterResourcePackages(const UnbindClusterResourcePackagesRequest &request)
{
    auto outcome = MakeRequest(request, "UnbindClusterResourcePackages");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnbindClusterResourcePackagesResponse rsp = UnbindClusterResourcePackagesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnbindClusterResourcePackagesOutcome(rsp);
        else
            return UnbindClusterResourcePackagesOutcome(o.GetError());
    }
    else
    {
        return UnbindClusterResourcePackagesOutcome(outcome.GetError());
    }
}

void CynosdbClient::UnbindClusterResourcePackagesAsync(const UnbindClusterResourcePackagesRequest& request, const UnbindClusterResourcePackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UnbindClusterResourcePackagesRequest&;
    using Resp = UnbindClusterResourcePackagesResponse;

    DoRequestAsync<Req, Resp>(
        "UnbindClusterResourcePackages", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::UnbindClusterResourcePackagesOutcomeCallable CynosdbClient::UnbindClusterResourcePackagesCallable(const UnbindClusterResourcePackagesRequest &request)
{
    const auto prom = std::make_shared<std::promise<UnbindClusterResourcePackagesOutcome>>();
    UnbindClusterResourcePackagesAsync(
    request,
    [prom](
        const CynosdbClient*,
        const UnbindClusterResourcePackagesRequest&,
        UnbindClusterResourcePackagesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::UpgradeClusterVersionOutcome CynosdbClient::UpgradeClusterVersion(const UpgradeClusterVersionRequest &request)
{
    auto outcome = MakeRequest(request, "UpgradeClusterVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpgradeClusterVersionResponse rsp = UpgradeClusterVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpgradeClusterVersionOutcome(rsp);
        else
            return UpgradeClusterVersionOutcome(o.GetError());
    }
    else
    {
        return UpgradeClusterVersionOutcome(outcome.GetError());
    }
}

void CynosdbClient::UpgradeClusterVersionAsync(const UpgradeClusterVersionRequest& request, const UpgradeClusterVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpgradeClusterVersionRequest&;
    using Resp = UpgradeClusterVersionResponse;

    DoRequestAsync<Req, Resp>(
        "UpgradeClusterVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::UpgradeClusterVersionOutcomeCallable CynosdbClient::UpgradeClusterVersionCallable(const UpgradeClusterVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpgradeClusterVersionOutcome>>();
    UpgradeClusterVersionAsync(
    request,
    [prom](
        const CynosdbClient*,
        const UpgradeClusterVersionRequest&,
        UpgradeClusterVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::UpgradeInstanceOutcome CynosdbClient::UpgradeInstance(const UpgradeInstanceRequest &request)
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

void CynosdbClient::UpgradeInstanceAsync(const UpgradeInstanceRequest& request, const UpgradeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CynosdbClient::UpgradeInstanceOutcomeCallable CynosdbClient::UpgradeInstanceCallable(const UpgradeInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpgradeInstanceOutcome>>();
    UpgradeInstanceAsync(
    request,
    [prom](
        const CynosdbClient*,
        const UpgradeInstanceRequest&,
        UpgradeInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::UpgradeProxyOutcome CynosdbClient::UpgradeProxy(const UpgradeProxyRequest &request)
{
    auto outcome = MakeRequest(request, "UpgradeProxy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpgradeProxyResponse rsp = UpgradeProxyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpgradeProxyOutcome(rsp);
        else
            return UpgradeProxyOutcome(o.GetError());
    }
    else
    {
        return UpgradeProxyOutcome(outcome.GetError());
    }
}

void CynosdbClient::UpgradeProxyAsync(const UpgradeProxyRequest& request, const UpgradeProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpgradeProxyRequest&;
    using Resp = UpgradeProxyResponse;

    DoRequestAsync<Req, Resp>(
        "UpgradeProxy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::UpgradeProxyOutcomeCallable CynosdbClient::UpgradeProxyCallable(const UpgradeProxyRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpgradeProxyOutcome>>();
    UpgradeProxyAsync(
    request,
    [prom](
        const CynosdbClient*,
        const UpgradeProxyRequest&,
        UpgradeProxyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CynosdbClient::UpgradeProxyVersionOutcome CynosdbClient::UpgradeProxyVersion(const UpgradeProxyVersionRequest &request)
{
    auto outcome = MakeRequest(request, "UpgradeProxyVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpgradeProxyVersionResponse rsp = UpgradeProxyVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpgradeProxyVersionOutcome(rsp);
        else
            return UpgradeProxyVersionOutcome(o.GetError());
    }
    else
    {
        return UpgradeProxyVersionOutcome(outcome.GetError());
    }
}

void CynosdbClient::UpgradeProxyVersionAsync(const UpgradeProxyVersionRequest& request, const UpgradeProxyVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpgradeProxyVersionRequest&;
    using Resp = UpgradeProxyVersionResponse;

    DoRequestAsync<Req, Resp>(
        "UpgradeProxyVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CynosdbClient::UpgradeProxyVersionOutcomeCallable CynosdbClient::UpgradeProxyVersionCallable(const UpgradeProxyVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpgradeProxyVersionOutcome>>();
    UpgradeProxyVersionAsync(
    request,
    [prom](
        const CynosdbClient*,
        const UpgradeProxyVersionRequest&,
        UpgradeProxyVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


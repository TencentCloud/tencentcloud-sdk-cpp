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

#include <tencentcloud/cfw/v20190904/CfwClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Cfw::V20190904;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-09-04";
    const string ENDPOINT = "cfw.tencentcloudapi.com";
}

CfwClient::CfwClient(const Credential &credential, const string &region) :
    CfwClient(credential, region, ClientProfile())
{
}

CfwClient::CfwClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CfwClient::AddAclRuleOutcome CfwClient::AddAclRule(const AddAclRuleRequest &request)
{
    auto outcome = MakeRequest(request, "AddAclRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddAclRuleResponse rsp = AddAclRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddAclRuleOutcome(rsp);
        else
            return AddAclRuleOutcome(o.GetError());
    }
    else
    {
        return AddAclRuleOutcome(outcome.GetError());
    }
}

void CfwClient::AddAclRuleAsync(const AddAclRuleRequest& request, const AddAclRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddAclRuleRequest&;
    using Resp = AddAclRuleResponse;

    DoRequestAsync<Req, Resp>(
        "AddAclRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::AddAclRuleOutcomeCallable CfwClient::AddAclRuleCallable(const AddAclRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddAclRuleOutcome>>();
    AddAclRuleAsync(
    request,
    [prom](
        const CfwClient*,
        const AddAclRuleRequest&,
        AddAclRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::AddEnterpriseSecurityGroupRulesOutcome CfwClient::AddEnterpriseSecurityGroupRules(const AddEnterpriseSecurityGroupRulesRequest &request)
{
    auto outcome = MakeRequest(request, "AddEnterpriseSecurityGroupRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddEnterpriseSecurityGroupRulesResponse rsp = AddEnterpriseSecurityGroupRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddEnterpriseSecurityGroupRulesOutcome(rsp);
        else
            return AddEnterpriseSecurityGroupRulesOutcome(o.GetError());
    }
    else
    {
        return AddEnterpriseSecurityGroupRulesOutcome(outcome.GetError());
    }
}

void CfwClient::AddEnterpriseSecurityGroupRulesAsync(const AddEnterpriseSecurityGroupRulesRequest& request, const AddEnterpriseSecurityGroupRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddEnterpriseSecurityGroupRulesRequest&;
    using Resp = AddEnterpriseSecurityGroupRulesResponse;

    DoRequestAsync<Req, Resp>(
        "AddEnterpriseSecurityGroupRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::AddEnterpriseSecurityGroupRulesOutcomeCallable CfwClient::AddEnterpriseSecurityGroupRulesCallable(const AddEnterpriseSecurityGroupRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddEnterpriseSecurityGroupRulesOutcome>>();
    AddEnterpriseSecurityGroupRulesAsync(
    request,
    [prom](
        const CfwClient*,
        const AddEnterpriseSecurityGroupRulesRequest&,
        AddEnterpriseSecurityGroupRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::AddNatAcRuleOutcome CfwClient::AddNatAcRule(const AddNatAcRuleRequest &request)
{
    auto outcome = MakeRequest(request, "AddNatAcRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddNatAcRuleResponse rsp = AddNatAcRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddNatAcRuleOutcome(rsp);
        else
            return AddNatAcRuleOutcome(o.GetError());
    }
    else
    {
        return AddNatAcRuleOutcome(outcome.GetError());
    }
}

void CfwClient::AddNatAcRuleAsync(const AddNatAcRuleRequest& request, const AddNatAcRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddNatAcRuleRequest&;
    using Resp = AddNatAcRuleResponse;

    DoRequestAsync<Req, Resp>(
        "AddNatAcRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::AddNatAcRuleOutcomeCallable CfwClient::AddNatAcRuleCallable(const AddNatAcRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddNatAcRuleOutcome>>();
    AddNatAcRuleAsync(
    request,
    [prom](
        const CfwClient*,
        const AddNatAcRuleRequest&,
        AddNatAcRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::AddVpcAcRuleOutcome CfwClient::AddVpcAcRule(const AddVpcAcRuleRequest &request)
{
    auto outcome = MakeRequest(request, "AddVpcAcRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddVpcAcRuleResponse rsp = AddVpcAcRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddVpcAcRuleOutcome(rsp);
        else
            return AddVpcAcRuleOutcome(o.GetError());
    }
    else
    {
        return AddVpcAcRuleOutcome(outcome.GetError());
    }
}

void CfwClient::AddVpcAcRuleAsync(const AddVpcAcRuleRequest& request, const AddVpcAcRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddVpcAcRuleRequest&;
    using Resp = AddVpcAcRuleResponse;

    DoRequestAsync<Req, Resp>(
        "AddVpcAcRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::AddVpcAcRuleOutcomeCallable CfwClient::AddVpcAcRuleCallable(const AddVpcAcRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddVpcAcRuleOutcome>>();
    AddVpcAcRuleAsync(
    request,
    [prom](
        const CfwClient*,
        const AddVpcAcRuleRequest&,
        AddVpcAcRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::CreateAcRulesOutcome CfwClient::CreateAcRules(const CreateAcRulesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAcRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAcRulesResponse rsp = CreateAcRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAcRulesOutcome(rsp);
        else
            return CreateAcRulesOutcome(o.GetError());
    }
    else
    {
        return CreateAcRulesOutcome(outcome.GetError());
    }
}

void CfwClient::CreateAcRulesAsync(const CreateAcRulesRequest& request, const CreateAcRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAcRulesRequest&;
    using Resp = CreateAcRulesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAcRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::CreateAcRulesOutcomeCallable CfwClient::CreateAcRulesCallable(const CreateAcRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAcRulesOutcome>>();
    CreateAcRulesAsync(
    request,
    [prom](
        const CfwClient*,
        const CreateAcRulesRequest&,
        CreateAcRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::CreateAddressTemplateOutcome CfwClient::CreateAddressTemplate(const CreateAddressTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAddressTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAddressTemplateResponse rsp = CreateAddressTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAddressTemplateOutcome(rsp);
        else
            return CreateAddressTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateAddressTemplateOutcome(outcome.GetError());
    }
}

void CfwClient::CreateAddressTemplateAsync(const CreateAddressTemplateRequest& request, const CreateAddressTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAddressTemplateRequest&;
    using Resp = CreateAddressTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAddressTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::CreateAddressTemplateOutcomeCallable CfwClient::CreateAddressTemplateCallable(const CreateAddressTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAddressTemplateOutcome>>();
    CreateAddressTemplateAsync(
    request,
    [prom](
        const CfwClient*,
        const CreateAddressTemplateRequest&,
        CreateAddressTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::CreateAlertCenterIsolateOutcome CfwClient::CreateAlertCenterIsolate(const CreateAlertCenterIsolateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAlertCenterIsolate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAlertCenterIsolateResponse rsp = CreateAlertCenterIsolateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAlertCenterIsolateOutcome(rsp);
        else
            return CreateAlertCenterIsolateOutcome(o.GetError());
    }
    else
    {
        return CreateAlertCenterIsolateOutcome(outcome.GetError());
    }
}

void CfwClient::CreateAlertCenterIsolateAsync(const CreateAlertCenterIsolateRequest& request, const CreateAlertCenterIsolateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAlertCenterIsolateRequest&;
    using Resp = CreateAlertCenterIsolateResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAlertCenterIsolate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::CreateAlertCenterIsolateOutcomeCallable CfwClient::CreateAlertCenterIsolateCallable(const CreateAlertCenterIsolateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAlertCenterIsolateOutcome>>();
    CreateAlertCenterIsolateAsync(
    request,
    [prom](
        const CfwClient*,
        const CreateAlertCenterIsolateRequest&,
        CreateAlertCenterIsolateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::CreateAlertCenterOmitOutcome CfwClient::CreateAlertCenterOmit(const CreateAlertCenterOmitRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAlertCenterOmit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAlertCenterOmitResponse rsp = CreateAlertCenterOmitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAlertCenterOmitOutcome(rsp);
        else
            return CreateAlertCenterOmitOutcome(o.GetError());
    }
    else
    {
        return CreateAlertCenterOmitOutcome(outcome.GetError());
    }
}

void CfwClient::CreateAlertCenterOmitAsync(const CreateAlertCenterOmitRequest& request, const CreateAlertCenterOmitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAlertCenterOmitRequest&;
    using Resp = CreateAlertCenterOmitResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAlertCenterOmit", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::CreateAlertCenterOmitOutcomeCallable CfwClient::CreateAlertCenterOmitCallable(const CreateAlertCenterOmitRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAlertCenterOmitOutcome>>();
    CreateAlertCenterOmitAsync(
    request,
    [prom](
        const CfwClient*,
        const CreateAlertCenterOmitRequest&,
        CreateAlertCenterOmitOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::CreateAlertCenterRuleOutcome CfwClient::CreateAlertCenterRule(const CreateAlertCenterRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAlertCenterRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAlertCenterRuleResponse rsp = CreateAlertCenterRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAlertCenterRuleOutcome(rsp);
        else
            return CreateAlertCenterRuleOutcome(o.GetError());
    }
    else
    {
        return CreateAlertCenterRuleOutcome(outcome.GetError());
    }
}

void CfwClient::CreateAlertCenterRuleAsync(const CreateAlertCenterRuleRequest& request, const CreateAlertCenterRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAlertCenterRuleRequest&;
    using Resp = CreateAlertCenterRuleResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAlertCenterRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::CreateAlertCenterRuleOutcomeCallable CfwClient::CreateAlertCenterRuleCallable(const CreateAlertCenterRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAlertCenterRuleOutcome>>();
    CreateAlertCenterRuleAsync(
    request,
    [prom](
        const CfwClient*,
        const CreateAlertCenterRuleRequest&,
        CreateAlertCenterRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::CreateBlockIgnoreRuleListOutcome CfwClient::CreateBlockIgnoreRuleList(const CreateBlockIgnoreRuleListRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBlockIgnoreRuleList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBlockIgnoreRuleListResponse rsp = CreateBlockIgnoreRuleListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBlockIgnoreRuleListOutcome(rsp);
        else
            return CreateBlockIgnoreRuleListOutcome(o.GetError());
    }
    else
    {
        return CreateBlockIgnoreRuleListOutcome(outcome.GetError());
    }
}

void CfwClient::CreateBlockIgnoreRuleListAsync(const CreateBlockIgnoreRuleListRequest& request, const CreateBlockIgnoreRuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateBlockIgnoreRuleListRequest&;
    using Resp = CreateBlockIgnoreRuleListResponse;

    DoRequestAsync<Req, Resp>(
        "CreateBlockIgnoreRuleList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::CreateBlockIgnoreRuleListOutcomeCallable CfwClient::CreateBlockIgnoreRuleListCallable(const CreateBlockIgnoreRuleListRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateBlockIgnoreRuleListOutcome>>();
    CreateBlockIgnoreRuleListAsync(
    request,
    [prom](
        const CfwClient*,
        const CreateBlockIgnoreRuleListRequest&,
        CreateBlockIgnoreRuleListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::CreateBlockIgnoreRuleNewOutcome CfwClient::CreateBlockIgnoreRuleNew(const CreateBlockIgnoreRuleNewRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBlockIgnoreRuleNew");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBlockIgnoreRuleNewResponse rsp = CreateBlockIgnoreRuleNewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBlockIgnoreRuleNewOutcome(rsp);
        else
            return CreateBlockIgnoreRuleNewOutcome(o.GetError());
    }
    else
    {
        return CreateBlockIgnoreRuleNewOutcome(outcome.GetError());
    }
}

void CfwClient::CreateBlockIgnoreRuleNewAsync(const CreateBlockIgnoreRuleNewRequest& request, const CreateBlockIgnoreRuleNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateBlockIgnoreRuleNewRequest&;
    using Resp = CreateBlockIgnoreRuleNewResponse;

    DoRequestAsync<Req, Resp>(
        "CreateBlockIgnoreRuleNew", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::CreateBlockIgnoreRuleNewOutcomeCallable CfwClient::CreateBlockIgnoreRuleNewCallable(const CreateBlockIgnoreRuleNewRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateBlockIgnoreRuleNewOutcome>>();
    CreateBlockIgnoreRuleNewAsync(
    request,
    [prom](
        const CfwClient*,
        const CreateBlockIgnoreRuleNewRequest&,
        CreateBlockIgnoreRuleNewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::CreateChooseVpcsOutcome CfwClient::CreateChooseVpcs(const CreateChooseVpcsRequest &request)
{
    auto outcome = MakeRequest(request, "CreateChooseVpcs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateChooseVpcsResponse rsp = CreateChooseVpcsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateChooseVpcsOutcome(rsp);
        else
            return CreateChooseVpcsOutcome(o.GetError());
    }
    else
    {
        return CreateChooseVpcsOutcome(outcome.GetError());
    }
}

void CfwClient::CreateChooseVpcsAsync(const CreateChooseVpcsRequest& request, const CreateChooseVpcsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateChooseVpcsRequest&;
    using Resp = CreateChooseVpcsResponse;

    DoRequestAsync<Req, Resp>(
        "CreateChooseVpcs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::CreateChooseVpcsOutcomeCallable CfwClient::CreateChooseVpcsCallable(const CreateChooseVpcsRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateChooseVpcsOutcome>>();
    CreateChooseVpcsAsync(
    request,
    [prom](
        const CfwClient*,
        const CreateChooseVpcsRequest&,
        CreateChooseVpcsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::CreateDatabaseWhiteListRulesOutcome CfwClient::CreateDatabaseWhiteListRules(const CreateDatabaseWhiteListRulesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDatabaseWhiteListRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDatabaseWhiteListRulesResponse rsp = CreateDatabaseWhiteListRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDatabaseWhiteListRulesOutcome(rsp);
        else
            return CreateDatabaseWhiteListRulesOutcome(o.GetError());
    }
    else
    {
        return CreateDatabaseWhiteListRulesOutcome(outcome.GetError());
    }
}

void CfwClient::CreateDatabaseWhiteListRulesAsync(const CreateDatabaseWhiteListRulesRequest& request, const CreateDatabaseWhiteListRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDatabaseWhiteListRulesRequest&;
    using Resp = CreateDatabaseWhiteListRulesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDatabaseWhiteListRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::CreateDatabaseWhiteListRulesOutcomeCallable CfwClient::CreateDatabaseWhiteListRulesCallable(const CreateDatabaseWhiteListRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDatabaseWhiteListRulesOutcome>>();
    CreateDatabaseWhiteListRulesAsync(
    request,
    [prom](
        const CfwClient*,
        const CreateDatabaseWhiteListRulesRequest&,
        CreateDatabaseWhiteListRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::CreateNatFwInstanceOutcome CfwClient::CreateNatFwInstance(const CreateNatFwInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateNatFwInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateNatFwInstanceResponse rsp = CreateNatFwInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateNatFwInstanceOutcome(rsp);
        else
            return CreateNatFwInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateNatFwInstanceOutcome(outcome.GetError());
    }
}

void CfwClient::CreateNatFwInstanceAsync(const CreateNatFwInstanceRequest& request, const CreateNatFwInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateNatFwInstanceRequest&;
    using Resp = CreateNatFwInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateNatFwInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::CreateNatFwInstanceOutcomeCallable CfwClient::CreateNatFwInstanceCallable(const CreateNatFwInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateNatFwInstanceOutcome>>();
    CreateNatFwInstanceAsync(
    request,
    [prom](
        const CfwClient*,
        const CreateNatFwInstanceRequest&,
        CreateNatFwInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::CreateNatFwInstanceWithDomainOutcome CfwClient::CreateNatFwInstanceWithDomain(const CreateNatFwInstanceWithDomainRequest &request)
{
    auto outcome = MakeRequest(request, "CreateNatFwInstanceWithDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateNatFwInstanceWithDomainResponse rsp = CreateNatFwInstanceWithDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateNatFwInstanceWithDomainOutcome(rsp);
        else
            return CreateNatFwInstanceWithDomainOutcome(o.GetError());
    }
    else
    {
        return CreateNatFwInstanceWithDomainOutcome(outcome.GetError());
    }
}

void CfwClient::CreateNatFwInstanceWithDomainAsync(const CreateNatFwInstanceWithDomainRequest& request, const CreateNatFwInstanceWithDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateNatFwInstanceWithDomainRequest&;
    using Resp = CreateNatFwInstanceWithDomainResponse;

    DoRequestAsync<Req, Resp>(
        "CreateNatFwInstanceWithDomain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::CreateNatFwInstanceWithDomainOutcomeCallable CfwClient::CreateNatFwInstanceWithDomainCallable(const CreateNatFwInstanceWithDomainRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateNatFwInstanceWithDomainOutcome>>();
    CreateNatFwInstanceWithDomainAsync(
    request,
    [prom](
        const CfwClient*,
        const CreateNatFwInstanceWithDomainRequest&,
        CreateNatFwInstanceWithDomainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::CreateSecurityGroupRulesOutcome CfwClient::CreateSecurityGroupRules(const CreateSecurityGroupRulesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSecurityGroupRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSecurityGroupRulesResponse rsp = CreateSecurityGroupRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSecurityGroupRulesOutcome(rsp);
        else
            return CreateSecurityGroupRulesOutcome(o.GetError());
    }
    else
    {
        return CreateSecurityGroupRulesOutcome(outcome.GetError());
    }
}

void CfwClient::CreateSecurityGroupRulesAsync(const CreateSecurityGroupRulesRequest& request, const CreateSecurityGroupRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSecurityGroupRulesRequest&;
    using Resp = CreateSecurityGroupRulesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSecurityGroupRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::CreateSecurityGroupRulesOutcomeCallable CfwClient::CreateSecurityGroupRulesCallable(const CreateSecurityGroupRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSecurityGroupRulesOutcome>>();
    CreateSecurityGroupRulesAsync(
    request,
    [prom](
        const CfwClient*,
        const CreateSecurityGroupRulesRequest&,
        CreateSecurityGroupRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::CreateVpcFwGroupOutcome CfwClient::CreateVpcFwGroup(const CreateVpcFwGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateVpcFwGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateVpcFwGroupResponse rsp = CreateVpcFwGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateVpcFwGroupOutcome(rsp);
        else
            return CreateVpcFwGroupOutcome(o.GetError());
    }
    else
    {
        return CreateVpcFwGroupOutcome(outcome.GetError());
    }
}

void CfwClient::CreateVpcFwGroupAsync(const CreateVpcFwGroupRequest& request, const CreateVpcFwGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateVpcFwGroupRequest&;
    using Resp = CreateVpcFwGroupResponse;

    DoRequestAsync<Req, Resp>(
        "CreateVpcFwGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::CreateVpcFwGroupOutcomeCallable CfwClient::CreateVpcFwGroupCallable(const CreateVpcFwGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateVpcFwGroupOutcome>>();
    CreateVpcFwGroupAsync(
    request,
    [prom](
        const CfwClient*,
        const CreateVpcFwGroupRequest&,
        CreateVpcFwGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::DeleteAcRuleOutcome CfwClient::DeleteAcRule(const DeleteAcRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAcRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAcRuleResponse rsp = DeleteAcRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAcRuleOutcome(rsp);
        else
            return DeleteAcRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteAcRuleOutcome(outcome.GetError());
    }
}

void CfwClient::DeleteAcRuleAsync(const DeleteAcRuleRequest& request, const DeleteAcRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAcRuleRequest&;
    using Resp = DeleteAcRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAcRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::DeleteAcRuleOutcomeCallable CfwClient::DeleteAcRuleCallable(const DeleteAcRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAcRuleOutcome>>();
    DeleteAcRuleAsync(
    request,
    [prom](
        const CfwClient*,
        const DeleteAcRuleRequest&,
        DeleteAcRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::DeleteAddressTemplateOutcome CfwClient::DeleteAddressTemplate(const DeleteAddressTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAddressTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAddressTemplateResponse rsp = DeleteAddressTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAddressTemplateOutcome(rsp);
        else
            return DeleteAddressTemplateOutcome(o.GetError());
    }
    else
    {
        return DeleteAddressTemplateOutcome(outcome.GetError());
    }
}

void CfwClient::DeleteAddressTemplateAsync(const DeleteAddressTemplateRequest& request, const DeleteAddressTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAddressTemplateRequest&;
    using Resp = DeleteAddressTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAddressTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::DeleteAddressTemplateOutcomeCallable CfwClient::DeleteAddressTemplateCallable(const DeleteAddressTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAddressTemplateOutcome>>();
    DeleteAddressTemplateAsync(
    request,
    [prom](
        const CfwClient*,
        const DeleteAddressTemplateRequest&,
        DeleteAddressTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::DeleteAllAccessControlRuleOutcome CfwClient::DeleteAllAccessControlRule(const DeleteAllAccessControlRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAllAccessControlRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAllAccessControlRuleResponse rsp = DeleteAllAccessControlRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAllAccessControlRuleOutcome(rsp);
        else
            return DeleteAllAccessControlRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteAllAccessControlRuleOutcome(outcome.GetError());
    }
}

void CfwClient::DeleteAllAccessControlRuleAsync(const DeleteAllAccessControlRuleRequest& request, const DeleteAllAccessControlRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAllAccessControlRuleRequest&;
    using Resp = DeleteAllAccessControlRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAllAccessControlRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::DeleteAllAccessControlRuleOutcomeCallable CfwClient::DeleteAllAccessControlRuleCallable(const DeleteAllAccessControlRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAllAccessControlRuleOutcome>>();
    DeleteAllAccessControlRuleAsync(
    request,
    [prom](
        const CfwClient*,
        const DeleteAllAccessControlRuleRequest&,
        DeleteAllAccessControlRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::DeleteBlockIgnoreRuleListOutcome CfwClient::DeleteBlockIgnoreRuleList(const DeleteBlockIgnoreRuleListRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteBlockIgnoreRuleList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteBlockIgnoreRuleListResponse rsp = DeleteBlockIgnoreRuleListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteBlockIgnoreRuleListOutcome(rsp);
        else
            return DeleteBlockIgnoreRuleListOutcome(o.GetError());
    }
    else
    {
        return DeleteBlockIgnoreRuleListOutcome(outcome.GetError());
    }
}

void CfwClient::DeleteBlockIgnoreRuleListAsync(const DeleteBlockIgnoreRuleListRequest& request, const DeleteBlockIgnoreRuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteBlockIgnoreRuleListRequest&;
    using Resp = DeleteBlockIgnoreRuleListResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteBlockIgnoreRuleList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::DeleteBlockIgnoreRuleListOutcomeCallable CfwClient::DeleteBlockIgnoreRuleListCallable(const DeleteBlockIgnoreRuleListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteBlockIgnoreRuleListOutcome>>();
    DeleteBlockIgnoreRuleListAsync(
    request,
    [prom](
        const CfwClient*,
        const DeleteBlockIgnoreRuleListRequest&,
        DeleteBlockIgnoreRuleListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::DeleteBlockIgnoreRuleNewOutcome CfwClient::DeleteBlockIgnoreRuleNew(const DeleteBlockIgnoreRuleNewRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteBlockIgnoreRuleNew");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteBlockIgnoreRuleNewResponse rsp = DeleteBlockIgnoreRuleNewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteBlockIgnoreRuleNewOutcome(rsp);
        else
            return DeleteBlockIgnoreRuleNewOutcome(o.GetError());
    }
    else
    {
        return DeleteBlockIgnoreRuleNewOutcome(outcome.GetError());
    }
}

void CfwClient::DeleteBlockIgnoreRuleNewAsync(const DeleteBlockIgnoreRuleNewRequest& request, const DeleteBlockIgnoreRuleNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteBlockIgnoreRuleNewRequest&;
    using Resp = DeleteBlockIgnoreRuleNewResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteBlockIgnoreRuleNew", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::DeleteBlockIgnoreRuleNewOutcomeCallable CfwClient::DeleteBlockIgnoreRuleNewCallable(const DeleteBlockIgnoreRuleNewRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteBlockIgnoreRuleNewOutcome>>();
    DeleteBlockIgnoreRuleNewAsync(
    request,
    [prom](
        const CfwClient*,
        const DeleteBlockIgnoreRuleNewRequest&,
        DeleteBlockIgnoreRuleNewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::DeleteNatFwInstanceOutcome CfwClient::DeleteNatFwInstance(const DeleteNatFwInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteNatFwInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteNatFwInstanceResponse rsp = DeleteNatFwInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteNatFwInstanceOutcome(rsp);
        else
            return DeleteNatFwInstanceOutcome(o.GetError());
    }
    else
    {
        return DeleteNatFwInstanceOutcome(outcome.GetError());
    }
}

void CfwClient::DeleteNatFwInstanceAsync(const DeleteNatFwInstanceRequest& request, const DeleteNatFwInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteNatFwInstanceRequest&;
    using Resp = DeleteNatFwInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteNatFwInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::DeleteNatFwInstanceOutcomeCallable CfwClient::DeleteNatFwInstanceCallable(const DeleteNatFwInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteNatFwInstanceOutcome>>();
    DeleteNatFwInstanceAsync(
    request,
    [prom](
        const CfwClient*,
        const DeleteNatFwInstanceRequest&,
        DeleteNatFwInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::DeleteRemoteAccessDomainOutcome CfwClient::DeleteRemoteAccessDomain(const DeleteRemoteAccessDomainRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRemoteAccessDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRemoteAccessDomainResponse rsp = DeleteRemoteAccessDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRemoteAccessDomainOutcome(rsp);
        else
            return DeleteRemoteAccessDomainOutcome(o.GetError());
    }
    else
    {
        return DeleteRemoteAccessDomainOutcome(outcome.GetError());
    }
}

void CfwClient::DeleteRemoteAccessDomainAsync(const DeleteRemoteAccessDomainRequest& request, const DeleteRemoteAccessDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteRemoteAccessDomainRequest&;
    using Resp = DeleteRemoteAccessDomainResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRemoteAccessDomain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::DeleteRemoteAccessDomainOutcomeCallable CfwClient::DeleteRemoteAccessDomainCallable(const DeleteRemoteAccessDomainRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRemoteAccessDomainOutcome>>();
    DeleteRemoteAccessDomainAsync(
    request,
    [prom](
        const CfwClient*,
        const DeleteRemoteAccessDomainRequest&,
        DeleteRemoteAccessDomainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::DeleteResourceGroupOutcome CfwClient::DeleteResourceGroup(const DeleteResourceGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteResourceGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteResourceGroupResponse rsp = DeleteResourceGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteResourceGroupOutcome(rsp);
        else
            return DeleteResourceGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteResourceGroupOutcome(outcome.GetError());
    }
}

void CfwClient::DeleteResourceGroupAsync(const DeleteResourceGroupRequest& request, const DeleteResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteResourceGroupRequest&;
    using Resp = DeleteResourceGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteResourceGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::DeleteResourceGroupOutcomeCallable CfwClient::DeleteResourceGroupCallable(const DeleteResourceGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteResourceGroupOutcome>>();
    DeleteResourceGroupAsync(
    request,
    [prom](
        const CfwClient*,
        const DeleteResourceGroupRequest&,
        DeleteResourceGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::DeleteSecurityGroupRuleOutcome CfwClient::DeleteSecurityGroupRule(const DeleteSecurityGroupRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSecurityGroupRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSecurityGroupRuleResponse rsp = DeleteSecurityGroupRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSecurityGroupRuleOutcome(rsp);
        else
            return DeleteSecurityGroupRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteSecurityGroupRuleOutcome(outcome.GetError());
    }
}

void CfwClient::DeleteSecurityGroupRuleAsync(const DeleteSecurityGroupRuleRequest& request, const DeleteSecurityGroupRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteSecurityGroupRuleRequest&;
    using Resp = DeleteSecurityGroupRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteSecurityGroupRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::DeleteSecurityGroupRuleOutcomeCallable CfwClient::DeleteSecurityGroupRuleCallable(const DeleteSecurityGroupRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteSecurityGroupRuleOutcome>>();
    DeleteSecurityGroupRuleAsync(
    request,
    [prom](
        const CfwClient*,
        const DeleteSecurityGroupRuleRequest&,
        DeleteSecurityGroupRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::DeleteVpcFwGroupOutcome CfwClient::DeleteVpcFwGroup(const DeleteVpcFwGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteVpcFwGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteVpcFwGroupResponse rsp = DeleteVpcFwGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteVpcFwGroupOutcome(rsp);
        else
            return DeleteVpcFwGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteVpcFwGroupOutcome(outcome.GetError());
    }
}

void CfwClient::DeleteVpcFwGroupAsync(const DeleteVpcFwGroupRequest& request, const DeleteVpcFwGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteVpcFwGroupRequest&;
    using Resp = DeleteVpcFwGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteVpcFwGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::DeleteVpcFwGroupOutcomeCallable CfwClient::DeleteVpcFwGroupCallable(const DeleteVpcFwGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteVpcFwGroupOutcome>>();
    DeleteVpcFwGroupAsync(
    request,
    [prom](
        const CfwClient*,
        const DeleteVpcFwGroupRequest&,
        DeleteVpcFwGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::DescribeAcListsOutcome CfwClient::DescribeAcLists(const DescribeAcListsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAcLists");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAcListsResponse rsp = DescribeAcListsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAcListsOutcome(rsp);
        else
            return DescribeAcListsOutcome(o.GetError());
    }
    else
    {
        return DescribeAcListsOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeAcListsAsync(const DescribeAcListsRequest& request, const DescribeAcListsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAcListsRequest&;
    using Resp = DescribeAcListsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAcLists", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::DescribeAcListsOutcomeCallable CfwClient::DescribeAcListsCallable(const DescribeAcListsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAcListsOutcome>>();
    DescribeAcListsAsync(
    request,
    [prom](
        const CfwClient*,
        const DescribeAcListsRequest&,
        DescribeAcListsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::DescribeAclRuleOutcome CfwClient::DescribeAclRule(const DescribeAclRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAclRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAclRuleResponse rsp = DescribeAclRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAclRuleOutcome(rsp);
        else
            return DescribeAclRuleOutcome(o.GetError());
    }
    else
    {
        return DescribeAclRuleOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeAclRuleAsync(const DescribeAclRuleRequest& request, const DescribeAclRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAclRuleRequest&;
    using Resp = DescribeAclRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAclRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::DescribeAclRuleOutcomeCallable CfwClient::DescribeAclRuleCallable(const DescribeAclRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAclRuleOutcome>>();
    DescribeAclRuleAsync(
    request,
    [prom](
        const CfwClient*,
        const DescribeAclRuleRequest&,
        DescribeAclRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::DescribeAddressTemplateListOutcome CfwClient::DescribeAddressTemplateList(const DescribeAddressTemplateListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAddressTemplateList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAddressTemplateListResponse rsp = DescribeAddressTemplateListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAddressTemplateListOutcome(rsp);
        else
            return DescribeAddressTemplateListOutcome(o.GetError());
    }
    else
    {
        return DescribeAddressTemplateListOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeAddressTemplateListAsync(const DescribeAddressTemplateListRequest& request, const DescribeAddressTemplateListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAddressTemplateListRequest&;
    using Resp = DescribeAddressTemplateListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAddressTemplateList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::DescribeAddressTemplateListOutcomeCallable CfwClient::DescribeAddressTemplateListCallable(const DescribeAddressTemplateListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAddressTemplateListOutcome>>();
    DescribeAddressTemplateListAsync(
    request,
    [prom](
        const CfwClient*,
        const DescribeAddressTemplateListRequest&,
        DescribeAddressTemplateListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::DescribeAssetSyncOutcome CfwClient::DescribeAssetSync(const DescribeAssetSyncRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetSync");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetSyncResponse rsp = DescribeAssetSyncResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetSyncOutcome(rsp);
        else
            return DescribeAssetSyncOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetSyncOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeAssetSyncAsync(const DescribeAssetSyncRequest& request, const DescribeAssetSyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetSyncRequest&;
    using Resp = DescribeAssetSyncResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetSync", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::DescribeAssetSyncOutcomeCallable CfwClient::DescribeAssetSyncCallable(const DescribeAssetSyncRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetSyncOutcome>>();
    DescribeAssetSyncAsync(
    request,
    [prom](
        const CfwClient*,
        const DescribeAssetSyncRequest&,
        DescribeAssetSyncOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::DescribeAssociatedInstanceListOutcome CfwClient::DescribeAssociatedInstanceList(const DescribeAssociatedInstanceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssociatedInstanceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssociatedInstanceListResponse rsp = DescribeAssociatedInstanceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssociatedInstanceListOutcome(rsp);
        else
            return DescribeAssociatedInstanceListOutcome(o.GetError());
    }
    else
    {
        return DescribeAssociatedInstanceListOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeAssociatedInstanceListAsync(const DescribeAssociatedInstanceListRequest& request, const DescribeAssociatedInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssociatedInstanceListRequest&;
    using Resp = DescribeAssociatedInstanceListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssociatedInstanceList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::DescribeAssociatedInstanceListOutcomeCallable CfwClient::DescribeAssociatedInstanceListCallable(const DescribeAssociatedInstanceListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssociatedInstanceListOutcome>>();
    DescribeAssociatedInstanceListAsync(
    request,
    [prom](
        const CfwClient*,
        const DescribeAssociatedInstanceListRequest&,
        DescribeAssociatedInstanceListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::DescribeBlockByIpTimesListOutcome CfwClient::DescribeBlockByIpTimesList(const DescribeBlockByIpTimesListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBlockByIpTimesList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBlockByIpTimesListResponse rsp = DescribeBlockByIpTimesListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBlockByIpTimesListOutcome(rsp);
        else
            return DescribeBlockByIpTimesListOutcome(o.GetError());
    }
    else
    {
        return DescribeBlockByIpTimesListOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeBlockByIpTimesListAsync(const DescribeBlockByIpTimesListRequest& request, const DescribeBlockByIpTimesListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBlockByIpTimesListRequest&;
    using Resp = DescribeBlockByIpTimesListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBlockByIpTimesList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::DescribeBlockByIpTimesListOutcomeCallable CfwClient::DescribeBlockByIpTimesListCallable(const DescribeBlockByIpTimesListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBlockByIpTimesListOutcome>>();
    DescribeBlockByIpTimesListAsync(
    request,
    [prom](
        const CfwClient*,
        const DescribeBlockByIpTimesListRequest&,
        DescribeBlockByIpTimesListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::DescribeBlockIgnoreListOutcome CfwClient::DescribeBlockIgnoreList(const DescribeBlockIgnoreListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBlockIgnoreList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBlockIgnoreListResponse rsp = DescribeBlockIgnoreListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBlockIgnoreListOutcome(rsp);
        else
            return DescribeBlockIgnoreListOutcome(o.GetError());
    }
    else
    {
        return DescribeBlockIgnoreListOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeBlockIgnoreListAsync(const DescribeBlockIgnoreListRequest& request, const DescribeBlockIgnoreListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBlockIgnoreListRequest&;
    using Resp = DescribeBlockIgnoreListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBlockIgnoreList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::DescribeBlockIgnoreListOutcomeCallable CfwClient::DescribeBlockIgnoreListCallable(const DescribeBlockIgnoreListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBlockIgnoreListOutcome>>();
    DescribeBlockIgnoreListAsync(
    request,
    [prom](
        const CfwClient*,
        const DescribeBlockIgnoreListRequest&,
        DescribeBlockIgnoreListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::DescribeBlockStaticListOutcome CfwClient::DescribeBlockStaticList(const DescribeBlockStaticListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBlockStaticList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBlockStaticListResponse rsp = DescribeBlockStaticListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBlockStaticListOutcome(rsp);
        else
            return DescribeBlockStaticListOutcome(o.GetError());
    }
    else
    {
        return DescribeBlockStaticListOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeBlockStaticListAsync(const DescribeBlockStaticListRequest& request, const DescribeBlockStaticListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBlockStaticListRequest&;
    using Resp = DescribeBlockStaticListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBlockStaticList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::DescribeBlockStaticListOutcomeCallable CfwClient::DescribeBlockStaticListCallable(const DescribeBlockStaticListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBlockStaticListOutcome>>();
    DescribeBlockStaticListAsync(
    request,
    [prom](
        const CfwClient*,
        const DescribeBlockStaticListRequest&,
        DescribeBlockStaticListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::DescribeCfwEipsOutcome CfwClient::DescribeCfwEips(const DescribeCfwEipsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCfwEips");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCfwEipsResponse rsp = DescribeCfwEipsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCfwEipsOutcome(rsp);
        else
            return DescribeCfwEipsOutcome(o.GetError());
    }
    else
    {
        return DescribeCfwEipsOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeCfwEipsAsync(const DescribeCfwEipsRequest& request, const DescribeCfwEipsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCfwEipsRequest&;
    using Resp = DescribeCfwEipsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCfwEips", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::DescribeCfwEipsOutcomeCallable CfwClient::DescribeCfwEipsCallable(const DescribeCfwEipsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCfwEipsOutcome>>();
    DescribeCfwEipsAsync(
    request,
    [prom](
        const CfwClient*,
        const DescribeCfwEipsRequest&,
        DescribeCfwEipsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::DescribeCfwInsStatusOutcome CfwClient::DescribeCfwInsStatus(const DescribeCfwInsStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCfwInsStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCfwInsStatusResponse rsp = DescribeCfwInsStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCfwInsStatusOutcome(rsp);
        else
            return DescribeCfwInsStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeCfwInsStatusOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeCfwInsStatusAsync(const DescribeCfwInsStatusRequest& request, const DescribeCfwInsStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCfwInsStatusRequest&;
    using Resp = DescribeCfwInsStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCfwInsStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::DescribeCfwInsStatusOutcomeCallable CfwClient::DescribeCfwInsStatusCallable(const DescribeCfwInsStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCfwInsStatusOutcome>>();
    DescribeCfwInsStatusAsync(
    request,
    [prom](
        const CfwClient*,
        const DescribeCfwInsStatusRequest&,
        DescribeCfwInsStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::DescribeDefenseSwitchOutcome CfwClient::DescribeDefenseSwitch(const DescribeDefenseSwitchRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDefenseSwitch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDefenseSwitchResponse rsp = DescribeDefenseSwitchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDefenseSwitchOutcome(rsp);
        else
            return DescribeDefenseSwitchOutcome(o.GetError());
    }
    else
    {
        return DescribeDefenseSwitchOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeDefenseSwitchAsync(const DescribeDefenseSwitchRequest& request, const DescribeDefenseSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDefenseSwitchRequest&;
    using Resp = DescribeDefenseSwitchResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDefenseSwitch", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::DescribeDefenseSwitchOutcomeCallable CfwClient::DescribeDefenseSwitchCallable(const DescribeDefenseSwitchRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDefenseSwitchOutcome>>();
    DescribeDefenseSwitchAsync(
    request,
    [prom](
        const CfwClient*,
        const DescribeDefenseSwitchRequest&,
        DescribeDefenseSwitchOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::DescribeEnterpriseSGRuleProgressOutcome CfwClient::DescribeEnterpriseSGRuleProgress(const DescribeEnterpriseSGRuleProgressRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEnterpriseSGRuleProgress");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEnterpriseSGRuleProgressResponse rsp = DescribeEnterpriseSGRuleProgressResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEnterpriseSGRuleProgressOutcome(rsp);
        else
            return DescribeEnterpriseSGRuleProgressOutcome(o.GetError());
    }
    else
    {
        return DescribeEnterpriseSGRuleProgressOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeEnterpriseSGRuleProgressAsync(const DescribeEnterpriseSGRuleProgressRequest& request, const DescribeEnterpriseSGRuleProgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEnterpriseSGRuleProgressRequest&;
    using Resp = DescribeEnterpriseSGRuleProgressResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEnterpriseSGRuleProgress", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::DescribeEnterpriseSGRuleProgressOutcomeCallable CfwClient::DescribeEnterpriseSGRuleProgressCallable(const DescribeEnterpriseSGRuleProgressRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEnterpriseSGRuleProgressOutcome>>();
    DescribeEnterpriseSGRuleProgressAsync(
    request,
    [prom](
        const CfwClient*,
        const DescribeEnterpriseSGRuleProgressRequest&,
        DescribeEnterpriseSGRuleProgressOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::DescribeEnterpriseSecurityGroupRuleOutcome CfwClient::DescribeEnterpriseSecurityGroupRule(const DescribeEnterpriseSecurityGroupRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEnterpriseSecurityGroupRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEnterpriseSecurityGroupRuleResponse rsp = DescribeEnterpriseSecurityGroupRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEnterpriseSecurityGroupRuleOutcome(rsp);
        else
            return DescribeEnterpriseSecurityGroupRuleOutcome(o.GetError());
    }
    else
    {
        return DescribeEnterpriseSecurityGroupRuleOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeEnterpriseSecurityGroupRuleAsync(const DescribeEnterpriseSecurityGroupRuleRequest& request, const DescribeEnterpriseSecurityGroupRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEnterpriseSecurityGroupRuleRequest&;
    using Resp = DescribeEnterpriseSecurityGroupRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEnterpriseSecurityGroupRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::DescribeEnterpriseSecurityGroupRuleOutcomeCallable CfwClient::DescribeEnterpriseSecurityGroupRuleCallable(const DescribeEnterpriseSecurityGroupRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEnterpriseSecurityGroupRuleOutcome>>();
    DescribeEnterpriseSecurityGroupRuleAsync(
    request,
    [prom](
        const CfwClient*,
        const DescribeEnterpriseSecurityGroupRuleRequest&,
        DescribeEnterpriseSecurityGroupRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::DescribeEnterpriseSecurityGroupRuleListOutcome CfwClient::DescribeEnterpriseSecurityGroupRuleList(const DescribeEnterpriseSecurityGroupRuleListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEnterpriseSecurityGroupRuleList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEnterpriseSecurityGroupRuleListResponse rsp = DescribeEnterpriseSecurityGroupRuleListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEnterpriseSecurityGroupRuleListOutcome(rsp);
        else
            return DescribeEnterpriseSecurityGroupRuleListOutcome(o.GetError());
    }
    else
    {
        return DescribeEnterpriseSecurityGroupRuleListOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeEnterpriseSecurityGroupRuleListAsync(const DescribeEnterpriseSecurityGroupRuleListRequest& request, const DescribeEnterpriseSecurityGroupRuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEnterpriseSecurityGroupRuleListRequest&;
    using Resp = DescribeEnterpriseSecurityGroupRuleListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEnterpriseSecurityGroupRuleList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::DescribeEnterpriseSecurityGroupRuleListOutcomeCallable CfwClient::DescribeEnterpriseSecurityGroupRuleListCallable(const DescribeEnterpriseSecurityGroupRuleListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEnterpriseSecurityGroupRuleListOutcome>>();
    DescribeEnterpriseSecurityGroupRuleListAsync(
    request,
    [prom](
        const CfwClient*,
        const DescribeEnterpriseSecurityGroupRuleListRequest&,
        DescribeEnterpriseSecurityGroupRuleListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::DescribeFwEdgeIpsOutcome CfwClient::DescribeFwEdgeIps(const DescribeFwEdgeIpsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFwEdgeIps");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFwEdgeIpsResponse rsp = DescribeFwEdgeIpsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFwEdgeIpsOutcome(rsp);
        else
            return DescribeFwEdgeIpsOutcome(o.GetError());
    }
    else
    {
        return DescribeFwEdgeIpsOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeFwEdgeIpsAsync(const DescribeFwEdgeIpsRequest& request, const DescribeFwEdgeIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFwEdgeIpsRequest&;
    using Resp = DescribeFwEdgeIpsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFwEdgeIps", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::DescribeFwEdgeIpsOutcomeCallable CfwClient::DescribeFwEdgeIpsCallable(const DescribeFwEdgeIpsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFwEdgeIpsOutcome>>();
    DescribeFwEdgeIpsAsync(
    request,
    [prom](
        const CfwClient*,
        const DescribeFwEdgeIpsRequest&,
        DescribeFwEdgeIpsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::DescribeFwGroupInstanceInfoOutcome CfwClient::DescribeFwGroupInstanceInfo(const DescribeFwGroupInstanceInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFwGroupInstanceInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFwGroupInstanceInfoResponse rsp = DescribeFwGroupInstanceInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFwGroupInstanceInfoOutcome(rsp);
        else
            return DescribeFwGroupInstanceInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeFwGroupInstanceInfoOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeFwGroupInstanceInfoAsync(const DescribeFwGroupInstanceInfoRequest& request, const DescribeFwGroupInstanceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFwGroupInstanceInfoRequest&;
    using Resp = DescribeFwGroupInstanceInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFwGroupInstanceInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::DescribeFwGroupInstanceInfoOutcomeCallable CfwClient::DescribeFwGroupInstanceInfoCallable(const DescribeFwGroupInstanceInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFwGroupInstanceInfoOutcome>>();
    DescribeFwGroupInstanceInfoAsync(
    request,
    [prom](
        const CfwClient*,
        const DescribeFwGroupInstanceInfoRequest&,
        DescribeFwGroupInstanceInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::DescribeFwSyncStatusOutcome CfwClient::DescribeFwSyncStatus(const DescribeFwSyncStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFwSyncStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFwSyncStatusResponse rsp = DescribeFwSyncStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFwSyncStatusOutcome(rsp);
        else
            return DescribeFwSyncStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeFwSyncStatusOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeFwSyncStatusAsync(const DescribeFwSyncStatusRequest& request, const DescribeFwSyncStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFwSyncStatusRequest&;
    using Resp = DescribeFwSyncStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFwSyncStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::DescribeFwSyncStatusOutcomeCallable CfwClient::DescribeFwSyncStatusCallable(const DescribeFwSyncStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFwSyncStatusOutcome>>();
    DescribeFwSyncStatusAsync(
    request,
    [prom](
        const CfwClient*,
        const DescribeFwSyncStatusRequest&,
        DescribeFwSyncStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::DescribeGuideScanInfoOutcome CfwClient::DescribeGuideScanInfo(const DescribeGuideScanInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGuideScanInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGuideScanInfoResponse rsp = DescribeGuideScanInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGuideScanInfoOutcome(rsp);
        else
            return DescribeGuideScanInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeGuideScanInfoOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeGuideScanInfoAsync(const DescribeGuideScanInfoRequest& request, const DescribeGuideScanInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeGuideScanInfoRequest&;
    using Resp = DescribeGuideScanInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGuideScanInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::DescribeGuideScanInfoOutcomeCallable CfwClient::DescribeGuideScanInfoCallable(const DescribeGuideScanInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGuideScanInfoOutcome>>();
    DescribeGuideScanInfoAsync(
    request,
    [prom](
        const CfwClient*,
        const DescribeGuideScanInfoRequest&,
        DescribeGuideScanInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::DescribeIPStatusListOutcome CfwClient::DescribeIPStatusList(const DescribeIPStatusListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIPStatusList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIPStatusListResponse rsp = DescribeIPStatusListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIPStatusListOutcome(rsp);
        else
            return DescribeIPStatusListOutcome(o.GetError());
    }
    else
    {
        return DescribeIPStatusListOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeIPStatusListAsync(const DescribeIPStatusListRequest& request, const DescribeIPStatusListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIPStatusListRequest&;
    using Resp = DescribeIPStatusListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIPStatusList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::DescribeIPStatusListOutcomeCallable CfwClient::DescribeIPStatusListCallable(const DescribeIPStatusListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIPStatusListOutcome>>();
    DescribeIPStatusListAsync(
    request,
    [prom](
        const CfwClient*,
        const DescribeIPStatusListRequest&,
        DescribeIPStatusListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::DescribeLogStorageStatisticOutcome CfwClient::DescribeLogStorageStatistic(const DescribeLogStorageStatisticRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLogStorageStatistic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLogStorageStatisticResponse rsp = DescribeLogStorageStatisticResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLogStorageStatisticOutcome(rsp);
        else
            return DescribeLogStorageStatisticOutcome(o.GetError());
    }
    else
    {
        return DescribeLogStorageStatisticOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeLogStorageStatisticAsync(const DescribeLogStorageStatisticRequest& request, const DescribeLogStorageStatisticAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLogStorageStatisticRequest&;
    using Resp = DescribeLogStorageStatisticResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLogStorageStatistic", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::DescribeLogStorageStatisticOutcomeCallable CfwClient::DescribeLogStorageStatisticCallable(const DescribeLogStorageStatisticRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLogStorageStatisticOutcome>>();
    DescribeLogStorageStatisticAsync(
    request,
    [prom](
        const CfwClient*,
        const DescribeLogStorageStatisticRequest&,
        DescribeLogStorageStatisticOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::DescribeLogsOutcome CfwClient::DescribeLogs(const DescribeLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLogsResponse rsp = DescribeLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLogsOutcome(rsp);
        else
            return DescribeLogsOutcome(o.GetError());
    }
    else
    {
        return DescribeLogsOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeLogsAsync(const DescribeLogsRequest& request, const DescribeLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLogsRequest&;
    using Resp = DescribeLogsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLogs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::DescribeLogsOutcomeCallable CfwClient::DescribeLogsCallable(const DescribeLogsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLogsOutcome>>();
    DescribeLogsAsync(
    request,
    [prom](
        const CfwClient*,
        const DescribeLogsRequest&,
        DescribeLogsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::DescribeNatAcRuleOutcome CfwClient::DescribeNatAcRule(const DescribeNatAcRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNatAcRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNatAcRuleResponse rsp = DescribeNatAcRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNatAcRuleOutcome(rsp);
        else
            return DescribeNatAcRuleOutcome(o.GetError());
    }
    else
    {
        return DescribeNatAcRuleOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeNatAcRuleAsync(const DescribeNatAcRuleRequest& request, const DescribeNatAcRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNatAcRuleRequest&;
    using Resp = DescribeNatAcRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNatAcRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::DescribeNatAcRuleOutcomeCallable CfwClient::DescribeNatAcRuleCallable(const DescribeNatAcRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNatAcRuleOutcome>>();
    DescribeNatAcRuleAsync(
    request,
    [prom](
        const CfwClient*,
        const DescribeNatAcRuleRequest&,
        DescribeNatAcRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::DescribeNatFwDnatRuleOutcome CfwClient::DescribeNatFwDnatRule(const DescribeNatFwDnatRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNatFwDnatRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNatFwDnatRuleResponse rsp = DescribeNatFwDnatRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNatFwDnatRuleOutcome(rsp);
        else
            return DescribeNatFwDnatRuleOutcome(o.GetError());
    }
    else
    {
        return DescribeNatFwDnatRuleOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeNatFwDnatRuleAsync(const DescribeNatFwDnatRuleRequest& request, const DescribeNatFwDnatRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNatFwDnatRuleRequest&;
    using Resp = DescribeNatFwDnatRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNatFwDnatRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::DescribeNatFwDnatRuleOutcomeCallable CfwClient::DescribeNatFwDnatRuleCallable(const DescribeNatFwDnatRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNatFwDnatRuleOutcome>>();
    DescribeNatFwDnatRuleAsync(
    request,
    [prom](
        const CfwClient*,
        const DescribeNatFwDnatRuleRequest&,
        DescribeNatFwDnatRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::DescribeNatFwInfoCountOutcome CfwClient::DescribeNatFwInfoCount(const DescribeNatFwInfoCountRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNatFwInfoCount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNatFwInfoCountResponse rsp = DescribeNatFwInfoCountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNatFwInfoCountOutcome(rsp);
        else
            return DescribeNatFwInfoCountOutcome(o.GetError());
    }
    else
    {
        return DescribeNatFwInfoCountOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeNatFwInfoCountAsync(const DescribeNatFwInfoCountRequest& request, const DescribeNatFwInfoCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNatFwInfoCountRequest&;
    using Resp = DescribeNatFwInfoCountResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNatFwInfoCount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::DescribeNatFwInfoCountOutcomeCallable CfwClient::DescribeNatFwInfoCountCallable(const DescribeNatFwInfoCountRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNatFwInfoCountOutcome>>();
    DescribeNatFwInfoCountAsync(
    request,
    [prom](
        const CfwClient*,
        const DescribeNatFwInfoCountRequest&,
        DescribeNatFwInfoCountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::DescribeNatFwInstanceOutcome CfwClient::DescribeNatFwInstance(const DescribeNatFwInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNatFwInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNatFwInstanceResponse rsp = DescribeNatFwInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNatFwInstanceOutcome(rsp);
        else
            return DescribeNatFwInstanceOutcome(o.GetError());
    }
    else
    {
        return DescribeNatFwInstanceOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeNatFwInstanceAsync(const DescribeNatFwInstanceRequest& request, const DescribeNatFwInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNatFwInstanceRequest&;
    using Resp = DescribeNatFwInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNatFwInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::DescribeNatFwInstanceOutcomeCallable CfwClient::DescribeNatFwInstanceCallable(const DescribeNatFwInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNatFwInstanceOutcome>>();
    DescribeNatFwInstanceAsync(
    request,
    [prom](
        const CfwClient*,
        const DescribeNatFwInstanceRequest&,
        DescribeNatFwInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::DescribeNatFwInstanceWithRegionOutcome CfwClient::DescribeNatFwInstanceWithRegion(const DescribeNatFwInstanceWithRegionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNatFwInstanceWithRegion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNatFwInstanceWithRegionResponse rsp = DescribeNatFwInstanceWithRegionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNatFwInstanceWithRegionOutcome(rsp);
        else
            return DescribeNatFwInstanceWithRegionOutcome(o.GetError());
    }
    else
    {
        return DescribeNatFwInstanceWithRegionOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeNatFwInstanceWithRegionAsync(const DescribeNatFwInstanceWithRegionRequest& request, const DescribeNatFwInstanceWithRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNatFwInstanceWithRegionRequest&;
    using Resp = DescribeNatFwInstanceWithRegionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNatFwInstanceWithRegion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::DescribeNatFwInstanceWithRegionOutcomeCallable CfwClient::DescribeNatFwInstanceWithRegionCallable(const DescribeNatFwInstanceWithRegionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNatFwInstanceWithRegionOutcome>>();
    DescribeNatFwInstanceWithRegionAsync(
    request,
    [prom](
        const CfwClient*,
        const DescribeNatFwInstanceWithRegionRequest&,
        DescribeNatFwInstanceWithRegionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::DescribeNatFwInstancesInfoOutcome CfwClient::DescribeNatFwInstancesInfo(const DescribeNatFwInstancesInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNatFwInstancesInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNatFwInstancesInfoResponse rsp = DescribeNatFwInstancesInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNatFwInstancesInfoOutcome(rsp);
        else
            return DescribeNatFwInstancesInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeNatFwInstancesInfoOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeNatFwInstancesInfoAsync(const DescribeNatFwInstancesInfoRequest& request, const DescribeNatFwInstancesInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNatFwInstancesInfoRequest&;
    using Resp = DescribeNatFwInstancesInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNatFwInstancesInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::DescribeNatFwInstancesInfoOutcomeCallable CfwClient::DescribeNatFwInstancesInfoCallable(const DescribeNatFwInstancesInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNatFwInstancesInfoOutcome>>();
    DescribeNatFwInstancesInfoAsync(
    request,
    [prom](
        const CfwClient*,
        const DescribeNatFwInstancesInfoRequest&,
        DescribeNatFwInstancesInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::DescribeNatFwVpcDnsLstOutcome CfwClient::DescribeNatFwVpcDnsLst(const DescribeNatFwVpcDnsLstRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNatFwVpcDnsLst");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNatFwVpcDnsLstResponse rsp = DescribeNatFwVpcDnsLstResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNatFwVpcDnsLstOutcome(rsp);
        else
            return DescribeNatFwVpcDnsLstOutcome(o.GetError());
    }
    else
    {
        return DescribeNatFwVpcDnsLstOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeNatFwVpcDnsLstAsync(const DescribeNatFwVpcDnsLstRequest& request, const DescribeNatFwVpcDnsLstAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNatFwVpcDnsLstRequest&;
    using Resp = DescribeNatFwVpcDnsLstResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNatFwVpcDnsLst", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::DescribeNatFwVpcDnsLstOutcomeCallable CfwClient::DescribeNatFwVpcDnsLstCallable(const DescribeNatFwVpcDnsLstRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNatFwVpcDnsLstOutcome>>();
    DescribeNatFwVpcDnsLstAsync(
    request,
    [prom](
        const CfwClient*,
        const DescribeNatFwVpcDnsLstRequest&,
        DescribeNatFwVpcDnsLstOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::DescribeResourceGroupOutcome CfwClient::DescribeResourceGroup(const DescribeResourceGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResourceGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResourceGroupResponse rsp = DescribeResourceGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResourceGroupOutcome(rsp);
        else
            return DescribeResourceGroupOutcome(o.GetError());
    }
    else
    {
        return DescribeResourceGroupOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeResourceGroupAsync(const DescribeResourceGroupRequest& request, const DescribeResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeResourceGroupRequest&;
    using Resp = DescribeResourceGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeResourceGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::DescribeResourceGroupOutcomeCallable CfwClient::DescribeResourceGroupCallable(const DescribeResourceGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeResourceGroupOutcome>>();
    DescribeResourceGroupAsync(
    request,
    [prom](
        const CfwClient*,
        const DescribeResourceGroupRequest&,
        DescribeResourceGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::DescribeResourceGroupNewOutcome CfwClient::DescribeResourceGroupNew(const DescribeResourceGroupNewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResourceGroupNew");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResourceGroupNewResponse rsp = DescribeResourceGroupNewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResourceGroupNewOutcome(rsp);
        else
            return DescribeResourceGroupNewOutcome(o.GetError());
    }
    else
    {
        return DescribeResourceGroupNewOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeResourceGroupNewAsync(const DescribeResourceGroupNewRequest& request, const DescribeResourceGroupNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeResourceGroupNewRequest&;
    using Resp = DescribeResourceGroupNewResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeResourceGroupNew", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::DescribeResourceGroupNewOutcomeCallable CfwClient::DescribeResourceGroupNewCallable(const DescribeResourceGroupNewRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeResourceGroupNewOutcome>>();
    DescribeResourceGroupNewAsync(
    request,
    [prom](
        const CfwClient*,
        const DescribeResourceGroupNewRequest&,
        DescribeResourceGroupNewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::DescribeRuleOverviewOutcome CfwClient::DescribeRuleOverview(const DescribeRuleOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRuleOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRuleOverviewResponse rsp = DescribeRuleOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRuleOverviewOutcome(rsp);
        else
            return DescribeRuleOverviewOutcome(o.GetError());
    }
    else
    {
        return DescribeRuleOverviewOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeRuleOverviewAsync(const DescribeRuleOverviewRequest& request, const DescribeRuleOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRuleOverviewRequest&;
    using Resp = DescribeRuleOverviewResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRuleOverview", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::DescribeRuleOverviewOutcomeCallable CfwClient::DescribeRuleOverviewCallable(const DescribeRuleOverviewRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRuleOverviewOutcome>>();
    DescribeRuleOverviewAsync(
    request,
    [prom](
        const CfwClient*,
        const DescribeRuleOverviewRequest&,
        DescribeRuleOverviewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::DescribeSecurityGroupListOutcome CfwClient::DescribeSecurityGroupList(const DescribeSecurityGroupListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecurityGroupList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecurityGroupListResponse rsp = DescribeSecurityGroupListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecurityGroupListOutcome(rsp);
        else
            return DescribeSecurityGroupListOutcome(o.GetError());
    }
    else
    {
        return DescribeSecurityGroupListOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeSecurityGroupListAsync(const DescribeSecurityGroupListRequest& request, const DescribeSecurityGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSecurityGroupListRequest&;
    using Resp = DescribeSecurityGroupListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSecurityGroupList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::DescribeSecurityGroupListOutcomeCallable CfwClient::DescribeSecurityGroupListCallable(const DescribeSecurityGroupListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSecurityGroupListOutcome>>();
    DescribeSecurityGroupListAsync(
    request,
    [prom](
        const CfwClient*,
        const DescribeSecurityGroupListRequest&,
        DescribeSecurityGroupListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::DescribeSourceAssetOutcome CfwClient::DescribeSourceAsset(const DescribeSourceAssetRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSourceAsset");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSourceAssetResponse rsp = DescribeSourceAssetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSourceAssetOutcome(rsp);
        else
            return DescribeSourceAssetOutcome(o.GetError());
    }
    else
    {
        return DescribeSourceAssetOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeSourceAssetAsync(const DescribeSourceAssetRequest& request, const DescribeSourceAssetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSourceAssetRequest&;
    using Resp = DescribeSourceAssetResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSourceAsset", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::DescribeSourceAssetOutcomeCallable CfwClient::DescribeSourceAssetCallable(const DescribeSourceAssetRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSourceAssetOutcome>>();
    DescribeSourceAssetAsync(
    request,
    [prom](
        const CfwClient*,
        const DescribeSourceAssetRequest&,
        DescribeSourceAssetOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::DescribeSwitchListsOutcome CfwClient::DescribeSwitchLists(const DescribeSwitchListsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSwitchLists");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSwitchListsResponse rsp = DescribeSwitchListsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSwitchListsOutcome(rsp);
        else
            return DescribeSwitchListsOutcome(o.GetError());
    }
    else
    {
        return DescribeSwitchListsOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeSwitchListsAsync(const DescribeSwitchListsRequest& request, const DescribeSwitchListsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSwitchListsRequest&;
    using Resp = DescribeSwitchListsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSwitchLists", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::DescribeSwitchListsOutcomeCallable CfwClient::DescribeSwitchListsCallable(const DescribeSwitchListsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSwitchListsOutcome>>();
    DescribeSwitchListsAsync(
    request,
    [prom](
        const CfwClient*,
        const DescribeSwitchListsRequest&,
        DescribeSwitchListsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::DescribeTLogInfoOutcome CfwClient::DescribeTLogInfo(const DescribeTLogInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTLogInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTLogInfoResponse rsp = DescribeTLogInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTLogInfoOutcome(rsp);
        else
            return DescribeTLogInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeTLogInfoOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeTLogInfoAsync(const DescribeTLogInfoRequest& request, const DescribeTLogInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTLogInfoRequest&;
    using Resp = DescribeTLogInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTLogInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::DescribeTLogInfoOutcomeCallable CfwClient::DescribeTLogInfoCallable(const DescribeTLogInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTLogInfoOutcome>>();
    DescribeTLogInfoAsync(
    request,
    [prom](
        const CfwClient*,
        const DescribeTLogInfoRequest&,
        DescribeTLogInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::DescribeTLogIpListOutcome CfwClient::DescribeTLogIpList(const DescribeTLogIpListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTLogIpList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTLogIpListResponse rsp = DescribeTLogIpListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTLogIpListOutcome(rsp);
        else
            return DescribeTLogIpListOutcome(o.GetError());
    }
    else
    {
        return DescribeTLogIpListOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeTLogIpListAsync(const DescribeTLogIpListRequest& request, const DescribeTLogIpListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTLogIpListRequest&;
    using Resp = DescribeTLogIpListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTLogIpList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::DescribeTLogIpListOutcomeCallable CfwClient::DescribeTLogIpListCallable(const DescribeTLogIpListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTLogIpListOutcome>>();
    DescribeTLogIpListAsync(
    request,
    [prom](
        const CfwClient*,
        const DescribeTLogIpListRequest&,
        DescribeTLogIpListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::DescribeTableStatusOutcome CfwClient::DescribeTableStatus(const DescribeTableStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTableStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTableStatusResponse rsp = DescribeTableStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTableStatusOutcome(rsp);
        else
            return DescribeTableStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeTableStatusOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeTableStatusAsync(const DescribeTableStatusRequest& request, const DescribeTableStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTableStatusRequest&;
    using Resp = DescribeTableStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTableStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::DescribeTableStatusOutcomeCallable CfwClient::DescribeTableStatusCallable(const DescribeTableStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTableStatusOutcome>>();
    DescribeTableStatusAsync(
    request,
    [prom](
        const CfwClient*,
        const DescribeTableStatusRequest&,
        DescribeTableStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::DescribeUnHandleEventTabListOutcome CfwClient::DescribeUnHandleEventTabList(const DescribeUnHandleEventTabListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUnHandleEventTabList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUnHandleEventTabListResponse rsp = DescribeUnHandleEventTabListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUnHandleEventTabListOutcome(rsp);
        else
            return DescribeUnHandleEventTabListOutcome(o.GetError());
    }
    else
    {
        return DescribeUnHandleEventTabListOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeUnHandleEventTabListAsync(const DescribeUnHandleEventTabListRequest& request, const DescribeUnHandleEventTabListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUnHandleEventTabListRequest&;
    using Resp = DescribeUnHandleEventTabListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUnHandleEventTabList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::DescribeUnHandleEventTabListOutcomeCallable CfwClient::DescribeUnHandleEventTabListCallable(const DescribeUnHandleEventTabListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUnHandleEventTabListOutcome>>();
    DescribeUnHandleEventTabListAsync(
    request,
    [prom](
        const CfwClient*,
        const DescribeUnHandleEventTabListRequest&,
        DescribeUnHandleEventTabListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::DescribeVpcAcRuleOutcome CfwClient::DescribeVpcAcRule(const DescribeVpcAcRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVpcAcRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVpcAcRuleResponse rsp = DescribeVpcAcRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVpcAcRuleOutcome(rsp);
        else
            return DescribeVpcAcRuleOutcome(o.GetError());
    }
    else
    {
        return DescribeVpcAcRuleOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeVpcAcRuleAsync(const DescribeVpcAcRuleRequest& request, const DescribeVpcAcRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVpcAcRuleRequest&;
    using Resp = DescribeVpcAcRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVpcAcRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::DescribeVpcAcRuleOutcomeCallable CfwClient::DescribeVpcAcRuleCallable(const DescribeVpcAcRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVpcAcRuleOutcome>>();
    DescribeVpcAcRuleAsync(
    request,
    [prom](
        const CfwClient*,
        const DescribeVpcAcRuleRequest&,
        DescribeVpcAcRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::DescribeVpcFwGroupSwitchOutcome CfwClient::DescribeVpcFwGroupSwitch(const DescribeVpcFwGroupSwitchRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVpcFwGroupSwitch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVpcFwGroupSwitchResponse rsp = DescribeVpcFwGroupSwitchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVpcFwGroupSwitchOutcome(rsp);
        else
            return DescribeVpcFwGroupSwitchOutcome(o.GetError());
    }
    else
    {
        return DescribeVpcFwGroupSwitchOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeVpcFwGroupSwitchAsync(const DescribeVpcFwGroupSwitchRequest& request, const DescribeVpcFwGroupSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVpcFwGroupSwitchRequest&;
    using Resp = DescribeVpcFwGroupSwitchResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVpcFwGroupSwitch", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::DescribeVpcFwGroupSwitchOutcomeCallable CfwClient::DescribeVpcFwGroupSwitchCallable(const DescribeVpcFwGroupSwitchRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVpcFwGroupSwitchOutcome>>();
    DescribeVpcFwGroupSwitchAsync(
    request,
    [prom](
        const CfwClient*,
        const DescribeVpcFwGroupSwitchRequest&,
        DescribeVpcFwGroupSwitchOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::ExpandCfwVerticalOutcome CfwClient::ExpandCfwVertical(const ExpandCfwVerticalRequest &request)
{
    auto outcome = MakeRequest(request, "ExpandCfwVertical");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExpandCfwVerticalResponse rsp = ExpandCfwVerticalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExpandCfwVerticalOutcome(rsp);
        else
            return ExpandCfwVerticalOutcome(o.GetError());
    }
    else
    {
        return ExpandCfwVerticalOutcome(outcome.GetError());
    }
}

void CfwClient::ExpandCfwVerticalAsync(const ExpandCfwVerticalRequest& request, const ExpandCfwVerticalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExpandCfwVerticalRequest&;
    using Resp = ExpandCfwVerticalResponse;

    DoRequestAsync<Req, Resp>(
        "ExpandCfwVertical", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::ExpandCfwVerticalOutcomeCallable CfwClient::ExpandCfwVerticalCallable(const ExpandCfwVerticalRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExpandCfwVerticalOutcome>>();
    ExpandCfwVerticalAsync(
    request,
    [prom](
        const CfwClient*,
        const ExpandCfwVerticalRequest&,
        ExpandCfwVerticalOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::ModifyAcRuleOutcome CfwClient::ModifyAcRule(const ModifyAcRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAcRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAcRuleResponse rsp = ModifyAcRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAcRuleOutcome(rsp);
        else
            return ModifyAcRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyAcRuleOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyAcRuleAsync(const ModifyAcRuleRequest& request, const ModifyAcRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAcRuleRequest&;
    using Resp = ModifyAcRuleResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAcRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::ModifyAcRuleOutcomeCallable CfwClient::ModifyAcRuleCallable(const ModifyAcRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAcRuleOutcome>>();
    ModifyAcRuleAsync(
    request,
    [prom](
        const CfwClient*,
        const ModifyAcRuleRequest&,
        ModifyAcRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::ModifyAclRuleOutcome CfwClient::ModifyAclRule(const ModifyAclRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAclRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAclRuleResponse rsp = ModifyAclRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAclRuleOutcome(rsp);
        else
            return ModifyAclRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyAclRuleOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyAclRuleAsync(const ModifyAclRuleRequest& request, const ModifyAclRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAclRuleRequest&;
    using Resp = ModifyAclRuleResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAclRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::ModifyAclRuleOutcomeCallable CfwClient::ModifyAclRuleCallable(const ModifyAclRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAclRuleOutcome>>();
    ModifyAclRuleAsync(
    request,
    [prom](
        const CfwClient*,
        const ModifyAclRuleRequest&,
        ModifyAclRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::ModifyAddressTemplateOutcome CfwClient::ModifyAddressTemplate(const ModifyAddressTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAddressTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAddressTemplateResponse rsp = ModifyAddressTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAddressTemplateOutcome(rsp);
        else
            return ModifyAddressTemplateOutcome(o.GetError());
    }
    else
    {
        return ModifyAddressTemplateOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyAddressTemplateAsync(const ModifyAddressTemplateRequest& request, const ModifyAddressTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAddressTemplateRequest&;
    using Resp = ModifyAddressTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAddressTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::ModifyAddressTemplateOutcomeCallable CfwClient::ModifyAddressTemplateCallable(const ModifyAddressTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAddressTemplateOutcome>>();
    ModifyAddressTemplateAsync(
    request,
    [prom](
        const CfwClient*,
        const ModifyAddressTemplateRequest&,
        ModifyAddressTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::ModifyAllPublicIPSwitchStatusOutcome CfwClient::ModifyAllPublicIPSwitchStatus(const ModifyAllPublicIPSwitchStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAllPublicIPSwitchStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAllPublicIPSwitchStatusResponse rsp = ModifyAllPublicIPSwitchStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAllPublicIPSwitchStatusOutcome(rsp);
        else
            return ModifyAllPublicIPSwitchStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyAllPublicIPSwitchStatusOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyAllPublicIPSwitchStatusAsync(const ModifyAllPublicIPSwitchStatusRequest& request, const ModifyAllPublicIPSwitchStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAllPublicIPSwitchStatusRequest&;
    using Resp = ModifyAllPublicIPSwitchStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAllPublicIPSwitchStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::ModifyAllPublicIPSwitchStatusOutcomeCallable CfwClient::ModifyAllPublicIPSwitchStatusCallable(const ModifyAllPublicIPSwitchStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAllPublicIPSwitchStatusOutcome>>();
    ModifyAllPublicIPSwitchStatusAsync(
    request,
    [prom](
        const CfwClient*,
        const ModifyAllPublicIPSwitchStatusRequest&,
        ModifyAllPublicIPSwitchStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::ModifyAllRuleStatusOutcome CfwClient::ModifyAllRuleStatus(const ModifyAllRuleStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAllRuleStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAllRuleStatusResponse rsp = ModifyAllRuleStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAllRuleStatusOutcome(rsp);
        else
            return ModifyAllRuleStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyAllRuleStatusOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyAllRuleStatusAsync(const ModifyAllRuleStatusRequest& request, const ModifyAllRuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAllRuleStatusRequest&;
    using Resp = ModifyAllRuleStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAllRuleStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::ModifyAllRuleStatusOutcomeCallable CfwClient::ModifyAllRuleStatusCallable(const ModifyAllRuleStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAllRuleStatusOutcome>>();
    ModifyAllRuleStatusAsync(
    request,
    [prom](
        const CfwClient*,
        const ModifyAllRuleStatusRequest&,
        ModifyAllRuleStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::ModifyAssetScanOutcome CfwClient::ModifyAssetScan(const ModifyAssetScanRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAssetScan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAssetScanResponse rsp = ModifyAssetScanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAssetScanOutcome(rsp);
        else
            return ModifyAssetScanOutcome(o.GetError());
    }
    else
    {
        return ModifyAssetScanOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyAssetScanAsync(const ModifyAssetScanRequest& request, const ModifyAssetScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAssetScanRequest&;
    using Resp = ModifyAssetScanResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAssetScan", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::ModifyAssetScanOutcomeCallable CfwClient::ModifyAssetScanCallable(const ModifyAssetScanRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAssetScanOutcome>>();
    ModifyAssetScanAsync(
    request,
    [prom](
        const CfwClient*,
        const ModifyAssetScanRequest&,
        ModifyAssetScanOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::ModifyAssetSyncOutcome CfwClient::ModifyAssetSync(const ModifyAssetSyncRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAssetSync");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAssetSyncResponse rsp = ModifyAssetSyncResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAssetSyncOutcome(rsp);
        else
            return ModifyAssetSyncOutcome(o.GetError());
    }
    else
    {
        return ModifyAssetSyncOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyAssetSyncAsync(const ModifyAssetSyncRequest& request, const ModifyAssetSyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAssetSyncRequest&;
    using Resp = ModifyAssetSyncResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAssetSync", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::ModifyAssetSyncOutcomeCallable CfwClient::ModifyAssetSyncCallable(const ModifyAssetSyncRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAssetSyncOutcome>>();
    ModifyAssetSyncAsync(
    request,
    [prom](
        const CfwClient*,
        const ModifyAssetSyncRequest&,
        ModifyAssetSyncOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::ModifyBlockIgnoreListOutcome CfwClient::ModifyBlockIgnoreList(const ModifyBlockIgnoreListRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBlockIgnoreList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBlockIgnoreListResponse rsp = ModifyBlockIgnoreListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBlockIgnoreListOutcome(rsp);
        else
            return ModifyBlockIgnoreListOutcome(o.GetError());
    }
    else
    {
        return ModifyBlockIgnoreListOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyBlockIgnoreListAsync(const ModifyBlockIgnoreListRequest& request, const ModifyBlockIgnoreListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyBlockIgnoreListRequest&;
    using Resp = ModifyBlockIgnoreListResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyBlockIgnoreList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::ModifyBlockIgnoreListOutcomeCallable CfwClient::ModifyBlockIgnoreListCallable(const ModifyBlockIgnoreListRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyBlockIgnoreListOutcome>>();
    ModifyBlockIgnoreListAsync(
    request,
    [prom](
        const CfwClient*,
        const ModifyBlockIgnoreListRequest&,
        ModifyBlockIgnoreListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::ModifyBlockIgnoreRuleOutcome CfwClient::ModifyBlockIgnoreRule(const ModifyBlockIgnoreRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBlockIgnoreRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBlockIgnoreRuleResponse rsp = ModifyBlockIgnoreRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBlockIgnoreRuleOutcome(rsp);
        else
            return ModifyBlockIgnoreRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyBlockIgnoreRuleOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyBlockIgnoreRuleAsync(const ModifyBlockIgnoreRuleRequest& request, const ModifyBlockIgnoreRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyBlockIgnoreRuleRequest&;
    using Resp = ModifyBlockIgnoreRuleResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyBlockIgnoreRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::ModifyBlockIgnoreRuleOutcomeCallable CfwClient::ModifyBlockIgnoreRuleCallable(const ModifyBlockIgnoreRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyBlockIgnoreRuleOutcome>>();
    ModifyBlockIgnoreRuleAsync(
    request,
    [prom](
        const CfwClient*,
        const ModifyBlockIgnoreRuleRequest&,
        ModifyBlockIgnoreRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::ModifyBlockIgnoreRuleNewOutcome CfwClient::ModifyBlockIgnoreRuleNew(const ModifyBlockIgnoreRuleNewRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBlockIgnoreRuleNew");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBlockIgnoreRuleNewResponse rsp = ModifyBlockIgnoreRuleNewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBlockIgnoreRuleNewOutcome(rsp);
        else
            return ModifyBlockIgnoreRuleNewOutcome(o.GetError());
    }
    else
    {
        return ModifyBlockIgnoreRuleNewOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyBlockIgnoreRuleNewAsync(const ModifyBlockIgnoreRuleNewRequest& request, const ModifyBlockIgnoreRuleNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyBlockIgnoreRuleNewRequest&;
    using Resp = ModifyBlockIgnoreRuleNewResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyBlockIgnoreRuleNew", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::ModifyBlockIgnoreRuleNewOutcomeCallable CfwClient::ModifyBlockIgnoreRuleNewCallable(const ModifyBlockIgnoreRuleNewRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyBlockIgnoreRuleNewOutcome>>();
    ModifyBlockIgnoreRuleNewAsync(
    request,
    [prom](
        const CfwClient*,
        const ModifyBlockIgnoreRuleNewRequest&,
        ModifyBlockIgnoreRuleNewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::ModifyBlockTopOutcome CfwClient::ModifyBlockTop(const ModifyBlockTopRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBlockTop");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBlockTopResponse rsp = ModifyBlockTopResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBlockTopOutcome(rsp);
        else
            return ModifyBlockTopOutcome(o.GetError());
    }
    else
    {
        return ModifyBlockTopOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyBlockTopAsync(const ModifyBlockTopRequest& request, const ModifyBlockTopAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyBlockTopRequest&;
    using Resp = ModifyBlockTopResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyBlockTop", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::ModifyBlockTopOutcomeCallable CfwClient::ModifyBlockTopCallable(const ModifyBlockTopRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyBlockTopOutcome>>();
    ModifyBlockTopAsync(
    request,
    [prom](
        const CfwClient*,
        const ModifyBlockTopRequest&,
        ModifyBlockTopOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::ModifyEWRuleStatusOutcome CfwClient::ModifyEWRuleStatus(const ModifyEWRuleStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyEWRuleStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyEWRuleStatusResponse rsp = ModifyEWRuleStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyEWRuleStatusOutcome(rsp);
        else
            return ModifyEWRuleStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyEWRuleStatusOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyEWRuleStatusAsync(const ModifyEWRuleStatusRequest& request, const ModifyEWRuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyEWRuleStatusRequest&;
    using Resp = ModifyEWRuleStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyEWRuleStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::ModifyEWRuleStatusOutcomeCallable CfwClient::ModifyEWRuleStatusCallable(const ModifyEWRuleStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyEWRuleStatusOutcome>>();
    ModifyEWRuleStatusAsync(
    request,
    [prom](
        const CfwClient*,
        const ModifyEWRuleStatusRequest&,
        ModifyEWRuleStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::ModifyEdgeIpSwitchOutcome CfwClient::ModifyEdgeIpSwitch(const ModifyEdgeIpSwitchRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyEdgeIpSwitch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyEdgeIpSwitchResponse rsp = ModifyEdgeIpSwitchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyEdgeIpSwitchOutcome(rsp);
        else
            return ModifyEdgeIpSwitchOutcome(o.GetError());
    }
    else
    {
        return ModifyEdgeIpSwitchOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyEdgeIpSwitchAsync(const ModifyEdgeIpSwitchRequest& request, const ModifyEdgeIpSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyEdgeIpSwitchRequest&;
    using Resp = ModifyEdgeIpSwitchResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyEdgeIpSwitch", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::ModifyEdgeIpSwitchOutcomeCallable CfwClient::ModifyEdgeIpSwitchCallable(const ModifyEdgeIpSwitchRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyEdgeIpSwitchOutcome>>();
    ModifyEdgeIpSwitchAsync(
    request,
    [prom](
        const CfwClient*,
        const ModifyEdgeIpSwitchRequest&,
        ModifyEdgeIpSwitchOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::ModifyEnterpriseSecurityDispatchStatusOutcome CfwClient::ModifyEnterpriseSecurityDispatchStatus(const ModifyEnterpriseSecurityDispatchStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyEnterpriseSecurityDispatchStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyEnterpriseSecurityDispatchStatusResponse rsp = ModifyEnterpriseSecurityDispatchStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyEnterpriseSecurityDispatchStatusOutcome(rsp);
        else
            return ModifyEnterpriseSecurityDispatchStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyEnterpriseSecurityDispatchStatusOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyEnterpriseSecurityDispatchStatusAsync(const ModifyEnterpriseSecurityDispatchStatusRequest& request, const ModifyEnterpriseSecurityDispatchStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyEnterpriseSecurityDispatchStatusRequest&;
    using Resp = ModifyEnterpriseSecurityDispatchStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyEnterpriseSecurityDispatchStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::ModifyEnterpriseSecurityDispatchStatusOutcomeCallable CfwClient::ModifyEnterpriseSecurityDispatchStatusCallable(const ModifyEnterpriseSecurityDispatchStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyEnterpriseSecurityDispatchStatusOutcome>>();
    ModifyEnterpriseSecurityDispatchStatusAsync(
    request,
    [prom](
        const CfwClient*,
        const ModifyEnterpriseSecurityDispatchStatusRequest&,
        ModifyEnterpriseSecurityDispatchStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::ModifyEnterpriseSecurityGroupRuleOutcome CfwClient::ModifyEnterpriseSecurityGroupRule(const ModifyEnterpriseSecurityGroupRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyEnterpriseSecurityGroupRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyEnterpriseSecurityGroupRuleResponse rsp = ModifyEnterpriseSecurityGroupRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyEnterpriseSecurityGroupRuleOutcome(rsp);
        else
            return ModifyEnterpriseSecurityGroupRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyEnterpriseSecurityGroupRuleOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyEnterpriseSecurityGroupRuleAsync(const ModifyEnterpriseSecurityGroupRuleRequest& request, const ModifyEnterpriseSecurityGroupRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyEnterpriseSecurityGroupRuleRequest&;
    using Resp = ModifyEnterpriseSecurityGroupRuleResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyEnterpriseSecurityGroupRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::ModifyEnterpriseSecurityGroupRuleOutcomeCallable CfwClient::ModifyEnterpriseSecurityGroupRuleCallable(const ModifyEnterpriseSecurityGroupRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyEnterpriseSecurityGroupRuleOutcome>>();
    ModifyEnterpriseSecurityGroupRuleAsync(
    request,
    [prom](
        const CfwClient*,
        const ModifyEnterpriseSecurityGroupRuleRequest&,
        ModifyEnterpriseSecurityGroupRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::ModifyFwGroupSwitchOutcome CfwClient::ModifyFwGroupSwitch(const ModifyFwGroupSwitchRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyFwGroupSwitch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyFwGroupSwitchResponse rsp = ModifyFwGroupSwitchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyFwGroupSwitchOutcome(rsp);
        else
            return ModifyFwGroupSwitchOutcome(o.GetError());
    }
    else
    {
        return ModifyFwGroupSwitchOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyFwGroupSwitchAsync(const ModifyFwGroupSwitchRequest& request, const ModifyFwGroupSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyFwGroupSwitchRequest&;
    using Resp = ModifyFwGroupSwitchResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyFwGroupSwitch", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::ModifyFwGroupSwitchOutcomeCallable CfwClient::ModifyFwGroupSwitchCallable(const ModifyFwGroupSwitchRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyFwGroupSwitchOutcome>>();
    ModifyFwGroupSwitchAsync(
    request,
    [prom](
        const CfwClient*,
        const ModifyFwGroupSwitchRequest&,
        ModifyFwGroupSwitchOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::ModifyNatAcRuleOutcome CfwClient::ModifyNatAcRule(const ModifyNatAcRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNatAcRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNatAcRuleResponse rsp = ModifyNatAcRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNatAcRuleOutcome(rsp);
        else
            return ModifyNatAcRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyNatAcRuleOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyNatAcRuleAsync(const ModifyNatAcRuleRequest& request, const ModifyNatAcRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyNatAcRuleRequest&;
    using Resp = ModifyNatAcRuleResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyNatAcRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::ModifyNatAcRuleOutcomeCallable CfwClient::ModifyNatAcRuleCallable(const ModifyNatAcRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyNatAcRuleOutcome>>();
    ModifyNatAcRuleAsync(
    request,
    [prom](
        const CfwClient*,
        const ModifyNatAcRuleRequest&,
        ModifyNatAcRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::ModifyNatFwReSelectOutcome CfwClient::ModifyNatFwReSelect(const ModifyNatFwReSelectRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNatFwReSelect");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNatFwReSelectResponse rsp = ModifyNatFwReSelectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNatFwReSelectOutcome(rsp);
        else
            return ModifyNatFwReSelectOutcome(o.GetError());
    }
    else
    {
        return ModifyNatFwReSelectOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyNatFwReSelectAsync(const ModifyNatFwReSelectRequest& request, const ModifyNatFwReSelectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyNatFwReSelectRequest&;
    using Resp = ModifyNatFwReSelectResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyNatFwReSelect", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::ModifyNatFwReSelectOutcomeCallable CfwClient::ModifyNatFwReSelectCallable(const ModifyNatFwReSelectRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyNatFwReSelectOutcome>>();
    ModifyNatFwReSelectAsync(
    request,
    [prom](
        const CfwClient*,
        const ModifyNatFwReSelectRequest&,
        ModifyNatFwReSelectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::ModifyNatFwSwitchOutcome CfwClient::ModifyNatFwSwitch(const ModifyNatFwSwitchRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNatFwSwitch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNatFwSwitchResponse rsp = ModifyNatFwSwitchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNatFwSwitchOutcome(rsp);
        else
            return ModifyNatFwSwitchOutcome(o.GetError());
    }
    else
    {
        return ModifyNatFwSwitchOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyNatFwSwitchAsync(const ModifyNatFwSwitchRequest& request, const ModifyNatFwSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyNatFwSwitchRequest&;
    using Resp = ModifyNatFwSwitchResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyNatFwSwitch", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::ModifyNatFwSwitchOutcomeCallable CfwClient::ModifyNatFwSwitchCallable(const ModifyNatFwSwitchRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyNatFwSwitchOutcome>>();
    ModifyNatFwSwitchAsync(
    request,
    [prom](
        const CfwClient*,
        const ModifyNatFwSwitchRequest&,
        ModifyNatFwSwitchOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::ModifyNatFwVpcDnsSwitchOutcome CfwClient::ModifyNatFwVpcDnsSwitch(const ModifyNatFwVpcDnsSwitchRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNatFwVpcDnsSwitch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNatFwVpcDnsSwitchResponse rsp = ModifyNatFwVpcDnsSwitchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNatFwVpcDnsSwitchOutcome(rsp);
        else
            return ModifyNatFwVpcDnsSwitchOutcome(o.GetError());
    }
    else
    {
        return ModifyNatFwVpcDnsSwitchOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyNatFwVpcDnsSwitchAsync(const ModifyNatFwVpcDnsSwitchRequest& request, const ModifyNatFwVpcDnsSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyNatFwVpcDnsSwitchRequest&;
    using Resp = ModifyNatFwVpcDnsSwitchResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyNatFwVpcDnsSwitch", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::ModifyNatFwVpcDnsSwitchOutcomeCallable CfwClient::ModifyNatFwVpcDnsSwitchCallable(const ModifyNatFwVpcDnsSwitchRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyNatFwVpcDnsSwitchOutcome>>();
    ModifyNatFwVpcDnsSwitchAsync(
    request,
    [prom](
        const CfwClient*,
        const ModifyNatFwVpcDnsSwitchRequest&,
        ModifyNatFwVpcDnsSwitchOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::ModifyNatInstanceOutcome CfwClient::ModifyNatInstance(const ModifyNatInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNatInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNatInstanceResponse rsp = ModifyNatInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNatInstanceOutcome(rsp);
        else
            return ModifyNatInstanceOutcome(o.GetError());
    }
    else
    {
        return ModifyNatInstanceOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyNatInstanceAsync(const ModifyNatInstanceRequest& request, const ModifyNatInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyNatInstanceRequest&;
    using Resp = ModifyNatInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyNatInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::ModifyNatInstanceOutcomeCallable CfwClient::ModifyNatInstanceCallable(const ModifyNatInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyNatInstanceOutcome>>();
    ModifyNatInstanceAsync(
    request,
    [prom](
        const CfwClient*,
        const ModifyNatInstanceRequest&,
        ModifyNatInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::ModifyNatSequenceRulesOutcome CfwClient::ModifyNatSequenceRules(const ModifyNatSequenceRulesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNatSequenceRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNatSequenceRulesResponse rsp = ModifyNatSequenceRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNatSequenceRulesOutcome(rsp);
        else
            return ModifyNatSequenceRulesOutcome(o.GetError());
    }
    else
    {
        return ModifyNatSequenceRulesOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyNatSequenceRulesAsync(const ModifyNatSequenceRulesRequest& request, const ModifyNatSequenceRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyNatSequenceRulesRequest&;
    using Resp = ModifyNatSequenceRulesResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyNatSequenceRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::ModifyNatSequenceRulesOutcomeCallable CfwClient::ModifyNatSequenceRulesCallable(const ModifyNatSequenceRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyNatSequenceRulesOutcome>>();
    ModifyNatSequenceRulesAsync(
    request,
    [prom](
        const CfwClient*,
        const ModifyNatSequenceRulesRequest&,
        ModifyNatSequenceRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::ModifyResourceGroupOutcome CfwClient::ModifyResourceGroup(const ModifyResourceGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyResourceGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyResourceGroupResponse rsp = ModifyResourceGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyResourceGroupOutcome(rsp);
        else
            return ModifyResourceGroupOutcome(o.GetError());
    }
    else
    {
        return ModifyResourceGroupOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyResourceGroupAsync(const ModifyResourceGroupRequest& request, const ModifyResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyResourceGroupRequest&;
    using Resp = ModifyResourceGroupResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyResourceGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::ModifyResourceGroupOutcomeCallable CfwClient::ModifyResourceGroupCallable(const ModifyResourceGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyResourceGroupOutcome>>();
    ModifyResourceGroupAsync(
    request,
    [prom](
        const CfwClient*,
        const ModifyResourceGroupRequest&,
        ModifyResourceGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::ModifyRunSyncAssetOutcome CfwClient::ModifyRunSyncAsset(const ModifyRunSyncAssetRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRunSyncAsset");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRunSyncAssetResponse rsp = ModifyRunSyncAssetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRunSyncAssetOutcome(rsp);
        else
            return ModifyRunSyncAssetOutcome(o.GetError());
    }
    else
    {
        return ModifyRunSyncAssetOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyRunSyncAssetAsync(const ModifyRunSyncAssetRequest& request, const ModifyRunSyncAssetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyRunSyncAssetRequest&;
    using Resp = ModifyRunSyncAssetResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyRunSyncAsset", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::ModifyRunSyncAssetOutcomeCallable CfwClient::ModifyRunSyncAssetCallable(const ModifyRunSyncAssetRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyRunSyncAssetOutcome>>();
    ModifyRunSyncAssetAsync(
    request,
    [prom](
        const CfwClient*,
        const ModifyRunSyncAssetRequest&,
        ModifyRunSyncAssetOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::ModifySecurityGroupItemRuleStatusOutcome CfwClient::ModifySecurityGroupItemRuleStatus(const ModifySecurityGroupItemRuleStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySecurityGroupItemRuleStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySecurityGroupItemRuleStatusResponse rsp = ModifySecurityGroupItemRuleStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySecurityGroupItemRuleStatusOutcome(rsp);
        else
            return ModifySecurityGroupItemRuleStatusOutcome(o.GetError());
    }
    else
    {
        return ModifySecurityGroupItemRuleStatusOutcome(outcome.GetError());
    }
}

void CfwClient::ModifySecurityGroupItemRuleStatusAsync(const ModifySecurityGroupItemRuleStatusRequest& request, const ModifySecurityGroupItemRuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifySecurityGroupItemRuleStatusRequest&;
    using Resp = ModifySecurityGroupItemRuleStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySecurityGroupItemRuleStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::ModifySecurityGroupItemRuleStatusOutcomeCallable CfwClient::ModifySecurityGroupItemRuleStatusCallable(const ModifySecurityGroupItemRuleStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySecurityGroupItemRuleStatusOutcome>>();
    ModifySecurityGroupItemRuleStatusAsync(
    request,
    [prom](
        const CfwClient*,
        const ModifySecurityGroupItemRuleStatusRequest&,
        ModifySecurityGroupItemRuleStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::ModifySecurityGroupRuleOutcome CfwClient::ModifySecurityGroupRule(const ModifySecurityGroupRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySecurityGroupRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySecurityGroupRuleResponse rsp = ModifySecurityGroupRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySecurityGroupRuleOutcome(rsp);
        else
            return ModifySecurityGroupRuleOutcome(o.GetError());
    }
    else
    {
        return ModifySecurityGroupRuleOutcome(outcome.GetError());
    }
}

void CfwClient::ModifySecurityGroupRuleAsync(const ModifySecurityGroupRuleRequest& request, const ModifySecurityGroupRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifySecurityGroupRuleRequest&;
    using Resp = ModifySecurityGroupRuleResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySecurityGroupRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::ModifySecurityGroupRuleOutcomeCallable CfwClient::ModifySecurityGroupRuleCallable(const ModifySecurityGroupRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySecurityGroupRuleOutcome>>();
    ModifySecurityGroupRuleAsync(
    request,
    [prom](
        const CfwClient*,
        const ModifySecurityGroupRuleRequest&,
        ModifySecurityGroupRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::ModifySecurityGroupSequenceRulesOutcome CfwClient::ModifySecurityGroupSequenceRules(const ModifySecurityGroupSequenceRulesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySecurityGroupSequenceRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySecurityGroupSequenceRulesResponse rsp = ModifySecurityGroupSequenceRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySecurityGroupSequenceRulesOutcome(rsp);
        else
            return ModifySecurityGroupSequenceRulesOutcome(o.GetError());
    }
    else
    {
        return ModifySecurityGroupSequenceRulesOutcome(outcome.GetError());
    }
}

void CfwClient::ModifySecurityGroupSequenceRulesAsync(const ModifySecurityGroupSequenceRulesRequest& request, const ModifySecurityGroupSequenceRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifySecurityGroupSequenceRulesRequest&;
    using Resp = ModifySecurityGroupSequenceRulesResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySecurityGroupSequenceRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::ModifySecurityGroupSequenceRulesOutcomeCallable CfwClient::ModifySecurityGroupSequenceRulesCallable(const ModifySecurityGroupSequenceRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySecurityGroupSequenceRulesOutcome>>();
    ModifySecurityGroupSequenceRulesAsync(
    request,
    [prom](
        const CfwClient*,
        const ModifySecurityGroupSequenceRulesRequest&,
        ModifySecurityGroupSequenceRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::ModifySequenceAclRulesOutcome CfwClient::ModifySequenceAclRules(const ModifySequenceAclRulesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySequenceAclRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySequenceAclRulesResponse rsp = ModifySequenceAclRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySequenceAclRulesOutcome(rsp);
        else
            return ModifySequenceAclRulesOutcome(o.GetError());
    }
    else
    {
        return ModifySequenceAclRulesOutcome(outcome.GetError());
    }
}

void CfwClient::ModifySequenceAclRulesAsync(const ModifySequenceAclRulesRequest& request, const ModifySequenceAclRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifySequenceAclRulesRequest&;
    using Resp = ModifySequenceAclRulesResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySequenceAclRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::ModifySequenceAclRulesOutcomeCallable CfwClient::ModifySequenceAclRulesCallable(const ModifySequenceAclRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySequenceAclRulesOutcome>>();
    ModifySequenceAclRulesAsync(
    request,
    [prom](
        const CfwClient*,
        const ModifySequenceAclRulesRequest&,
        ModifySequenceAclRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::ModifySequenceRulesOutcome CfwClient::ModifySequenceRules(const ModifySequenceRulesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySequenceRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySequenceRulesResponse rsp = ModifySequenceRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySequenceRulesOutcome(rsp);
        else
            return ModifySequenceRulesOutcome(o.GetError());
    }
    else
    {
        return ModifySequenceRulesOutcome(outcome.GetError());
    }
}

void CfwClient::ModifySequenceRulesAsync(const ModifySequenceRulesRequest& request, const ModifySequenceRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifySequenceRulesRequest&;
    using Resp = ModifySequenceRulesResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySequenceRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::ModifySequenceRulesOutcomeCallable CfwClient::ModifySequenceRulesCallable(const ModifySequenceRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySequenceRulesOutcome>>();
    ModifySequenceRulesAsync(
    request,
    [prom](
        const CfwClient*,
        const ModifySequenceRulesRequest&,
        ModifySequenceRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::ModifyStorageSettingOutcome CfwClient::ModifyStorageSetting(const ModifyStorageSettingRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyStorageSetting");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyStorageSettingResponse rsp = ModifyStorageSettingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyStorageSettingOutcome(rsp);
        else
            return ModifyStorageSettingOutcome(o.GetError());
    }
    else
    {
        return ModifyStorageSettingOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyStorageSettingAsync(const ModifyStorageSettingRequest& request, const ModifyStorageSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyStorageSettingRequest&;
    using Resp = ModifyStorageSettingResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyStorageSetting", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::ModifyStorageSettingOutcomeCallable CfwClient::ModifyStorageSettingCallable(const ModifyStorageSettingRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyStorageSettingOutcome>>();
    ModifyStorageSettingAsync(
    request,
    [prom](
        const CfwClient*,
        const ModifyStorageSettingRequest&,
        ModifyStorageSettingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::ModifyTableStatusOutcome CfwClient::ModifyTableStatus(const ModifyTableStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTableStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTableStatusResponse rsp = ModifyTableStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTableStatusOutcome(rsp);
        else
            return ModifyTableStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyTableStatusOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyTableStatusAsync(const ModifyTableStatusRequest& request, const ModifyTableStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyTableStatusRequest&;
    using Resp = ModifyTableStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyTableStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::ModifyTableStatusOutcomeCallable CfwClient::ModifyTableStatusCallable(const ModifyTableStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyTableStatusOutcome>>();
    ModifyTableStatusAsync(
    request,
    [prom](
        const CfwClient*,
        const ModifyTableStatusRequest&,
        ModifyTableStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::ModifyVpcAcRuleOutcome CfwClient::ModifyVpcAcRule(const ModifyVpcAcRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyVpcAcRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyVpcAcRuleResponse rsp = ModifyVpcAcRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyVpcAcRuleOutcome(rsp);
        else
            return ModifyVpcAcRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyVpcAcRuleOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyVpcAcRuleAsync(const ModifyVpcAcRuleRequest& request, const ModifyVpcAcRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyVpcAcRuleRequest&;
    using Resp = ModifyVpcAcRuleResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyVpcAcRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::ModifyVpcAcRuleOutcomeCallable CfwClient::ModifyVpcAcRuleCallable(const ModifyVpcAcRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyVpcAcRuleOutcome>>();
    ModifyVpcAcRuleAsync(
    request,
    [prom](
        const CfwClient*,
        const ModifyVpcAcRuleRequest&,
        ModifyVpcAcRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::ModifyVpcFwGroupOutcome CfwClient::ModifyVpcFwGroup(const ModifyVpcFwGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyVpcFwGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyVpcFwGroupResponse rsp = ModifyVpcFwGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyVpcFwGroupOutcome(rsp);
        else
            return ModifyVpcFwGroupOutcome(o.GetError());
    }
    else
    {
        return ModifyVpcFwGroupOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyVpcFwGroupAsync(const ModifyVpcFwGroupRequest& request, const ModifyVpcFwGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyVpcFwGroupRequest&;
    using Resp = ModifyVpcFwGroupResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyVpcFwGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::ModifyVpcFwGroupOutcomeCallable CfwClient::ModifyVpcFwGroupCallable(const ModifyVpcFwGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyVpcFwGroupOutcome>>();
    ModifyVpcFwGroupAsync(
    request,
    [prom](
        const CfwClient*,
        const ModifyVpcFwGroupRequest&,
        ModifyVpcFwGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::ModifyVpcFwSequenceRulesOutcome CfwClient::ModifyVpcFwSequenceRules(const ModifyVpcFwSequenceRulesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyVpcFwSequenceRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyVpcFwSequenceRulesResponse rsp = ModifyVpcFwSequenceRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyVpcFwSequenceRulesOutcome(rsp);
        else
            return ModifyVpcFwSequenceRulesOutcome(o.GetError());
    }
    else
    {
        return ModifyVpcFwSequenceRulesOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyVpcFwSequenceRulesAsync(const ModifyVpcFwSequenceRulesRequest& request, const ModifyVpcFwSequenceRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyVpcFwSequenceRulesRequest&;
    using Resp = ModifyVpcFwSequenceRulesResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyVpcFwSequenceRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::ModifyVpcFwSequenceRulesOutcomeCallable CfwClient::ModifyVpcFwSequenceRulesCallable(const ModifyVpcFwSequenceRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyVpcFwSequenceRulesOutcome>>();
    ModifyVpcFwSequenceRulesAsync(
    request,
    [prom](
        const CfwClient*,
        const ModifyVpcFwSequenceRulesRequest&,
        ModifyVpcFwSequenceRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::RemoveAcRuleOutcome CfwClient::RemoveAcRule(const RemoveAcRuleRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveAcRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveAcRuleResponse rsp = RemoveAcRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveAcRuleOutcome(rsp);
        else
            return RemoveAcRuleOutcome(o.GetError());
    }
    else
    {
        return RemoveAcRuleOutcome(outcome.GetError());
    }
}

void CfwClient::RemoveAcRuleAsync(const RemoveAcRuleRequest& request, const RemoveAcRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RemoveAcRuleRequest&;
    using Resp = RemoveAcRuleResponse;

    DoRequestAsync<Req, Resp>(
        "RemoveAcRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::RemoveAcRuleOutcomeCallable CfwClient::RemoveAcRuleCallable(const RemoveAcRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<RemoveAcRuleOutcome>>();
    RemoveAcRuleAsync(
    request,
    [prom](
        const CfwClient*,
        const RemoveAcRuleRequest&,
        RemoveAcRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::RemoveAclRuleOutcome CfwClient::RemoveAclRule(const RemoveAclRuleRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveAclRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveAclRuleResponse rsp = RemoveAclRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveAclRuleOutcome(rsp);
        else
            return RemoveAclRuleOutcome(o.GetError());
    }
    else
    {
        return RemoveAclRuleOutcome(outcome.GetError());
    }
}

void CfwClient::RemoveAclRuleAsync(const RemoveAclRuleRequest& request, const RemoveAclRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RemoveAclRuleRequest&;
    using Resp = RemoveAclRuleResponse;

    DoRequestAsync<Req, Resp>(
        "RemoveAclRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::RemoveAclRuleOutcomeCallable CfwClient::RemoveAclRuleCallable(const RemoveAclRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<RemoveAclRuleOutcome>>();
    RemoveAclRuleAsync(
    request,
    [prom](
        const CfwClient*,
        const RemoveAclRuleRequest&,
        RemoveAclRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::RemoveEnterpriseSecurityGroupRuleOutcome CfwClient::RemoveEnterpriseSecurityGroupRule(const RemoveEnterpriseSecurityGroupRuleRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveEnterpriseSecurityGroupRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveEnterpriseSecurityGroupRuleResponse rsp = RemoveEnterpriseSecurityGroupRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveEnterpriseSecurityGroupRuleOutcome(rsp);
        else
            return RemoveEnterpriseSecurityGroupRuleOutcome(o.GetError());
    }
    else
    {
        return RemoveEnterpriseSecurityGroupRuleOutcome(outcome.GetError());
    }
}

void CfwClient::RemoveEnterpriseSecurityGroupRuleAsync(const RemoveEnterpriseSecurityGroupRuleRequest& request, const RemoveEnterpriseSecurityGroupRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RemoveEnterpriseSecurityGroupRuleRequest&;
    using Resp = RemoveEnterpriseSecurityGroupRuleResponse;

    DoRequestAsync<Req, Resp>(
        "RemoveEnterpriseSecurityGroupRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::RemoveEnterpriseSecurityGroupRuleOutcomeCallable CfwClient::RemoveEnterpriseSecurityGroupRuleCallable(const RemoveEnterpriseSecurityGroupRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<RemoveEnterpriseSecurityGroupRuleOutcome>>();
    RemoveEnterpriseSecurityGroupRuleAsync(
    request,
    [prom](
        const CfwClient*,
        const RemoveEnterpriseSecurityGroupRuleRequest&,
        RemoveEnterpriseSecurityGroupRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::RemoveNatAcRuleOutcome CfwClient::RemoveNatAcRule(const RemoveNatAcRuleRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveNatAcRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveNatAcRuleResponse rsp = RemoveNatAcRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveNatAcRuleOutcome(rsp);
        else
            return RemoveNatAcRuleOutcome(o.GetError());
    }
    else
    {
        return RemoveNatAcRuleOutcome(outcome.GetError());
    }
}

void CfwClient::RemoveNatAcRuleAsync(const RemoveNatAcRuleRequest& request, const RemoveNatAcRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RemoveNatAcRuleRequest&;
    using Resp = RemoveNatAcRuleResponse;

    DoRequestAsync<Req, Resp>(
        "RemoveNatAcRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::RemoveNatAcRuleOutcomeCallable CfwClient::RemoveNatAcRuleCallable(const RemoveNatAcRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<RemoveNatAcRuleOutcome>>();
    RemoveNatAcRuleAsync(
    request,
    [prom](
        const CfwClient*,
        const RemoveNatAcRuleRequest&,
        RemoveNatAcRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::RemoveVpcAcRuleOutcome CfwClient::RemoveVpcAcRule(const RemoveVpcAcRuleRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveVpcAcRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveVpcAcRuleResponse rsp = RemoveVpcAcRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveVpcAcRuleOutcome(rsp);
        else
            return RemoveVpcAcRuleOutcome(o.GetError());
    }
    else
    {
        return RemoveVpcAcRuleOutcome(outcome.GetError());
    }
}

void CfwClient::RemoveVpcAcRuleAsync(const RemoveVpcAcRuleRequest& request, const RemoveVpcAcRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RemoveVpcAcRuleRequest&;
    using Resp = RemoveVpcAcRuleResponse;

    DoRequestAsync<Req, Resp>(
        "RemoveVpcAcRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::RemoveVpcAcRuleOutcomeCallable CfwClient::RemoveVpcAcRuleCallable(const RemoveVpcAcRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<RemoveVpcAcRuleOutcome>>();
    RemoveVpcAcRuleAsync(
    request,
    [prom](
        const CfwClient*,
        const RemoveVpcAcRuleRequest&,
        RemoveVpcAcRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::SearchLogOutcome CfwClient::SearchLog(const SearchLogRequest &request)
{
    auto outcome = MakeRequest(request, "SearchLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SearchLogResponse rsp = SearchLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SearchLogOutcome(rsp);
        else
            return SearchLogOutcome(o.GetError());
    }
    else
    {
        return SearchLogOutcome(outcome.GetError());
    }
}

void CfwClient::SearchLogAsync(const SearchLogRequest& request, const SearchLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SearchLogRequest&;
    using Resp = SearchLogResponse;

    DoRequestAsync<Req, Resp>(
        "SearchLog", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::SearchLogOutcomeCallable CfwClient::SearchLogCallable(const SearchLogRequest &request)
{
    const auto prom = std::make_shared<std::promise<SearchLogOutcome>>();
    SearchLogAsync(
    request,
    [prom](
        const CfwClient*,
        const SearchLogRequest&,
        SearchLogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::SetNatFwDnatRuleOutcome CfwClient::SetNatFwDnatRule(const SetNatFwDnatRuleRequest &request)
{
    auto outcome = MakeRequest(request, "SetNatFwDnatRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetNatFwDnatRuleResponse rsp = SetNatFwDnatRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetNatFwDnatRuleOutcome(rsp);
        else
            return SetNatFwDnatRuleOutcome(o.GetError());
    }
    else
    {
        return SetNatFwDnatRuleOutcome(outcome.GetError());
    }
}

void CfwClient::SetNatFwDnatRuleAsync(const SetNatFwDnatRuleRequest& request, const SetNatFwDnatRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SetNatFwDnatRuleRequest&;
    using Resp = SetNatFwDnatRuleResponse;

    DoRequestAsync<Req, Resp>(
        "SetNatFwDnatRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::SetNatFwDnatRuleOutcomeCallable CfwClient::SetNatFwDnatRuleCallable(const SetNatFwDnatRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetNatFwDnatRuleOutcome>>();
    SetNatFwDnatRuleAsync(
    request,
    [prom](
        const CfwClient*,
        const SetNatFwDnatRuleRequest&,
        SetNatFwDnatRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::SetNatFwEipOutcome CfwClient::SetNatFwEip(const SetNatFwEipRequest &request)
{
    auto outcome = MakeRequest(request, "SetNatFwEip");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetNatFwEipResponse rsp = SetNatFwEipResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetNatFwEipOutcome(rsp);
        else
            return SetNatFwEipOutcome(o.GetError());
    }
    else
    {
        return SetNatFwEipOutcome(outcome.GetError());
    }
}

void CfwClient::SetNatFwEipAsync(const SetNatFwEipRequest& request, const SetNatFwEipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SetNatFwEipRequest&;
    using Resp = SetNatFwEipResponse;

    DoRequestAsync<Req, Resp>(
        "SetNatFwEip", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::SetNatFwEipOutcomeCallable CfwClient::SetNatFwEipCallable(const SetNatFwEipRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetNatFwEipOutcome>>();
    SetNatFwEipAsync(
    request,
    [prom](
        const CfwClient*,
        const SetNatFwEipRequest&,
        SetNatFwEipOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::StopSecurityGroupRuleDispatchOutcome CfwClient::StopSecurityGroupRuleDispatch(const StopSecurityGroupRuleDispatchRequest &request)
{
    auto outcome = MakeRequest(request, "StopSecurityGroupRuleDispatch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopSecurityGroupRuleDispatchResponse rsp = StopSecurityGroupRuleDispatchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopSecurityGroupRuleDispatchOutcome(rsp);
        else
            return StopSecurityGroupRuleDispatchOutcome(o.GetError());
    }
    else
    {
        return StopSecurityGroupRuleDispatchOutcome(outcome.GetError());
    }
}

void CfwClient::StopSecurityGroupRuleDispatchAsync(const StopSecurityGroupRuleDispatchRequest& request, const StopSecurityGroupRuleDispatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopSecurityGroupRuleDispatchRequest&;
    using Resp = StopSecurityGroupRuleDispatchResponse;

    DoRequestAsync<Req, Resp>(
        "StopSecurityGroupRuleDispatch", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::StopSecurityGroupRuleDispatchOutcomeCallable CfwClient::StopSecurityGroupRuleDispatchCallable(const StopSecurityGroupRuleDispatchRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopSecurityGroupRuleDispatchOutcome>>();
    StopSecurityGroupRuleDispatchAsync(
    request,
    [prom](
        const CfwClient*,
        const StopSecurityGroupRuleDispatchRequest&,
        StopSecurityGroupRuleDispatchOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::SyncFwOperateOutcome CfwClient::SyncFwOperate(const SyncFwOperateRequest &request)
{
    auto outcome = MakeRequest(request, "SyncFwOperate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SyncFwOperateResponse rsp = SyncFwOperateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SyncFwOperateOutcome(rsp);
        else
            return SyncFwOperateOutcome(o.GetError());
    }
    else
    {
        return SyncFwOperateOutcome(outcome.GetError());
    }
}

void CfwClient::SyncFwOperateAsync(const SyncFwOperateRequest& request, const SyncFwOperateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SyncFwOperateRequest&;
    using Resp = SyncFwOperateResponse;

    DoRequestAsync<Req, Resp>(
        "SyncFwOperate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::SyncFwOperateOutcomeCallable CfwClient::SyncFwOperateCallable(const SyncFwOperateRequest &request)
{
    const auto prom = std::make_shared<std::promise<SyncFwOperateOutcome>>();
    SyncFwOperateAsync(
    request,
    [prom](
        const CfwClient*,
        const SyncFwOperateRequest&,
        SyncFwOperateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


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

#include <tencentcloud/config/v20220802/ConfigClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Config::V20220802;
using namespace TencentCloud::Config::V20220802::Model;
using namespace std;

namespace
{
    const string VERSION = "2022-08-02";
    const string ENDPOINT = "config.tencentcloudapi.com";
}

ConfigClient::ConfigClient(const Credential &credential, const string &region) :
    ConfigClient(credential, region, ClientProfile())
{
}

ConfigClient::ConfigClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


ConfigClient::AddAggregateCompliancePackOutcome ConfigClient::AddAggregateCompliancePack(const AddAggregateCompliancePackRequest &request)
{
    auto outcome = MakeRequest(request, "AddAggregateCompliancePack");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddAggregateCompliancePackResponse rsp = AddAggregateCompliancePackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddAggregateCompliancePackOutcome(rsp);
        else
            return AddAggregateCompliancePackOutcome(o.GetError());
    }
    else
    {
        return AddAggregateCompliancePackOutcome(outcome.GetError());
    }
}

void ConfigClient::AddAggregateCompliancePackAsync(const AddAggregateCompliancePackRequest& request, const AddAggregateCompliancePackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddAggregateCompliancePackRequest&;
    using Resp = AddAggregateCompliancePackResponse;

    DoRequestAsync<Req, Resp>(
        "AddAggregateCompliancePack", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ConfigClient::AddAggregateCompliancePackOutcomeCallable ConfigClient::AddAggregateCompliancePackCallable(const AddAggregateCompliancePackRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddAggregateCompliancePackOutcome>>();
    AddAggregateCompliancePackAsync(
    request,
    [prom](
        const ConfigClient*,
        const AddAggregateCompliancePackRequest&,
        AddAggregateCompliancePackOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ConfigClient::AddAggregateConfigRuleOutcome ConfigClient::AddAggregateConfigRule(const AddAggregateConfigRuleRequest &request)
{
    auto outcome = MakeRequest(request, "AddAggregateConfigRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddAggregateConfigRuleResponse rsp = AddAggregateConfigRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddAggregateConfigRuleOutcome(rsp);
        else
            return AddAggregateConfigRuleOutcome(o.GetError());
    }
    else
    {
        return AddAggregateConfigRuleOutcome(outcome.GetError());
    }
}

void ConfigClient::AddAggregateConfigRuleAsync(const AddAggregateConfigRuleRequest& request, const AddAggregateConfigRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddAggregateConfigRuleRequest&;
    using Resp = AddAggregateConfigRuleResponse;

    DoRequestAsync<Req, Resp>(
        "AddAggregateConfigRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ConfigClient::AddAggregateConfigRuleOutcomeCallable ConfigClient::AddAggregateConfigRuleCallable(const AddAggregateConfigRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddAggregateConfigRuleOutcome>>();
    AddAggregateConfigRuleAsync(
    request,
    [prom](
        const ConfigClient*,
        const AddAggregateConfigRuleRequest&,
        AddAggregateConfigRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ConfigClient::AddAlarmPolicyOutcome ConfigClient::AddAlarmPolicy(const AddAlarmPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "AddAlarmPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddAlarmPolicyResponse rsp = AddAlarmPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddAlarmPolicyOutcome(rsp);
        else
            return AddAlarmPolicyOutcome(o.GetError());
    }
    else
    {
        return AddAlarmPolicyOutcome(outcome.GetError());
    }
}

void ConfigClient::AddAlarmPolicyAsync(const AddAlarmPolicyRequest& request, const AddAlarmPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddAlarmPolicyRequest&;
    using Resp = AddAlarmPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "AddAlarmPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ConfigClient::AddAlarmPolicyOutcomeCallable ConfigClient::AddAlarmPolicyCallable(const AddAlarmPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddAlarmPolicyOutcome>>();
    AddAlarmPolicyAsync(
    request,
    [prom](
        const ConfigClient*,
        const AddAlarmPolicyRequest&,
        AddAlarmPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ConfigClient::AddCompliancePackOutcome ConfigClient::AddCompliancePack(const AddCompliancePackRequest &request)
{
    auto outcome = MakeRequest(request, "AddCompliancePack");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddCompliancePackResponse rsp = AddCompliancePackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddCompliancePackOutcome(rsp);
        else
            return AddCompliancePackOutcome(o.GetError());
    }
    else
    {
        return AddCompliancePackOutcome(outcome.GetError());
    }
}

void ConfigClient::AddCompliancePackAsync(const AddCompliancePackRequest& request, const AddCompliancePackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddCompliancePackRequest&;
    using Resp = AddCompliancePackResponse;

    DoRequestAsync<Req, Resp>(
        "AddCompliancePack", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ConfigClient::AddCompliancePackOutcomeCallable ConfigClient::AddCompliancePackCallable(const AddCompliancePackRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddCompliancePackOutcome>>();
    AddCompliancePackAsync(
    request,
    [prom](
        const ConfigClient*,
        const AddCompliancePackRequest&,
        AddCompliancePackOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ConfigClient::AddConfigRuleOutcome ConfigClient::AddConfigRule(const AddConfigRuleRequest &request)
{
    auto outcome = MakeRequest(request, "AddConfigRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddConfigRuleResponse rsp = AddConfigRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddConfigRuleOutcome(rsp);
        else
            return AddConfigRuleOutcome(o.GetError());
    }
    else
    {
        return AddConfigRuleOutcome(outcome.GetError());
    }
}

void ConfigClient::AddConfigRuleAsync(const AddConfigRuleRequest& request, const AddConfigRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddConfigRuleRequest&;
    using Resp = AddConfigRuleResponse;

    DoRequestAsync<Req, Resp>(
        "AddConfigRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ConfigClient::AddConfigRuleOutcomeCallable ConfigClient::AddConfigRuleCallable(const AddConfigRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddConfigRuleOutcome>>();
    AddConfigRuleAsync(
    request,
    [prom](
        const ConfigClient*,
        const AddConfigRuleRequest&,
        AddConfigRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ConfigClient::CloseAggregateConfigRuleOutcome ConfigClient::CloseAggregateConfigRule(const CloseAggregateConfigRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CloseAggregateConfigRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CloseAggregateConfigRuleResponse rsp = CloseAggregateConfigRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CloseAggregateConfigRuleOutcome(rsp);
        else
            return CloseAggregateConfigRuleOutcome(o.GetError());
    }
    else
    {
        return CloseAggregateConfigRuleOutcome(outcome.GetError());
    }
}

void ConfigClient::CloseAggregateConfigRuleAsync(const CloseAggregateConfigRuleRequest& request, const CloseAggregateConfigRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CloseAggregateConfigRuleRequest&;
    using Resp = CloseAggregateConfigRuleResponse;

    DoRequestAsync<Req, Resp>(
        "CloseAggregateConfigRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ConfigClient::CloseAggregateConfigRuleOutcomeCallable ConfigClient::CloseAggregateConfigRuleCallable(const CloseAggregateConfigRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<CloseAggregateConfigRuleOutcome>>();
    CloseAggregateConfigRuleAsync(
    request,
    [prom](
        const ConfigClient*,
        const CloseAggregateConfigRuleRequest&,
        CloseAggregateConfigRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ConfigClient::CloseConfigRecorderOutcome ConfigClient::CloseConfigRecorder(const CloseConfigRecorderRequest &request)
{
    auto outcome = MakeRequest(request, "CloseConfigRecorder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CloseConfigRecorderResponse rsp = CloseConfigRecorderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CloseConfigRecorderOutcome(rsp);
        else
            return CloseConfigRecorderOutcome(o.GetError());
    }
    else
    {
        return CloseConfigRecorderOutcome(outcome.GetError());
    }
}

void ConfigClient::CloseConfigRecorderAsync(const CloseConfigRecorderRequest& request, const CloseConfigRecorderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CloseConfigRecorderRequest&;
    using Resp = CloseConfigRecorderResponse;

    DoRequestAsync<Req, Resp>(
        "CloseConfigRecorder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ConfigClient::CloseConfigRecorderOutcomeCallable ConfigClient::CloseConfigRecorderCallable(const CloseConfigRecorderRequest &request)
{
    const auto prom = std::make_shared<std::promise<CloseConfigRecorderOutcome>>();
    CloseConfigRecorderAsync(
    request,
    [prom](
        const ConfigClient*,
        const CloseConfigRecorderRequest&,
        CloseConfigRecorderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ConfigClient::CloseConfigRuleOutcome ConfigClient::CloseConfigRule(const CloseConfigRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CloseConfigRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CloseConfigRuleResponse rsp = CloseConfigRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CloseConfigRuleOutcome(rsp);
        else
            return CloseConfigRuleOutcome(o.GetError());
    }
    else
    {
        return CloseConfigRuleOutcome(outcome.GetError());
    }
}

void ConfigClient::CloseConfigRuleAsync(const CloseConfigRuleRequest& request, const CloseConfigRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CloseConfigRuleRequest&;
    using Resp = CloseConfigRuleResponse;

    DoRequestAsync<Req, Resp>(
        "CloseConfigRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ConfigClient::CloseConfigRuleOutcomeCallable ConfigClient::CloseConfigRuleCallable(const CloseConfigRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<CloseConfigRuleOutcome>>();
    CloseConfigRuleAsync(
    request,
    [prom](
        const ConfigClient*,
        const CloseConfigRuleRequest&,
        CloseConfigRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ConfigClient::CreateAggregatorOutcome ConfigClient::CreateAggregator(const CreateAggregatorRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAggregator");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAggregatorResponse rsp = CreateAggregatorResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAggregatorOutcome(rsp);
        else
            return CreateAggregatorOutcome(o.GetError());
    }
    else
    {
        return CreateAggregatorOutcome(outcome.GetError());
    }
}

void ConfigClient::CreateAggregatorAsync(const CreateAggregatorRequest& request, const CreateAggregatorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAggregatorRequest&;
    using Resp = CreateAggregatorResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAggregator", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ConfigClient::CreateAggregatorOutcomeCallable ConfigClient::CreateAggregatorCallable(const CreateAggregatorRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAggregatorOutcome>>();
    CreateAggregatorAsync(
    request,
    [prom](
        const ConfigClient*,
        const CreateAggregatorRequest&,
        CreateAggregatorOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ConfigClient::CreateRemediationOutcome ConfigClient::CreateRemediation(const CreateRemediationRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRemediation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRemediationResponse rsp = CreateRemediationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRemediationOutcome(rsp);
        else
            return CreateRemediationOutcome(o.GetError());
    }
    else
    {
        return CreateRemediationOutcome(outcome.GetError());
    }
}

void ConfigClient::CreateRemediationAsync(const CreateRemediationRequest& request, const CreateRemediationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateRemediationRequest&;
    using Resp = CreateRemediationResponse;

    DoRequestAsync<Req, Resp>(
        "CreateRemediation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ConfigClient::CreateRemediationOutcomeCallable ConfigClient::CreateRemediationCallable(const CreateRemediationRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateRemediationOutcome>>();
    CreateRemediationAsync(
    request,
    [prom](
        const ConfigClient*,
        const CreateRemediationRequest&,
        CreateRemediationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ConfigClient::DeleteAggregateCompliancePackOutcome ConfigClient::DeleteAggregateCompliancePack(const DeleteAggregateCompliancePackRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAggregateCompliancePack");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAggregateCompliancePackResponse rsp = DeleteAggregateCompliancePackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAggregateCompliancePackOutcome(rsp);
        else
            return DeleteAggregateCompliancePackOutcome(o.GetError());
    }
    else
    {
        return DeleteAggregateCompliancePackOutcome(outcome.GetError());
    }
}

void ConfigClient::DeleteAggregateCompliancePackAsync(const DeleteAggregateCompliancePackRequest& request, const DeleteAggregateCompliancePackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAggregateCompliancePackRequest&;
    using Resp = DeleteAggregateCompliancePackResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAggregateCompliancePack", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ConfigClient::DeleteAggregateCompliancePackOutcomeCallable ConfigClient::DeleteAggregateCompliancePackCallable(const DeleteAggregateCompliancePackRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAggregateCompliancePackOutcome>>();
    DeleteAggregateCompliancePackAsync(
    request,
    [prom](
        const ConfigClient*,
        const DeleteAggregateCompliancePackRequest&,
        DeleteAggregateCompliancePackOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ConfigClient::DeleteAggregateConfigRuleOutcome ConfigClient::DeleteAggregateConfigRule(const DeleteAggregateConfigRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAggregateConfigRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAggregateConfigRuleResponse rsp = DeleteAggregateConfigRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAggregateConfigRuleOutcome(rsp);
        else
            return DeleteAggregateConfigRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteAggregateConfigRuleOutcome(outcome.GetError());
    }
}

void ConfigClient::DeleteAggregateConfigRuleAsync(const DeleteAggregateConfigRuleRequest& request, const DeleteAggregateConfigRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAggregateConfigRuleRequest&;
    using Resp = DeleteAggregateConfigRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAggregateConfigRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ConfigClient::DeleteAggregateConfigRuleOutcomeCallable ConfigClient::DeleteAggregateConfigRuleCallable(const DeleteAggregateConfigRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAggregateConfigRuleOutcome>>();
    DeleteAggregateConfigRuleAsync(
    request,
    [prom](
        const ConfigClient*,
        const DeleteAggregateConfigRuleRequest&,
        DeleteAggregateConfigRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ConfigClient::DeleteAlarmPolicyOutcome ConfigClient::DeleteAlarmPolicy(const DeleteAlarmPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAlarmPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAlarmPolicyResponse rsp = DeleteAlarmPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAlarmPolicyOutcome(rsp);
        else
            return DeleteAlarmPolicyOutcome(o.GetError());
    }
    else
    {
        return DeleteAlarmPolicyOutcome(outcome.GetError());
    }
}

void ConfigClient::DeleteAlarmPolicyAsync(const DeleteAlarmPolicyRequest& request, const DeleteAlarmPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAlarmPolicyRequest&;
    using Resp = DeleteAlarmPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAlarmPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ConfigClient::DeleteAlarmPolicyOutcomeCallable ConfigClient::DeleteAlarmPolicyCallable(const DeleteAlarmPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAlarmPolicyOutcome>>();
    DeleteAlarmPolicyAsync(
    request,
    [prom](
        const ConfigClient*,
        const DeleteAlarmPolicyRequest&,
        DeleteAlarmPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ConfigClient::DeleteCompliancePackOutcome ConfigClient::DeleteCompliancePack(const DeleteCompliancePackRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCompliancePack");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCompliancePackResponse rsp = DeleteCompliancePackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCompliancePackOutcome(rsp);
        else
            return DeleteCompliancePackOutcome(o.GetError());
    }
    else
    {
        return DeleteCompliancePackOutcome(outcome.GetError());
    }
}

void ConfigClient::DeleteCompliancePackAsync(const DeleteCompliancePackRequest& request, const DeleteCompliancePackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCompliancePackRequest&;
    using Resp = DeleteCompliancePackResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCompliancePack", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ConfigClient::DeleteCompliancePackOutcomeCallable ConfigClient::DeleteCompliancePackCallable(const DeleteCompliancePackRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCompliancePackOutcome>>();
    DeleteCompliancePackAsync(
    request,
    [prom](
        const ConfigClient*,
        const DeleteCompliancePackRequest&,
        DeleteCompliancePackOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ConfigClient::DeleteConfigRuleOutcome ConfigClient::DeleteConfigRule(const DeleteConfigRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteConfigRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteConfigRuleResponse rsp = DeleteConfigRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteConfigRuleOutcome(rsp);
        else
            return DeleteConfigRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteConfigRuleOutcome(outcome.GetError());
    }
}

void ConfigClient::DeleteConfigRuleAsync(const DeleteConfigRuleRequest& request, const DeleteConfigRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteConfigRuleRequest&;
    using Resp = DeleteConfigRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteConfigRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ConfigClient::DeleteConfigRuleOutcomeCallable ConfigClient::DeleteConfigRuleCallable(const DeleteConfigRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteConfigRuleOutcome>>();
    DeleteConfigRuleAsync(
    request,
    [prom](
        const ConfigClient*,
        const DeleteConfigRuleRequest&,
        DeleteConfigRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ConfigClient::DeleteRemediationsOutcome ConfigClient::DeleteRemediations(const DeleteRemediationsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRemediations");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRemediationsResponse rsp = DeleteRemediationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRemediationsOutcome(rsp);
        else
            return DeleteRemediationsOutcome(o.GetError());
    }
    else
    {
        return DeleteRemediationsOutcome(outcome.GetError());
    }
}

void ConfigClient::DeleteRemediationsAsync(const DeleteRemediationsRequest& request, const DeleteRemediationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteRemediationsRequest&;
    using Resp = DeleteRemediationsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRemediations", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ConfigClient::DeleteRemediationsOutcomeCallable ConfigClient::DeleteRemediationsCallable(const DeleteRemediationsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRemediationsOutcome>>();
    DeleteRemediationsAsync(
    request,
    [prom](
        const ConfigClient*,
        const DeleteRemediationsRequest&,
        DeleteRemediationsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ConfigClient::DescribeAggregateCompliancePackOutcome ConfigClient::DescribeAggregateCompliancePack(const DescribeAggregateCompliancePackRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAggregateCompliancePack");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAggregateCompliancePackResponse rsp = DescribeAggregateCompliancePackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAggregateCompliancePackOutcome(rsp);
        else
            return DescribeAggregateCompliancePackOutcome(o.GetError());
    }
    else
    {
        return DescribeAggregateCompliancePackOutcome(outcome.GetError());
    }
}

void ConfigClient::DescribeAggregateCompliancePackAsync(const DescribeAggregateCompliancePackRequest& request, const DescribeAggregateCompliancePackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAggregateCompliancePackRequest&;
    using Resp = DescribeAggregateCompliancePackResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAggregateCompliancePack", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ConfigClient::DescribeAggregateCompliancePackOutcomeCallable ConfigClient::DescribeAggregateCompliancePackCallable(const DescribeAggregateCompliancePackRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAggregateCompliancePackOutcome>>();
    DescribeAggregateCompliancePackAsync(
    request,
    [prom](
        const ConfigClient*,
        const DescribeAggregateCompliancePackRequest&,
        DescribeAggregateCompliancePackOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ConfigClient::DescribeAggregateConfigDeliverOutcome ConfigClient::DescribeAggregateConfigDeliver(const DescribeAggregateConfigDeliverRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAggregateConfigDeliver");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAggregateConfigDeliverResponse rsp = DescribeAggregateConfigDeliverResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAggregateConfigDeliverOutcome(rsp);
        else
            return DescribeAggregateConfigDeliverOutcome(o.GetError());
    }
    else
    {
        return DescribeAggregateConfigDeliverOutcome(outcome.GetError());
    }
}

void ConfigClient::DescribeAggregateConfigDeliverAsync(const DescribeAggregateConfigDeliverRequest& request, const DescribeAggregateConfigDeliverAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAggregateConfigDeliverRequest&;
    using Resp = DescribeAggregateConfigDeliverResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAggregateConfigDeliver", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ConfigClient::DescribeAggregateConfigDeliverOutcomeCallable ConfigClient::DescribeAggregateConfigDeliverCallable(const DescribeAggregateConfigDeliverRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAggregateConfigDeliverOutcome>>();
    DescribeAggregateConfigDeliverAsync(
    request,
    [prom](
        const ConfigClient*,
        const DescribeAggregateConfigDeliverRequest&,
        DescribeAggregateConfigDeliverOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ConfigClient::DescribeAggregateConfigRuleOutcome ConfigClient::DescribeAggregateConfigRule(const DescribeAggregateConfigRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAggregateConfigRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAggregateConfigRuleResponse rsp = DescribeAggregateConfigRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAggregateConfigRuleOutcome(rsp);
        else
            return DescribeAggregateConfigRuleOutcome(o.GetError());
    }
    else
    {
        return DescribeAggregateConfigRuleOutcome(outcome.GetError());
    }
}

void ConfigClient::DescribeAggregateConfigRuleAsync(const DescribeAggregateConfigRuleRequest& request, const DescribeAggregateConfigRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAggregateConfigRuleRequest&;
    using Resp = DescribeAggregateConfigRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAggregateConfigRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ConfigClient::DescribeAggregateConfigRuleOutcomeCallable ConfigClient::DescribeAggregateConfigRuleCallable(const DescribeAggregateConfigRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAggregateConfigRuleOutcome>>();
    DescribeAggregateConfigRuleAsync(
    request,
    [prom](
        const ConfigClient*,
        const DescribeAggregateConfigRuleRequest&,
        DescribeAggregateConfigRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ConfigClient::DescribeAggregateDiscoveredResourceOutcome ConfigClient::DescribeAggregateDiscoveredResource(const DescribeAggregateDiscoveredResourceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAggregateDiscoveredResource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAggregateDiscoveredResourceResponse rsp = DescribeAggregateDiscoveredResourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAggregateDiscoveredResourceOutcome(rsp);
        else
            return DescribeAggregateDiscoveredResourceOutcome(o.GetError());
    }
    else
    {
        return DescribeAggregateDiscoveredResourceOutcome(outcome.GetError());
    }
}

void ConfigClient::DescribeAggregateDiscoveredResourceAsync(const DescribeAggregateDiscoveredResourceRequest& request, const DescribeAggregateDiscoveredResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAggregateDiscoveredResourceRequest&;
    using Resp = DescribeAggregateDiscoveredResourceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAggregateDiscoveredResource", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ConfigClient::DescribeAggregateDiscoveredResourceOutcomeCallable ConfigClient::DescribeAggregateDiscoveredResourceCallable(const DescribeAggregateDiscoveredResourceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAggregateDiscoveredResourceOutcome>>();
    DescribeAggregateDiscoveredResourceAsync(
    request,
    [prom](
        const ConfigClient*,
        const DescribeAggregateDiscoveredResourceRequest&,
        DescribeAggregateDiscoveredResourceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ConfigClient::DescribeAggregatorOutcome ConfigClient::DescribeAggregator(const DescribeAggregatorRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAggregator");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAggregatorResponse rsp = DescribeAggregatorResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAggregatorOutcome(rsp);
        else
            return DescribeAggregatorOutcome(o.GetError());
    }
    else
    {
        return DescribeAggregatorOutcome(outcome.GetError());
    }
}

void ConfigClient::DescribeAggregatorAsync(const DescribeAggregatorRequest& request, const DescribeAggregatorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAggregatorRequest&;
    using Resp = DescribeAggregatorResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAggregator", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ConfigClient::DescribeAggregatorOutcomeCallable ConfigClient::DescribeAggregatorCallable(const DescribeAggregatorRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAggregatorOutcome>>();
    DescribeAggregatorAsync(
    request,
    [prom](
        const ConfigClient*,
        const DescribeAggregatorRequest&,
        DescribeAggregatorOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ConfigClient::DescribeCompliancePackOutcome ConfigClient::DescribeCompliancePack(const DescribeCompliancePackRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCompliancePack");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCompliancePackResponse rsp = DescribeCompliancePackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCompliancePackOutcome(rsp);
        else
            return DescribeCompliancePackOutcome(o.GetError());
    }
    else
    {
        return DescribeCompliancePackOutcome(outcome.GetError());
    }
}

void ConfigClient::DescribeCompliancePackAsync(const DescribeCompliancePackRequest& request, const DescribeCompliancePackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCompliancePackRequest&;
    using Resp = DescribeCompliancePackResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCompliancePack", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ConfigClient::DescribeCompliancePackOutcomeCallable ConfigClient::DescribeCompliancePackCallable(const DescribeCompliancePackRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCompliancePackOutcome>>();
    DescribeCompliancePackAsync(
    request,
    [prom](
        const ConfigClient*,
        const DescribeCompliancePackRequest&,
        DescribeCompliancePackOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ConfigClient::DescribeConfigDeliverOutcome ConfigClient::DescribeConfigDeliver(const DescribeConfigDeliverRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConfigDeliver");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConfigDeliverResponse rsp = DescribeConfigDeliverResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConfigDeliverOutcome(rsp);
        else
            return DescribeConfigDeliverOutcome(o.GetError());
    }
    else
    {
        return DescribeConfigDeliverOutcome(outcome.GetError());
    }
}

void ConfigClient::DescribeConfigDeliverAsync(const DescribeConfigDeliverRequest& request, const DescribeConfigDeliverAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeConfigDeliverRequest&;
    using Resp = DescribeConfigDeliverResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeConfigDeliver", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ConfigClient::DescribeConfigDeliverOutcomeCallable ConfigClient::DescribeConfigDeliverCallable(const DescribeConfigDeliverRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeConfigDeliverOutcome>>();
    DescribeConfigDeliverAsync(
    request,
    [prom](
        const ConfigClient*,
        const DescribeConfigDeliverRequest&,
        DescribeConfigDeliverOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ConfigClient::DescribeConfigRecorderOutcome ConfigClient::DescribeConfigRecorder(const DescribeConfigRecorderRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConfigRecorder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConfigRecorderResponse rsp = DescribeConfigRecorderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConfigRecorderOutcome(rsp);
        else
            return DescribeConfigRecorderOutcome(o.GetError());
    }
    else
    {
        return DescribeConfigRecorderOutcome(outcome.GetError());
    }
}

void ConfigClient::DescribeConfigRecorderAsync(const DescribeConfigRecorderRequest& request, const DescribeConfigRecorderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeConfigRecorderRequest&;
    using Resp = DescribeConfigRecorderResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeConfigRecorder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ConfigClient::DescribeConfigRecorderOutcomeCallable ConfigClient::DescribeConfigRecorderCallable(const DescribeConfigRecorderRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeConfigRecorderOutcome>>();
    DescribeConfigRecorderAsync(
    request,
    [prom](
        const ConfigClient*,
        const DescribeConfigRecorderRequest&,
        DescribeConfigRecorderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ConfigClient::DescribeConfigRuleOutcome ConfigClient::DescribeConfigRule(const DescribeConfigRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConfigRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConfigRuleResponse rsp = DescribeConfigRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConfigRuleOutcome(rsp);
        else
            return DescribeConfigRuleOutcome(o.GetError());
    }
    else
    {
        return DescribeConfigRuleOutcome(outcome.GetError());
    }
}

void ConfigClient::DescribeConfigRuleAsync(const DescribeConfigRuleRequest& request, const DescribeConfigRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeConfigRuleRequest&;
    using Resp = DescribeConfigRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeConfigRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ConfigClient::DescribeConfigRuleOutcomeCallable ConfigClient::DescribeConfigRuleCallable(const DescribeConfigRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeConfigRuleOutcome>>();
    DescribeConfigRuleAsync(
    request,
    [prom](
        const ConfigClient*,
        const DescribeConfigRuleRequest&,
        DescribeConfigRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ConfigClient::DescribeDiscoveredResourceOutcome ConfigClient::DescribeDiscoveredResource(const DescribeDiscoveredResourceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDiscoveredResource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDiscoveredResourceResponse rsp = DescribeDiscoveredResourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDiscoveredResourceOutcome(rsp);
        else
            return DescribeDiscoveredResourceOutcome(o.GetError());
    }
    else
    {
        return DescribeDiscoveredResourceOutcome(outcome.GetError());
    }
}

void ConfigClient::DescribeDiscoveredResourceAsync(const DescribeDiscoveredResourceRequest& request, const DescribeDiscoveredResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDiscoveredResourceRequest&;
    using Resp = DescribeDiscoveredResourceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDiscoveredResource", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ConfigClient::DescribeDiscoveredResourceOutcomeCallable ConfigClient::DescribeDiscoveredResourceCallable(const DescribeDiscoveredResourceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDiscoveredResourceOutcome>>();
    DescribeDiscoveredResourceAsync(
    request,
    [prom](
        const ConfigClient*,
        const DescribeDiscoveredResourceRequest&,
        DescribeDiscoveredResourceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ConfigClient::DescribeSystemCompliancePackOutcome ConfigClient::DescribeSystemCompliancePack(const DescribeSystemCompliancePackRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSystemCompliancePack");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSystemCompliancePackResponse rsp = DescribeSystemCompliancePackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSystemCompliancePackOutcome(rsp);
        else
            return DescribeSystemCompliancePackOutcome(o.GetError());
    }
    else
    {
        return DescribeSystemCompliancePackOutcome(outcome.GetError());
    }
}

void ConfigClient::DescribeSystemCompliancePackAsync(const DescribeSystemCompliancePackRequest& request, const DescribeSystemCompliancePackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSystemCompliancePackRequest&;
    using Resp = DescribeSystemCompliancePackResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSystemCompliancePack", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ConfigClient::DescribeSystemCompliancePackOutcomeCallable ConfigClient::DescribeSystemCompliancePackCallable(const DescribeSystemCompliancePackRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSystemCompliancePackOutcome>>();
    DescribeSystemCompliancePackAsync(
    request,
    [prom](
        const ConfigClient*,
        const DescribeSystemCompliancePackRequest&,
        DescribeSystemCompliancePackOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ConfigClient::DescribeSystemRuleOutcome ConfigClient::DescribeSystemRule(const DescribeSystemRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSystemRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSystemRuleResponse rsp = DescribeSystemRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSystemRuleOutcome(rsp);
        else
            return DescribeSystemRuleOutcome(o.GetError());
    }
    else
    {
        return DescribeSystemRuleOutcome(outcome.GetError());
    }
}

void ConfigClient::DescribeSystemRuleAsync(const DescribeSystemRuleRequest& request, const DescribeSystemRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSystemRuleRequest&;
    using Resp = DescribeSystemRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSystemRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ConfigClient::DescribeSystemRuleOutcomeCallable ConfigClient::DescribeSystemRuleCallable(const DescribeSystemRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSystemRuleOutcome>>();
    DescribeSystemRuleAsync(
    request,
    [prom](
        const ConfigClient*,
        const DescribeSystemRuleRequest&,
        DescribeSystemRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ConfigClient::DetachAggregateConfigRuleToCompliancePackOutcome ConfigClient::DetachAggregateConfigRuleToCompliancePack(const DetachAggregateConfigRuleToCompliancePackRequest &request)
{
    auto outcome = MakeRequest(request, "DetachAggregateConfigRuleToCompliancePack");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DetachAggregateConfigRuleToCompliancePackResponse rsp = DetachAggregateConfigRuleToCompliancePackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DetachAggregateConfigRuleToCompliancePackOutcome(rsp);
        else
            return DetachAggregateConfigRuleToCompliancePackOutcome(o.GetError());
    }
    else
    {
        return DetachAggregateConfigRuleToCompliancePackOutcome(outcome.GetError());
    }
}

void ConfigClient::DetachAggregateConfigRuleToCompliancePackAsync(const DetachAggregateConfigRuleToCompliancePackRequest& request, const DetachAggregateConfigRuleToCompliancePackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DetachAggregateConfigRuleToCompliancePackRequest&;
    using Resp = DetachAggregateConfigRuleToCompliancePackResponse;

    DoRequestAsync<Req, Resp>(
        "DetachAggregateConfigRuleToCompliancePack", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ConfigClient::DetachAggregateConfigRuleToCompliancePackOutcomeCallable ConfigClient::DetachAggregateConfigRuleToCompliancePackCallable(const DetachAggregateConfigRuleToCompliancePackRequest &request)
{
    const auto prom = std::make_shared<std::promise<DetachAggregateConfigRuleToCompliancePackOutcome>>();
    DetachAggregateConfigRuleToCompliancePackAsync(
    request,
    [prom](
        const ConfigClient*,
        const DetachAggregateConfigRuleToCompliancePackRequest&,
        DetachAggregateConfigRuleToCompliancePackOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ConfigClient::DetachConfigRuleToCompliancePackOutcome ConfigClient::DetachConfigRuleToCompliancePack(const DetachConfigRuleToCompliancePackRequest &request)
{
    auto outcome = MakeRequest(request, "DetachConfigRuleToCompliancePack");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DetachConfigRuleToCompliancePackResponse rsp = DetachConfigRuleToCompliancePackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DetachConfigRuleToCompliancePackOutcome(rsp);
        else
            return DetachConfigRuleToCompliancePackOutcome(o.GetError());
    }
    else
    {
        return DetachConfigRuleToCompliancePackOutcome(outcome.GetError());
    }
}

void ConfigClient::DetachConfigRuleToCompliancePackAsync(const DetachConfigRuleToCompliancePackRequest& request, const DetachConfigRuleToCompliancePackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DetachConfigRuleToCompliancePackRequest&;
    using Resp = DetachConfigRuleToCompliancePackResponse;

    DoRequestAsync<Req, Resp>(
        "DetachConfigRuleToCompliancePack", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ConfigClient::DetachConfigRuleToCompliancePackOutcomeCallable ConfigClient::DetachConfigRuleToCompliancePackCallable(const DetachConfigRuleToCompliancePackRequest &request)
{
    const auto prom = std::make_shared<std::promise<DetachConfigRuleToCompliancePackOutcome>>();
    DetachConfigRuleToCompliancePackAsync(
    request,
    [prom](
        const ConfigClient*,
        const DetachConfigRuleToCompliancePackRequest&,
        DetachConfigRuleToCompliancePackOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ConfigClient::ListAggregateCompliancePacksOutcome ConfigClient::ListAggregateCompliancePacks(const ListAggregateCompliancePacksRequest &request)
{
    auto outcome = MakeRequest(request, "ListAggregateCompliancePacks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListAggregateCompliancePacksResponse rsp = ListAggregateCompliancePacksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListAggregateCompliancePacksOutcome(rsp);
        else
            return ListAggregateCompliancePacksOutcome(o.GetError());
    }
    else
    {
        return ListAggregateCompliancePacksOutcome(outcome.GetError());
    }
}

void ConfigClient::ListAggregateCompliancePacksAsync(const ListAggregateCompliancePacksRequest& request, const ListAggregateCompliancePacksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListAggregateCompliancePacksRequest&;
    using Resp = ListAggregateCompliancePacksResponse;

    DoRequestAsync<Req, Resp>(
        "ListAggregateCompliancePacks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ConfigClient::ListAggregateCompliancePacksOutcomeCallable ConfigClient::ListAggregateCompliancePacksCallable(const ListAggregateCompliancePacksRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListAggregateCompliancePacksOutcome>>();
    ListAggregateCompliancePacksAsync(
    request,
    [prom](
        const ConfigClient*,
        const ListAggregateCompliancePacksRequest&,
        ListAggregateCompliancePacksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ConfigClient::ListAggregateConfigRuleEvaluationResultsOutcome ConfigClient::ListAggregateConfigRuleEvaluationResults(const ListAggregateConfigRuleEvaluationResultsRequest &request)
{
    auto outcome = MakeRequest(request, "ListAggregateConfigRuleEvaluationResults");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListAggregateConfigRuleEvaluationResultsResponse rsp = ListAggregateConfigRuleEvaluationResultsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListAggregateConfigRuleEvaluationResultsOutcome(rsp);
        else
            return ListAggregateConfigRuleEvaluationResultsOutcome(o.GetError());
    }
    else
    {
        return ListAggregateConfigRuleEvaluationResultsOutcome(outcome.GetError());
    }
}

void ConfigClient::ListAggregateConfigRuleEvaluationResultsAsync(const ListAggregateConfigRuleEvaluationResultsRequest& request, const ListAggregateConfigRuleEvaluationResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListAggregateConfigRuleEvaluationResultsRequest&;
    using Resp = ListAggregateConfigRuleEvaluationResultsResponse;

    DoRequestAsync<Req, Resp>(
        "ListAggregateConfigRuleEvaluationResults", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ConfigClient::ListAggregateConfigRuleEvaluationResultsOutcomeCallable ConfigClient::ListAggregateConfigRuleEvaluationResultsCallable(const ListAggregateConfigRuleEvaluationResultsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListAggregateConfigRuleEvaluationResultsOutcome>>();
    ListAggregateConfigRuleEvaluationResultsAsync(
    request,
    [prom](
        const ConfigClient*,
        const ListAggregateConfigRuleEvaluationResultsRequest&,
        ListAggregateConfigRuleEvaluationResultsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ConfigClient::ListAggregateConfigRulesOutcome ConfigClient::ListAggregateConfigRules(const ListAggregateConfigRulesRequest &request)
{
    auto outcome = MakeRequest(request, "ListAggregateConfigRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListAggregateConfigRulesResponse rsp = ListAggregateConfigRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListAggregateConfigRulesOutcome(rsp);
        else
            return ListAggregateConfigRulesOutcome(o.GetError());
    }
    else
    {
        return ListAggregateConfigRulesOutcome(outcome.GetError());
    }
}

void ConfigClient::ListAggregateConfigRulesAsync(const ListAggregateConfigRulesRequest& request, const ListAggregateConfigRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListAggregateConfigRulesRequest&;
    using Resp = ListAggregateConfigRulesResponse;

    DoRequestAsync<Req, Resp>(
        "ListAggregateConfigRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ConfigClient::ListAggregateConfigRulesOutcomeCallable ConfigClient::ListAggregateConfigRulesCallable(const ListAggregateConfigRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListAggregateConfigRulesOutcome>>();
    ListAggregateConfigRulesAsync(
    request,
    [prom](
        const ConfigClient*,
        const ListAggregateConfigRulesRequest&,
        ListAggregateConfigRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ConfigClient::ListAggregateDiscoveredResourcesOutcome ConfigClient::ListAggregateDiscoveredResources(const ListAggregateDiscoveredResourcesRequest &request)
{
    auto outcome = MakeRequest(request, "ListAggregateDiscoveredResources");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListAggregateDiscoveredResourcesResponse rsp = ListAggregateDiscoveredResourcesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListAggregateDiscoveredResourcesOutcome(rsp);
        else
            return ListAggregateDiscoveredResourcesOutcome(o.GetError());
    }
    else
    {
        return ListAggregateDiscoveredResourcesOutcome(outcome.GetError());
    }
}

void ConfigClient::ListAggregateDiscoveredResourcesAsync(const ListAggregateDiscoveredResourcesRequest& request, const ListAggregateDiscoveredResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListAggregateDiscoveredResourcesRequest&;
    using Resp = ListAggregateDiscoveredResourcesResponse;

    DoRequestAsync<Req, Resp>(
        "ListAggregateDiscoveredResources", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ConfigClient::ListAggregateDiscoveredResourcesOutcomeCallable ConfigClient::ListAggregateDiscoveredResourcesCallable(const ListAggregateDiscoveredResourcesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListAggregateDiscoveredResourcesOutcome>>();
    ListAggregateDiscoveredResourcesAsync(
    request,
    [prom](
        const ConfigClient*,
        const ListAggregateDiscoveredResourcesRequest&,
        ListAggregateDiscoveredResourcesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ConfigClient::ListAggregatorsOutcome ConfigClient::ListAggregators(const ListAggregatorsRequest &request)
{
    auto outcome = MakeRequest(request, "ListAggregators");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListAggregatorsResponse rsp = ListAggregatorsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListAggregatorsOutcome(rsp);
        else
            return ListAggregatorsOutcome(o.GetError());
    }
    else
    {
        return ListAggregatorsOutcome(outcome.GetError());
    }
}

void ConfigClient::ListAggregatorsAsync(const ListAggregatorsRequest& request, const ListAggregatorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListAggregatorsRequest&;
    using Resp = ListAggregatorsResponse;

    DoRequestAsync<Req, Resp>(
        "ListAggregators", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ConfigClient::ListAggregatorsOutcomeCallable ConfigClient::ListAggregatorsCallable(const ListAggregatorsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListAggregatorsOutcome>>();
    ListAggregatorsAsync(
    request,
    [prom](
        const ConfigClient*,
        const ListAggregatorsRequest&,
        ListAggregatorsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ConfigClient::ListAlarmPolicyOutcome ConfigClient::ListAlarmPolicy(const ListAlarmPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "ListAlarmPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListAlarmPolicyResponse rsp = ListAlarmPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListAlarmPolicyOutcome(rsp);
        else
            return ListAlarmPolicyOutcome(o.GetError());
    }
    else
    {
        return ListAlarmPolicyOutcome(outcome.GetError());
    }
}

void ConfigClient::ListAlarmPolicyAsync(const ListAlarmPolicyRequest& request, const ListAlarmPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListAlarmPolicyRequest&;
    using Resp = ListAlarmPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "ListAlarmPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ConfigClient::ListAlarmPolicyOutcomeCallable ConfigClient::ListAlarmPolicyCallable(const ListAlarmPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListAlarmPolicyOutcome>>();
    ListAlarmPolicyAsync(
    request,
    [prom](
        const ConfigClient*,
        const ListAlarmPolicyRequest&,
        ListAlarmPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ConfigClient::ListCompliancePacksOutcome ConfigClient::ListCompliancePacks(const ListCompliancePacksRequest &request)
{
    auto outcome = MakeRequest(request, "ListCompliancePacks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListCompliancePacksResponse rsp = ListCompliancePacksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListCompliancePacksOutcome(rsp);
        else
            return ListCompliancePacksOutcome(o.GetError());
    }
    else
    {
        return ListCompliancePacksOutcome(outcome.GetError());
    }
}

void ConfigClient::ListCompliancePacksAsync(const ListCompliancePacksRequest& request, const ListCompliancePacksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListCompliancePacksRequest&;
    using Resp = ListCompliancePacksResponse;

    DoRequestAsync<Req, Resp>(
        "ListCompliancePacks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ConfigClient::ListCompliancePacksOutcomeCallable ConfigClient::ListCompliancePacksCallable(const ListCompliancePacksRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListCompliancePacksOutcome>>();
    ListCompliancePacksAsync(
    request,
    [prom](
        const ConfigClient*,
        const ListCompliancePacksRequest&,
        ListCompliancePacksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ConfigClient::ListConfigRuleEvaluationResultsOutcome ConfigClient::ListConfigRuleEvaluationResults(const ListConfigRuleEvaluationResultsRequest &request)
{
    auto outcome = MakeRequest(request, "ListConfigRuleEvaluationResults");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListConfigRuleEvaluationResultsResponse rsp = ListConfigRuleEvaluationResultsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListConfigRuleEvaluationResultsOutcome(rsp);
        else
            return ListConfigRuleEvaluationResultsOutcome(o.GetError());
    }
    else
    {
        return ListConfigRuleEvaluationResultsOutcome(outcome.GetError());
    }
}

void ConfigClient::ListConfigRuleEvaluationResultsAsync(const ListConfigRuleEvaluationResultsRequest& request, const ListConfigRuleEvaluationResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListConfigRuleEvaluationResultsRequest&;
    using Resp = ListConfigRuleEvaluationResultsResponse;

    DoRequestAsync<Req, Resp>(
        "ListConfigRuleEvaluationResults", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ConfigClient::ListConfigRuleEvaluationResultsOutcomeCallable ConfigClient::ListConfigRuleEvaluationResultsCallable(const ListConfigRuleEvaluationResultsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListConfigRuleEvaluationResultsOutcome>>();
    ListConfigRuleEvaluationResultsAsync(
    request,
    [prom](
        const ConfigClient*,
        const ListConfigRuleEvaluationResultsRequest&,
        ListConfigRuleEvaluationResultsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ConfigClient::ListConfigRulesOutcome ConfigClient::ListConfigRules(const ListConfigRulesRequest &request)
{
    auto outcome = MakeRequest(request, "ListConfigRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListConfigRulesResponse rsp = ListConfigRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListConfigRulesOutcome(rsp);
        else
            return ListConfigRulesOutcome(o.GetError());
    }
    else
    {
        return ListConfigRulesOutcome(outcome.GetError());
    }
}

void ConfigClient::ListConfigRulesAsync(const ListConfigRulesRequest& request, const ListConfigRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListConfigRulesRequest&;
    using Resp = ListConfigRulesResponse;

    DoRequestAsync<Req, Resp>(
        "ListConfigRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ConfigClient::ListConfigRulesOutcomeCallable ConfigClient::ListConfigRulesCallable(const ListConfigRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListConfigRulesOutcome>>();
    ListConfigRulesAsync(
    request,
    [prom](
        const ConfigClient*,
        const ListConfigRulesRequest&,
        ListConfigRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ConfigClient::ListDiscoveredResourcesOutcome ConfigClient::ListDiscoveredResources(const ListDiscoveredResourcesRequest &request)
{
    auto outcome = MakeRequest(request, "ListDiscoveredResources");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListDiscoveredResourcesResponse rsp = ListDiscoveredResourcesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListDiscoveredResourcesOutcome(rsp);
        else
            return ListDiscoveredResourcesOutcome(o.GetError());
    }
    else
    {
        return ListDiscoveredResourcesOutcome(outcome.GetError());
    }
}

void ConfigClient::ListDiscoveredResourcesAsync(const ListDiscoveredResourcesRequest& request, const ListDiscoveredResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListDiscoveredResourcesRequest&;
    using Resp = ListDiscoveredResourcesResponse;

    DoRequestAsync<Req, Resp>(
        "ListDiscoveredResources", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ConfigClient::ListDiscoveredResourcesOutcomeCallable ConfigClient::ListDiscoveredResourcesCallable(const ListDiscoveredResourcesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListDiscoveredResourcesOutcome>>();
    ListDiscoveredResourcesAsync(
    request,
    [prom](
        const ConfigClient*,
        const ListDiscoveredResourcesRequest&,
        ListDiscoveredResourcesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ConfigClient::ListRemediationExecutionsOutcome ConfigClient::ListRemediationExecutions(const ListRemediationExecutionsRequest &request)
{
    auto outcome = MakeRequest(request, "ListRemediationExecutions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListRemediationExecutionsResponse rsp = ListRemediationExecutionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListRemediationExecutionsOutcome(rsp);
        else
            return ListRemediationExecutionsOutcome(o.GetError());
    }
    else
    {
        return ListRemediationExecutionsOutcome(outcome.GetError());
    }
}

void ConfigClient::ListRemediationExecutionsAsync(const ListRemediationExecutionsRequest& request, const ListRemediationExecutionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListRemediationExecutionsRequest&;
    using Resp = ListRemediationExecutionsResponse;

    DoRequestAsync<Req, Resp>(
        "ListRemediationExecutions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ConfigClient::ListRemediationExecutionsOutcomeCallable ConfigClient::ListRemediationExecutionsCallable(const ListRemediationExecutionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListRemediationExecutionsOutcome>>();
    ListRemediationExecutionsAsync(
    request,
    [prom](
        const ConfigClient*,
        const ListRemediationExecutionsRequest&,
        ListRemediationExecutionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ConfigClient::ListRemediationsOutcome ConfigClient::ListRemediations(const ListRemediationsRequest &request)
{
    auto outcome = MakeRequest(request, "ListRemediations");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListRemediationsResponse rsp = ListRemediationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListRemediationsOutcome(rsp);
        else
            return ListRemediationsOutcome(o.GetError());
    }
    else
    {
        return ListRemediationsOutcome(outcome.GetError());
    }
}

void ConfigClient::ListRemediationsAsync(const ListRemediationsRequest& request, const ListRemediationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListRemediationsRequest&;
    using Resp = ListRemediationsResponse;

    DoRequestAsync<Req, Resp>(
        "ListRemediations", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ConfigClient::ListRemediationsOutcomeCallable ConfigClient::ListRemediationsCallable(const ListRemediationsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListRemediationsOutcome>>();
    ListRemediationsAsync(
    request,
    [prom](
        const ConfigClient*,
        const ListRemediationsRequest&,
        ListRemediationsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ConfigClient::ListResourceTypesOutcome ConfigClient::ListResourceTypes(const ListResourceTypesRequest &request)
{
    auto outcome = MakeRequest(request, "ListResourceTypes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListResourceTypesResponse rsp = ListResourceTypesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListResourceTypesOutcome(rsp);
        else
            return ListResourceTypesOutcome(o.GetError());
    }
    else
    {
        return ListResourceTypesOutcome(outcome.GetError());
    }
}

void ConfigClient::ListResourceTypesAsync(const ListResourceTypesRequest& request, const ListResourceTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListResourceTypesRequest&;
    using Resp = ListResourceTypesResponse;

    DoRequestAsync<Req, Resp>(
        "ListResourceTypes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ConfigClient::ListResourceTypesOutcomeCallable ConfigClient::ListResourceTypesCallable(const ListResourceTypesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListResourceTypesOutcome>>();
    ListResourceTypesAsync(
    request,
    [prom](
        const ConfigClient*,
        const ListResourceTypesRequest&,
        ListResourceTypesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ConfigClient::ListSystemCompliancePacksOutcome ConfigClient::ListSystemCompliancePacks(const ListSystemCompliancePacksRequest &request)
{
    auto outcome = MakeRequest(request, "ListSystemCompliancePacks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListSystemCompliancePacksResponse rsp = ListSystemCompliancePacksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListSystemCompliancePacksOutcome(rsp);
        else
            return ListSystemCompliancePacksOutcome(o.GetError());
    }
    else
    {
        return ListSystemCompliancePacksOutcome(outcome.GetError());
    }
}

void ConfigClient::ListSystemCompliancePacksAsync(const ListSystemCompliancePacksRequest& request, const ListSystemCompliancePacksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListSystemCompliancePacksRequest&;
    using Resp = ListSystemCompliancePacksResponse;

    DoRequestAsync<Req, Resp>(
        "ListSystemCompliancePacks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ConfigClient::ListSystemCompliancePacksOutcomeCallable ConfigClient::ListSystemCompliancePacksCallable(const ListSystemCompliancePacksRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListSystemCompliancePacksOutcome>>();
    ListSystemCompliancePacksAsync(
    request,
    [prom](
        const ConfigClient*,
        const ListSystemCompliancePacksRequest&,
        ListSystemCompliancePacksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ConfigClient::ListSystemRulesOutcome ConfigClient::ListSystemRules(const ListSystemRulesRequest &request)
{
    auto outcome = MakeRequest(request, "ListSystemRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListSystemRulesResponse rsp = ListSystemRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListSystemRulesOutcome(rsp);
        else
            return ListSystemRulesOutcome(o.GetError());
    }
    else
    {
        return ListSystemRulesOutcome(outcome.GetError());
    }
}

void ConfigClient::ListSystemRulesAsync(const ListSystemRulesRequest& request, const ListSystemRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListSystemRulesRequest&;
    using Resp = ListSystemRulesResponse;

    DoRequestAsync<Req, Resp>(
        "ListSystemRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ConfigClient::ListSystemRulesOutcomeCallable ConfigClient::ListSystemRulesCallable(const ListSystemRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListSystemRulesOutcome>>();
    ListSystemRulesAsync(
    request,
    [prom](
        const ConfigClient*,
        const ListSystemRulesRequest&,
        ListSystemRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ConfigClient::OpenAggregateConfigRuleOutcome ConfigClient::OpenAggregateConfigRule(const OpenAggregateConfigRuleRequest &request)
{
    auto outcome = MakeRequest(request, "OpenAggregateConfigRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OpenAggregateConfigRuleResponse rsp = OpenAggregateConfigRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OpenAggregateConfigRuleOutcome(rsp);
        else
            return OpenAggregateConfigRuleOutcome(o.GetError());
    }
    else
    {
        return OpenAggregateConfigRuleOutcome(outcome.GetError());
    }
}

void ConfigClient::OpenAggregateConfigRuleAsync(const OpenAggregateConfigRuleRequest& request, const OpenAggregateConfigRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const OpenAggregateConfigRuleRequest&;
    using Resp = OpenAggregateConfigRuleResponse;

    DoRequestAsync<Req, Resp>(
        "OpenAggregateConfigRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ConfigClient::OpenAggregateConfigRuleOutcomeCallable ConfigClient::OpenAggregateConfigRuleCallable(const OpenAggregateConfigRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<OpenAggregateConfigRuleOutcome>>();
    OpenAggregateConfigRuleAsync(
    request,
    [prom](
        const ConfigClient*,
        const OpenAggregateConfigRuleRequest&,
        OpenAggregateConfigRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ConfigClient::OpenConfigRecorderOutcome ConfigClient::OpenConfigRecorder(const OpenConfigRecorderRequest &request)
{
    auto outcome = MakeRequest(request, "OpenConfigRecorder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OpenConfigRecorderResponse rsp = OpenConfigRecorderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OpenConfigRecorderOutcome(rsp);
        else
            return OpenConfigRecorderOutcome(o.GetError());
    }
    else
    {
        return OpenConfigRecorderOutcome(outcome.GetError());
    }
}

void ConfigClient::OpenConfigRecorderAsync(const OpenConfigRecorderRequest& request, const OpenConfigRecorderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const OpenConfigRecorderRequest&;
    using Resp = OpenConfigRecorderResponse;

    DoRequestAsync<Req, Resp>(
        "OpenConfigRecorder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ConfigClient::OpenConfigRecorderOutcomeCallable ConfigClient::OpenConfigRecorderCallable(const OpenConfigRecorderRequest &request)
{
    const auto prom = std::make_shared<std::promise<OpenConfigRecorderOutcome>>();
    OpenConfigRecorderAsync(
    request,
    [prom](
        const ConfigClient*,
        const OpenConfigRecorderRequest&,
        OpenConfigRecorderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ConfigClient::OpenConfigRuleOutcome ConfigClient::OpenConfigRule(const OpenConfigRuleRequest &request)
{
    auto outcome = MakeRequest(request, "OpenConfigRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OpenConfigRuleResponse rsp = OpenConfigRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OpenConfigRuleOutcome(rsp);
        else
            return OpenConfigRuleOutcome(o.GetError());
    }
    else
    {
        return OpenConfigRuleOutcome(outcome.GetError());
    }
}

void ConfigClient::OpenConfigRuleAsync(const OpenConfigRuleRequest& request, const OpenConfigRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const OpenConfigRuleRequest&;
    using Resp = OpenConfigRuleResponse;

    DoRequestAsync<Req, Resp>(
        "OpenConfigRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ConfigClient::OpenConfigRuleOutcomeCallable ConfigClient::OpenConfigRuleCallable(const OpenConfigRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<OpenConfigRuleOutcome>>();
    OpenConfigRuleAsync(
    request,
    [prom](
        const ConfigClient*,
        const OpenConfigRuleRequest&,
        OpenConfigRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ConfigClient::PutEvaluationsOutcome ConfigClient::PutEvaluations(const PutEvaluationsRequest &request)
{
    auto outcome = MakeRequest(request, "PutEvaluations");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PutEvaluationsResponse rsp = PutEvaluationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PutEvaluationsOutcome(rsp);
        else
            return PutEvaluationsOutcome(o.GetError());
    }
    else
    {
        return PutEvaluationsOutcome(outcome.GetError());
    }
}

void ConfigClient::PutEvaluationsAsync(const PutEvaluationsRequest& request, const PutEvaluationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const PutEvaluationsRequest&;
    using Resp = PutEvaluationsResponse;

    DoRequestAsync<Req, Resp>(
        "PutEvaluations", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ConfigClient::PutEvaluationsOutcomeCallable ConfigClient::PutEvaluationsCallable(const PutEvaluationsRequest &request)
{
    const auto prom = std::make_shared<std::promise<PutEvaluationsOutcome>>();
    PutEvaluationsAsync(
    request,
    [prom](
        const ConfigClient*,
        const PutEvaluationsRequest&,
        PutEvaluationsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ConfigClient::StartAggregateConfigRuleEvaluationOutcome ConfigClient::StartAggregateConfigRuleEvaluation(const StartAggregateConfigRuleEvaluationRequest &request)
{
    auto outcome = MakeRequest(request, "StartAggregateConfigRuleEvaluation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartAggregateConfigRuleEvaluationResponse rsp = StartAggregateConfigRuleEvaluationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartAggregateConfigRuleEvaluationOutcome(rsp);
        else
            return StartAggregateConfigRuleEvaluationOutcome(o.GetError());
    }
    else
    {
        return StartAggregateConfigRuleEvaluationOutcome(outcome.GetError());
    }
}

void ConfigClient::StartAggregateConfigRuleEvaluationAsync(const StartAggregateConfigRuleEvaluationRequest& request, const StartAggregateConfigRuleEvaluationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartAggregateConfigRuleEvaluationRequest&;
    using Resp = StartAggregateConfigRuleEvaluationResponse;

    DoRequestAsync<Req, Resp>(
        "StartAggregateConfigRuleEvaluation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ConfigClient::StartAggregateConfigRuleEvaluationOutcomeCallable ConfigClient::StartAggregateConfigRuleEvaluationCallable(const StartAggregateConfigRuleEvaluationRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartAggregateConfigRuleEvaluationOutcome>>();
    StartAggregateConfigRuleEvaluationAsync(
    request,
    [prom](
        const ConfigClient*,
        const StartAggregateConfigRuleEvaluationRequest&,
        StartAggregateConfigRuleEvaluationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ConfigClient::StartConfigRuleEvaluationOutcome ConfigClient::StartConfigRuleEvaluation(const StartConfigRuleEvaluationRequest &request)
{
    auto outcome = MakeRequest(request, "StartConfigRuleEvaluation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartConfigRuleEvaluationResponse rsp = StartConfigRuleEvaluationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartConfigRuleEvaluationOutcome(rsp);
        else
            return StartConfigRuleEvaluationOutcome(o.GetError());
    }
    else
    {
        return StartConfigRuleEvaluationOutcome(outcome.GetError());
    }
}

void ConfigClient::StartConfigRuleEvaluationAsync(const StartConfigRuleEvaluationRequest& request, const StartConfigRuleEvaluationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartConfigRuleEvaluationRequest&;
    using Resp = StartConfigRuleEvaluationResponse;

    DoRequestAsync<Req, Resp>(
        "StartConfigRuleEvaluation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ConfigClient::StartConfigRuleEvaluationOutcomeCallable ConfigClient::StartConfigRuleEvaluationCallable(const StartConfigRuleEvaluationRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartConfigRuleEvaluationOutcome>>();
    StartConfigRuleEvaluationAsync(
    request,
    [prom](
        const ConfigClient*,
        const StartConfigRuleEvaluationRequest&,
        StartConfigRuleEvaluationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ConfigClient::StartRemediationOutcome ConfigClient::StartRemediation(const StartRemediationRequest &request)
{
    auto outcome = MakeRequest(request, "StartRemediation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartRemediationResponse rsp = StartRemediationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartRemediationOutcome(rsp);
        else
            return StartRemediationOutcome(o.GetError());
    }
    else
    {
        return StartRemediationOutcome(outcome.GetError());
    }
}

void ConfigClient::StartRemediationAsync(const StartRemediationRequest& request, const StartRemediationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartRemediationRequest&;
    using Resp = StartRemediationResponse;

    DoRequestAsync<Req, Resp>(
        "StartRemediation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ConfigClient::StartRemediationOutcomeCallable ConfigClient::StartRemediationCallable(const StartRemediationRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartRemediationOutcome>>();
    StartRemediationAsync(
    request,
    [prom](
        const ConfigClient*,
        const StartRemediationRequest&,
        StartRemediationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ConfigClient::UpdateAggregateCompliancePackOutcome ConfigClient::UpdateAggregateCompliancePack(const UpdateAggregateCompliancePackRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateAggregateCompliancePack");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateAggregateCompliancePackResponse rsp = UpdateAggregateCompliancePackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateAggregateCompliancePackOutcome(rsp);
        else
            return UpdateAggregateCompliancePackOutcome(o.GetError());
    }
    else
    {
        return UpdateAggregateCompliancePackOutcome(outcome.GetError());
    }
}

void ConfigClient::UpdateAggregateCompliancePackAsync(const UpdateAggregateCompliancePackRequest& request, const UpdateAggregateCompliancePackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateAggregateCompliancePackRequest&;
    using Resp = UpdateAggregateCompliancePackResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateAggregateCompliancePack", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ConfigClient::UpdateAggregateCompliancePackOutcomeCallable ConfigClient::UpdateAggregateCompliancePackCallable(const UpdateAggregateCompliancePackRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateAggregateCompliancePackOutcome>>();
    UpdateAggregateCompliancePackAsync(
    request,
    [prom](
        const ConfigClient*,
        const UpdateAggregateCompliancePackRequest&,
        UpdateAggregateCompliancePackOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ConfigClient::UpdateAggregateCompliancePackStatusOutcome ConfigClient::UpdateAggregateCompliancePackStatus(const UpdateAggregateCompliancePackStatusRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateAggregateCompliancePackStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateAggregateCompliancePackStatusResponse rsp = UpdateAggregateCompliancePackStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateAggregateCompliancePackStatusOutcome(rsp);
        else
            return UpdateAggregateCompliancePackStatusOutcome(o.GetError());
    }
    else
    {
        return UpdateAggregateCompliancePackStatusOutcome(outcome.GetError());
    }
}

void ConfigClient::UpdateAggregateCompliancePackStatusAsync(const UpdateAggregateCompliancePackStatusRequest& request, const UpdateAggregateCompliancePackStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateAggregateCompliancePackStatusRequest&;
    using Resp = UpdateAggregateCompliancePackStatusResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateAggregateCompliancePackStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ConfigClient::UpdateAggregateCompliancePackStatusOutcomeCallable ConfigClient::UpdateAggregateCompliancePackStatusCallable(const UpdateAggregateCompliancePackStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateAggregateCompliancePackStatusOutcome>>();
    UpdateAggregateCompliancePackStatusAsync(
    request,
    [prom](
        const ConfigClient*,
        const UpdateAggregateCompliancePackStatusRequest&,
        UpdateAggregateCompliancePackStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ConfigClient::UpdateAggregateConfigDeliverOutcome ConfigClient::UpdateAggregateConfigDeliver(const UpdateAggregateConfigDeliverRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateAggregateConfigDeliver");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateAggregateConfigDeliverResponse rsp = UpdateAggregateConfigDeliverResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateAggregateConfigDeliverOutcome(rsp);
        else
            return UpdateAggregateConfigDeliverOutcome(o.GetError());
    }
    else
    {
        return UpdateAggregateConfigDeliverOutcome(outcome.GetError());
    }
}

void ConfigClient::UpdateAggregateConfigDeliverAsync(const UpdateAggregateConfigDeliverRequest& request, const UpdateAggregateConfigDeliverAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateAggregateConfigDeliverRequest&;
    using Resp = UpdateAggregateConfigDeliverResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateAggregateConfigDeliver", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ConfigClient::UpdateAggregateConfigDeliverOutcomeCallable ConfigClient::UpdateAggregateConfigDeliverCallable(const UpdateAggregateConfigDeliverRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateAggregateConfigDeliverOutcome>>();
    UpdateAggregateConfigDeliverAsync(
    request,
    [prom](
        const ConfigClient*,
        const UpdateAggregateConfigDeliverRequest&,
        UpdateAggregateConfigDeliverOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ConfigClient::UpdateAggregateConfigRuleOutcome ConfigClient::UpdateAggregateConfigRule(const UpdateAggregateConfigRuleRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateAggregateConfigRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateAggregateConfigRuleResponse rsp = UpdateAggregateConfigRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateAggregateConfigRuleOutcome(rsp);
        else
            return UpdateAggregateConfigRuleOutcome(o.GetError());
    }
    else
    {
        return UpdateAggregateConfigRuleOutcome(outcome.GetError());
    }
}

void ConfigClient::UpdateAggregateConfigRuleAsync(const UpdateAggregateConfigRuleRequest& request, const UpdateAggregateConfigRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateAggregateConfigRuleRequest&;
    using Resp = UpdateAggregateConfigRuleResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateAggregateConfigRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ConfigClient::UpdateAggregateConfigRuleOutcomeCallable ConfigClient::UpdateAggregateConfigRuleCallable(const UpdateAggregateConfigRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateAggregateConfigRuleOutcome>>();
    UpdateAggregateConfigRuleAsync(
    request,
    [prom](
        const ConfigClient*,
        const UpdateAggregateConfigRuleRequest&,
        UpdateAggregateConfigRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ConfigClient::UpdateAlarmPolicyOutcome ConfigClient::UpdateAlarmPolicy(const UpdateAlarmPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateAlarmPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateAlarmPolicyResponse rsp = UpdateAlarmPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateAlarmPolicyOutcome(rsp);
        else
            return UpdateAlarmPolicyOutcome(o.GetError());
    }
    else
    {
        return UpdateAlarmPolicyOutcome(outcome.GetError());
    }
}

void ConfigClient::UpdateAlarmPolicyAsync(const UpdateAlarmPolicyRequest& request, const UpdateAlarmPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateAlarmPolicyRequest&;
    using Resp = UpdateAlarmPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateAlarmPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ConfigClient::UpdateAlarmPolicyOutcomeCallable ConfigClient::UpdateAlarmPolicyCallable(const UpdateAlarmPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateAlarmPolicyOutcome>>();
    UpdateAlarmPolicyAsync(
    request,
    [prom](
        const ConfigClient*,
        const UpdateAlarmPolicyRequest&,
        UpdateAlarmPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ConfigClient::UpdateCompliancePackOutcome ConfigClient::UpdateCompliancePack(const UpdateCompliancePackRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateCompliancePack");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateCompliancePackResponse rsp = UpdateCompliancePackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateCompliancePackOutcome(rsp);
        else
            return UpdateCompliancePackOutcome(o.GetError());
    }
    else
    {
        return UpdateCompliancePackOutcome(outcome.GetError());
    }
}

void ConfigClient::UpdateCompliancePackAsync(const UpdateCompliancePackRequest& request, const UpdateCompliancePackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateCompliancePackRequest&;
    using Resp = UpdateCompliancePackResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateCompliancePack", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ConfigClient::UpdateCompliancePackOutcomeCallable ConfigClient::UpdateCompliancePackCallable(const UpdateCompliancePackRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateCompliancePackOutcome>>();
    UpdateCompliancePackAsync(
    request,
    [prom](
        const ConfigClient*,
        const UpdateCompliancePackRequest&,
        UpdateCompliancePackOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ConfigClient::UpdateCompliancePackStatusOutcome ConfigClient::UpdateCompliancePackStatus(const UpdateCompliancePackStatusRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateCompliancePackStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateCompliancePackStatusResponse rsp = UpdateCompliancePackStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateCompliancePackStatusOutcome(rsp);
        else
            return UpdateCompliancePackStatusOutcome(o.GetError());
    }
    else
    {
        return UpdateCompliancePackStatusOutcome(outcome.GetError());
    }
}

void ConfigClient::UpdateCompliancePackStatusAsync(const UpdateCompliancePackStatusRequest& request, const UpdateCompliancePackStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateCompliancePackStatusRequest&;
    using Resp = UpdateCompliancePackStatusResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateCompliancePackStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ConfigClient::UpdateCompliancePackStatusOutcomeCallable ConfigClient::UpdateCompliancePackStatusCallable(const UpdateCompliancePackStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateCompliancePackStatusOutcome>>();
    UpdateCompliancePackStatusAsync(
    request,
    [prom](
        const ConfigClient*,
        const UpdateCompliancePackStatusRequest&,
        UpdateCompliancePackStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ConfigClient::UpdateConfigDeliverOutcome ConfigClient::UpdateConfigDeliver(const UpdateConfigDeliverRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateConfigDeliver");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateConfigDeliverResponse rsp = UpdateConfigDeliverResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateConfigDeliverOutcome(rsp);
        else
            return UpdateConfigDeliverOutcome(o.GetError());
    }
    else
    {
        return UpdateConfigDeliverOutcome(outcome.GetError());
    }
}

void ConfigClient::UpdateConfigDeliverAsync(const UpdateConfigDeliverRequest& request, const UpdateConfigDeliverAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateConfigDeliverRequest&;
    using Resp = UpdateConfigDeliverResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateConfigDeliver", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ConfigClient::UpdateConfigDeliverOutcomeCallable ConfigClient::UpdateConfigDeliverCallable(const UpdateConfigDeliverRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateConfigDeliverOutcome>>();
    UpdateConfigDeliverAsync(
    request,
    [prom](
        const ConfigClient*,
        const UpdateConfigDeliverRequest&,
        UpdateConfigDeliverOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ConfigClient::UpdateConfigRecorderOutcome ConfigClient::UpdateConfigRecorder(const UpdateConfigRecorderRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateConfigRecorder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateConfigRecorderResponse rsp = UpdateConfigRecorderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateConfigRecorderOutcome(rsp);
        else
            return UpdateConfigRecorderOutcome(o.GetError());
    }
    else
    {
        return UpdateConfigRecorderOutcome(outcome.GetError());
    }
}

void ConfigClient::UpdateConfigRecorderAsync(const UpdateConfigRecorderRequest& request, const UpdateConfigRecorderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateConfigRecorderRequest&;
    using Resp = UpdateConfigRecorderResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateConfigRecorder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ConfigClient::UpdateConfigRecorderOutcomeCallable ConfigClient::UpdateConfigRecorderCallable(const UpdateConfigRecorderRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateConfigRecorderOutcome>>();
    UpdateConfigRecorderAsync(
    request,
    [prom](
        const ConfigClient*,
        const UpdateConfigRecorderRequest&,
        UpdateConfigRecorderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ConfigClient::UpdateConfigRuleOutcome ConfigClient::UpdateConfigRule(const UpdateConfigRuleRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateConfigRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateConfigRuleResponse rsp = UpdateConfigRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateConfigRuleOutcome(rsp);
        else
            return UpdateConfigRuleOutcome(o.GetError());
    }
    else
    {
        return UpdateConfigRuleOutcome(outcome.GetError());
    }
}

void ConfigClient::UpdateConfigRuleAsync(const UpdateConfigRuleRequest& request, const UpdateConfigRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateConfigRuleRequest&;
    using Resp = UpdateConfigRuleResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateConfigRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ConfigClient::UpdateConfigRuleOutcomeCallable ConfigClient::UpdateConfigRuleCallable(const UpdateConfigRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateConfigRuleOutcome>>();
    UpdateConfigRuleAsync(
    request,
    [prom](
        const ConfigClient*,
        const UpdateConfigRuleRequest&,
        UpdateConfigRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ConfigClient::UpdateRemediationOutcome ConfigClient::UpdateRemediation(const UpdateRemediationRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateRemediation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateRemediationResponse rsp = UpdateRemediationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateRemediationOutcome(rsp);
        else
            return UpdateRemediationOutcome(o.GetError());
    }
    else
    {
        return UpdateRemediationOutcome(outcome.GetError());
    }
}

void ConfigClient::UpdateRemediationAsync(const UpdateRemediationRequest& request, const UpdateRemediationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateRemediationRequest&;
    using Resp = UpdateRemediationResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateRemediation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ConfigClient::UpdateRemediationOutcomeCallable ConfigClient::UpdateRemediationCallable(const UpdateRemediationRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateRemediationOutcome>>();
    UpdateRemediationAsync(
    request,
    [prom](
        const ConfigClient*,
        const UpdateRemediationRequest&,
        UpdateRemediationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


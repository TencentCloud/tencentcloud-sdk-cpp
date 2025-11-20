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

#include <tencentcloud/monitor/v20180724/MonitorClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Monitor::V20180724;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-07-24";
    const string ENDPOINT = "monitor.tencentcloudapi.com";
}

MonitorClient::MonitorClient(const Credential &credential, const string &region) :
    MonitorClient(credential, region, ClientProfile())
{
}

MonitorClient::MonitorClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


MonitorClient::BindPrometheusManagedGrafanaOutcome MonitorClient::BindPrometheusManagedGrafana(const BindPrometheusManagedGrafanaRequest &request)
{
    auto outcome = MakeRequest(request, "BindPrometheusManagedGrafana");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindPrometheusManagedGrafanaResponse rsp = BindPrometheusManagedGrafanaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindPrometheusManagedGrafanaOutcome(rsp);
        else
            return BindPrometheusManagedGrafanaOutcome(o.GetError());
    }
    else
    {
        return BindPrometheusManagedGrafanaOutcome(outcome.GetError());
    }
}

void MonitorClient::BindPrometheusManagedGrafanaAsync(const BindPrometheusManagedGrafanaRequest& request, const BindPrometheusManagedGrafanaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BindPrometheusManagedGrafanaRequest&;
    using Resp = BindPrometheusManagedGrafanaResponse;

    DoRequestAsync<Req, Resp>(
        "BindPrometheusManagedGrafana", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::BindPrometheusManagedGrafanaOutcomeCallable MonitorClient::BindPrometheusManagedGrafanaCallable(const BindPrometheusManagedGrafanaRequest &request)
{
    const auto prom = std::make_shared<std::promise<BindPrometheusManagedGrafanaOutcome>>();
    BindPrometheusManagedGrafanaAsync(
    request,
    [prom](
        const MonitorClient*,
        const BindPrometheusManagedGrafanaRequest&,
        BindPrometheusManagedGrafanaOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::BindingPolicyObjectOutcome MonitorClient::BindingPolicyObject(const BindingPolicyObjectRequest &request)
{
    auto outcome = MakeRequest(request, "BindingPolicyObject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindingPolicyObjectResponse rsp = BindingPolicyObjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindingPolicyObjectOutcome(rsp);
        else
            return BindingPolicyObjectOutcome(o.GetError());
    }
    else
    {
        return BindingPolicyObjectOutcome(outcome.GetError());
    }
}

void MonitorClient::BindingPolicyObjectAsync(const BindingPolicyObjectRequest& request, const BindingPolicyObjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BindingPolicyObjectRequest&;
    using Resp = BindingPolicyObjectResponse;

    DoRequestAsync<Req, Resp>(
        "BindingPolicyObject", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::BindingPolicyObjectOutcomeCallable MonitorClient::BindingPolicyObjectCallable(const BindingPolicyObjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<BindingPolicyObjectOutcome>>();
    BindingPolicyObjectAsync(
    request,
    [prom](
        const MonitorClient*,
        const BindingPolicyObjectRequest&,
        BindingPolicyObjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::BindingPolicyTagOutcome MonitorClient::BindingPolicyTag(const BindingPolicyTagRequest &request)
{
    auto outcome = MakeRequest(request, "BindingPolicyTag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindingPolicyTagResponse rsp = BindingPolicyTagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindingPolicyTagOutcome(rsp);
        else
            return BindingPolicyTagOutcome(o.GetError());
    }
    else
    {
        return BindingPolicyTagOutcome(outcome.GetError());
    }
}

void MonitorClient::BindingPolicyTagAsync(const BindingPolicyTagRequest& request, const BindingPolicyTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BindingPolicyTagRequest&;
    using Resp = BindingPolicyTagResponse;

    DoRequestAsync<Req, Resp>(
        "BindingPolicyTag", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::BindingPolicyTagOutcomeCallable MonitorClient::BindingPolicyTagCallable(const BindingPolicyTagRequest &request)
{
    const auto prom = std::make_shared<std::promise<BindingPolicyTagOutcome>>();
    BindingPolicyTagAsync(
    request,
    [prom](
        const MonitorClient*,
        const BindingPolicyTagRequest&,
        BindingPolicyTagOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::CleanGrafanaInstanceOutcome MonitorClient::CleanGrafanaInstance(const CleanGrafanaInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CleanGrafanaInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CleanGrafanaInstanceResponse rsp = CleanGrafanaInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CleanGrafanaInstanceOutcome(rsp);
        else
            return CleanGrafanaInstanceOutcome(o.GetError());
    }
    else
    {
        return CleanGrafanaInstanceOutcome(outcome.GetError());
    }
}

void MonitorClient::CleanGrafanaInstanceAsync(const CleanGrafanaInstanceRequest& request, const CleanGrafanaInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CleanGrafanaInstanceRequest&;
    using Resp = CleanGrafanaInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "CleanGrafanaInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::CleanGrafanaInstanceOutcomeCallable MonitorClient::CleanGrafanaInstanceCallable(const CleanGrafanaInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CleanGrafanaInstanceOutcome>>();
    CleanGrafanaInstanceAsync(
    request,
    [prom](
        const MonitorClient*,
        const CleanGrafanaInstanceRequest&,
        CleanGrafanaInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::CreateAlarmNoticeOutcome MonitorClient::CreateAlarmNotice(const CreateAlarmNoticeRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAlarmNotice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAlarmNoticeResponse rsp = CreateAlarmNoticeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAlarmNoticeOutcome(rsp);
        else
            return CreateAlarmNoticeOutcome(o.GetError());
    }
    else
    {
        return CreateAlarmNoticeOutcome(outcome.GetError());
    }
}

void MonitorClient::CreateAlarmNoticeAsync(const CreateAlarmNoticeRequest& request, const CreateAlarmNoticeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAlarmNoticeRequest&;
    using Resp = CreateAlarmNoticeResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAlarmNotice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::CreateAlarmNoticeOutcomeCallable MonitorClient::CreateAlarmNoticeCallable(const CreateAlarmNoticeRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAlarmNoticeOutcome>>();
    CreateAlarmNoticeAsync(
    request,
    [prom](
        const MonitorClient*,
        const CreateAlarmNoticeRequest&,
        CreateAlarmNoticeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::CreateAlarmPolicyOutcome MonitorClient::CreateAlarmPolicy(const CreateAlarmPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAlarmPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAlarmPolicyResponse rsp = CreateAlarmPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAlarmPolicyOutcome(rsp);
        else
            return CreateAlarmPolicyOutcome(o.GetError());
    }
    else
    {
        return CreateAlarmPolicyOutcome(outcome.GetError());
    }
}

void MonitorClient::CreateAlarmPolicyAsync(const CreateAlarmPolicyRequest& request, const CreateAlarmPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAlarmPolicyRequest&;
    using Resp = CreateAlarmPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAlarmPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::CreateAlarmPolicyOutcomeCallable MonitorClient::CreateAlarmPolicyCallable(const CreateAlarmPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAlarmPolicyOutcome>>();
    CreateAlarmPolicyAsync(
    request,
    [prom](
        const MonitorClient*,
        const CreateAlarmPolicyRequest&,
        CreateAlarmPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::CreateAlarmShieldOutcome MonitorClient::CreateAlarmShield(const CreateAlarmShieldRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAlarmShield");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAlarmShieldResponse rsp = CreateAlarmShieldResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAlarmShieldOutcome(rsp);
        else
            return CreateAlarmShieldOutcome(o.GetError());
    }
    else
    {
        return CreateAlarmShieldOutcome(outcome.GetError());
    }
}

void MonitorClient::CreateAlarmShieldAsync(const CreateAlarmShieldRequest& request, const CreateAlarmShieldAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAlarmShieldRequest&;
    using Resp = CreateAlarmShieldResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAlarmShield", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::CreateAlarmShieldOutcomeCallable MonitorClient::CreateAlarmShieldCallable(const CreateAlarmShieldRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAlarmShieldOutcome>>();
    CreateAlarmShieldAsync(
    request,
    [prom](
        const MonitorClient*,
        const CreateAlarmShieldRequest&,
        CreateAlarmShieldOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::CreateAlertRuleOutcome MonitorClient::CreateAlertRule(const CreateAlertRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAlertRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAlertRuleResponse rsp = CreateAlertRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAlertRuleOutcome(rsp);
        else
            return CreateAlertRuleOutcome(o.GetError());
    }
    else
    {
        return CreateAlertRuleOutcome(outcome.GetError());
    }
}

void MonitorClient::CreateAlertRuleAsync(const CreateAlertRuleRequest& request, const CreateAlertRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAlertRuleRequest&;
    using Resp = CreateAlertRuleResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAlertRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::CreateAlertRuleOutcomeCallable MonitorClient::CreateAlertRuleCallable(const CreateAlertRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAlertRuleOutcome>>();
    CreateAlertRuleAsync(
    request,
    [prom](
        const MonitorClient*,
        const CreateAlertRuleRequest&,
        CreateAlertRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::CreateConditionsTemplateOutcome MonitorClient::CreateConditionsTemplate(const CreateConditionsTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateConditionsTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateConditionsTemplateResponse rsp = CreateConditionsTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateConditionsTemplateOutcome(rsp);
        else
            return CreateConditionsTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateConditionsTemplateOutcome(outcome.GetError());
    }
}

void MonitorClient::CreateConditionsTemplateAsync(const CreateConditionsTemplateRequest& request, const CreateConditionsTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateConditionsTemplateRequest&;
    using Resp = CreateConditionsTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "CreateConditionsTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::CreateConditionsTemplateOutcomeCallable MonitorClient::CreateConditionsTemplateCallable(const CreateConditionsTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateConditionsTemplateOutcome>>();
    CreateConditionsTemplateAsync(
    request,
    [prom](
        const MonitorClient*,
        const CreateConditionsTemplateRequest&,
        CreateConditionsTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::CreateExporterIntegrationOutcome MonitorClient::CreateExporterIntegration(const CreateExporterIntegrationRequest &request)
{
    auto outcome = MakeRequest(request, "CreateExporterIntegration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateExporterIntegrationResponse rsp = CreateExporterIntegrationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateExporterIntegrationOutcome(rsp);
        else
            return CreateExporterIntegrationOutcome(o.GetError());
    }
    else
    {
        return CreateExporterIntegrationOutcome(outcome.GetError());
    }
}

void MonitorClient::CreateExporterIntegrationAsync(const CreateExporterIntegrationRequest& request, const CreateExporterIntegrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateExporterIntegrationRequest&;
    using Resp = CreateExporterIntegrationResponse;

    DoRequestAsync<Req, Resp>(
        "CreateExporterIntegration", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::CreateExporterIntegrationOutcomeCallable MonitorClient::CreateExporterIntegrationCallable(const CreateExporterIntegrationRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateExporterIntegrationOutcome>>();
    CreateExporterIntegrationAsync(
    request,
    [prom](
        const MonitorClient*,
        const CreateExporterIntegrationRequest&,
        CreateExporterIntegrationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::CreateExternalClusterOutcome MonitorClient::CreateExternalCluster(const CreateExternalClusterRequest &request)
{
    auto outcome = MakeRequest(request, "CreateExternalCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateExternalClusterResponse rsp = CreateExternalClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateExternalClusterOutcome(rsp);
        else
            return CreateExternalClusterOutcome(o.GetError());
    }
    else
    {
        return CreateExternalClusterOutcome(outcome.GetError());
    }
}

void MonitorClient::CreateExternalClusterAsync(const CreateExternalClusterRequest& request, const CreateExternalClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateExternalClusterRequest&;
    using Resp = CreateExternalClusterResponse;

    DoRequestAsync<Req, Resp>(
        "CreateExternalCluster", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::CreateExternalClusterOutcomeCallable MonitorClient::CreateExternalClusterCallable(const CreateExternalClusterRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateExternalClusterOutcome>>();
    CreateExternalClusterAsync(
    request,
    [prom](
        const MonitorClient*,
        const CreateExternalClusterRequest&,
        CreateExternalClusterOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::CreateGrafanaInstanceOutcome MonitorClient::CreateGrafanaInstance(const CreateGrafanaInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateGrafanaInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateGrafanaInstanceResponse rsp = CreateGrafanaInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateGrafanaInstanceOutcome(rsp);
        else
            return CreateGrafanaInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateGrafanaInstanceOutcome(outcome.GetError());
    }
}

void MonitorClient::CreateGrafanaInstanceAsync(const CreateGrafanaInstanceRequest& request, const CreateGrafanaInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateGrafanaInstanceRequest&;
    using Resp = CreateGrafanaInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateGrafanaInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::CreateGrafanaInstanceOutcomeCallable MonitorClient::CreateGrafanaInstanceCallable(const CreateGrafanaInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateGrafanaInstanceOutcome>>();
    CreateGrafanaInstanceAsync(
    request,
    [prom](
        const MonitorClient*,
        const CreateGrafanaInstanceRequest&,
        CreateGrafanaInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::CreateGrafanaIntegrationOutcome MonitorClient::CreateGrafanaIntegration(const CreateGrafanaIntegrationRequest &request)
{
    auto outcome = MakeRequest(request, "CreateGrafanaIntegration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateGrafanaIntegrationResponse rsp = CreateGrafanaIntegrationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateGrafanaIntegrationOutcome(rsp);
        else
            return CreateGrafanaIntegrationOutcome(o.GetError());
    }
    else
    {
        return CreateGrafanaIntegrationOutcome(outcome.GetError());
    }
}

void MonitorClient::CreateGrafanaIntegrationAsync(const CreateGrafanaIntegrationRequest& request, const CreateGrafanaIntegrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateGrafanaIntegrationRequest&;
    using Resp = CreateGrafanaIntegrationResponse;

    DoRequestAsync<Req, Resp>(
        "CreateGrafanaIntegration", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::CreateGrafanaIntegrationOutcomeCallable MonitorClient::CreateGrafanaIntegrationCallable(const CreateGrafanaIntegrationRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateGrafanaIntegrationOutcome>>();
    CreateGrafanaIntegrationAsync(
    request,
    [prom](
        const MonitorClient*,
        const CreateGrafanaIntegrationRequest&,
        CreateGrafanaIntegrationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::CreateGrafanaNotificationChannelOutcome MonitorClient::CreateGrafanaNotificationChannel(const CreateGrafanaNotificationChannelRequest &request)
{
    auto outcome = MakeRequest(request, "CreateGrafanaNotificationChannel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateGrafanaNotificationChannelResponse rsp = CreateGrafanaNotificationChannelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateGrafanaNotificationChannelOutcome(rsp);
        else
            return CreateGrafanaNotificationChannelOutcome(o.GetError());
    }
    else
    {
        return CreateGrafanaNotificationChannelOutcome(outcome.GetError());
    }
}

void MonitorClient::CreateGrafanaNotificationChannelAsync(const CreateGrafanaNotificationChannelRequest& request, const CreateGrafanaNotificationChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateGrafanaNotificationChannelRequest&;
    using Resp = CreateGrafanaNotificationChannelResponse;

    DoRequestAsync<Req, Resp>(
        "CreateGrafanaNotificationChannel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::CreateGrafanaNotificationChannelOutcomeCallable MonitorClient::CreateGrafanaNotificationChannelCallable(const CreateGrafanaNotificationChannelRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateGrafanaNotificationChannelOutcome>>();
    CreateGrafanaNotificationChannelAsync(
    request,
    [prom](
        const MonitorClient*,
        const CreateGrafanaNotificationChannelRequest&,
        CreateGrafanaNotificationChannelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::CreatePolicyGroupOutcome MonitorClient::CreatePolicyGroup(const CreatePolicyGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePolicyGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePolicyGroupResponse rsp = CreatePolicyGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePolicyGroupOutcome(rsp);
        else
            return CreatePolicyGroupOutcome(o.GetError());
    }
    else
    {
        return CreatePolicyGroupOutcome(outcome.GetError());
    }
}

void MonitorClient::CreatePolicyGroupAsync(const CreatePolicyGroupRequest& request, const CreatePolicyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreatePolicyGroupRequest&;
    using Resp = CreatePolicyGroupResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePolicyGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::CreatePolicyGroupOutcomeCallable MonitorClient::CreatePolicyGroupCallable(const CreatePolicyGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePolicyGroupOutcome>>();
    CreatePolicyGroupAsync(
    request,
    [prom](
        const MonitorClient*,
        const CreatePolicyGroupRequest&,
        CreatePolicyGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::CreatePrometheusAgentOutcome MonitorClient::CreatePrometheusAgent(const CreatePrometheusAgentRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePrometheusAgent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePrometheusAgentResponse rsp = CreatePrometheusAgentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePrometheusAgentOutcome(rsp);
        else
            return CreatePrometheusAgentOutcome(o.GetError());
    }
    else
    {
        return CreatePrometheusAgentOutcome(outcome.GetError());
    }
}

void MonitorClient::CreatePrometheusAgentAsync(const CreatePrometheusAgentRequest& request, const CreatePrometheusAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreatePrometheusAgentRequest&;
    using Resp = CreatePrometheusAgentResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePrometheusAgent", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::CreatePrometheusAgentOutcomeCallable MonitorClient::CreatePrometheusAgentCallable(const CreatePrometheusAgentRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePrometheusAgentOutcome>>();
    CreatePrometheusAgentAsync(
    request,
    [prom](
        const MonitorClient*,
        const CreatePrometheusAgentRequest&,
        CreatePrometheusAgentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::CreatePrometheusAlertGroupOutcome MonitorClient::CreatePrometheusAlertGroup(const CreatePrometheusAlertGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePrometheusAlertGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePrometheusAlertGroupResponse rsp = CreatePrometheusAlertGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePrometheusAlertGroupOutcome(rsp);
        else
            return CreatePrometheusAlertGroupOutcome(o.GetError());
    }
    else
    {
        return CreatePrometheusAlertGroupOutcome(outcome.GetError());
    }
}

void MonitorClient::CreatePrometheusAlertGroupAsync(const CreatePrometheusAlertGroupRequest& request, const CreatePrometheusAlertGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreatePrometheusAlertGroupRequest&;
    using Resp = CreatePrometheusAlertGroupResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePrometheusAlertGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::CreatePrometheusAlertGroupOutcomeCallable MonitorClient::CreatePrometheusAlertGroupCallable(const CreatePrometheusAlertGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePrometheusAlertGroupOutcome>>();
    CreatePrometheusAlertGroupAsync(
    request,
    [prom](
        const MonitorClient*,
        const CreatePrometheusAlertGroupRequest&,
        CreatePrometheusAlertGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::CreatePrometheusAlertPolicyOutcome MonitorClient::CreatePrometheusAlertPolicy(const CreatePrometheusAlertPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePrometheusAlertPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePrometheusAlertPolicyResponse rsp = CreatePrometheusAlertPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePrometheusAlertPolicyOutcome(rsp);
        else
            return CreatePrometheusAlertPolicyOutcome(o.GetError());
    }
    else
    {
        return CreatePrometheusAlertPolicyOutcome(outcome.GetError());
    }
}

void MonitorClient::CreatePrometheusAlertPolicyAsync(const CreatePrometheusAlertPolicyRequest& request, const CreatePrometheusAlertPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreatePrometheusAlertPolicyRequest&;
    using Resp = CreatePrometheusAlertPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePrometheusAlertPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::CreatePrometheusAlertPolicyOutcomeCallable MonitorClient::CreatePrometheusAlertPolicyCallable(const CreatePrometheusAlertPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePrometheusAlertPolicyOutcome>>();
    CreatePrometheusAlertPolicyAsync(
    request,
    [prom](
        const MonitorClient*,
        const CreatePrometheusAlertPolicyRequest&,
        CreatePrometheusAlertPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::CreatePrometheusClusterAgentOutcome MonitorClient::CreatePrometheusClusterAgent(const CreatePrometheusClusterAgentRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePrometheusClusterAgent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePrometheusClusterAgentResponse rsp = CreatePrometheusClusterAgentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePrometheusClusterAgentOutcome(rsp);
        else
            return CreatePrometheusClusterAgentOutcome(o.GetError());
    }
    else
    {
        return CreatePrometheusClusterAgentOutcome(outcome.GetError());
    }
}

void MonitorClient::CreatePrometheusClusterAgentAsync(const CreatePrometheusClusterAgentRequest& request, const CreatePrometheusClusterAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreatePrometheusClusterAgentRequest&;
    using Resp = CreatePrometheusClusterAgentResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePrometheusClusterAgent", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::CreatePrometheusClusterAgentOutcomeCallable MonitorClient::CreatePrometheusClusterAgentCallable(const CreatePrometheusClusterAgentRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePrometheusClusterAgentOutcome>>();
    CreatePrometheusClusterAgentAsync(
    request,
    [prom](
        const MonitorClient*,
        const CreatePrometheusClusterAgentRequest&,
        CreatePrometheusClusterAgentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::CreatePrometheusConfigOutcome MonitorClient::CreatePrometheusConfig(const CreatePrometheusConfigRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePrometheusConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePrometheusConfigResponse rsp = CreatePrometheusConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePrometheusConfigOutcome(rsp);
        else
            return CreatePrometheusConfigOutcome(o.GetError());
    }
    else
    {
        return CreatePrometheusConfigOutcome(outcome.GetError());
    }
}

void MonitorClient::CreatePrometheusConfigAsync(const CreatePrometheusConfigRequest& request, const CreatePrometheusConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreatePrometheusConfigRequest&;
    using Resp = CreatePrometheusConfigResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePrometheusConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::CreatePrometheusConfigOutcomeCallable MonitorClient::CreatePrometheusConfigCallable(const CreatePrometheusConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePrometheusConfigOutcome>>();
    CreatePrometheusConfigAsync(
    request,
    [prom](
        const MonitorClient*,
        const CreatePrometheusConfigRequest&,
        CreatePrometheusConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::CreatePrometheusGlobalNotificationOutcome MonitorClient::CreatePrometheusGlobalNotification(const CreatePrometheusGlobalNotificationRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePrometheusGlobalNotification");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePrometheusGlobalNotificationResponse rsp = CreatePrometheusGlobalNotificationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePrometheusGlobalNotificationOutcome(rsp);
        else
            return CreatePrometheusGlobalNotificationOutcome(o.GetError());
    }
    else
    {
        return CreatePrometheusGlobalNotificationOutcome(outcome.GetError());
    }
}

void MonitorClient::CreatePrometheusGlobalNotificationAsync(const CreatePrometheusGlobalNotificationRequest& request, const CreatePrometheusGlobalNotificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreatePrometheusGlobalNotificationRequest&;
    using Resp = CreatePrometheusGlobalNotificationResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePrometheusGlobalNotification", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::CreatePrometheusGlobalNotificationOutcomeCallable MonitorClient::CreatePrometheusGlobalNotificationCallable(const CreatePrometheusGlobalNotificationRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePrometheusGlobalNotificationOutcome>>();
    CreatePrometheusGlobalNotificationAsync(
    request,
    [prom](
        const MonitorClient*,
        const CreatePrometheusGlobalNotificationRequest&,
        CreatePrometheusGlobalNotificationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::CreatePrometheusMultiTenantInstancePostPayModeOutcome MonitorClient::CreatePrometheusMultiTenantInstancePostPayMode(const CreatePrometheusMultiTenantInstancePostPayModeRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePrometheusMultiTenantInstancePostPayMode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePrometheusMultiTenantInstancePostPayModeResponse rsp = CreatePrometheusMultiTenantInstancePostPayModeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePrometheusMultiTenantInstancePostPayModeOutcome(rsp);
        else
            return CreatePrometheusMultiTenantInstancePostPayModeOutcome(o.GetError());
    }
    else
    {
        return CreatePrometheusMultiTenantInstancePostPayModeOutcome(outcome.GetError());
    }
}

void MonitorClient::CreatePrometheusMultiTenantInstancePostPayModeAsync(const CreatePrometheusMultiTenantInstancePostPayModeRequest& request, const CreatePrometheusMultiTenantInstancePostPayModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreatePrometheusMultiTenantInstancePostPayModeRequest&;
    using Resp = CreatePrometheusMultiTenantInstancePostPayModeResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePrometheusMultiTenantInstancePostPayMode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::CreatePrometheusMultiTenantInstancePostPayModeOutcomeCallable MonitorClient::CreatePrometheusMultiTenantInstancePostPayModeCallable(const CreatePrometheusMultiTenantInstancePostPayModeRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePrometheusMultiTenantInstancePostPayModeOutcome>>();
    CreatePrometheusMultiTenantInstancePostPayModeAsync(
    request,
    [prom](
        const MonitorClient*,
        const CreatePrometheusMultiTenantInstancePostPayModeRequest&,
        CreatePrometheusMultiTenantInstancePostPayModeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::CreatePrometheusRecordRuleYamlOutcome MonitorClient::CreatePrometheusRecordRuleYaml(const CreatePrometheusRecordRuleYamlRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePrometheusRecordRuleYaml");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePrometheusRecordRuleYamlResponse rsp = CreatePrometheusRecordRuleYamlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePrometheusRecordRuleYamlOutcome(rsp);
        else
            return CreatePrometheusRecordRuleYamlOutcome(o.GetError());
    }
    else
    {
        return CreatePrometheusRecordRuleYamlOutcome(outcome.GetError());
    }
}

void MonitorClient::CreatePrometheusRecordRuleYamlAsync(const CreatePrometheusRecordRuleYamlRequest& request, const CreatePrometheusRecordRuleYamlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreatePrometheusRecordRuleYamlRequest&;
    using Resp = CreatePrometheusRecordRuleYamlResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePrometheusRecordRuleYaml", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::CreatePrometheusRecordRuleYamlOutcomeCallable MonitorClient::CreatePrometheusRecordRuleYamlCallable(const CreatePrometheusRecordRuleYamlRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePrometheusRecordRuleYamlOutcome>>();
    CreatePrometheusRecordRuleYamlAsync(
    request,
    [prom](
        const MonitorClient*,
        const CreatePrometheusRecordRuleYamlRequest&,
        CreatePrometheusRecordRuleYamlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::CreatePrometheusScrapeJobOutcome MonitorClient::CreatePrometheusScrapeJob(const CreatePrometheusScrapeJobRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePrometheusScrapeJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePrometheusScrapeJobResponse rsp = CreatePrometheusScrapeJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePrometheusScrapeJobOutcome(rsp);
        else
            return CreatePrometheusScrapeJobOutcome(o.GetError());
    }
    else
    {
        return CreatePrometheusScrapeJobOutcome(outcome.GetError());
    }
}

void MonitorClient::CreatePrometheusScrapeJobAsync(const CreatePrometheusScrapeJobRequest& request, const CreatePrometheusScrapeJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreatePrometheusScrapeJobRequest&;
    using Resp = CreatePrometheusScrapeJobResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePrometheusScrapeJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::CreatePrometheusScrapeJobOutcomeCallable MonitorClient::CreatePrometheusScrapeJobCallable(const CreatePrometheusScrapeJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePrometheusScrapeJobOutcome>>();
    CreatePrometheusScrapeJobAsync(
    request,
    [prom](
        const MonitorClient*,
        const CreatePrometheusScrapeJobRequest&,
        CreatePrometheusScrapeJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::CreatePrometheusTempOutcome MonitorClient::CreatePrometheusTemp(const CreatePrometheusTempRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePrometheusTemp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePrometheusTempResponse rsp = CreatePrometheusTempResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePrometheusTempOutcome(rsp);
        else
            return CreatePrometheusTempOutcome(o.GetError());
    }
    else
    {
        return CreatePrometheusTempOutcome(outcome.GetError());
    }
}

void MonitorClient::CreatePrometheusTempAsync(const CreatePrometheusTempRequest& request, const CreatePrometheusTempAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreatePrometheusTempRequest&;
    using Resp = CreatePrometheusTempResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePrometheusTemp", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::CreatePrometheusTempOutcomeCallable MonitorClient::CreatePrometheusTempCallable(const CreatePrometheusTempRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePrometheusTempOutcome>>();
    CreatePrometheusTempAsync(
    request,
    [prom](
        const MonitorClient*,
        const CreatePrometheusTempRequest&,
        CreatePrometheusTempOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::CreateRecordingRuleOutcome MonitorClient::CreateRecordingRule(const CreateRecordingRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRecordingRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRecordingRuleResponse rsp = CreateRecordingRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRecordingRuleOutcome(rsp);
        else
            return CreateRecordingRuleOutcome(o.GetError());
    }
    else
    {
        return CreateRecordingRuleOutcome(outcome.GetError());
    }
}

void MonitorClient::CreateRecordingRuleAsync(const CreateRecordingRuleRequest& request, const CreateRecordingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateRecordingRuleRequest&;
    using Resp = CreateRecordingRuleResponse;

    DoRequestAsync<Req, Resp>(
        "CreateRecordingRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::CreateRecordingRuleOutcomeCallable MonitorClient::CreateRecordingRuleCallable(const CreateRecordingRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateRecordingRuleOutcome>>();
    CreateRecordingRuleAsync(
    request,
    [prom](
        const MonitorClient*,
        const CreateRecordingRuleRequest&,
        CreateRecordingRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::CreateSSOAccountOutcome MonitorClient::CreateSSOAccount(const CreateSSOAccountRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSSOAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSSOAccountResponse rsp = CreateSSOAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSSOAccountOutcome(rsp);
        else
            return CreateSSOAccountOutcome(o.GetError());
    }
    else
    {
        return CreateSSOAccountOutcome(outcome.GetError());
    }
}

void MonitorClient::CreateSSOAccountAsync(const CreateSSOAccountRequest& request, const CreateSSOAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSSOAccountRequest&;
    using Resp = CreateSSOAccountResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSSOAccount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::CreateSSOAccountOutcomeCallable MonitorClient::CreateSSOAccountCallable(const CreateSSOAccountRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSSOAccountOutcome>>();
    CreateSSOAccountAsync(
    request,
    [prom](
        const MonitorClient*,
        const CreateSSOAccountRequest&,
        CreateSSOAccountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::CreateServiceDiscoveryOutcome MonitorClient::CreateServiceDiscovery(const CreateServiceDiscoveryRequest &request)
{
    auto outcome = MakeRequest(request, "CreateServiceDiscovery");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateServiceDiscoveryResponse rsp = CreateServiceDiscoveryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateServiceDiscoveryOutcome(rsp);
        else
            return CreateServiceDiscoveryOutcome(o.GetError());
    }
    else
    {
        return CreateServiceDiscoveryOutcome(outcome.GetError());
    }
}

void MonitorClient::CreateServiceDiscoveryAsync(const CreateServiceDiscoveryRequest& request, const CreateServiceDiscoveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateServiceDiscoveryRequest&;
    using Resp = CreateServiceDiscoveryResponse;

    DoRequestAsync<Req, Resp>(
        "CreateServiceDiscovery", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::CreateServiceDiscoveryOutcomeCallable MonitorClient::CreateServiceDiscoveryCallable(const CreateServiceDiscoveryRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateServiceDiscoveryOutcome>>();
    CreateServiceDiscoveryAsync(
    request,
    [prom](
        const MonitorClient*,
        const CreateServiceDiscoveryRequest&,
        CreateServiceDiscoveryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DeleteAlarmNoticesOutcome MonitorClient::DeleteAlarmNotices(const DeleteAlarmNoticesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAlarmNotices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAlarmNoticesResponse rsp = DeleteAlarmNoticesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAlarmNoticesOutcome(rsp);
        else
            return DeleteAlarmNoticesOutcome(o.GetError());
    }
    else
    {
        return DeleteAlarmNoticesOutcome(outcome.GetError());
    }
}

void MonitorClient::DeleteAlarmNoticesAsync(const DeleteAlarmNoticesRequest& request, const DeleteAlarmNoticesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAlarmNoticesRequest&;
    using Resp = DeleteAlarmNoticesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAlarmNotices", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DeleteAlarmNoticesOutcomeCallable MonitorClient::DeleteAlarmNoticesCallable(const DeleteAlarmNoticesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAlarmNoticesOutcome>>();
    DeleteAlarmNoticesAsync(
    request,
    [prom](
        const MonitorClient*,
        const DeleteAlarmNoticesRequest&,
        DeleteAlarmNoticesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DeleteAlarmPolicyOutcome MonitorClient::DeleteAlarmPolicy(const DeleteAlarmPolicyRequest &request)
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

void MonitorClient::DeleteAlarmPolicyAsync(const DeleteAlarmPolicyRequest& request, const DeleteAlarmPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

MonitorClient::DeleteAlarmPolicyOutcomeCallable MonitorClient::DeleteAlarmPolicyCallable(const DeleteAlarmPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAlarmPolicyOutcome>>();
    DeleteAlarmPolicyAsync(
    request,
    [prom](
        const MonitorClient*,
        const DeleteAlarmPolicyRequest&,
        DeleteAlarmPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DeleteAlarmShieldsOutcome MonitorClient::DeleteAlarmShields(const DeleteAlarmShieldsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAlarmShields");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAlarmShieldsResponse rsp = DeleteAlarmShieldsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAlarmShieldsOutcome(rsp);
        else
            return DeleteAlarmShieldsOutcome(o.GetError());
    }
    else
    {
        return DeleteAlarmShieldsOutcome(outcome.GetError());
    }
}

void MonitorClient::DeleteAlarmShieldsAsync(const DeleteAlarmShieldsRequest& request, const DeleteAlarmShieldsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAlarmShieldsRequest&;
    using Resp = DeleteAlarmShieldsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAlarmShields", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DeleteAlarmShieldsOutcomeCallable MonitorClient::DeleteAlarmShieldsCallable(const DeleteAlarmShieldsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAlarmShieldsOutcome>>();
    DeleteAlarmShieldsAsync(
    request,
    [prom](
        const MonitorClient*,
        const DeleteAlarmShieldsRequest&,
        DeleteAlarmShieldsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DeleteAlertRulesOutcome MonitorClient::DeleteAlertRules(const DeleteAlertRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAlertRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAlertRulesResponse rsp = DeleteAlertRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAlertRulesOutcome(rsp);
        else
            return DeleteAlertRulesOutcome(o.GetError());
    }
    else
    {
        return DeleteAlertRulesOutcome(outcome.GetError());
    }
}

void MonitorClient::DeleteAlertRulesAsync(const DeleteAlertRulesRequest& request, const DeleteAlertRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAlertRulesRequest&;
    using Resp = DeleteAlertRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAlertRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DeleteAlertRulesOutcomeCallable MonitorClient::DeleteAlertRulesCallable(const DeleteAlertRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAlertRulesOutcome>>();
    DeleteAlertRulesAsync(
    request,
    [prom](
        const MonitorClient*,
        const DeleteAlertRulesRequest&,
        DeleteAlertRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DeleteExporterIntegrationOutcome MonitorClient::DeleteExporterIntegration(const DeleteExporterIntegrationRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteExporterIntegration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteExporterIntegrationResponse rsp = DeleteExporterIntegrationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteExporterIntegrationOutcome(rsp);
        else
            return DeleteExporterIntegrationOutcome(o.GetError());
    }
    else
    {
        return DeleteExporterIntegrationOutcome(outcome.GetError());
    }
}

void MonitorClient::DeleteExporterIntegrationAsync(const DeleteExporterIntegrationRequest& request, const DeleteExporterIntegrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteExporterIntegrationRequest&;
    using Resp = DeleteExporterIntegrationResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteExporterIntegration", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DeleteExporterIntegrationOutcomeCallable MonitorClient::DeleteExporterIntegrationCallable(const DeleteExporterIntegrationRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteExporterIntegrationOutcome>>();
    DeleteExporterIntegrationAsync(
    request,
    [prom](
        const MonitorClient*,
        const DeleteExporterIntegrationRequest&,
        DeleteExporterIntegrationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DeleteGrafanaInstanceOutcome MonitorClient::DeleteGrafanaInstance(const DeleteGrafanaInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteGrafanaInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteGrafanaInstanceResponse rsp = DeleteGrafanaInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteGrafanaInstanceOutcome(rsp);
        else
            return DeleteGrafanaInstanceOutcome(o.GetError());
    }
    else
    {
        return DeleteGrafanaInstanceOutcome(outcome.GetError());
    }
}

void MonitorClient::DeleteGrafanaInstanceAsync(const DeleteGrafanaInstanceRequest& request, const DeleteGrafanaInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteGrafanaInstanceRequest&;
    using Resp = DeleteGrafanaInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteGrafanaInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DeleteGrafanaInstanceOutcomeCallable MonitorClient::DeleteGrafanaInstanceCallable(const DeleteGrafanaInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteGrafanaInstanceOutcome>>();
    DeleteGrafanaInstanceAsync(
    request,
    [prom](
        const MonitorClient*,
        const DeleteGrafanaInstanceRequest&,
        DeleteGrafanaInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DeleteGrafanaIntegrationOutcome MonitorClient::DeleteGrafanaIntegration(const DeleteGrafanaIntegrationRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteGrafanaIntegration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteGrafanaIntegrationResponse rsp = DeleteGrafanaIntegrationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteGrafanaIntegrationOutcome(rsp);
        else
            return DeleteGrafanaIntegrationOutcome(o.GetError());
    }
    else
    {
        return DeleteGrafanaIntegrationOutcome(outcome.GetError());
    }
}

void MonitorClient::DeleteGrafanaIntegrationAsync(const DeleteGrafanaIntegrationRequest& request, const DeleteGrafanaIntegrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteGrafanaIntegrationRequest&;
    using Resp = DeleteGrafanaIntegrationResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteGrafanaIntegration", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DeleteGrafanaIntegrationOutcomeCallable MonitorClient::DeleteGrafanaIntegrationCallable(const DeleteGrafanaIntegrationRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteGrafanaIntegrationOutcome>>();
    DeleteGrafanaIntegrationAsync(
    request,
    [prom](
        const MonitorClient*,
        const DeleteGrafanaIntegrationRequest&,
        DeleteGrafanaIntegrationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DeleteGrafanaNotificationChannelOutcome MonitorClient::DeleteGrafanaNotificationChannel(const DeleteGrafanaNotificationChannelRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteGrafanaNotificationChannel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteGrafanaNotificationChannelResponse rsp = DeleteGrafanaNotificationChannelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteGrafanaNotificationChannelOutcome(rsp);
        else
            return DeleteGrafanaNotificationChannelOutcome(o.GetError());
    }
    else
    {
        return DeleteGrafanaNotificationChannelOutcome(outcome.GetError());
    }
}

void MonitorClient::DeleteGrafanaNotificationChannelAsync(const DeleteGrafanaNotificationChannelRequest& request, const DeleteGrafanaNotificationChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteGrafanaNotificationChannelRequest&;
    using Resp = DeleteGrafanaNotificationChannelResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteGrafanaNotificationChannel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DeleteGrafanaNotificationChannelOutcomeCallable MonitorClient::DeleteGrafanaNotificationChannelCallable(const DeleteGrafanaNotificationChannelRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteGrafanaNotificationChannelOutcome>>();
    DeleteGrafanaNotificationChannelAsync(
    request,
    [prom](
        const MonitorClient*,
        const DeleteGrafanaNotificationChannelRequest&,
        DeleteGrafanaNotificationChannelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DeletePolicyGroupOutcome MonitorClient::DeletePolicyGroup(const DeletePolicyGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeletePolicyGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeletePolicyGroupResponse rsp = DeletePolicyGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeletePolicyGroupOutcome(rsp);
        else
            return DeletePolicyGroupOutcome(o.GetError());
    }
    else
    {
        return DeletePolicyGroupOutcome(outcome.GetError());
    }
}

void MonitorClient::DeletePolicyGroupAsync(const DeletePolicyGroupRequest& request, const DeletePolicyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeletePolicyGroupRequest&;
    using Resp = DeletePolicyGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DeletePolicyGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DeletePolicyGroupOutcomeCallable MonitorClient::DeletePolicyGroupCallable(const DeletePolicyGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeletePolicyGroupOutcome>>();
    DeletePolicyGroupAsync(
    request,
    [prom](
        const MonitorClient*,
        const DeletePolicyGroupRequest&,
        DeletePolicyGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DeletePrometheusAlertGroupsOutcome MonitorClient::DeletePrometheusAlertGroups(const DeletePrometheusAlertGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DeletePrometheusAlertGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeletePrometheusAlertGroupsResponse rsp = DeletePrometheusAlertGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeletePrometheusAlertGroupsOutcome(rsp);
        else
            return DeletePrometheusAlertGroupsOutcome(o.GetError());
    }
    else
    {
        return DeletePrometheusAlertGroupsOutcome(outcome.GetError());
    }
}

void MonitorClient::DeletePrometheusAlertGroupsAsync(const DeletePrometheusAlertGroupsRequest& request, const DeletePrometheusAlertGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeletePrometheusAlertGroupsRequest&;
    using Resp = DeletePrometheusAlertGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DeletePrometheusAlertGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DeletePrometheusAlertGroupsOutcomeCallable MonitorClient::DeletePrometheusAlertGroupsCallable(const DeletePrometheusAlertGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeletePrometheusAlertGroupsOutcome>>();
    DeletePrometheusAlertGroupsAsync(
    request,
    [prom](
        const MonitorClient*,
        const DeletePrometheusAlertGroupsRequest&,
        DeletePrometheusAlertGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DeletePrometheusAlertPolicyOutcome MonitorClient::DeletePrometheusAlertPolicy(const DeletePrometheusAlertPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DeletePrometheusAlertPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeletePrometheusAlertPolicyResponse rsp = DeletePrometheusAlertPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeletePrometheusAlertPolicyOutcome(rsp);
        else
            return DeletePrometheusAlertPolicyOutcome(o.GetError());
    }
    else
    {
        return DeletePrometheusAlertPolicyOutcome(outcome.GetError());
    }
}

void MonitorClient::DeletePrometheusAlertPolicyAsync(const DeletePrometheusAlertPolicyRequest& request, const DeletePrometheusAlertPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeletePrometheusAlertPolicyRequest&;
    using Resp = DeletePrometheusAlertPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "DeletePrometheusAlertPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DeletePrometheusAlertPolicyOutcomeCallable MonitorClient::DeletePrometheusAlertPolicyCallable(const DeletePrometheusAlertPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeletePrometheusAlertPolicyOutcome>>();
    DeletePrometheusAlertPolicyAsync(
    request,
    [prom](
        const MonitorClient*,
        const DeletePrometheusAlertPolicyRequest&,
        DeletePrometheusAlertPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DeletePrometheusClusterAgentOutcome MonitorClient::DeletePrometheusClusterAgent(const DeletePrometheusClusterAgentRequest &request)
{
    auto outcome = MakeRequest(request, "DeletePrometheusClusterAgent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeletePrometheusClusterAgentResponse rsp = DeletePrometheusClusterAgentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeletePrometheusClusterAgentOutcome(rsp);
        else
            return DeletePrometheusClusterAgentOutcome(o.GetError());
    }
    else
    {
        return DeletePrometheusClusterAgentOutcome(outcome.GetError());
    }
}

void MonitorClient::DeletePrometheusClusterAgentAsync(const DeletePrometheusClusterAgentRequest& request, const DeletePrometheusClusterAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeletePrometheusClusterAgentRequest&;
    using Resp = DeletePrometheusClusterAgentResponse;

    DoRequestAsync<Req, Resp>(
        "DeletePrometheusClusterAgent", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DeletePrometheusClusterAgentOutcomeCallable MonitorClient::DeletePrometheusClusterAgentCallable(const DeletePrometheusClusterAgentRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeletePrometheusClusterAgentOutcome>>();
    DeletePrometheusClusterAgentAsync(
    request,
    [prom](
        const MonitorClient*,
        const DeletePrometheusClusterAgentRequest&,
        DeletePrometheusClusterAgentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DeletePrometheusConfigOutcome MonitorClient::DeletePrometheusConfig(const DeletePrometheusConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DeletePrometheusConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeletePrometheusConfigResponse rsp = DeletePrometheusConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeletePrometheusConfigOutcome(rsp);
        else
            return DeletePrometheusConfigOutcome(o.GetError());
    }
    else
    {
        return DeletePrometheusConfigOutcome(outcome.GetError());
    }
}

void MonitorClient::DeletePrometheusConfigAsync(const DeletePrometheusConfigRequest& request, const DeletePrometheusConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeletePrometheusConfigRequest&;
    using Resp = DeletePrometheusConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DeletePrometheusConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DeletePrometheusConfigOutcomeCallable MonitorClient::DeletePrometheusConfigCallable(const DeletePrometheusConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeletePrometheusConfigOutcome>>();
    DeletePrometheusConfigAsync(
    request,
    [prom](
        const MonitorClient*,
        const DeletePrometheusConfigRequest&,
        DeletePrometheusConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DeletePrometheusRecordRuleYamlOutcome MonitorClient::DeletePrometheusRecordRuleYaml(const DeletePrometheusRecordRuleYamlRequest &request)
{
    auto outcome = MakeRequest(request, "DeletePrometheusRecordRuleYaml");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeletePrometheusRecordRuleYamlResponse rsp = DeletePrometheusRecordRuleYamlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeletePrometheusRecordRuleYamlOutcome(rsp);
        else
            return DeletePrometheusRecordRuleYamlOutcome(o.GetError());
    }
    else
    {
        return DeletePrometheusRecordRuleYamlOutcome(outcome.GetError());
    }
}

void MonitorClient::DeletePrometheusRecordRuleYamlAsync(const DeletePrometheusRecordRuleYamlRequest& request, const DeletePrometheusRecordRuleYamlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeletePrometheusRecordRuleYamlRequest&;
    using Resp = DeletePrometheusRecordRuleYamlResponse;

    DoRequestAsync<Req, Resp>(
        "DeletePrometheusRecordRuleYaml", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DeletePrometheusRecordRuleYamlOutcomeCallable MonitorClient::DeletePrometheusRecordRuleYamlCallable(const DeletePrometheusRecordRuleYamlRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeletePrometheusRecordRuleYamlOutcome>>();
    DeletePrometheusRecordRuleYamlAsync(
    request,
    [prom](
        const MonitorClient*,
        const DeletePrometheusRecordRuleYamlRequest&,
        DeletePrometheusRecordRuleYamlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DeletePrometheusScrapeJobsOutcome MonitorClient::DeletePrometheusScrapeJobs(const DeletePrometheusScrapeJobsRequest &request)
{
    auto outcome = MakeRequest(request, "DeletePrometheusScrapeJobs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeletePrometheusScrapeJobsResponse rsp = DeletePrometheusScrapeJobsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeletePrometheusScrapeJobsOutcome(rsp);
        else
            return DeletePrometheusScrapeJobsOutcome(o.GetError());
    }
    else
    {
        return DeletePrometheusScrapeJobsOutcome(outcome.GetError());
    }
}

void MonitorClient::DeletePrometheusScrapeJobsAsync(const DeletePrometheusScrapeJobsRequest& request, const DeletePrometheusScrapeJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeletePrometheusScrapeJobsRequest&;
    using Resp = DeletePrometheusScrapeJobsResponse;

    DoRequestAsync<Req, Resp>(
        "DeletePrometheusScrapeJobs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DeletePrometheusScrapeJobsOutcomeCallable MonitorClient::DeletePrometheusScrapeJobsCallable(const DeletePrometheusScrapeJobsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeletePrometheusScrapeJobsOutcome>>();
    DeletePrometheusScrapeJobsAsync(
    request,
    [prom](
        const MonitorClient*,
        const DeletePrometheusScrapeJobsRequest&,
        DeletePrometheusScrapeJobsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DeletePrometheusTempOutcome MonitorClient::DeletePrometheusTemp(const DeletePrometheusTempRequest &request)
{
    auto outcome = MakeRequest(request, "DeletePrometheusTemp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeletePrometheusTempResponse rsp = DeletePrometheusTempResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeletePrometheusTempOutcome(rsp);
        else
            return DeletePrometheusTempOutcome(o.GetError());
    }
    else
    {
        return DeletePrometheusTempOutcome(outcome.GetError());
    }
}

void MonitorClient::DeletePrometheusTempAsync(const DeletePrometheusTempRequest& request, const DeletePrometheusTempAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeletePrometheusTempRequest&;
    using Resp = DeletePrometheusTempResponse;

    DoRequestAsync<Req, Resp>(
        "DeletePrometheusTemp", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DeletePrometheusTempOutcomeCallable MonitorClient::DeletePrometheusTempCallable(const DeletePrometheusTempRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeletePrometheusTempOutcome>>();
    DeletePrometheusTempAsync(
    request,
    [prom](
        const MonitorClient*,
        const DeletePrometheusTempRequest&,
        DeletePrometheusTempOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DeletePrometheusTempSyncOutcome MonitorClient::DeletePrometheusTempSync(const DeletePrometheusTempSyncRequest &request)
{
    auto outcome = MakeRequest(request, "DeletePrometheusTempSync");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeletePrometheusTempSyncResponse rsp = DeletePrometheusTempSyncResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeletePrometheusTempSyncOutcome(rsp);
        else
            return DeletePrometheusTempSyncOutcome(o.GetError());
    }
    else
    {
        return DeletePrometheusTempSyncOutcome(outcome.GetError());
    }
}

void MonitorClient::DeletePrometheusTempSyncAsync(const DeletePrometheusTempSyncRequest& request, const DeletePrometheusTempSyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeletePrometheusTempSyncRequest&;
    using Resp = DeletePrometheusTempSyncResponse;

    DoRequestAsync<Req, Resp>(
        "DeletePrometheusTempSync", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DeletePrometheusTempSyncOutcomeCallable MonitorClient::DeletePrometheusTempSyncCallable(const DeletePrometheusTempSyncRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeletePrometheusTempSyncOutcome>>();
    DeletePrometheusTempSyncAsync(
    request,
    [prom](
        const MonitorClient*,
        const DeletePrometheusTempSyncRequest&,
        DeletePrometheusTempSyncOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DeleteRecordingRulesOutcome MonitorClient::DeleteRecordingRules(const DeleteRecordingRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRecordingRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRecordingRulesResponse rsp = DeleteRecordingRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRecordingRulesOutcome(rsp);
        else
            return DeleteRecordingRulesOutcome(o.GetError());
    }
    else
    {
        return DeleteRecordingRulesOutcome(outcome.GetError());
    }
}

void MonitorClient::DeleteRecordingRulesAsync(const DeleteRecordingRulesRequest& request, const DeleteRecordingRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteRecordingRulesRequest&;
    using Resp = DeleteRecordingRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRecordingRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DeleteRecordingRulesOutcomeCallable MonitorClient::DeleteRecordingRulesCallable(const DeleteRecordingRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRecordingRulesOutcome>>();
    DeleteRecordingRulesAsync(
    request,
    [prom](
        const MonitorClient*,
        const DeleteRecordingRulesRequest&,
        DeleteRecordingRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DeleteSSOAccountOutcome MonitorClient::DeleteSSOAccount(const DeleteSSOAccountRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSSOAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSSOAccountResponse rsp = DeleteSSOAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSSOAccountOutcome(rsp);
        else
            return DeleteSSOAccountOutcome(o.GetError());
    }
    else
    {
        return DeleteSSOAccountOutcome(outcome.GetError());
    }
}

void MonitorClient::DeleteSSOAccountAsync(const DeleteSSOAccountRequest& request, const DeleteSSOAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteSSOAccountRequest&;
    using Resp = DeleteSSOAccountResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteSSOAccount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DeleteSSOAccountOutcomeCallable MonitorClient::DeleteSSOAccountCallable(const DeleteSSOAccountRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteSSOAccountOutcome>>();
    DeleteSSOAccountAsync(
    request,
    [prom](
        const MonitorClient*,
        const DeleteSSOAccountRequest&,
        DeleteSSOAccountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DeleteServiceDiscoveryOutcome MonitorClient::DeleteServiceDiscovery(const DeleteServiceDiscoveryRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteServiceDiscovery");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteServiceDiscoveryResponse rsp = DeleteServiceDiscoveryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteServiceDiscoveryOutcome(rsp);
        else
            return DeleteServiceDiscoveryOutcome(o.GetError());
    }
    else
    {
        return DeleteServiceDiscoveryOutcome(outcome.GetError());
    }
}

void MonitorClient::DeleteServiceDiscoveryAsync(const DeleteServiceDiscoveryRequest& request, const DeleteServiceDiscoveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteServiceDiscoveryRequest&;
    using Resp = DeleteServiceDiscoveryResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteServiceDiscovery", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DeleteServiceDiscoveryOutcomeCallable MonitorClient::DeleteServiceDiscoveryCallable(const DeleteServiceDiscoveryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteServiceDiscoveryOutcome>>();
    DeleteServiceDiscoveryAsync(
    request,
    [prom](
        const MonitorClient*,
        const DeleteServiceDiscoveryRequest&,
        DeleteServiceDiscoveryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribeAccidentEventListOutcome MonitorClient::DescribeAccidentEventList(const DescribeAccidentEventListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAccidentEventList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAccidentEventListResponse rsp = DescribeAccidentEventListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAccidentEventListOutcome(rsp);
        else
            return DescribeAccidentEventListOutcome(o.GetError());
    }
    else
    {
        return DescribeAccidentEventListOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribeAccidentEventListAsync(const DescribeAccidentEventListRequest& request, const DescribeAccidentEventListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAccidentEventListRequest&;
    using Resp = DescribeAccidentEventListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAccidentEventList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribeAccidentEventListOutcomeCallable MonitorClient::DescribeAccidentEventListCallable(const DescribeAccidentEventListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAccidentEventListOutcome>>();
    DescribeAccidentEventListAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribeAccidentEventListRequest&,
        DescribeAccidentEventListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribeAlarmEventsOutcome MonitorClient::DescribeAlarmEvents(const DescribeAlarmEventsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAlarmEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAlarmEventsResponse rsp = DescribeAlarmEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAlarmEventsOutcome(rsp);
        else
            return DescribeAlarmEventsOutcome(o.GetError());
    }
    else
    {
        return DescribeAlarmEventsOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribeAlarmEventsAsync(const DescribeAlarmEventsRequest& request, const DescribeAlarmEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAlarmEventsRequest&;
    using Resp = DescribeAlarmEventsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAlarmEvents", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribeAlarmEventsOutcomeCallable MonitorClient::DescribeAlarmEventsCallable(const DescribeAlarmEventsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAlarmEventsOutcome>>();
    DescribeAlarmEventsAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribeAlarmEventsRequest&,
        DescribeAlarmEventsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribeAlarmHistoriesOutcome MonitorClient::DescribeAlarmHistories(const DescribeAlarmHistoriesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAlarmHistories");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAlarmHistoriesResponse rsp = DescribeAlarmHistoriesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAlarmHistoriesOutcome(rsp);
        else
            return DescribeAlarmHistoriesOutcome(o.GetError());
    }
    else
    {
        return DescribeAlarmHistoriesOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribeAlarmHistoriesAsync(const DescribeAlarmHistoriesRequest& request, const DescribeAlarmHistoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAlarmHistoriesRequest&;
    using Resp = DescribeAlarmHistoriesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAlarmHistories", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribeAlarmHistoriesOutcomeCallable MonitorClient::DescribeAlarmHistoriesCallable(const DescribeAlarmHistoriesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAlarmHistoriesOutcome>>();
    DescribeAlarmHistoriesAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribeAlarmHistoriesRequest&,
        DescribeAlarmHistoriesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribeAlarmMetricsOutcome MonitorClient::DescribeAlarmMetrics(const DescribeAlarmMetricsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAlarmMetrics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAlarmMetricsResponse rsp = DescribeAlarmMetricsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAlarmMetricsOutcome(rsp);
        else
            return DescribeAlarmMetricsOutcome(o.GetError());
    }
    else
    {
        return DescribeAlarmMetricsOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribeAlarmMetricsAsync(const DescribeAlarmMetricsRequest& request, const DescribeAlarmMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAlarmMetricsRequest&;
    using Resp = DescribeAlarmMetricsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAlarmMetrics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribeAlarmMetricsOutcomeCallable MonitorClient::DescribeAlarmMetricsCallable(const DescribeAlarmMetricsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAlarmMetricsOutcome>>();
    DescribeAlarmMetricsAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribeAlarmMetricsRequest&,
        DescribeAlarmMetricsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribeAlarmNoticeOutcome MonitorClient::DescribeAlarmNotice(const DescribeAlarmNoticeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAlarmNotice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAlarmNoticeResponse rsp = DescribeAlarmNoticeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAlarmNoticeOutcome(rsp);
        else
            return DescribeAlarmNoticeOutcome(o.GetError());
    }
    else
    {
        return DescribeAlarmNoticeOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribeAlarmNoticeAsync(const DescribeAlarmNoticeRequest& request, const DescribeAlarmNoticeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAlarmNoticeRequest&;
    using Resp = DescribeAlarmNoticeResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAlarmNotice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribeAlarmNoticeOutcomeCallable MonitorClient::DescribeAlarmNoticeCallable(const DescribeAlarmNoticeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAlarmNoticeOutcome>>();
    DescribeAlarmNoticeAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribeAlarmNoticeRequest&,
        DescribeAlarmNoticeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribeAlarmNoticeCallbacksOutcome MonitorClient::DescribeAlarmNoticeCallbacks(const DescribeAlarmNoticeCallbacksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAlarmNoticeCallbacks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAlarmNoticeCallbacksResponse rsp = DescribeAlarmNoticeCallbacksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAlarmNoticeCallbacksOutcome(rsp);
        else
            return DescribeAlarmNoticeCallbacksOutcome(o.GetError());
    }
    else
    {
        return DescribeAlarmNoticeCallbacksOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribeAlarmNoticeCallbacksAsync(const DescribeAlarmNoticeCallbacksRequest& request, const DescribeAlarmNoticeCallbacksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAlarmNoticeCallbacksRequest&;
    using Resp = DescribeAlarmNoticeCallbacksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAlarmNoticeCallbacks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribeAlarmNoticeCallbacksOutcomeCallable MonitorClient::DescribeAlarmNoticeCallbacksCallable(const DescribeAlarmNoticeCallbacksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAlarmNoticeCallbacksOutcome>>();
    DescribeAlarmNoticeCallbacksAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribeAlarmNoticeCallbacksRequest&,
        DescribeAlarmNoticeCallbacksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribeAlarmNoticesOutcome MonitorClient::DescribeAlarmNotices(const DescribeAlarmNoticesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAlarmNotices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAlarmNoticesResponse rsp = DescribeAlarmNoticesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAlarmNoticesOutcome(rsp);
        else
            return DescribeAlarmNoticesOutcome(o.GetError());
    }
    else
    {
        return DescribeAlarmNoticesOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribeAlarmNoticesAsync(const DescribeAlarmNoticesRequest& request, const DescribeAlarmNoticesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAlarmNoticesRequest&;
    using Resp = DescribeAlarmNoticesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAlarmNotices", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribeAlarmNoticesOutcomeCallable MonitorClient::DescribeAlarmNoticesCallable(const DescribeAlarmNoticesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAlarmNoticesOutcome>>();
    DescribeAlarmNoticesAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribeAlarmNoticesRequest&,
        DescribeAlarmNoticesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribeAlarmPoliciesOutcome MonitorClient::DescribeAlarmPolicies(const DescribeAlarmPoliciesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAlarmPolicies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAlarmPoliciesResponse rsp = DescribeAlarmPoliciesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAlarmPoliciesOutcome(rsp);
        else
            return DescribeAlarmPoliciesOutcome(o.GetError());
    }
    else
    {
        return DescribeAlarmPoliciesOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribeAlarmPoliciesAsync(const DescribeAlarmPoliciesRequest& request, const DescribeAlarmPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAlarmPoliciesRequest&;
    using Resp = DescribeAlarmPoliciesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAlarmPolicies", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribeAlarmPoliciesOutcomeCallable MonitorClient::DescribeAlarmPoliciesCallable(const DescribeAlarmPoliciesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAlarmPoliciesOutcome>>();
    DescribeAlarmPoliciesAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribeAlarmPoliciesRequest&,
        DescribeAlarmPoliciesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribeAlarmPolicyOutcome MonitorClient::DescribeAlarmPolicy(const DescribeAlarmPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAlarmPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAlarmPolicyResponse rsp = DescribeAlarmPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAlarmPolicyOutcome(rsp);
        else
            return DescribeAlarmPolicyOutcome(o.GetError());
    }
    else
    {
        return DescribeAlarmPolicyOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribeAlarmPolicyAsync(const DescribeAlarmPolicyRequest& request, const DescribeAlarmPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAlarmPolicyRequest&;
    using Resp = DescribeAlarmPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAlarmPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribeAlarmPolicyOutcomeCallable MonitorClient::DescribeAlarmPolicyCallable(const DescribeAlarmPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAlarmPolicyOutcome>>();
    DescribeAlarmPolicyAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribeAlarmPolicyRequest&,
        DescribeAlarmPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribeAlarmSmsQuotaOutcome MonitorClient::DescribeAlarmSmsQuota(const DescribeAlarmSmsQuotaRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAlarmSmsQuota");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAlarmSmsQuotaResponse rsp = DescribeAlarmSmsQuotaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAlarmSmsQuotaOutcome(rsp);
        else
            return DescribeAlarmSmsQuotaOutcome(o.GetError());
    }
    else
    {
        return DescribeAlarmSmsQuotaOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribeAlarmSmsQuotaAsync(const DescribeAlarmSmsQuotaRequest& request, const DescribeAlarmSmsQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAlarmSmsQuotaRequest&;
    using Resp = DescribeAlarmSmsQuotaResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAlarmSmsQuota", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribeAlarmSmsQuotaOutcomeCallable MonitorClient::DescribeAlarmSmsQuotaCallable(const DescribeAlarmSmsQuotaRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAlarmSmsQuotaOutcome>>();
    DescribeAlarmSmsQuotaAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribeAlarmSmsQuotaRequest&,
        DescribeAlarmSmsQuotaOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribeAlertRulesOutcome MonitorClient::DescribeAlertRules(const DescribeAlertRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAlertRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAlertRulesResponse rsp = DescribeAlertRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAlertRulesOutcome(rsp);
        else
            return DescribeAlertRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeAlertRulesOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribeAlertRulesAsync(const DescribeAlertRulesRequest& request, const DescribeAlertRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAlertRulesRequest&;
    using Resp = DescribeAlertRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAlertRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribeAlertRulesOutcomeCallable MonitorClient::DescribeAlertRulesCallable(const DescribeAlertRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAlertRulesOutcome>>();
    DescribeAlertRulesAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribeAlertRulesRequest&,
        DescribeAlertRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribeAllNamespacesOutcome MonitorClient::DescribeAllNamespaces(const DescribeAllNamespacesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAllNamespaces");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAllNamespacesResponse rsp = DescribeAllNamespacesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAllNamespacesOutcome(rsp);
        else
            return DescribeAllNamespacesOutcome(o.GetError());
    }
    else
    {
        return DescribeAllNamespacesOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribeAllNamespacesAsync(const DescribeAllNamespacesRequest& request, const DescribeAllNamespacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAllNamespacesRequest&;
    using Resp = DescribeAllNamespacesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAllNamespaces", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribeAllNamespacesOutcomeCallable MonitorClient::DescribeAllNamespacesCallable(const DescribeAllNamespacesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAllNamespacesOutcome>>();
    DescribeAllNamespacesAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribeAllNamespacesRequest&,
        DescribeAllNamespacesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribeBaseMetricsOutcome MonitorClient::DescribeBaseMetrics(const DescribeBaseMetricsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBaseMetrics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBaseMetricsResponse rsp = DescribeBaseMetricsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBaseMetricsOutcome(rsp);
        else
            return DescribeBaseMetricsOutcome(o.GetError());
    }
    else
    {
        return DescribeBaseMetricsOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribeBaseMetricsAsync(const DescribeBaseMetricsRequest& request, const DescribeBaseMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBaseMetricsRequest&;
    using Resp = DescribeBaseMetricsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBaseMetrics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribeBaseMetricsOutcomeCallable MonitorClient::DescribeBaseMetricsCallable(const DescribeBaseMetricsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBaseMetricsOutcome>>();
    DescribeBaseMetricsAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribeBaseMetricsRequest&,
        DescribeBaseMetricsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribeBasicAlarmListOutcome MonitorClient::DescribeBasicAlarmList(const DescribeBasicAlarmListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBasicAlarmList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBasicAlarmListResponse rsp = DescribeBasicAlarmListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBasicAlarmListOutcome(rsp);
        else
            return DescribeBasicAlarmListOutcome(o.GetError());
    }
    else
    {
        return DescribeBasicAlarmListOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribeBasicAlarmListAsync(const DescribeBasicAlarmListRequest& request, const DescribeBasicAlarmListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBasicAlarmListRequest&;
    using Resp = DescribeBasicAlarmListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBasicAlarmList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribeBasicAlarmListOutcomeCallable MonitorClient::DescribeBasicAlarmListCallable(const DescribeBasicAlarmListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBasicAlarmListOutcome>>();
    DescribeBasicAlarmListAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribeBasicAlarmListRequest&,
        DescribeBasicAlarmListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribeBindingPolicyObjectListOutcome MonitorClient::DescribeBindingPolicyObjectList(const DescribeBindingPolicyObjectListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBindingPolicyObjectList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBindingPolicyObjectListResponse rsp = DescribeBindingPolicyObjectListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBindingPolicyObjectListOutcome(rsp);
        else
            return DescribeBindingPolicyObjectListOutcome(o.GetError());
    }
    else
    {
        return DescribeBindingPolicyObjectListOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribeBindingPolicyObjectListAsync(const DescribeBindingPolicyObjectListRequest& request, const DescribeBindingPolicyObjectListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBindingPolicyObjectListRequest&;
    using Resp = DescribeBindingPolicyObjectListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBindingPolicyObjectList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribeBindingPolicyObjectListOutcomeCallable MonitorClient::DescribeBindingPolicyObjectListCallable(const DescribeBindingPolicyObjectListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBindingPolicyObjectListOutcome>>();
    DescribeBindingPolicyObjectListAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribeBindingPolicyObjectListRequest&,
        DescribeBindingPolicyObjectListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribeClusterAgentCreatingProgressOutcome MonitorClient::DescribeClusterAgentCreatingProgress(const DescribeClusterAgentCreatingProgressRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterAgentCreatingProgress");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterAgentCreatingProgressResponse rsp = DescribeClusterAgentCreatingProgressResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterAgentCreatingProgressOutcome(rsp);
        else
            return DescribeClusterAgentCreatingProgressOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterAgentCreatingProgressOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribeClusterAgentCreatingProgressAsync(const DescribeClusterAgentCreatingProgressRequest& request, const DescribeClusterAgentCreatingProgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeClusterAgentCreatingProgressRequest&;
    using Resp = DescribeClusterAgentCreatingProgressResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClusterAgentCreatingProgress", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribeClusterAgentCreatingProgressOutcomeCallable MonitorClient::DescribeClusterAgentCreatingProgressCallable(const DescribeClusterAgentCreatingProgressRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClusterAgentCreatingProgressOutcome>>();
    DescribeClusterAgentCreatingProgressAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribeClusterAgentCreatingProgressRequest&,
        DescribeClusterAgentCreatingProgressOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribeConditionsTemplateListOutcome MonitorClient::DescribeConditionsTemplateList(const DescribeConditionsTemplateListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConditionsTemplateList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConditionsTemplateListResponse rsp = DescribeConditionsTemplateListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConditionsTemplateListOutcome(rsp);
        else
            return DescribeConditionsTemplateListOutcome(o.GetError());
    }
    else
    {
        return DescribeConditionsTemplateListOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribeConditionsTemplateListAsync(const DescribeConditionsTemplateListRequest& request, const DescribeConditionsTemplateListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeConditionsTemplateListRequest&;
    using Resp = DescribeConditionsTemplateListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeConditionsTemplateList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribeConditionsTemplateListOutcomeCallable MonitorClient::DescribeConditionsTemplateListCallable(const DescribeConditionsTemplateListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeConditionsTemplateListOutcome>>();
    DescribeConditionsTemplateListAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribeConditionsTemplateListRequest&,
        DescribeConditionsTemplateListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribeDNSConfigOutcome MonitorClient::DescribeDNSConfig(const DescribeDNSConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDNSConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDNSConfigResponse rsp = DescribeDNSConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDNSConfigOutcome(rsp);
        else
            return DescribeDNSConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeDNSConfigOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribeDNSConfigAsync(const DescribeDNSConfigRequest& request, const DescribeDNSConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDNSConfigRequest&;
    using Resp = DescribeDNSConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDNSConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribeDNSConfigOutcomeCallable MonitorClient::DescribeDNSConfigCallable(const DescribeDNSConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDNSConfigOutcome>>();
    DescribeDNSConfigAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribeDNSConfigRequest&,
        DescribeDNSConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribeExporterIntegrationsOutcome MonitorClient::DescribeExporterIntegrations(const DescribeExporterIntegrationsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeExporterIntegrations");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeExporterIntegrationsResponse rsp = DescribeExporterIntegrationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeExporterIntegrationsOutcome(rsp);
        else
            return DescribeExporterIntegrationsOutcome(o.GetError());
    }
    else
    {
        return DescribeExporterIntegrationsOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribeExporterIntegrationsAsync(const DescribeExporterIntegrationsRequest& request, const DescribeExporterIntegrationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeExporterIntegrationsRequest&;
    using Resp = DescribeExporterIntegrationsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeExporterIntegrations", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribeExporterIntegrationsOutcomeCallable MonitorClient::DescribeExporterIntegrationsCallable(const DescribeExporterIntegrationsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeExporterIntegrationsOutcome>>();
    DescribeExporterIntegrationsAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribeExporterIntegrationsRequest&,
        DescribeExporterIntegrationsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribeExternalClusterRegisterCommandOutcome MonitorClient::DescribeExternalClusterRegisterCommand(const DescribeExternalClusterRegisterCommandRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeExternalClusterRegisterCommand");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeExternalClusterRegisterCommandResponse rsp = DescribeExternalClusterRegisterCommandResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeExternalClusterRegisterCommandOutcome(rsp);
        else
            return DescribeExternalClusterRegisterCommandOutcome(o.GetError());
    }
    else
    {
        return DescribeExternalClusterRegisterCommandOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribeExternalClusterRegisterCommandAsync(const DescribeExternalClusterRegisterCommandRequest& request, const DescribeExternalClusterRegisterCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeExternalClusterRegisterCommandRequest&;
    using Resp = DescribeExternalClusterRegisterCommandResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeExternalClusterRegisterCommand", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribeExternalClusterRegisterCommandOutcomeCallable MonitorClient::DescribeExternalClusterRegisterCommandCallable(const DescribeExternalClusterRegisterCommandRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeExternalClusterRegisterCommandOutcome>>();
    DescribeExternalClusterRegisterCommandAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribeExternalClusterRegisterCommandRequest&,
        DescribeExternalClusterRegisterCommandOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribeExternalClusterUninstallCommandOutcome MonitorClient::DescribeExternalClusterUninstallCommand(const DescribeExternalClusterUninstallCommandRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeExternalClusterUninstallCommand");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeExternalClusterUninstallCommandResponse rsp = DescribeExternalClusterUninstallCommandResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeExternalClusterUninstallCommandOutcome(rsp);
        else
            return DescribeExternalClusterUninstallCommandOutcome(o.GetError());
    }
    else
    {
        return DescribeExternalClusterUninstallCommandOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribeExternalClusterUninstallCommandAsync(const DescribeExternalClusterUninstallCommandRequest& request, const DescribeExternalClusterUninstallCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeExternalClusterUninstallCommandRequest&;
    using Resp = DescribeExternalClusterUninstallCommandResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeExternalClusterUninstallCommand", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribeExternalClusterUninstallCommandOutcomeCallable MonitorClient::DescribeExternalClusterUninstallCommandCallable(const DescribeExternalClusterUninstallCommandRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeExternalClusterUninstallCommandOutcome>>();
    DescribeExternalClusterUninstallCommandAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribeExternalClusterUninstallCommandRequest&,
        DescribeExternalClusterUninstallCommandOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribeGrafanaChannelsOutcome MonitorClient::DescribeGrafanaChannels(const DescribeGrafanaChannelsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGrafanaChannels");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGrafanaChannelsResponse rsp = DescribeGrafanaChannelsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGrafanaChannelsOutcome(rsp);
        else
            return DescribeGrafanaChannelsOutcome(o.GetError());
    }
    else
    {
        return DescribeGrafanaChannelsOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribeGrafanaChannelsAsync(const DescribeGrafanaChannelsRequest& request, const DescribeGrafanaChannelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeGrafanaChannelsRequest&;
    using Resp = DescribeGrafanaChannelsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGrafanaChannels", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribeGrafanaChannelsOutcomeCallable MonitorClient::DescribeGrafanaChannelsCallable(const DescribeGrafanaChannelsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGrafanaChannelsOutcome>>();
    DescribeGrafanaChannelsAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribeGrafanaChannelsRequest&,
        DescribeGrafanaChannelsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribeGrafanaConfigOutcome MonitorClient::DescribeGrafanaConfig(const DescribeGrafanaConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGrafanaConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGrafanaConfigResponse rsp = DescribeGrafanaConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGrafanaConfigOutcome(rsp);
        else
            return DescribeGrafanaConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeGrafanaConfigOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribeGrafanaConfigAsync(const DescribeGrafanaConfigRequest& request, const DescribeGrafanaConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeGrafanaConfigRequest&;
    using Resp = DescribeGrafanaConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGrafanaConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribeGrafanaConfigOutcomeCallable MonitorClient::DescribeGrafanaConfigCallable(const DescribeGrafanaConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGrafanaConfigOutcome>>();
    DescribeGrafanaConfigAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribeGrafanaConfigRequest&,
        DescribeGrafanaConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribeGrafanaEnvironmentsOutcome MonitorClient::DescribeGrafanaEnvironments(const DescribeGrafanaEnvironmentsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGrafanaEnvironments");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGrafanaEnvironmentsResponse rsp = DescribeGrafanaEnvironmentsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGrafanaEnvironmentsOutcome(rsp);
        else
            return DescribeGrafanaEnvironmentsOutcome(o.GetError());
    }
    else
    {
        return DescribeGrafanaEnvironmentsOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribeGrafanaEnvironmentsAsync(const DescribeGrafanaEnvironmentsRequest& request, const DescribeGrafanaEnvironmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeGrafanaEnvironmentsRequest&;
    using Resp = DescribeGrafanaEnvironmentsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGrafanaEnvironments", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribeGrafanaEnvironmentsOutcomeCallable MonitorClient::DescribeGrafanaEnvironmentsCallable(const DescribeGrafanaEnvironmentsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGrafanaEnvironmentsOutcome>>();
    DescribeGrafanaEnvironmentsAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribeGrafanaEnvironmentsRequest&,
        DescribeGrafanaEnvironmentsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribeGrafanaInstancesOutcome MonitorClient::DescribeGrafanaInstances(const DescribeGrafanaInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGrafanaInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGrafanaInstancesResponse rsp = DescribeGrafanaInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGrafanaInstancesOutcome(rsp);
        else
            return DescribeGrafanaInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeGrafanaInstancesOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribeGrafanaInstancesAsync(const DescribeGrafanaInstancesRequest& request, const DescribeGrafanaInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeGrafanaInstancesRequest&;
    using Resp = DescribeGrafanaInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGrafanaInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribeGrafanaInstancesOutcomeCallable MonitorClient::DescribeGrafanaInstancesCallable(const DescribeGrafanaInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGrafanaInstancesOutcome>>();
    DescribeGrafanaInstancesAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribeGrafanaInstancesRequest&,
        DescribeGrafanaInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribeGrafanaIntegrationsOutcome MonitorClient::DescribeGrafanaIntegrations(const DescribeGrafanaIntegrationsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGrafanaIntegrations");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGrafanaIntegrationsResponse rsp = DescribeGrafanaIntegrationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGrafanaIntegrationsOutcome(rsp);
        else
            return DescribeGrafanaIntegrationsOutcome(o.GetError());
    }
    else
    {
        return DescribeGrafanaIntegrationsOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribeGrafanaIntegrationsAsync(const DescribeGrafanaIntegrationsRequest& request, const DescribeGrafanaIntegrationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeGrafanaIntegrationsRequest&;
    using Resp = DescribeGrafanaIntegrationsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGrafanaIntegrations", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribeGrafanaIntegrationsOutcomeCallable MonitorClient::DescribeGrafanaIntegrationsCallable(const DescribeGrafanaIntegrationsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGrafanaIntegrationsOutcome>>();
    DescribeGrafanaIntegrationsAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribeGrafanaIntegrationsRequest&,
        DescribeGrafanaIntegrationsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribeGrafanaNotificationChannelsOutcome MonitorClient::DescribeGrafanaNotificationChannels(const DescribeGrafanaNotificationChannelsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGrafanaNotificationChannels");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGrafanaNotificationChannelsResponse rsp = DescribeGrafanaNotificationChannelsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGrafanaNotificationChannelsOutcome(rsp);
        else
            return DescribeGrafanaNotificationChannelsOutcome(o.GetError());
    }
    else
    {
        return DescribeGrafanaNotificationChannelsOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribeGrafanaNotificationChannelsAsync(const DescribeGrafanaNotificationChannelsRequest& request, const DescribeGrafanaNotificationChannelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeGrafanaNotificationChannelsRequest&;
    using Resp = DescribeGrafanaNotificationChannelsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGrafanaNotificationChannels", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribeGrafanaNotificationChannelsOutcomeCallable MonitorClient::DescribeGrafanaNotificationChannelsCallable(const DescribeGrafanaNotificationChannelsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGrafanaNotificationChannelsOutcome>>();
    DescribeGrafanaNotificationChannelsAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribeGrafanaNotificationChannelsRequest&,
        DescribeGrafanaNotificationChannelsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribeGrafanaWhiteListOutcome MonitorClient::DescribeGrafanaWhiteList(const DescribeGrafanaWhiteListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGrafanaWhiteList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGrafanaWhiteListResponse rsp = DescribeGrafanaWhiteListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGrafanaWhiteListOutcome(rsp);
        else
            return DescribeGrafanaWhiteListOutcome(o.GetError());
    }
    else
    {
        return DescribeGrafanaWhiteListOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribeGrafanaWhiteListAsync(const DescribeGrafanaWhiteListRequest& request, const DescribeGrafanaWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeGrafanaWhiteListRequest&;
    using Resp = DescribeGrafanaWhiteListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGrafanaWhiteList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribeGrafanaWhiteListOutcomeCallable MonitorClient::DescribeGrafanaWhiteListCallable(const DescribeGrafanaWhiteListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGrafanaWhiteListOutcome>>();
    DescribeGrafanaWhiteListAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribeGrafanaWhiteListRequest&,
        DescribeGrafanaWhiteListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribeInstalledPluginsOutcome MonitorClient::DescribeInstalledPlugins(const DescribeInstalledPluginsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstalledPlugins");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstalledPluginsResponse rsp = DescribeInstalledPluginsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstalledPluginsOutcome(rsp);
        else
            return DescribeInstalledPluginsOutcome(o.GetError());
    }
    else
    {
        return DescribeInstalledPluginsOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribeInstalledPluginsAsync(const DescribeInstalledPluginsRequest& request, const DescribeInstalledPluginsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstalledPluginsRequest&;
    using Resp = DescribeInstalledPluginsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstalledPlugins", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribeInstalledPluginsOutcomeCallable MonitorClient::DescribeInstalledPluginsCallable(const DescribeInstalledPluginsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstalledPluginsOutcome>>();
    DescribeInstalledPluginsAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribeInstalledPluginsRequest&,
        DescribeInstalledPluginsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribeMonitorResourceInfoOutcome MonitorClient::DescribeMonitorResourceInfo(const DescribeMonitorResourceInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMonitorResourceInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMonitorResourceInfoResponse rsp = DescribeMonitorResourceInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMonitorResourceInfoOutcome(rsp);
        else
            return DescribeMonitorResourceInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeMonitorResourceInfoOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribeMonitorResourceInfoAsync(const DescribeMonitorResourceInfoRequest& request, const DescribeMonitorResourceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMonitorResourceInfoRequest&;
    using Resp = DescribeMonitorResourceInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMonitorResourceInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribeMonitorResourceInfoOutcomeCallable MonitorClient::DescribeMonitorResourceInfoCallable(const DescribeMonitorResourceInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMonitorResourceInfoOutcome>>();
    DescribeMonitorResourceInfoAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribeMonitorResourceInfoRequest&,
        DescribeMonitorResourceInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribeMonitorTypesOutcome MonitorClient::DescribeMonitorTypes(const DescribeMonitorTypesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMonitorTypes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMonitorTypesResponse rsp = DescribeMonitorTypesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMonitorTypesOutcome(rsp);
        else
            return DescribeMonitorTypesOutcome(o.GetError());
    }
    else
    {
        return DescribeMonitorTypesOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribeMonitorTypesAsync(const DescribeMonitorTypesRequest& request, const DescribeMonitorTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMonitorTypesRequest&;
    using Resp = DescribeMonitorTypesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMonitorTypes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribeMonitorTypesOutcomeCallable MonitorClient::DescribeMonitorTypesCallable(const DescribeMonitorTypesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMonitorTypesOutcome>>();
    DescribeMonitorTypesAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribeMonitorTypesRequest&,
        DescribeMonitorTypesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribePhoneAlarmFlowTotalCountOutcome MonitorClient::DescribePhoneAlarmFlowTotalCount(const DescribePhoneAlarmFlowTotalCountRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePhoneAlarmFlowTotalCount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePhoneAlarmFlowTotalCountResponse rsp = DescribePhoneAlarmFlowTotalCountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePhoneAlarmFlowTotalCountOutcome(rsp);
        else
            return DescribePhoneAlarmFlowTotalCountOutcome(o.GetError());
    }
    else
    {
        return DescribePhoneAlarmFlowTotalCountOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribePhoneAlarmFlowTotalCountAsync(const DescribePhoneAlarmFlowTotalCountRequest& request, const DescribePhoneAlarmFlowTotalCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePhoneAlarmFlowTotalCountRequest&;
    using Resp = DescribePhoneAlarmFlowTotalCountResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePhoneAlarmFlowTotalCount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribePhoneAlarmFlowTotalCountOutcomeCallable MonitorClient::DescribePhoneAlarmFlowTotalCountCallable(const DescribePhoneAlarmFlowTotalCountRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePhoneAlarmFlowTotalCountOutcome>>();
    DescribePhoneAlarmFlowTotalCountAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribePhoneAlarmFlowTotalCountRequest&,
        DescribePhoneAlarmFlowTotalCountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribePluginOverviewsOutcome MonitorClient::DescribePluginOverviews(const DescribePluginOverviewsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePluginOverviews");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePluginOverviewsResponse rsp = DescribePluginOverviewsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePluginOverviewsOutcome(rsp);
        else
            return DescribePluginOverviewsOutcome(o.GetError());
    }
    else
    {
        return DescribePluginOverviewsOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribePluginOverviewsAsync(const DescribePluginOverviewsRequest& request, const DescribePluginOverviewsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePluginOverviewsRequest&;
    using Resp = DescribePluginOverviewsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePluginOverviews", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribePluginOverviewsOutcomeCallable MonitorClient::DescribePluginOverviewsCallable(const DescribePluginOverviewsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePluginOverviewsOutcome>>();
    DescribePluginOverviewsAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribePluginOverviewsRequest&,
        DescribePluginOverviewsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribePolicyConditionListOutcome MonitorClient::DescribePolicyConditionList(const DescribePolicyConditionListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePolicyConditionList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePolicyConditionListResponse rsp = DescribePolicyConditionListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePolicyConditionListOutcome(rsp);
        else
            return DescribePolicyConditionListOutcome(o.GetError());
    }
    else
    {
        return DescribePolicyConditionListOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribePolicyConditionListAsync(const DescribePolicyConditionListRequest& request, const DescribePolicyConditionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePolicyConditionListRequest&;
    using Resp = DescribePolicyConditionListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePolicyConditionList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribePolicyConditionListOutcomeCallable MonitorClient::DescribePolicyConditionListCallable(const DescribePolicyConditionListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePolicyConditionListOutcome>>();
    DescribePolicyConditionListAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribePolicyConditionListRequest&,
        DescribePolicyConditionListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribePolicyGroupInfoOutcome MonitorClient::DescribePolicyGroupInfo(const DescribePolicyGroupInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePolicyGroupInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePolicyGroupInfoResponse rsp = DescribePolicyGroupInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePolicyGroupInfoOutcome(rsp);
        else
            return DescribePolicyGroupInfoOutcome(o.GetError());
    }
    else
    {
        return DescribePolicyGroupInfoOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribePolicyGroupInfoAsync(const DescribePolicyGroupInfoRequest& request, const DescribePolicyGroupInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePolicyGroupInfoRequest&;
    using Resp = DescribePolicyGroupInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePolicyGroupInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribePolicyGroupInfoOutcomeCallable MonitorClient::DescribePolicyGroupInfoCallable(const DescribePolicyGroupInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePolicyGroupInfoOutcome>>();
    DescribePolicyGroupInfoAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribePolicyGroupInfoRequest&,
        DescribePolicyGroupInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribePolicyGroupListOutcome MonitorClient::DescribePolicyGroupList(const DescribePolicyGroupListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePolicyGroupList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePolicyGroupListResponse rsp = DescribePolicyGroupListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePolicyGroupListOutcome(rsp);
        else
            return DescribePolicyGroupListOutcome(o.GetError());
    }
    else
    {
        return DescribePolicyGroupListOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribePolicyGroupListAsync(const DescribePolicyGroupListRequest& request, const DescribePolicyGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePolicyGroupListRequest&;
    using Resp = DescribePolicyGroupListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePolicyGroupList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribePolicyGroupListOutcomeCallable MonitorClient::DescribePolicyGroupListCallable(const DescribePolicyGroupListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePolicyGroupListOutcome>>();
    DescribePolicyGroupListAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribePolicyGroupListRequest&,
        DescribePolicyGroupListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribePolicyObjectCountOutcome MonitorClient::DescribePolicyObjectCount(const DescribePolicyObjectCountRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePolicyObjectCount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePolicyObjectCountResponse rsp = DescribePolicyObjectCountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePolicyObjectCountOutcome(rsp);
        else
            return DescribePolicyObjectCountOutcome(o.GetError());
    }
    else
    {
        return DescribePolicyObjectCountOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribePolicyObjectCountAsync(const DescribePolicyObjectCountRequest& request, const DescribePolicyObjectCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePolicyObjectCountRequest&;
    using Resp = DescribePolicyObjectCountResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePolicyObjectCount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribePolicyObjectCountOutcomeCallable MonitorClient::DescribePolicyObjectCountCallable(const DescribePolicyObjectCountRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePolicyObjectCountOutcome>>();
    DescribePolicyObjectCountAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribePolicyObjectCountRequest&,
        DescribePolicyObjectCountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribeProductEventListOutcome MonitorClient::DescribeProductEventList(const DescribeProductEventListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProductEventList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProductEventListResponse rsp = DescribeProductEventListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProductEventListOutcome(rsp);
        else
            return DescribeProductEventListOutcome(o.GetError());
    }
    else
    {
        return DescribeProductEventListOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribeProductEventListAsync(const DescribeProductEventListRequest& request, const DescribeProductEventListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeProductEventListRequest&;
    using Resp = DescribeProductEventListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProductEventList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribeProductEventListOutcomeCallable MonitorClient::DescribeProductEventListCallable(const DescribeProductEventListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProductEventListOutcome>>();
    DescribeProductEventListAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribeProductEventListRequest&,
        DescribeProductEventListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribeProductListOutcome MonitorClient::DescribeProductList(const DescribeProductListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProductList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProductListResponse rsp = DescribeProductListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProductListOutcome(rsp);
        else
            return DescribeProductListOutcome(o.GetError());
    }
    else
    {
        return DescribeProductListOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribeProductListAsync(const DescribeProductListRequest& request, const DescribeProductListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeProductListRequest&;
    using Resp = DescribeProductListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProductList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribeProductListOutcomeCallable MonitorClient::DescribeProductListCallable(const DescribeProductListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProductListOutcome>>();
    DescribeProductListAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribeProductListRequest&,
        DescribeProductListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribePrometheusAgentInstancesOutcome MonitorClient::DescribePrometheusAgentInstances(const DescribePrometheusAgentInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePrometheusAgentInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePrometheusAgentInstancesResponse rsp = DescribePrometheusAgentInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePrometheusAgentInstancesOutcome(rsp);
        else
            return DescribePrometheusAgentInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribePrometheusAgentInstancesOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribePrometheusAgentInstancesAsync(const DescribePrometheusAgentInstancesRequest& request, const DescribePrometheusAgentInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePrometheusAgentInstancesRequest&;
    using Resp = DescribePrometheusAgentInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePrometheusAgentInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribePrometheusAgentInstancesOutcomeCallable MonitorClient::DescribePrometheusAgentInstancesCallable(const DescribePrometheusAgentInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePrometheusAgentInstancesOutcome>>();
    DescribePrometheusAgentInstancesAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribePrometheusAgentInstancesRequest&,
        DescribePrometheusAgentInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribePrometheusAgentsOutcome MonitorClient::DescribePrometheusAgents(const DescribePrometheusAgentsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePrometheusAgents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePrometheusAgentsResponse rsp = DescribePrometheusAgentsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePrometheusAgentsOutcome(rsp);
        else
            return DescribePrometheusAgentsOutcome(o.GetError());
    }
    else
    {
        return DescribePrometheusAgentsOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribePrometheusAgentsAsync(const DescribePrometheusAgentsRequest& request, const DescribePrometheusAgentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePrometheusAgentsRequest&;
    using Resp = DescribePrometheusAgentsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePrometheusAgents", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribePrometheusAgentsOutcomeCallable MonitorClient::DescribePrometheusAgentsCallable(const DescribePrometheusAgentsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePrometheusAgentsOutcome>>();
    DescribePrometheusAgentsAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribePrometheusAgentsRequest&,
        DescribePrometheusAgentsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribePrometheusAlertGroupsOutcome MonitorClient::DescribePrometheusAlertGroups(const DescribePrometheusAlertGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePrometheusAlertGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePrometheusAlertGroupsResponse rsp = DescribePrometheusAlertGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePrometheusAlertGroupsOutcome(rsp);
        else
            return DescribePrometheusAlertGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribePrometheusAlertGroupsOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribePrometheusAlertGroupsAsync(const DescribePrometheusAlertGroupsRequest& request, const DescribePrometheusAlertGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePrometheusAlertGroupsRequest&;
    using Resp = DescribePrometheusAlertGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePrometheusAlertGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribePrometheusAlertGroupsOutcomeCallable MonitorClient::DescribePrometheusAlertGroupsCallable(const DescribePrometheusAlertGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePrometheusAlertGroupsOutcome>>();
    DescribePrometheusAlertGroupsAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribePrometheusAlertGroupsRequest&,
        DescribePrometheusAlertGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribePrometheusAlertPolicyOutcome MonitorClient::DescribePrometheusAlertPolicy(const DescribePrometheusAlertPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePrometheusAlertPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePrometheusAlertPolicyResponse rsp = DescribePrometheusAlertPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePrometheusAlertPolicyOutcome(rsp);
        else
            return DescribePrometheusAlertPolicyOutcome(o.GetError());
    }
    else
    {
        return DescribePrometheusAlertPolicyOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribePrometheusAlertPolicyAsync(const DescribePrometheusAlertPolicyRequest& request, const DescribePrometheusAlertPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePrometheusAlertPolicyRequest&;
    using Resp = DescribePrometheusAlertPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePrometheusAlertPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribePrometheusAlertPolicyOutcomeCallable MonitorClient::DescribePrometheusAlertPolicyCallable(const DescribePrometheusAlertPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePrometheusAlertPolicyOutcome>>();
    DescribePrometheusAlertPolicyAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribePrometheusAlertPolicyRequest&,
        DescribePrometheusAlertPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribePrometheusClusterAgentsOutcome MonitorClient::DescribePrometheusClusterAgents(const DescribePrometheusClusterAgentsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePrometheusClusterAgents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePrometheusClusterAgentsResponse rsp = DescribePrometheusClusterAgentsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePrometheusClusterAgentsOutcome(rsp);
        else
            return DescribePrometheusClusterAgentsOutcome(o.GetError());
    }
    else
    {
        return DescribePrometheusClusterAgentsOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribePrometheusClusterAgentsAsync(const DescribePrometheusClusterAgentsRequest& request, const DescribePrometheusClusterAgentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePrometheusClusterAgentsRequest&;
    using Resp = DescribePrometheusClusterAgentsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePrometheusClusterAgents", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribePrometheusClusterAgentsOutcomeCallable MonitorClient::DescribePrometheusClusterAgentsCallable(const DescribePrometheusClusterAgentsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePrometheusClusterAgentsOutcome>>();
    DescribePrometheusClusterAgentsAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribePrometheusClusterAgentsRequest&,
        DescribePrometheusClusterAgentsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribePrometheusConfigOutcome MonitorClient::DescribePrometheusConfig(const DescribePrometheusConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePrometheusConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePrometheusConfigResponse rsp = DescribePrometheusConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePrometheusConfigOutcome(rsp);
        else
            return DescribePrometheusConfigOutcome(o.GetError());
    }
    else
    {
        return DescribePrometheusConfigOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribePrometheusConfigAsync(const DescribePrometheusConfigRequest& request, const DescribePrometheusConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePrometheusConfigRequest&;
    using Resp = DescribePrometheusConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePrometheusConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribePrometheusConfigOutcomeCallable MonitorClient::DescribePrometheusConfigCallable(const DescribePrometheusConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePrometheusConfigOutcome>>();
    DescribePrometheusConfigAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribePrometheusConfigRequest&,
        DescribePrometheusConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribePrometheusGlobalConfigOutcome MonitorClient::DescribePrometheusGlobalConfig(const DescribePrometheusGlobalConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePrometheusGlobalConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePrometheusGlobalConfigResponse rsp = DescribePrometheusGlobalConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePrometheusGlobalConfigOutcome(rsp);
        else
            return DescribePrometheusGlobalConfigOutcome(o.GetError());
    }
    else
    {
        return DescribePrometheusGlobalConfigOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribePrometheusGlobalConfigAsync(const DescribePrometheusGlobalConfigRequest& request, const DescribePrometheusGlobalConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePrometheusGlobalConfigRequest&;
    using Resp = DescribePrometheusGlobalConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePrometheusGlobalConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribePrometheusGlobalConfigOutcomeCallable MonitorClient::DescribePrometheusGlobalConfigCallable(const DescribePrometheusGlobalConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePrometheusGlobalConfigOutcome>>();
    DescribePrometheusGlobalConfigAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribePrometheusGlobalConfigRequest&,
        DescribePrometheusGlobalConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribePrometheusGlobalNotificationOutcome MonitorClient::DescribePrometheusGlobalNotification(const DescribePrometheusGlobalNotificationRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePrometheusGlobalNotification");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePrometheusGlobalNotificationResponse rsp = DescribePrometheusGlobalNotificationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePrometheusGlobalNotificationOutcome(rsp);
        else
            return DescribePrometheusGlobalNotificationOutcome(o.GetError());
    }
    else
    {
        return DescribePrometheusGlobalNotificationOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribePrometheusGlobalNotificationAsync(const DescribePrometheusGlobalNotificationRequest& request, const DescribePrometheusGlobalNotificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePrometheusGlobalNotificationRequest&;
    using Resp = DescribePrometheusGlobalNotificationResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePrometheusGlobalNotification", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribePrometheusGlobalNotificationOutcomeCallable MonitorClient::DescribePrometheusGlobalNotificationCallable(const DescribePrometheusGlobalNotificationRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePrometheusGlobalNotificationOutcome>>();
    DescribePrometheusGlobalNotificationAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribePrometheusGlobalNotificationRequest&,
        DescribePrometheusGlobalNotificationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribePrometheusInstanceDetailOutcome MonitorClient::DescribePrometheusInstanceDetail(const DescribePrometheusInstanceDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePrometheusInstanceDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePrometheusInstanceDetailResponse rsp = DescribePrometheusInstanceDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePrometheusInstanceDetailOutcome(rsp);
        else
            return DescribePrometheusInstanceDetailOutcome(o.GetError());
    }
    else
    {
        return DescribePrometheusInstanceDetailOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribePrometheusInstanceDetailAsync(const DescribePrometheusInstanceDetailRequest& request, const DescribePrometheusInstanceDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePrometheusInstanceDetailRequest&;
    using Resp = DescribePrometheusInstanceDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePrometheusInstanceDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribePrometheusInstanceDetailOutcomeCallable MonitorClient::DescribePrometheusInstanceDetailCallable(const DescribePrometheusInstanceDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePrometheusInstanceDetailOutcome>>();
    DescribePrometheusInstanceDetailAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribePrometheusInstanceDetailRequest&,
        DescribePrometheusInstanceDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribePrometheusInstanceInitStatusOutcome MonitorClient::DescribePrometheusInstanceInitStatus(const DescribePrometheusInstanceInitStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePrometheusInstanceInitStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePrometheusInstanceInitStatusResponse rsp = DescribePrometheusInstanceInitStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePrometheusInstanceInitStatusOutcome(rsp);
        else
            return DescribePrometheusInstanceInitStatusOutcome(o.GetError());
    }
    else
    {
        return DescribePrometheusInstanceInitStatusOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribePrometheusInstanceInitStatusAsync(const DescribePrometheusInstanceInitStatusRequest& request, const DescribePrometheusInstanceInitStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePrometheusInstanceInitStatusRequest&;
    using Resp = DescribePrometheusInstanceInitStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePrometheusInstanceInitStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribePrometheusInstanceInitStatusOutcomeCallable MonitorClient::DescribePrometheusInstanceInitStatusCallable(const DescribePrometheusInstanceInitStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePrometheusInstanceInitStatusOutcome>>();
    DescribePrometheusInstanceInitStatusAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribePrometheusInstanceInitStatusRequest&,
        DescribePrometheusInstanceInitStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribePrometheusInstanceUsageOutcome MonitorClient::DescribePrometheusInstanceUsage(const DescribePrometheusInstanceUsageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePrometheusInstanceUsage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePrometheusInstanceUsageResponse rsp = DescribePrometheusInstanceUsageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePrometheusInstanceUsageOutcome(rsp);
        else
            return DescribePrometheusInstanceUsageOutcome(o.GetError());
    }
    else
    {
        return DescribePrometheusInstanceUsageOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribePrometheusInstanceUsageAsync(const DescribePrometheusInstanceUsageRequest& request, const DescribePrometheusInstanceUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePrometheusInstanceUsageRequest&;
    using Resp = DescribePrometheusInstanceUsageResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePrometheusInstanceUsage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribePrometheusInstanceUsageOutcomeCallable MonitorClient::DescribePrometheusInstanceUsageCallable(const DescribePrometheusInstanceUsageRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePrometheusInstanceUsageOutcome>>();
    DescribePrometheusInstanceUsageAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribePrometheusInstanceUsageRequest&,
        DescribePrometheusInstanceUsageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribePrometheusInstancesOutcome MonitorClient::DescribePrometheusInstances(const DescribePrometheusInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePrometheusInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePrometheusInstancesResponse rsp = DescribePrometheusInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePrometheusInstancesOutcome(rsp);
        else
            return DescribePrometheusInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribePrometheusInstancesOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribePrometheusInstancesAsync(const DescribePrometheusInstancesRequest& request, const DescribePrometheusInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePrometheusInstancesRequest&;
    using Resp = DescribePrometheusInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePrometheusInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribePrometheusInstancesOutcomeCallable MonitorClient::DescribePrometheusInstancesCallable(const DescribePrometheusInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePrometheusInstancesOutcome>>();
    DescribePrometheusInstancesAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribePrometheusInstancesRequest&,
        DescribePrometheusInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribePrometheusInstancesOverviewOutcome MonitorClient::DescribePrometheusInstancesOverview(const DescribePrometheusInstancesOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePrometheusInstancesOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePrometheusInstancesOverviewResponse rsp = DescribePrometheusInstancesOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePrometheusInstancesOverviewOutcome(rsp);
        else
            return DescribePrometheusInstancesOverviewOutcome(o.GetError());
    }
    else
    {
        return DescribePrometheusInstancesOverviewOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribePrometheusInstancesOverviewAsync(const DescribePrometheusInstancesOverviewRequest& request, const DescribePrometheusInstancesOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePrometheusInstancesOverviewRequest&;
    using Resp = DescribePrometheusInstancesOverviewResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePrometheusInstancesOverview", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribePrometheusInstancesOverviewOutcomeCallable MonitorClient::DescribePrometheusInstancesOverviewCallable(const DescribePrometheusInstancesOverviewRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePrometheusInstancesOverviewOutcome>>();
    DescribePrometheusInstancesOverviewAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribePrometheusInstancesOverviewRequest&,
        DescribePrometheusInstancesOverviewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribePrometheusIntegrationMetricsOutcome MonitorClient::DescribePrometheusIntegrationMetrics(const DescribePrometheusIntegrationMetricsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePrometheusIntegrationMetrics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePrometheusIntegrationMetricsResponse rsp = DescribePrometheusIntegrationMetricsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePrometheusIntegrationMetricsOutcome(rsp);
        else
            return DescribePrometheusIntegrationMetricsOutcome(o.GetError());
    }
    else
    {
        return DescribePrometheusIntegrationMetricsOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribePrometheusIntegrationMetricsAsync(const DescribePrometheusIntegrationMetricsRequest& request, const DescribePrometheusIntegrationMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePrometheusIntegrationMetricsRequest&;
    using Resp = DescribePrometheusIntegrationMetricsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePrometheusIntegrationMetrics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribePrometheusIntegrationMetricsOutcomeCallable MonitorClient::DescribePrometheusIntegrationMetricsCallable(const DescribePrometheusIntegrationMetricsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePrometheusIntegrationMetricsOutcome>>();
    DescribePrometheusIntegrationMetricsAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribePrometheusIntegrationMetricsRequest&,
        DescribePrometheusIntegrationMetricsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribePrometheusRecordRulesOutcome MonitorClient::DescribePrometheusRecordRules(const DescribePrometheusRecordRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePrometheusRecordRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePrometheusRecordRulesResponse rsp = DescribePrometheusRecordRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePrometheusRecordRulesOutcome(rsp);
        else
            return DescribePrometheusRecordRulesOutcome(o.GetError());
    }
    else
    {
        return DescribePrometheusRecordRulesOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribePrometheusRecordRulesAsync(const DescribePrometheusRecordRulesRequest& request, const DescribePrometheusRecordRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePrometheusRecordRulesRequest&;
    using Resp = DescribePrometheusRecordRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePrometheusRecordRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribePrometheusRecordRulesOutcomeCallable MonitorClient::DescribePrometheusRecordRulesCallable(const DescribePrometheusRecordRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePrometheusRecordRulesOutcome>>();
    DescribePrometheusRecordRulesAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribePrometheusRecordRulesRequest&,
        DescribePrometheusRecordRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribePrometheusRegionsOutcome MonitorClient::DescribePrometheusRegions(const DescribePrometheusRegionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePrometheusRegions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePrometheusRegionsResponse rsp = DescribePrometheusRegionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePrometheusRegionsOutcome(rsp);
        else
            return DescribePrometheusRegionsOutcome(o.GetError());
    }
    else
    {
        return DescribePrometheusRegionsOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribePrometheusRegionsAsync(const DescribePrometheusRegionsRequest& request, const DescribePrometheusRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePrometheusRegionsRequest&;
    using Resp = DescribePrometheusRegionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePrometheusRegions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribePrometheusRegionsOutcomeCallable MonitorClient::DescribePrometheusRegionsCallable(const DescribePrometheusRegionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePrometheusRegionsOutcome>>();
    DescribePrometheusRegionsAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribePrometheusRegionsRequest&,
        DescribePrometheusRegionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribePrometheusScrapeJobsOutcome MonitorClient::DescribePrometheusScrapeJobs(const DescribePrometheusScrapeJobsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePrometheusScrapeJobs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePrometheusScrapeJobsResponse rsp = DescribePrometheusScrapeJobsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePrometheusScrapeJobsOutcome(rsp);
        else
            return DescribePrometheusScrapeJobsOutcome(o.GetError());
    }
    else
    {
        return DescribePrometheusScrapeJobsOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribePrometheusScrapeJobsAsync(const DescribePrometheusScrapeJobsRequest& request, const DescribePrometheusScrapeJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePrometheusScrapeJobsRequest&;
    using Resp = DescribePrometheusScrapeJobsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePrometheusScrapeJobs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribePrometheusScrapeJobsOutcomeCallable MonitorClient::DescribePrometheusScrapeJobsCallable(const DescribePrometheusScrapeJobsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePrometheusScrapeJobsOutcome>>();
    DescribePrometheusScrapeJobsAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribePrometheusScrapeJobsRequest&,
        DescribePrometheusScrapeJobsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribePrometheusScrapeStatisticsOutcome MonitorClient::DescribePrometheusScrapeStatistics(const DescribePrometheusScrapeStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePrometheusScrapeStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePrometheusScrapeStatisticsResponse rsp = DescribePrometheusScrapeStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePrometheusScrapeStatisticsOutcome(rsp);
        else
            return DescribePrometheusScrapeStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribePrometheusScrapeStatisticsOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribePrometheusScrapeStatisticsAsync(const DescribePrometheusScrapeStatisticsRequest& request, const DescribePrometheusScrapeStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePrometheusScrapeStatisticsRequest&;
    using Resp = DescribePrometheusScrapeStatisticsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePrometheusScrapeStatistics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribePrometheusScrapeStatisticsOutcomeCallable MonitorClient::DescribePrometheusScrapeStatisticsCallable(const DescribePrometheusScrapeStatisticsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePrometheusScrapeStatisticsOutcome>>();
    DescribePrometheusScrapeStatisticsAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribePrometheusScrapeStatisticsRequest&,
        DescribePrometheusScrapeStatisticsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribePrometheusTargetsTMPOutcome MonitorClient::DescribePrometheusTargetsTMP(const DescribePrometheusTargetsTMPRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePrometheusTargetsTMP");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePrometheusTargetsTMPResponse rsp = DescribePrometheusTargetsTMPResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePrometheusTargetsTMPOutcome(rsp);
        else
            return DescribePrometheusTargetsTMPOutcome(o.GetError());
    }
    else
    {
        return DescribePrometheusTargetsTMPOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribePrometheusTargetsTMPAsync(const DescribePrometheusTargetsTMPRequest& request, const DescribePrometheusTargetsTMPAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePrometheusTargetsTMPRequest&;
    using Resp = DescribePrometheusTargetsTMPResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePrometheusTargetsTMP", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribePrometheusTargetsTMPOutcomeCallable MonitorClient::DescribePrometheusTargetsTMPCallable(const DescribePrometheusTargetsTMPRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePrometheusTargetsTMPOutcome>>();
    DescribePrometheusTargetsTMPAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribePrometheusTargetsTMPRequest&,
        DescribePrometheusTargetsTMPOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribePrometheusTempOutcome MonitorClient::DescribePrometheusTemp(const DescribePrometheusTempRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePrometheusTemp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePrometheusTempResponse rsp = DescribePrometheusTempResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePrometheusTempOutcome(rsp);
        else
            return DescribePrometheusTempOutcome(o.GetError());
    }
    else
    {
        return DescribePrometheusTempOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribePrometheusTempAsync(const DescribePrometheusTempRequest& request, const DescribePrometheusTempAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePrometheusTempRequest&;
    using Resp = DescribePrometheusTempResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePrometheusTemp", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribePrometheusTempOutcomeCallable MonitorClient::DescribePrometheusTempCallable(const DescribePrometheusTempRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePrometheusTempOutcome>>();
    DescribePrometheusTempAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribePrometheusTempRequest&,
        DescribePrometheusTempOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribePrometheusTempSyncOutcome MonitorClient::DescribePrometheusTempSync(const DescribePrometheusTempSyncRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePrometheusTempSync");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePrometheusTempSyncResponse rsp = DescribePrometheusTempSyncResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePrometheusTempSyncOutcome(rsp);
        else
            return DescribePrometheusTempSyncOutcome(o.GetError());
    }
    else
    {
        return DescribePrometheusTempSyncOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribePrometheusTempSyncAsync(const DescribePrometheusTempSyncRequest& request, const DescribePrometheusTempSyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePrometheusTempSyncRequest&;
    using Resp = DescribePrometheusTempSyncResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePrometheusTempSync", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribePrometheusTempSyncOutcomeCallable MonitorClient::DescribePrometheusTempSyncCallable(const DescribePrometheusTempSyncRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePrometheusTempSyncOutcome>>();
    DescribePrometheusTempSyncAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribePrometheusTempSyncRequest&,
        DescribePrometheusTempSyncOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribePrometheusZonesOutcome MonitorClient::DescribePrometheusZones(const DescribePrometheusZonesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePrometheusZones");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePrometheusZonesResponse rsp = DescribePrometheusZonesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePrometheusZonesOutcome(rsp);
        else
            return DescribePrometheusZonesOutcome(o.GetError());
    }
    else
    {
        return DescribePrometheusZonesOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribePrometheusZonesAsync(const DescribePrometheusZonesRequest& request, const DescribePrometheusZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePrometheusZonesRequest&;
    using Resp = DescribePrometheusZonesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePrometheusZones", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribePrometheusZonesOutcomeCallable MonitorClient::DescribePrometheusZonesCallable(const DescribePrometheusZonesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePrometheusZonesOutcome>>();
    DescribePrometheusZonesAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribePrometheusZonesRequest&,
        DescribePrometheusZonesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribeRecordingRulesOutcome MonitorClient::DescribeRecordingRules(const DescribeRecordingRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRecordingRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRecordingRulesResponse rsp = DescribeRecordingRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRecordingRulesOutcome(rsp);
        else
            return DescribeRecordingRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeRecordingRulesOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribeRecordingRulesAsync(const DescribeRecordingRulesRequest& request, const DescribeRecordingRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRecordingRulesRequest&;
    using Resp = DescribeRecordingRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRecordingRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribeRecordingRulesOutcomeCallable MonitorClient::DescribeRecordingRulesCallable(const DescribeRecordingRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRecordingRulesOutcome>>();
    DescribeRecordingRulesAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribeRecordingRulesRequest&,
        DescribeRecordingRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribeRemoteURLsOutcome MonitorClient::DescribeRemoteURLs(const DescribeRemoteURLsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRemoteURLs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRemoteURLsResponse rsp = DescribeRemoteURLsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRemoteURLsOutcome(rsp);
        else
            return DescribeRemoteURLsOutcome(o.GetError());
    }
    else
    {
        return DescribeRemoteURLsOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribeRemoteURLsAsync(const DescribeRemoteURLsRequest& request, const DescribeRemoteURLsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRemoteURLsRequest&;
    using Resp = DescribeRemoteURLsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRemoteURLs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribeRemoteURLsOutcomeCallable MonitorClient::DescribeRemoteURLsCallable(const DescribeRemoteURLsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRemoteURLsOutcome>>();
    DescribeRemoteURLsAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribeRemoteURLsRequest&,
        DescribeRemoteURLsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribeRemoteWritesOutcome MonitorClient::DescribeRemoteWrites(const DescribeRemoteWritesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRemoteWrites");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRemoteWritesResponse rsp = DescribeRemoteWritesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRemoteWritesOutcome(rsp);
        else
            return DescribeRemoteWritesOutcome(o.GetError());
    }
    else
    {
        return DescribeRemoteWritesOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribeRemoteWritesAsync(const DescribeRemoteWritesRequest& request, const DescribeRemoteWritesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRemoteWritesRequest&;
    using Resp = DescribeRemoteWritesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRemoteWrites", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribeRemoteWritesOutcomeCallable MonitorClient::DescribeRemoteWritesCallable(const DescribeRemoteWritesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRemoteWritesOutcome>>();
    DescribeRemoteWritesAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribeRemoteWritesRequest&,
        DescribeRemoteWritesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribeSSOAccountOutcome MonitorClient::DescribeSSOAccount(const DescribeSSOAccountRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSSOAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSSOAccountResponse rsp = DescribeSSOAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSSOAccountOutcome(rsp);
        else
            return DescribeSSOAccountOutcome(o.GetError());
    }
    else
    {
        return DescribeSSOAccountOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribeSSOAccountAsync(const DescribeSSOAccountRequest& request, const DescribeSSOAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSSOAccountRequest&;
    using Resp = DescribeSSOAccountResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSSOAccount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribeSSOAccountOutcomeCallable MonitorClient::DescribeSSOAccountCallable(const DescribeSSOAccountRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSSOAccountOutcome>>();
    DescribeSSOAccountAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribeSSOAccountRequest&,
        DescribeSSOAccountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribeServiceDiscoveryOutcome MonitorClient::DescribeServiceDiscovery(const DescribeServiceDiscoveryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeServiceDiscovery");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeServiceDiscoveryResponse rsp = DescribeServiceDiscoveryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeServiceDiscoveryOutcome(rsp);
        else
            return DescribeServiceDiscoveryOutcome(o.GetError());
    }
    else
    {
        return DescribeServiceDiscoveryOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribeServiceDiscoveryAsync(const DescribeServiceDiscoveryRequest& request, const DescribeServiceDiscoveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeServiceDiscoveryRequest&;
    using Resp = DescribeServiceDiscoveryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeServiceDiscovery", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribeServiceDiscoveryOutcomeCallable MonitorClient::DescribeServiceDiscoveryCallable(const DescribeServiceDiscoveryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeServiceDiscoveryOutcome>>();
    DescribeServiceDiscoveryAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribeServiceDiscoveryRequest&,
        DescribeServiceDiscoveryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribeStatisticDataOutcome MonitorClient::DescribeStatisticData(const DescribeStatisticDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStatisticData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStatisticDataResponse rsp = DescribeStatisticDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStatisticDataOutcome(rsp);
        else
            return DescribeStatisticDataOutcome(o.GetError());
    }
    else
    {
        return DescribeStatisticDataOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribeStatisticDataAsync(const DescribeStatisticDataRequest& request, const DescribeStatisticDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeStatisticDataRequest&;
    using Resp = DescribeStatisticDataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStatisticData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribeStatisticDataOutcomeCallable MonitorClient::DescribeStatisticDataCallable(const DescribeStatisticDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStatisticDataOutcome>>();
    DescribeStatisticDataAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribeStatisticDataRequest&,
        DescribeStatisticDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DestroyPrometheusInstanceOutcome MonitorClient::DestroyPrometheusInstance(const DestroyPrometheusInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DestroyPrometheusInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DestroyPrometheusInstanceResponse rsp = DestroyPrometheusInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DestroyPrometheusInstanceOutcome(rsp);
        else
            return DestroyPrometheusInstanceOutcome(o.GetError());
    }
    else
    {
        return DestroyPrometheusInstanceOutcome(outcome.GetError());
    }
}

void MonitorClient::DestroyPrometheusInstanceAsync(const DestroyPrometheusInstanceRequest& request, const DestroyPrometheusInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DestroyPrometheusInstanceRequest&;
    using Resp = DestroyPrometheusInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "DestroyPrometheusInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DestroyPrometheusInstanceOutcomeCallable MonitorClient::DestroyPrometheusInstanceCallable(const DestroyPrometheusInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DestroyPrometheusInstanceOutcome>>();
    DestroyPrometheusInstanceAsync(
    request,
    [prom](
        const MonitorClient*,
        const DestroyPrometheusInstanceRequest&,
        DestroyPrometheusInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::EnableGrafanaInternetOutcome MonitorClient::EnableGrafanaInternet(const EnableGrafanaInternetRequest &request)
{
    auto outcome = MakeRequest(request, "EnableGrafanaInternet");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnableGrafanaInternetResponse rsp = EnableGrafanaInternetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnableGrafanaInternetOutcome(rsp);
        else
            return EnableGrafanaInternetOutcome(o.GetError());
    }
    else
    {
        return EnableGrafanaInternetOutcome(outcome.GetError());
    }
}

void MonitorClient::EnableGrafanaInternetAsync(const EnableGrafanaInternetRequest& request, const EnableGrafanaInternetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const EnableGrafanaInternetRequest&;
    using Resp = EnableGrafanaInternetResponse;

    DoRequestAsync<Req, Resp>(
        "EnableGrafanaInternet", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::EnableGrafanaInternetOutcomeCallable MonitorClient::EnableGrafanaInternetCallable(const EnableGrafanaInternetRequest &request)
{
    const auto prom = std::make_shared<std::promise<EnableGrafanaInternetOutcome>>();
    EnableGrafanaInternetAsync(
    request,
    [prom](
        const MonitorClient*,
        const EnableGrafanaInternetRequest&,
        EnableGrafanaInternetOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::EnableGrafanaSSOOutcome MonitorClient::EnableGrafanaSSO(const EnableGrafanaSSORequest &request)
{
    auto outcome = MakeRequest(request, "EnableGrafanaSSO");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnableGrafanaSSOResponse rsp = EnableGrafanaSSOResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnableGrafanaSSOOutcome(rsp);
        else
            return EnableGrafanaSSOOutcome(o.GetError());
    }
    else
    {
        return EnableGrafanaSSOOutcome(outcome.GetError());
    }
}

void MonitorClient::EnableGrafanaSSOAsync(const EnableGrafanaSSORequest& request, const EnableGrafanaSSOAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const EnableGrafanaSSORequest&;
    using Resp = EnableGrafanaSSOResponse;

    DoRequestAsync<Req, Resp>(
        "EnableGrafanaSSO", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::EnableGrafanaSSOOutcomeCallable MonitorClient::EnableGrafanaSSOCallable(const EnableGrafanaSSORequest &request)
{
    const auto prom = std::make_shared<std::promise<EnableGrafanaSSOOutcome>>();
    EnableGrafanaSSOAsync(
    request,
    [prom](
        const MonitorClient*,
        const EnableGrafanaSSORequest&,
        EnableGrafanaSSOOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::EnableSSOCamCheckOutcome MonitorClient::EnableSSOCamCheck(const EnableSSOCamCheckRequest &request)
{
    auto outcome = MakeRequest(request, "EnableSSOCamCheck");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnableSSOCamCheckResponse rsp = EnableSSOCamCheckResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnableSSOCamCheckOutcome(rsp);
        else
            return EnableSSOCamCheckOutcome(o.GetError());
    }
    else
    {
        return EnableSSOCamCheckOutcome(outcome.GetError());
    }
}

void MonitorClient::EnableSSOCamCheckAsync(const EnableSSOCamCheckRequest& request, const EnableSSOCamCheckAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const EnableSSOCamCheckRequest&;
    using Resp = EnableSSOCamCheckResponse;

    DoRequestAsync<Req, Resp>(
        "EnableSSOCamCheck", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::EnableSSOCamCheckOutcomeCallable MonitorClient::EnableSSOCamCheckCallable(const EnableSSOCamCheckRequest &request)
{
    const auto prom = std::make_shared<std::promise<EnableSSOCamCheckOutcome>>();
    EnableSSOCamCheckAsync(
    request,
    [prom](
        const MonitorClient*,
        const EnableSSOCamCheckRequest&,
        EnableSSOCamCheckOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::ExportPrometheusReadOnlyDynamicAPIOutcome MonitorClient::ExportPrometheusReadOnlyDynamicAPI(const ExportPrometheusReadOnlyDynamicAPIRequest &request)
{
    auto outcome = MakeRequest(request, "ExportPrometheusReadOnlyDynamicAPI");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportPrometheusReadOnlyDynamicAPIResponse rsp = ExportPrometheusReadOnlyDynamicAPIResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportPrometheusReadOnlyDynamicAPIOutcome(rsp);
        else
            return ExportPrometheusReadOnlyDynamicAPIOutcome(o.GetError());
    }
    else
    {
        return ExportPrometheusReadOnlyDynamicAPIOutcome(outcome.GetError());
    }
}

void MonitorClient::ExportPrometheusReadOnlyDynamicAPIAsync(const ExportPrometheusReadOnlyDynamicAPIRequest& request, const ExportPrometheusReadOnlyDynamicAPIAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportPrometheusReadOnlyDynamicAPIRequest&;
    using Resp = ExportPrometheusReadOnlyDynamicAPIResponse;

    DoRequestAsync<Req, Resp>(
        "ExportPrometheusReadOnlyDynamicAPI", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::ExportPrometheusReadOnlyDynamicAPIOutcomeCallable MonitorClient::ExportPrometheusReadOnlyDynamicAPICallable(const ExportPrometheusReadOnlyDynamicAPIRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportPrometheusReadOnlyDynamicAPIOutcome>>();
    ExportPrometheusReadOnlyDynamicAPIAsync(
    request,
    [prom](
        const MonitorClient*,
        const ExportPrometheusReadOnlyDynamicAPIRequest&,
        ExportPrometheusReadOnlyDynamicAPIOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::GetMonitorDataOutcome MonitorClient::GetMonitorData(const GetMonitorDataRequest &request)
{
    auto outcome = MakeRequest(request, "GetMonitorData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetMonitorDataResponse rsp = GetMonitorDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetMonitorDataOutcome(rsp);
        else
            return GetMonitorDataOutcome(o.GetError());
    }
    else
    {
        return GetMonitorDataOutcome(outcome.GetError());
    }
}

void MonitorClient::GetMonitorDataAsync(const GetMonitorDataRequest& request, const GetMonitorDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetMonitorDataRequest&;
    using Resp = GetMonitorDataResponse;

    DoRequestAsync<Req, Resp>(
        "GetMonitorData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::GetMonitorDataOutcomeCallable MonitorClient::GetMonitorDataCallable(const GetMonitorDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetMonitorDataOutcome>>();
    GetMonitorDataAsync(
    request,
    [prom](
        const MonitorClient*,
        const GetMonitorDataRequest&,
        GetMonitorDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::GetPrometheusAgentManagementCommandOutcome MonitorClient::GetPrometheusAgentManagementCommand(const GetPrometheusAgentManagementCommandRequest &request)
{
    auto outcome = MakeRequest(request, "GetPrometheusAgentManagementCommand");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetPrometheusAgentManagementCommandResponse rsp = GetPrometheusAgentManagementCommandResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetPrometheusAgentManagementCommandOutcome(rsp);
        else
            return GetPrometheusAgentManagementCommandOutcome(o.GetError());
    }
    else
    {
        return GetPrometheusAgentManagementCommandOutcome(outcome.GetError());
    }
}

void MonitorClient::GetPrometheusAgentManagementCommandAsync(const GetPrometheusAgentManagementCommandRequest& request, const GetPrometheusAgentManagementCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetPrometheusAgentManagementCommandRequest&;
    using Resp = GetPrometheusAgentManagementCommandResponse;

    DoRequestAsync<Req, Resp>(
        "GetPrometheusAgentManagementCommand", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::GetPrometheusAgentManagementCommandOutcomeCallable MonitorClient::GetPrometheusAgentManagementCommandCallable(const GetPrometheusAgentManagementCommandRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetPrometheusAgentManagementCommandOutcome>>();
    GetPrometheusAgentManagementCommandAsync(
    request,
    [prom](
        const MonitorClient*,
        const GetPrometheusAgentManagementCommandRequest&,
        GetPrometheusAgentManagementCommandOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::GetTopNMonitorDataOutcome MonitorClient::GetTopNMonitorData(const GetTopNMonitorDataRequest &request)
{
    auto outcome = MakeRequest(request, "GetTopNMonitorData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetTopNMonitorDataResponse rsp = GetTopNMonitorDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetTopNMonitorDataOutcome(rsp);
        else
            return GetTopNMonitorDataOutcome(o.GetError());
    }
    else
    {
        return GetTopNMonitorDataOutcome(outcome.GetError());
    }
}

void MonitorClient::GetTopNMonitorDataAsync(const GetTopNMonitorDataRequest& request, const GetTopNMonitorDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetTopNMonitorDataRequest&;
    using Resp = GetTopNMonitorDataResponse;

    DoRequestAsync<Req, Resp>(
        "GetTopNMonitorData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::GetTopNMonitorDataOutcomeCallable MonitorClient::GetTopNMonitorDataCallable(const GetTopNMonitorDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetTopNMonitorDataOutcome>>();
    GetTopNMonitorDataAsync(
    request,
    [prom](
        const MonitorClient*,
        const GetTopNMonitorDataRequest&,
        GetTopNMonitorDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::InstallPluginsOutcome MonitorClient::InstallPlugins(const InstallPluginsRequest &request)
{
    auto outcome = MakeRequest(request, "InstallPlugins");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InstallPluginsResponse rsp = InstallPluginsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InstallPluginsOutcome(rsp);
        else
            return InstallPluginsOutcome(o.GetError());
    }
    else
    {
        return InstallPluginsOutcome(outcome.GetError());
    }
}

void MonitorClient::InstallPluginsAsync(const InstallPluginsRequest& request, const InstallPluginsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const InstallPluginsRequest&;
    using Resp = InstallPluginsResponse;

    DoRequestAsync<Req, Resp>(
        "InstallPlugins", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::InstallPluginsOutcomeCallable MonitorClient::InstallPluginsCallable(const InstallPluginsRequest &request)
{
    const auto prom = std::make_shared<std::promise<InstallPluginsOutcome>>();
    InstallPluginsAsync(
    request,
    [prom](
        const MonitorClient*,
        const InstallPluginsRequest&,
        InstallPluginsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::ModifyAlarmNoticeOutcome MonitorClient::ModifyAlarmNotice(const ModifyAlarmNoticeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAlarmNotice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAlarmNoticeResponse rsp = ModifyAlarmNoticeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAlarmNoticeOutcome(rsp);
        else
            return ModifyAlarmNoticeOutcome(o.GetError());
    }
    else
    {
        return ModifyAlarmNoticeOutcome(outcome.GetError());
    }
}

void MonitorClient::ModifyAlarmNoticeAsync(const ModifyAlarmNoticeRequest& request, const ModifyAlarmNoticeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAlarmNoticeRequest&;
    using Resp = ModifyAlarmNoticeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAlarmNotice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::ModifyAlarmNoticeOutcomeCallable MonitorClient::ModifyAlarmNoticeCallable(const ModifyAlarmNoticeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAlarmNoticeOutcome>>();
    ModifyAlarmNoticeAsync(
    request,
    [prom](
        const MonitorClient*,
        const ModifyAlarmNoticeRequest&,
        ModifyAlarmNoticeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::ModifyAlarmPolicyConditionOutcome MonitorClient::ModifyAlarmPolicyCondition(const ModifyAlarmPolicyConditionRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAlarmPolicyCondition");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAlarmPolicyConditionResponse rsp = ModifyAlarmPolicyConditionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAlarmPolicyConditionOutcome(rsp);
        else
            return ModifyAlarmPolicyConditionOutcome(o.GetError());
    }
    else
    {
        return ModifyAlarmPolicyConditionOutcome(outcome.GetError());
    }
}

void MonitorClient::ModifyAlarmPolicyConditionAsync(const ModifyAlarmPolicyConditionRequest& request, const ModifyAlarmPolicyConditionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAlarmPolicyConditionRequest&;
    using Resp = ModifyAlarmPolicyConditionResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAlarmPolicyCondition", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::ModifyAlarmPolicyConditionOutcomeCallable MonitorClient::ModifyAlarmPolicyConditionCallable(const ModifyAlarmPolicyConditionRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAlarmPolicyConditionOutcome>>();
    ModifyAlarmPolicyConditionAsync(
    request,
    [prom](
        const MonitorClient*,
        const ModifyAlarmPolicyConditionRequest&,
        ModifyAlarmPolicyConditionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::ModifyAlarmPolicyInfoOutcome MonitorClient::ModifyAlarmPolicyInfo(const ModifyAlarmPolicyInfoRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAlarmPolicyInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAlarmPolicyInfoResponse rsp = ModifyAlarmPolicyInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAlarmPolicyInfoOutcome(rsp);
        else
            return ModifyAlarmPolicyInfoOutcome(o.GetError());
    }
    else
    {
        return ModifyAlarmPolicyInfoOutcome(outcome.GetError());
    }
}

void MonitorClient::ModifyAlarmPolicyInfoAsync(const ModifyAlarmPolicyInfoRequest& request, const ModifyAlarmPolicyInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAlarmPolicyInfoRequest&;
    using Resp = ModifyAlarmPolicyInfoResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAlarmPolicyInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::ModifyAlarmPolicyInfoOutcomeCallable MonitorClient::ModifyAlarmPolicyInfoCallable(const ModifyAlarmPolicyInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAlarmPolicyInfoOutcome>>();
    ModifyAlarmPolicyInfoAsync(
    request,
    [prom](
        const MonitorClient*,
        const ModifyAlarmPolicyInfoRequest&,
        ModifyAlarmPolicyInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::ModifyAlarmPolicyNoticeOutcome MonitorClient::ModifyAlarmPolicyNotice(const ModifyAlarmPolicyNoticeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAlarmPolicyNotice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAlarmPolicyNoticeResponse rsp = ModifyAlarmPolicyNoticeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAlarmPolicyNoticeOutcome(rsp);
        else
            return ModifyAlarmPolicyNoticeOutcome(o.GetError());
    }
    else
    {
        return ModifyAlarmPolicyNoticeOutcome(outcome.GetError());
    }
}

void MonitorClient::ModifyAlarmPolicyNoticeAsync(const ModifyAlarmPolicyNoticeRequest& request, const ModifyAlarmPolicyNoticeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAlarmPolicyNoticeRequest&;
    using Resp = ModifyAlarmPolicyNoticeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAlarmPolicyNotice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::ModifyAlarmPolicyNoticeOutcomeCallable MonitorClient::ModifyAlarmPolicyNoticeCallable(const ModifyAlarmPolicyNoticeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAlarmPolicyNoticeOutcome>>();
    ModifyAlarmPolicyNoticeAsync(
    request,
    [prom](
        const MonitorClient*,
        const ModifyAlarmPolicyNoticeRequest&,
        ModifyAlarmPolicyNoticeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::ModifyAlarmPolicyStatusOutcome MonitorClient::ModifyAlarmPolicyStatus(const ModifyAlarmPolicyStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAlarmPolicyStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAlarmPolicyStatusResponse rsp = ModifyAlarmPolicyStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAlarmPolicyStatusOutcome(rsp);
        else
            return ModifyAlarmPolicyStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyAlarmPolicyStatusOutcome(outcome.GetError());
    }
}

void MonitorClient::ModifyAlarmPolicyStatusAsync(const ModifyAlarmPolicyStatusRequest& request, const ModifyAlarmPolicyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAlarmPolicyStatusRequest&;
    using Resp = ModifyAlarmPolicyStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAlarmPolicyStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::ModifyAlarmPolicyStatusOutcomeCallable MonitorClient::ModifyAlarmPolicyStatusCallable(const ModifyAlarmPolicyStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAlarmPolicyStatusOutcome>>();
    ModifyAlarmPolicyStatusAsync(
    request,
    [prom](
        const MonitorClient*,
        const ModifyAlarmPolicyStatusRequest&,
        ModifyAlarmPolicyStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::ModifyAlarmPolicyTasksOutcome MonitorClient::ModifyAlarmPolicyTasks(const ModifyAlarmPolicyTasksRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAlarmPolicyTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAlarmPolicyTasksResponse rsp = ModifyAlarmPolicyTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAlarmPolicyTasksOutcome(rsp);
        else
            return ModifyAlarmPolicyTasksOutcome(o.GetError());
    }
    else
    {
        return ModifyAlarmPolicyTasksOutcome(outcome.GetError());
    }
}

void MonitorClient::ModifyAlarmPolicyTasksAsync(const ModifyAlarmPolicyTasksRequest& request, const ModifyAlarmPolicyTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAlarmPolicyTasksRequest&;
    using Resp = ModifyAlarmPolicyTasksResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAlarmPolicyTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::ModifyAlarmPolicyTasksOutcomeCallable MonitorClient::ModifyAlarmPolicyTasksCallable(const ModifyAlarmPolicyTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAlarmPolicyTasksOutcome>>();
    ModifyAlarmPolicyTasksAsync(
    request,
    [prom](
        const MonitorClient*,
        const ModifyAlarmPolicyTasksRequest&,
        ModifyAlarmPolicyTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::ModifyAlarmReceiversOutcome MonitorClient::ModifyAlarmReceivers(const ModifyAlarmReceiversRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAlarmReceivers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAlarmReceiversResponse rsp = ModifyAlarmReceiversResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAlarmReceiversOutcome(rsp);
        else
            return ModifyAlarmReceiversOutcome(o.GetError());
    }
    else
    {
        return ModifyAlarmReceiversOutcome(outcome.GetError());
    }
}

void MonitorClient::ModifyAlarmReceiversAsync(const ModifyAlarmReceiversRequest& request, const ModifyAlarmReceiversAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAlarmReceiversRequest&;
    using Resp = ModifyAlarmReceiversResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAlarmReceivers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::ModifyAlarmReceiversOutcomeCallable MonitorClient::ModifyAlarmReceiversCallable(const ModifyAlarmReceiversRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAlarmReceiversOutcome>>();
    ModifyAlarmReceiversAsync(
    request,
    [prom](
        const MonitorClient*,
        const ModifyAlarmReceiversRequest&,
        ModifyAlarmReceiversOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::ModifyGrafanaInstanceOutcome MonitorClient::ModifyGrafanaInstance(const ModifyGrafanaInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyGrafanaInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyGrafanaInstanceResponse rsp = ModifyGrafanaInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyGrafanaInstanceOutcome(rsp);
        else
            return ModifyGrafanaInstanceOutcome(o.GetError());
    }
    else
    {
        return ModifyGrafanaInstanceOutcome(outcome.GetError());
    }
}

void MonitorClient::ModifyGrafanaInstanceAsync(const ModifyGrafanaInstanceRequest& request, const ModifyGrafanaInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyGrafanaInstanceRequest&;
    using Resp = ModifyGrafanaInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyGrafanaInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::ModifyGrafanaInstanceOutcomeCallable MonitorClient::ModifyGrafanaInstanceCallable(const ModifyGrafanaInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyGrafanaInstanceOutcome>>();
    ModifyGrafanaInstanceAsync(
    request,
    [prom](
        const MonitorClient*,
        const ModifyGrafanaInstanceRequest&,
        ModifyGrafanaInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::ModifyPolicyGroupOutcome MonitorClient::ModifyPolicyGroup(const ModifyPolicyGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPolicyGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPolicyGroupResponse rsp = ModifyPolicyGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPolicyGroupOutcome(rsp);
        else
            return ModifyPolicyGroupOutcome(o.GetError());
    }
    else
    {
        return ModifyPolicyGroupOutcome(outcome.GetError());
    }
}

void MonitorClient::ModifyPolicyGroupAsync(const ModifyPolicyGroupRequest& request, const ModifyPolicyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyPolicyGroupRequest&;
    using Resp = ModifyPolicyGroupResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyPolicyGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::ModifyPolicyGroupOutcomeCallable MonitorClient::ModifyPolicyGroupCallable(const ModifyPolicyGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyPolicyGroupOutcome>>();
    ModifyPolicyGroupAsync(
    request,
    [prom](
        const MonitorClient*,
        const ModifyPolicyGroupRequest&,
        ModifyPolicyGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::ModifyPrometheusAgentExternalLabelsOutcome MonitorClient::ModifyPrometheusAgentExternalLabels(const ModifyPrometheusAgentExternalLabelsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPrometheusAgentExternalLabels");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPrometheusAgentExternalLabelsResponse rsp = ModifyPrometheusAgentExternalLabelsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPrometheusAgentExternalLabelsOutcome(rsp);
        else
            return ModifyPrometheusAgentExternalLabelsOutcome(o.GetError());
    }
    else
    {
        return ModifyPrometheusAgentExternalLabelsOutcome(outcome.GetError());
    }
}

void MonitorClient::ModifyPrometheusAgentExternalLabelsAsync(const ModifyPrometheusAgentExternalLabelsRequest& request, const ModifyPrometheusAgentExternalLabelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyPrometheusAgentExternalLabelsRequest&;
    using Resp = ModifyPrometheusAgentExternalLabelsResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyPrometheusAgentExternalLabels", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::ModifyPrometheusAgentExternalLabelsOutcomeCallable MonitorClient::ModifyPrometheusAgentExternalLabelsCallable(const ModifyPrometheusAgentExternalLabelsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyPrometheusAgentExternalLabelsOutcome>>();
    ModifyPrometheusAgentExternalLabelsAsync(
    request,
    [prom](
        const MonitorClient*,
        const ModifyPrometheusAgentExternalLabelsRequest&,
        ModifyPrometheusAgentExternalLabelsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::ModifyPrometheusAlertPolicyOutcome MonitorClient::ModifyPrometheusAlertPolicy(const ModifyPrometheusAlertPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPrometheusAlertPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPrometheusAlertPolicyResponse rsp = ModifyPrometheusAlertPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPrometheusAlertPolicyOutcome(rsp);
        else
            return ModifyPrometheusAlertPolicyOutcome(o.GetError());
    }
    else
    {
        return ModifyPrometheusAlertPolicyOutcome(outcome.GetError());
    }
}

void MonitorClient::ModifyPrometheusAlertPolicyAsync(const ModifyPrometheusAlertPolicyRequest& request, const ModifyPrometheusAlertPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyPrometheusAlertPolicyRequest&;
    using Resp = ModifyPrometheusAlertPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyPrometheusAlertPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::ModifyPrometheusAlertPolicyOutcomeCallable MonitorClient::ModifyPrometheusAlertPolicyCallable(const ModifyPrometheusAlertPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyPrometheusAlertPolicyOutcome>>();
    ModifyPrometheusAlertPolicyAsync(
    request,
    [prom](
        const MonitorClient*,
        const ModifyPrometheusAlertPolicyRequest&,
        ModifyPrometheusAlertPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::ModifyPrometheusConfigOutcome MonitorClient::ModifyPrometheusConfig(const ModifyPrometheusConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPrometheusConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPrometheusConfigResponse rsp = ModifyPrometheusConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPrometheusConfigOutcome(rsp);
        else
            return ModifyPrometheusConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyPrometheusConfigOutcome(outcome.GetError());
    }
}

void MonitorClient::ModifyPrometheusConfigAsync(const ModifyPrometheusConfigRequest& request, const ModifyPrometheusConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyPrometheusConfigRequest&;
    using Resp = ModifyPrometheusConfigResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyPrometheusConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::ModifyPrometheusConfigOutcomeCallable MonitorClient::ModifyPrometheusConfigCallable(const ModifyPrometheusConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyPrometheusConfigOutcome>>();
    ModifyPrometheusConfigAsync(
    request,
    [prom](
        const MonitorClient*,
        const ModifyPrometheusConfigRequest&,
        ModifyPrometheusConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::ModifyPrometheusGlobalNotificationOutcome MonitorClient::ModifyPrometheusGlobalNotification(const ModifyPrometheusGlobalNotificationRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPrometheusGlobalNotification");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPrometheusGlobalNotificationResponse rsp = ModifyPrometheusGlobalNotificationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPrometheusGlobalNotificationOutcome(rsp);
        else
            return ModifyPrometheusGlobalNotificationOutcome(o.GetError());
    }
    else
    {
        return ModifyPrometheusGlobalNotificationOutcome(outcome.GetError());
    }
}

void MonitorClient::ModifyPrometheusGlobalNotificationAsync(const ModifyPrometheusGlobalNotificationRequest& request, const ModifyPrometheusGlobalNotificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyPrometheusGlobalNotificationRequest&;
    using Resp = ModifyPrometheusGlobalNotificationResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyPrometheusGlobalNotification", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::ModifyPrometheusGlobalNotificationOutcomeCallable MonitorClient::ModifyPrometheusGlobalNotificationCallable(const ModifyPrometheusGlobalNotificationRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyPrometheusGlobalNotificationOutcome>>();
    ModifyPrometheusGlobalNotificationAsync(
    request,
    [prom](
        const MonitorClient*,
        const ModifyPrometheusGlobalNotificationRequest&,
        ModifyPrometheusGlobalNotificationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::ModifyPrometheusInstanceAttributesOutcome MonitorClient::ModifyPrometheusInstanceAttributes(const ModifyPrometheusInstanceAttributesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPrometheusInstanceAttributes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPrometheusInstanceAttributesResponse rsp = ModifyPrometheusInstanceAttributesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPrometheusInstanceAttributesOutcome(rsp);
        else
            return ModifyPrometheusInstanceAttributesOutcome(o.GetError());
    }
    else
    {
        return ModifyPrometheusInstanceAttributesOutcome(outcome.GetError());
    }
}

void MonitorClient::ModifyPrometheusInstanceAttributesAsync(const ModifyPrometheusInstanceAttributesRequest& request, const ModifyPrometheusInstanceAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyPrometheusInstanceAttributesRequest&;
    using Resp = ModifyPrometheusInstanceAttributesResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyPrometheusInstanceAttributes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::ModifyPrometheusInstanceAttributesOutcomeCallable MonitorClient::ModifyPrometheusInstanceAttributesCallable(const ModifyPrometheusInstanceAttributesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyPrometheusInstanceAttributesOutcome>>();
    ModifyPrometheusInstanceAttributesAsync(
    request,
    [prom](
        const MonitorClient*,
        const ModifyPrometheusInstanceAttributesRequest&,
        ModifyPrometheusInstanceAttributesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::ModifyPrometheusRecordRuleYamlOutcome MonitorClient::ModifyPrometheusRecordRuleYaml(const ModifyPrometheusRecordRuleYamlRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPrometheusRecordRuleYaml");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPrometheusRecordRuleYamlResponse rsp = ModifyPrometheusRecordRuleYamlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPrometheusRecordRuleYamlOutcome(rsp);
        else
            return ModifyPrometheusRecordRuleYamlOutcome(o.GetError());
    }
    else
    {
        return ModifyPrometheusRecordRuleYamlOutcome(outcome.GetError());
    }
}

void MonitorClient::ModifyPrometheusRecordRuleYamlAsync(const ModifyPrometheusRecordRuleYamlRequest& request, const ModifyPrometheusRecordRuleYamlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyPrometheusRecordRuleYamlRequest&;
    using Resp = ModifyPrometheusRecordRuleYamlResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyPrometheusRecordRuleYaml", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::ModifyPrometheusRecordRuleYamlOutcomeCallable MonitorClient::ModifyPrometheusRecordRuleYamlCallable(const ModifyPrometheusRecordRuleYamlRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyPrometheusRecordRuleYamlOutcome>>();
    ModifyPrometheusRecordRuleYamlAsync(
    request,
    [prom](
        const MonitorClient*,
        const ModifyPrometheusRecordRuleYamlRequest&,
        ModifyPrometheusRecordRuleYamlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::ModifyPrometheusTempOutcome MonitorClient::ModifyPrometheusTemp(const ModifyPrometheusTempRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPrometheusTemp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPrometheusTempResponse rsp = ModifyPrometheusTempResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPrometheusTempOutcome(rsp);
        else
            return ModifyPrometheusTempOutcome(o.GetError());
    }
    else
    {
        return ModifyPrometheusTempOutcome(outcome.GetError());
    }
}

void MonitorClient::ModifyPrometheusTempAsync(const ModifyPrometheusTempRequest& request, const ModifyPrometheusTempAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyPrometheusTempRequest&;
    using Resp = ModifyPrometheusTempResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyPrometheusTemp", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::ModifyPrometheusTempOutcomeCallable MonitorClient::ModifyPrometheusTempCallable(const ModifyPrometheusTempRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyPrometheusTempOutcome>>();
    ModifyPrometheusTempAsync(
    request,
    [prom](
        const MonitorClient*,
        const ModifyPrometheusTempRequest&,
        ModifyPrometheusTempOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::ModifyRemoteURLsOutcome MonitorClient::ModifyRemoteURLs(const ModifyRemoteURLsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRemoteURLs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRemoteURLsResponse rsp = ModifyRemoteURLsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRemoteURLsOutcome(rsp);
        else
            return ModifyRemoteURLsOutcome(o.GetError());
    }
    else
    {
        return ModifyRemoteURLsOutcome(outcome.GetError());
    }
}

void MonitorClient::ModifyRemoteURLsAsync(const ModifyRemoteURLsRequest& request, const ModifyRemoteURLsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyRemoteURLsRequest&;
    using Resp = ModifyRemoteURLsResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyRemoteURLs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::ModifyRemoteURLsOutcomeCallable MonitorClient::ModifyRemoteURLsCallable(const ModifyRemoteURLsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyRemoteURLsOutcome>>();
    ModifyRemoteURLsAsync(
    request,
    [prom](
        const MonitorClient*,
        const ModifyRemoteURLsRequest&,
        ModifyRemoteURLsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::ResumeGrafanaInstanceOutcome MonitorClient::ResumeGrafanaInstance(const ResumeGrafanaInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "ResumeGrafanaInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResumeGrafanaInstanceResponse rsp = ResumeGrafanaInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResumeGrafanaInstanceOutcome(rsp);
        else
            return ResumeGrafanaInstanceOutcome(o.GetError());
    }
    else
    {
        return ResumeGrafanaInstanceOutcome(outcome.GetError());
    }
}

void MonitorClient::ResumeGrafanaInstanceAsync(const ResumeGrafanaInstanceRequest& request, const ResumeGrafanaInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ResumeGrafanaInstanceRequest&;
    using Resp = ResumeGrafanaInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "ResumeGrafanaInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::ResumeGrafanaInstanceOutcomeCallable MonitorClient::ResumeGrafanaInstanceCallable(const ResumeGrafanaInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResumeGrafanaInstanceOutcome>>();
    ResumeGrafanaInstanceAsync(
    request,
    [prom](
        const MonitorClient*,
        const ResumeGrafanaInstanceRequest&,
        ResumeGrafanaInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::RunPrometheusInstanceOutcome MonitorClient::RunPrometheusInstance(const RunPrometheusInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "RunPrometheusInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RunPrometheusInstanceResponse rsp = RunPrometheusInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RunPrometheusInstanceOutcome(rsp);
        else
            return RunPrometheusInstanceOutcome(o.GetError());
    }
    else
    {
        return RunPrometheusInstanceOutcome(outcome.GetError());
    }
}

void MonitorClient::RunPrometheusInstanceAsync(const RunPrometheusInstanceRequest& request, const RunPrometheusInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RunPrometheusInstanceRequest&;
    using Resp = RunPrometheusInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "RunPrometheusInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::RunPrometheusInstanceOutcomeCallable MonitorClient::RunPrometheusInstanceCallable(const RunPrometheusInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<RunPrometheusInstanceOutcome>>();
    RunPrometheusInstanceAsync(
    request,
    [prom](
        const MonitorClient*,
        const RunPrometheusInstanceRequest&,
        RunPrometheusInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::SetDefaultAlarmPolicyOutcome MonitorClient::SetDefaultAlarmPolicy(const SetDefaultAlarmPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "SetDefaultAlarmPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetDefaultAlarmPolicyResponse rsp = SetDefaultAlarmPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetDefaultAlarmPolicyOutcome(rsp);
        else
            return SetDefaultAlarmPolicyOutcome(o.GetError());
    }
    else
    {
        return SetDefaultAlarmPolicyOutcome(outcome.GetError());
    }
}

void MonitorClient::SetDefaultAlarmPolicyAsync(const SetDefaultAlarmPolicyRequest& request, const SetDefaultAlarmPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SetDefaultAlarmPolicyRequest&;
    using Resp = SetDefaultAlarmPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "SetDefaultAlarmPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::SetDefaultAlarmPolicyOutcomeCallable MonitorClient::SetDefaultAlarmPolicyCallable(const SetDefaultAlarmPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetDefaultAlarmPolicyOutcome>>();
    SetDefaultAlarmPolicyAsync(
    request,
    [prom](
        const MonitorClient*,
        const SetDefaultAlarmPolicyRequest&,
        SetDefaultAlarmPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::SyncPrometheusTempOutcome MonitorClient::SyncPrometheusTemp(const SyncPrometheusTempRequest &request)
{
    auto outcome = MakeRequest(request, "SyncPrometheusTemp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SyncPrometheusTempResponse rsp = SyncPrometheusTempResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SyncPrometheusTempOutcome(rsp);
        else
            return SyncPrometheusTempOutcome(o.GetError());
    }
    else
    {
        return SyncPrometheusTempOutcome(outcome.GetError());
    }
}

void MonitorClient::SyncPrometheusTempAsync(const SyncPrometheusTempRequest& request, const SyncPrometheusTempAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SyncPrometheusTempRequest&;
    using Resp = SyncPrometheusTempResponse;

    DoRequestAsync<Req, Resp>(
        "SyncPrometheusTemp", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::SyncPrometheusTempOutcomeCallable MonitorClient::SyncPrometheusTempCallable(const SyncPrometheusTempRequest &request)
{
    const auto prom = std::make_shared<std::promise<SyncPrometheusTempOutcome>>();
    SyncPrometheusTempAsync(
    request,
    [prom](
        const MonitorClient*,
        const SyncPrometheusTempRequest&,
        SyncPrometheusTempOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::TerminatePrometheusInstancesOutcome MonitorClient::TerminatePrometheusInstances(const TerminatePrometheusInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "TerminatePrometheusInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TerminatePrometheusInstancesResponse rsp = TerminatePrometheusInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TerminatePrometheusInstancesOutcome(rsp);
        else
            return TerminatePrometheusInstancesOutcome(o.GetError());
    }
    else
    {
        return TerminatePrometheusInstancesOutcome(outcome.GetError());
    }
}

void MonitorClient::TerminatePrometheusInstancesAsync(const TerminatePrometheusInstancesRequest& request, const TerminatePrometheusInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const TerminatePrometheusInstancesRequest&;
    using Resp = TerminatePrometheusInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "TerminatePrometheusInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::TerminatePrometheusInstancesOutcomeCallable MonitorClient::TerminatePrometheusInstancesCallable(const TerminatePrometheusInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<TerminatePrometheusInstancesOutcome>>();
    TerminatePrometheusInstancesAsync(
    request,
    [prom](
        const MonitorClient*,
        const TerminatePrometheusInstancesRequest&,
        TerminatePrometheusInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::UnBindingAllPolicyObjectOutcome MonitorClient::UnBindingAllPolicyObject(const UnBindingAllPolicyObjectRequest &request)
{
    auto outcome = MakeRequest(request, "UnBindingAllPolicyObject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnBindingAllPolicyObjectResponse rsp = UnBindingAllPolicyObjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnBindingAllPolicyObjectOutcome(rsp);
        else
            return UnBindingAllPolicyObjectOutcome(o.GetError());
    }
    else
    {
        return UnBindingAllPolicyObjectOutcome(outcome.GetError());
    }
}

void MonitorClient::UnBindingAllPolicyObjectAsync(const UnBindingAllPolicyObjectRequest& request, const UnBindingAllPolicyObjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UnBindingAllPolicyObjectRequest&;
    using Resp = UnBindingAllPolicyObjectResponse;

    DoRequestAsync<Req, Resp>(
        "UnBindingAllPolicyObject", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::UnBindingAllPolicyObjectOutcomeCallable MonitorClient::UnBindingAllPolicyObjectCallable(const UnBindingAllPolicyObjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<UnBindingAllPolicyObjectOutcome>>();
    UnBindingAllPolicyObjectAsync(
    request,
    [prom](
        const MonitorClient*,
        const UnBindingAllPolicyObjectRequest&,
        UnBindingAllPolicyObjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::UnBindingPolicyObjectOutcome MonitorClient::UnBindingPolicyObject(const UnBindingPolicyObjectRequest &request)
{
    auto outcome = MakeRequest(request, "UnBindingPolicyObject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnBindingPolicyObjectResponse rsp = UnBindingPolicyObjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnBindingPolicyObjectOutcome(rsp);
        else
            return UnBindingPolicyObjectOutcome(o.GetError());
    }
    else
    {
        return UnBindingPolicyObjectOutcome(outcome.GetError());
    }
}

void MonitorClient::UnBindingPolicyObjectAsync(const UnBindingPolicyObjectRequest& request, const UnBindingPolicyObjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UnBindingPolicyObjectRequest&;
    using Resp = UnBindingPolicyObjectResponse;

    DoRequestAsync<Req, Resp>(
        "UnBindingPolicyObject", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::UnBindingPolicyObjectOutcomeCallable MonitorClient::UnBindingPolicyObjectCallable(const UnBindingPolicyObjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<UnBindingPolicyObjectOutcome>>();
    UnBindingPolicyObjectAsync(
    request,
    [prom](
        const MonitorClient*,
        const UnBindingPolicyObjectRequest&,
        UnBindingPolicyObjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::UnbindPrometheusManagedGrafanaOutcome MonitorClient::UnbindPrometheusManagedGrafana(const UnbindPrometheusManagedGrafanaRequest &request)
{
    auto outcome = MakeRequest(request, "UnbindPrometheusManagedGrafana");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnbindPrometheusManagedGrafanaResponse rsp = UnbindPrometheusManagedGrafanaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnbindPrometheusManagedGrafanaOutcome(rsp);
        else
            return UnbindPrometheusManagedGrafanaOutcome(o.GetError());
    }
    else
    {
        return UnbindPrometheusManagedGrafanaOutcome(outcome.GetError());
    }
}

void MonitorClient::UnbindPrometheusManagedGrafanaAsync(const UnbindPrometheusManagedGrafanaRequest& request, const UnbindPrometheusManagedGrafanaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UnbindPrometheusManagedGrafanaRequest&;
    using Resp = UnbindPrometheusManagedGrafanaResponse;

    DoRequestAsync<Req, Resp>(
        "UnbindPrometheusManagedGrafana", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::UnbindPrometheusManagedGrafanaOutcomeCallable MonitorClient::UnbindPrometheusManagedGrafanaCallable(const UnbindPrometheusManagedGrafanaRequest &request)
{
    const auto prom = std::make_shared<std::promise<UnbindPrometheusManagedGrafanaOutcome>>();
    UnbindPrometheusManagedGrafanaAsync(
    request,
    [prom](
        const MonitorClient*,
        const UnbindPrometheusManagedGrafanaRequest&,
        UnbindPrometheusManagedGrafanaOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::UninstallGrafanaDashboardOutcome MonitorClient::UninstallGrafanaDashboard(const UninstallGrafanaDashboardRequest &request)
{
    auto outcome = MakeRequest(request, "UninstallGrafanaDashboard");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UninstallGrafanaDashboardResponse rsp = UninstallGrafanaDashboardResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UninstallGrafanaDashboardOutcome(rsp);
        else
            return UninstallGrafanaDashboardOutcome(o.GetError());
    }
    else
    {
        return UninstallGrafanaDashboardOutcome(outcome.GetError());
    }
}

void MonitorClient::UninstallGrafanaDashboardAsync(const UninstallGrafanaDashboardRequest& request, const UninstallGrafanaDashboardAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UninstallGrafanaDashboardRequest&;
    using Resp = UninstallGrafanaDashboardResponse;

    DoRequestAsync<Req, Resp>(
        "UninstallGrafanaDashboard", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::UninstallGrafanaDashboardOutcomeCallable MonitorClient::UninstallGrafanaDashboardCallable(const UninstallGrafanaDashboardRequest &request)
{
    const auto prom = std::make_shared<std::promise<UninstallGrafanaDashboardOutcome>>();
    UninstallGrafanaDashboardAsync(
    request,
    [prom](
        const MonitorClient*,
        const UninstallGrafanaDashboardRequest&,
        UninstallGrafanaDashboardOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::UninstallGrafanaPluginsOutcome MonitorClient::UninstallGrafanaPlugins(const UninstallGrafanaPluginsRequest &request)
{
    auto outcome = MakeRequest(request, "UninstallGrafanaPlugins");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UninstallGrafanaPluginsResponse rsp = UninstallGrafanaPluginsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UninstallGrafanaPluginsOutcome(rsp);
        else
            return UninstallGrafanaPluginsOutcome(o.GetError());
    }
    else
    {
        return UninstallGrafanaPluginsOutcome(outcome.GetError());
    }
}

void MonitorClient::UninstallGrafanaPluginsAsync(const UninstallGrafanaPluginsRequest& request, const UninstallGrafanaPluginsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UninstallGrafanaPluginsRequest&;
    using Resp = UninstallGrafanaPluginsResponse;

    DoRequestAsync<Req, Resp>(
        "UninstallGrafanaPlugins", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::UninstallGrafanaPluginsOutcomeCallable MonitorClient::UninstallGrafanaPluginsCallable(const UninstallGrafanaPluginsRequest &request)
{
    const auto prom = std::make_shared<std::promise<UninstallGrafanaPluginsOutcome>>();
    UninstallGrafanaPluginsAsync(
    request,
    [prom](
        const MonitorClient*,
        const UninstallGrafanaPluginsRequest&,
        UninstallGrafanaPluginsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::UpdateAlertRuleOutcome MonitorClient::UpdateAlertRule(const UpdateAlertRuleRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateAlertRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateAlertRuleResponse rsp = UpdateAlertRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateAlertRuleOutcome(rsp);
        else
            return UpdateAlertRuleOutcome(o.GetError());
    }
    else
    {
        return UpdateAlertRuleOutcome(outcome.GetError());
    }
}

void MonitorClient::UpdateAlertRuleAsync(const UpdateAlertRuleRequest& request, const UpdateAlertRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateAlertRuleRequest&;
    using Resp = UpdateAlertRuleResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateAlertRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::UpdateAlertRuleOutcomeCallable MonitorClient::UpdateAlertRuleCallable(const UpdateAlertRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateAlertRuleOutcome>>();
    UpdateAlertRuleAsync(
    request,
    [prom](
        const MonitorClient*,
        const UpdateAlertRuleRequest&,
        UpdateAlertRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::UpdateAlertRuleStateOutcome MonitorClient::UpdateAlertRuleState(const UpdateAlertRuleStateRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateAlertRuleState");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateAlertRuleStateResponse rsp = UpdateAlertRuleStateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateAlertRuleStateOutcome(rsp);
        else
            return UpdateAlertRuleStateOutcome(o.GetError());
    }
    else
    {
        return UpdateAlertRuleStateOutcome(outcome.GetError());
    }
}

void MonitorClient::UpdateAlertRuleStateAsync(const UpdateAlertRuleStateRequest& request, const UpdateAlertRuleStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateAlertRuleStateRequest&;
    using Resp = UpdateAlertRuleStateResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateAlertRuleState", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::UpdateAlertRuleStateOutcomeCallable MonitorClient::UpdateAlertRuleStateCallable(const UpdateAlertRuleStateRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateAlertRuleStateOutcome>>();
    UpdateAlertRuleStateAsync(
    request,
    [prom](
        const MonitorClient*,
        const UpdateAlertRuleStateRequest&,
        UpdateAlertRuleStateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::UpdateDNSConfigOutcome MonitorClient::UpdateDNSConfig(const UpdateDNSConfigRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateDNSConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateDNSConfigResponse rsp = UpdateDNSConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateDNSConfigOutcome(rsp);
        else
            return UpdateDNSConfigOutcome(o.GetError());
    }
    else
    {
        return UpdateDNSConfigOutcome(outcome.GetError());
    }
}

void MonitorClient::UpdateDNSConfigAsync(const UpdateDNSConfigRequest& request, const UpdateDNSConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateDNSConfigRequest&;
    using Resp = UpdateDNSConfigResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateDNSConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::UpdateDNSConfigOutcomeCallable MonitorClient::UpdateDNSConfigCallable(const UpdateDNSConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateDNSConfigOutcome>>();
    UpdateDNSConfigAsync(
    request,
    [prom](
        const MonitorClient*,
        const UpdateDNSConfigRequest&,
        UpdateDNSConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::UpdateExporterIntegrationOutcome MonitorClient::UpdateExporterIntegration(const UpdateExporterIntegrationRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateExporterIntegration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateExporterIntegrationResponse rsp = UpdateExporterIntegrationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateExporterIntegrationOutcome(rsp);
        else
            return UpdateExporterIntegrationOutcome(o.GetError());
    }
    else
    {
        return UpdateExporterIntegrationOutcome(outcome.GetError());
    }
}

void MonitorClient::UpdateExporterIntegrationAsync(const UpdateExporterIntegrationRequest& request, const UpdateExporterIntegrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateExporterIntegrationRequest&;
    using Resp = UpdateExporterIntegrationResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateExporterIntegration", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::UpdateExporterIntegrationOutcomeCallable MonitorClient::UpdateExporterIntegrationCallable(const UpdateExporterIntegrationRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateExporterIntegrationOutcome>>();
    UpdateExporterIntegrationAsync(
    request,
    [prom](
        const MonitorClient*,
        const UpdateExporterIntegrationRequest&,
        UpdateExporterIntegrationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::UpdateGrafanaConfigOutcome MonitorClient::UpdateGrafanaConfig(const UpdateGrafanaConfigRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateGrafanaConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateGrafanaConfigResponse rsp = UpdateGrafanaConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateGrafanaConfigOutcome(rsp);
        else
            return UpdateGrafanaConfigOutcome(o.GetError());
    }
    else
    {
        return UpdateGrafanaConfigOutcome(outcome.GetError());
    }
}

void MonitorClient::UpdateGrafanaConfigAsync(const UpdateGrafanaConfigRequest& request, const UpdateGrafanaConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateGrafanaConfigRequest&;
    using Resp = UpdateGrafanaConfigResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateGrafanaConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::UpdateGrafanaConfigOutcomeCallable MonitorClient::UpdateGrafanaConfigCallable(const UpdateGrafanaConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateGrafanaConfigOutcome>>();
    UpdateGrafanaConfigAsync(
    request,
    [prom](
        const MonitorClient*,
        const UpdateGrafanaConfigRequest&,
        UpdateGrafanaConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::UpdateGrafanaEnvironmentsOutcome MonitorClient::UpdateGrafanaEnvironments(const UpdateGrafanaEnvironmentsRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateGrafanaEnvironments");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateGrafanaEnvironmentsResponse rsp = UpdateGrafanaEnvironmentsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateGrafanaEnvironmentsOutcome(rsp);
        else
            return UpdateGrafanaEnvironmentsOutcome(o.GetError());
    }
    else
    {
        return UpdateGrafanaEnvironmentsOutcome(outcome.GetError());
    }
}

void MonitorClient::UpdateGrafanaEnvironmentsAsync(const UpdateGrafanaEnvironmentsRequest& request, const UpdateGrafanaEnvironmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateGrafanaEnvironmentsRequest&;
    using Resp = UpdateGrafanaEnvironmentsResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateGrafanaEnvironments", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::UpdateGrafanaEnvironmentsOutcomeCallable MonitorClient::UpdateGrafanaEnvironmentsCallable(const UpdateGrafanaEnvironmentsRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateGrafanaEnvironmentsOutcome>>();
    UpdateGrafanaEnvironmentsAsync(
    request,
    [prom](
        const MonitorClient*,
        const UpdateGrafanaEnvironmentsRequest&,
        UpdateGrafanaEnvironmentsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::UpdateGrafanaIntegrationOutcome MonitorClient::UpdateGrafanaIntegration(const UpdateGrafanaIntegrationRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateGrafanaIntegration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateGrafanaIntegrationResponse rsp = UpdateGrafanaIntegrationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateGrafanaIntegrationOutcome(rsp);
        else
            return UpdateGrafanaIntegrationOutcome(o.GetError());
    }
    else
    {
        return UpdateGrafanaIntegrationOutcome(outcome.GetError());
    }
}

void MonitorClient::UpdateGrafanaIntegrationAsync(const UpdateGrafanaIntegrationRequest& request, const UpdateGrafanaIntegrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateGrafanaIntegrationRequest&;
    using Resp = UpdateGrafanaIntegrationResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateGrafanaIntegration", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::UpdateGrafanaIntegrationOutcomeCallable MonitorClient::UpdateGrafanaIntegrationCallable(const UpdateGrafanaIntegrationRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateGrafanaIntegrationOutcome>>();
    UpdateGrafanaIntegrationAsync(
    request,
    [prom](
        const MonitorClient*,
        const UpdateGrafanaIntegrationRequest&,
        UpdateGrafanaIntegrationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::UpdateGrafanaNotificationChannelOutcome MonitorClient::UpdateGrafanaNotificationChannel(const UpdateGrafanaNotificationChannelRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateGrafanaNotificationChannel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateGrafanaNotificationChannelResponse rsp = UpdateGrafanaNotificationChannelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateGrafanaNotificationChannelOutcome(rsp);
        else
            return UpdateGrafanaNotificationChannelOutcome(o.GetError());
    }
    else
    {
        return UpdateGrafanaNotificationChannelOutcome(outcome.GetError());
    }
}

void MonitorClient::UpdateGrafanaNotificationChannelAsync(const UpdateGrafanaNotificationChannelRequest& request, const UpdateGrafanaNotificationChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateGrafanaNotificationChannelRequest&;
    using Resp = UpdateGrafanaNotificationChannelResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateGrafanaNotificationChannel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::UpdateGrafanaNotificationChannelOutcomeCallable MonitorClient::UpdateGrafanaNotificationChannelCallable(const UpdateGrafanaNotificationChannelRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateGrafanaNotificationChannelOutcome>>();
    UpdateGrafanaNotificationChannelAsync(
    request,
    [prom](
        const MonitorClient*,
        const UpdateGrafanaNotificationChannelRequest&,
        UpdateGrafanaNotificationChannelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::UpdateGrafanaWhiteListOutcome MonitorClient::UpdateGrafanaWhiteList(const UpdateGrafanaWhiteListRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateGrafanaWhiteList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateGrafanaWhiteListResponse rsp = UpdateGrafanaWhiteListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateGrafanaWhiteListOutcome(rsp);
        else
            return UpdateGrafanaWhiteListOutcome(o.GetError());
    }
    else
    {
        return UpdateGrafanaWhiteListOutcome(outcome.GetError());
    }
}

void MonitorClient::UpdateGrafanaWhiteListAsync(const UpdateGrafanaWhiteListRequest& request, const UpdateGrafanaWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateGrafanaWhiteListRequest&;
    using Resp = UpdateGrafanaWhiteListResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateGrafanaWhiteList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::UpdateGrafanaWhiteListOutcomeCallable MonitorClient::UpdateGrafanaWhiteListCallable(const UpdateGrafanaWhiteListRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateGrafanaWhiteListOutcome>>();
    UpdateGrafanaWhiteListAsync(
    request,
    [prom](
        const MonitorClient*,
        const UpdateGrafanaWhiteListRequest&,
        UpdateGrafanaWhiteListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::UpdatePrometheusAgentStatusOutcome MonitorClient::UpdatePrometheusAgentStatus(const UpdatePrometheusAgentStatusRequest &request)
{
    auto outcome = MakeRequest(request, "UpdatePrometheusAgentStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdatePrometheusAgentStatusResponse rsp = UpdatePrometheusAgentStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdatePrometheusAgentStatusOutcome(rsp);
        else
            return UpdatePrometheusAgentStatusOutcome(o.GetError());
    }
    else
    {
        return UpdatePrometheusAgentStatusOutcome(outcome.GetError());
    }
}

void MonitorClient::UpdatePrometheusAgentStatusAsync(const UpdatePrometheusAgentStatusRequest& request, const UpdatePrometheusAgentStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdatePrometheusAgentStatusRequest&;
    using Resp = UpdatePrometheusAgentStatusResponse;

    DoRequestAsync<Req, Resp>(
        "UpdatePrometheusAgentStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::UpdatePrometheusAgentStatusOutcomeCallable MonitorClient::UpdatePrometheusAgentStatusCallable(const UpdatePrometheusAgentStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdatePrometheusAgentStatusOutcome>>();
    UpdatePrometheusAgentStatusAsync(
    request,
    [prom](
        const MonitorClient*,
        const UpdatePrometheusAgentStatusRequest&,
        UpdatePrometheusAgentStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::UpdatePrometheusAlertGroupOutcome MonitorClient::UpdatePrometheusAlertGroup(const UpdatePrometheusAlertGroupRequest &request)
{
    auto outcome = MakeRequest(request, "UpdatePrometheusAlertGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdatePrometheusAlertGroupResponse rsp = UpdatePrometheusAlertGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdatePrometheusAlertGroupOutcome(rsp);
        else
            return UpdatePrometheusAlertGroupOutcome(o.GetError());
    }
    else
    {
        return UpdatePrometheusAlertGroupOutcome(outcome.GetError());
    }
}

void MonitorClient::UpdatePrometheusAlertGroupAsync(const UpdatePrometheusAlertGroupRequest& request, const UpdatePrometheusAlertGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdatePrometheusAlertGroupRequest&;
    using Resp = UpdatePrometheusAlertGroupResponse;

    DoRequestAsync<Req, Resp>(
        "UpdatePrometheusAlertGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::UpdatePrometheusAlertGroupOutcomeCallable MonitorClient::UpdatePrometheusAlertGroupCallable(const UpdatePrometheusAlertGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdatePrometheusAlertGroupOutcome>>();
    UpdatePrometheusAlertGroupAsync(
    request,
    [prom](
        const MonitorClient*,
        const UpdatePrometheusAlertGroupRequest&,
        UpdatePrometheusAlertGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::UpdatePrometheusAlertGroupStateOutcome MonitorClient::UpdatePrometheusAlertGroupState(const UpdatePrometheusAlertGroupStateRequest &request)
{
    auto outcome = MakeRequest(request, "UpdatePrometheusAlertGroupState");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdatePrometheusAlertGroupStateResponse rsp = UpdatePrometheusAlertGroupStateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdatePrometheusAlertGroupStateOutcome(rsp);
        else
            return UpdatePrometheusAlertGroupStateOutcome(o.GetError());
    }
    else
    {
        return UpdatePrometheusAlertGroupStateOutcome(outcome.GetError());
    }
}

void MonitorClient::UpdatePrometheusAlertGroupStateAsync(const UpdatePrometheusAlertGroupStateRequest& request, const UpdatePrometheusAlertGroupStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdatePrometheusAlertGroupStateRequest&;
    using Resp = UpdatePrometheusAlertGroupStateResponse;

    DoRequestAsync<Req, Resp>(
        "UpdatePrometheusAlertGroupState", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::UpdatePrometheusAlertGroupStateOutcomeCallable MonitorClient::UpdatePrometheusAlertGroupStateCallable(const UpdatePrometheusAlertGroupStateRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdatePrometheusAlertGroupStateOutcome>>();
    UpdatePrometheusAlertGroupStateAsync(
    request,
    [prom](
        const MonitorClient*,
        const UpdatePrometheusAlertGroupStateRequest&,
        UpdatePrometheusAlertGroupStateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::UpdatePrometheusScrapeJobOutcome MonitorClient::UpdatePrometheusScrapeJob(const UpdatePrometheusScrapeJobRequest &request)
{
    auto outcome = MakeRequest(request, "UpdatePrometheusScrapeJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdatePrometheusScrapeJobResponse rsp = UpdatePrometheusScrapeJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdatePrometheusScrapeJobOutcome(rsp);
        else
            return UpdatePrometheusScrapeJobOutcome(o.GetError());
    }
    else
    {
        return UpdatePrometheusScrapeJobOutcome(outcome.GetError());
    }
}

void MonitorClient::UpdatePrometheusScrapeJobAsync(const UpdatePrometheusScrapeJobRequest& request, const UpdatePrometheusScrapeJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdatePrometheusScrapeJobRequest&;
    using Resp = UpdatePrometheusScrapeJobResponse;

    DoRequestAsync<Req, Resp>(
        "UpdatePrometheusScrapeJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::UpdatePrometheusScrapeJobOutcomeCallable MonitorClient::UpdatePrometheusScrapeJobCallable(const UpdatePrometheusScrapeJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdatePrometheusScrapeJobOutcome>>();
    UpdatePrometheusScrapeJobAsync(
    request,
    [prom](
        const MonitorClient*,
        const UpdatePrometheusScrapeJobRequest&,
        UpdatePrometheusScrapeJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::UpdateRecordingRuleOutcome MonitorClient::UpdateRecordingRule(const UpdateRecordingRuleRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateRecordingRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateRecordingRuleResponse rsp = UpdateRecordingRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateRecordingRuleOutcome(rsp);
        else
            return UpdateRecordingRuleOutcome(o.GetError());
    }
    else
    {
        return UpdateRecordingRuleOutcome(outcome.GetError());
    }
}

void MonitorClient::UpdateRecordingRuleAsync(const UpdateRecordingRuleRequest& request, const UpdateRecordingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateRecordingRuleRequest&;
    using Resp = UpdateRecordingRuleResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateRecordingRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::UpdateRecordingRuleOutcomeCallable MonitorClient::UpdateRecordingRuleCallable(const UpdateRecordingRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateRecordingRuleOutcome>>();
    UpdateRecordingRuleAsync(
    request,
    [prom](
        const MonitorClient*,
        const UpdateRecordingRuleRequest&,
        UpdateRecordingRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::UpdateSSOAccountOutcome MonitorClient::UpdateSSOAccount(const UpdateSSOAccountRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateSSOAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateSSOAccountResponse rsp = UpdateSSOAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateSSOAccountOutcome(rsp);
        else
            return UpdateSSOAccountOutcome(o.GetError());
    }
    else
    {
        return UpdateSSOAccountOutcome(outcome.GetError());
    }
}

void MonitorClient::UpdateSSOAccountAsync(const UpdateSSOAccountRequest& request, const UpdateSSOAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateSSOAccountRequest&;
    using Resp = UpdateSSOAccountResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateSSOAccount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::UpdateSSOAccountOutcomeCallable MonitorClient::UpdateSSOAccountCallable(const UpdateSSOAccountRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateSSOAccountOutcome>>();
    UpdateSSOAccountAsync(
    request,
    [prom](
        const MonitorClient*,
        const UpdateSSOAccountRequest&,
        UpdateSSOAccountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::UpdateServiceDiscoveryOutcome MonitorClient::UpdateServiceDiscovery(const UpdateServiceDiscoveryRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateServiceDiscovery");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateServiceDiscoveryResponse rsp = UpdateServiceDiscoveryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateServiceDiscoveryOutcome(rsp);
        else
            return UpdateServiceDiscoveryOutcome(o.GetError());
    }
    else
    {
        return UpdateServiceDiscoveryOutcome(outcome.GetError());
    }
}

void MonitorClient::UpdateServiceDiscoveryAsync(const UpdateServiceDiscoveryRequest& request, const UpdateServiceDiscoveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateServiceDiscoveryRequest&;
    using Resp = UpdateServiceDiscoveryResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateServiceDiscovery", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::UpdateServiceDiscoveryOutcomeCallable MonitorClient::UpdateServiceDiscoveryCallable(const UpdateServiceDiscoveryRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateServiceDiscoveryOutcome>>();
    UpdateServiceDiscoveryAsync(
    request,
    [prom](
        const MonitorClient*,
        const UpdateServiceDiscoveryRequest&,
        UpdateServiceDiscoveryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::UpgradeGrafanaDashboardOutcome MonitorClient::UpgradeGrafanaDashboard(const UpgradeGrafanaDashboardRequest &request)
{
    auto outcome = MakeRequest(request, "UpgradeGrafanaDashboard");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpgradeGrafanaDashboardResponse rsp = UpgradeGrafanaDashboardResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpgradeGrafanaDashboardOutcome(rsp);
        else
            return UpgradeGrafanaDashboardOutcome(o.GetError());
    }
    else
    {
        return UpgradeGrafanaDashboardOutcome(outcome.GetError());
    }
}

void MonitorClient::UpgradeGrafanaDashboardAsync(const UpgradeGrafanaDashboardRequest& request, const UpgradeGrafanaDashboardAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpgradeGrafanaDashboardRequest&;
    using Resp = UpgradeGrafanaDashboardResponse;

    DoRequestAsync<Req, Resp>(
        "UpgradeGrafanaDashboard", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::UpgradeGrafanaDashboardOutcomeCallable MonitorClient::UpgradeGrafanaDashboardCallable(const UpgradeGrafanaDashboardRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpgradeGrafanaDashboardOutcome>>();
    UpgradeGrafanaDashboardAsync(
    request,
    [prom](
        const MonitorClient*,
        const UpgradeGrafanaDashboardRequest&,
        UpgradeGrafanaDashboardOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::UpgradeGrafanaInstanceOutcome MonitorClient::UpgradeGrafanaInstance(const UpgradeGrafanaInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "UpgradeGrafanaInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpgradeGrafanaInstanceResponse rsp = UpgradeGrafanaInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpgradeGrafanaInstanceOutcome(rsp);
        else
            return UpgradeGrafanaInstanceOutcome(o.GetError());
    }
    else
    {
        return UpgradeGrafanaInstanceOutcome(outcome.GetError());
    }
}

void MonitorClient::UpgradeGrafanaInstanceAsync(const UpgradeGrafanaInstanceRequest& request, const UpgradeGrafanaInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpgradeGrafanaInstanceRequest&;
    using Resp = UpgradeGrafanaInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "UpgradeGrafanaInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::UpgradeGrafanaInstanceOutcomeCallable MonitorClient::UpgradeGrafanaInstanceCallable(const UpgradeGrafanaInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpgradeGrafanaInstanceOutcome>>();
    UpgradeGrafanaInstanceAsync(
    request,
    [prom](
        const MonitorClient*,
        const UpgradeGrafanaInstanceRequest&,
        UpgradeGrafanaInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


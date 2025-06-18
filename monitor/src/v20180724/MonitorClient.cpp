/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BindPrometheusManagedGrafana(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::BindPrometheusManagedGrafanaOutcomeCallable MonitorClient::BindPrometheusManagedGrafanaCallable(const BindPrometheusManagedGrafanaRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BindPrometheusManagedGrafanaOutcome()>>(
        [this, request]()
        {
            return this->BindPrometheusManagedGrafana(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BindingPolicyObject(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::BindingPolicyObjectOutcomeCallable MonitorClient::BindingPolicyObjectCallable(const BindingPolicyObjectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BindingPolicyObjectOutcome()>>(
        [this, request]()
        {
            return this->BindingPolicyObject(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BindingPolicyTag(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::BindingPolicyTagOutcomeCallable MonitorClient::BindingPolicyTagCallable(const BindingPolicyTagRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BindingPolicyTagOutcome()>>(
        [this, request]()
        {
            return this->BindingPolicyTag(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CleanGrafanaInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::CleanGrafanaInstanceOutcomeCallable MonitorClient::CleanGrafanaInstanceCallable(const CleanGrafanaInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CleanGrafanaInstanceOutcome()>>(
        [this, request]()
        {
            return this->CleanGrafanaInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAlarmNotice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::CreateAlarmNoticeOutcomeCallable MonitorClient::CreateAlarmNoticeCallable(const CreateAlarmNoticeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAlarmNoticeOutcome()>>(
        [this, request]()
        {
            return this->CreateAlarmNotice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAlarmPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::CreateAlarmPolicyOutcomeCallable MonitorClient::CreateAlarmPolicyCallable(const CreateAlarmPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAlarmPolicyOutcome()>>(
        [this, request]()
        {
            return this->CreateAlarmPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAlarmShield(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::CreateAlarmShieldOutcomeCallable MonitorClient::CreateAlarmShieldCallable(const CreateAlarmShieldRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAlarmShieldOutcome()>>(
        [this, request]()
        {
            return this->CreateAlarmShield(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAlertRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::CreateAlertRuleOutcomeCallable MonitorClient::CreateAlertRuleCallable(const CreateAlertRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAlertRuleOutcome()>>(
        [this, request]()
        {
            return this->CreateAlertRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateConditionsTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::CreateConditionsTemplateOutcomeCallable MonitorClient::CreateConditionsTemplateCallable(const CreateConditionsTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateConditionsTemplateOutcome()>>(
        [this, request]()
        {
            return this->CreateConditionsTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateExporterIntegration(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::CreateExporterIntegrationOutcomeCallable MonitorClient::CreateExporterIntegrationCallable(const CreateExporterIntegrationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateExporterIntegrationOutcome()>>(
        [this, request]()
        {
            return this->CreateExporterIntegration(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateExternalCluster(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::CreateExternalClusterOutcomeCallable MonitorClient::CreateExternalClusterCallable(const CreateExternalClusterRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateExternalClusterOutcome()>>(
        [this, request]()
        {
            return this->CreateExternalCluster(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateGrafanaInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::CreateGrafanaInstanceOutcomeCallable MonitorClient::CreateGrafanaInstanceCallable(const CreateGrafanaInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateGrafanaInstanceOutcome()>>(
        [this, request]()
        {
            return this->CreateGrafanaInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateGrafanaIntegration(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::CreateGrafanaIntegrationOutcomeCallable MonitorClient::CreateGrafanaIntegrationCallable(const CreateGrafanaIntegrationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateGrafanaIntegrationOutcome()>>(
        [this, request]()
        {
            return this->CreateGrafanaIntegration(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateGrafanaNotificationChannel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::CreateGrafanaNotificationChannelOutcomeCallable MonitorClient::CreateGrafanaNotificationChannelCallable(const CreateGrafanaNotificationChannelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateGrafanaNotificationChannelOutcome()>>(
        [this, request]()
        {
            return this->CreateGrafanaNotificationChannel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePolicyGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::CreatePolicyGroupOutcomeCallable MonitorClient::CreatePolicyGroupCallable(const CreatePolicyGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePolicyGroupOutcome()>>(
        [this, request]()
        {
            return this->CreatePolicyGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePrometheusAgent(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::CreatePrometheusAgentOutcomeCallable MonitorClient::CreatePrometheusAgentCallable(const CreatePrometheusAgentRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePrometheusAgentOutcome()>>(
        [this, request]()
        {
            return this->CreatePrometheusAgent(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePrometheusAlertGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::CreatePrometheusAlertGroupOutcomeCallable MonitorClient::CreatePrometheusAlertGroupCallable(const CreatePrometheusAlertGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePrometheusAlertGroupOutcome()>>(
        [this, request]()
        {
            return this->CreatePrometheusAlertGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePrometheusAlertPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::CreatePrometheusAlertPolicyOutcomeCallable MonitorClient::CreatePrometheusAlertPolicyCallable(const CreatePrometheusAlertPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePrometheusAlertPolicyOutcome()>>(
        [this, request]()
        {
            return this->CreatePrometheusAlertPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePrometheusClusterAgent(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::CreatePrometheusClusterAgentOutcomeCallable MonitorClient::CreatePrometheusClusterAgentCallable(const CreatePrometheusClusterAgentRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePrometheusClusterAgentOutcome()>>(
        [this, request]()
        {
            return this->CreatePrometheusClusterAgent(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePrometheusConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::CreatePrometheusConfigOutcomeCallable MonitorClient::CreatePrometheusConfigCallable(const CreatePrometheusConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePrometheusConfigOutcome()>>(
        [this, request]()
        {
            return this->CreatePrometheusConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePrometheusGlobalNotification(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::CreatePrometheusGlobalNotificationOutcomeCallable MonitorClient::CreatePrometheusGlobalNotificationCallable(const CreatePrometheusGlobalNotificationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePrometheusGlobalNotificationOutcome()>>(
        [this, request]()
        {
            return this->CreatePrometheusGlobalNotification(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePrometheusMultiTenantInstancePostPayMode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::CreatePrometheusMultiTenantInstancePostPayModeOutcomeCallable MonitorClient::CreatePrometheusMultiTenantInstancePostPayModeCallable(const CreatePrometheusMultiTenantInstancePostPayModeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePrometheusMultiTenantInstancePostPayModeOutcome()>>(
        [this, request]()
        {
            return this->CreatePrometheusMultiTenantInstancePostPayMode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePrometheusRecordRuleYaml(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::CreatePrometheusRecordRuleYamlOutcomeCallable MonitorClient::CreatePrometheusRecordRuleYamlCallable(const CreatePrometheusRecordRuleYamlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePrometheusRecordRuleYamlOutcome()>>(
        [this, request]()
        {
            return this->CreatePrometheusRecordRuleYaml(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePrometheusScrapeJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::CreatePrometheusScrapeJobOutcomeCallable MonitorClient::CreatePrometheusScrapeJobCallable(const CreatePrometheusScrapeJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePrometheusScrapeJobOutcome()>>(
        [this, request]()
        {
            return this->CreatePrometheusScrapeJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePrometheusTemp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::CreatePrometheusTempOutcomeCallable MonitorClient::CreatePrometheusTempCallable(const CreatePrometheusTempRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePrometheusTempOutcome()>>(
        [this, request]()
        {
            return this->CreatePrometheusTemp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateRecordingRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::CreateRecordingRuleOutcomeCallable MonitorClient::CreateRecordingRuleCallable(const CreateRecordingRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateRecordingRuleOutcome()>>(
        [this, request]()
        {
            return this->CreateRecordingRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSSOAccount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::CreateSSOAccountOutcomeCallable MonitorClient::CreateSSOAccountCallable(const CreateSSOAccountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSSOAccountOutcome()>>(
        [this, request]()
        {
            return this->CreateSSOAccount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateServiceDiscovery(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::CreateServiceDiscoveryOutcomeCallable MonitorClient::CreateServiceDiscoveryCallable(const CreateServiceDiscoveryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateServiceDiscoveryOutcome()>>(
        [this, request]()
        {
            return this->CreateServiceDiscovery(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAlarmNotices(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DeleteAlarmNoticesOutcomeCallable MonitorClient::DeleteAlarmNoticesCallable(const DeleteAlarmNoticesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAlarmNoticesOutcome()>>(
        [this, request]()
        {
            return this->DeleteAlarmNotices(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAlarmPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DeleteAlarmPolicyOutcomeCallable MonitorClient::DeleteAlarmPolicyCallable(const DeleteAlarmPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAlarmPolicyOutcome()>>(
        [this, request]()
        {
            return this->DeleteAlarmPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAlarmShields(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DeleteAlarmShieldsOutcomeCallable MonitorClient::DeleteAlarmShieldsCallable(const DeleteAlarmShieldsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAlarmShieldsOutcome()>>(
        [this, request]()
        {
            return this->DeleteAlarmShields(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAlertRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DeleteAlertRulesOutcomeCallable MonitorClient::DeleteAlertRulesCallable(const DeleteAlertRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAlertRulesOutcome()>>(
        [this, request]()
        {
            return this->DeleteAlertRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteExporterIntegration(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DeleteExporterIntegrationOutcomeCallable MonitorClient::DeleteExporterIntegrationCallable(const DeleteExporterIntegrationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteExporterIntegrationOutcome()>>(
        [this, request]()
        {
            return this->DeleteExporterIntegration(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteGrafanaInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DeleteGrafanaInstanceOutcomeCallable MonitorClient::DeleteGrafanaInstanceCallable(const DeleteGrafanaInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteGrafanaInstanceOutcome()>>(
        [this, request]()
        {
            return this->DeleteGrafanaInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteGrafanaIntegration(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DeleteGrafanaIntegrationOutcomeCallable MonitorClient::DeleteGrafanaIntegrationCallable(const DeleteGrafanaIntegrationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteGrafanaIntegrationOutcome()>>(
        [this, request]()
        {
            return this->DeleteGrafanaIntegration(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteGrafanaNotificationChannel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DeleteGrafanaNotificationChannelOutcomeCallable MonitorClient::DeleteGrafanaNotificationChannelCallable(const DeleteGrafanaNotificationChannelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteGrafanaNotificationChannelOutcome()>>(
        [this, request]()
        {
            return this->DeleteGrafanaNotificationChannel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeletePolicyGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DeletePolicyGroupOutcomeCallable MonitorClient::DeletePolicyGroupCallable(const DeletePolicyGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeletePolicyGroupOutcome()>>(
        [this, request]()
        {
            return this->DeletePolicyGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeletePrometheusAlertGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DeletePrometheusAlertGroupsOutcomeCallable MonitorClient::DeletePrometheusAlertGroupsCallable(const DeletePrometheusAlertGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeletePrometheusAlertGroupsOutcome()>>(
        [this, request]()
        {
            return this->DeletePrometheusAlertGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeletePrometheusAlertPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DeletePrometheusAlertPolicyOutcomeCallable MonitorClient::DeletePrometheusAlertPolicyCallable(const DeletePrometheusAlertPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeletePrometheusAlertPolicyOutcome()>>(
        [this, request]()
        {
            return this->DeletePrometheusAlertPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeletePrometheusClusterAgent(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DeletePrometheusClusterAgentOutcomeCallable MonitorClient::DeletePrometheusClusterAgentCallable(const DeletePrometheusClusterAgentRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeletePrometheusClusterAgentOutcome()>>(
        [this, request]()
        {
            return this->DeletePrometheusClusterAgent(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeletePrometheusConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DeletePrometheusConfigOutcomeCallable MonitorClient::DeletePrometheusConfigCallable(const DeletePrometheusConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeletePrometheusConfigOutcome()>>(
        [this, request]()
        {
            return this->DeletePrometheusConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeletePrometheusRecordRuleYaml(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DeletePrometheusRecordRuleYamlOutcomeCallable MonitorClient::DeletePrometheusRecordRuleYamlCallable(const DeletePrometheusRecordRuleYamlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeletePrometheusRecordRuleYamlOutcome()>>(
        [this, request]()
        {
            return this->DeletePrometheusRecordRuleYaml(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeletePrometheusScrapeJobs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DeletePrometheusScrapeJobsOutcomeCallable MonitorClient::DeletePrometheusScrapeJobsCallable(const DeletePrometheusScrapeJobsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeletePrometheusScrapeJobsOutcome()>>(
        [this, request]()
        {
            return this->DeletePrometheusScrapeJobs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeletePrometheusTemp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DeletePrometheusTempOutcomeCallable MonitorClient::DeletePrometheusTempCallable(const DeletePrometheusTempRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeletePrometheusTempOutcome()>>(
        [this, request]()
        {
            return this->DeletePrometheusTemp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeletePrometheusTempSync(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DeletePrometheusTempSyncOutcomeCallable MonitorClient::DeletePrometheusTempSyncCallable(const DeletePrometheusTempSyncRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeletePrometheusTempSyncOutcome()>>(
        [this, request]()
        {
            return this->DeletePrometheusTempSync(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRecordingRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DeleteRecordingRulesOutcomeCallable MonitorClient::DeleteRecordingRulesCallable(const DeleteRecordingRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRecordingRulesOutcome()>>(
        [this, request]()
        {
            return this->DeleteRecordingRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteSSOAccount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DeleteSSOAccountOutcomeCallable MonitorClient::DeleteSSOAccountCallable(const DeleteSSOAccountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteSSOAccountOutcome()>>(
        [this, request]()
        {
            return this->DeleteSSOAccount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteServiceDiscovery(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DeleteServiceDiscoveryOutcomeCallable MonitorClient::DeleteServiceDiscoveryCallable(const DeleteServiceDiscoveryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteServiceDiscoveryOutcome()>>(
        [this, request]()
        {
            return this->DeleteServiceDiscovery(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAccidentEventList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DescribeAccidentEventListOutcomeCallable MonitorClient::DescribeAccidentEventListCallable(const DescribeAccidentEventListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAccidentEventListOutcome()>>(
        [this, request]()
        {
            return this->DescribeAccidentEventList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAlarmEvents(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DescribeAlarmEventsOutcomeCallable MonitorClient::DescribeAlarmEventsCallable(const DescribeAlarmEventsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAlarmEventsOutcome()>>(
        [this, request]()
        {
            return this->DescribeAlarmEvents(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAlarmHistories(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DescribeAlarmHistoriesOutcomeCallable MonitorClient::DescribeAlarmHistoriesCallable(const DescribeAlarmHistoriesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAlarmHistoriesOutcome()>>(
        [this, request]()
        {
            return this->DescribeAlarmHistories(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAlarmMetrics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DescribeAlarmMetricsOutcomeCallable MonitorClient::DescribeAlarmMetricsCallable(const DescribeAlarmMetricsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAlarmMetricsOutcome()>>(
        [this, request]()
        {
            return this->DescribeAlarmMetrics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAlarmNotice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DescribeAlarmNoticeOutcomeCallable MonitorClient::DescribeAlarmNoticeCallable(const DescribeAlarmNoticeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAlarmNoticeOutcome()>>(
        [this, request]()
        {
            return this->DescribeAlarmNotice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAlarmNoticeCallbacks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DescribeAlarmNoticeCallbacksOutcomeCallable MonitorClient::DescribeAlarmNoticeCallbacksCallable(const DescribeAlarmNoticeCallbacksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAlarmNoticeCallbacksOutcome()>>(
        [this, request]()
        {
            return this->DescribeAlarmNoticeCallbacks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAlarmNotices(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DescribeAlarmNoticesOutcomeCallable MonitorClient::DescribeAlarmNoticesCallable(const DescribeAlarmNoticesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAlarmNoticesOutcome()>>(
        [this, request]()
        {
            return this->DescribeAlarmNotices(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAlarmPolicies(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DescribeAlarmPoliciesOutcomeCallable MonitorClient::DescribeAlarmPoliciesCallable(const DescribeAlarmPoliciesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAlarmPoliciesOutcome()>>(
        [this, request]()
        {
            return this->DescribeAlarmPolicies(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAlarmPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DescribeAlarmPolicyOutcomeCallable MonitorClient::DescribeAlarmPolicyCallable(const DescribeAlarmPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAlarmPolicyOutcome()>>(
        [this, request]()
        {
            return this->DescribeAlarmPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAlarmSmsQuota(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DescribeAlarmSmsQuotaOutcomeCallable MonitorClient::DescribeAlarmSmsQuotaCallable(const DescribeAlarmSmsQuotaRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAlarmSmsQuotaOutcome()>>(
        [this, request]()
        {
            return this->DescribeAlarmSmsQuota(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAlertRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DescribeAlertRulesOutcomeCallable MonitorClient::DescribeAlertRulesCallable(const DescribeAlertRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAlertRulesOutcome()>>(
        [this, request]()
        {
            return this->DescribeAlertRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAllNamespaces(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DescribeAllNamespacesOutcomeCallable MonitorClient::DescribeAllNamespacesCallable(const DescribeAllNamespacesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAllNamespacesOutcome()>>(
        [this, request]()
        {
            return this->DescribeAllNamespaces(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBaseMetrics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DescribeBaseMetricsOutcomeCallable MonitorClient::DescribeBaseMetricsCallable(const DescribeBaseMetricsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBaseMetricsOutcome()>>(
        [this, request]()
        {
            return this->DescribeBaseMetrics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBasicAlarmList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DescribeBasicAlarmListOutcomeCallable MonitorClient::DescribeBasicAlarmListCallable(const DescribeBasicAlarmListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBasicAlarmListOutcome()>>(
        [this, request]()
        {
            return this->DescribeBasicAlarmList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBindingPolicyObjectList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DescribeBindingPolicyObjectListOutcomeCallable MonitorClient::DescribeBindingPolicyObjectListCallable(const DescribeBindingPolicyObjectListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBindingPolicyObjectListOutcome()>>(
        [this, request]()
        {
            return this->DescribeBindingPolicyObjectList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusterAgentCreatingProgress(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DescribeClusterAgentCreatingProgressOutcomeCallable MonitorClient::DescribeClusterAgentCreatingProgressCallable(const DescribeClusterAgentCreatingProgressRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClusterAgentCreatingProgressOutcome()>>(
        [this, request]()
        {
            return this->DescribeClusterAgentCreatingProgress(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeConditionsTemplateList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DescribeConditionsTemplateListOutcomeCallable MonitorClient::DescribeConditionsTemplateListCallable(const DescribeConditionsTemplateListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeConditionsTemplateListOutcome()>>(
        [this, request]()
        {
            return this->DescribeConditionsTemplateList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDNSConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DescribeDNSConfigOutcomeCallable MonitorClient::DescribeDNSConfigCallable(const DescribeDNSConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDNSConfigOutcome()>>(
        [this, request]()
        {
            return this->DescribeDNSConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeExporterIntegrations(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DescribeExporterIntegrationsOutcomeCallable MonitorClient::DescribeExporterIntegrationsCallable(const DescribeExporterIntegrationsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeExporterIntegrationsOutcome()>>(
        [this, request]()
        {
            return this->DescribeExporterIntegrations(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeExternalClusterRegisterCommand(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DescribeExternalClusterRegisterCommandOutcomeCallable MonitorClient::DescribeExternalClusterRegisterCommandCallable(const DescribeExternalClusterRegisterCommandRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeExternalClusterRegisterCommandOutcome()>>(
        [this, request]()
        {
            return this->DescribeExternalClusterRegisterCommand(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeExternalClusterUninstallCommand(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DescribeExternalClusterUninstallCommandOutcomeCallable MonitorClient::DescribeExternalClusterUninstallCommandCallable(const DescribeExternalClusterUninstallCommandRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeExternalClusterUninstallCommandOutcome()>>(
        [this, request]()
        {
            return this->DescribeExternalClusterUninstallCommand(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGrafanaChannels(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DescribeGrafanaChannelsOutcomeCallable MonitorClient::DescribeGrafanaChannelsCallable(const DescribeGrafanaChannelsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGrafanaChannelsOutcome()>>(
        [this, request]()
        {
            return this->DescribeGrafanaChannels(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGrafanaConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DescribeGrafanaConfigOutcomeCallable MonitorClient::DescribeGrafanaConfigCallable(const DescribeGrafanaConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGrafanaConfigOutcome()>>(
        [this, request]()
        {
            return this->DescribeGrafanaConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGrafanaEnvironments(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DescribeGrafanaEnvironmentsOutcomeCallable MonitorClient::DescribeGrafanaEnvironmentsCallable(const DescribeGrafanaEnvironmentsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGrafanaEnvironmentsOutcome()>>(
        [this, request]()
        {
            return this->DescribeGrafanaEnvironments(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGrafanaInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DescribeGrafanaInstancesOutcomeCallable MonitorClient::DescribeGrafanaInstancesCallable(const DescribeGrafanaInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGrafanaInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeGrafanaInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGrafanaIntegrations(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DescribeGrafanaIntegrationsOutcomeCallable MonitorClient::DescribeGrafanaIntegrationsCallable(const DescribeGrafanaIntegrationsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGrafanaIntegrationsOutcome()>>(
        [this, request]()
        {
            return this->DescribeGrafanaIntegrations(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGrafanaNotificationChannels(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DescribeGrafanaNotificationChannelsOutcomeCallable MonitorClient::DescribeGrafanaNotificationChannelsCallable(const DescribeGrafanaNotificationChannelsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGrafanaNotificationChannelsOutcome()>>(
        [this, request]()
        {
            return this->DescribeGrafanaNotificationChannels(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGrafanaWhiteList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DescribeGrafanaWhiteListOutcomeCallable MonitorClient::DescribeGrafanaWhiteListCallable(const DescribeGrafanaWhiteListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGrafanaWhiteListOutcome()>>(
        [this, request]()
        {
            return this->DescribeGrafanaWhiteList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstalledPlugins(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DescribeInstalledPluginsOutcomeCallable MonitorClient::DescribeInstalledPluginsCallable(const DescribeInstalledPluginsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstalledPluginsOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstalledPlugins(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMonitorResourceInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DescribeMonitorResourceInfoOutcomeCallable MonitorClient::DescribeMonitorResourceInfoCallable(const DescribeMonitorResourceInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMonitorResourceInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeMonitorResourceInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMonitorTypes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DescribeMonitorTypesOutcomeCallable MonitorClient::DescribeMonitorTypesCallable(const DescribeMonitorTypesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMonitorTypesOutcome()>>(
        [this, request]()
        {
            return this->DescribeMonitorTypes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePhoneAlarmFlowTotalCount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DescribePhoneAlarmFlowTotalCountOutcomeCallable MonitorClient::DescribePhoneAlarmFlowTotalCountCallable(const DescribePhoneAlarmFlowTotalCountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePhoneAlarmFlowTotalCountOutcome()>>(
        [this, request]()
        {
            return this->DescribePhoneAlarmFlowTotalCount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePluginOverviews(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DescribePluginOverviewsOutcomeCallable MonitorClient::DescribePluginOverviewsCallable(const DescribePluginOverviewsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePluginOverviewsOutcome()>>(
        [this, request]()
        {
            return this->DescribePluginOverviews(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePolicyConditionList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DescribePolicyConditionListOutcomeCallable MonitorClient::DescribePolicyConditionListCallable(const DescribePolicyConditionListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePolicyConditionListOutcome()>>(
        [this, request]()
        {
            return this->DescribePolicyConditionList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePolicyGroupInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DescribePolicyGroupInfoOutcomeCallable MonitorClient::DescribePolicyGroupInfoCallable(const DescribePolicyGroupInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePolicyGroupInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribePolicyGroupInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePolicyGroupList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DescribePolicyGroupListOutcomeCallable MonitorClient::DescribePolicyGroupListCallable(const DescribePolicyGroupListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePolicyGroupListOutcome()>>(
        [this, request]()
        {
            return this->DescribePolicyGroupList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePolicyObjectCount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DescribePolicyObjectCountOutcomeCallable MonitorClient::DescribePolicyObjectCountCallable(const DescribePolicyObjectCountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePolicyObjectCountOutcome()>>(
        [this, request]()
        {
            return this->DescribePolicyObjectCount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProductEventList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DescribeProductEventListOutcomeCallable MonitorClient::DescribeProductEventListCallable(const DescribeProductEventListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProductEventListOutcome()>>(
        [this, request]()
        {
            return this->DescribeProductEventList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProductList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DescribeProductListOutcomeCallable MonitorClient::DescribeProductListCallable(const DescribeProductListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProductListOutcome()>>(
        [this, request]()
        {
            return this->DescribeProductList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePrometheusAgentInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DescribePrometheusAgentInstancesOutcomeCallable MonitorClient::DescribePrometheusAgentInstancesCallable(const DescribePrometheusAgentInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePrometheusAgentInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribePrometheusAgentInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePrometheusAgents(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DescribePrometheusAgentsOutcomeCallable MonitorClient::DescribePrometheusAgentsCallable(const DescribePrometheusAgentsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePrometheusAgentsOutcome()>>(
        [this, request]()
        {
            return this->DescribePrometheusAgents(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePrometheusAlertGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DescribePrometheusAlertGroupsOutcomeCallable MonitorClient::DescribePrometheusAlertGroupsCallable(const DescribePrometheusAlertGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePrometheusAlertGroupsOutcome()>>(
        [this, request]()
        {
            return this->DescribePrometheusAlertGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePrometheusAlertPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DescribePrometheusAlertPolicyOutcomeCallable MonitorClient::DescribePrometheusAlertPolicyCallable(const DescribePrometheusAlertPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePrometheusAlertPolicyOutcome()>>(
        [this, request]()
        {
            return this->DescribePrometheusAlertPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePrometheusClusterAgents(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DescribePrometheusClusterAgentsOutcomeCallable MonitorClient::DescribePrometheusClusterAgentsCallable(const DescribePrometheusClusterAgentsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePrometheusClusterAgentsOutcome()>>(
        [this, request]()
        {
            return this->DescribePrometheusClusterAgents(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePrometheusConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DescribePrometheusConfigOutcomeCallable MonitorClient::DescribePrometheusConfigCallable(const DescribePrometheusConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePrometheusConfigOutcome()>>(
        [this, request]()
        {
            return this->DescribePrometheusConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePrometheusGlobalConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DescribePrometheusGlobalConfigOutcomeCallable MonitorClient::DescribePrometheusGlobalConfigCallable(const DescribePrometheusGlobalConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePrometheusGlobalConfigOutcome()>>(
        [this, request]()
        {
            return this->DescribePrometheusGlobalConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePrometheusGlobalNotification(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DescribePrometheusGlobalNotificationOutcomeCallable MonitorClient::DescribePrometheusGlobalNotificationCallable(const DescribePrometheusGlobalNotificationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePrometheusGlobalNotificationOutcome()>>(
        [this, request]()
        {
            return this->DescribePrometheusGlobalNotification(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePrometheusInstanceDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DescribePrometheusInstanceDetailOutcomeCallable MonitorClient::DescribePrometheusInstanceDetailCallable(const DescribePrometheusInstanceDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePrometheusInstanceDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribePrometheusInstanceDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePrometheusInstanceInitStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DescribePrometheusInstanceInitStatusOutcomeCallable MonitorClient::DescribePrometheusInstanceInitStatusCallable(const DescribePrometheusInstanceInitStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePrometheusInstanceInitStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribePrometheusInstanceInitStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePrometheusInstanceUsage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DescribePrometheusInstanceUsageOutcomeCallable MonitorClient::DescribePrometheusInstanceUsageCallable(const DescribePrometheusInstanceUsageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePrometheusInstanceUsageOutcome()>>(
        [this, request]()
        {
            return this->DescribePrometheusInstanceUsage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePrometheusInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DescribePrometheusInstancesOutcomeCallable MonitorClient::DescribePrometheusInstancesCallable(const DescribePrometheusInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePrometheusInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribePrometheusInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePrometheusInstancesOverview(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DescribePrometheusInstancesOverviewOutcomeCallable MonitorClient::DescribePrometheusInstancesOverviewCallable(const DescribePrometheusInstancesOverviewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePrometheusInstancesOverviewOutcome()>>(
        [this, request]()
        {
            return this->DescribePrometheusInstancesOverview(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePrometheusIntegrationMetrics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DescribePrometheusIntegrationMetricsOutcomeCallable MonitorClient::DescribePrometheusIntegrationMetricsCallable(const DescribePrometheusIntegrationMetricsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePrometheusIntegrationMetricsOutcome()>>(
        [this, request]()
        {
            return this->DescribePrometheusIntegrationMetrics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePrometheusRecordRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DescribePrometheusRecordRulesOutcomeCallable MonitorClient::DescribePrometheusRecordRulesCallable(const DescribePrometheusRecordRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePrometheusRecordRulesOutcome()>>(
        [this, request]()
        {
            return this->DescribePrometheusRecordRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePrometheusRegions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DescribePrometheusRegionsOutcomeCallable MonitorClient::DescribePrometheusRegionsCallable(const DescribePrometheusRegionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePrometheusRegionsOutcome()>>(
        [this, request]()
        {
            return this->DescribePrometheusRegions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePrometheusScrapeJobs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DescribePrometheusScrapeJobsOutcomeCallable MonitorClient::DescribePrometheusScrapeJobsCallable(const DescribePrometheusScrapeJobsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePrometheusScrapeJobsOutcome()>>(
        [this, request]()
        {
            return this->DescribePrometheusScrapeJobs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePrometheusTargetsTMP(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DescribePrometheusTargetsTMPOutcomeCallable MonitorClient::DescribePrometheusTargetsTMPCallable(const DescribePrometheusTargetsTMPRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePrometheusTargetsTMPOutcome()>>(
        [this, request]()
        {
            return this->DescribePrometheusTargetsTMP(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePrometheusTemp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DescribePrometheusTempOutcomeCallable MonitorClient::DescribePrometheusTempCallable(const DescribePrometheusTempRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePrometheusTempOutcome()>>(
        [this, request]()
        {
            return this->DescribePrometheusTemp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePrometheusTempSync(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DescribePrometheusTempSyncOutcomeCallable MonitorClient::DescribePrometheusTempSyncCallable(const DescribePrometheusTempSyncRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePrometheusTempSyncOutcome()>>(
        [this, request]()
        {
            return this->DescribePrometheusTempSync(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePrometheusZones(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DescribePrometheusZonesOutcomeCallable MonitorClient::DescribePrometheusZonesCallable(const DescribePrometheusZonesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePrometheusZonesOutcome()>>(
        [this, request]()
        {
            return this->DescribePrometheusZones(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRecordingRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DescribeRecordingRulesOutcomeCallable MonitorClient::DescribeRecordingRulesCallable(const DescribeRecordingRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRecordingRulesOutcome()>>(
        [this, request]()
        {
            return this->DescribeRecordingRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRemoteURLs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DescribeRemoteURLsOutcomeCallable MonitorClient::DescribeRemoteURLsCallable(const DescribeRemoteURLsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRemoteURLsOutcome()>>(
        [this, request]()
        {
            return this->DescribeRemoteURLs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSSOAccount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DescribeSSOAccountOutcomeCallable MonitorClient::DescribeSSOAccountCallable(const DescribeSSOAccountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSSOAccountOutcome()>>(
        [this, request]()
        {
            return this->DescribeSSOAccount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeServiceDiscovery(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DescribeServiceDiscoveryOutcomeCallable MonitorClient::DescribeServiceDiscoveryCallable(const DescribeServiceDiscoveryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeServiceDiscoveryOutcome()>>(
        [this, request]()
        {
            return this->DescribeServiceDiscovery(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStatisticData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DescribeStatisticDataOutcomeCallable MonitorClient::DescribeStatisticDataCallable(const DescribeStatisticDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStatisticDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeStatisticData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DestroyPrometheusInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DestroyPrometheusInstanceOutcomeCallable MonitorClient::DestroyPrometheusInstanceCallable(const DestroyPrometheusInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DestroyPrometheusInstanceOutcome()>>(
        [this, request]()
        {
            return this->DestroyPrometheusInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->EnableGrafanaInternet(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::EnableGrafanaInternetOutcomeCallable MonitorClient::EnableGrafanaInternetCallable(const EnableGrafanaInternetRequest &request)
{
    auto task = std::make_shared<std::packaged_task<EnableGrafanaInternetOutcome()>>(
        [this, request]()
        {
            return this->EnableGrafanaInternet(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->EnableGrafanaSSO(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::EnableGrafanaSSOOutcomeCallable MonitorClient::EnableGrafanaSSOCallable(const EnableGrafanaSSORequest &request)
{
    auto task = std::make_shared<std::packaged_task<EnableGrafanaSSOOutcome()>>(
        [this, request]()
        {
            return this->EnableGrafanaSSO(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->EnableSSOCamCheck(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::EnableSSOCamCheckOutcomeCallable MonitorClient::EnableSSOCamCheckCallable(const EnableSSOCamCheckRequest &request)
{
    auto task = std::make_shared<std::packaged_task<EnableSSOCamCheckOutcome()>>(
        [this, request]()
        {
            return this->EnableSSOCamCheck(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportPrometheusReadOnlyDynamicAPI(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::ExportPrometheusReadOnlyDynamicAPIOutcomeCallable MonitorClient::ExportPrometheusReadOnlyDynamicAPICallable(const ExportPrometheusReadOnlyDynamicAPIRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportPrometheusReadOnlyDynamicAPIOutcome()>>(
        [this, request]()
        {
            return this->ExportPrometheusReadOnlyDynamicAPI(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetMonitorData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::GetMonitorDataOutcomeCallable MonitorClient::GetMonitorDataCallable(const GetMonitorDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetMonitorDataOutcome()>>(
        [this, request]()
        {
            return this->GetMonitorData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetPrometheusAgentManagementCommand(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::GetPrometheusAgentManagementCommandOutcomeCallable MonitorClient::GetPrometheusAgentManagementCommandCallable(const GetPrometheusAgentManagementCommandRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetPrometheusAgentManagementCommandOutcome()>>(
        [this, request]()
        {
            return this->GetPrometheusAgentManagementCommand(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetTopNMonitorData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::GetTopNMonitorDataOutcomeCallable MonitorClient::GetTopNMonitorDataCallable(const GetTopNMonitorDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetTopNMonitorDataOutcome()>>(
        [this, request]()
        {
            return this->GetTopNMonitorData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InstallPlugins(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::InstallPluginsOutcomeCallable MonitorClient::InstallPluginsCallable(const InstallPluginsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InstallPluginsOutcome()>>(
        [this, request]()
        {
            return this->InstallPlugins(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAlarmNotice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::ModifyAlarmNoticeOutcomeCallable MonitorClient::ModifyAlarmNoticeCallable(const ModifyAlarmNoticeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAlarmNoticeOutcome()>>(
        [this, request]()
        {
            return this->ModifyAlarmNotice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAlarmPolicyCondition(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::ModifyAlarmPolicyConditionOutcomeCallable MonitorClient::ModifyAlarmPolicyConditionCallable(const ModifyAlarmPolicyConditionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAlarmPolicyConditionOutcome()>>(
        [this, request]()
        {
            return this->ModifyAlarmPolicyCondition(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAlarmPolicyInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::ModifyAlarmPolicyInfoOutcomeCallable MonitorClient::ModifyAlarmPolicyInfoCallable(const ModifyAlarmPolicyInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAlarmPolicyInfoOutcome()>>(
        [this, request]()
        {
            return this->ModifyAlarmPolicyInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAlarmPolicyNotice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::ModifyAlarmPolicyNoticeOutcomeCallable MonitorClient::ModifyAlarmPolicyNoticeCallable(const ModifyAlarmPolicyNoticeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAlarmPolicyNoticeOutcome()>>(
        [this, request]()
        {
            return this->ModifyAlarmPolicyNotice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAlarmPolicyStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::ModifyAlarmPolicyStatusOutcomeCallable MonitorClient::ModifyAlarmPolicyStatusCallable(const ModifyAlarmPolicyStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAlarmPolicyStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyAlarmPolicyStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAlarmPolicyTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::ModifyAlarmPolicyTasksOutcomeCallable MonitorClient::ModifyAlarmPolicyTasksCallable(const ModifyAlarmPolicyTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAlarmPolicyTasksOutcome()>>(
        [this, request]()
        {
            return this->ModifyAlarmPolicyTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAlarmReceivers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::ModifyAlarmReceiversOutcomeCallable MonitorClient::ModifyAlarmReceiversCallable(const ModifyAlarmReceiversRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAlarmReceiversOutcome()>>(
        [this, request]()
        {
            return this->ModifyAlarmReceivers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyGrafanaInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::ModifyGrafanaInstanceOutcomeCallable MonitorClient::ModifyGrafanaInstanceCallable(const ModifyGrafanaInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyGrafanaInstanceOutcome()>>(
        [this, request]()
        {
            return this->ModifyGrafanaInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyPolicyGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::ModifyPolicyGroupOutcomeCallable MonitorClient::ModifyPolicyGroupCallable(const ModifyPolicyGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyPolicyGroupOutcome()>>(
        [this, request]()
        {
            return this->ModifyPolicyGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyPrometheusAgentExternalLabels(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::ModifyPrometheusAgentExternalLabelsOutcomeCallable MonitorClient::ModifyPrometheusAgentExternalLabelsCallable(const ModifyPrometheusAgentExternalLabelsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyPrometheusAgentExternalLabelsOutcome()>>(
        [this, request]()
        {
            return this->ModifyPrometheusAgentExternalLabels(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyPrometheusAlertPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::ModifyPrometheusAlertPolicyOutcomeCallable MonitorClient::ModifyPrometheusAlertPolicyCallable(const ModifyPrometheusAlertPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyPrometheusAlertPolicyOutcome()>>(
        [this, request]()
        {
            return this->ModifyPrometheusAlertPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyPrometheusConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::ModifyPrometheusConfigOutcomeCallable MonitorClient::ModifyPrometheusConfigCallable(const ModifyPrometheusConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyPrometheusConfigOutcome()>>(
        [this, request]()
        {
            return this->ModifyPrometheusConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyPrometheusGlobalNotification(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::ModifyPrometheusGlobalNotificationOutcomeCallable MonitorClient::ModifyPrometheusGlobalNotificationCallable(const ModifyPrometheusGlobalNotificationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyPrometheusGlobalNotificationOutcome()>>(
        [this, request]()
        {
            return this->ModifyPrometheusGlobalNotification(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyPrometheusInstanceAttributes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::ModifyPrometheusInstanceAttributesOutcomeCallable MonitorClient::ModifyPrometheusInstanceAttributesCallable(const ModifyPrometheusInstanceAttributesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyPrometheusInstanceAttributesOutcome()>>(
        [this, request]()
        {
            return this->ModifyPrometheusInstanceAttributes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyPrometheusRecordRuleYaml(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::ModifyPrometheusRecordRuleYamlOutcomeCallable MonitorClient::ModifyPrometheusRecordRuleYamlCallable(const ModifyPrometheusRecordRuleYamlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyPrometheusRecordRuleYamlOutcome()>>(
        [this, request]()
        {
            return this->ModifyPrometheusRecordRuleYaml(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyPrometheusTemp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::ModifyPrometheusTempOutcomeCallable MonitorClient::ModifyPrometheusTempCallable(const ModifyPrometheusTempRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyPrometheusTempOutcome()>>(
        [this, request]()
        {
            return this->ModifyPrometheusTemp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRemoteURLs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::ModifyRemoteURLsOutcomeCallable MonitorClient::ModifyRemoteURLsCallable(const ModifyRemoteURLsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRemoteURLsOutcome()>>(
        [this, request]()
        {
            return this->ModifyRemoteURLs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResumeGrafanaInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::ResumeGrafanaInstanceOutcomeCallable MonitorClient::ResumeGrafanaInstanceCallable(const ResumeGrafanaInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResumeGrafanaInstanceOutcome()>>(
        [this, request]()
        {
            return this->ResumeGrafanaInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RunPrometheusInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::RunPrometheusInstanceOutcomeCallable MonitorClient::RunPrometheusInstanceCallable(const RunPrometheusInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RunPrometheusInstanceOutcome()>>(
        [this, request]()
        {
            return this->RunPrometheusInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SetDefaultAlarmPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::SetDefaultAlarmPolicyOutcomeCallable MonitorClient::SetDefaultAlarmPolicyCallable(const SetDefaultAlarmPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SetDefaultAlarmPolicyOutcome()>>(
        [this, request]()
        {
            return this->SetDefaultAlarmPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SyncPrometheusTemp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::SyncPrometheusTempOutcomeCallable MonitorClient::SyncPrometheusTempCallable(const SyncPrometheusTempRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SyncPrometheusTempOutcome()>>(
        [this, request]()
        {
            return this->SyncPrometheusTemp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TerminatePrometheusInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::TerminatePrometheusInstancesOutcomeCallable MonitorClient::TerminatePrometheusInstancesCallable(const TerminatePrometheusInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TerminatePrometheusInstancesOutcome()>>(
        [this, request]()
        {
            return this->TerminatePrometheusInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UnBindingAllPolicyObject(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::UnBindingAllPolicyObjectOutcomeCallable MonitorClient::UnBindingAllPolicyObjectCallable(const UnBindingAllPolicyObjectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UnBindingAllPolicyObjectOutcome()>>(
        [this, request]()
        {
            return this->UnBindingAllPolicyObject(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UnBindingPolicyObject(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::UnBindingPolicyObjectOutcomeCallable MonitorClient::UnBindingPolicyObjectCallable(const UnBindingPolicyObjectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UnBindingPolicyObjectOutcome()>>(
        [this, request]()
        {
            return this->UnBindingPolicyObject(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UnbindPrometheusManagedGrafana(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::UnbindPrometheusManagedGrafanaOutcomeCallable MonitorClient::UnbindPrometheusManagedGrafanaCallable(const UnbindPrometheusManagedGrafanaRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UnbindPrometheusManagedGrafanaOutcome()>>(
        [this, request]()
        {
            return this->UnbindPrometheusManagedGrafana(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UninstallGrafanaDashboard(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::UninstallGrafanaDashboardOutcomeCallable MonitorClient::UninstallGrafanaDashboardCallable(const UninstallGrafanaDashboardRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UninstallGrafanaDashboardOutcome()>>(
        [this, request]()
        {
            return this->UninstallGrafanaDashboard(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UninstallGrafanaPlugins(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::UninstallGrafanaPluginsOutcomeCallable MonitorClient::UninstallGrafanaPluginsCallable(const UninstallGrafanaPluginsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UninstallGrafanaPluginsOutcome()>>(
        [this, request]()
        {
            return this->UninstallGrafanaPlugins(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateAlertRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::UpdateAlertRuleOutcomeCallable MonitorClient::UpdateAlertRuleCallable(const UpdateAlertRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateAlertRuleOutcome()>>(
        [this, request]()
        {
            return this->UpdateAlertRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateAlertRuleState(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::UpdateAlertRuleStateOutcomeCallable MonitorClient::UpdateAlertRuleStateCallable(const UpdateAlertRuleStateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateAlertRuleStateOutcome()>>(
        [this, request]()
        {
            return this->UpdateAlertRuleState(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateDNSConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::UpdateDNSConfigOutcomeCallable MonitorClient::UpdateDNSConfigCallable(const UpdateDNSConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateDNSConfigOutcome()>>(
        [this, request]()
        {
            return this->UpdateDNSConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateExporterIntegration(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::UpdateExporterIntegrationOutcomeCallable MonitorClient::UpdateExporterIntegrationCallable(const UpdateExporterIntegrationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateExporterIntegrationOutcome()>>(
        [this, request]()
        {
            return this->UpdateExporterIntegration(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateGrafanaConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::UpdateGrafanaConfigOutcomeCallable MonitorClient::UpdateGrafanaConfigCallable(const UpdateGrafanaConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateGrafanaConfigOutcome()>>(
        [this, request]()
        {
            return this->UpdateGrafanaConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateGrafanaEnvironments(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::UpdateGrafanaEnvironmentsOutcomeCallable MonitorClient::UpdateGrafanaEnvironmentsCallable(const UpdateGrafanaEnvironmentsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateGrafanaEnvironmentsOutcome()>>(
        [this, request]()
        {
            return this->UpdateGrafanaEnvironments(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateGrafanaIntegration(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::UpdateGrafanaIntegrationOutcomeCallable MonitorClient::UpdateGrafanaIntegrationCallable(const UpdateGrafanaIntegrationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateGrafanaIntegrationOutcome()>>(
        [this, request]()
        {
            return this->UpdateGrafanaIntegration(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateGrafanaNotificationChannel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::UpdateGrafanaNotificationChannelOutcomeCallable MonitorClient::UpdateGrafanaNotificationChannelCallable(const UpdateGrafanaNotificationChannelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateGrafanaNotificationChannelOutcome()>>(
        [this, request]()
        {
            return this->UpdateGrafanaNotificationChannel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateGrafanaWhiteList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::UpdateGrafanaWhiteListOutcomeCallable MonitorClient::UpdateGrafanaWhiteListCallable(const UpdateGrafanaWhiteListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateGrafanaWhiteListOutcome()>>(
        [this, request]()
        {
            return this->UpdateGrafanaWhiteList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdatePrometheusAgentStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::UpdatePrometheusAgentStatusOutcomeCallable MonitorClient::UpdatePrometheusAgentStatusCallable(const UpdatePrometheusAgentStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdatePrometheusAgentStatusOutcome()>>(
        [this, request]()
        {
            return this->UpdatePrometheusAgentStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdatePrometheusAlertGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::UpdatePrometheusAlertGroupOutcomeCallable MonitorClient::UpdatePrometheusAlertGroupCallable(const UpdatePrometheusAlertGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdatePrometheusAlertGroupOutcome()>>(
        [this, request]()
        {
            return this->UpdatePrometheusAlertGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdatePrometheusAlertGroupState(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::UpdatePrometheusAlertGroupStateOutcomeCallable MonitorClient::UpdatePrometheusAlertGroupStateCallable(const UpdatePrometheusAlertGroupStateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdatePrometheusAlertGroupStateOutcome()>>(
        [this, request]()
        {
            return this->UpdatePrometheusAlertGroupState(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdatePrometheusScrapeJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::UpdatePrometheusScrapeJobOutcomeCallable MonitorClient::UpdatePrometheusScrapeJobCallable(const UpdatePrometheusScrapeJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdatePrometheusScrapeJobOutcome()>>(
        [this, request]()
        {
            return this->UpdatePrometheusScrapeJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateRecordingRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::UpdateRecordingRuleOutcomeCallable MonitorClient::UpdateRecordingRuleCallable(const UpdateRecordingRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateRecordingRuleOutcome()>>(
        [this, request]()
        {
            return this->UpdateRecordingRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateSSOAccount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::UpdateSSOAccountOutcomeCallable MonitorClient::UpdateSSOAccountCallable(const UpdateSSOAccountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateSSOAccountOutcome()>>(
        [this, request]()
        {
            return this->UpdateSSOAccount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateServiceDiscovery(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::UpdateServiceDiscoveryOutcomeCallable MonitorClient::UpdateServiceDiscoveryCallable(const UpdateServiceDiscoveryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateServiceDiscoveryOutcome()>>(
        [this, request]()
        {
            return this->UpdateServiceDiscovery(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpgradeGrafanaDashboard(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::UpgradeGrafanaDashboardOutcomeCallable MonitorClient::UpgradeGrafanaDashboardCallable(const UpgradeGrafanaDashboardRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpgradeGrafanaDashboardOutcome()>>(
        [this, request]()
        {
            return this->UpgradeGrafanaDashboard(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpgradeGrafanaInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::UpgradeGrafanaInstanceOutcomeCallable MonitorClient::UpgradeGrafanaInstanceCallable(const UpgradeGrafanaInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpgradeGrafanaInstanceOutcome()>>(
        [this, request]()
        {
            return this->UpgradeGrafanaInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


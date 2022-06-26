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

MonitorClient::PutMonitorDataOutcome MonitorClient::PutMonitorData(const PutMonitorDataRequest &request)
{
    auto outcome = MakeRequest(request, "PutMonitorData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PutMonitorDataResponse rsp = PutMonitorDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PutMonitorDataOutcome(rsp);
        else
            return PutMonitorDataOutcome(o.GetError());
    }
    else
    {
        return PutMonitorDataOutcome(outcome.GetError());
    }
}

void MonitorClient::PutMonitorDataAsync(const PutMonitorDataRequest& request, const PutMonitorDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->PutMonitorData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::PutMonitorDataOutcomeCallable MonitorClient::PutMonitorDataCallable(const PutMonitorDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<PutMonitorDataOutcome()>>(
        [this, request]()
        {
            return this->PutMonitorData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MonitorClient::SendCustomAlarmMsgOutcome MonitorClient::SendCustomAlarmMsg(const SendCustomAlarmMsgRequest &request)
{
    auto outcome = MakeRequest(request, "SendCustomAlarmMsg");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SendCustomAlarmMsgResponse rsp = SendCustomAlarmMsgResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SendCustomAlarmMsgOutcome(rsp);
        else
            return SendCustomAlarmMsgOutcome(o.GetError());
    }
    else
    {
        return SendCustomAlarmMsgOutcome(outcome.GetError());
    }
}

void MonitorClient::SendCustomAlarmMsgAsync(const SendCustomAlarmMsgRequest& request, const SendCustomAlarmMsgAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SendCustomAlarmMsg(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::SendCustomAlarmMsgOutcomeCallable MonitorClient::SendCustomAlarmMsgCallable(const SendCustomAlarmMsgRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SendCustomAlarmMsgOutcome()>>(
        [this, request]()
        {
            return this->SendCustomAlarmMsg(request);
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


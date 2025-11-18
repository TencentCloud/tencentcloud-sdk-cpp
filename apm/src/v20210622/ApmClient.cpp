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

#include <tencentcloud/apm/v20210622/ApmClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Apm::V20210622;
using namespace TencentCloud::Apm::V20210622::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-06-22";
    const string ENDPOINT = "apm.tencentcloudapi.com";
}

ApmClient::ApmClient(const Credential &credential, const string &region) :
    ApmClient(credential, region, ClientProfile())
{
}

ApmClient::ApmClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


ApmClient::CreateApmInstanceOutcome ApmClient::CreateApmInstance(const CreateApmInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateApmInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateApmInstanceResponse rsp = CreateApmInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateApmInstanceOutcome(rsp);
        else
            return CreateApmInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateApmInstanceOutcome(outcome.GetError());
    }
}

void ApmClient::CreateApmInstanceAsync(const CreateApmInstanceRequest& request, const CreateApmInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateApmInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApmClient::CreateApmInstanceOutcomeCallable ApmClient::CreateApmInstanceCallable(const CreateApmInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateApmInstanceOutcome()>>(
        [this, request]()
        {
            return this->CreateApmInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApmClient::CreateApmPrometheusRuleOutcome ApmClient::CreateApmPrometheusRule(const CreateApmPrometheusRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateApmPrometheusRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateApmPrometheusRuleResponse rsp = CreateApmPrometheusRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateApmPrometheusRuleOutcome(rsp);
        else
            return CreateApmPrometheusRuleOutcome(o.GetError());
    }
    else
    {
        return CreateApmPrometheusRuleOutcome(outcome.GetError());
    }
}

void ApmClient::CreateApmPrometheusRuleAsync(const CreateApmPrometheusRuleRequest& request, const CreateApmPrometheusRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateApmPrometheusRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApmClient::CreateApmPrometheusRuleOutcomeCallable ApmClient::CreateApmPrometheusRuleCallable(const CreateApmPrometheusRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateApmPrometheusRuleOutcome()>>(
        [this, request]()
        {
            return this->CreateApmPrometheusRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApmClient::CreateApmSampleConfigOutcome ApmClient::CreateApmSampleConfig(const CreateApmSampleConfigRequest &request)
{
    auto outcome = MakeRequest(request, "CreateApmSampleConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateApmSampleConfigResponse rsp = CreateApmSampleConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateApmSampleConfigOutcome(rsp);
        else
            return CreateApmSampleConfigOutcome(o.GetError());
    }
    else
    {
        return CreateApmSampleConfigOutcome(outcome.GetError());
    }
}

void ApmClient::CreateApmSampleConfigAsync(const CreateApmSampleConfigRequest& request, const CreateApmSampleConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateApmSampleConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApmClient::CreateApmSampleConfigOutcomeCallable ApmClient::CreateApmSampleConfigCallable(const CreateApmSampleConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateApmSampleConfigOutcome()>>(
        [this, request]()
        {
            return this->CreateApmSampleConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApmClient::CreateProfileTaskOutcome ApmClient::CreateProfileTask(const CreateProfileTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateProfileTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateProfileTaskResponse rsp = CreateProfileTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateProfileTaskOutcome(rsp);
        else
            return CreateProfileTaskOutcome(o.GetError());
    }
    else
    {
        return CreateProfileTaskOutcome(outcome.GetError());
    }
}

void ApmClient::CreateProfileTaskAsync(const CreateProfileTaskRequest& request, const CreateProfileTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateProfileTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApmClient::CreateProfileTaskOutcomeCallable ApmClient::CreateProfileTaskCallable(const CreateProfileTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateProfileTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateProfileTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApmClient::DeleteApmSampleConfigOutcome ApmClient::DeleteApmSampleConfig(const DeleteApmSampleConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteApmSampleConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteApmSampleConfigResponse rsp = DeleteApmSampleConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteApmSampleConfigOutcome(rsp);
        else
            return DeleteApmSampleConfigOutcome(o.GetError());
    }
    else
    {
        return DeleteApmSampleConfigOutcome(outcome.GetError());
    }
}

void ApmClient::DeleteApmSampleConfigAsync(const DeleteApmSampleConfigRequest& request, const DeleteApmSampleConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteApmSampleConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApmClient::DeleteApmSampleConfigOutcomeCallable ApmClient::DeleteApmSampleConfigCallable(const DeleteApmSampleConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteApmSampleConfigOutcome()>>(
        [this, request]()
        {
            return this->DeleteApmSampleConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApmClient::DescribeApmAgentOutcome ApmClient::DescribeApmAgent(const DescribeApmAgentRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApmAgent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApmAgentResponse rsp = DescribeApmAgentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApmAgentOutcome(rsp);
        else
            return DescribeApmAgentOutcome(o.GetError());
    }
    else
    {
        return DescribeApmAgentOutcome(outcome.GetError());
    }
}

void ApmClient::DescribeApmAgentAsync(const DescribeApmAgentRequest& request, const DescribeApmAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeApmAgent(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApmClient::DescribeApmAgentOutcomeCallable ApmClient::DescribeApmAgentCallable(const DescribeApmAgentRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeApmAgentOutcome()>>(
        [this, request]()
        {
            return this->DescribeApmAgent(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApmClient::DescribeApmApplicationConfigOutcome ApmClient::DescribeApmApplicationConfig(const DescribeApmApplicationConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApmApplicationConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApmApplicationConfigResponse rsp = DescribeApmApplicationConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApmApplicationConfigOutcome(rsp);
        else
            return DescribeApmApplicationConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeApmApplicationConfigOutcome(outcome.GetError());
    }
}

void ApmClient::DescribeApmApplicationConfigAsync(const DescribeApmApplicationConfigRequest& request, const DescribeApmApplicationConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeApmApplicationConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApmClient::DescribeApmApplicationConfigOutcomeCallable ApmClient::DescribeApmApplicationConfigCallable(const DescribeApmApplicationConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeApmApplicationConfigOutcome()>>(
        [this, request]()
        {
            return this->DescribeApmApplicationConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApmClient::DescribeApmAssociationOutcome ApmClient::DescribeApmAssociation(const DescribeApmAssociationRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApmAssociation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApmAssociationResponse rsp = DescribeApmAssociationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApmAssociationOutcome(rsp);
        else
            return DescribeApmAssociationOutcome(o.GetError());
    }
    else
    {
        return DescribeApmAssociationOutcome(outcome.GetError());
    }
}

void ApmClient::DescribeApmAssociationAsync(const DescribeApmAssociationRequest& request, const DescribeApmAssociationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeApmAssociation(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApmClient::DescribeApmAssociationOutcomeCallable ApmClient::DescribeApmAssociationCallable(const DescribeApmAssociationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeApmAssociationOutcome()>>(
        [this, request]()
        {
            return this->DescribeApmAssociation(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApmClient::DescribeApmInstancesOutcome ApmClient::DescribeApmInstances(const DescribeApmInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApmInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApmInstancesResponse rsp = DescribeApmInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApmInstancesOutcome(rsp);
        else
            return DescribeApmInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeApmInstancesOutcome(outcome.GetError());
    }
}

void ApmClient::DescribeApmInstancesAsync(const DescribeApmInstancesRequest& request, const DescribeApmInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeApmInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApmClient::DescribeApmInstancesOutcomeCallable ApmClient::DescribeApmInstancesCallable(const DescribeApmInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeApmInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeApmInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApmClient::DescribeApmPrometheusRuleOutcome ApmClient::DescribeApmPrometheusRule(const DescribeApmPrometheusRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApmPrometheusRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApmPrometheusRuleResponse rsp = DescribeApmPrometheusRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApmPrometheusRuleOutcome(rsp);
        else
            return DescribeApmPrometheusRuleOutcome(o.GetError());
    }
    else
    {
        return DescribeApmPrometheusRuleOutcome(outcome.GetError());
    }
}

void ApmClient::DescribeApmPrometheusRuleAsync(const DescribeApmPrometheusRuleRequest& request, const DescribeApmPrometheusRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeApmPrometheusRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApmClient::DescribeApmPrometheusRuleOutcomeCallable ApmClient::DescribeApmPrometheusRuleCallable(const DescribeApmPrometheusRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeApmPrometheusRuleOutcome()>>(
        [this, request]()
        {
            return this->DescribeApmPrometheusRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApmClient::DescribeApmSampleConfigOutcome ApmClient::DescribeApmSampleConfig(const DescribeApmSampleConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApmSampleConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApmSampleConfigResponse rsp = DescribeApmSampleConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApmSampleConfigOutcome(rsp);
        else
            return DescribeApmSampleConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeApmSampleConfigOutcome(outcome.GetError());
    }
}

void ApmClient::DescribeApmSampleConfigAsync(const DescribeApmSampleConfigRequest& request, const DescribeApmSampleConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeApmSampleConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApmClient::DescribeApmSampleConfigOutcomeCallable ApmClient::DescribeApmSampleConfigCallable(const DescribeApmSampleConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeApmSampleConfigOutcome()>>(
        [this, request]()
        {
            return this->DescribeApmSampleConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApmClient::DescribeApmServiceMetricOutcome ApmClient::DescribeApmServiceMetric(const DescribeApmServiceMetricRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApmServiceMetric");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApmServiceMetricResponse rsp = DescribeApmServiceMetricResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApmServiceMetricOutcome(rsp);
        else
            return DescribeApmServiceMetricOutcome(o.GetError());
    }
    else
    {
        return DescribeApmServiceMetricOutcome(outcome.GetError());
    }
}

void ApmClient::DescribeApmServiceMetricAsync(const DescribeApmServiceMetricRequest& request, const DescribeApmServiceMetricAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeApmServiceMetric(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApmClient::DescribeApmServiceMetricOutcomeCallable ApmClient::DescribeApmServiceMetricCallable(const DescribeApmServiceMetricRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeApmServiceMetricOutcome()>>(
        [this, request]()
        {
            return this->DescribeApmServiceMetric(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApmClient::DescribeGeneralApmApplicationConfigOutcome ApmClient::DescribeGeneralApmApplicationConfig(const DescribeGeneralApmApplicationConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGeneralApmApplicationConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGeneralApmApplicationConfigResponse rsp = DescribeGeneralApmApplicationConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGeneralApmApplicationConfigOutcome(rsp);
        else
            return DescribeGeneralApmApplicationConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeGeneralApmApplicationConfigOutcome(outcome.GetError());
    }
}

void ApmClient::DescribeGeneralApmApplicationConfigAsync(const DescribeGeneralApmApplicationConfigRequest& request, const DescribeGeneralApmApplicationConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGeneralApmApplicationConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApmClient::DescribeGeneralApmApplicationConfigOutcomeCallable ApmClient::DescribeGeneralApmApplicationConfigCallable(const DescribeGeneralApmApplicationConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGeneralApmApplicationConfigOutcome()>>(
        [this, request]()
        {
            return this->DescribeGeneralApmApplicationConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApmClient::DescribeGeneralMetricDataOutcome ApmClient::DescribeGeneralMetricData(const DescribeGeneralMetricDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGeneralMetricData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGeneralMetricDataResponse rsp = DescribeGeneralMetricDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGeneralMetricDataOutcome(rsp);
        else
            return DescribeGeneralMetricDataOutcome(o.GetError());
    }
    else
    {
        return DescribeGeneralMetricDataOutcome(outcome.GetError());
    }
}

void ApmClient::DescribeGeneralMetricDataAsync(const DescribeGeneralMetricDataRequest& request, const DescribeGeneralMetricDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGeneralMetricData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApmClient::DescribeGeneralMetricDataOutcomeCallable ApmClient::DescribeGeneralMetricDataCallable(const DescribeGeneralMetricDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGeneralMetricDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeGeneralMetricData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApmClient::DescribeGeneralOTSpanListOutcome ApmClient::DescribeGeneralOTSpanList(const DescribeGeneralOTSpanListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGeneralOTSpanList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGeneralOTSpanListResponse rsp = DescribeGeneralOTSpanListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGeneralOTSpanListOutcome(rsp);
        else
            return DescribeGeneralOTSpanListOutcome(o.GetError());
    }
    else
    {
        return DescribeGeneralOTSpanListOutcome(outcome.GetError());
    }
}

void ApmClient::DescribeGeneralOTSpanListAsync(const DescribeGeneralOTSpanListRequest& request, const DescribeGeneralOTSpanListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGeneralOTSpanList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApmClient::DescribeGeneralOTSpanListOutcomeCallable ApmClient::DescribeGeneralOTSpanListCallable(const DescribeGeneralOTSpanListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGeneralOTSpanListOutcome()>>(
        [this, request]()
        {
            return this->DescribeGeneralOTSpanList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApmClient::DescribeGeneralSpanListOutcome ApmClient::DescribeGeneralSpanList(const DescribeGeneralSpanListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGeneralSpanList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGeneralSpanListResponse rsp = DescribeGeneralSpanListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGeneralSpanListOutcome(rsp);
        else
            return DescribeGeneralSpanListOutcome(o.GetError());
    }
    else
    {
        return DescribeGeneralSpanListOutcome(outcome.GetError());
    }
}

void ApmClient::DescribeGeneralSpanListAsync(const DescribeGeneralSpanListRequest& request, const DescribeGeneralSpanListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGeneralSpanList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApmClient::DescribeGeneralSpanListOutcomeCallable ApmClient::DescribeGeneralSpanListCallable(const DescribeGeneralSpanListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGeneralSpanListOutcome()>>(
        [this, request]()
        {
            return this->DescribeGeneralSpanList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApmClient::DescribeMetricRecordsOutcome ApmClient::DescribeMetricRecords(const DescribeMetricRecordsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMetricRecords");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMetricRecordsResponse rsp = DescribeMetricRecordsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMetricRecordsOutcome(rsp);
        else
            return DescribeMetricRecordsOutcome(o.GetError());
    }
    else
    {
        return DescribeMetricRecordsOutcome(outcome.GetError());
    }
}

void ApmClient::DescribeMetricRecordsAsync(const DescribeMetricRecordsRequest& request, const DescribeMetricRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMetricRecords(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApmClient::DescribeMetricRecordsOutcomeCallable ApmClient::DescribeMetricRecordsCallable(const DescribeMetricRecordsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMetricRecordsOutcome()>>(
        [this, request]()
        {
            return this->DescribeMetricRecords(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApmClient::DescribeServiceOverviewOutcome ApmClient::DescribeServiceOverview(const DescribeServiceOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeServiceOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeServiceOverviewResponse rsp = DescribeServiceOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeServiceOverviewOutcome(rsp);
        else
            return DescribeServiceOverviewOutcome(o.GetError());
    }
    else
    {
        return DescribeServiceOverviewOutcome(outcome.GetError());
    }
}

void ApmClient::DescribeServiceOverviewAsync(const DescribeServiceOverviewRequest& request, const DescribeServiceOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeServiceOverview(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApmClient::DescribeServiceOverviewOutcomeCallable ApmClient::DescribeServiceOverviewCallable(const DescribeServiceOverviewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeServiceOverviewOutcome()>>(
        [this, request]()
        {
            return this->DescribeServiceOverview(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApmClient::DescribeTagValuesOutcome ApmClient::DescribeTagValues(const DescribeTagValuesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTagValues");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTagValuesResponse rsp = DescribeTagValuesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTagValuesOutcome(rsp);
        else
            return DescribeTagValuesOutcome(o.GetError());
    }
    else
    {
        return DescribeTagValuesOutcome(outcome.GetError());
    }
}

void ApmClient::DescribeTagValuesAsync(const DescribeTagValuesRequest& request, const DescribeTagValuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTagValues(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApmClient::DescribeTagValuesOutcomeCallable ApmClient::DescribeTagValuesCallable(const DescribeTagValuesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTagValuesOutcome()>>(
        [this, request]()
        {
            return this->DescribeTagValues(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApmClient::ModifyApmApplicationConfigOutcome ApmClient::ModifyApmApplicationConfig(const ModifyApmApplicationConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyApmApplicationConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyApmApplicationConfigResponse rsp = ModifyApmApplicationConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyApmApplicationConfigOutcome(rsp);
        else
            return ModifyApmApplicationConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyApmApplicationConfigOutcome(outcome.GetError());
    }
}

void ApmClient::ModifyApmApplicationConfigAsync(const ModifyApmApplicationConfigRequest& request, const ModifyApmApplicationConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyApmApplicationConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApmClient::ModifyApmApplicationConfigOutcomeCallable ApmClient::ModifyApmApplicationConfigCallable(const ModifyApmApplicationConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyApmApplicationConfigOutcome()>>(
        [this, request]()
        {
            return this->ModifyApmApplicationConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApmClient::ModifyApmAssociationOutcome ApmClient::ModifyApmAssociation(const ModifyApmAssociationRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyApmAssociation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyApmAssociationResponse rsp = ModifyApmAssociationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyApmAssociationOutcome(rsp);
        else
            return ModifyApmAssociationOutcome(o.GetError());
    }
    else
    {
        return ModifyApmAssociationOutcome(outcome.GetError());
    }
}

void ApmClient::ModifyApmAssociationAsync(const ModifyApmAssociationRequest& request, const ModifyApmAssociationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyApmAssociation(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApmClient::ModifyApmAssociationOutcomeCallable ApmClient::ModifyApmAssociationCallable(const ModifyApmAssociationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyApmAssociationOutcome()>>(
        [this, request]()
        {
            return this->ModifyApmAssociation(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApmClient::ModifyApmInstanceOutcome ApmClient::ModifyApmInstance(const ModifyApmInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyApmInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyApmInstanceResponse rsp = ModifyApmInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyApmInstanceOutcome(rsp);
        else
            return ModifyApmInstanceOutcome(o.GetError());
    }
    else
    {
        return ModifyApmInstanceOutcome(outcome.GetError());
    }
}

void ApmClient::ModifyApmInstanceAsync(const ModifyApmInstanceRequest& request, const ModifyApmInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyApmInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApmClient::ModifyApmInstanceOutcomeCallable ApmClient::ModifyApmInstanceCallable(const ModifyApmInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyApmInstanceOutcome()>>(
        [this, request]()
        {
            return this->ModifyApmInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApmClient::ModifyApmPrometheusRuleOutcome ApmClient::ModifyApmPrometheusRule(const ModifyApmPrometheusRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyApmPrometheusRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyApmPrometheusRuleResponse rsp = ModifyApmPrometheusRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyApmPrometheusRuleOutcome(rsp);
        else
            return ModifyApmPrometheusRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyApmPrometheusRuleOutcome(outcome.GetError());
    }
}

void ApmClient::ModifyApmPrometheusRuleAsync(const ModifyApmPrometheusRuleRequest& request, const ModifyApmPrometheusRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyApmPrometheusRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApmClient::ModifyApmPrometheusRuleOutcomeCallable ApmClient::ModifyApmPrometheusRuleCallable(const ModifyApmPrometheusRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyApmPrometheusRuleOutcome()>>(
        [this, request]()
        {
            return this->ModifyApmPrometheusRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApmClient::ModifyApmSampleConfigOutcome ApmClient::ModifyApmSampleConfig(const ModifyApmSampleConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyApmSampleConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyApmSampleConfigResponse rsp = ModifyApmSampleConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyApmSampleConfigOutcome(rsp);
        else
            return ModifyApmSampleConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyApmSampleConfigOutcome(outcome.GetError());
    }
}

void ApmClient::ModifyApmSampleConfigAsync(const ModifyApmSampleConfigRequest& request, const ModifyApmSampleConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyApmSampleConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApmClient::ModifyApmSampleConfigOutcomeCallable ApmClient::ModifyApmSampleConfigCallable(const ModifyApmSampleConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyApmSampleConfigOutcome()>>(
        [this, request]()
        {
            return this->ModifyApmSampleConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApmClient::ModifyGeneralApmApplicationConfigOutcome ApmClient::ModifyGeneralApmApplicationConfig(const ModifyGeneralApmApplicationConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyGeneralApmApplicationConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyGeneralApmApplicationConfigResponse rsp = ModifyGeneralApmApplicationConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyGeneralApmApplicationConfigOutcome(rsp);
        else
            return ModifyGeneralApmApplicationConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyGeneralApmApplicationConfigOutcome(outcome.GetError());
    }
}

void ApmClient::ModifyGeneralApmApplicationConfigAsync(const ModifyGeneralApmApplicationConfigRequest& request, const ModifyGeneralApmApplicationConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyGeneralApmApplicationConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApmClient::ModifyGeneralApmApplicationConfigOutcomeCallable ApmClient::ModifyGeneralApmApplicationConfigCallable(const ModifyGeneralApmApplicationConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyGeneralApmApplicationConfigOutcome()>>(
        [this, request]()
        {
            return this->ModifyGeneralApmApplicationConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApmClient::TerminateApmInstanceOutcome ApmClient::TerminateApmInstance(const TerminateApmInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "TerminateApmInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TerminateApmInstanceResponse rsp = TerminateApmInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TerminateApmInstanceOutcome(rsp);
        else
            return TerminateApmInstanceOutcome(o.GetError());
    }
    else
    {
        return TerminateApmInstanceOutcome(outcome.GetError());
    }
}

void ApmClient::TerminateApmInstanceAsync(const TerminateApmInstanceRequest& request, const TerminateApmInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TerminateApmInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApmClient::TerminateApmInstanceOutcomeCallable ApmClient::TerminateApmInstanceCallable(const TerminateApmInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TerminateApmInstanceOutcome()>>(
        [this, request]()
        {
            return this->TerminateApmInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


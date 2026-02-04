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
    using Req = const CreateApmInstanceRequest&;
    using Resp = CreateApmInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateApmInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApmClient::CreateApmInstanceOutcomeCallable ApmClient::CreateApmInstanceCallable(const CreateApmInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateApmInstanceOutcome>>();
    CreateApmInstanceAsync(
    request,
    [prom](
        const ApmClient*,
        const CreateApmInstanceRequest&,
        CreateApmInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateApmPrometheusRuleRequest&;
    using Resp = CreateApmPrometheusRuleResponse;

    DoRequestAsync<Req, Resp>(
        "CreateApmPrometheusRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApmClient::CreateApmPrometheusRuleOutcomeCallable ApmClient::CreateApmPrometheusRuleCallable(const CreateApmPrometheusRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateApmPrometheusRuleOutcome>>();
    CreateApmPrometheusRuleAsync(
    request,
    [prom](
        const ApmClient*,
        const CreateApmPrometheusRuleRequest&,
        CreateApmPrometheusRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateApmSampleConfigRequest&;
    using Resp = CreateApmSampleConfigResponse;

    DoRequestAsync<Req, Resp>(
        "CreateApmSampleConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApmClient::CreateApmSampleConfigOutcomeCallable ApmClient::CreateApmSampleConfigCallable(const CreateApmSampleConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateApmSampleConfigOutcome>>();
    CreateApmSampleConfigAsync(
    request,
    [prom](
        const ApmClient*,
        const CreateApmSampleConfigRequest&,
        CreateApmSampleConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateProfileTaskRequest&;
    using Resp = CreateProfileTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateProfileTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApmClient::CreateProfileTaskOutcomeCallable ApmClient::CreateProfileTaskCallable(const CreateProfileTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateProfileTaskOutcome>>();
    CreateProfileTaskAsync(
    request,
    [prom](
        const ApmClient*,
        const CreateProfileTaskRequest&,
        CreateProfileTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteApmSampleConfigRequest&;
    using Resp = DeleteApmSampleConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteApmSampleConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApmClient::DeleteApmSampleConfigOutcomeCallable ApmClient::DeleteApmSampleConfigCallable(const DeleteApmSampleConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteApmSampleConfigOutcome>>();
    DeleteApmSampleConfigAsync(
    request,
    [prom](
        const ApmClient*,
        const DeleteApmSampleConfigRequest&,
        DeleteApmSampleConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeApmAgentRequest&;
    using Resp = DescribeApmAgentResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeApmAgent", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApmClient::DescribeApmAgentOutcomeCallable ApmClient::DescribeApmAgentCallable(const DescribeApmAgentRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeApmAgentOutcome>>();
    DescribeApmAgentAsync(
    request,
    [prom](
        const ApmClient*,
        const DescribeApmAgentRequest&,
        DescribeApmAgentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApmClient::DescribeApmAllVulCountOutcome ApmClient::DescribeApmAllVulCount(const DescribeApmAllVulCountRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApmAllVulCount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApmAllVulCountResponse rsp = DescribeApmAllVulCountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApmAllVulCountOutcome(rsp);
        else
            return DescribeApmAllVulCountOutcome(o.GetError());
    }
    else
    {
        return DescribeApmAllVulCountOutcome(outcome.GetError());
    }
}

void ApmClient::DescribeApmAllVulCountAsync(const DescribeApmAllVulCountRequest& request, const DescribeApmAllVulCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeApmAllVulCountRequest&;
    using Resp = DescribeApmAllVulCountResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeApmAllVulCount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApmClient::DescribeApmAllVulCountOutcomeCallable ApmClient::DescribeApmAllVulCountCallable(const DescribeApmAllVulCountRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeApmAllVulCountOutcome>>();
    DescribeApmAllVulCountAsync(
    request,
    [prom](
        const ApmClient*,
        const DescribeApmAllVulCountRequest&,
        DescribeApmAllVulCountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeApmApplicationConfigRequest&;
    using Resp = DescribeApmApplicationConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeApmApplicationConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApmClient::DescribeApmApplicationConfigOutcomeCallable ApmClient::DescribeApmApplicationConfigCallable(const DescribeApmApplicationConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeApmApplicationConfigOutcome>>();
    DescribeApmApplicationConfigAsync(
    request,
    [prom](
        const ApmClient*,
        const DescribeApmApplicationConfigRequest&,
        DescribeApmApplicationConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeApmAssociationRequest&;
    using Resp = DescribeApmAssociationResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeApmAssociation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApmClient::DescribeApmAssociationOutcomeCallable ApmClient::DescribeApmAssociationCallable(const DescribeApmAssociationRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeApmAssociationOutcome>>();
    DescribeApmAssociationAsync(
    request,
    [prom](
        const ApmClient*,
        const DescribeApmAssociationRequest&,
        DescribeApmAssociationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeApmInstancesRequest&;
    using Resp = DescribeApmInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeApmInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApmClient::DescribeApmInstancesOutcomeCallable ApmClient::DescribeApmInstancesCallable(const DescribeApmInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeApmInstancesOutcome>>();
    DescribeApmInstancesAsync(
    request,
    [prom](
        const ApmClient*,
        const DescribeApmInstancesRequest&,
        DescribeApmInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeApmPrometheusRuleRequest&;
    using Resp = DescribeApmPrometheusRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeApmPrometheusRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApmClient::DescribeApmPrometheusRuleOutcomeCallable ApmClient::DescribeApmPrometheusRuleCallable(const DescribeApmPrometheusRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeApmPrometheusRuleOutcome>>();
    DescribeApmPrometheusRuleAsync(
    request,
    [prom](
        const ApmClient*,
        const DescribeApmPrometheusRuleRequest&,
        DescribeApmPrometheusRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeApmSampleConfigRequest&;
    using Resp = DescribeApmSampleConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeApmSampleConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApmClient::DescribeApmSampleConfigOutcomeCallable ApmClient::DescribeApmSampleConfigCallable(const DescribeApmSampleConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeApmSampleConfigOutcome>>();
    DescribeApmSampleConfigAsync(
    request,
    [prom](
        const ApmClient*,
        const DescribeApmSampleConfigRequest&,
        DescribeApmSampleConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeApmServiceMetricRequest&;
    using Resp = DescribeApmServiceMetricResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeApmServiceMetric", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApmClient::DescribeApmServiceMetricOutcomeCallable ApmClient::DescribeApmServiceMetricCallable(const DescribeApmServiceMetricRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeApmServiceMetricOutcome>>();
    DescribeApmServiceMetricAsync(
    request,
    [prom](
        const ApmClient*,
        const DescribeApmServiceMetricRequest&,
        DescribeApmServiceMetricOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApmClient::DescribeApmVulnerabilityCountOutcome ApmClient::DescribeApmVulnerabilityCount(const DescribeApmVulnerabilityCountRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApmVulnerabilityCount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApmVulnerabilityCountResponse rsp = DescribeApmVulnerabilityCountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApmVulnerabilityCountOutcome(rsp);
        else
            return DescribeApmVulnerabilityCountOutcome(o.GetError());
    }
    else
    {
        return DescribeApmVulnerabilityCountOutcome(outcome.GetError());
    }
}

void ApmClient::DescribeApmVulnerabilityCountAsync(const DescribeApmVulnerabilityCountRequest& request, const DescribeApmVulnerabilityCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeApmVulnerabilityCountRequest&;
    using Resp = DescribeApmVulnerabilityCountResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeApmVulnerabilityCount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApmClient::DescribeApmVulnerabilityCountOutcomeCallable ApmClient::DescribeApmVulnerabilityCountCallable(const DescribeApmVulnerabilityCountRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeApmVulnerabilityCountOutcome>>();
    DescribeApmVulnerabilityCountAsync(
    request,
    [prom](
        const ApmClient*,
        const DescribeApmVulnerabilityCountRequest&,
        DescribeApmVulnerabilityCountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApmClient::DescribeApmVulnerabilityDetailOutcome ApmClient::DescribeApmVulnerabilityDetail(const DescribeApmVulnerabilityDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApmVulnerabilityDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApmVulnerabilityDetailResponse rsp = DescribeApmVulnerabilityDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApmVulnerabilityDetailOutcome(rsp);
        else
            return DescribeApmVulnerabilityDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeApmVulnerabilityDetailOutcome(outcome.GetError());
    }
}

void ApmClient::DescribeApmVulnerabilityDetailAsync(const DescribeApmVulnerabilityDetailRequest& request, const DescribeApmVulnerabilityDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeApmVulnerabilityDetailRequest&;
    using Resp = DescribeApmVulnerabilityDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeApmVulnerabilityDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApmClient::DescribeApmVulnerabilityDetailOutcomeCallable ApmClient::DescribeApmVulnerabilityDetailCallable(const DescribeApmVulnerabilityDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeApmVulnerabilityDetailOutcome>>();
    DescribeApmVulnerabilityDetailAsync(
    request,
    [prom](
        const ApmClient*,
        const DescribeApmVulnerabilityDetailRequest&,
        DescribeApmVulnerabilityDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeGeneralApmApplicationConfigRequest&;
    using Resp = DescribeGeneralApmApplicationConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGeneralApmApplicationConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApmClient::DescribeGeneralApmApplicationConfigOutcomeCallable ApmClient::DescribeGeneralApmApplicationConfigCallable(const DescribeGeneralApmApplicationConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGeneralApmApplicationConfigOutcome>>();
    DescribeGeneralApmApplicationConfigAsync(
    request,
    [prom](
        const ApmClient*,
        const DescribeGeneralApmApplicationConfigRequest&,
        DescribeGeneralApmApplicationConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeGeneralMetricDataRequest&;
    using Resp = DescribeGeneralMetricDataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGeneralMetricData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApmClient::DescribeGeneralMetricDataOutcomeCallable ApmClient::DescribeGeneralMetricDataCallable(const DescribeGeneralMetricDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGeneralMetricDataOutcome>>();
    DescribeGeneralMetricDataAsync(
    request,
    [prom](
        const ApmClient*,
        const DescribeGeneralMetricDataRequest&,
        DescribeGeneralMetricDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeGeneralOTSpanListRequest&;
    using Resp = DescribeGeneralOTSpanListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGeneralOTSpanList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApmClient::DescribeGeneralOTSpanListOutcomeCallable ApmClient::DescribeGeneralOTSpanListCallable(const DescribeGeneralOTSpanListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGeneralOTSpanListOutcome>>();
    DescribeGeneralOTSpanListAsync(
    request,
    [prom](
        const ApmClient*,
        const DescribeGeneralOTSpanListRequest&,
        DescribeGeneralOTSpanListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeGeneralSpanListRequest&;
    using Resp = DescribeGeneralSpanListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGeneralSpanList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApmClient::DescribeGeneralSpanListOutcomeCallable ApmClient::DescribeGeneralSpanListCallable(const DescribeGeneralSpanListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGeneralSpanListOutcome>>();
    DescribeGeneralSpanListAsync(
    request,
    [prom](
        const ApmClient*,
        const DescribeGeneralSpanListRequest&,
        DescribeGeneralSpanListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeMetricRecordsRequest&;
    using Resp = DescribeMetricRecordsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMetricRecords", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApmClient::DescribeMetricRecordsOutcomeCallable ApmClient::DescribeMetricRecordsCallable(const DescribeMetricRecordsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMetricRecordsOutcome>>();
    DescribeMetricRecordsAsync(
    request,
    [prom](
        const ApmClient*,
        const DescribeMetricRecordsRequest&,
        DescribeMetricRecordsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApmClient::DescribeOPRAllVulCountOutcome ApmClient::DescribeOPRAllVulCount(const DescribeOPRAllVulCountRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOPRAllVulCount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOPRAllVulCountResponse rsp = DescribeOPRAllVulCountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOPRAllVulCountOutcome(rsp);
        else
            return DescribeOPRAllVulCountOutcome(o.GetError());
    }
    else
    {
        return DescribeOPRAllVulCountOutcome(outcome.GetError());
    }
}

void ApmClient::DescribeOPRAllVulCountAsync(const DescribeOPRAllVulCountRequest& request, const DescribeOPRAllVulCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeOPRAllVulCountRequest&;
    using Resp = DescribeOPRAllVulCountResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeOPRAllVulCount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApmClient::DescribeOPRAllVulCountOutcomeCallable ApmClient::DescribeOPRAllVulCountCallable(const DescribeOPRAllVulCountRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOPRAllVulCountOutcome>>();
    DescribeOPRAllVulCountAsync(
    request,
    [prom](
        const ApmClient*,
        const DescribeOPRAllVulCountRequest&,
        DescribeOPRAllVulCountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeServiceOverviewRequest&;
    using Resp = DescribeServiceOverviewResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeServiceOverview", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApmClient::DescribeServiceOverviewOutcomeCallable ApmClient::DescribeServiceOverviewCallable(const DescribeServiceOverviewRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeServiceOverviewOutcome>>();
    DescribeServiceOverviewAsync(
    request,
    [prom](
        const ApmClient*,
        const DescribeServiceOverviewRequest&,
        DescribeServiceOverviewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeTagValuesRequest&;
    using Resp = DescribeTagValuesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTagValues", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApmClient::DescribeTagValuesOutcomeCallable ApmClient::DescribeTagValuesCallable(const DescribeTagValuesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTagValuesOutcome>>();
    DescribeTagValuesAsync(
    request,
    [prom](
        const ApmClient*,
        const DescribeTagValuesRequest&,
        DescribeTagValuesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApmClient::DescribeTopologyNewOutcome ApmClient::DescribeTopologyNew(const DescribeTopologyNewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTopologyNew");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTopologyNewResponse rsp = DescribeTopologyNewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTopologyNewOutcome(rsp);
        else
            return DescribeTopologyNewOutcome(o.GetError());
    }
    else
    {
        return DescribeTopologyNewOutcome(outcome.GetError());
    }
}

void ApmClient::DescribeTopologyNewAsync(const DescribeTopologyNewRequest& request, const DescribeTopologyNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTopologyNewRequest&;
    using Resp = DescribeTopologyNewResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTopologyNew", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApmClient::DescribeTopologyNewOutcomeCallable ApmClient::DescribeTopologyNewCallable(const DescribeTopologyNewRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTopologyNewOutcome>>();
    DescribeTopologyNewAsync(
    request,
    [prom](
        const ApmClient*,
        const DescribeTopologyNewRequest&,
        DescribeTopologyNewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyApmApplicationConfigRequest&;
    using Resp = ModifyApmApplicationConfigResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyApmApplicationConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApmClient::ModifyApmApplicationConfigOutcomeCallable ApmClient::ModifyApmApplicationConfigCallable(const ModifyApmApplicationConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyApmApplicationConfigOutcome>>();
    ModifyApmApplicationConfigAsync(
    request,
    [prom](
        const ApmClient*,
        const ModifyApmApplicationConfigRequest&,
        ModifyApmApplicationConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyApmAssociationRequest&;
    using Resp = ModifyApmAssociationResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyApmAssociation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApmClient::ModifyApmAssociationOutcomeCallable ApmClient::ModifyApmAssociationCallable(const ModifyApmAssociationRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyApmAssociationOutcome>>();
    ModifyApmAssociationAsync(
    request,
    [prom](
        const ApmClient*,
        const ModifyApmAssociationRequest&,
        ModifyApmAssociationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyApmInstanceRequest&;
    using Resp = ModifyApmInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyApmInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApmClient::ModifyApmInstanceOutcomeCallable ApmClient::ModifyApmInstanceCallable(const ModifyApmInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyApmInstanceOutcome>>();
    ModifyApmInstanceAsync(
    request,
    [prom](
        const ApmClient*,
        const ModifyApmInstanceRequest&,
        ModifyApmInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyApmPrometheusRuleRequest&;
    using Resp = ModifyApmPrometheusRuleResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyApmPrometheusRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApmClient::ModifyApmPrometheusRuleOutcomeCallable ApmClient::ModifyApmPrometheusRuleCallable(const ModifyApmPrometheusRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyApmPrometheusRuleOutcome>>();
    ModifyApmPrometheusRuleAsync(
    request,
    [prom](
        const ApmClient*,
        const ModifyApmPrometheusRuleRequest&,
        ModifyApmPrometheusRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyApmSampleConfigRequest&;
    using Resp = ModifyApmSampleConfigResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyApmSampleConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApmClient::ModifyApmSampleConfigOutcomeCallable ApmClient::ModifyApmSampleConfigCallable(const ModifyApmSampleConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyApmSampleConfigOutcome>>();
    ModifyApmSampleConfigAsync(
    request,
    [prom](
        const ApmClient*,
        const ModifyApmSampleConfigRequest&,
        ModifyApmSampleConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyGeneralApmApplicationConfigRequest&;
    using Resp = ModifyGeneralApmApplicationConfigResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyGeneralApmApplicationConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApmClient::ModifyGeneralApmApplicationConfigOutcomeCallable ApmClient::ModifyGeneralApmApplicationConfigCallable(const ModifyGeneralApmApplicationConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyGeneralApmApplicationConfigOutcome>>();
    ModifyGeneralApmApplicationConfigAsync(
    request,
    [prom](
        const ApmClient*,
        const ModifyGeneralApmApplicationConfigRequest&,
        ModifyGeneralApmApplicationConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const TerminateApmInstanceRequest&;
    using Resp = TerminateApmInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "TerminateApmInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApmClient::TerminateApmInstanceOutcomeCallable ApmClient::TerminateApmInstanceCallable(const TerminateApmInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<TerminateApmInstanceOutcome>>();
    TerminateApmInstanceAsync(
    request,
    [prom](
        const ApmClient*,
        const TerminateApmInstanceRequest&,
        TerminateApmInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


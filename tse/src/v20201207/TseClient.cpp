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

#include <tencentcloud/tse/v20201207/TseClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tse::V20201207;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-12-07";
    const string ENDPOINT = "tse.tencentcloudapi.com";
}

TseClient::TseClient(const Credential &credential, const string &region) :
    TseClient(credential, region, ClientProfile())
{
}

TseClient::TseClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TseClient::BindAutoScalerResourceStrategyToGroupsOutcome TseClient::BindAutoScalerResourceStrategyToGroups(const BindAutoScalerResourceStrategyToGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "BindAutoScalerResourceStrategyToGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindAutoScalerResourceStrategyToGroupsResponse rsp = BindAutoScalerResourceStrategyToGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindAutoScalerResourceStrategyToGroupsOutcome(rsp);
        else
            return BindAutoScalerResourceStrategyToGroupsOutcome(o.GetError());
    }
    else
    {
        return BindAutoScalerResourceStrategyToGroupsOutcome(outcome.GetError());
    }
}

void TseClient::BindAutoScalerResourceStrategyToGroupsAsync(const BindAutoScalerResourceStrategyToGroupsRequest& request, const BindAutoScalerResourceStrategyToGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BindAutoScalerResourceStrategyToGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::BindAutoScalerResourceStrategyToGroupsOutcomeCallable TseClient::BindAutoScalerResourceStrategyToGroupsCallable(const BindAutoScalerResourceStrategyToGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BindAutoScalerResourceStrategyToGroupsOutcome()>>(
        [this, request]()
        {
            return this->BindAutoScalerResourceStrategyToGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::CloseWafProtectionOutcome TseClient::CloseWafProtection(const CloseWafProtectionRequest &request)
{
    auto outcome = MakeRequest(request, "CloseWafProtection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CloseWafProtectionResponse rsp = CloseWafProtectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CloseWafProtectionOutcome(rsp);
        else
            return CloseWafProtectionOutcome(o.GetError());
    }
    else
    {
        return CloseWafProtectionOutcome(outcome.GetError());
    }
}

void TseClient::CloseWafProtectionAsync(const CloseWafProtectionRequest& request, const CloseWafProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CloseWafProtection(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::CloseWafProtectionOutcomeCallable TseClient::CloseWafProtectionCallable(const CloseWafProtectionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CloseWafProtectionOutcome()>>(
        [this, request]()
        {
            return this->CloseWafProtection(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::CreateAutoScalerResourceStrategyOutcome TseClient::CreateAutoScalerResourceStrategy(const CreateAutoScalerResourceStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAutoScalerResourceStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAutoScalerResourceStrategyResponse rsp = CreateAutoScalerResourceStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAutoScalerResourceStrategyOutcome(rsp);
        else
            return CreateAutoScalerResourceStrategyOutcome(o.GetError());
    }
    else
    {
        return CreateAutoScalerResourceStrategyOutcome(outcome.GetError());
    }
}

void TseClient::CreateAutoScalerResourceStrategyAsync(const CreateAutoScalerResourceStrategyRequest& request, const CreateAutoScalerResourceStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAutoScalerResourceStrategy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::CreateAutoScalerResourceStrategyOutcomeCallable TseClient::CreateAutoScalerResourceStrategyCallable(const CreateAutoScalerResourceStrategyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAutoScalerResourceStrategyOutcome()>>(
        [this, request]()
        {
            return this->CreateAutoScalerResourceStrategy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::CreateCloudNativeAPIGatewayOutcome TseClient::CreateCloudNativeAPIGateway(const CreateCloudNativeAPIGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCloudNativeAPIGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCloudNativeAPIGatewayResponse rsp = CreateCloudNativeAPIGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCloudNativeAPIGatewayOutcome(rsp);
        else
            return CreateCloudNativeAPIGatewayOutcome(o.GetError());
    }
    else
    {
        return CreateCloudNativeAPIGatewayOutcome(outcome.GetError());
    }
}

void TseClient::CreateCloudNativeAPIGatewayAsync(const CreateCloudNativeAPIGatewayRequest& request, const CreateCloudNativeAPIGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCloudNativeAPIGateway(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::CreateCloudNativeAPIGatewayOutcomeCallable TseClient::CreateCloudNativeAPIGatewayCallable(const CreateCloudNativeAPIGatewayRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCloudNativeAPIGatewayOutcome()>>(
        [this, request]()
        {
            return this->CreateCloudNativeAPIGateway(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::CreateCloudNativeAPIGatewayCanaryRuleOutcome TseClient::CreateCloudNativeAPIGatewayCanaryRule(const CreateCloudNativeAPIGatewayCanaryRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCloudNativeAPIGatewayCanaryRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCloudNativeAPIGatewayCanaryRuleResponse rsp = CreateCloudNativeAPIGatewayCanaryRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCloudNativeAPIGatewayCanaryRuleOutcome(rsp);
        else
            return CreateCloudNativeAPIGatewayCanaryRuleOutcome(o.GetError());
    }
    else
    {
        return CreateCloudNativeAPIGatewayCanaryRuleOutcome(outcome.GetError());
    }
}

void TseClient::CreateCloudNativeAPIGatewayCanaryRuleAsync(const CreateCloudNativeAPIGatewayCanaryRuleRequest& request, const CreateCloudNativeAPIGatewayCanaryRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCloudNativeAPIGatewayCanaryRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::CreateCloudNativeAPIGatewayCanaryRuleOutcomeCallable TseClient::CreateCloudNativeAPIGatewayCanaryRuleCallable(const CreateCloudNativeAPIGatewayCanaryRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCloudNativeAPIGatewayCanaryRuleOutcome()>>(
        [this, request]()
        {
            return this->CreateCloudNativeAPIGatewayCanaryRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::CreateCloudNativeAPIGatewayCertificateOutcome TseClient::CreateCloudNativeAPIGatewayCertificate(const CreateCloudNativeAPIGatewayCertificateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCloudNativeAPIGatewayCertificate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCloudNativeAPIGatewayCertificateResponse rsp = CreateCloudNativeAPIGatewayCertificateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCloudNativeAPIGatewayCertificateOutcome(rsp);
        else
            return CreateCloudNativeAPIGatewayCertificateOutcome(o.GetError());
    }
    else
    {
        return CreateCloudNativeAPIGatewayCertificateOutcome(outcome.GetError());
    }
}

void TseClient::CreateCloudNativeAPIGatewayCertificateAsync(const CreateCloudNativeAPIGatewayCertificateRequest& request, const CreateCloudNativeAPIGatewayCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCloudNativeAPIGatewayCertificate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::CreateCloudNativeAPIGatewayCertificateOutcomeCallable TseClient::CreateCloudNativeAPIGatewayCertificateCallable(const CreateCloudNativeAPIGatewayCertificateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCloudNativeAPIGatewayCertificateOutcome()>>(
        [this, request]()
        {
            return this->CreateCloudNativeAPIGatewayCertificate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::CreateCloudNativeAPIGatewayPublicNetworkOutcome TseClient::CreateCloudNativeAPIGatewayPublicNetwork(const CreateCloudNativeAPIGatewayPublicNetworkRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCloudNativeAPIGatewayPublicNetwork");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCloudNativeAPIGatewayPublicNetworkResponse rsp = CreateCloudNativeAPIGatewayPublicNetworkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCloudNativeAPIGatewayPublicNetworkOutcome(rsp);
        else
            return CreateCloudNativeAPIGatewayPublicNetworkOutcome(o.GetError());
    }
    else
    {
        return CreateCloudNativeAPIGatewayPublicNetworkOutcome(outcome.GetError());
    }
}

void TseClient::CreateCloudNativeAPIGatewayPublicNetworkAsync(const CreateCloudNativeAPIGatewayPublicNetworkRequest& request, const CreateCloudNativeAPIGatewayPublicNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCloudNativeAPIGatewayPublicNetwork(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::CreateCloudNativeAPIGatewayPublicNetworkOutcomeCallable TseClient::CreateCloudNativeAPIGatewayPublicNetworkCallable(const CreateCloudNativeAPIGatewayPublicNetworkRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCloudNativeAPIGatewayPublicNetworkOutcome()>>(
        [this, request]()
        {
            return this->CreateCloudNativeAPIGatewayPublicNetwork(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::CreateCloudNativeAPIGatewayRouteOutcome TseClient::CreateCloudNativeAPIGatewayRoute(const CreateCloudNativeAPIGatewayRouteRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCloudNativeAPIGatewayRoute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCloudNativeAPIGatewayRouteResponse rsp = CreateCloudNativeAPIGatewayRouteResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCloudNativeAPIGatewayRouteOutcome(rsp);
        else
            return CreateCloudNativeAPIGatewayRouteOutcome(o.GetError());
    }
    else
    {
        return CreateCloudNativeAPIGatewayRouteOutcome(outcome.GetError());
    }
}

void TseClient::CreateCloudNativeAPIGatewayRouteAsync(const CreateCloudNativeAPIGatewayRouteRequest& request, const CreateCloudNativeAPIGatewayRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCloudNativeAPIGatewayRoute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::CreateCloudNativeAPIGatewayRouteOutcomeCallable TseClient::CreateCloudNativeAPIGatewayRouteCallable(const CreateCloudNativeAPIGatewayRouteRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCloudNativeAPIGatewayRouteOutcome()>>(
        [this, request]()
        {
            return this->CreateCloudNativeAPIGatewayRoute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::CreateCloudNativeAPIGatewayRouteRateLimitOutcome TseClient::CreateCloudNativeAPIGatewayRouteRateLimit(const CreateCloudNativeAPIGatewayRouteRateLimitRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCloudNativeAPIGatewayRouteRateLimit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCloudNativeAPIGatewayRouteRateLimitResponse rsp = CreateCloudNativeAPIGatewayRouteRateLimitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCloudNativeAPIGatewayRouteRateLimitOutcome(rsp);
        else
            return CreateCloudNativeAPIGatewayRouteRateLimitOutcome(o.GetError());
    }
    else
    {
        return CreateCloudNativeAPIGatewayRouteRateLimitOutcome(outcome.GetError());
    }
}

void TseClient::CreateCloudNativeAPIGatewayRouteRateLimitAsync(const CreateCloudNativeAPIGatewayRouteRateLimitRequest& request, const CreateCloudNativeAPIGatewayRouteRateLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCloudNativeAPIGatewayRouteRateLimit(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::CreateCloudNativeAPIGatewayRouteRateLimitOutcomeCallable TseClient::CreateCloudNativeAPIGatewayRouteRateLimitCallable(const CreateCloudNativeAPIGatewayRouteRateLimitRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCloudNativeAPIGatewayRouteRateLimitOutcome()>>(
        [this, request]()
        {
            return this->CreateCloudNativeAPIGatewayRouteRateLimit(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::CreateCloudNativeAPIGatewayServiceOutcome TseClient::CreateCloudNativeAPIGatewayService(const CreateCloudNativeAPIGatewayServiceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCloudNativeAPIGatewayService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCloudNativeAPIGatewayServiceResponse rsp = CreateCloudNativeAPIGatewayServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCloudNativeAPIGatewayServiceOutcome(rsp);
        else
            return CreateCloudNativeAPIGatewayServiceOutcome(o.GetError());
    }
    else
    {
        return CreateCloudNativeAPIGatewayServiceOutcome(outcome.GetError());
    }
}

void TseClient::CreateCloudNativeAPIGatewayServiceAsync(const CreateCloudNativeAPIGatewayServiceRequest& request, const CreateCloudNativeAPIGatewayServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCloudNativeAPIGatewayService(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::CreateCloudNativeAPIGatewayServiceOutcomeCallable TseClient::CreateCloudNativeAPIGatewayServiceCallable(const CreateCloudNativeAPIGatewayServiceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCloudNativeAPIGatewayServiceOutcome()>>(
        [this, request]()
        {
            return this->CreateCloudNativeAPIGatewayService(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::CreateCloudNativeAPIGatewayServiceRateLimitOutcome TseClient::CreateCloudNativeAPIGatewayServiceRateLimit(const CreateCloudNativeAPIGatewayServiceRateLimitRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCloudNativeAPIGatewayServiceRateLimit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCloudNativeAPIGatewayServiceRateLimitResponse rsp = CreateCloudNativeAPIGatewayServiceRateLimitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCloudNativeAPIGatewayServiceRateLimitOutcome(rsp);
        else
            return CreateCloudNativeAPIGatewayServiceRateLimitOutcome(o.GetError());
    }
    else
    {
        return CreateCloudNativeAPIGatewayServiceRateLimitOutcome(outcome.GetError());
    }
}

void TseClient::CreateCloudNativeAPIGatewayServiceRateLimitAsync(const CreateCloudNativeAPIGatewayServiceRateLimitRequest& request, const CreateCloudNativeAPIGatewayServiceRateLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCloudNativeAPIGatewayServiceRateLimit(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::CreateCloudNativeAPIGatewayServiceRateLimitOutcomeCallable TseClient::CreateCloudNativeAPIGatewayServiceRateLimitCallable(const CreateCloudNativeAPIGatewayServiceRateLimitRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCloudNativeAPIGatewayServiceRateLimitOutcome()>>(
        [this, request]()
        {
            return this->CreateCloudNativeAPIGatewayServiceRateLimit(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::CreateConfigFileOutcome TseClient::CreateConfigFile(const CreateConfigFileRequest &request)
{
    auto outcome = MakeRequest(request, "CreateConfigFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateConfigFileResponse rsp = CreateConfigFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateConfigFileOutcome(rsp);
        else
            return CreateConfigFileOutcome(o.GetError());
    }
    else
    {
        return CreateConfigFileOutcome(outcome.GetError());
    }
}

void TseClient::CreateConfigFileAsync(const CreateConfigFileRequest& request, const CreateConfigFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateConfigFile(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::CreateConfigFileOutcomeCallable TseClient::CreateConfigFileCallable(const CreateConfigFileRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateConfigFileOutcome()>>(
        [this, request]()
        {
            return this->CreateConfigFile(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::CreateConfigFileGroupOutcome TseClient::CreateConfigFileGroup(const CreateConfigFileGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateConfigFileGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateConfigFileGroupResponse rsp = CreateConfigFileGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateConfigFileGroupOutcome(rsp);
        else
            return CreateConfigFileGroupOutcome(o.GetError());
    }
    else
    {
        return CreateConfigFileGroupOutcome(outcome.GetError());
    }
}

void TseClient::CreateConfigFileGroupAsync(const CreateConfigFileGroupRequest& request, const CreateConfigFileGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateConfigFileGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::CreateConfigFileGroupOutcomeCallable TseClient::CreateConfigFileGroupCallable(const CreateConfigFileGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateConfigFileGroupOutcome()>>(
        [this, request]()
        {
            return this->CreateConfigFileGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::CreateEngineOutcome TseClient::CreateEngine(const CreateEngineRequest &request)
{
    auto outcome = MakeRequest(request, "CreateEngine");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateEngineResponse rsp = CreateEngineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateEngineOutcome(rsp);
        else
            return CreateEngineOutcome(o.GetError());
    }
    else
    {
        return CreateEngineOutcome(outcome.GetError());
    }
}

void TseClient::CreateEngineAsync(const CreateEngineRequest& request, const CreateEngineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateEngine(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::CreateEngineOutcomeCallable TseClient::CreateEngineCallable(const CreateEngineRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateEngineOutcome()>>(
        [this, request]()
        {
            return this->CreateEngine(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::CreateGovernanceAliasOutcome TseClient::CreateGovernanceAlias(const CreateGovernanceAliasRequest &request)
{
    auto outcome = MakeRequest(request, "CreateGovernanceAlias");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateGovernanceAliasResponse rsp = CreateGovernanceAliasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateGovernanceAliasOutcome(rsp);
        else
            return CreateGovernanceAliasOutcome(o.GetError());
    }
    else
    {
        return CreateGovernanceAliasOutcome(outcome.GetError());
    }
}

void TseClient::CreateGovernanceAliasAsync(const CreateGovernanceAliasRequest& request, const CreateGovernanceAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateGovernanceAlias(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::CreateGovernanceAliasOutcomeCallable TseClient::CreateGovernanceAliasCallable(const CreateGovernanceAliasRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateGovernanceAliasOutcome()>>(
        [this, request]()
        {
            return this->CreateGovernanceAlias(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::CreateGovernanceInstancesOutcome TseClient::CreateGovernanceInstances(const CreateGovernanceInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateGovernanceInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateGovernanceInstancesResponse rsp = CreateGovernanceInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateGovernanceInstancesOutcome(rsp);
        else
            return CreateGovernanceInstancesOutcome(o.GetError());
    }
    else
    {
        return CreateGovernanceInstancesOutcome(outcome.GetError());
    }
}

void TseClient::CreateGovernanceInstancesAsync(const CreateGovernanceInstancesRequest& request, const CreateGovernanceInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateGovernanceInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::CreateGovernanceInstancesOutcomeCallable TseClient::CreateGovernanceInstancesCallable(const CreateGovernanceInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateGovernanceInstancesOutcome()>>(
        [this, request]()
        {
            return this->CreateGovernanceInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::CreateGovernanceNamespacesOutcome TseClient::CreateGovernanceNamespaces(const CreateGovernanceNamespacesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateGovernanceNamespaces");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateGovernanceNamespacesResponse rsp = CreateGovernanceNamespacesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateGovernanceNamespacesOutcome(rsp);
        else
            return CreateGovernanceNamespacesOutcome(o.GetError());
    }
    else
    {
        return CreateGovernanceNamespacesOutcome(outcome.GetError());
    }
}

void TseClient::CreateGovernanceNamespacesAsync(const CreateGovernanceNamespacesRequest& request, const CreateGovernanceNamespacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateGovernanceNamespaces(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::CreateGovernanceNamespacesOutcomeCallable TseClient::CreateGovernanceNamespacesCallable(const CreateGovernanceNamespacesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateGovernanceNamespacesOutcome()>>(
        [this, request]()
        {
            return this->CreateGovernanceNamespaces(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::CreateGovernanceServicesOutcome TseClient::CreateGovernanceServices(const CreateGovernanceServicesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateGovernanceServices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateGovernanceServicesResponse rsp = CreateGovernanceServicesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateGovernanceServicesOutcome(rsp);
        else
            return CreateGovernanceServicesOutcome(o.GetError());
    }
    else
    {
        return CreateGovernanceServicesOutcome(outcome.GetError());
    }
}

void TseClient::CreateGovernanceServicesAsync(const CreateGovernanceServicesRequest& request, const CreateGovernanceServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateGovernanceServices(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::CreateGovernanceServicesOutcomeCallable TseClient::CreateGovernanceServicesCallable(const CreateGovernanceServicesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateGovernanceServicesOutcome()>>(
        [this, request]()
        {
            return this->CreateGovernanceServices(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::CreateNativeGatewayServerGroupOutcome TseClient::CreateNativeGatewayServerGroup(const CreateNativeGatewayServerGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateNativeGatewayServerGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateNativeGatewayServerGroupResponse rsp = CreateNativeGatewayServerGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateNativeGatewayServerGroupOutcome(rsp);
        else
            return CreateNativeGatewayServerGroupOutcome(o.GetError());
    }
    else
    {
        return CreateNativeGatewayServerGroupOutcome(outcome.GetError());
    }
}

void TseClient::CreateNativeGatewayServerGroupAsync(const CreateNativeGatewayServerGroupRequest& request, const CreateNativeGatewayServerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateNativeGatewayServerGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::CreateNativeGatewayServerGroupOutcomeCallable TseClient::CreateNativeGatewayServerGroupCallable(const CreateNativeGatewayServerGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateNativeGatewayServerGroupOutcome()>>(
        [this, request]()
        {
            return this->CreateNativeGatewayServerGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::CreateNativeGatewayServiceSourceOutcome TseClient::CreateNativeGatewayServiceSource(const CreateNativeGatewayServiceSourceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateNativeGatewayServiceSource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateNativeGatewayServiceSourceResponse rsp = CreateNativeGatewayServiceSourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateNativeGatewayServiceSourceOutcome(rsp);
        else
            return CreateNativeGatewayServiceSourceOutcome(o.GetError());
    }
    else
    {
        return CreateNativeGatewayServiceSourceOutcome(outcome.GetError());
    }
}

void TseClient::CreateNativeGatewayServiceSourceAsync(const CreateNativeGatewayServiceSourceRequest& request, const CreateNativeGatewayServiceSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateNativeGatewayServiceSource(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::CreateNativeGatewayServiceSourceOutcomeCallable TseClient::CreateNativeGatewayServiceSourceCallable(const CreateNativeGatewayServiceSourceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateNativeGatewayServiceSourceOutcome()>>(
        [this, request]()
        {
            return this->CreateNativeGatewayServiceSource(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::CreateOrUpdateConfigFileAndReleaseOutcome TseClient::CreateOrUpdateConfigFileAndRelease(const CreateOrUpdateConfigFileAndReleaseRequest &request)
{
    auto outcome = MakeRequest(request, "CreateOrUpdateConfigFileAndRelease");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateOrUpdateConfigFileAndReleaseResponse rsp = CreateOrUpdateConfigFileAndReleaseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateOrUpdateConfigFileAndReleaseOutcome(rsp);
        else
            return CreateOrUpdateConfigFileAndReleaseOutcome(o.GetError());
    }
    else
    {
        return CreateOrUpdateConfigFileAndReleaseOutcome(outcome.GetError());
    }
}

void TseClient::CreateOrUpdateConfigFileAndReleaseAsync(const CreateOrUpdateConfigFileAndReleaseRequest& request, const CreateOrUpdateConfigFileAndReleaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateOrUpdateConfigFileAndRelease(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::CreateOrUpdateConfigFileAndReleaseOutcomeCallable TseClient::CreateOrUpdateConfigFileAndReleaseCallable(const CreateOrUpdateConfigFileAndReleaseRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateOrUpdateConfigFileAndReleaseOutcome()>>(
        [this, request]()
        {
            return this->CreateOrUpdateConfigFileAndRelease(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::CreateWafDomainsOutcome TseClient::CreateWafDomains(const CreateWafDomainsRequest &request)
{
    auto outcome = MakeRequest(request, "CreateWafDomains");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateWafDomainsResponse rsp = CreateWafDomainsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateWafDomainsOutcome(rsp);
        else
            return CreateWafDomainsOutcome(o.GetError());
    }
    else
    {
        return CreateWafDomainsOutcome(outcome.GetError());
    }
}

void TseClient::CreateWafDomainsAsync(const CreateWafDomainsRequest& request, const CreateWafDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateWafDomains(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::CreateWafDomainsOutcomeCallable TseClient::CreateWafDomainsCallable(const CreateWafDomainsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateWafDomainsOutcome()>>(
        [this, request]()
        {
            return this->CreateWafDomains(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DeleteAutoScalerResourceStrategyOutcome TseClient::DeleteAutoScalerResourceStrategy(const DeleteAutoScalerResourceStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAutoScalerResourceStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAutoScalerResourceStrategyResponse rsp = DeleteAutoScalerResourceStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAutoScalerResourceStrategyOutcome(rsp);
        else
            return DeleteAutoScalerResourceStrategyOutcome(o.GetError());
    }
    else
    {
        return DeleteAutoScalerResourceStrategyOutcome(outcome.GetError());
    }
}

void TseClient::DeleteAutoScalerResourceStrategyAsync(const DeleteAutoScalerResourceStrategyRequest& request, const DeleteAutoScalerResourceStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAutoScalerResourceStrategy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DeleteAutoScalerResourceStrategyOutcomeCallable TseClient::DeleteAutoScalerResourceStrategyCallable(const DeleteAutoScalerResourceStrategyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAutoScalerResourceStrategyOutcome()>>(
        [this, request]()
        {
            return this->DeleteAutoScalerResourceStrategy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DeleteCloudNativeAPIGatewayOutcome TseClient::DeleteCloudNativeAPIGateway(const DeleteCloudNativeAPIGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCloudNativeAPIGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCloudNativeAPIGatewayResponse rsp = DeleteCloudNativeAPIGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCloudNativeAPIGatewayOutcome(rsp);
        else
            return DeleteCloudNativeAPIGatewayOutcome(o.GetError());
    }
    else
    {
        return DeleteCloudNativeAPIGatewayOutcome(outcome.GetError());
    }
}

void TseClient::DeleteCloudNativeAPIGatewayAsync(const DeleteCloudNativeAPIGatewayRequest& request, const DeleteCloudNativeAPIGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCloudNativeAPIGateway(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DeleteCloudNativeAPIGatewayOutcomeCallable TseClient::DeleteCloudNativeAPIGatewayCallable(const DeleteCloudNativeAPIGatewayRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCloudNativeAPIGatewayOutcome()>>(
        [this, request]()
        {
            return this->DeleteCloudNativeAPIGateway(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DeleteCloudNativeAPIGatewayCanaryRuleOutcome TseClient::DeleteCloudNativeAPIGatewayCanaryRule(const DeleteCloudNativeAPIGatewayCanaryRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCloudNativeAPIGatewayCanaryRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCloudNativeAPIGatewayCanaryRuleResponse rsp = DeleteCloudNativeAPIGatewayCanaryRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCloudNativeAPIGatewayCanaryRuleOutcome(rsp);
        else
            return DeleteCloudNativeAPIGatewayCanaryRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteCloudNativeAPIGatewayCanaryRuleOutcome(outcome.GetError());
    }
}

void TseClient::DeleteCloudNativeAPIGatewayCanaryRuleAsync(const DeleteCloudNativeAPIGatewayCanaryRuleRequest& request, const DeleteCloudNativeAPIGatewayCanaryRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCloudNativeAPIGatewayCanaryRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DeleteCloudNativeAPIGatewayCanaryRuleOutcomeCallable TseClient::DeleteCloudNativeAPIGatewayCanaryRuleCallable(const DeleteCloudNativeAPIGatewayCanaryRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCloudNativeAPIGatewayCanaryRuleOutcome()>>(
        [this, request]()
        {
            return this->DeleteCloudNativeAPIGatewayCanaryRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DeleteCloudNativeAPIGatewayCertificateOutcome TseClient::DeleteCloudNativeAPIGatewayCertificate(const DeleteCloudNativeAPIGatewayCertificateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCloudNativeAPIGatewayCertificate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCloudNativeAPIGatewayCertificateResponse rsp = DeleteCloudNativeAPIGatewayCertificateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCloudNativeAPIGatewayCertificateOutcome(rsp);
        else
            return DeleteCloudNativeAPIGatewayCertificateOutcome(o.GetError());
    }
    else
    {
        return DeleteCloudNativeAPIGatewayCertificateOutcome(outcome.GetError());
    }
}

void TseClient::DeleteCloudNativeAPIGatewayCertificateAsync(const DeleteCloudNativeAPIGatewayCertificateRequest& request, const DeleteCloudNativeAPIGatewayCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCloudNativeAPIGatewayCertificate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DeleteCloudNativeAPIGatewayCertificateOutcomeCallable TseClient::DeleteCloudNativeAPIGatewayCertificateCallable(const DeleteCloudNativeAPIGatewayCertificateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCloudNativeAPIGatewayCertificateOutcome()>>(
        [this, request]()
        {
            return this->DeleteCloudNativeAPIGatewayCertificate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DeleteCloudNativeAPIGatewayPublicNetworkOutcome TseClient::DeleteCloudNativeAPIGatewayPublicNetwork(const DeleteCloudNativeAPIGatewayPublicNetworkRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCloudNativeAPIGatewayPublicNetwork");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCloudNativeAPIGatewayPublicNetworkResponse rsp = DeleteCloudNativeAPIGatewayPublicNetworkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCloudNativeAPIGatewayPublicNetworkOutcome(rsp);
        else
            return DeleteCloudNativeAPIGatewayPublicNetworkOutcome(o.GetError());
    }
    else
    {
        return DeleteCloudNativeAPIGatewayPublicNetworkOutcome(outcome.GetError());
    }
}

void TseClient::DeleteCloudNativeAPIGatewayPublicNetworkAsync(const DeleteCloudNativeAPIGatewayPublicNetworkRequest& request, const DeleteCloudNativeAPIGatewayPublicNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCloudNativeAPIGatewayPublicNetwork(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DeleteCloudNativeAPIGatewayPublicNetworkOutcomeCallable TseClient::DeleteCloudNativeAPIGatewayPublicNetworkCallable(const DeleteCloudNativeAPIGatewayPublicNetworkRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCloudNativeAPIGatewayPublicNetworkOutcome()>>(
        [this, request]()
        {
            return this->DeleteCloudNativeAPIGatewayPublicNetwork(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DeleteCloudNativeAPIGatewayRouteOutcome TseClient::DeleteCloudNativeAPIGatewayRoute(const DeleteCloudNativeAPIGatewayRouteRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCloudNativeAPIGatewayRoute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCloudNativeAPIGatewayRouteResponse rsp = DeleteCloudNativeAPIGatewayRouteResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCloudNativeAPIGatewayRouteOutcome(rsp);
        else
            return DeleteCloudNativeAPIGatewayRouteOutcome(o.GetError());
    }
    else
    {
        return DeleteCloudNativeAPIGatewayRouteOutcome(outcome.GetError());
    }
}

void TseClient::DeleteCloudNativeAPIGatewayRouteAsync(const DeleteCloudNativeAPIGatewayRouteRequest& request, const DeleteCloudNativeAPIGatewayRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCloudNativeAPIGatewayRoute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DeleteCloudNativeAPIGatewayRouteOutcomeCallable TseClient::DeleteCloudNativeAPIGatewayRouteCallable(const DeleteCloudNativeAPIGatewayRouteRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCloudNativeAPIGatewayRouteOutcome()>>(
        [this, request]()
        {
            return this->DeleteCloudNativeAPIGatewayRoute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DeleteCloudNativeAPIGatewayRouteRateLimitOutcome TseClient::DeleteCloudNativeAPIGatewayRouteRateLimit(const DeleteCloudNativeAPIGatewayRouteRateLimitRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCloudNativeAPIGatewayRouteRateLimit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCloudNativeAPIGatewayRouteRateLimitResponse rsp = DeleteCloudNativeAPIGatewayRouteRateLimitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCloudNativeAPIGatewayRouteRateLimitOutcome(rsp);
        else
            return DeleteCloudNativeAPIGatewayRouteRateLimitOutcome(o.GetError());
    }
    else
    {
        return DeleteCloudNativeAPIGatewayRouteRateLimitOutcome(outcome.GetError());
    }
}

void TseClient::DeleteCloudNativeAPIGatewayRouteRateLimitAsync(const DeleteCloudNativeAPIGatewayRouteRateLimitRequest& request, const DeleteCloudNativeAPIGatewayRouteRateLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCloudNativeAPIGatewayRouteRateLimit(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DeleteCloudNativeAPIGatewayRouteRateLimitOutcomeCallable TseClient::DeleteCloudNativeAPIGatewayRouteRateLimitCallable(const DeleteCloudNativeAPIGatewayRouteRateLimitRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCloudNativeAPIGatewayRouteRateLimitOutcome()>>(
        [this, request]()
        {
            return this->DeleteCloudNativeAPIGatewayRouteRateLimit(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DeleteCloudNativeAPIGatewayServiceOutcome TseClient::DeleteCloudNativeAPIGatewayService(const DeleteCloudNativeAPIGatewayServiceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCloudNativeAPIGatewayService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCloudNativeAPIGatewayServiceResponse rsp = DeleteCloudNativeAPIGatewayServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCloudNativeAPIGatewayServiceOutcome(rsp);
        else
            return DeleteCloudNativeAPIGatewayServiceOutcome(o.GetError());
    }
    else
    {
        return DeleteCloudNativeAPIGatewayServiceOutcome(outcome.GetError());
    }
}

void TseClient::DeleteCloudNativeAPIGatewayServiceAsync(const DeleteCloudNativeAPIGatewayServiceRequest& request, const DeleteCloudNativeAPIGatewayServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCloudNativeAPIGatewayService(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DeleteCloudNativeAPIGatewayServiceOutcomeCallable TseClient::DeleteCloudNativeAPIGatewayServiceCallable(const DeleteCloudNativeAPIGatewayServiceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCloudNativeAPIGatewayServiceOutcome()>>(
        [this, request]()
        {
            return this->DeleteCloudNativeAPIGatewayService(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DeleteCloudNativeAPIGatewayServiceRateLimitOutcome TseClient::DeleteCloudNativeAPIGatewayServiceRateLimit(const DeleteCloudNativeAPIGatewayServiceRateLimitRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCloudNativeAPIGatewayServiceRateLimit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCloudNativeAPIGatewayServiceRateLimitResponse rsp = DeleteCloudNativeAPIGatewayServiceRateLimitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCloudNativeAPIGatewayServiceRateLimitOutcome(rsp);
        else
            return DeleteCloudNativeAPIGatewayServiceRateLimitOutcome(o.GetError());
    }
    else
    {
        return DeleteCloudNativeAPIGatewayServiceRateLimitOutcome(outcome.GetError());
    }
}

void TseClient::DeleteCloudNativeAPIGatewayServiceRateLimitAsync(const DeleteCloudNativeAPIGatewayServiceRateLimitRequest& request, const DeleteCloudNativeAPIGatewayServiceRateLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCloudNativeAPIGatewayServiceRateLimit(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DeleteCloudNativeAPIGatewayServiceRateLimitOutcomeCallable TseClient::DeleteCloudNativeAPIGatewayServiceRateLimitCallable(const DeleteCloudNativeAPIGatewayServiceRateLimitRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCloudNativeAPIGatewayServiceRateLimitOutcome()>>(
        [this, request]()
        {
            return this->DeleteCloudNativeAPIGatewayServiceRateLimit(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DeleteConfigFileGroupOutcome TseClient::DeleteConfigFileGroup(const DeleteConfigFileGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteConfigFileGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteConfigFileGroupResponse rsp = DeleteConfigFileGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteConfigFileGroupOutcome(rsp);
        else
            return DeleteConfigFileGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteConfigFileGroupOutcome(outcome.GetError());
    }
}

void TseClient::DeleteConfigFileGroupAsync(const DeleteConfigFileGroupRequest& request, const DeleteConfigFileGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteConfigFileGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DeleteConfigFileGroupOutcomeCallable TseClient::DeleteConfigFileGroupCallable(const DeleteConfigFileGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteConfigFileGroupOutcome()>>(
        [this, request]()
        {
            return this->DeleteConfigFileGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DeleteConfigFileReleasesOutcome TseClient::DeleteConfigFileReleases(const DeleteConfigFileReleasesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteConfigFileReleases");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteConfigFileReleasesResponse rsp = DeleteConfigFileReleasesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteConfigFileReleasesOutcome(rsp);
        else
            return DeleteConfigFileReleasesOutcome(o.GetError());
    }
    else
    {
        return DeleteConfigFileReleasesOutcome(outcome.GetError());
    }
}

void TseClient::DeleteConfigFileReleasesAsync(const DeleteConfigFileReleasesRequest& request, const DeleteConfigFileReleasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteConfigFileReleases(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DeleteConfigFileReleasesOutcomeCallable TseClient::DeleteConfigFileReleasesCallable(const DeleteConfigFileReleasesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteConfigFileReleasesOutcome()>>(
        [this, request]()
        {
            return this->DeleteConfigFileReleases(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DeleteConfigFilesOutcome TseClient::DeleteConfigFiles(const DeleteConfigFilesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteConfigFiles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteConfigFilesResponse rsp = DeleteConfigFilesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteConfigFilesOutcome(rsp);
        else
            return DeleteConfigFilesOutcome(o.GetError());
    }
    else
    {
        return DeleteConfigFilesOutcome(outcome.GetError());
    }
}

void TseClient::DeleteConfigFilesAsync(const DeleteConfigFilesRequest& request, const DeleteConfigFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteConfigFiles(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DeleteConfigFilesOutcomeCallable TseClient::DeleteConfigFilesCallable(const DeleteConfigFilesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteConfigFilesOutcome()>>(
        [this, request]()
        {
            return this->DeleteConfigFiles(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DeleteEngineOutcome TseClient::DeleteEngine(const DeleteEngineRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteEngine");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteEngineResponse rsp = DeleteEngineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteEngineOutcome(rsp);
        else
            return DeleteEngineOutcome(o.GetError());
    }
    else
    {
        return DeleteEngineOutcome(outcome.GetError());
    }
}

void TseClient::DeleteEngineAsync(const DeleteEngineRequest& request, const DeleteEngineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteEngine(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DeleteEngineOutcomeCallable TseClient::DeleteEngineCallable(const DeleteEngineRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteEngineOutcome()>>(
        [this, request]()
        {
            return this->DeleteEngine(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DeleteGovernanceAliasesOutcome TseClient::DeleteGovernanceAliases(const DeleteGovernanceAliasesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteGovernanceAliases");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteGovernanceAliasesResponse rsp = DeleteGovernanceAliasesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteGovernanceAliasesOutcome(rsp);
        else
            return DeleteGovernanceAliasesOutcome(o.GetError());
    }
    else
    {
        return DeleteGovernanceAliasesOutcome(outcome.GetError());
    }
}

void TseClient::DeleteGovernanceAliasesAsync(const DeleteGovernanceAliasesRequest& request, const DeleteGovernanceAliasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteGovernanceAliases(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DeleteGovernanceAliasesOutcomeCallable TseClient::DeleteGovernanceAliasesCallable(const DeleteGovernanceAliasesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteGovernanceAliasesOutcome()>>(
        [this, request]()
        {
            return this->DeleteGovernanceAliases(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DeleteGovernanceInstancesOutcome TseClient::DeleteGovernanceInstances(const DeleteGovernanceInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteGovernanceInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteGovernanceInstancesResponse rsp = DeleteGovernanceInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteGovernanceInstancesOutcome(rsp);
        else
            return DeleteGovernanceInstancesOutcome(o.GetError());
    }
    else
    {
        return DeleteGovernanceInstancesOutcome(outcome.GetError());
    }
}

void TseClient::DeleteGovernanceInstancesAsync(const DeleteGovernanceInstancesRequest& request, const DeleteGovernanceInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteGovernanceInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DeleteGovernanceInstancesOutcomeCallable TseClient::DeleteGovernanceInstancesCallable(const DeleteGovernanceInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteGovernanceInstancesOutcome()>>(
        [this, request]()
        {
            return this->DeleteGovernanceInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DeleteGovernanceInstancesByHostOutcome TseClient::DeleteGovernanceInstancesByHost(const DeleteGovernanceInstancesByHostRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteGovernanceInstancesByHost");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteGovernanceInstancesByHostResponse rsp = DeleteGovernanceInstancesByHostResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteGovernanceInstancesByHostOutcome(rsp);
        else
            return DeleteGovernanceInstancesByHostOutcome(o.GetError());
    }
    else
    {
        return DeleteGovernanceInstancesByHostOutcome(outcome.GetError());
    }
}

void TseClient::DeleteGovernanceInstancesByHostAsync(const DeleteGovernanceInstancesByHostRequest& request, const DeleteGovernanceInstancesByHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteGovernanceInstancesByHost(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DeleteGovernanceInstancesByHostOutcomeCallable TseClient::DeleteGovernanceInstancesByHostCallable(const DeleteGovernanceInstancesByHostRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteGovernanceInstancesByHostOutcome()>>(
        [this, request]()
        {
            return this->DeleteGovernanceInstancesByHost(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DeleteGovernanceNamespacesOutcome TseClient::DeleteGovernanceNamespaces(const DeleteGovernanceNamespacesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteGovernanceNamespaces");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteGovernanceNamespacesResponse rsp = DeleteGovernanceNamespacesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteGovernanceNamespacesOutcome(rsp);
        else
            return DeleteGovernanceNamespacesOutcome(o.GetError());
    }
    else
    {
        return DeleteGovernanceNamespacesOutcome(outcome.GetError());
    }
}

void TseClient::DeleteGovernanceNamespacesAsync(const DeleteGovernanceNamespacesRequest& request, const DeleteGovernanceNamespacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteGovernanceNamespaces(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DeleteGovernanceNamespacesOutcomeCallable TseClient::DeleteGovernanceNamespacesCallable(const DeleteGovernanceNamespacesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteGovernanceNamespacesOutcome()>>(
        [this, request]()
        {
            return this->DeleteGovernanceNamespaces(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DeleteGovernanceServicesOutcome TseClient::DeleteGovernanceServices(const DeleteGovernanceServicesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteGovernanceServices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteGovernanceServicesResponse rsp = DeleteGovernanceServicesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteGovernanceServicesOutcome(rsp);
        else
            return DeleteGovernanceServicesOutcome(o.GetError());
    }
    else
    {
        return DeleteGovernanceServicesOutcome(outcome.GetError());
    }
}

void TseClient::DeleteGovernanceServicesAsync(const DeleteGovernanceServicesRequest& request, const DeleteGovernanceServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteGovernanceServices(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DeleteGovernanceServicesOutcomeCallable TseClient::DeleteGovernanceServicesCallable(const DeleteGovernanceServicesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteGovernanceServicesOutcome()>>(
        [this, request]()
        {
            return this->DeleteGovernanceServices(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DeleteNativeGatewayServerGroupOutcome TseClient::DeleteNativeGatewayServerGroup(const DeleteNativeGatewayServerGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteNativeGatewayServerGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteNativeGatewayServerGroupResponse rsp = DeleteNativeGatewayServerGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteNativeGatewayServerGroupOutcome(rsp);
        else
            return DeleteNativeGatewayServerGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteNativeGatewayServerGroupOutcome(outcome.GetError());
    }
}

void TseClient::DeleteNativeGatewayServerGroupAsync(const DeleteNativeGatewayServerGroupRequest& request, const DeleteNativeGatewayServerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteNativeGatewayServerGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DeleteNativeGatewayServerGroupOutcomeCallable TseClient::DeleteNativeGatewayServerGroupCallable(const DeleteNativeGatewayServerGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteNativeGatewayServerGroupOutcome()>>(
        [this, request]()
        {
            return this->DeleteNativeGatewayServerGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DeleteNativeGatewayServiceSourceOutcome TseClient::DeleteNativeGatewayServiceSource(const DeleteNativeGatewayServiceSourceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteNativeGatewayServiceSource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteNativeGatewayServiceSourceResponse rsp = DeleteNativeGatewayServiceSourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteNativeGatewayServiceSourceOutcome(rsp);
        else
            return DeleteNativeGatewayServiceSourceOutcome(o.GetError());
    }
    else
    {
        return DeleteNativeGatewayServiceSourceOutcome(outcome.GetError());
    }
}

void TseClient::DeleteNativeGatewayServiceSourceAsync(const DeleteNativeGatewayServiceSourceRequest& request, const DeleteNativeGatewayServiceSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteNativeGatewayServiceSource(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DeleteNativeGatewayServiceSourceOutcomeCallable TseClient::DeleteNativeGatewayServiceSourceCallable(const DeleteNativeGatewayServiceSourceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteNativeGatewayServiceSourceOutcome()>>(
        [this, request]()
        {
            return this->DeleteNativeGatewayServiceSource(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DeleteWafDomainsOutcome TseClient::DeleteWafDomains(const DeleteWafDomainsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteWafDomains");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteWafDomainsResponse rsp = DeleteWafDomainsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteWafDomainsOutcome(rsp);
        else
            return DeleteWafDomainsOutcome(o.GetError());
    }
    else
    {
        return DeleteWafDomainsOutcome(outcome.GetError());
    }
}

void TseClient::DeleteWafDomainsAsync(const DeleteWafDomainsRequest& request, const DeleteWafDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteWafDomains(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DeleteWafDomainsOutcomeCallable TseClient::DeleteWafDomainsCallable(const DeleteWafDomainsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteWafDomainsOutcome()>>(
        [this, request]()
        {
            return this->DeleteWafDomains(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DescribeAllConfigFileTemplatesOutcome TseClient::DescribeAllConfigFileTemplates(const DescribeAllConfigFileTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAllConfigFileTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAllConfigFileTemplatesResponse rsp = DescribeAllConfigFileTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAllConfigFileTemplatesOutcome(rsp);
        else
            return DescribeAllConfigFileTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeAllConfigFileTemplatesOutcome(outcome.GetError());
    }
}

void TseClient::DescribeAllConfigFileTemplatesAsync(const DescribeAllConfigFileTemplatesRequest& request, const DescribeAllConfigFileTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAllConfigFileTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DescribeAllConfigFileTemplatesOutcomeCallable TseClient::DescribeAllConfigFileTemplatesCallable(const DescribeAllConfigFileTemplatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAllConfigFileTemplatesOutcome()>>(
        [this, request]()
        {
            return this->DescribeAllConfigFileTemplates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DescribeAutoScalerResourceStrategiesOutcome TseClient::DescribeAutoScalerResourceStrategies(const DescribeAutoScalerResourceStrategiesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAutoScalerResourceStrategies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAutoScalerResourceStrategiesResponse rsp = DescribeAutoScalerResourceStrategiesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAutoScalerResourceStrategiesOutcome(rsp);
        else
            return DescribeAutoScalerResourceStrategiesOutcome(o.GetError());
    }
    else
    {
        return DescribeAutoScalerResourceStrategiesOutcome(outcome.GetError());
    }
}

void TseClient::DescribeAutoScalerResourceStrategiesAsync(const DescribeAutoScalerResourceStrategiesRequest& request, const DescribeAutoScalerResourceStrategiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAutoScalerResourceStrategies(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DescribeAutoScalerResourceStrategiesOutcomeCallable TseClient::DescribeAutoScalerResourceStrategiesCallable(const DescribeAutoScalerResourceStrategiesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAutoScalerResourceStrategiesOutcome()>>(
        [this, request]()
        {
            return this->DescribeAutoScalerResourceStrategies(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DescribeAutoScalerResourceStrategyBindingGroupsOutcome TseClient::DescribeAutoScalerResourceStrategyBindingGroups(const DescribeAutoScalerResourceStrategyBindingGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAutoScalerResourceStrategyBindingGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAutoScalerResourceStrategyBindingGroupsResponse rsp = DescribeAutoScalerResourceStrategyBindingGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAutoScalerResourceStrategyBindingGroupsOutcome(rsp);
        else
            return DescribeAutoScalerResourceStrategyBindingGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeAutoScalerResourceStrategyBindingGroupsOutcome(outcome.GetError());
    }
}

void TseClient::DescribeAutoScalerResourceStrategyBindingGroupsAsync(const DescribeAutoScalerResourceStrategyBindingGroupsRequest& request, const DescribeAutoScalerResourceStrategyBindingGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAutoScalerResourceStrategyBindingGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DescribeAutoScalerResourceStrategyBindingGroupsOutcomeCallable TseClient::DescribeAutoScalerResourceStrategyBindingGroupsCallable(const DescribeAutoScalerResourceStrategyBindingGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAutoScalerResourceStrategyBindingGroupsOutcome()>>(
        [this, request]()
        {
            return this->DescribeAutoScalerResourceStrategyBindingGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DescribeCloudNativeAPIGatewayOutcome TseClient::DescribeCloudNativeAPIGateway(const DescribeCloudNativeAPIGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudNativeAPIGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudNativeAPIGatewayResponse rsp = DescribeCloudNativeAPIGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudNativeAPIGatewayOutcome(rsp);
        else
            return DescribeCloudNativeAPIGatewayOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudNativeAPIGatewayOutcome(outcome.GetError());
    }
}

void TseClient::DescribeCloudNativeAPIGatewayAsync(const DescribeCloudNativeAPIGatewayRequest& request, const DescribeCloudNativeAPIGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCloudNativeAPIGateway(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DescribeCloudNativeAPIGatewayOutcomeCallable TseClient::DescribeCloudNativeAPIGatewayCallable(const DescribeCloudNativeAPIGatewayRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCloudNativeAPIGatewayOutcome()>>(
        [this, request]()
        {
            return this->DescribeCloudNativeAPIGateway(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DescribeCloudNativeAPIGatewayCanaryRulesOutcome TseClient::DescribeCloudNativeAPIGatewayCanaryRules(const DescribeCloudNativeAPIGatewayCanaryRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudNativeAPIGatewayCanaryRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudNativeAPIGatewayCanaryRulesResponse rsp = DescribeCloudNativeAPIGatewayCanaryRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudNativeAPIGatewayCanaryRulesOutcome(rsp);
        else
            return DescribeCloudNativeAPIGatewayCanaryRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudNativeAPIGatewayCanaryRulesOutcome(outcome.GetError());
    }
}

void TseClient::DescribeCloudNativeAPIGatewayCanaryRulesAsync(const DescribeCloudNativeAPIGatewayCanaryRulesRequest& request, const DescribeCloudNativeAPIGatewayCanaryRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCloudNativeAPIGatewayCanaryRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DescribeCloudNativeAPIGatewayCanaryRulesOutcomeCallable TseClient::DescribeCloudNativeAPIGatewayCanaryRulesCallable(const DescribeCloudNativeAPIGatewayCanaryRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCloudNativeAPIGatewayCanaryRulesOutcome()>>(
        [this, request]()
        {
            return this->DescribeCloudNativeAPIGatewayCanaryRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DescribeCloudNativeAPIGatewayCertificateDetailsOutcome TseClient::DescribeCloudNativeAPIGatewayCertificateDetails(const DescribeCloudNativeAPIGatewayCertificateDetailsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudNativeAPIGatewayCertificateDetails");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudNativeAPIGatewayCertificateDetailsResponse rsp = DescribeCloudNativeAPIGatewayCertificateDetailsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudNativeAPIGatewayCertificateDetailsOutcome(rsp);
        else
            return DescribeCloudNativeAPIGatewayCertificateDetailsOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudNativeAPIGatewayCertificateDetailsOutcome(outcome.GetError());
    }
}

void TseClient::DescribeCloudNativeAPIGatewayCertificateDetailsAsync(const DescribeCloudNativeAPIGatewayCertificateDetailsRequest& request, const DescribeCloudNativeAPIGatewayCertificateDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCloudNativeAPIGatewayCertificateDetails(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DescribeCloudNativeAPIGatewayCertificateDetailsOutcomeCallable TseClient::DescribeCloudNativeAPIGatewayCertificateDetailsCallable(const DescribeCloudNativeAPIGatewayCertificateDetailsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCloudNativeAPIGatewayCertificateDetailsOutcome()>>(
        [this, request]()
        {
            return this->DescribeCloudNativeAPIGatewayCertificateDetails(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DescribeCloudNativeAPIGatewayCertificatesOutcome TseClient::DescribeCloudNativeAPIGatewayCertificates(const DescribeCloudNativeAPIGatewayCertificatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudNativeAPIGatewayCertificates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudNativeAPIGatewayCertificatesResponse rsp = DescribeCloudNativeAPIGatewayCertificatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudNativeAPIGatewayCertificatesOutcome(rsp);
        else
            return DescribeCloudNativeAPIGatewayCertificatesOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudNativeAPIGatewayCertificatesOutcome(outcome.GetError());
    }
}

void TseClient::DescribeCloudNativeAPIGatewayCertificatesAsync(const DescribeCloudNativeAPIGatewayCertificatesRequest& request, const DescribeCloudNativeAPIGatewayCertificatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCloudNativeAPIGatewayCertificates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DescribeCloudNativeAPIGatewayCertificatesOutcomeCallable TseClient::DescribeCloudNativeAPIGatewayCertificatesCallable(const DescribeCloudNativeAPIGatewayCertificatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCloudNativeAPIGatewayCertificatesOutcome()>>(
        [this, request]()
        {
            return this->DescribeCloudNativeAPIGatewayCertificates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DescribeCloudNativeAPIGatewayConfigOutcome TseClient::DescribeCloudNativeAPIGatewayConfig(const DescribeCloudNativeAPIGatewayConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudNativeAPIGatewayConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudNativeAPIGatewayConfigResponse rsp = DescribeCloudNativeAPIGatewayConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudNativeAPIGatewayConfigOutcome(rsp);
        else
            return DescribeCloudNativeAPIGatewayConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudNativeAPIGatewayConfigOutcome(outcome.GetError());
    }
}

void TseClient::DescribeCloudNativeAPIGatewayConfigAsync(const DescribeCloudNativeAPIGatewayConfigRequest& request, const DescribeCloudNativeAPIGatewayConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCloudNativeAPIGatewayConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DescribeCloudNativeAPIGatewayConfigOutcomeCallable TseClient::DescribeCloudNativeAPIGatewayConfigCallable(const DescribeCloudNativeAPIGatewayConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCloudNativeAPIGatewayConfigOutcome()>>(
        [this, request]()
        {
            return this->DescribeCloudNativeAPIGatewayConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DescribeCloudNativeAPIGatewayInfoByIpOutcome TseClient::DescribeCloudNativeAPIGatewayInfoByIp(const DescribeCloudNativeAPIGatewayInfoByIpRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudNativeAPIGatewayInfoByIp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudNativeAPIGatewayInfoByIpResponse rsp = DescribeCloudNativeAPIGatewayInfoByIpResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudNativeAPIGatewayInfoByIpOutcome(rsp);
        else
            return DescribeCloudNativeAPIGatewayInfoByIpOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudNativeAPIGatewayInfoByIpOutcome(outcome.GetError());
    }
}

void TseClient::DescribeCloudNativeAPIGatewayInfoByIpAsync(const DescribeCloudNativeAPIGatewayInfoByIpRequest& request, const DescribeCloudNativeAPIGatewayInfoByIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCloudNativeAPIGatewayInfoByIp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DescribeCloudNativeAPIGatewayInfoByIpOutcomeCallable TseClient::DescribeCloudNativeAPIGatewayInfoByIpCallable(const DescribeCloudNativeAPIGatewayInfoByIpRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCloudNativeAPIGatewayInfoByIpOutcome()>>(
        [this, request]()
        {
            return this->DescribeCloudNativeAPIGatewayInfoByIp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DescribeCloudNativeAPIGatewayNodesOutcome TseClient::DescribeCloudNativeAPIGatewayNodes(const DescribeCloudNativeAPIGatewayNodesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudNativeAPIGatewayNodes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudNativeAPIGatewayNodesResponse rsp = DescribeCloudNativeAPIGatewayNodesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudNativeAPIGatewayNodesOutcome(rsp);
        else
            return DescribeCloudNativeAPIGatewayNodesOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudNativeAPIGatewayNodesOutcome(outcome.GetError());
    }
}

void TseClient::DescribeCloudNativeAPIGatewayNodesAsync(const DescribeCloudNativeAPIGatewayNodesRequest& request, const DescribeCloudNativeAPIGatewayNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCloudNativeAPIGatewayNodes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DescribeCloudNativeAPIGatewayNodesOutcomeCallable TseClient::DescribeCloudNativeAPIGatewayNodesCallable(const DescribeCloudNativeAPIGatewayNodesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCloudNativeAPIGatewayNodesOutcome()>>(
        [this, request]()
        {
            return this->DescribeCloudNativeAPIGatewayNodes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DescribeCloudNativeAPIGatewayPortsOutcome TseClient::DescribeCloudNativeAPIGatewayPorts(const DescribeCloudNativeAPIGatewayPortsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudNativeAPIGatewayPorts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudNativeAPIGatewayPortsResponse rsp = DescribeCloudNativeAPIGatewayPortsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudNativeAPIGatewayPortsOutcome(rsp);
        else
            return DescribeCloudNativeAPIGatewayPortsOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudNativeAPIGatewayPortsOutcome(outcome.GetError());
    }
}

void TseClient::DescribeCloudNativeAPIGatewayPortsAsync(const DescribeCloudNativeAPIGatewayPortsRequest& request, const DescribeCloudNativeAPIGatewayPortsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCloudNativeAPIGatewayPorts(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DescribeCloudNativeAPIGatewayPortsOutcomeCallable TseClient::DescribeCloudNativeAPIGatewayPortsCallable(const DescribeCloudNativeAPIGatewayPortsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCloudNativeAPIGatewayPortsOutcome()>>(
        [this, request]()
        {
            return this->DescribeCloudNativeAPIGatewayPorts(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DescribeCloudNativeAPIGatewayRouteRateLimitOutcome TseClient::DescribeCloudNativeAPIGatewayRouteRateLimit(const DescribeCloudNativeAPIGatewayRouteRateLimitRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudNativeAPIGatewayRouteRateLimit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudNativeAPIGatewayRouteRateLimitResponse rsp = DescribeCloudNativeAPIGatewayRouteRateLimitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudNativeAPIGatewayRouteRateLimitOutcome(rsp);
        else
            return DescribeCloudNativeAPIGatewayRouteRateLimitOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudNativeAPIGatewayRouteRateLimitOutcome(outcome.GetError());
    }
}

void TseClient::DescribeCloudNativeAPIGatewayRouteRateLimitAsync(const DescribeCloudNativeAPIGatewayRouteRateLimitRequest& request, const DescribeCloudNativeAPIGatewayRouteRateLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCloudNativeAPIGatewayRouteRateLimit(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DescribeCloudNativeAPIGatewayRouteRateLimitOutcomeCallable TseClient::DescribeCloudNativeAPIGatewayRouteRateLimitCallable(const DescribeCloudNativeAPIGatewayRouteRateLimitRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCloudNativeAPIGatewayRouteRateLimitOutcome()>>(
        [this, request]()
        {
            return this->DescribeCloudNativeAPIGatewayRouteRateLimit(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DescribeCloudNativeAPIGatewayRoutesOutcome TseClient::DescribeCloudNativeAPIGatewayRoutes(const DescribeCloudNativeAPIGatewayRoutesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudNativeAPIGatewayRoutes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudNativeAPIGatewayRoutesResponse rsp = DescribeCloudNativeAPIGatewayRoutesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudNativeAPIGatewayRoutesOutcome(rsp);
        else
            return DescribeCloudNativeAPIGatewayRoutesOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudNativeAPIGatewayRoutesOutcome(outcome.GetError());
    }
}

void TseClient::DescribeCloudNativeAPIGatewayRoutesAsync(const DescribeCloudNativeAPIGatewayRoutesRequest& request, const DescribeCloudNativeAPIGatewayRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCloudNativeAPIGatewayRoutes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DescribeCloudNativeAPIGatewayRoutesOutcomeCallable TseClient::DescribeCloudNativeAPIGatewayRoutesCallable(const DescribeCloudNativeAPIGatewayRoutesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCloudNativeAPIGatewayRoutesOutcome()>>(
        [this, request]()
        {
            return this->DescribeCloudNativeAPIGatewayRoutes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DescribeCloudNativeAPIGatewayServiceRateLimitOutcome TseClient::DescribeCloudNativeAPIGatewayServiceRateLimit(const DescribeCloudNativeAPIGatewayServiceRateLimitRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudNativeAPIGatewayServiceRateLimit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudNativeAPIGatewayServiceRateLimitResponse rsp = DescribeCloudNativeAPIGatewayServiceRateLimitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudNativeAPIGatewayServiceRateLimitOutcome(rsp);
        else
            return DescribeCloudNativeAPIGatewayServiceRateLimitOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudNativeAPIGatewayServiceRateLimitOutcome(outcome.GetError());
    }
}

void TseClient::DescribeCloudNativeAPIGatewayServiceRateLimitAsync(const DescribeCloudNativeAPIGatewayServiceRateLimitRequest& request, const DescribeCloudNativeAPIGatewayServiceRateLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCloudNativeAPIGatewayServiceRateLimit(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DescribeCloudNativeAPIGatewayServiceRateLimitOutcomeCallable TseClient::DescribeCloudNativeAPIGatewayServiceRateLimitCallable(const DescribeCloudNativeAPIGatewayServiceRateLimitRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCloudNativeAPIGatewayServiceRateLimitOutcome()>>(
        [this, request]()
        {
            return this->DescribeCloudNativeAPIGatewayServiceRateLimit(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DescribeCloudNativeAPIGatewayServicesOutcome TseClient::DescribeCloudNativeAPIGatewayServices(const DescribeCloudNativeAPIGatewayServicesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudNativeAPIGatewayServices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudNativeAPIGatewayServicesResponse rsp = DescribeCloudNativeAPIGatewayServicesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudNativeAPIGatewayServicesOutcome(rsp);
        else
            return DescribeCloudNativeAPIGatewayServicesOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudNativeAPIGatewayServicesOutcome(outcome.GetError());
    }
}

void TseClient::DescribeCloudNativeAPIGatewayServicesAsync(const DescribeCloudNativeAPIGatewayServicesRequest& request, const DescribeCloudNativeAPIGatewayServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCloudNativeAPIGatewayServices(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DescribeCloudNativeAPIGatewayServicesOutcomeCallable TseClient::DescribeCloudNativeAPIGatewayServicesCallable(const DescribeCloudNativeAPIGatewayServicesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCloudNativeAPIGatewayServicesOutcome()>>(
        [this, request]()
        {
            return this->DescribeCloudNativeAPIGatewayServices(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DescribeCloudNativeAPIGatewayUpstreamOutcome TseClient::DescribeCloudNativeAPIGatewayUpstream(const DescribeCloudNativeAPIGatewayUpstreamRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudNativeAPIGatewayUpstream");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudNativeAPIGatewayUpstreamResponse rsp = DescribeCloudNativeAPIGatewayUpstreamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudNativeAPIGatewayUpstreamOutcome(rsp);
        else
            return DescribeCloudNativeAPIGatewayUpstreamOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudNativeAPIGatewayUpstreamOutcome(outcome.GetError());
    }
}

void TseClient::DescribeCloudNativeAPIGatewayUpstreamAsync(const DescribeCloudNativeAPIGatewayUpstreamRequest& request, const DescribeCloudNativeAPIGatewayUpstreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCloudNativeAPIGatewayUpstream(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DescribeCloudNativeAPIGatewayUpstreamOutcomeCallable TseClient::DescribeCloudNativeAPIGatewayUpstreamCallable(const DescribeCloudNativeAPIGatewayUpstreamRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCloudNativeAPIGatewayUpstreamOutcome()>>(
        [this, request]()
        {
            return this->DescribeCloudNativeAPIGatewayUpstream(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DescribeCloudNativeAPIGatewaysOutcome TseClient::DescribeCloudNativeAPIGateways(const DescribeCloudNativeAPIGatewaysRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudNativeAPIGateways");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudNativeAPIGatewaysResponse rsp = DescribeCloudNativeAPIGatewaysResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudNativeAPIGatewaysOutcome(rsp);
        else
            return DescribeCloudNativeAPIGatewaysOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudNativeAPIGatewaysOutcome(outcome.GetError());
    }
}

void TseClient::DescribeCloudNativeAPIGatewaysAsync(const DescribeCloudNativeAPIGatewaysRequest& request, const DescribeCloudNativeAPIGatewaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCloudNativeAPIGateways(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DescribeCloudNativeAPIGatewaysOutcomeCallable TseClient::DescribeCloudNativeAPIGatewaysCallable(const DescribeCloudNativeAPIGatewaysRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCloudNativeAPIGatewaysOutcome()>>(
        [this, request]()
        {
            return this->DescribeCloudNativeAPIGateways(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DescribeConfigFileOutcome TseClient::DescribeConfigFile(const DescribeConfigFileRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConfigFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConfigFileResponse rsp = DescribeConfigFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConfigFileOutcome(rsp);
        else
            return DescribeConfigFileOutcome(o.GetError());
    }
    else
    {
        return DescribeConfigFileOutcome(outcome.GetError());
    }
}

void TseClient::DescribeConfigFileAsync(const DescribeConfigFileRequest& request, const DescribeConfigFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeConfigFile(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DescribeConfigFileOutcomeCallable TseClient::DescribeConfigFileCallable(const DescribeConfigFileRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeConfigFileOutcome()>>(
        [this, request]()
        {
            return this->DescribeConfigFile(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DescribeConfigFileGroupsOutcome TseClient::DescribeConfigFileGroups(const DescribeConfigFileGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConfigFileGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConfigFileGroupsResponse rsp = DescribeConfigFileGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConfigFileGroupsOutcome(rsp);
        else
            return DescribeConfigFileGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeConfigFileGroupsOutcome(outcome.GetError());
    }
}

void TseClient::DescribeConfigFileGroupsAsync(const DescribeConfigFileGroupsRequest& request, const DescribeConfigFileGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeConfigFileGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DescribeConfigFileGroupsOutcomeCallable TseClient::DescribeConfigFileGroupsCallable(const DescribeConfigFileGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeConfigFileGroupsOutcome()>>(
        [this, request]()
        {
            return this->DescribeConfigFileGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DescribeConfigFileReleaseOutcome TseClient::DescribeConfigFileRelease(const DescribeConfigFileReleaseRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConfigFileRelease");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConfigFileReleaseResponse rsp = DescribeConfigFileReleaseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConfigFileReleaseOutcome(rsp);
        else
            return DescribeConfigFileReleaseOutcome(o.GetError());
    }
    else
    {
        return DescribeConfigFileReleaseOutcome(outcome.GetError());
    }
}

void TseClient::DescribeConfigFileReleaseAsync(const DescribeConfigFileReleaseRequest& request, const DescribeConfigFileReleaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeConfigFileRelease(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DescribeConfigFileReleaseOutcomeCallable TseClient::DescribeConfigFileReleaseCallable(const DescribeConfigFileReleaseRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeConfigFileReleaseOutcome()>>(
        [this, request]()
        {
            return this->DescribeConfigFileRelease(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DescribeConfigFileReleaseHistoriesOutcome TseClient::DescribeConfigFileReleaseHistories(const DescribeConfigFileReleaseHistoriesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConfigFileReleaseHistories");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConfigFileReleaseHistoriesResponse rsp = DescribeConfigFileReleaseHistoriesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConfigFileReleaseHistoriesOutcome(rsp);
        else
            return DescribeConfigFileReleaseHistoriesOutcome(o.GetError());
    }
    else
    {
        return DescribeConfigFileReleaseHistoriesOutcome(outcome.GetError());
    }
}

void TseClient::DescribeConfigFileReleaseHistoriesAsync(const DescribeConfigFileReleaseHistoriesRequest& request, const DescribeConfigFileReleaseHistoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeConfigFileReleaseHistories(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DescribeConfigFileReleaseHistoriesOutcomeCallable TseClient::DescribeConfigFileReleaseHistoriesCallable(const DescribeConfigFileReleaseHistoriesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeConfigFileReleaseHistoriesOutcome()>>(
        [this, request]()
        {
            return this->DescribeConfigFileReleaseHistories(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DescribeConfigFileReleaseVersionsOutcome TseClient::DescribeConfigFileReleaseVersions(const DescribeConfigFileReleaseVersionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConfigFileReleaseVersions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConfigFileReleaseVersionsResponse rsp = DescribeConfigFileReleaseVersionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConfigFileReleaseVersionsOutcome(rsp);
        else
            return DescribeConfigFileReleaseVersionsOutcome(o.GetError());
    }
    else
    {
        return DescribeConfigFileReleaseVersionsOutcome(outcome.GetError());
    }
}

void TseClient::DescribeConfigFileReleaseVersionsAsync(const DescribeConfigFileReleaseVersionsRequest& request, const DescribeConfigFileReleaseVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeConfigFileReleaseVersions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DescribeConfigFileReleaseVersionsOutcomeCallable TseClient::DescribeConfigFileReleaseVersionsCallable(const DescribeConfigFileReleaseVersionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeConfigFileReleaseVersionsOutcome()>>(
        [this, request]()
        {
            return this->DescribeConfigFileReleaseVersions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DescribeConfigFileReleasesOutcome TseClient::DescribeConfigFileReleases(const DescribeConfigFileReleasesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConfigFileReleases");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConfigFileReleasesResponse rsp = DescribeConfigFileReleasesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConfigFileReleasesOutcome(rsp);
        else
            return DescribeConfigFileReleasesOutcome(o.GetError());
    }
    else
    {
        return DescribeConfigFileReleasesOutcome(outcome.GetError());
    }
}

void TseClient::DescribeConfigFileReleasesAsync(const DescribeConfigFileReleasesRequest& request, const DescribeConfigFileReleasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeConfigFileReleases(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DescribeConfigFileReleasesOutcomeCallable TseClient::DescribeConfigFileReleasesCallable(const DescribeConfigFileReleasesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeConfigFileReleasesOutcome()>>(
        [this, request]()
        {
            return this->DescribeConfigFileReleases(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DescribeConfigFilesOutcome TseClient::DescribeConfigFiles(const DescribeConfigFilesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConfigFiles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConfigFilesResponse rsp = DescribeConfigFilesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConfigFilesOutcome(rsp);
        else
            return DescribeConfigFilesOutcome(o.GetError());
    }
    else
    {
        return DescribeConfigFilesOutcome(outcome.GetError());
    }
}

void TseClient::DescribeConfigFilesAsync(const DescribeConfigFilesRequest& request, const DescribeConfigFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeConfigFiles(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DescribeConfigFilesOutcomeCallable TseClient::DescribeConfigFilesCallable(const DescribeConfigFilesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeConfigFilesOutcome()>>(
        [this, request]()
        {
            return this->DescribeConfigFiles(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DescribeConfigFilesByGroupOutcome TseClient::DescribeConfigFilesByGroup(const DescribeConfigFilesByGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConfigFilesByGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConfigFilesByGroupResponse rsp = DescribeConfigFilesByGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConfigFilesByGroupOutcome(rsp);
        else
            return DescribeConfigFilesByGroupOutcome(o.GetError());
    }
    else
    {
        return DescribeConfigFilesByGroupOutcome(outcome.GetError());
    }
}

void TseClient::DescribeConfigFilesByGroupAsync(const DescribeConfigFilesByGroupRequest& request, const DescribeConfigFilesByGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeConfigFilesByGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DescribeConfigFilesByGroupOutcomeCallable TseClient::DescribeConfigFilesByGroupCallable(const DescribeConfigFilesByGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeConfigFilesByGroupOutcome()>>(
        [this, request]()
        {
            return this->DescribeConfigFilesByGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DescribeGovernanceAliasesOutcome TseClient::DescribeGovernanceAliases(const DescribeGovernanceAliasesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGovernanceAliases");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGovernanceAliasesResponse rsp = DescribeGovernanceAliasesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGovernanceAliasesOutcome(rsp);
        else
            return DescribeGovernanceAliasesOutcome(o.GetError());
    }
    else
    {
        return DescribeGovernanceAliasesOutcome(outcome.GetError());
    }
}

void TseClient::DescribeGovernanceAliasesAsync(const DescribeGovernanceAliasesRequest& request, const DescribeGovernanceAliasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGovernanceAliases(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DescribeGovernanceAliasesOutcomeCallable TseClient::DescribeGovernanceAliasesCallable(const DescribeGovernanceAliasesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGovernanceAliasesOutcome()>>(
        [this, request]()
        {
            return this->DescribeGovernanceAliases(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DescribeGovernanceInstancesOutcome TseClient::DescribeGovernanceInstances(const DescribeGovernanceInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGovernanceInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGovernanceInstancesResponse rsp = DescribeGovernanceInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGovernanceInstancesOutcome(rsp);
        else
            return DescribeGovernanceInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeGovernanceInstancesOutcome(outcome.GetError());
    }
}

void TseClient::DescribeGovernanceInstancesAsync(const DescribeGovernanceInstancesRequest& request, const DescribeGovernanceInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGovernanceInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DescribeGovernanceInstancesOutcomeCallable TseClient::DescribeGovernanceInstancesCallable(const DescribeGovernanceInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGovernanceInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeGovernanceInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DescribeGovernanceNamespacesOutcome TseClient::DescribeGovernanceNamespaces(const DescribeGovernanceNamespacesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGovernanceNamespaces");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGovernanceNamespacesResponse rsp = DescribeGovernanceNamespacesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGovernanceNamespacesOutcome(rsp);
        else
            return DescribeGovernanceNamespacesOutcome(o.GetError());
    }
    else
    {
        return DescribeGovernanceNamespacesOutcome(outcome.GetError());
    }
}

void TseClient::DescribeGovernanceNamespacesAsync(const DescribeGovernanceNamespacesRequest& request, const DescribeGovernanceNamespacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGovernanceNamespaces(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DescribeGovernanceNamespacesOutcomeCallable TseClient::DescribeGovernanceNamespacesCallable(const DescribeGovernanceNamespacesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGovernanceNamespacesOutcome()>>(
        [this, request]()
        {
            return this->DescribeGovernanceNamespaces(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DescribeGovernanceServiceContractVersionsOutcome TseClient::DescribeGovernanceServiceContractVersions(const DescribeGovernanceServiceContractVersionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGovernanceServiceContractVersions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGovernanceServiceContractVersionsResponse rsp = DescribeGovernanceServiceContractVersionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGovernanceServiceContractVersionsOutcome(rsp);
        else
            return DescribeGovernanceServiceContractVersionsOutcome(o.GetError());
    }
    else
    {
        return DescribeGovernanceServiceContractVersionsOutcome(outcome.GetError());
    }
}

void TseClient::DescribeGovernanceServiceContractVersionsAsync(const DescribeGovernanceServiceContractVersionsRequest& request, const DescribeGovernanceServiceContractVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGovernanceServiceContractVersions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DescribeGovernanceServiceContractVersionsOutcomeCallable TseClient::DescribeGovernanceServiceContractVersionsCallable(const DescribeGovernanceServiceContractVersionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGovernanceServiceContractVersionsOutcome()>>(
        [this, request]()
        {
            return this->DescribeGovernanceServiceContractVersions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DescribeGovernanceServiceContractsOutcome TseClient::DescribeGovernanceServiceContracts(const DescribeGovernanceServiceContractsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGovernanceServiceContracts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGovernanceServiceContractsResponse rsp = DescribeGovernanceServiceContractsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGovernanceServiceContractsOutcome(rsp);
        else
            return DescribeGovernanceServiceContractsOutcome(o.GetError());
    }
    else
    {
        return DescribeGovernanceServiceContractsOutcome(outcome.GetError());
    }
}

void TseClient::DescribeGovernanceServiceContractsAsync(const DescribeGovernanceServiceContractsRequest& request, const DescribeGovernanceServiceContractsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGovernanceServiceContracts(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DescribeGovernanceServiceContractsOutcomeCallable TseClient::DescribeGovernanceServiceContractsCallable(const DescribeGovernanceServiceContractsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGovernanceServiceContractsOutcome()>>(
        [this, request]()
        {
            return this->DescribeGovernanceServiceContracts(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DescribeGovernanceServicesOutcome TseClient::DescribeGovernanceServices(const DescribeGovernanceServicesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGovernanceServices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGovernanceServicesResponse rsp = DescribeGovernanceServicesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGovernanceServicesOutcome(rsp);
        else
            return DescribeGovernanceServicesOutcome(o.GetError());
    }
    else
    {
        return DescribeGovernanceServicesOutcome(outcome.GetError());
    }
}

void TseClient::DescribeGovernanceServicesAsync(const DescribeGovernanceServicesRequest& request, const DescribeGovernanceServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGovernanceServices(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DescribeGovernanceServicesOutcomeCallable TseClient::DescribeGovernanceServicesCallable(const DescribeGovernanceServicesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGovernanceServicesOutcome()>>(
        [this, request]()
        {
            return this->DescribeGovernanceServices(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DescribeInstanceTagInfosOutcome TseClient::DescribeInstanceTagInfos(const DescribeInstanceTagInfosRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceTagInfos");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceTagInfosResponse rsp = DescribeInstanceTagInfosResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceTagInfosOutcome(rsp);
        else
            return DescribeInstanceTagInfosOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceTagInfosOutcome(outcome.GetError());
    }
}

void TseClient::DescribeInstanceTagInfosAsync(const DescribeInstanceTagInfosRequest& request, const DescribeInstanceTagInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceTagInfos(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DescribeInstanceTagInfosOutcomeCallable TseClient::DescribeInstanceTagInfosCallable(const DescribeInstanceTagInfosRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceTagInfosOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceTagInfos(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DescribeNacosReplicasOutcome TseClient::DescribeNacosReplicas(const DescribeNacosReplicasRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNacosReplicas");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNacosReplicasResponse rsp = DescribeNacosReplicasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNacosReplicasOutcome(rsp);
        else
            return DescribeNacosReplicasOutcome(o.GetError());
    }
    else
    {
        return DescribeNacosReplicasOutcome(outcome.GetError());
    }
}

void TseClient::DescribeNacosReplicasAsync(const DescribeNacosReplicasRequest& request, const DescribeNacosReplicasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNacosReplicas(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DescribeNacosReplicasOutcomeCallable TseClient::DescribeNacosReplicasCallable(const DescribeNacosReplicasRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNacosReplicasOutcome()>>(
        [this, request]()
        {
            return this->DescribeNacosReplicas(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DescribeNacosServerInterfacesOutcome TseClient::DescribeNacosServerInterfaces(const DescribeNacosServerInterfacesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNacosServerInterfaces");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNacosServerInterfacesResponse rsp = DescribeNacosServerInterfacesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNacosServerInterfacesOutcome(rsp);
        else
            return DescribeNacosServerInterfacesOutcome(o.GetError());
    }
    else
    {
        return DescribeNacosServerInterfacesOutcome(outcome.GetError());
    }
}

void TseClient::DescribeNacosServerInterfacesAsync(const DescribeNacosServerInterfacesRequest& request, const DescribeNacosServerInterfacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNacosServerInterfaces(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DescribeNacosServerInterfacesOutcomeCallable TseClient::DescribeNacosServerInterfacesCallable(const DescribeNacosServerInterfacesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNacosServerInterfacesOutcome()>>(
        [this, request]()
        {
            return this->DescribeNacosServerInterfaces(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DescribeNativeGatewayServerGroupsOutcome TseClient::DescribeNativeGatewayServerGroups(const DescribeNativeGatewayServerGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNativeGatewayServerGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNativeGatewayServerGroupsResponse rsp = DescribeNativeGatewayServerGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNativeGatewayServerGroupsOutcome(rsp);
        else
            return DescribeNativeGatewayServerGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeNativeGatewayServerGroupsOutcome(outcome.GetError());
    }
}

void TseClient::DescribeNativeGatewayServerGroupsAsync(const DescribeNativeGatewayServerGroupsRequest& request, const DescribeNativeGatewayServerGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNativeGatewayServerGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DescribeNativeGatewayServerGroupsOutcomeCallable TseClient::DescribeNativeGatewayServerGroupsCallable(const DescribeNativeGatewayServerGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNativeGatewayServerGroupsOutcome()>>(
        [this, request]()
        {
            return this->DescribeNativeGatewayServerGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DescribeNativeGatewayServiceSourcesOutcome TseClient::DescribeNativeGatewayServiceSources(const DescribeNativeGatewayServiceSourcesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNativeGatewayServiceSources");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNativeGatewayServiceSourcesResponse rsp = DescribeNativeGatewayServiceSourcesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNativeGatewayServiceSourcesOutcome(rsp);
        else
            return DescribeNativeGatewayServiceSourcesOutcome(o.GetError());
    }
    else
    {
        return DescribeNativeGatewayServiceSourcesOutcome(outcome.GetError());
    }
}

void TseClient::DescribeNativeGatewayServiceSourcesAsync(const DescribeNativeGatewayServiceSourcesRequest& request, const DescribeNativeGatewayServiceSourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNativeGatewayServiceSources(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DescribeNativeGatewayServiceSourcesOutcomeCallable TseClient::DescribeNativeGatewayServiceSourcesCallable(const DescribeNativeGatewayServiceSourcesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNativeGatewayServiceSourcesOutcome()>>(
        [this, request]()
        {
            return this->DescribeNativeGatewayServiceSources(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DescribeOneCloudNativeAPIGatewayServiceOutcome TseClient::DescribeOneCloudNativeAPIGatewayService(const DescribeOneCloudNativeAPIGatewayServiceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOneCloudNativeAPIGatewayService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOneCloudNativeAPIGatewayServiceResponse rsp = DescribeOneCloudNativeAPIGatewayServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOneCloudNativeAPIGatewayServiceOutcome(rsp);
        else
            return DescribeOneCloudNativeAPIGatewayServiceOutcome(o.GetError());
    }
    else
    {
        return DescribeOneCloudNativeAPIGatewayServiceOutcome(outcome.GetError());
    }
}

void TseClient::DescribeOneCloudNativeAPIGatewayServiceAsync(const DescribeOneCloudNativeAPIGatewayServiceRequest& request, const DescribeOneCloudNativeAPIGatewayServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOneCloudNativeAPIGatewayService(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DescribeOneCloudNativeAPIGatewayServiceOutcomeCallable TseClient::DescribeOneCloudNativeAPIGatewayServiceCallable(const DescribeOneCloudNativeAPIGatewayServiceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOneCloudNativeAPIGatewayServiceOutcome()>>(
        [this, request]()
        {
            return this->DescribeOneCloudNativeAPIGatewayService(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DescribePublicAddressConfigOutcome TseClient::DescribePublicAddressConfig(const DescribePublicAddressConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePublicAddressConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePublicAddressConfigResponse rsp = DescribePublicAddressConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePublicAddressConfigOutcome(rsp);
        else
            return DescribePublicAddressConfigOutcome(o.GetError());
    }
    else
    {
        return DescribePublicAddressConfigOutcome(outcome.GetError());
    }
}

void TseClient::DescribePublicAddressConfigAsync(const DescribePublicAddressConfigRequest& request, const DescribePublicAddressConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePublicAddressConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DescribePublicAddressConfigOutcomeCallable TseClient::DescribePublicAddressConfigCallable(const DescribePublicAddressConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePublicAddressConfigOutcome()>>(
        [this, request]()
        {
            return this->DescribePublicAddressConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DescribePublicNetworkOutcome TseClient::DescribePublicNetwork(const DescribePublicNetworkRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePublicNetwork");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePublicNetworkResponse rsp = DescribePublicNetworkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePublicNetworkOutcome(rsp);
        else
            return DescribePublicNetworkOutcome(o.GetError());
    }
    else
    {
        return DescribePublicNetworkOutcome(outcome.GetError());
    }
}

void TseClient::DescribePublicNetworkAsync(const DescribePublicNetworkRequest& request, const DescribePublicNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePublicNetwork(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DescribePublicNetworkOutcomeCallable TseClient::DescribePublicNetworkCallable(const DescribePublicNetworkRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePublicNetworkOutcome()>>(
        [this, request]()
        {
            return this->DescribePublicNetwork(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DescribeSREInstanceAccessAddressOutcome TseClient::DescribeSREInstanceAccessAddress(const DescribeSREInstanceAccessAddressRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSREInstanceAccessAddress");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSREInstanceAccessAddressResponse rsp = DescribeSREInstanceAccessAddressResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSREInstanceAccessAddressOutcome(rsp);
        else
            return DescribeSREInstanceAccessAddressOutcome(o.GetError());
    }
    else
    {
        return DescribeSREInstanceAccessAddressOutcome(outcome.GetError());
    }
}

void TseClient::DescribeSREInstanceAccessAddressAsync(const DescribeSREInstanceAccessAddressRequest& request, const DescribeSREInstanceAccessAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSREInstanceAccessAddress(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DescribeSREInstanceAccessAddressOutcomeCallable TseClient::DescribeSREInstanceAccessAddressCallable(const DescribeSREInstanceAccessAddressRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSREInstanceAccessAddressOutcome()>>(
        [this, request]()
        {
            return this->DescribeSREInstanceAccessAddress(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DescribeSREInstancesOutcome TseClient::DescribeSREInstances(const DescribeSREInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSREInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSREInstancesResponse rsp = DescribeSREInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSREInstancesOutcome(rsp);
        else
            return DescribeSREInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeSREInstancesOutcome(outcome.GetError());
    }
}

void TseClient::DescribeSREInstancesAsync(const DescribeSREInstancesRequest& request, const DescribeSREInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSREInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DescribeSREInstancesOutcomeCallable TseClient::DescribeSREInstancesCallable(const DescribeSREInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSREInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeSREInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DescribeUpstreamHealthCheckConfigOutcome TseClient::DescribeUpstreamHealthCheckConfig(const DescribeUpstreamHealthCheckConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUpstreamHealthCheckConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUpstreamHealthCheckConfigResponse rsp = DescribeUpstreamHealthCheckConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUpstreamHealthCheckConfigOutcome(rsp);
        else
            return DescribeUpstreamHealthCheckConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeUpstreamHealthCheckConfigOutcome(outcome.GetError());
    }
}

void TseClient::DescribeUpstreamHealthCheckConfigAsync(const DescribeUpstreamHealthCheckConfigRequest& request, const DescribeUpstreamHealthCheckConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUpstreamHealthCheckConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DescribeUpstreamHealthCheckConfigOutcomeCallable TseClient::DescribeUpstreamHealthCheckConfigCallable(const DescribeUpstreamHealthCheckConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUpstreamHealthCheckConfigOutcome()>>(
        [this, request]()
        {
            return this->DescribeUpstreamHealthCheckConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DescribeWafDomainsOutcome TseClient::DescribeWafDomains(const DescribeWafDomainsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWafDomains");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWafDomainsResponse rsp = DescribeWafDomainsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWafDomainsOutcome(rsp);
        else
            return DescribeWafDomainsOutcome(o.GetError());
    }
    else
    {
        return DescribeWafDomainsOutcome(outcome.GetError());
    }
}

void TseClient::DescribeWafDomainsAsync(const DescribeWafDomainsRequest& request, const DescribeWafDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWafDomains(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DescribeWafDomainsOutcomeCallable TseClient::DescribeWafDomainsCallable(const DescribeWafDomainsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWafDomainsOutcome()>>(
        [this, request]()
        {
            return this->DescribeWafDomains(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DescribeWafProtectionOutcome TseClient::DescribeWafProtection(const DescribeWafProtectionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWafProtection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWafProtectionResponse rsp = DescribeWafProtectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWafProtectionOutcome(rsp);
        else
            return DescribeWafProtectionOutcome(o.GetError());
    }
    else
    {
        return DescribeWafProtectionOutcome(outcome.GetError());
    }
}

void TseClient::DescribeWafProtectionAsync(const DescribeWafProtectionRequest& request, const DescribeWafProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWafProtection(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DescribeWafProtectionOutcomeCallable TseClient::DescribeWafProtectionCallable(const DescribeWafProtectionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWafProtectionOutcome()>>(
        [this, request]()
        {
            return this->DescribeWafProtection(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DescribeZookeeperReplicasOutcome TseClient::DescribeZookeeperReplicas(const DescribeZookeeperReplicasRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeZookeeperReplicas");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeZookeeperReplicasResponse rsp = DescribeZookeeperReplicasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeZookeeperReplicasOutcome(rsp);
        else
            return DescribeZookeeperReplicasOutcome(o.GetError());
    }
    else
    {
        return DescribeZookeeperReplicasOutcome(outcome.GetError());
    }
}

void TseClient::DescribeZookeeperReplicasAsync(const DescribeZookeeperReplicasRequest& request, const DescribeZookeeperReplicasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeZookeeperReplicas(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DescribeZookeeperReplicasOutcomeCallable TseClient::DescribeZookeeperReplicasCallable(const DescribeZookeeperReplicasRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeZookeeperReplicasOutcome()>>(
        [this, request]()
        {
            return this->DescribeZookeeperReplicas(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DescribeZookeeperServerInterfacesOutcome TseClient::DescribeZookeeperServerInterfaces(const DescribeZookeeperServerInterfacesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeZookeeperServerInterfaces");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeZookeeperServerInterfacesResponse rsp = DescribeZookeeperServerInterfacesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeZookeeperServerInterfacesOutcome(rsp);
        else
            return DescribeZookeeperServerInterfacesOutcome(o.GetError());
    }
    else
    {
        return DescribeZookeeperServerInterfacesOutcome(outcome.GetError());
    }
}

void TseClient::DescribeZookeeperServerInterfacesAsync(const DescribeZookeeperServerInterfacesRequest& request, const DescribeZookeeperServerInterfacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeZookeeperServerInterfaces(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DescribeZookeeperServerInterfacesOutcomeCallable TseClient::DescribeZookeeperServerInterfacesCallable(const DescribeZookeeperServerInterfacesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeZookeeperServerInterfacesOutcome()>>(
        [this, request]()
        {
            return this->DescribeZookeeperServerInterfaces(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::ModifyAutoScalerResourceStrategyOutcome TseClient::ModifyAutoScalerResourceStrategy(const ModifyAutoScalerResourceStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAutoScalerResourceStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAutoScalerResourceStrategyResponse rsp = ModifyAutoScalerResourceStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAutoScalerResourceStrategyOutcome(rsp);
        else
            return ModifyAutoScalerResourceStrategyOutcome(o.GetError());
    }
    else
    {
        return ModifyAutoScalerResourceStrategyOutcome(outcome.GetError());
    }
}

void TseClient::ModifyAutoScalerResourceStrategyAsync(const ModifyAutoScalerResourceStrategyRequest& request, const ModifyAutoScalerResourceStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAutoScalerResourceStrategy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::ModifyAutoScalerResourceStrategyOutcomeCallable TseClient::ModifyAutoScalerResourceStrategyCallable(const ModifyAutoScalerResourceStrategyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAutoScalerResourceStrategyOutcome()>>(
        [this, request]()
        {
            return this->ModifyAutoScalerResourceStrategy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::ModifyCloudNativeAPIGatewayOutcome TseClient::ModifyCloudNativeAPIGateway(const ModifyCloudNativeAPIGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCloudNativeAPIGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCloudNativeAPIGatewayResponse rsp = ModifyCloudNativeAPIGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCloudNativeAPIGatewayOutcome(rsp);
        else
            return ModifyCloudNativeAPIGatewayOutcome(o.GetError());
    }
    else
    {
        return ModifyCloudNativeAPIGatewayOutcome(outcome.GetError());
    }
}

void TseClient::ModifyCloudNativeAPIGatewayAsync(const ModifyCloudNativeAPIGatewayRequest& request, const ModifyCloudNativeAPIGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCloudNativeAPIGateway(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::ModifyCloudNativeAPIGatewayOutcomeCallable TseClient::ModifyCloudNativeAPIGatewayCallable(const ModifyCloudNativeAPIGatewayRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCloudNativeAPIGatewayOutcome()>>(
        [this, request]()
        {
            return this->ModifyCloudNativeAPIGateway(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::ModifyCloudNativeAPIGatewayCanaryRuleOutcome TseClient::ModifyCloudNativeAPIGatewayCanaryRule(const ModifyCloudNativeAPIGatewayCanaryRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCloudNativeAPIGatewayCanaryRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCloudNativeAPIGatewayCanaryRuleResponse rsp = ModifyCloudNativeAPIGatewayCanaryRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCloudNativeAPIGatewayCanaryRuleOutcome(rsp);
        else
            return ModifyCloudNativeAPIGatewayCanaryRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyCloudNativeAPIGatewayCanaryRuleOutcome(outcome.GetError());
    }
}

void TseClient::ModifyCloudNativeAPIGatewayCanaryRuleAsync(const ModifyCloudNativeAPIGatewayCanaryRuleRequest& request, const ModifyCloudNativeAPIGatewayCanaryRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCloudNativeAPIGatewayCanaryRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::ModifyCloudNativeAPIGatewayCanaryRuleOutcomeCallable TseClient::ModifyCloudNativeAPIGatewayCanaryRuleCallable(const ModifyCloudNativeAPIGatewayCanaryRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCloudNativeAPIGatewayCanaryRuleOutcome()>>(
        [this, request]()
        {
            return this->ModifyCloudNativeAPIGatewayCanaryRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::ModifyCloudNativeAPIGatewayCertificateOutcome TseClient::ModifyCloudNativeAPIGatewayCertificate(const ModifyCloudNativeAPIGatewayCertificateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCloudNativeAPIGatewayCertificate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCloudNativeAPIGatewayCertificateResponse rsp = ModifyCloudNativeAPIGatewayCertificateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCloudNativeAPIGatewayCertificateOutcome(rsp);
        else
            return ModifyCloudNativeAPIGatewayCertificateOutcome(o.GetError());
    }
    else
    {
        return ModifyCloudNativeAPIGatewayCertificateOutcome(outcome.GetError());
    }
}

void TseClient::ModifyCloudNativeAPIGatewayCertificateAsync(const ModifyCloudNativeAPIGatewayCertificateRequest& request, const ModifyCloudNativeAPIGatewayCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCloudNativeAPIGatewayCertificate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::ModifyCloudNativeAPIGatewayCertificateOutcomeCallable TseClient::ModifyCloudNativeAPIGatewayCertificateCallable(const ModifyCloudNativeAPIGatewayCertificateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCloudNativeAPIGatewayCertificateOutcome()>>(
        [this, request]()
        {
            return this->ModifyCloudNativeAPIGatewayCertificate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::ModifyCloudNativeAPIGatewayRouteOutcome TseClient::ModifyCloudNativeAPIGatewayRoute(const ModifyCloudNativeAPIGatewayRouteRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCloudNativeAPIGatewayRoute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCloudNativeAPIGatewayRouteResponse rsp = ModifyCloudNativeAPIGatewayRouteResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCloudNativeAPIGatewayRouteOutcome(rsp);
        else
            return ModifyCloudNativeAPIGatewayRouteOutcome(o.GetError());
    }
    else
    {
        return ModifyCloudNativeAPIGatewayRouteOutcome(outcome.GetError());
    }
}

void TseClient::ModifyCloudNativeAPIGatewayRouteAsync(const ModifyCloudNativeAPIGatewayRouteRequest& request, const ModifyCloudNativeAPIGatewayRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCloudNativeAPIGatewayRoute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::ModifyCloudNativeAPIGatewayRouteOutcomeCallable TseClient::ModifyCloudNativeAPIGatewayRouteCallable(const ModifyCloudNativeAPIGatewayRouteRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCloudNativeAPIGatewayRouteOutcome()>>(
        [this, request]()
        {
            return this->ModifyCloudNativeAPIGatewayRoute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::ModifyCloudNativeAPIGatewayRouteRateLimitOutcome TseClient::ModifyCloudNativeAPIGatewayRouteRateLimit(const ModifyCloudNativeAPIGatewayRouteRateLimitRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCloudNativeAPIGatewayRouteRateLimit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCloudNativeAPIGatewayRouteRateLimitResponse rsp = ModifyCloudNativeAPIGatewayRouteRateLimitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCloudNativeAPIGatewayRouteRateLimitOutcome(rsp);
        else
            return ModifyCloudNativeAPIGatewayRouteRateLimitOutcome(o.GetError());
    }
    else
    {
        return ModifyCloudNativeAPIGatewayRouteRateLimitOutcome(outcome.GetError());
    }
}

void TseClient::ModifyCloudNativeAPIGatewayRouteRateLimitAsync(const ModifyCloudNativeAPIGatewayRouteRateLimitRequest& request, const ModifyCloudNativeAPIGatewayRouteRateLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCloudNativeAPIGatewayRouteRateLimit(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::ModifyCloudNativeAPIGatewayRouteRateLimitOutcomeCallable TseClient::ModifyCloudNativeAPIGatewayRouteRateLimitCallable(const ModifyCloudNativeAPIGatewayRouteRateLimitRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCloudNativeAPIGatewayRouteRateLimitOutcome()>>(
        [this, request]()
        {
            return this->ModifyCloudNativeAPIGatewayRouteRateLimit(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::ModifyCloudNativeAPIGatewayServiceOutcome TseClient::ModifyCloudNativeAPIGatewayService(const ModifyCloudNativeAPIGatewayServiceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCloudNativeAPIGatewayService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCloudNativeAPIGatewayServiceResponse rsp = ModifyCloudNativeAPIGatewayServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCloudNativeAPIGatewayServiceOutcome(rsp);
        else
            return ModifyCloudNativeAPIGatewayServiceOutcome(o.GetError());
    }
    else
    {
        return ModifyCloudNativeAPIGatewayServiceOutcome(outcome.GetError());
    }
}

void TseClient::ModifyCloudNativeAPIGatewayServiceAsync(const ModifyCloudNativeAPIGatewayServiceRequest& request, const ModifyCloudNativeAPIGatewayServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCloudNativeAPIGatewayService(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::ModifyCloudNativeAPIGatewayServiceOutcomeCallable TseClient::ModifyCloudNativeAPIGatewayServiceCallable(const ModifyCloudNativeAPIGatewayServiceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCloudNativeAPIGatewayServiceOutcome()>>(
        [this, request]()
        {
            return this->ModifyCloudNativeAPIGatewayService(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::ModifyCloudNativeAPIGatewayServiceRateLimitOutcome TseClient::ModifyCloudNativeAPIGatewayServiceRateLimit(const ModifyCloudNativeAPIGatewayServiceRateLimitRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCloudNativeAPIGatewayServiceRateLimit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCloudNativeAPIGatewayServiceRateLimitResponse rsp = ModifyCloudNativeAPIGatewayServiceRateLimitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCloudNativeAPIGatewayServiceRateLimitOutcome(rsp);
        else
            return ModifyCloudNativeAPIGatewayServiceRateLimitOutcome(o.GetError());
    }
    else
    {
        return ModifyCloudNativeAPIGatewayServiceRateLimitOutcome(outcome.GetError());
    }
}

void TseClient::ModifyCloudNativeAPIGatewayServiceRateLimitAsync(const ModifyCloudNativeAPIGatewayServiceRateLimitRequest& request, const ModifyCloudNativeAPIGatewayServiceRateLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCloudNativeAPIGatewayServiceRateLimit(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::ModifyCloudNativeAPIGatewayServiceRateLimitOutcomeCallable TseClient::ModifyCloudNativeAPIGatewayServiceRateLimitCallable(const ModifyCloudNativeAPIGatewayServiceRateLimitRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCloudNativeAPIGatewayServiceRateLimitOutcome()>>(
        [this, request]()
        {
            return this->ModifyCloudNativeAPIGatewayServiceRateLimit(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::ModifyConfigFileGroupOutcome TseClient::ModifyConfigFileGroup(const ModifyConfigFileGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyConfigFileGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyConfigFileGroupResponse rsp = ModifyConfigFileGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyConfigFileGroupOutcome(rsp);
        else
            return ModifyConfigFileGroupOutcome(o.GetError());
    }
    else
    {
        return ModifyConfigFileGroupOutcome(outcome.GetError());
    }
}

void TseClient::ModifyConfigFileGroupAsync(const ModifyConfigFileGroupRequest& request, const ModifyConfigFileGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyConfigFileGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::ModifyConfigFileGroupOutcomeCallable TseClient::ModifyConfigFileGroupCallable(const ModifyConfigFileGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyConfigFileGroupOutcome()>>(
        [this, request]()
        {
            return this->ModifyConfigFileGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::ModifyConfigFilesOutcome TseClient::ModifyConfigFiles(const ModifyConfigFilesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyConfigFiles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyConfigFilesResponse rsp = ModifyConfigFilesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyConfigFilesOutcome(rsp);
        else
            return ModifyConfigFilesOutcome(o.GetError());
    }
    else
    {
        return ModifyConfigFilesOutcome(outcome.GetError());
    }
}

void TseClient::ModifyConfigFilesAsync(const ModifyConfigFilesRequest& request, const ModifyConfigFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyConfigFiles(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::ModifyConfigFilesOutcomeCallable TseClient::ModifyConfigFilesCallable(const ModifyConfigFilesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyConfigFilesOutcome()>>(
        [this, request]()
        {
            return this->ModifyConfigFiles(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::ModifyConsoleNetworkOutcome TseClient::ModifyConsoleNetwork(const ModifyConsoleNetworkRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyConsoleNetwork");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyConsoleNetworkResponse rsp = ModifyConsoleNetworkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyConsoleNetworkOutcome(rsp);
        else
            return ModifyConsoleNetworkOutcome(o.GetError());
    }
    else
    {
        return ModifyConsoleNetworkOutcome(outcome.GetError());
    }
}

void TseClient::ModifyConsoleNetworkAsync(const ModifyConsoleNetworkRequest& request, const ModifyConsoleNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyConsoleNetwork(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::ModifyConsoleNetworkOutcomeCallable TseClient::ModifyConsoleNetworkCallable(const ModifyConsoleNetworkRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyConsoleNetworkOutcome()>>(
        [this, request]()
        {
            return this->ModifyConsoleNetwork(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::ModifyGovernanceAliasOutcome TseClient::ModifyGovernanceAlias(const ModifyGovernanceAliasRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyGovernanceAlias");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyGovernanceAliasResponse rsp = ModifyGovernanceAliasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyGovernanceAliasOutcome(rsp);
        else
            return ModifyGovernanceAliasOutcome(o.GetError());
    }
    else
    {
        return ModifyGovernanceAliasOutcome(outcome.GetError());
    }
}

void TseClient::ModifyGovernanceAliasAsync(const ModifyGovernanceAliasRequest& request, const ModifyGovernanceAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyGovernanceAlias(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::ModifyGovernanceAliasOutcomeCallable TseClient::ModifyGovernanceAliasCallable(const ModifyGovernanceAliasRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyGovernanceAliasOutcome()>>(
        [this, request]()
        {
            return this->ModifyGovernanceAlias(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::ModifyGovernanceInstancesOutcome TseClient::ModifyGovernanceInstances(const ModifyGovernanceInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyGovernanceInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyGovernanceInstancesResponse rsp = ModifyGovernanceInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyGovernanceInstancesOutcome(rsp);
        else
            return ModifyGovernanceInstancesOutcome(o.GetError());
    }
    else
    {
        return ModifyGovernanceInstancesOutcome(outcome.GetError());
    }
}

void TseClient::ModifyGovernanceInstancesAsync(const ModifyGovernanceInstancesRequest& request, const ModifyGovernanceInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyGovernanceInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::ModifyGovernanceInstancesOutcomeCallable TseClient::ModifyGovernanceInstancesCallable(const ModifyGovernanceInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyGovernanceInstancesOutcome()>>(
        [this, request]()
        {
            return this->ModifyGovernanceInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::ModifyGovernanceNamespacesOutcome TseClient::ModifyGovernanceNamespaces(const ModifyGovernanceNamespacesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyGovernanceNamespaces");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyGovernanceNamespacesResponse rsp = ModifyGovernanceNamespacesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyGovernanceNamespacesOutcome(rsp);
        else
            return ModifyGovernanceNamespacesOutcome(o.GetError());
    }
    else
    {
        return ModifyGovernanceNamespacesOutcome(outcome.GetError());
    }
}

void TseClient::ModifyGovernanceNamespacesAsync(const ModifyGovernanceNamespacesRequest& request, const ModifyGovernanceNamespacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyGovernanceNamespaces(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::ModifyGovernanceNamespacesOutcomeCallable TseClient::ModifyGovernanceNamespacesCallable(const ModifyGovernanceNamespacesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyGovernanceNamespacesOutcome()>>(
        [this, request]()
        {
            return this->ModifyGovernanceNamespaces(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::ModifyGovernanceServicesOutcome TseClient::ModifyGovernanceServices(const ModifyGovernanceServicesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyGovernanceServices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyGovernanceServicesResponse rsp = ModifyGovernanceServicesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyGovernanceServicesOutcome(rsp);
        else
            return ModifyGovernanceServicesOutcome(o.GetError());
    }
    else
    {
        return ModifyGovernanceServicesOutcome(outcome.GetError());
    }
}

void TseClient::ModifyGovernanceServicesAsync(const ModifyGovernanceServicesRequest& request, const ModifyGovernanceServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyGovernanceServices(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::ModifyGovernanceServicesOutcomeCallable TseClient::ModifyGovernanceServicesCallable(const ModifyGovernanceServicesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyGovernanceServicesOutcome()>>(
        [this, request]()
        {
            return this->ModifyGovernanceServices(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::ModifyNativeGatewayServerGroupOutcome TseClient::ModifyNativeGatewayServerGroup(const ModifyNativeGatewayServerGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNativeGatewayServerGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNativeGatewayServerGroupResponse rsp = ModifyNativeGatewayServerGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNativeGatewayServerGroupOutcome(rsp);
        else
            return ModifyNativeGatewayServerGroupOutcome(o.GetError());
    }
    else
    {
        return ModifyNativeGatewayServerGroupOutcome(outcome.GetError());
    }
}

void TseClient::ModifyNativeGatewayServerGroupAsync(const ModifyNativeGatewayServerGroupRequest& request, const ModifyNativeGatewayServerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyNativeGatewayServerGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::ModifyNativeGatewayServerGroupOutcomeCallable TseClient::ModifyNativeGatewayServerGroupCallable(const ModifyNativeGatewayServerGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyNativeGatewayServerGroupOutcome()>>(
        [this, request]()
        {
            return this->ModifyNativeGatewayServerGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::ModifyNativeGatewayServiceSourceOutcome TseClient::ModifyNativeGatewayServiceSource(const ModifyNativeGatewayServiceSourceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNativeGatewayServiceSource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNativeGatewayServiceSourceResponse rsp = ModifyNativeGatewayServiceSourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNativeGatewayServiceSourceOutcome(rsp);
        else
            return ModifyNativeGatewayServiceSourceOutcome(o.GetError());
    }
    else
    {
        return ModifyNativeGatewayServiceSourceOutcome(outcome.GetError());
    }
}

void TseClient::ModifyNativeGatewayServiceSourceAsync(const ModifyNativeGatewayServiceSourceRequest& request, const ModifyNativeGatewayServiceSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyNativeGatewayServiceSource(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::ModifyNativeGatewayServiceSourceOutcomeCallable TseClient::ModifyNativeGatewayServiceSourceCallable(const ModifyNativeGatewayServiceSourceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyNativeGatewayServiceSourceOutcome()>>(
        [this, request]()
        {
            return this->ModifyNativeGatewayServiceSource(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::ModifyNetworkAccessStrategyOutcome TseClient::ModifyNetworkAccessStrategy(const ModifyNetworkAccessStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNetworkAccessStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNetworkAccessStrategyResponse rsp = ModifyNetworkAccessStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNetworkAccessStrategyOutcome(rsp);
        else
            return ModifyNetworkAccessStrategyOutcome(o.GetError());
    }
    else
    {
        return ModifyNetworkAccessStrategyOutcome(outcome.GetError());
    }
}

void TseClient::ModifyNetworkAccessStrategyAsync(const ModifyNetworkAccessStrategyRequest& request, const ModifyNetworkAccessStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyNetworkAccessStrategy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::ModifyNetworkAccessStrategyOutcomeCallable TseClient::ModifyNetworkAccessStrategyCallable(const ModifyNetworkAccessStrategyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyNetworkAccessStrategyOutcome()>>(
        [this, request]()
        {
            return this->ModifyNetworkAccessStrategy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::ModifyNetworkBasicInfoOutcome TseClient::ModifyNetworkBasicInfo(const ModifyNetworkBasicInfoRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNetworkBasicInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNetworkBasicInfoResponse rsp = ModifyNetworkBasicInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNetworkBasicInfoOutcome(rsp);
        else
            return ModifyNetworkBasicInfoOutcome(o.GetError());
    }
    else
    {
        return ModifyNetworkBasicInfoOutcome(outcome.GetError());
    }
}

void TseClient::ModifyNetworkBasicInfoAsync(const ModifyNetworkBasicInfoRequest& request, const ModifyNetworkBasicInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyNetworkBasicInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::ModifyNetworkBasicInfoOutcomeCallable TseClient::ModifyNetworkBasicInfoCallable(const ModifyNetworkBasicInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyNetworkBasicInfoOutcome()>>(
        [this, request]()
        {
            return this->ModifyNetworkBasicInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::ModifyUpstreamNodeStatusOutcome TseClient::ModifyUpstreamNodeStatus(const ModifyUpstreamNodeStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyUpstreamNodeStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyUpstreamNodeStatusResponse rsp = ModifyUpstreamNodeStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyUpstreamNodeStatusOutcome(rsp);
        else
            return ModifyUpstreamNodeStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyUpstreamNodeStatusOutcome(outcome.GetError());
    }
}

void TseClient::ModifyUpstreamNodeStatusAsync(const ModifyUpstreamNodeStatusRequest& request, const ModifyUpstreamNodeStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyUpstreamNodeStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::ModifyUpstreamNodeStatusOutcomeCallable TseClient::ModifyUpstreamNodeStatusCallable(const ModifyUpstreamNodeStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyUpstreamNodeStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyUpstreamNodeStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::OpenWafProtectionOutcome TseClient::OpenWafProtection(const OpenWafProtectionRequest &request)
{
    auto outcome = MakeRequest(request, "OpenWafProtection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OpenWafProtectionResponse rsp = OpenWafProtectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OpenWafProtectionOutcome(rsp);
        else
            return OpenWafProtectionOutcome(o.GetError());
    }
    else
    {
        return OpenWafProtectionOutcome(outcome.GetError());
    }
}

void TseClient::OpenWafProtectionAsync(const OpenWafProtectionRequest& request, const OpenWafProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->OpenWafProtection(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::OpenWafProtectionOutcomeCallable TseClient::OpenWafProtectionCallable(const OpenWafProtectionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<OpenWafProtectionOutcome()>>(
        [this, request]()
        {
            return this->OpenWafProtection(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::PublishConfigFilesOutcome TseClient::PublishConfigFiles(const PublishConfigFilesRequest &request)
{
    auto outcome = MakeRequest(request, "PublishConfigFiles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PublishConfigFilesResponse rsp = PublishConfigFilesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PublishConfigFilesOutcome(rsp);
        else
            return PublishConfigFilesOutcome(o.GetError());
    }
    else
    {
        return PublishConfigFilesOutcome(outcome.GetError());
    }
}

void TseClient::PublishConfigFilesAsync(const PublishConfigFilesRequest& request, const PublishConfigFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->PublishConfigFiles(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::PublishConfigFilesOutcomeCallable TseClient::PublishConfigFilesCallable(const PublishConfigFilesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<PublishConfigFilesOutcome()>>(
        [this, request]()
        {
            return this->PublishConfigFiles(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::RestartSREInstanceOutcome TseClient::RestartSREInstance(const RestartSREInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "RestartSREInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RestartSREInstanceResponse rsp = RestartSREInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RestartSREInstanceOutcome(rsp);
        else
            return RestartSREInstanceOutcome(o.GetError());
    }
    else
    {
        return RestartSREInstanceOutcome(outcome.GetError());
    }
}

void TseClient::RestartSREInstanceAsync(const RestartSREInstanceRequest& request, const RestartSREInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RestartSREInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::RestartSREInstanceOutcomeCallable TseClient::RestartSREInstanceCallable(const RestartSREInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RestartSREInstanceOutcome()>>(
        [this, request]()
        {
            return this->RestartSREInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::RollbackConfigFileReleasesOutcome TseClient::RollbackConfigFileReleases(const RollbackConfigFileReleasesRequest &request)
{
    auto outcome = MakeRequest(request, "RollbackConfigFileReleases");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RollbackConfigFileReleasesResponse rsp = RollbackConfigFileReleasesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RollbackConfigFileReleasesOutcome(rsp);
        else
            return RollbackConfigFileReleasesOutcome(o.GetError());
    }
    else
    {
        return RollbackConfigFileReleasesOutcome(outcome.GetError());
    }
}

void TseClient::RollbackConfigFileReleasesAsync(const RollbackConfigFileReleasesRequest& request, const RollbackConfigFileReleasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RollbackConfigFileReleases(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::RollbackConfigFileReleasesOutcomeCallable TseClient::RollbackConfigFileReleasesCallable(const RollbackConfigFileReleasesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RollbackConfigFileReleasesOutcome()>>(
        [this, request]()
        {
            return this->RollbackConfigFileReleases(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::UnbindAutoScalerResourceStrategyFromGroupsOutcome TseClient::UnbindAutoScalerResourceStrategyFromGroups(const UnbindAutoScalerResourceStrategyFromGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "UnbindAutoScalerResourceStrategyFromGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnbindAutoScalerResourceStrategyFromGroupsResponse rsp = UnbindAutoScalerResourceStrategyFromGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnbindAutoScalerResourceStrategyFromGroupsOutcome(rsp);
        else
            return UnbindAutoScalerResourceStrategyFromGroupsOutcome(o.GetError());
    }
    else
    {
        return UnbindAutoScalerResourceStrategyFromGroupsOutcome(outcome.GetError());
    }
}

void TseClient::UnbindAutoScalerResourceStrategyFromGroupsAsync(const UnbindAutoScalerResourceStrategyFromGroupsRequest& request, const UnbindAutoScalerResourceStrategyFromGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UnbindAutoScalerResourceStrategyFromGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::UnbindAutoScalerResourceStrategyFromGroupsOutcomeCallable TseClient::UnbindAutoScalerResourceStrategyFromGroupsCallable(const UnbindAutoScalerResourceStrategyFromGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UnbindAutoScalerResourceStrategyFromGroupsOutcome()>>(
        [this, request]()
        {
            return this->UnbindAutoScalerResourceStrategyFromGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::UpdateCloudNativeAPIGatewayCertificateInfoOutcome TseClient::UpdateCloudNativeAPIGatewayCertificateInfo(const UpdateCloudNativeAPIGatewayCertificateInfoRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateCloudNativeAPIGatewayCertificateInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateCloudNativeAPIGatewayCertificateInfoResponse rsp = UpdateCloudNativeAPIGatewayCertificateInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateCloudNativeAPIGatewayCertificateInfoOutcome(rsp);
        else
            return UpdateCloudNativeAPIGatewayCertificateInfoOutcome(o.GetError());
    }
    else
    {
        return UpdateCloudNativeAPIGatewayCertificateInfoOutcome(outcome.GetError());
    }
}

void TseClient::UpdateCloudNativeAPIGatewayCertificateInfoAsync(const UpdateCloudNativeAPIGatewayCertificateInfoRequest& request, const UpdateCloudNativeAPIGatewayCertificateInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateCloudNativeAPIGatewayCertificateInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::UpdateCloudNativeAPIGatewayCertificateInfoOutcomeCallable TseClient::UpdateCloudNativeAPIGatewayCertificateInfoCallable(const UpdateCloudNativeAPIGatewayCertificateInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateCloudNativeAPIGatewayCertificateInfoOutcome()>>(
        [this, request]()
        {
            return this->UpdateCloudNativeAPIGatewayCertificateInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::UpdateCloudNativeAPIGatewaySpecOutcome TseClient::UpdateCloudNativeAPIGatewaySpec(const UpdateCloudNativeAPIGatewaySpecRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateCloudNativeAPIGatewaySpec");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateCloudNativeAPIGatewaySpecResponse rsp = UpdateCloudNativeAPIGatewaySpecResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateCloudNativeAPIGatewaySpecOutcome(rsp);
        else
            return UpdateCloudNativeAPIGatewaySpecOutcome(o.GetError());
    }
    else
    {
        return UpdateCloudNativeAPIGatewaySpecOutcome(outcome.GetError());
    }
}

void TseClient::UpdateCloudNativeAPIGatewaySpecAsync(const UpdateCloudNativeAPIGatewaySpecRequest& request, const UpdateCloudNativeAPIGatewaySpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateCloudNativeAPIGatewaySpec(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::UpdateCloudNativeAPIGatewaySpecOutcomeCallable TseClient::UpdateCloudNativeAPIGatewaySpecCallable(const UpdateCloudNativeAPIGatewaySpecRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateCloudNativeAPIGatewaySpecOutcome()>>(
        [this, request]()
        {
            return this->UpdateCloudNativeAPIGatewaySpec(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::UpdateEngineInternetAccessOutcome TseClient::UpdateEngineInternetAccess(const UpdateEngineInternetAccessRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateEngineInternetAccess");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateEngineInternetAccessResponse rsp = UpdateEngineInternetAccessResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateEngineInternetAccessOutcome(rsp);
        else
            return UpdateEngineInternetAccessOutcome(o.GetError());
    }
    else
    {
        return UpdateEngineInternetAccessOutcome(outcome.GetError());
    }
}

void TseClient::UpdateEngineInternetAccessAsync(const UpdateEngineInternetAccessRequest& request, const UpdateEngineInternetAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateEngineInternetAccess(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::UpdateEngineInternetAccessOutcomeCallable TseClient::UpdateEngineInternetAccessCallable(const UpdateEngineInternetAccessRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateEngineInternetAccessOutcome()>>(
        [this, request]()
        {
            return this->UpdateEngineInternetAccess(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::UpdateUpstreamHealthCheckConfigOutcome TseClient::UpdateUpstreamHealthCheckConfig(const UpdateUpstreamHealthCheckConfigRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateUpstreamHealthCheckConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateUpstreamHealthCheckConfigResponse rsp = UpdateUpstreamHealthCheckConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateUpstreamHealthCheckConfigOutcome(rsp);
        else
            return UpdateUpstreamHealthCheckConfigOutcome(o.GetError());
    }
    else
    {
        return UpdateUpstreamHealthCheckConfigOutcome(outcome.GetError());
    }
}

void TseClient::UpdateUpstreamHealthCheckConfigAsync(const UpdateUpstreamHealthCheckConfigRequest& request, const UpdateUpstreamHealthCheckConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateUpstreamHealthCheckConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::UpdateUpstreamHealthCheckConfigOutcomeCallable TseClient::UpdateUpstreamHealthCheckConfigCallable(const UpdateUpstreamHealthCheckConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateUpstreamHealthCheckConfigOutcome()>>(
        [this, request]()
        {
            return this->UpdateUpstreamHealthCheckConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::UpdateUpstreamTargetsOutcome TseClient::UpdateUpstreamTargets(const UpdateUpstreamTargetsRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateUpstreamTargets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateUpstreamTargetsResponse rsp = UpdateUpstreamTargetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateUpstreamTargetsOutcome(rsp);
        else
            return UpdateUpstreamTargetsOutcome(o.GetError());
    }
    else
    {
        return UpdateUpstreamTargetsOutcome(outcome.GetError());
    }
}

void TseClient::UpdateUpstreamTargetsAsync(const UpdateUpstreamTargetsRequest& request, const UpdateUpstreamTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateUpstreamTargets(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::UpdateUpstreamTargetsOutcomeCallable TseClient::UpdateUpstreamTargetsCallable(const UpdateUpstreamTargetsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateUpstreamTargetsOutcome()>>(
        [this, request]()
        {
            return this->UpdateUpstreamTargets(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


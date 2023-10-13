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


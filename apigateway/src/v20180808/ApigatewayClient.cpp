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

#include <tencentcloud/apigateway/v20180808/ApigatewayClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Apigateway::V20180808;
using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-08-08";
    const string ENDPOINT = "apigateway.tencentcloudapi.com";
}

ApigatewayClient::ApigatewayClient(const Credential &credential, const string &region) :
    ApigatewayClient(credential, region, ClientProfile())
{
}

ApigatewayClient::ApigatewayClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


ApigatewayClient::AttachPluginOutcome ApigatewayClient::AttachPlugin(const AttachPluginRequest &request)
{
    auto outcome = MakeRequest(request, "AttachPlugin");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AttachPluginResponse rsp = AttachPluginResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AttachPluginOutcome(rsp);
        else
            return AttachPluginOutcome(o.GetError());
    }
    else
    {
        return AttachPluginOutcome(outcome.GetError());
    }
}

void ApigatewayClient::AttachPluginAsync(const AttachPluginRequest& request, const AttachPluginAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AttachPlugin(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::AttachPluginOutcomeCallable ApigatewayClient::AttachPluginCallable(const AttachPluginRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AttachPluginOutcome()>>(
        [this, request]()
        {
            return this->AttachPlugin(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::BindApiAppOutcome ApigatewayClient::BindApiApp(const BindApiAppRequest &request)
{
    auto outcome = MakeRequest(request, "BindApiApp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindApiAppResponse rsp = BindApiAppResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindApiAppOutcome(rsp);
        else
            return BindApiAppOutcome(o.GetError());
    }
    else
    {
        return BindApiAppOutcome(outcome.GetError());
    }
}

void ApigatewayClient::BindApiAppAsync(const BindApiAppRequest& request, const BindApiAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BindApiApp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::BindApiAppOutcomeCallable ApigatewayClient::BindApiAppCallable(const BindApiAppRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BindApiAppOutcome()>>(
        [this, request]()
        {
            return this->BindApiApp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::BindEnvironmentOutcome ApigatewayClient::BindEnvironment(const BindEnvironmentRequest &request)
{
    auto outcome = MakeRequest(request, "BindEnvironment");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindEnvironmentResponse rsp = BindEnvironmentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindEnvironmentOutcome(rsp);
        else
            return BindEnvironmentOutcome(o.GetError());
    }
    else
    {
        return BindEnvironmentOutcome(outcome.GetError());
    }
}

void ApigatewayClient::BindEnvironmentAsync(const BindEnvironmentRequest& request, const BindEnvironmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BindEnvironment(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::BindEnvironmentOutcomeCallable ApigatewayClient::BindEnvironmentCallable(const BindEnvironmentRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BindEnvironmentOutcome()>>(
        [this, request]()
        {
            return this->BindEnvironment(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::BindIPStrategyOutcome ApigatewayClient::BindIPStrategy(const BindIPStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "BindIPStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindIPStrategyResponse rsp = BindIPStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindIPStrategyOutcome(rsp);
        else
            return BindIPStrategyOutcome(o.GetError());
    }
    else
    {
        return BindIPStrategyOutcome(outcome.GetError());
    }
}

void ApigatewayClient::BindIPStrategyAsync(const BindIPStrategyRequest& request, const BindIPStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BindIPStrategy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::BindIPStrategyOutcomeCallable ApigatewayClient::BindIPStrategyCallable(const BindIPStrategyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BindIPStrategyOutcome()>>(
        [this, request]()
        {
            return this->BindIPStrategy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::BindSecretIdsOutcome ApigatewayClient::BindSecretIds(const BindSecretIdsRequest &request)
{
    auto outcome = MakeRequest(request, "BindSecretIds");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindSecretIdsResponse rsp = BindSecretIdsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindSecretIdsOutcome(rsp);
        else
            return BindSecretIdsOutcome(o.GetError());
    }
    else
    {
        return BindSecretIdsOutcome(outcome.GetError());
    }
}

void ApigatewayClient::BindSecretIdsAsync(const BindSecretIdsRequest& request, const BindSecretIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BindSecretIds(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::BindSecretIdsOutcomeCallable ApigatewayClient::BindSecretIdsCallable(const BindSecretIdsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BindSecretIdsOutcome()>>(
        [this, request]()
        {
            return this->BindSecretIds(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::BindSubDomainOutcome ApigatewayClient::BindSubDomain(const BindSubDomainRequest &request)
{
    auto outcome = MakeRequest(request, "BindSubDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindSubDomainResponse rsp = BindSubDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindSubDomainOutcome(rsp);
        else
            return BindSubDomainOutcome(o.GetError());
    }
    else
    {
        return BindSubDomainOutcome(outcome.GetError());
    }
}

void ApigatewayClient::BindSubDomainAsync(const BindSubDomainRequest& request, const BindSubDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BindSubDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::BindSubDomainOutcomeCallable ApigatewayClient::BindSubDomainCallable(const BindSubDomainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BindSubDomainOutcome()>>(
        [this, request]()
        {
            return this->BindSubDomain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::BuildAPIDocOutcome ApigatewayClient::BuildAPIDoc(const BuildAPIDocRequest &request)
{
    auto outcome = MakeRequest(request, "BuildAPIDoc");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BuildAPIDocResponse rsp = BuildAPIDocResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BuildAPIDocOutcome(rsp);
        else
            return BuildAPIDocOutcome(o.GetError());
    }
    else
    {
        return BuildAPIDocOutcome(outcome.GetError());
    }
}

void ApigatewayClient::BuildAPIDocAsync(const BuildAPIDocRequest& request, const BuildAPIDocAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BuildAPIDoc(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::BuildAPIDocOutcomeCallable ApigatewayClient::BuildAPIDocCallable(const BuildAPIDocRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BuildAPIDocOutcome()>>(
        [this, request]()
        {
            return this->BuildAPIDoc(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::CreateAPIDocOutcome ApigatewayClient::CreateAPIDoc(const CreateAPIDocRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAPIDoc");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAPIDocResponse rsp = CreateAPIDocResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAPIDocOutcome(rsp);
        else
            return CreateAPIDocOutcome(o.GetError());
    }
    else
    {
        return CreateAPIDocOutcome(outcome.GetError());
    }
}

void ApigatewayClient::CreateAPIDocAsync(const CreateAPIDocRequest& request, const CreateAPIDocAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAPIDoc(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::CreateAPIDocOutcomeCallable ApigatewayClient::CreateAPIDocCallable(const CreateAPIDocRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAPIDocOutcome()>>(
        [this, request]()
        {
            return this->CreateAPIDoc(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::CreateApiOutcome ApigatewayClient::CreateApi(const CreateApiRequest &request)
{
    auto outcome = MakeRequest(request, "CreateApi");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateApiResponse rsp = CreateApiResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateApiOutcome(rsp);
        else
            return CreateApiOutcome(o.GetError());
    }
    else
    {
        return CreateApiOutcome(outcome.GetError());
    }
}

void ApigatewayClient::CreateApiAsync(const CreateApiRequest& request, const CreateApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateApi(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::CreateApiOutcomeCallable ApigatewayClient::CreateApiCallable(const CreateApiRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateApiOutcome()>>(
        [this, request]()
        {
            return this->CreateApi(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::CreateApiAppOutcome ApigatewayClient::CreateApiApp(const CreateApiAppRequest &request)
{
    auto outcome = MakeRequest(request, "CreateApiApp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateApiAppResponse rsp = CreateApiAppResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateApiAppOutcome(rsp);
        else
            return CreateApiAppOutcome(o.GetError());
    }
    else
    {
        return CreateApiAppOutcome(outcome.GetError());
    }
}

void ApigatewayClient::CreateApiAppAsync(const CreateApiAppRequest& request, const CreateApiAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateApiApp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::CreateApiAppOutcomeCallable ApigatewayClient::CreateApiAppCallable(const CreateApiAppRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateApiAppOutcome()>>(
        [this, request]()
        {
            return this->CreateApiApp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::CreateApiKeyOutcome ApigatewayClient::CreateApiKey(const CreateApiKeyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateApiKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateApiKeyResponse rsp = CreateApiKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateApiKeyOutcome(rsp);
        else
            return CreateApiKeyOutcome(o.GetError());
    }
    else
    {
        return CreateApiKeyOutcome(outcome.GetError());
    }
}

void ApigatewayClient::CreateApiKeyAsync(const CreateApiKeyRequest& request, const CreateApiKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateApiKey(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::CreateApiKeyOutcomeCallable ApigatewayClient::CreateApiKeyCallable(const CreateApiKeyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateApiKeyOutcome()>>(
        [this, request]()
        {
            return this->CreateApiKey(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::CreateExclusiveInstancesOutcome ApigatewayClient::CreateExclusiveInstances(const CreateExclusiveInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateExclusiveInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateExclusiveInstancesResponse rsp = CreateExclusiveInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateExclusiveInstancesOutcome(rsp);
        else
            return CreateExclusiveInstancesOutcome(o.GetError());
    }
    else
    {
        return CreateExclusiveInstancesOutcome(outcome.GetError());
    }
}

void ApigatewayClient::CreateExclusiveInstancesAsync(const CreateExclusiveInstancesRequest& request, const CreateExclusiveInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateExclusiveInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::CreateExclusiveInstancesOutcomeCallable ApigatewayClient::CreateExclusiveInstancesCallable(const CreateExclusiveInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateExclusiveInstancesOutcome()>>(
        [this, request]()
        {
            return this->CreateExclusiveInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::CreateIPStrategyOutcome ApigatewayClient::CreateIPStrategy(const CreateIPStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateIPStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateIPStrategyResponse rsp = CreateIPStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateIPStrategyOutcome(rsp);
        else
            return CreateIPStrategyOutcome(o.GetError());
    }
    else
    {
        return CreateIPStrategyOutcome(outcome.GetError());
    }
}

void ApigatewayClient::CreateIPStrategyAsync(const CreateIPStrategyRequest& request, const CreateIPStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateIPStrategy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::CreateIPStrategyOutcomeCallable ApigatewayClient::CreateIPStrategyCallable(const CreateIPStrategyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateIPStrategyOutcome()>>(
        [this, request]()
        {
            return this->CreateIPStrategy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::CreatePluginOutcome ApigatewayClient::CreatePlugin(const CreatePluginRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePlugin");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePluginResponse rsp = CreatePluginResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePluginOutcome(rsp);
        else
            return CreatePluginOutcome(o.GetError());
    }
    else
    {
        return CreatePluginOutcome(outcome.GetError());
    }
}

void ApigatewayClient::CreatePluginAsync(const CreatePluginRequest& request, const CreatePluginAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePlugin(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::CreatePluginOutcomeCallable ApigatewayClient::CreatePluginCallable(const CreatePluginRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePluginOutcome()>>(
        [this, request]()
        {
            return this->CreatePlugin(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::CreateServiceOutcome ApigatewayClient::CreateService(const CreateServiceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateServiceResponse rsp = CreateServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateServiceOutcome(rsp);
        else
            return CreateServiceOutcome(o.GetError());
    }
    else
    {
        return CreateServiceOutcome(outcome.GetError());
    }
}

void ApigatewayClient::CreateServiceAsync(const CreateServiceRequest& request, const CreateServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateService(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::CreateServiceOutcomeCallable ApigatewayClient::CreateServiceCallable(const CreateServiceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateServiceOutcome()>>(
        [this, request]()
        {
            return this->CreateService(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::CreateUpstreamOutcome ApigatewayClient::CreateUpstream(const CreateUpstreamRequest &request)
{
    auto outcome = MakeRequest(request, "CreateUpstream");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateUpstreamResponse rsp = CreateUpstreamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateUpstreamOutcome(rsp);
        else
            return CreateUpstreamOutcome(o.GetError());
    }
    else
    {
        return CreateUpstreamOutcome(outcome.GetError());
    }
}

void ApigatewayClient::CreateUpstreamAsync(const CreateUpstreamRequest& request, const CreateUpstreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateUpstream(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::CreateUpstreamOutcomeCallable ApigatewayClient::CreateUpstreamCallable(const CreateUpstreamRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateUpstreamOutcome()>>(
        [this, request]()
        {
            return this->CreateUpstream(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::CreateUsagePlanOutcome ApigatewayClient::CreateUsagePlan(const CreateUsagePlanRequest &request)
{
    auto outcome = MakeRequest(request, "CreateUsagePlan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateUsagePlanResponse rsp = CreateUsagePlanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateUsagePlanOutcome(rsp);
        else
            return CreateUsagePlanOutcome(o.GetError());
    }
    else
    {
        return CreateUsagePlanOutcome(outcome.GetError());
    }
}

void ApigatewayClient::CreateUsagePlanAsync(const CreateUsagePlanRequest& request, const CreateUsagePlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateUsagePlan(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::CreateUsagePlanOutcomeCallable ApigatewayClient::CreateUsagePlanCallable(const CreateUsagePlanRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateUsagePlanOutcome()>>(
        [this, request]()
        {
            return this->CreateUsagePlan(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::DeleteAPIDocOutcome ApigatewayClient::DeleteAPIDoc(const DeleteAPIDocRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAPIDoc");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAPIDocResponse rsp = DeleteAPIDocResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAPIDocOutcome(rsp);
        else
            return DeleteAPIDocOutcome(o.GetError());
    }
    else
    {
        return DeleteAPIDocOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DeleteAPIDocAsync(const DeleteAPIDocRequest& request, const DeleteAPIDocAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAPIDoc(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::DeleteAPIDocOutcomeCallable ApigatewayClient::DeleteAPIDocCallable(const DeleteAPIDocRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAPIDocOutcome()>>(
        [this, request]()
        {
            return this->DeleteAPIDoc(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::DeleteApiOutcome ApigatewayClient::DeleteApi(const DeleteApiRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteApi");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteApiResponse rsp = DeleteApiResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteApiOutcome(rsp);
        else
            return DeleteApiOutcome(o.GetError());
    }
    else
    {
        return DeleteApiOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DeleteApiAsync(const DeleteApiRequest& request, const DeleteApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteApi(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::DeleteApiOutcomeCallable ApigatewayClient::DeleteApiCallable(const DeleteApiRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteApiOutcome()>>(
        [this, request]()
        {
            return this->DeleteApi(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::DeleteApiAppOutcome ApigatewayClient::DeleteApiApp(const DeleteApiAppRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteApiApp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteApiAppResponse rsp = DeleteApiAppResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteApiAppOutcome(rsp);
        else
            return DeleteApiAppOutcome(o.GetError());
    }
    else
    {
        return DeleteApiAppOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DeleteApiAppAsync(const DeleteApiAppRequest& request, const DeleteApiAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteApiApp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::DeleteApiAppOutcomeCallable ApigatewayClient::DeleteApiAppCallable(const DeleteApiAppRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteApiAppOutcome()>>(
        [this, request]()
        {
            return this->DeleteApiApp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::DeleteApiKeyOutcome ApigatewayClient::DeleteApiKey(const DeleteApiKeyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteApiKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteApiKeyResponse rsp = DeleteApiKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteApiKeyOutcome(rsp);
        else
            return DeleteApiKeyOutcome(o.GetError());
    }
    else
    {
        return DeleteApiKeyOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DeleteApiKeyAsync(const DeleteApiKeyRequest& request, const DeleteApiKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteApiKey(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::DeleteApiKeyOutcomeCallable ApigatewayClient::DeleteApiKeyCallable(const DeleteApiKeyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteApiKeyOutcome()>>(
        [this, request]()
        {
            return this->DeleteApiKey(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::DeleteIPStrategyOutcome ApigatewayClient::DeleteIPStrategy(const DeleteIPStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteIPStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteIPStrategyResponse rsp = DeleteIPStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteIPStrategyOutcome(rsp);
        else
            return DeleteIPStrategyOutcome(o.GetError());
    }
    else
    {
        return DeleteIPStrategyOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DeleteIPStrategyAsync(const DeleteIPStrategyRequest& request, const DeleteIPStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteIPStrategy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::DeleteIPStrategyOutcomeCallable ApigatewayClient::DeleteIPStrategyCallable(const DeleteIPStrategyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteIPStrategyOutcome()>>(
        [this, request]()
        {
            return this->DeleteIPStrategy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::DeletePluginOutcome ApigatewayClient::DeletePlugin(const DeletePluginRequest &request)
{
    auto outcome = MakeRequest(request, "DeletePlugin");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeletePluginResponse rsp = DeletePluginResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeletePluginOutcome(rsp);
        else
            return DeletePluginOutcome(o.GetError());
    }
    else
    {
        return DeletePluginOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DeletePluginAsync(const DeletePluginRequest& request, const DeletePluginAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeletePlugin(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::DeletePluginOutcomeCallable ApigatewayClient::DeletePluginCallable(const DeletePluginRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeletePluginOutcome()>>(
        [this, request]()
        {
            return this->DeletePlugin(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::DeleteServiceOutcome ApigatewayClient::DeleteService(const DeleteServiceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteServiceResponse rsp = DeleteServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteServiceOutcome(rsp);
        else
            return DeleteServiceOutcome(o.GetError());
    }
    else
    {
        return DeleteServiceOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DeleteServiceAsync(const DeleteServiceRequest& request, const DeleteServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteService(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::DeleteServiceOutcomeCallable ApigatewayClient::DeleteServiceCallable(const DeleteServiceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteServiceOutcome()>>(
        [this, request]()
        {
            return this->DeleteService(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::DeleteServiceSubDomainMappingOutcome ApigatewayClient::DeleteServiceSubDomainMapping(const DeleteServiceSubDomainMappingRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteServiceSubDomainMapping");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteServiceSubDomainMappingResponse rsp = DeleteServiceSubDomainMappingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteServiceSubDomainMappingOutcome(rsp);
        else
            return DeleteServiceSubDomainMappingOutcome(o.GetError());
    }
    else
    {
        return DeleteServiceSubDomainMappingOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DeleteServiceSubDomainMappingAsync(const DeleteServiceSubDomainMappingRequest& request, const DeleteServiceSubDomainMappingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteServiceSubDomainMapping(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::DeleteServiceSubDomainMappingOutcomeCallable ApigatewayClient::DeleteServiceSubDomainMappingCallable(const DeleteServiceSubDomainMappingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteServiceSubDomainMappingOutcome()>>(
        [this, request]()
        {
            return this->DeleteServiceSubDomainMapping(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::DeleteUpstreamOutcome ApigatewayClient::DeleteUpstream(const DeleteUpstreamRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteUpstream");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteUpstreamResponse rsp = DeleteUpstreamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteUpstreamOutcome(rsp);
        else
            return DeleteUpstreamOutcome(o.GetError());
    }
    else
    {
        return DeleteUpstreamOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DeleteUpstreamAsync(const DeleteUpstreamRequest& request, const DeleteUpstreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteUpstream(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::DeleteUpstreamOutcomeCallable ApigatewayClient::DeleteUpstreamCallable(const DeleteUpstreamRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteUpstreamOutcome()>>(
        [this, request]()
        {
            return this->DeleteUpstream(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::DeleteUsagePlanOutcome ApigatewayClient::DeleteUsagePlan(const DeleteUsagePlanRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteUsagePlan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteUsagePlanResponse rsp = DeleteUsagePlanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteUsagePlanOutcome(rsp);
        else
            return DeleteUsagePlanOutcome(o.GetError());
    }
    else
    {
        return DeleteUsagePlanOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DeleteUsagePlanAsync(const DeleteUsagePlanRequest& request, const DeleteUsagePlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteUsagePlan(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::DeleteUsagePlanOutcomeCallable ApigatewayClient::DeleteUsagePlanCallable(const DeleteUsagePlanRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteUsagePlanOutcome()>>(
        [this, request]()
        {
            return this->DeleteUsagePlan(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::DemoteServiceUsagePlanOutcome ApigatewayClient::DemoteServiceUsagePlan(const DemoteServiceUsagePlanRequest &request)
{
    auto outcome = MakeRequest(request, "DemoteServiceUsagePlan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DemoteServiceUsagePlanResponse rsp = DemoteServiceUsagePlanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DemoteServiceUsagePlanOutcome(rsp);
        else
            return DemoteServiceUsagePlanOutcome(o.GetError());
    }
    else
    {
        return DemoteServiceUsagePlanOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DemoteServiceUsagePlanAsync(const DemoteServiceUsagePlanRequest& request, const DemoteServiceUsagePlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DemoteServiceUsagePlan(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::DemoteServiceUsagePlanOutcomeCallable ApigatewayClient::DemoteServiceUsagePlanCallable(const DemoteServiceUsagePlanRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DemoteServiceUsagePlanOutcome()>>(
        [this, request]()
        {
            return this->DemoteServiceUsagePlan(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::DescribeAPIDocDetailOutcome ApigatewayClient::DescribeAPIDocDetail(const DescribeAPIDocDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAPIDocDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAPIDocDetailResponse rsp = DescribeAPIDocDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAPIDocDetailOutcome(rsp);
        else
            return DescribeAPIDocDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeAPIDocDetailOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribeAPIDocDetailAsync(const DescribeAPIDocDetailRequest& request, const DescribeAPIDocDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAPIDocDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::DescribeAPIDocDetailOutcomeCallable ApigatewayClient::DescribeAPIDocDetailCallable(const DescribeAPIDocDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAPIDocDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeAPIDocDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::DescribeAPIDocsOutcome ApigatewayClient::DescribeAPIDocs(const DescribeAPIDocsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAPIDocs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAPIDocsResponse rsp = DescribeAPIDocsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAPIDocsOutcome(rsp);
        else
            return DescribeAPIDocsOutcome(o.GetError());
    }
    else
    {
        return DescribeAPIDocsOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribeAPIDocsAsync(const DescribeAPIDocsRequest& request, const DescribeAPIDocsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAPIDocs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::DescribeAPIDocsOutcomeCallable ApigatewayClient::DescribeAPIDocsCallable(const DescribeAPIDocsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAPIDocsOutcome()>>(
        [this, request]()
        {
            return this->DescribeAPIDocs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::DescribeAllPluginApisOutcome ApigatewayClient::DescribeAllPluginApis(const DescribeAllPluginApisRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAllPluginApis");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAllPluginApisResponse rsp = DescribeAllPluginApisResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAllPluginApisOutcome(rsp);
        else
            return DescribeAllPluginApisOutcome(o.GetError());
    }
    else
    {
        return DescribeAllPluginApisOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribeAllPluginApisAsync(const DescribeAllPluginApisRequest& request, const DescribeAllPluginApisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAllPluginApis(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::DescribeAllPluginApisOutcomeCallable ApigatewayClient::DescribeAllPluginApisCallable(const DescribeAllPluginApisRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAllPluginApisOutcome()>>(
        [this, request]()
        {
            return this->DescribeAllPluginApis(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::DescribeApiOutcome ApigatewayClient::DescribeApi(const DescribeApiRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApi");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApiResponse rsp = DescribeApiResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApiOutcome(rsp);
        else
            return DescribeApiOutcome(o.GetError());
    }
    else
    {
        return DescribeApiOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribeApiAsync(const DescribeApiRequest& request, const DescribeApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeApi(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::DescribeApiOutcomeCallable ApigatewayClient::DescribeApiCallable(const DescribeApiRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeApiOutcome()>>(
        [this, request]()
        {
            return this->DescribeApi(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::DescribeApiAppOutcome ApigatewayClient::DescribeApiApp(const DescribeApiAppRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApiApp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApiAppResponse rsp = DescribeApiAppResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApiAppOutcome(rsp);
        else
            return DescribeApiAppOutcome(o.GetError());
    }
    else
    {
        return DescribeApiAppOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribeApiAppAsync(const DescribeApiAppRequest& request, const DescribeApiAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeApiApp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::DescribeApiAppOutcomeCallable ApigatewayClient::DescribeApiAppCallable(const DescribeApiAppRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeApiAppOutcome()>>(
        [this, request]()
        {
            return this->DescribeApiApp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::DescribeApiAppBindApisStatusOutcome ApigatewayClient::DescribeApiAppBindApisStatus(const DescribeApiAppBindApisStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApiAppBindApisStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApiAppBindApisStatusResponse rsp = DescribeApiAppBindApisStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApiAppBindApisStatusOutcome(rsp);
        else
            return DescribeApiAppBindApisStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeApiAppBindApisStatusOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribeApiAppBindApisStatusAsync(const DescribeApiAppBindApisStatusRequest& request, const DescribeApiAppBindApisStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeApiAppBindApisStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::DescribeApiAppBindApisStatusOutcomeCallable ApigatewayClient::DescribeApiAppBindApisStatusCallable(const DescribeApiAppBindApisStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeApiAppBindApisStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeApiAppBindApisStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::DescribeApiAppsStatusOutcome ApigatewayClient::DescribeApiAppsStatus(const DescribeApiAppsStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApiAppsStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApiAppsStatusResponse rsp = DescribeApiAppsStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApiAppsStatusOutcome(rsp);
        else
            return DescribeApiAppsStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeApiAppsStatusOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribeApiAppsStatusAsync(const DescribeApiAppsStatusRequest& request, const DescribeApiAppsStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeApiAppsStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::DescribeApiAppsStatusOutcomeCallable ApigatewayClient::DescribeApiAppsStatusCallable(const DescribeApiAppsStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeApiAppsStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeApiAppsStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::DescribeApiBindApiAppsStatusOutcome ApigatewayClient::DescribeApiBindApiAppsStatus(const DescribeApiBindApiAppsStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApiBindApiAppsStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApiBindApiAppsStatusResponse rsp = DescribeApiBindApiAppsStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApiBindApiAppsStatusOutcome(rsp);
        else
            return DescribeApiBindApiAppsStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeApiBindApiAppsStatusOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribeApiBindApiAppsStatusAsync(const DescribeApiBindApiAppsStatusRequest& request, const DescribeApiBindApiAppsStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeApiBindApiAppsStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::DescribeApiBindApiAppsStatusOutcomeCallable ApigatewayClient::DescribeApiBindApiAppsStatusCallable(const DescribeApiBindApiAppsStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeApiBindApiAppsStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeApiBindApiAppsStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::DescribeApiEnvironmentStrategyOutcome ApigatewayClient::DescribeApiEnvironmentStrategy(const DescribeApiEnvironmentStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApiEnvironmentStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApiEnvironmentStrategyResponse rsp = DescribeApiEnvironmentStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApiEnvironmentStrategyOutcome(rsp);
        else
            return DescribeApiEnvironmentStrategyOutcome(o.GetError());
    }
    else
    {
        return DescribeApiEnvironmentStrategyOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribeApiEnvironmentStrategyAsync(const DescribeApiEnvironmentStrategyRequest& request, const DescribeApiEnvironmentStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeApiEnvironmentStrategy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::DescribeApiEnvironmentStrategyOutcomeCallable ApigatewayClient::DescribeApiEnvironmentStrategyCallable(const DescribeApiEnvironmentStrategyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeApiEnvironmentStrategyOutcome()>>(
        [this, request]()
        {
            return this->DescribeApiEnvironmentStrategy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::DescribeApiForApiAppOutcome ApigatewayClient::DescribeApiForApiApp(const DescribeApiForApiAppRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApiForApiApp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApiForApiAppResponse rsp = DescribeApiForApiAppResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApiForApiAppOutcome(rsp);
        else
            return DescribeApiForApiAppOutcome(o.GetError());
    }
    else
    {
        return DescribeApiForApiAppOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribeApiForApiAppAsync(const DescribeApiForApiAppRequest& request, const DescribeApiForApiAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeApiForApiApp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::DescribeApiForApiAppOutcomeCallable ApigatewayClient::DescribeApiForApiAppCallable(const DescribeApiForApiAppRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeApiForApiAppOutcome()>>(
        [this, request]()
        {
            return this->DescribeApiForApiApp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::DescribeApiKeyOutcome ApigatewayClient::DescribeApiKey(const DescribeApiKeyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApiKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApiKeyResponse rsp = DescribeApiKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApiKeyOutcome(rsp);
        else
            return DescribeApiKeyOutcome(o.GetError());
    }
    else
    {
        return DescribeApiKeyOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribeApiKeyAsync(const DescribeApiKeyRequest& request, const DescribeApiKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeApiKey(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::DescribeApiKeyOutcomeCallable ApigatewayClient::DescribeApiKeyCallable(const DescribeApiKeyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeApiKeyOutcome()>>(
        [this, request]()
        {
            return this->DescribeApiKey(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::DescribeApiKeysStatusOutcome ApigatewayClient::DescribeApiKeysStatus(const DescribeApiKeysStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApiKeysStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApiKeysStatusResponse rsp = DescribeApiKeysStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApiKeysStatusOutcome(rsp);
        else
            return DescribeApiKeysStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeApiKeysStatusOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribeApiKeysStatusAsync(const DescribeApiKeysStatusRequest& request, const DescribeApiKeysStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeApiKeysStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::DescribeApiKeysStatusOutcomeCallable ApigatewayClient::DescribeApiKeysStatusCallable(const DescribeApiKeysStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeApiKeysStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeApiKeysStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::DescribeApiUsagePlanOutcome ApigatewayClient::DescribeApiUsagePlan(const DescribeApiUsagePlanRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApiUsagePlan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApiUsagePlanResponse rsp = DescribeApiUsagePlanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApiUsagePlanOutcome(rsp);
        else
            return DescribeApiUsagePlanOutcome(o.GetError());
    }
    else
    {
        return DescribeApiUsagePlanOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribeApiUsagePlanAsync(const DescribeApiUsagePlanRequest& request, const DescribeApiUsagePlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeApiUsagePlan(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::DescribeApiUsagePlanOutcomeCallable ApigatewayClient::DescribeApiUsagePlanCallable(const DescribeApiUsagePlanRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeApiUsagePlanOutcome()>>(
        [this, request]()
        {
            return this->DescribeApiUsagePlan(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::DescribeApisStatusOutcome ApigatewayClient::DescribeApisStatus(const DescribeApisStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApisStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApisStatusResponse rsp = DescribeApisStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApisStatusOutcome(rsp);
        else
            return DescribeApisStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeApisStatusOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribeApisStatusAsync(const DescribeApisStatusRequest& request, const DescribeApisStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeApisStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::DescribeApisStatusOutcomeCallable ApigatewayClient::DescribeApisStatusCallable(const DescribeApisStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeApisStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeApisStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::DescribeExclusiveInstanceDetailOutcome ApigatewayClient::DescribeExclusiveInstanceDetail(const DescribeExclusiveInstanceDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeExclusiveInstanceDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeExclusiveInstanceDetailResponse rsp = DescribeExclusiveInstanceDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeExclusiveInstanceDetailOutcome(rsp);
        else
            return DescribeExclusiveInstanceDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeExclusiveInstanceDetailOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribeExclusiveInstanceDetailAsync(const DescribeExclusiveInstanceDetailRequest& request, const DescribeExclusiveInstanceDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeExclusiveInstanceDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::DescribeExclusiveInstanceDetailOutcomeCallable ApigatewayClient::DescribeExclusiveInstanceDetailCallable(const DescribeExclusiveInstanceDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeExclusiveInstanceDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeExclusiveInstanceDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::DescribeExclusiveInstanceRegionsOutcome ApigatewayClient::DescribeExclusiveInstanceRegions(const DescribeExclusiveInstanceRegionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeExclusiveInstanceRegions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeExclusiveInstanceRegionsResponse rsp = DescribeExclusiveInstanceRegionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeExclusiveInstanceRegionsOutcome(rsp);
        else
            return DescribeExclusiveInstanceRegionsOutcome(o.GetError());
    }
    else
    {
        return DescribeExclusiveInstanceRegionsOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribeExclusiveInstanceRegionsAsync(const DescribeExclusiveInstanceRegionsRequest& request, const DescribeExclusiveInstanceRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeExclusiveInstanceRegions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::DescribeExclusiveInstanceRegionsOutcomeCallable ApigatewayClient::DescribeExclusiveInstanceRegionsCallable(const DescribeExclusiveInstanceRegionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeExclusiveInstanceRegionsOutcome()>>(
        [this, request]()
        {
            return this->DescribeExclusiveInstanceRegions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::DescribeExclusiveInstancesOutcome ApigatewayClient::DescribeExclusiveInstances(const DescribeExclusiveInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeExclusiveInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeExclusiveInstancesResponse rsp = DescribeExclusiveInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeExclusiveInstancesOutcome(rsp);
        else
            return DescribeExclusiveInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeExclusiveInstancesOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribeExclusiveInstancesAsync(const DescribeExclusiveInstancesRequest& request, const DescribeExclusiveInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeExclusiveInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::DescribeExclusiveInstancesOutcomeCallable ApigatewayClient::DescribeExclusiveInstancesCallable(const DescribeExclusiveInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeExclusiveInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeExclusiveInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::DescribeExclusiveInstancesStatusOutcome ApigatewayClient::DescribeExclusiveInstancesStatus(const DescribeExclusiveInstancesStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeExclusiveInstancesStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeExclusiveInstancesStatusResponse rsp = DescribeExclusiveInstancesStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeExclusiveInstancesStatusOutcome(rsp);
        else
            return DescribeExclusiveInstancesStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeExclusiveInstancesStatusOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribeExclusiveInstancesStatusAsync(const DescribeExclusiveInstancesStatusRequest& request, const DescribeExclusiveInstancesStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeExclusiveInstancesStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::DescribeExclusiveInstancesStatusOutcomeCallable ApigatewayClient::DescribeExclusiveInstancesStatusCallable(const DescribeExclusiveInstancesStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeExclusiveInstancesStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeExclusiveInstancesStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::DescribeIPStrategyOutcome ApigatewayClient::DescribeIPStrategy(const DescribeIPStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIPStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIPStrategyResponse rsp = DescribeIPStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIPStrategyOutcome(rsp);
        else
            return DescribeIPStrategyOutcome(o.GetError());
    }
    else
    {
        return DescribeIPStrategyOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribeIPStrategyAsync(const DescribeIPStrategyRequest& request, const DescribeIPStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeIPStrategy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::DescribeIPStrategyOutcomeCallable ApigatewayClient::DescribeIPStrategyCallable(const DescribeIPStrategyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeIPStrategyOutcome()>>(
        [this, request]()
        {
            return this->DescribeIPStrategy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::DescribeIPStrategyApisStatusOutcome ApigatewayClient::DescribeIPStrategyApisStatus(const DescribeIPStrategyApisStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIPStrategyApisStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIPStrategyApisStatusResponse rsp = DescribeIPStrategyApisStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIPStrategyApisStatusOutcome(rsp);
        else
            return DescribeIPStrategyApisStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeIPStrategyApisStatusOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribeIPStrategyApisStatusAsync(const DescribeIPStrategyApisStatusRequest& request, const DescribeIPStrategyApisStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeIPStrategyApisStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::DescribeIPStrategyApisStatusOutcomeCallable ApigatewayClient::DescribeIPStrategyApisStatusCallable(const DescribeIPStrategyApisStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeIPStrategyApisStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeIPStrategyApisStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::DescribeIPStrategysStatusOutcome ApigatewayClient::DescribeIPStrategysStatus(const DescribeIPStrategysStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIPStrategysStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIPStrategysStatusResponse rsp = DescribeIPStrategysStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIPStrategysStatusOutcome(rsp);
        else
            return DescribeIPStrategysStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeIPStrategysStatusOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribeIPStrategysStatusAsync(const DescribeIPStrategysStatusRequest& request, const DescribeIPStrategysStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeIPStrategysStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::DescribeIPStrategysStatusOutcomeCallable ApigatewayClient::DescribeIPStrategysStatusCallable(const DescribeIPStrategysStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeIPStrategysStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeIPStrategysStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::DescribeInstancesNetworkConfigOutcome ApigatewayClient::DescribeInstancesNetworkConfig(const DescribeInstancesNetworkConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstancesNetworkConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstancesNetworkConfigResponse rsp = DescribeInstancesNetworkConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstancesNetworkConfigOutcome(rsp);
        else
            return DescribeInstancesNetworkConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeInstancesNetworkConfigOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribeInstancesNetworkConfigAsync(const DescribeInstancesNetworkConfigRequest& request, const DescribeInstancesNetworkConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstancesNetworkConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::DescribeInstancesNetworkConfigOutcomeCallable ApigatewayClient::DescribeInstancesNetworkConfigCallable(const DescribeInstancesNetworkConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstancesNetworkConfigOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstancesNetworkConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::DescribeLogSearchOutcome ApigatewayClient::DescribeLogSearch(const DescribeLogSearchRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLogSearch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLogSearchResponse rsp = DescribeLogSearchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLogSearchOutcome(rsp);
        else
            return DescribeLogSearchOutcome(o.GetError());
    }
    else
    {
        return DescribeLogSearchOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribeLogSearchAsync(const DescribeLogSearchRequest& request, const DescribeLogSearchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLogSearch(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::DescribeLogSearchOutcomeCallable ApigatewayClient::DescribeLogSearchCallable(const DescribeLogSearchRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLogSearchOutcome()>>(
        [this, request]()
        {
            return this->DescribeLogSearch(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::DescribePluginOutcome ApigatewayClient::DescribePlugin(const DescribePluginRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePlugin");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePluginResponse rsp = DescribePluginResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePluginOutcome(rsp);
        else
            return DescribePluginOutcome(o.GetError());
    }
    else
    {
        return DescribePluginOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribePluginAsync(const DescribePluginRequest& request, const DescribePluginAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePlugin(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::DescribePluginOutcomeCallable ApigatewayClient::DescribePluginCallable(const DescribePluginRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePluginOutcome()>>(
        [this, request]()
        {
            return this->DescribePlugin(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::DescribePluginApisOutcome ApigatewayClient::DescribePluginApis(const DescribePluginApisRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePluginApis");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePluginApisResponse rsp = DescribePluginApisResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePluginApisOutcome(rsp);
        else
            return DescribePluginApisOutcome(o.GetError());
    }
    else
    {
        return DescribePluginApisOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribePluginApisAsync(const DescribePluginApisRequest& request, const DescribePluginApisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePluginApis(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::DescribePluginApisOutcomeCallable ApigatewayClient::DescribePluginApisCallable(const DescribePluginApisRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePluginApisOutcome()>>(
        [this, request]()
        {
            return this->DescribePluginApis(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::DescribePluginsOutcome ApigatewayClient::DescribePlugins(const DescribePluginsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePlugins");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePluginsResponse rsp = DescribePluginsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePluginsOutcome(rsp);
        else
            return DescribePluginsOutcome(o.GetError());
    }
    else
    {
        return DescribePluginsOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribePluginsAsync(const DescribePluginsRequest& request, const DescribePluginsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePlugins(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::DescribePluginsOutcomeCallable ApigatewayClient::DescribePluginsCallable(const DescribePluginsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePluginsOutcome()>>(
        [this, request]()
        {
            return this->DescribePlugins(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::DescribePluginsByApiOutcome ApigatewayClient::DescribePluginsByApi(const DescribePluginsByApiRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePluginsByApi");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePluginsByApiResponse rsp = DescribePluginsByApiResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePluginsByApiOutcome(rsp);
        else
            return DescribePluginsByApiOutcome(o.GetError());
    }
    else
    {
        return DescribePluginsByApiOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribePluginsByApiAsync(const DescribePluginsByApiRequest& request, const DescribePluginsByApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePluginsByApi(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::DescribePluginsByApiOutcomeCallable ApigatewayClient::DescribePluginsByApiCallable(const DescribePluginsByApiRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePluginsByApiOutcome()>>(
        [this, request]()
        {
            return this->DescribePluginsByApi(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::DescribeServiceOutcome ApigatewayClient::DescribeService(const DescribeServiceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeServiceResponse rsp = DescribeServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeServiceOutcome(rsp);
        else
            return DescribeServiceOutcome(o.GetError());
    }
    else
    {
        return DescribeServiceOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribeServiceAsync(const DescribeServiceRequest& request, const DescribeServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeService(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::DescribeServiceOutcomeCallable ApigatewayClient::DescribeServiceCallable(const DescribeServiceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeServiceOutcome()>>(
        [this, request]()
        {
            return this->DescribeService(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::DescribeServiceEnvironmentListOutcome ApigatewayClient::DescribeServiceEnvironmentList(const DescribeServiceEnvironmentListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeServiceEnvironmentList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeServiceEnvironmentListResponse rsp = DescribeServiceEnvironmentListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeServiceEnvironmentListOutcome(rsp);
        else
            return DescribeServiceEnvironmentListOutcome(o.GetError());
    }
    else
    {
        return DescribeServiceEnvironmentListOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribeServiceEnvironmentListAsync(const DescribeServiceEnvironmentListRequest& request, const DescribeServiceEnvironmentListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeServiceEnvironmentList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::DescribeServiceEnvironmentListOutcomeCallable ApigatewayClient::DescribeServiceEnvironmentListCallable(const DescribeServiceEnvironmentListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeServiceEnvironmentListOutcome()>>(
        [this, request]()
        {
            return this->DescribeServiceEnvironmentList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::DescribeServiceEnvironmentReleaseHistoryOutcome ApigatewayClient::DescribeServiceEnvironmentReleaseHistory(const DescribeServiceEnvironmentReleaseHistoryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeServiceEnvironmentReleaseHistory");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeServiceEnvironmentReleaseHistoryResponse rsp = DescribeServiceEnvironmentReleaseHistoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeServiceEnvironmentReleaseHistoryOutcome(rsp);
        else
            return DescribeServiceEnvironmentReleaseHistoryOutcome(o.GetError());
    }
    else
    {
        return DescribeServiceEnvironmentReleaseHistoryOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribeServiceEnvironmentReleaseHistoryAsync(const DescribeServiceEnvironmentReleaseHistoryRequest& request, const DescribeServiceEnvironmentReleaseHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeServiceEnvironmentReleaseHistory(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::DescribeServiceEnvironmentReleaseHistoryOutcomeCallable ApigatewayClient::DescribeServiceEnvironmentReleaseHistoryCallable(const DescribeServiceEnvironmentReleaseHistoryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeServiceEnvironmentReleaseHistoryOutcome()>>(
        [this, request]()
        {
            return this->DescribeServiceEnvironmentReleaseHistory(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::DescribeServiceEnvironmentStrategyOutcome ApigatewayClient::DescribeServiceEnvironmentStrategy(const DescribeServiceEnvironmentStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeServiceEnvironmentStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeServiceEnvironmentStrategyResponse rsp = DescribeServiceEnvironmentStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeServiceEnvironmentStrategyOutcome(rsp);
        else
            return DescribeServiceEnvironmentStrategyOutcome(o.GetError());
    }
    else
    {
        return DescribeServiceEnvironmentStrategyOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribeServiceEnvironmentStrategyAsync(const DescribeServiceEnvironmentStrategyRequest& request, const DescribeServiceEnvironmentStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeServiceEnvironmentStrategy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::DescribeServiceEnvironmentStrategyOutcomeCallable ApigatewayClient::DescribeServiceEnvironmentStrategyCallable(const DescribeServiceEnvironmentStrategyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeServiceEnvironmentStrategyOutcome()>>(
        [this, request]()
        {
            return this->DescribeServiceEnvironmentStrategy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::DescribeServiceForApiAppOutcome ApigatewayClient::DescribeServiceForApiApp(const DescribeServiceForApiAppRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeServiceForApiApp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeServiceForApiAppResponse rsp = DescribeServiceForApiAppResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeServiceForApiAppOutcome(rsp);
        else
            return DescribeServiceForApiAppOutcome(o.GetError());
    }
    else
    {
        return DescribeServiceForApiAppOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribeServiceForApiAppAsync(const DescribeServiceForApiAppRequest& request, const DescribeServiceForApiAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeServiceForApiApp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::DescribeServiceForApiAppOutcomeCallable ApigatewayClient::DescribeServiceForApiAppCallable(const DescribeServiceForApiAppRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeServiceForApiAppOutcome()>>(
        [this, request]()
        {
            return this->DescribeServiceForApiApp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::DescribeServiceReleaseVersionOutcome ApigatewayClient::DescribeServiceReleaseVersion(const DescribeServiceReleaseVersionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeServiceReleaseVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeServiceReleaseVersionResponse rsp = DescribeServiceReleaseVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeServiceReleaseVersionOutcome(rsp);
        else
            return DescribeServiceReleaseVersionOutcome(o.GetError());
    }
    else
    {
        return DescribeServiceReleaseVersionOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribeServiceReleaseVersionAsync(const DescribeServiceReleaseVersionRequest& request, const DescribeServiceReleaseVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeServiceReleaseVersion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::DescribeServiceReleaseVersionOutcomeCallable ApigatewayClient::DescribeServiceReleaseVersionCallable(const DescribeServiceReleaseVersionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeServiceReleaseVersionOutcome()>>(
        [this, request]()
        {
            return this->DescribeServiceReleaseVersion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::DescribeServiceSubDomainMappingsOutcome ApigatewayClient::DescribeServiceSubDomainMappings(const DescribeServiceSubDomainMappingsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeServiceSubDomainMappings");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeServiceSubDomainMappingsResponse rsp = DescribeServiceSubDomainMappingsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeServiceSubDomainMappingsOutcome(rsp);
        else
            return DescribeServiceSubDomainMappingsOutcome(o.GetError());
    }
    else
    {
        return DescribeServiceSubDomainMappingsOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribeServiceSubDomainMappingsAsync(const DescribeServiceSubDomainMappingsRequest& request, const DescribeServiceSubDomainMappingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeServiceSubDomainMappings(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::DescribeServiceSubDomainMappingsOutcomeCallable ApigatewayClient::DescribeServiceSubDomainMappingsCallable(const DescribeServiceSubDomainMappingsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeServiceSubDomainMappingsOutcome()>>(
        [this, request]()
        {
            return this->DescribeServiceSubDomainMappings(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::DescribeServiceSubDomainsOutcome ApigatewayClient::DescribeServiceSubDomains(const DescribeServiceSubDomainsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeServiceSubDomains");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeServiceSubDomainsResponse rsp = DescribeServiceSubDomainsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeServiceSubDomainsOutcome(rsp);
        else
            return DescribeServiceSubDomainsOutcome(o.GetError());
    }
    else
    {
        return DescribeServiceSubDomainsOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribeServiceSubDomainsAsync(const DescribeServiceSubDomainsRequest& request, const DescribeServiceSubDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeServiceSubDomains(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::DescribeServiceSubDomainsOutcomeCallable ApigatewayClient::DescribeServiceSubDomainsCallable(const DescribeServiceSubDomainsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeServiceSubDomainsOutcome()>>(
        [this, request]()
        {
            return this->DescribeServiceSubDomains(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::DescribeServiceUsagePlanOutcome ApigatewayClient::DescribeServiceUsagePlan(const DescribeServiceUsagePlanRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeServiceUsagePlan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeServiceUsagePlanResponse rsp = DescribeServiceUsagePlanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeServiceUsagePlanOutcome(rsp);
        else
            return DescribeServiceUsagePlanOutcome(o.GetError());
    }
    else
    {
        return DescribeServiceUsagePlanOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribeServiceUsagePlanAsync(const DescribeServiceUsagePlanRequest& request, const DescribeServiceUsagePlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeServiceUsagePlan(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::DescribeServiceUsagePlanOutcomeCallable ApigatewayClient::DescribeServiceUsagePlanCallable(const DescribeServiceUsagePlanRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeServiceUsagePlanOutcome()>>(
        [this, request]()
        {
            return this->DescribeServiceUsagePlan(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::DescribeServicesStatusOutcome ApigatewayClient::DescribeServicesStatus(const DescribeServicesStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeServicesStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeServicesStatusResponse rsp = DescribeServicesStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeServicesStatusOutcome(rsp);
        else
            return DescribeServicesStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeServicesStatusOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribeServicesStatusAsync(const DescribeServicesStatusRequest& request, const DescribeServicesStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeServicesStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::DescribeServicesStatusOutcomeCallable ApigatewayClient::DescribeServicesStatusCallable(const DescribeServicesStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeServicesStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeServicesStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::DescribeUpstreamBindApisOutcome ApigatewayClient::DescribeUpstreamBindApis(const DescribeUpstreamBindApisRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUpstreamBindApis");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUpstreamBindApisResponse rsp = DescribeUpstreamBindApisResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUpstreamBindApisOutcome(rsp);
        else
            return DescribeUpstreamBindApisOutcome(o.GetError());
    }
    else
    {
        return DescribeUpstreamBindApisOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribeUpstreamBindApisAsync(const DescribeUpstreamBindApisRequest& request, const DescribeUpstreamBindApisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUpstreamBindApis(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::DescribeUpstreamBindApisOutcomeCallable ApigatewayClient::DescribeUpstreamBindApisCallable(const DescribeUpstreamBindApisRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUpstreamBindApisOutcome()>>(
        [this, request]()
        {
            return this->DescribeUpstreamBindApis(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::DescribeUpstreamsOutcome ApigatewayClient::DescribeUpstreams(const DescribeUpstreamsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUpstreams");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUpstreamsResponse rsp = DescribeUpstreamsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUpstreamsOutcome(rsp);
        else
            return DescribeUpstreamsOutcome(o.GetError());
    }
    else
    {
        return DescribeUpstreamsOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribeUpstreamsAsync(const DescribeUpstreamsRequest& request, const DescribeUpstreamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUpstreams(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::DescribeUpstreamsOutcomeCallable ApigatewayClient::DescribeUpstreamsCallable(const DescribeUpstreamsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUpstreamsOutcome()>>(
        [this, request]()
        {
            return this->DescribeUpstreams(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::DescribeUsagePlanOutcome ApigatewayClient::DescribeUsagePlan(const DescribeUsagePlanRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUsagePlan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUsagePlanResponse rsp = DescribeUsagePlanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUsagePlanOutcome(rsp);
        else
            return DescribeUsagePlanOutcome(o.GetError());
    }
    else
    {
        return DescribeUsagePlanOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribeUsagePlanAsync(const DescribeUsagePlanRequest& request, const DescribeUsagePlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUsagePlan(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::DescribeUsagePlanOutcomeCallable ApigatewayClient::DescribeUsagePlanCallable(const DescribeUsagePlanRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUsagePlanOutcome()>>(
        [this, request]()
        {
            return this->DescribeUsagePlan(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::DescribeUsagePlanEnvironmentsOutcome ApigatewayClient::DescribeUsagePlanEnvironments(const DescribeUsagePlanEnvironmentsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUsagePlanEnvironments");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUsagePlanEnvironmentsResponse rsp = DescribeUsagePlanEnvironmentsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUsagePlanEnvironmentsOutcome(rsp);
        else
            return DescribeUsagePlanEnvironmentsOutcome(o.GetError());
    }
    else
    {
        return DescribeUsagePlanEnvironmentsOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribeUsagePlanEnvironmentsAsync(const DescribeUsagePlanEnvironmentsRequest& request, const DescribeUsagePlanEnvironmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUsagePlanEnvironments(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::DescribeUsagePlanEnvironmentsOutcomeCallable ApigatewayClient::DescribeUsagePlanEnvironmentsCallable(const DescribeUsagePlanEnvironmentsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUsagePlanEnvironmentsOutcome()>>(
        [this, request]()
        {
            return this->DescribeUsagePlanEnvironments(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::DescribeUsagePlanSecretIdsOutcome ApigatewayClient::DescribeUsagePlanSecretIds(const DescribeUsagePlanSecretIdsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUsagePlanSecretIds");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUsagePlanSecretIdsResponse rsp = DescribeUsagePlanSecretIdsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUsagePlanSecretIdsOutcome(rsp);
        else
            return DescribeUsagePlanSecretIdsOutcome(o.GetError());
    }
    else
    {
        return DescribeUsagePlanSecretIdsOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribeUsagePlanSecretIdsAsync(const DescribeUsagePlanSecretIdsRequest& request, const DescribeUsagePlanSecretIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUsagePlanSecretIds(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::DescribeUsagePlanSecretIdsOutcomeCallable ApigatewayClient::DescribeUsagePlanSecretIdsCallable(const DescribeUsagePlanSecretIdsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUsagePlanSecretIdsOutcome()>>(
        [this, request]()
        {
            return this->DescribeUsagePlanSecretIds(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::DescribeUsagePlansStatusOutcome ApigatewayClient::DescribeUsagePlansStatus(const DescribeUsagePlansStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUsagePlansStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUsagePlansStatusResponse rsp = DescribeUsagePlansStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUsagePlansStatusOutcome(rsp);
        else
            return DescribeUsagePlansStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeUsagePlansStatusOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribeUsagePlansStatusAsync(const DescribeUsagePlansStatusRequest& request, const DescribeUsagePlansStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUsagePlansStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::DescribeUsagePlansStatusOutcomeCallable ApigatewayClient::DescribeUsagePlansStatusCallable(const DescribeUsagePlansStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUsagePlansStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeUsagePlansStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::DetachPluginOutcome ApigatewayClient::DetachPlugin(const DetachPluginRequest &request)
{
    auto outcome = MakeRequest(request, "DetachPlugin");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DetachPluginResponse rsp = DetachPluginResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DetachPluginOutcome(rsp);
        else
            return DetachPluginOutcome(o.GetError());
    }
    else
    {
        return DetachPluginOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DetachPluginAsync(const DetachPluginRequest& request, const DetachPluginAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DetachPlugin(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::DetachPluginOutcomeCallable ApigatewayClient::DetachPluginCallable(const DetachPluginRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DetachPluginOutcome()>>(
        [this, request]()
        {
            return this->DetachPlugin(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::DisableApiKeyOutcome ApigatewayClient::DisableApiKey(const DisableApiKeyRequest &request)
{
    auto outcome = MakeRequest(request, "DisableApiKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisableApiKeyResponse rsp = DisableApiKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisableApiKeyOutcome(rsp);
        else
            return DisableApiKeyOutcome(o.GetError());
    }
    else
    {
        return DisableApiKeyOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DisableApiKeyAsync(const DisableApiKeyRequest& request, const DisableApiKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DisableApiKey(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::DisableApiKeyOutcomeCallable ApigatewayClient::DisableApiKeyCallable(const DisableApiKeyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DisableApiKeyOutcome()>>(
        [this, request]()
        {
            return this->DisableApiKey(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::EnableApiKeyOutcome ApigatewayClient::EnableApiKey(const EnableApiKeyRequest &request)
{
    auto outcome = MakeRequest(request, "EnableApiKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnableApiKeyResponse rsp = EnableApiKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnableApiKeyOutcome(rsp);
        else
            return EnableApiKeyOutcome(o.GetError());
    }
    else
    {
        return EnableApiKeyOutcome(outcome.GetError());
    }
}

void ApigatewayClient::EnableApiKeyAsync(const EnableApiKeyRequest& request, const EnableApiKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->EnableApiKey(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::EnableApiKeyOutcomeCallable ApigatewayClient::EnableApiKeyCallable(const EnableApiKeyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<EnableApiKeyOutcome()>>(
        [this, request]()
        {
            return this->EnableApiKey(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::ImportOpenApiOutcome ApigatewayClient::ImportOpenApi(const ImportOpenApiRequest &request)
{
    auto outcome = MakeRequest(request, "ImportOpenApi");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ImportOpenApiResponse rsp = ImportOpenApiResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ImportOpenApiOutcome(rsp);
        else
            return ImportOpenApiOutcome(o.GetError());
    }
    else
    {
        return ImportOpenApiOutcome(outcome.GetError());
    }
}

void ApigatewayClient::ImportOpenApiAsync(const ImportOpenApiRequest& request, const ImportOpenApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ImportOpenApi(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::ImportOpenApiOutcomeCallable ApigatewayClient::ImportOpenApiCallable(const ImportOpenApiRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ImportOpenApiOutcome()>>(
        [this, request]()
        {
            return this->ImportOpenApi(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::ModifyAPIDocOutcome ApigatewayClient::ModifyAPIDoc(const ModifyAPIDocRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAPIDoc");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAPIDocResponse rsp = ModifyAPIDocResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAPIDocOutcome(rsp);
        else
            return ModifyAPIDocOutcome(o.GetError());
    }
    else
    {
        return ModifyAPIDocOutcome(outcome.GetError());
    }
}

void ApigatewayClient::ModifyAPIDocAsync(const ModifyAPIDocRequest& request, const ModifyAPIDocAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAPIDoc(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::ModifyAPIDocOutcomeCallable ApigatewayClient::ModifyAPIDocCallable(const ModifyAPIDocRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAPIDocOutcome()>>(
        [this, request]()
        {
            return this->ModifyAPIDoc(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::ModifyApiOutcome ApigatewayClient::ModifyApi(const ModifyApiRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyApi");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyApiResponse rsp = ModifyApiResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyApiOutcome(rsp);
        else
            return ModifyApiOutcome(o.GetError());
    }
    else
    {
        return ModifyApiOutcome(outcome.GetError());
    }
}

void ApigatewayClient::ModifyApiAsync(const ModifyApiRequest& request, const ModifyApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyApi(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::ModifyApiOutcomeCallable ApigatewayClient::ModifyApiCallable(const ModifyApiRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyApiOutcome()>>(
        [this, request]()
        {
            return this->ModifyApi(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::ModifyApiAppOutcome ApigatewayClient::ModifyApiApp(const ModifyApiAppRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyApiApp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyApiAppResponse rsp = ModifyApiAppResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyApiAppOutcome(rsp);
        else
            return ModifyApiAppOutcome(o.GetError());
    }
    else
    {
        return ModifyApiAppOutcome(outcome.GetError());
    }
}

void ApigatewayClient::ModifyApiAppAsync(const ModifyApiAppRequest& request, const ModifyApiAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyApiApp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::ModifyApiAppOutcomeCallable ApigatewayClient::ModifyApiAppCallable(const ModifyApiAppRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyApiAppOutcome()>>(
        [this, request]()
        {
            return this->ModifyApiApp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::ModifyApiEnvironmentStrategyOutcome ApigatewayClient::ModifyApiEnvironmentStrategy(const ModifyApiEnvironmentStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyApiEnvironmentStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyApiEnvironmentStrategyResponse rsp = ModifyApiEnvironmentStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyApiEnvironmentStrategyOutcome(rsp);
        else
            return ModifyApiEnvironmentStrategyOutcome(o.GetError());
    }
    else
    {
        return ModifyApiEnvironmentStrategyOutcome(outcome.GetError());
    }
}

void ApigatewayClient::ModifyApiEnvironmentStrategyAsync(const ModifyApiEnvironmentStrategyRequest& request, const ModifyApiEnvironmentStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyApiEnvironmentStrategy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::ModifyApiEnvironmentStrategyOutcomeCallable ApigatewayClient::ModifyApiEnvironmentStrategyCallable(const ModifyApiEnvironmentStrategyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyApiEnvironmentStrategyOutcome()>>(
        [this, request]()
        {
            return this->ModifyApiEnvironmentStrategy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::ModifyApiIncrementOutcome ApigatewayClient::ModifyApiIncrement(const ModifyApiIncrementRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyApiIncrement");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyApiIncrementResponse rsp = ModifyApiIncrementResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyApiIncrementOutcome(rsp);
        else
            return ModifyApiIncrementOutcome(o.GetError());
    }
    else
    {
        return ModifyApiIncrementOutcome(outcome.GetError());
    }
}

void ApigatewayClient::ModifyApiIncrementAsync(const ModifyApiIncrementRequest& request, const ModifyApiIncrementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyApiIncrement(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::ModifyApiIncrementOutcomeCallable ApigatewayClient::ModifyApiIncrementCallable(const ModifyApiIncrementRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyApiIncrementOutcome()>>(
        [this, request]()
        {
            return this->ModifyApiIncrement(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::ModifyExclusiveInstanceOutcome ApigatewayClient::ModifyExclusiveInstance(const ModifyExclusiveInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyExclusiveInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyExclusiveInstanceResponse rsp = ModifyExclusiveInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyExclusiveInstanceOutcome(rsp);
        else
            return ModifyExclusiveInstanceOutcome(o.GetError());
    }
    else
    {
        return ModifyExclusiveInstanceOutcome(outcome.GetError());
    }
}

void ApigatewayClient::ModifyExclusiveInstanceAsync(const ModifyExclusiveInstanceRequest& request, const ModifyExclusiveInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyExclusiveInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::ModifyExclusiveInstanceOutcomeCallable ApigatewayClient::ModifyExclusiveInstanceCallable(const ModifyExclusiveInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyExclusiveInstanceOutcome()>>(
        [this, request]()
        {
            return this->ModifyExclusiveInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::ModifyIPStrategyOutcome ApigatewayClient::ModifyIPStrategy(const ModifyIPStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyIPStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyIPStrategyResponse rsp = ModifyIPStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyIPStrategyOutcome(rsp);
        else
            return ModifyIPStrategyOutcome(o.GetError());
    }
    else
    {
        return ModifyIPStrategyOutcome(outcome.GetError());
    }
}

void ApigatewayClient::ModifyIPStrategyAsync(const ModifyIPStrategyRequest& request, const ModifyIPStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyIPStrategy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::ModifyIPStrategyOutcomeCallable ApigatewayClient::ModifyIPStrategyCallable(const ModifyIPStrategyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyIPStrategyOutcome()>>(
        [this, request]()
        {
            return this->ModifyIPStrategy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::ModifyPluginOutcome ApigatewayClient::ModifyPlugin(const ModifyPluginRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPlugin");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPluginResponse rsp = ModifyPluginResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPluginOutcome(rsp);
        else
            return ModifyPluginOutcome(o.GetError());
    }
    else
    {
        return ModifyPluginOutcome(outcome.GetError());
    }
}

void ApigatewayClient::ModifyPluginAsync(const ModifyPluginRequest& request, const ModifyPluginAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyPlugin(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::ModifyPluginOutcomeCallable ApigatewayClient::ModifyPluginCallable(const ModifyPluginRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyPluginOutcome()>>(
        [this, request]()
        {
            return this->ModifyPlugin(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::ModifyServiceOutcome ApigatewayClient::ModifyService(const ModifyServiceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyServiceResponse rsp = ModifyServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyServiceOutcome(rsp);
        else
            return ModifyServiceOutcome(o.GetError());
    }
    else
    {
        return ModifyServiceOutcome(outcome.GetError());
    }
}

void ApigatewayClient::ModifyServiceAsync(const ModifyServiceRequest& request, const ModifyServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyService(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::ModifyServiceOutcomeCallable ApigatewayClient::ModifyServiceCallable(const ModifyServiceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyServiceOutcome()>>(
        [this, request]()
        {
            return this->ModifyService(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::ModifyServiceEnvironmentStrategyOutcome ApigatewayClient::ModifyServiceEnvironmentStrategy(const ModifyServiceEnvironmentStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyServiceEnvironmentStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyServiceEnvironmentStrategyResponse rsp = ModifyServiceEnvironmentStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyServiceEnvironmentStrategyOutcome(rsp);
        else
            return ModifyServiceEnvironmentStrategyOutcome(o.GetError());
    }
    else
    {
        return ModifyServiceEnvironmentStrategyOutcome(outcome.GetError());
    }
}

void ApigatewayClient::ModifyServiceEnvironmentStrategyAsync(const ModifyServiceEnvironmentStrategyRequest& request, const ModifyServiceEnvironmentStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyServiceEnvironmentStrategy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::ModifyServiceEnvironmentStrategyOutcomeCallable ApigatewayClient::ModifyServiceEnvironmentStrategyCallable(const ModifyServiceEnvironmentStrategyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyServiceEnvironmentStrategyOutcome()>>(
        [this, request]()
        {
            return this->ModifyServiceEnvironmentStrategy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::ModifySubDomainOutcome ApigatewayClient::ModifySubDomain(const ModifySubDomainRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySubDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySubDomainResponse rsp = ModifySubDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySubDomainOutcome(rsp);
        else
            return ModifySubDomainOutcome(o.GetError());
    }
    else
    {
        return ModifySubDomainOutcome(outcome.GetError());
    }
}

void ApigatewayClient::ModifySubDomainAsync(const ModifySubDomainRequest& request, const ModifySubDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySubDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::ModifySubDomainOutcomeCallable ApigatewayClient::ModifySubDomainCallable(const ModifySubDomainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySubDomainOutcome()>>(
        [this, request]()
        {
            return this->ModifySubDomain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::ModifyUpstreamOutcome ApigatewayClient::ModifyUpstream(const ModifyUpstreamRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyUpstream");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyUpstreamResponse rsp = ModifyUpstreamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyUpstreamOutcome(rsp);
        else
            return ModifyUpstreamOutcome(o.GetError());
    }
    else
    {
        return ModifyUpstreamOutcome(outcome.GetError());
    }
}

void ApigatewayClient::ModifyUpstreamAsync(const ModifyUpstreamRequest& request, const ModifyUpstreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyUpstream(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::ModifyUpstreamOutcomeCallable ApigatewayClient::ModifyUpstreamCallable(const ModifyUpstreamRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyUpstreamOutcome()>>(
        [this, request]()
        {
            return this->ModifyUpstream(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::ModifyUsagePlanOutcome ApigatewayClient::ModifyUsagePlan(const ModifyUsagePlanRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyUsagePlan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyUsagePlanResponse rsp = ModifyUsagePlanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyUsagePlanOutcome(rsp);
        else
            return ModifyUsagePlanOutcome(o.GetError());
    }
    else
    {
        return ModifyUsagePlanOutcome(outcome.GetError());
    }
}

void ApigatewayClient::ModifyUsagePlanAsync(const ModifyUsagePlanRequest& request, const ModifyUsagePlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyUsagePlan(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::ModifyUsagePlanOutcomeCallable ApigatewayClient::ModifyUsagePlanCallable(const ModifyUsagePlanRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyUsagePlanOutcome()>>(
        [this, request]()
        {
            return this->ModifyUsagePlan(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::ReleaseServiceOutcome ApigatewayClient::ReleaseService(const ReleaseServiceRequest &request)
{
    auto outcome = MakeRequest(request, "ReleaseService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReleaseServiceResponse rsp = ReleaseServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReleaseServiceOutcome(rsp);
        else
            return ReleaseServiceOutcome(o.GetError());
    }
    else
    {
        return ReleaseServiceOutcome(outcome.GetError());
    }
}

void ApigatewayClient::ReleaseServiceAsync(const ReleaseServiceRequest& request, const ReleaseServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ReleaseService(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::ReleaseServiceOutcomeCallable ApigatewayClient::ReleaseServiceCallable(const ReleaseServiceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ReleaseServiceOutcome()>>(
        [this, request]()
        {
            return this->ReleaseService(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::ResetAPIDocPasswordOutcome ApigatewayClient::ResetAPIDocPassword(const ResetAPIDocPasswordRequest &request)
{
    auto outcome = MakeRequest(request, "ResetAPIDocPassword");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetAPIDocPasswordResponse rsp = ResetAPIDocPasswordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetAPIDocPasswordOutcome(rsp);
        else
            return ResetAPIDocPasswordOutcome(o.GetError());
    }
    else
    {
        return ResetAPIDocPasswordOutcome(outcome.GetError());
    }
}

void ApigatewayClient::ResetAPIDocPasswordAsync(const ResetAPIDocPasswordRequest& request, const ResetAPIDocPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResetAPIDocPassword(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::ResetAPIDocPasswordOutcomeCallable ApigatewayClient::ResetAPIDocPasswordCallable(const ResetAPIDocPasswordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResetAPIDocPasswordOutcome()>>(
        [this, request]()
        {
            return this->ResetAPIDocPassword(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::UnBindEnvironmentOutcome ApigatewayClient::UnBindEnvironment(const UnBindEnvironmentRequest &request)
{
    auto outcome = MakeRequest(request, "UnBindEnvironment");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnBindEnvironmentResponse rsp = UnBindEnvironmentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnBindEnvironmentOutcome(rsp);
        else
            return UnBindEnvironmentOutcome(o.GetError());
    }
    else
    {
        return UnBindEnvironmentOutcome(outcome.GetError());
    }
}

void ApigatewayClient::UnBindEnvironmentAsync(const UnBindEnvironmentRequest& request, const UnBindEnvironmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UnBindEnvironment(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::UnBindEnvironmentOutcomeCallable ApigatewayClient::UnBindEnvironmentCallable(const UnBindEnvironmentRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UnBindEnvironmentOutcome()>>(
        [this, request]()
        {
            return this->UnBindEnvironment(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::UnBindIPStrategyOutcome ApigatewayClient::UnBindIPStrategy(const UnBindIPStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "UnBindIPStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnBindIPStrategyResponse rsp = UnBindIPStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnBindIPStrategyOutcome(rsp);
        else
            return UnBindIPStrategyOutcome(o.GetError());
    }
    else
    {
        return UnBindIPStrategyOutcome(outcome.GetError());
    }
}

void ApigatewayClient::UnBindIPStrategyAsync(const UnBindIPStrategyRequest& request, const UnBindIPStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UnBindIPStrategy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::UnBindIPStrategyOutcomeCallable ApigatewayClient::UnBindIPStrategyCallable(const UnBindIPStrategyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UnBindIPStrategyOutcome()>>(
        [this, request]()
        {
            return this->UnBindIPStrategy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::UnBindSecretIdsOutcome ApigatewayClient::UnBindSecretIds(const UnBindSecretIdsRequest &request)
{
    auto outcome = MakeRequest(request, "UnBindSecretIds");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnBindSecretIdsResponse rsp = UnBindSecretIdsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnBindSecretIdsOutcome(rsp);
        else
            return UnBindSecretIdsOutcome(o.GetError());
    }
    else
    {
        return UnBindSecretIdsOutcome(outcome.GetError());
    }
}

void ApigatewayClient::UnBindSecretIdsAsync(const UnBindSecretIdsRequest& request, const UnBindSecretIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UnBindSecretIds(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::UnBindSecretIdsOutcomeCallable ApigatewayClient::UnBindSecretIdsCallable(const UnBindSecretIdsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UnBindSecretIdsOutcome()>>(
        [this, request]()
        {
            return this->UnBindSecretIds(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::UnBindSubDomainOutcome ApigatewayClient::UnBindSubDomain(const UnBindSubDomainRequest &request)
{
    auto outcome = MakeRequest(request, "UnBindSubDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnBindSubDomainResponse rsp = UnBindSubDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnBindSubDomainOutcome(rsp);
        else
            return UnBindSubDomainOutcome(o.GetError());
    }
    else
    {
        return UnBindSubDomainOutcome(outcome.GetError());
    }
}

void ApigatewayClient::UnBindSubDomainAsync(const UnBindSubDomainRequest& request, const UnBindSubDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UnBindSubDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::UnBindSubDomainOutcomeCallable ApigatewayClient::UnBindSubDomainCallable(const UnBindSubDomainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UnBindSubDomainOutcome()>>(
        [this, request]()
        {
            return this->UnBindSubDomain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::UnReleaseServiceOutcome ApigatewayClient::UnReleaseService(const UnReleaseServiceRequest &request)
{
    auto outcome = MakeRequest(request, "UnReleaseService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnReleaseServiceResponse rsp = UnReleaseServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnReleaseServiceOutcome(rsp);
        else
            return UnReleaseServiceOutcome(o.GetError());
    }
    else
    {
        return UnReleaseServiceOutcome(outcome.GetError());
    }
}

void ApigatewayClient::UnReleaseServiceAsync(const UnReleaseServiceRequest& request, const UnReleaseServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UnReleaseService(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::UnReleaseServiceOutcomeCallable ApigatewayClient::UnReleaseServiceCallable(const UnReleaseServiceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UnReleaseServiceOutcome()>>(
        [this, request]()
        {
            return this->UnReleaseService(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::UnbindApiAppOutcome ApigatewayClient::UnbindApiApp(const UnbindApiAppRequest &request)
{
    auto outcome = MakeRequest(request, "UnbindApiApp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnbindApiAppResponse rsp = UnbindApiAppResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnbindApiAppOutcome(rsp);
        else
            return UnbindApiAppOutcome(o.GetError());
    }
    else
    {
        return UnbindApiAppOutcome(outcome.GetError());
    }
}

void ApigatewayClient::UnbindApiAppAsync(const UnbindApiAppRequest& request, const UnbindApiAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UnbindApiApp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::UnbindApiAppOutcomeCallable ApigatewayClient::UnbindApiAppCallable(const UnbindApiAppRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UnbindApiAppOutcome()>>(
        [this, request]()
        {
            return this->UnbindApiApp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::UpdateApiAppKeyOutcome ApigatewayClient::UpdateApiAppKey(const UpdateApiAppKeyRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateApiAppKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateApiAppKeyResponse rsp = UpdateApiAppKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateApiAppKeyOutcome(rsp);
        else
            return UpdateApiAppKeyOutcome(o.GetError());
    }
    else
    {
        return UpdateApiAppKeyOutcome(outcome.GetError());
    }
}

void ApigatewayClient::UpdateApiAppKeyAsync(const UpdateApiAppKeyRequest& request, const UpdateApiAppKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateApiAppKey(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::UpdateApiAppKeyOutcomeCallable ApigatewayClient::UpdateApiAppKeyCallable(const UpdateApiAppKeyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateApiAppKeyOutcome()>>(
        [this, request]()
        {
            return this->UpdateApiAppKey(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::UpdateApiKeyOutcome ApigatewayClient::UpdateApiKey(const UpdateApiKeyRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateApiKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateApiKeyResponse rsp = UpdateApiKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateApiKeyOutcome(rsp);
        else
            return UpdateApiKeyOutcome(o.GetError());
    }
    else
    {
        return UpdateApiKeyOutcome(outcome.GetError());
    }
}

void ApigatewayClient::UpdateApiKeyAsync(const UpdateApiKeyRequest& request, const UpdateApiKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateApiKey(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::UpdateApiKeyOutcomeCallable ApigatewayClient::UpdateApiKeyCallable(const UpdateApiKeyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateApiKeyOutcome()>>(
        [this, request]()
        {
            return this->UpdateApiKey(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApigatewayClient::UpdateServiceOutcome ApigatewayClient::UpdateService(const UpdateServiceRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateServiceResponse rsp = UpdateServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateServiceOutcome(rsp);
        else
            return UpdateServiceOutcome(o.GetError());
    }
    else
    {
        return UpdateServiceOutcome(outcome.GetError());
    }
}

void ApigatewayClient::UpdateServiceAsync(const UpdateServiceRequest& request, const UpdateServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateService(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::UpdateServiceOutcomeCallable ApigatewayClient::UpdateServiceCallable(const UpdateServiceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateServiceOutcome()>>(
        [this, request]()
        {
            return this->UpdateService(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


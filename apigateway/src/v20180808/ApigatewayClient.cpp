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

ApigatewayClient::GenerateApiDocumentOutcome ApigatewayClient::GenerateApiDocument(const GenerateApiDocumentRequest &request)
{
    auto outcome = MakeRequest(request, "GenerateApiDocument");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GenerateApiDocumentResponse rsp = GenerateApiDocumentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GenerateApiDocumentOutcome(rsp);
        else
            return GenerateApiDocumentOutcome(o.GetError());
    }
    else
    {
        return GenerateApiDocumentOutcome(outcome.GetError());
    }
}

void ApigatewayClient::GenerateApiDocumentAsync(const GenerateApiDocumentRequest& request, const GenerateApiDocumentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GenerateApiDocument(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApigatewayClient::GenerateApiDocumentOutcomeCallable ApigatewayClient::GenerateApiDocumentCallable(const GenerateApiDocumentRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GenerateApiDocumentOutcome()>>(
        [this, request]()
        {
            return this->GenerateApiDocument(request);
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


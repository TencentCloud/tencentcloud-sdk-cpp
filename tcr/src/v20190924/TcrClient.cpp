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

#include <tencentcloud/tcr/v20190924/TcrClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tcr::V20190924;
using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-09-24";
    const string ENDPOINT = "tcr.tencentcloudapi.com";
}

TcrClient::TcrClient(const Credential &credential, const string &region) :
    TcrClient(credential, region, ClientProfile())
{
}

TcrClient::TcrClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TcrClient::BatchDeleteImagePersonalOutcome TcrClient::BatchDeleteImagePersonal(const BatchDeleteImagePersonalRequest &request)
{
    auto outcome = MakeRequest(request, "BatchDeleteImagePersonal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchDeleteImagePersonalResponse rsp = BatchDeleteImagePersonalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchDeleteImagePersonalOutcome(rsp);
        else
            return BatchDeleteImagePersonalOutcome(o.GetError());
    }
    else
    {
        return BatchDeleteImagePersonalOutcome(outcome.GetError());
    }
}

void TcrClient::BatchDeleteImagePersonalAsync(const BatchDeleteImagePersonalRequest& request, const BatchDeleteImagePersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BatchDeleteImagePersonal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::BatchDeleteImagePersonalOutcomeCallable TcrClient::BatchDeleteImagePersonalCallable(const BatchDeleteImagePersonalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BatchDeleteImagePersonalOutcome()>>(
        [this, request]()
        {
            return this->BatchDeleteImagePersonal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::BatchDeleteRepositoryPersonalOutcome TcrClient::BatchDeleteRepositoryPersonal(const BatchDeleteRepositoryPersonalRequest &request)
{
    auto outcome = MakeRequest(request, "BatchDeleteRepositoryPersonal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchDeleteRepositoryPersonalResponse rsp = BatchDeleteRepositoryPersonalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchDeleteRepositoryPersonalOutcome(rsp);
        else
            return BatchDeleteRepositoryPersonalOutcome(o.GetError());
    }
    else
    {
        return BatchDeleteRepositoryPersonalOutcome(outcome.GetError());
    }
}

void TcrClient::BatchDeleteRepositoryPersonalAsync(const BatchDeleteRepositoryPersonalRequest& request, const BatchDeleteRepositoryPersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BatchDeleteRepositoryPersonal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::BatchDeleteRepositoryPersonalOutcomeCallable TcrClient::BatchDeleteRepositoryPersonalCallable(const BatchDeleteRepositoryPersonalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BatchDeleteRepositoryPersonalOutcome()>>(
        [this, request]()
        {
            return this->BatchDeleteRepositoryPersonal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::CheckInstanceOutcome TcrClient::CheckInstance(const CheckInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CheckInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckInstanceResponse rsp = CheckInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckInstanceOutcome(rsp);
        else
            return CheckInstanceOutcome(o.GetError());
    }
    else
    {
        return CheckInstanceOutcome(outcome.GetError());
    }
}

void TcrClient::CheckInstanceAsync(const CheckInstanceRequest& request, const CheckInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CheckInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::CheckInstanceOutcomeCallable TcrClient::CheckInstanceCallable(const CheckInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CheckInstanceOutcome()>>(
        [this, request]()
        {
            return this->CheckInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::CheckInstanceNameOutcome TcrClient::CheckInstanceName(const CheckInstanceNameRequest &request)
{
    auto outcome = MakeRequest(request, "CheckInstanceName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckInstanceNameResponse rsp = CheckInstanceNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckInstanceNameOutcome(rsp);
        else
            return CheckInstanceNameOutcome(o.GetError());
    }
    else
    {
        return CheckInstanceNameOutcome(outcome.GetError());
    }
}

void TcrClient::CheckInstanceNameAsync(const CheckInstanceNameRequest& request, const CheckInstanceNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CheckInstanceName(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::CheckInstanceNameOutcomeCallable TcrClient::CheckInstanceNameCallable(const CheckInstanceNameRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CheckInstanceNameOutcome()>>(
        [this, request]()
        {
            return this->CheckInstanceName(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::CreateApplicationTriggerPersonalOutcome TcrClient::CreateApplicationTriggerPersonal(const CreateApplicationTriggerPersonalRequest &request)
{
    auto outcome = MakeRequest(request, "CreateApplicationTriggerPersonal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateApplicationTriggerPersonalResponse rsp = CreateApplicationTriggerPersonalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateApplicationTriggerPersonalOutcome(rsp);
        else
            return CreateApplicationTriggerPersonalOutcome(o.GetError());
    }
    else
    {
        return CreateApplicationTriggerPersonalOutcome(outcome.GetError());
    }
}

void TcrClient::CreateApplicationTriggerPersonalAsync(const CreateApplicationTriggerPersonalRequest& request, const CreateApplicationTriggerPersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateApplicationTriggerPersonal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::CreateApplicationTriggerPersonalOutcomeCallable TcrClient::CreateApplicationTriggerPersonalCallable(const CreateApplicationTriggerPersonalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateApplicationTriggerPersonalOutcome()>>(
        [this, request]()
        {
            return this->CreateApplicationTriggerPersonal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::CreateImageAccelerationServiceOutcome TcrClient::CreateImageAccelerationService(const CreateImageAccelerationServiceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateImageAccelerationService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateImageAccelerationServiceResponse rsp = CreateImageAccelerationServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateImageAccelerationServiceOutcome(rsp);
        else
            return CreateImageAccelerationServiceOutcome(o.GetError());
    }
    else
    {
        return CreateImageAccelerationServiceOutcome(outcome.GetError());
    }
}

void TcrClient::CreateImageAccelerationServiceAsync(const CreateImageAccelerationServiceRequest& request, const CreateImageAccelerationServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateImageAccelerationService(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::CreateImageAccelerationServiceOutcomeCallable TcrClient::CreateImageAccelerationServiceCallable(const CreateImageAccelerationServiceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateImageAccelerationServiceOutcome()>>(
        [this, request]()
        {
            return this->CreateImageAccelerationService(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::CreateImmutableTagRulesOutcome TcrClient::CreateImmutableTagRules(const CreateImmutableTagRulesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateImmutableTagRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateImmutableTagRulesResponse rsp = CreateImmutableTagRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateImmutableTagRulesOutcome(rsp);
        else
            return CreateImmutableTagRulesOutcome(o.GetError());
    }
    else
    {
        return CreateImmutableTagRulesOutcome(outcome.GetError());
    }
}

void TcrClient::CreateImmutableTagRulesAsync(const CreateImmutableTagRulesRequest& request, const CreateImmutableTagRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateImmutableTagRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::CreateImmutableTagRulesOutcomeCallable TcrClient::CreateImmutableTagRulesCallable(const CreateImmutableTagRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateImmutableTagRulesOutcome()>>(
        [this, request]()
        {
            return this->CreateImmutableTagRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::CreateInstanceOutcome TcrClient::CreateInstance(const CreateInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateInstanceResponse rsp = CreateInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateInstanceOutcome(rsp);
        else
            return CreateInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateInstanceOutcome(outcome.GetError());
    }
}

void TcrClient::CreateInstanceAsync(const CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::CreateInstanceOutcomeCallable TcrClient::CreateInstanceCallable(const CreateInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateInstanceOutcome()>>(
        [this, request]()
        {
            return this->CreateInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::CreateInstanceCustomizedDomainOutcome TcrClient::CreateInstanceCustomizedDomain(const CreateInstanceCustomizedDomainRequest &request)
{
    auto outcome = MakeRequest(request, "CreateInstanceCustomizedDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateInstanceCustomizedDomainResponse rsp = CreateInstanceCustomizedDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateInstanceCustomizedDomainOutcome(rsp);
        else
            return CreateInstanceCustomizedDomainOutcome(o.GetError());
    }
    else
    {
        return CreateInstanceCustomizedDomainOutcome(outcome.GetError());
    }
}

void TcrClient::CreateInstanceCustomizedDomainAsync(const CreateInstanceCustomizedDomainRequest& request, const CreateInstanceCustomizedDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateInstanceCustomizedDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::CreateInstanceCustomizedDomainOutcomeCallable TcrClient::CreateInstanceCustomizedDomainCallable(const CreateInstanceCustomizedDomainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateInstanceCustomizedDomainOutcome()>>(
        [this, request]()
        {
            return this->CreateInstanceCustomizedDomain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::CreateInstanceTokenOutcome TcrClient::CreateInstanceToken(const CreateInstanceTokenRequest &request)
{
    auto outcome = MakeRequest(request, "CreateInstanceToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateInstanceTokenResponse rsp = CreateInstanceTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateInstanceTokenOutcome(rsp);
        else
            return CreateInstanceTokenOutcome(o.GetError());
    }
    else
    {
        return CreateInstanceTokenOutcome(outcome.GetError());
    }
}

void TcrClient::CreateInstanceTokenAsync(const CreateInstanceTokenRequest& request, const CreateInstanceTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateInstanceToken(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::CreateInstanceTokenOutcomeCallable TcrClient::CreateInstanceTokenCallable(const CreateInstanceTokenRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateInstanceTokenOutcome()>>(
        [this, request]()
        {
            return this->CreateInstanceToken(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::CreateInternalEndpointDnsOutcome TcrClient::CreateInternalEndpointDns(const CreateInternalEndpointDnsRequest &request)
{
    auto outcome = MakeRequest(request, "CreateInternalEndpointDns");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateInternalEndpointDnsResponse rsp = CreateInternalEndpointDnsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateInternalEndpointDnsOutcome(rsp);
        else
            return CreateInternalEndpointDnsOutcome(o.GetError());
    }
    else
    {
        return CreateInternalEndpointDnsOutcome(outcome.GetError());
    }
}

void TcrClient::CreateInternalEndpointDnsAsync(const CreateInternalEndpointDnsRequest& request, const CreateInternalEndpointDnsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateInternalEndpointDns(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::CreateInternalEndpointDnsOutcomeCallable TcrClient::CreateInternalEndpointDnsCallable(const CreateInternalEndpointDnsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateInternalEndpointDnsOutcome()>>(
        [this, request]()
        {
            return this->CreateInternalEndpointDns(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::CreateMultipleSecurityPolicyOutcome TcrClient::CreateMultipleSecurityPolicy(const CreateMultipleSecurityPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMultipleSecurityPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMultipleSecurityPolicyResponse rsp = CreateMultipleSecurityPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMultipleSecurityPolicyOutcome(rsp);
        else
            return CreateMultipleSecurityPolicyOutcome(o.GetError());
    }
    else
    {
        return CreateMultipleSecurityPolicyOutcome(outcome.GetError());
    }
}

void TcrClient::CreateMultipleSecurityPolicyAsync(const CreateMultipleSecurityPolicyRequest& request, const CreateMultipleSecurityPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateMultipleSecurityPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::CreateMultipleSecurityPolicyOutcomeCallable TcrClient::CreateMultipleSecurityPolicyCallable(const CreateMultipleSecurityPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateMultipleSecurityPolicyOutcome()>>(
        [this, request]()
        {
            return this->CreateMultipleSecurityPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::CreateNamespaceOutcome TcrClient::CreateNamespace(const CreateNamespaceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateNamespace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateNamespaceResponse rsp = CreateNamespaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateNamespaceOutcome(rsp);
        else
            return CreateNamespaceOutcome(o.GetError());
    }
    else
    {
        return CreateNamespaceOutcome(outcome.GetError());
    }
}

void TcrClient::CreateNamespaceAsync(const CreateNamespaceRequest& request, const CreateNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateNamespace(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::CreateNamespaceOutcomeCallable TcrClient::CreateNamespaceCallable(const CreateNamespaceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateNamespaceOutcome()>>(
        [this, request]()
        {
            return this->CreateNamespace(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::CreateNamespacePersonalOutcome TcrClient::CreateNamespacePersonal(const CreateNamespacePersonalRequest &request)
{
    auto outcome = MakeRequest(request, "CreateNamespacePersonal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateNamespacePersonalResponse rsp = CreateNamespacePersonalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateNamespacePersonalOutcome(rsp);
        else
            return CreateNamespacePersonalOutcome(o.GetError());
    }
    else
    {
        return CreateNamespacePersonalOutcome(outcome.GetError());
    }
}

void TcrClient::CreateNamespacePersonalAsync(const CreateNamespacePersonalRequest& request, const CreateNamespacePersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateNamespacePersonal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::CreateNamespacePersonalOutcomeCallable TcrClient::CreateNamespacePersonalCallable(const CreateNamespacePersonalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateNamespacePersonalOutcome()>>(
        [this, request]()
        {
            return this->CreateNamespacePersonal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::CreateReplicationInstanceOutcome TcrClient::CreateReplicationInstance(const CreateReplicationInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateReplicationInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateReplicationInstanceResponse rsp = CreateReplicationInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateReplicationInstanceOutcome(rsp);
        else
            return CreateReplicationInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateReplicationInstanceOutcome(outcome.GetError());
    }
}

void TcrClient::CreateReplicationInstanceAsync(const CreateReplicationInstanceRequest& request, const CreateReplicationInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateReplicationInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::CreateReplicationInstanceOutcomeCallable TcrClient::CreateReplicationInstanceCallable(const CreateReplicationInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateReplicationInstanceOutcome()>>(
        [this, request]()
        {
            return this->CreateReplicationInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::CreateRepositoryOutcome TcrClient::CreateRepository(const CreateRepositoryRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRepository");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRepositoryResponse rsp = CreateRepositoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRepositoryOutcome(rsp);
        else
            return CreateRepositoryOutcome(o.GetError());
    }
    else
    {
        return CreateRepositoryOutcome(outcome.GetError());
    }
}

void TcrClient::CreateRepositoryAsync(const CreateRepositoryRequest& request, const CreateRepositoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateRepository(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::CreateRepositoryOutcomeCallable TcrClient::CreateRepositoryCallable(const CreateRepositoryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateRepositoryOutcome()>>(
        [this, request]()
        {
            return this->CreateRepository(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::CreateRepositoryPersonalOutcome TcrClient::CreateRepositoryPersonal(const CreateRepositoryPersonalRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRepositoryPersonal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRepositoryPersonalResponse rsp = CreateRepositoryPersonalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRepositoryPersonalOutcome(rsp);
        else
            return CreateRepositoryPersonalOutcome(o.GetError());
    }
    else
    {
        return CreateRepositoryPersonalOutcome(outcome.GetError());
    }
}

void TcrClient::CreateRepositoryPersonalAsync(const CreateRepositoryPersonalRequest& request, const CreateRepositoryPersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateRepositoryPersonal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::CreateRepositoryPersonalOutcomeCallable TcrClient::CreateRepositoryPersonalCallable(const CreateRepositoryPersonalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateRepositoryPersonalOutcome()>>(
        [this, request]()
        {
            return this->CreateRepositoryPersonal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::CreateSecurityPolicyOutcome TcrClient::CreateSecurityPolicy(const CreateSecurityPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSecurityPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSecurityPolicyResponse rsp = CreateSecurityPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSecurityPolicyOutcome(rsp);
        else
            return CreateSecurityPolicyOutcome(o.GetError());
    }
    else
    {
        return CreateSecurityPolicyOutcome(outcome.GetError());
    }
}

void TcrClient::CreateSecurityPolicyAsync(const CreateSecurityPolicyRequest& request, const CreateSecurityPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSecurityPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::CreateSecurityPolicyOutcomeCallable TcrClient::CreateSecurityPolicyCallable(const CreateSecurityPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSecurityPolicyOutcome()>>(
        [this, request]()
        {
            return this->CreateSecurityPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::CreateServiceAccountOutcome TcrClient::CreateServiceAccount(const CreateServiceAccountRequest &request)
{
    auto outcome = MakeRequest(request, "CreateServiceAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateServiceAccountResponse rsp = CreateServiceAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateServiceAccountOutcome(rsp);
        else
            return CreateServiceAccountOutcome(o.GetError());
    }
    else
    {
        return CreateServiceAccountOutcome(outcome.GetError());
    }
}

void TcrClient::CreateServiceAccountAsync(const CreateServiceAccountRequest& request, const CreateServiceAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateServiceAccount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::CreateServiceAccountOutcomeCallable TcrClient::CreateServiceAccountCallable(const CreateServiceAccountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateServiceAccountOutcome()>>(
        [this, request]()
        {
            return this->CreateServiceAccount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::CreateSignatureOutcome TcrClient::CreateSignature(const CreateSignatureRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSignature");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSignatureResponse rsp = CreateSignatureResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSignatureOutcome(rsp);
        else
            return CreateSignatureOutcome(o.GetError());
    }
    else
    {
        return CreateSignatureOutcome(outcome.GetError());
    }
}

void TcrClient::CreateSignatureAsync(const CreateSignatureRequest& request, const CreateSignatureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSignature(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::CreateSignatureOutcomeCallable TcrClient::CreateSignatureCallable(const CreateSignatureRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSignatureOutcome()>>(
        [this, request]()
        {
            return this->CreateSignature(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::CreateSignaturePolicyOutcome TcrClient::CreateSignaturePolicy(const CreateSignaturePolicyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSignaturePolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSignaturePolicyResponse rsp = CreateSignaturePolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSignaturePolicyOutcome(rsp);
        else
            return CreateSignaturePolicyOutcome(o.GetError());
    }
    else
    {
        return CreateSignaturePolicyOutcome(outcome.GetError());
    }
}

void TcrClient::CreateSignaturePolicyAsync(const CreateSignaturePolicyRequest& request, const CreateSignaturePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSignaturePolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::CreateSignaturePolicyOutcomeCallable TcrClient::CreateSignaturePolicyCallable(const CreateSignaturePolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSignaturePolicyOutcome()>>(
        [this, request]()
        {
            return this->CreateSignaturePolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::CreateTagRetentionExecutionOutcome TcrClient::CreateTagRetentionExecution(const CreateTagRetentionExecutionRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTagRetentionExecution");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTagRetentionExecutionResponse rsp = CreateTagRetentionExecutionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTagRetentionExecutionOutcome(rsp);
        else
            return CreateTagRetentionExecutionOutcome(o.GetError());
    }
    else
    {
        return CreateTagRetentionExecutionOutcome(outcome.GetError());
    }
}

void TcrClient::CreateTagRetentionExecutionAsync(const CreateTagRetentionExecutionRequest& request, const CreateTagRetentionExecutionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTagRetentionExecution(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::CreateTagRetentionExecutionOutcomeCallable TcrClient::CreateTagRetentionExecutionCallable(const CreateTagRetentionExecutionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTagRetentionExecutionOutcome()>>(
        [this, request]()
        {
            return this->CreateTagRetentionExecution(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::CreateTagRetentionRuleOutcome TcrClient::CreateTagRetentionRule(const CreateTagRetentionRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTagRetentionRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTagRetentionRuleResponse rsp = CreateTagRetentionRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTagRetentionRuleOutcome(rsp);
        else
            return CreateTagRetentionRuleOutcome(o.GetError());
    }
    else
    {
        return CreateTagRetentionRuleOutcome(outcome.GetError());
    }
}

void TcrClient::CreateTagRetentionRuleAsync(const CreateTagRetentionRuleRequest& request, const CreateTagRetentionRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTagRetentionRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::CreateTagRetentionRuleOutcomeCallable TcrClient::CreateTagRetentionRuleCallable(const CreateTagRetentionRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTagRetentionRuleOutcome()>>(
        [this, request]()
        {
            return this->CreateTagRetentionRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::CreateUserPersonalOutcome TcrClient::CreateUserPersonal(const CreateUserPersonalRequest &request)
{
    auto outcome = MakeRequest(request, "CreateUserPersonal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateUserPersonalResponse rsp = CreateUserPersonalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateUserPersonalOutcome(rsp);
        else
            return CreateUserPersonalOutcome(o.GetError());
    }
    else
    {
        return CreateUserPersonalOutcome(outcome.GetError());
    }
}

void TcrClient::CreateUserPersonalAsync(const CreateUserPersonalRequest& request, const CreateUserPersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateUserPersonal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::CreateUserPersonalOutcomeCallable TcrClient::CreateUserPersonalCallable(const CreateUserPersonalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateUserPersonalOutcome()>>(
        [this, request]()
        {
            return this->CreateUserPersonal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::CreateWebhookTriggerOutcome TcrClient::CreateWebhookTrigger(const CreateWebhookTriggerRequest &request)
{
    auto outcome = MakeRequest(request, "CreateWebhookTrigger");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateWebhookTriggerResponse rsp = CreateWebhookTriggerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateWebhookTriggerOutcome(rsp);
        else
            return CreateWebhookTriggerOutcome(o.GetError());
    }
    else
    {
        return CreateWebhookTriggerOutcome(outcome.GetError());
    }
}

void TcrClient::CreateWebhookTriggerAsync(const CreateWebhookTriggerRequest& request, const CreateWebhookTriggerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateWebhookTrigger(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::CreateWebhookTriggerOutcomeCallable TcrClient::CreateWebhookTriggerCallable(const CreateWebhookTriggerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateWebhookTriggerOutcome()>>(
        [this, request]()
        {
            return this->CreateWebhookTrigger(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DeleteApplicationTriggerPersonalOutcome TcrClient::DeleteApplicationTriggerPersonal(const DeleteApplicationTriggerPersonalRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteApplicationTriggerPersonal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteApplicationTriggerPersonalResponse rsp = DeleteApplicationTriggerPersonalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteApplicationTriggerPersonalOutcome(rsp);
        else
            return DeleteApplicationTriggerPersonalOutcome(o.GetError());
    }
    else
    {
        return DeleteApplicationTriggerPersonalOutcome(outcome.GetError());
    }
}

void TcrClient::DeleteApplicationTriggerPersonalAsync(const DeleteApplicationTriggerPersonalRequest& request, const DeleteApplicationTriggerPersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteApplicationTriggerPersonal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DeleteApplicationTriggerPersonalOutcomeCallable TcrClient::DeleteApplicationTriggerPersonalCallable(const DeleteApplicationTriggerPersonalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteApplicationTriggerPersonalOutcome()>>(
        [this, request]()
        {
            return this->DeleteApplicationTriggerPersonal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DeleteImageOutcome TcrClient::DeleteImage(const DeleteImageRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteImage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteImageResponse rsp = DeleteImageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteImageOutcome(rsp);
        else
            return DeleteImageOutcome(o.GetError());
    }
    else
    {
        return DeleteImageOutcome(outcome.GetError());
    }
}

void TcrClient::DeleteImageAsync(const DeleteImageRequest& request, const DeleteImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteImage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DeleteImageOutcomeCallable TcrClient::DeleteImageCallable(const DeleteImageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteImageOutcome()>>(
        [this, request]()
        {
            return this->DeleteImage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DeleteImageAccelerateServiceOutcome TcrClient::DeleteImageAccelerateService(const DeleteImageAccelerateServiceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteImageAccelerateService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteImageAccelerateServiceResponse rsp = DeleteImageAccelerateServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteImageAccelerateServiceOutcome(rsp);
        else
            return DeleteImageAccelerateServiceOutcome(o.GetError());
    }
    else
    {
        return DeleteImageAccelerateServiceOutcome(outcome.GetError());
    }
}

void TcrClient::DeleteImageAccelerateServiceAsync(const DeleteImageAccelerateServiceRequest& request, const DeleteImageAccelerateServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteImageAccelerateService(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DeleteImageAccelerateServiceOutcomeCallable TcrClient::DeleteImageAccelerateServiceCallable(const DeleteImageAccelerateServiceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteImageAccelerateServiceOutcome()>>(
        [this, request]()
        {
            return this->DeleteImageAccelerateService(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DeleteImageLifecycleGlobalPersonalOutcome TcrClient::DeleteImageLifecycleGlobalPersonal(const DeleteImageLifecycleGlobalPersonalRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteImageLifecycleGlobalPersonal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteImageLifecycleGlobalPersonalResponse rsp = DeleteImageLifecycleGlobalPersonalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteImageLifecycleGlobalPersonalOutcome(rsp);
        else
            return DeleteImageLifecycleGlobalPersonalOutcome(o.GetError());
    }
    else
    {
        return DeleteImageLifecycleGlobalPersonalOutcome(outcome.GetError());
    }
}

void TcrClient::DeleteImageLifecycleGlobalPersonalAsync(const DeleteImageLifecycleGlobalPersonalRequest& request, const DeleteImageLifecycleGlobalPersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteImageLifecycleGlobalPersonal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DeleteImageLifecycleGlobalPersonalOutcomeCallable TcrClient::DeleteImageLifecycleGlobalPersonalCallable(const DeleteImageLifecycleGlobalPersonalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteImageLifecycleGlobalPersonalOutcome()>>(
        [this, request]()
        {
            return this->DeleteImageLifecycleGlobalPersonal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DeleteImagePersonalOutcome TcrClient::DeleteImagePersonal(const DeleteImagePersonalRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteImagePersonal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteImagePersonalResponse rsp = DeleteImagePersonalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteImagePersonalOutcome(rsp);
        else
            return DeleteImagePersonalOutcome(o.GetError());
    }
    else
    {
        return DeleteImagePersonalOutcome(outcome.GetError());
    }
}

void TcrClient::DeleteImagePersonalAsync(const DeleteImagePersonalRequest& request, const DeleteImagePersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteImagePersonal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DeleteImagePersonalOutcomeCallable TcrClient::DeleteImagePersonalCallable(const DeleteImagePersonalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteImagePersonalOutcome()>>(
        [this, request]()
        {
            return this->DeleteImagePersonal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DeleteImmutableTagRulesOutcome TcrClient::DeleteImmutableTagRules(const DeleteImmutableTagRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteImmutableTagRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteImmutableTagRulesResponse rsp = DeleteImmutableTagRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteImmutableTagRulesOutcome(rsp);
        else
            return DeleteImmutableTagRulesOutcome(o.GetError());
    }
    else
    {
        return DeleteImmutableTagRulesOutcome(outcome.GetError());
    }
}

void TcrClient::DeleteImmutableTagRulesAsync(const DeleteImmutableTagRulesRequest& request, const DeleteImmutableTagRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteImmutableTagRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DeleteImmutableTagRulesOutcomeCallable TcrClient::DeleteImmutableTagRulesCallable(const DeleteImmutableTagRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteImmutableTagRulesOutcome()>>(
        [this, request]()
        {
            return this->DeleteImmutableTagRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DeleteInstanceOutcome TcrClient::DeleteInstance(const DeleteInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteInstanceResponse rsp = DeleteInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteInstanceOutcome(rsp);
        else
            return DeleteInstanceOutcome(o.GetError());
    }
    else
    {
        return DeleteInstanceOutcome(outcome.GetError());
    }
}

void TcrClient::DeleteInstanceAsync(const DeleteInstanceRequest& request, const DeleteInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DeleteInstanceOutcomeCallable TcrClient::DeleteInstanceCallable(const DeleteInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteInstanceOutcome()>>(
        [this, request]()
        {
            return this->DeleteInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DeleteInstanceCustomizedDomainOutcome TcrClient::DeleteInstanceCustomizedDomain(const DeleteInstanceCustomizedDomainRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteInstanceCustomizedDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteInstanceCustomizedDomainResponse rsp = DeleteInstanceCustomizedDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteInstanceCustomizedDomainOutcome(rsp);
        else
            return DeleteInstanceCustomizedDomainOutcome(o.GetError());
    }
    else
    {
        return DeleteInstanceCustomizedDomainOutcome(outcome.GetError());
    }
}

void TcrClient::DeleteInstanceCustomizedDomainAsync(const DeleteInstanceCustomizedDomainRequest& request, const DeleteInstanceCustomizedDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteInstanceCustomizedDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DeleteInstanceCustomizedDomainOutcomeCallable TcrClient::DeleteInstanceCustomizedDomainCallable(const DeleteInstanceCustomizedDomainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteInstanceCustomizedDomainOutcome()>>(
        [this, request]()
        {
            return this->DeleteInstanceCustomizedDomain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DeleteInstanceTokenOutcome TcrClient::DeleteInstanceToken(const DeleteInstanceTokenRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteInstanceToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteInstanceTokenResponse rsp = DeleteInstanceTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteInstanceTokenOutcome(rsp);
        else
            return DeleteInstanceTokenOutcome(o.GetError());
    }
    else
    {
        return DeleteInstanceTokenOutcome(outcome.GetError());
    }
}

void TcrClient::DeleteInstanceTokenAsync(const DeleteInstanceTokenRequest& request, const DeleteInstanceTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteInstanceToken(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DeleteInstanceTokenOutcomeCallable TcrClient::DeleteInstanceTokenCallable(const DeleteInstanceTokenRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteInstanceTokenOutcome()>>(
        [this, request]()
        {
            return this->DeleteInstanceToken(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DeleteInternalEndpointDnsOutcome TcrClient::DeleteInternalEndpointDns(const DeleteInternalEndpointDnsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteInternalEndpointDns");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteInternalEndpointDnsResponse rsp = DeleteInternalEndpointDnsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteInternalEndpointDnsOutcome(rsp);
        else
            return DeleteInternalEndpointDnsOutcome(o.GetError());
    }
    else
    {
        return DeleteInternalEndpointDnsOutcome(outcome.GetError());
    }
}

void TcrClient::DeleteInternalEndpointDnsAsync(const DeleteInternalEndpointDnsRequest& request, const DeleteInternalEndpointDnsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteInternalEndpointDns(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DeleteInternalEndpointDnsOutcomeCallable TcrClient::DeleteInternalEndpointDnsCallable(const DeleteInternalEndpointDnsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteInternalEndpointDnsOutcome()>>(
        [this, request]()
        {
            return this->DeleteInternalEndpointDns(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DeleteMultipleSecurityPolicyOutcome TcrClient::DeleteMultipleSecurityPolicy(const DeleteMultipleSecurityPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMultipleSecurityPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMultipleSecurityPolicyResponse rsp = DeleteMultipleSecurityPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMultipleSecurityPolicyOutcome(rsp);
        else
            return DeleteMultipleSecurityPolicyOutcome(o.GetError());
    }
    else
    {
        return DeleteMultipleSecurityPolicyOutcome(outcome.GetError());
    }
}

void TcrClient::DeleteMultipleSecurityPolicyAsync(const DeleteMultipleSecurityPolicyRequest& request, const DeleteMultipleSecurityPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteMultipleSecurityPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DeleteMultipleSecurityPolicyOutcomeCallable TcrClient::DeleteMultipleSecurityPolicyCallable(const DeleteMultipleSecurityPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteMultipleSecurityPolicyOutcome()>>(
        [this, request]()
        {
            return this->DeleteMultipleSecurityPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DeleteNamespaceOutcome TcrClient::DeleteNamespace(const DeleteNamespaceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteNamespace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteNamespaceResponse rsp = DeleteNamespaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteNamespaceOutcome(rsp);
        else
            return DeleteNamespaceOutcome(o.GetError());
    }
    else
    {
        return DeleteNamespaceOutcome(outcome.GetError());
    }
}

void TcrClient::DeleteNamespaceAsync(const DeleteNamespaceRequest& request, const DeleteNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteNamespace(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DeleteNamespaceOutcomeCallable TcrClient::DeleteNamespaceCallable(const DeleteNamespaceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteNamespaceOutcome()>>(
        [this, request]()
        {
            return this->DeleteNamespace(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DeleteNamespacePersonalOutcome TcrClient::DeleteNamespacePersonal(const DeleteNamespacePersonalRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteNamespacePersonal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteNamespacePersonalResponse rsp = DeleteNamespacePersonalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteNamespacePersonalOutcome(rsp);
        else
            return DeleteNamespacePersonalOutcome(o.GetError());
    }
    else
    {
        return DeleteNamespacePersonalOutcome(outcome.GetError());
    }
}

void TcrClient::DeleteNamespacePersonalAsync(const DeleteNamespacePersonalRequest& request, const DeleteNamespacePersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteNamespacePersonal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DeleteNamespacePersonalOutcomeCallable TcrClient::DeleteNamespacePersonalCallable(const DeleteNamespacePersonalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteNamespacePersonalOutcome()>>(
        [this, request]()
        {
            return this->DeleteNamespacePersonal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DeleteReplicationInstanceOutcome TcrClient::DeleteReplicationInstance(const DeleteReplicationInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteReplicationInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteReplicationInstanceResponse rsp = DeleteReplicationInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteReplicationInstanceOutcome(rsp);
        else
            return DeleteReplicationInstanceOutcome(o.GetError());
    }
    else
    {
        return DeleteReplicationInstanceOutcome(outcome.GetError());
    }
}

void TcrClient::DeleteReplicationInstanceAsync(const DeleteReplicationInstanceRequest& request, const DeleteReplicationInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteReplicationInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DeleteReplicationInstanceOutcomeCallable TcrClient::DeleteReplicationInstanceCallable(const DeleteReplicationInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteReplicationInstanceOutcome()>>(
        [this, request]()
        {
            return this->DeleteReplicationInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DeleteRepositoryOutcome TcrClient::DeleteRepository(const DeleteRepositoryRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRepository");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRepositoryResponse rsp = DeleteRepositoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRepositoryOutcome(rsp);
        else
            return DeleteRepositoryOutcome(o.GetError());
    }
    else
    {
        return DeleteRepositoryOutcome(outcome.GetError());
    }
}

void TcrClient::DeleteRepositoryAsync(const DeleteRepositoryRequest& request, const DeleteRepositoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRepository(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DeleteRepositoryOutcomeCallable TcrClient::DeleteRepositoryCallable(const DeleteRepositoryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRepositoryOutcome()>>(
        [this, request]()
        {
            return this->DeleteRepository(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DeleteRepositoryPersonalOutcome TcrClient::DeleteRepositoryPersonal(const DeleteRepositoryPersonalRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRepositoryPersonal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRepositoryPersonalResponse rsp = DeleteRepositoryPersonalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRepositoryPersonalOutcome(rsp);
        else
            return DeleteRepositoryPersonalOutcome(o.GetError());
    }
    else
    {
        return DeleteRepositoryPersonalOutcome(outcome.GetError());
    }
}

void TcrClient::DeleteRepositoryPersonalAsync(const DeleteRepositoryPersonalRequest& request, const DeleteRepositoryPersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRepositoryPersonal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DeleteRepositoryPersonalOutcomeCallable TcrClient::DeleteRepositoryPersonalCallable(const DeleteRepositoryPersonalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRepositoryPersonalOutcome()>>(
        [this, request]()
        {
            return this->DeleteRepositoryPersonal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DeleteRepositoryTagsOutcome TcrClient::DeleteRepositoryTags(const DeleteRepositoryTagsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRepositoryTags");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRepositoryTagsResponse rsp = DeleteRepositoryTagsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRepositoryTagsOutcome(rsp);
        else
            return DeleteRepositoryTagsOutcome(o.GetError());
    }
    else
    {
        return DeleteRepositoryTagsOutcome(outcome.GetError());
    }
}

void TcrClient::DeleteRepositoryTagsAsync(const DeleteRepositoryTagsRequest& request, const DeleteRepositoryTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRepositoryTags(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DeleteRepositoryTagsOutcomeCallable TcrClient::DeleteRepositoryTagsCallable(const DeleteRepositoryTagsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRepositoryTagsOutcome()>>(
        [this, request]()
        {
            return this->DeleteRepositoryTags(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DeleteSecurityPolicyOutcome TcrClient::DeleteSecurityPolicy(const DeleteSecurityPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSecurityPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSecurityPolicyResponse rsp = DeleteSecurityPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSecurityPolicyOutcome(rsp);
        else
            return DeleteSecurityPolicyOutcome(o.GetError());
    }
    else
    {
        return DeleteSecurityPolicyOutcome(outcome.GetError());
    }
}

void TcrClient::DeleteSecurityPolicyAsync(const DeleteSecurityPolicyRequest& request, const DeleteSecurityPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteSecurityPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DeleteSecurityPolicyOutcomeCallable TcrClient::DeleteSecurityPolicyCallable(const DeleteSecurityPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteSecurityPolicyOutcome()>>(
        [this, request]()
        {
            return this->DeleteSecurityPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DeleteServiceAccountOutcome TcrClient::DeleteServiceAccount(const DeleteServiceAccountRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteServiceAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteServiceAccountResponse rsp = DeleteServiceAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteServiceAccountOutcome(rsp);
        else
            return DeleteServiceAccountOutcome(o.GetError());
    }
    else
    {
        return DeleteServiceAccountOutcome(outcome.GetError());
    }
}

void TcrClient::DeleteServiceAccountAsync(const DeleteServiceAccountRequest& request, const DeleteServiceAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteServiceAccount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DeleteServiceAccountOutcomeCallable TcrClient::DeleteServiceAccountCallable(const DeleteServiceAccountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteServiceAccountOutcome()>>(
        [this, request]()
        {
            return this->DeleteServiceAccount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DeleteSignaturePolicyOutcome TcrClient::DeleteSignaturePolicy(const DeleteSignaturePolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSignaturePolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSignaturePolicyResponse rsp = DeleteSignaturePolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSignaturePolicyOutcome(rsp);
        else
            return DeleteSignaturePolicyOutcome(o.GetError());
    }
    else
    {
        return DeleteSignaturePolicyOutcome(outcome.GetError());
    }
}

void TcrClient::DeleteSignaturePolicyAsync(const DeleteSignaturePolicyRequest& request, const DeleteSignaturePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteSignaturePolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DeleteSignaturePolicyOutcomeCallable TcrClient::DeleteSignaturePolicyCallable(const DeleteSignaturePolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteSignaturePolicyOutcome()>>(
        [this, request]()
        {
            return this->DeleteSignaturePolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DeleteTagRetentionRuleOutcome TcrClient::DeleteTagRetentionRule(const DeleteTagRetentionRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTagRetentionRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTagRetentionRuleResponse rsp = DeleteTagRetentionRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTagRetentionRuleOutcome(rsp);
        else
            return DeleteTagRetentionRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteTagRetentionRuleOutcome(outcome.GetError());
    }
}

void TcrClient::DeleteTagRetentionRuleAsync(const DeleteTagRetentionRuleRequest& request, const DeleteTagRetentionRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteTagRetentionRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DeleteTagRetentionRuleOutcomeCallable TcrClient::DeleteTagRetentionRuleCallable(const DeleteTagRetentionRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteTagRetentionRuleOutcome()>>(
        [this, request]()
        {
            return this->DeleteTagRetentionRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DeleteWebhookTriggerOutcome TcrClient::DeleteWebhookTrigger(const DeleteWebhookTriggerRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteWebhookTrigger");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteWebhookTriggerResponse rsp = DeleteWebhookTriggerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteWebhookTriggerOutcome(rsp);
        else
            return DeleteWebhookTriggerOutcome(o.GetError());
    }
    else
    {
        return DeleteWebhookTriggerOutcome(outcome.GetError());
    }
}

void TcrClient::DeleteWebhookTriggerAsync(const DeleteWebhookTriggerRequest& request, const DeleteWebhookTriggerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteWebhookTrigger(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DeleteWebhookTriggerOutcomeCallable TcrClient::DeleteWebhookTriggerCallable(const DeleteWebhookTriggerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteWebhookTriggerOutcome()>>(
        [this, request]()
        {
            return this->DeleteWebhookTrigger(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DescribeApplicationTriggerLogPersonalOutcome TcrClient::DescribeApplicationTriggerLogPersonal(const DescribeApplicationTriggerLogPersonalRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApplicationTriggerLogPersonal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApplicationTriggerLogPersonalResponse rsp = DescribeApplicationTriggerLogPersonalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApplicationTriggerLogPersonalOutcome(rsp);
        else
            return DescribeApplicationTriggerLogPersonalOutcome(o.GetError());
    }
    else
    {
        return DescribeApplicationTriggerLogPersonalOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeApplicationTriggerLogPersonalAsync(const DescribeApplicationTriggerLogPersonalRequest& request, const DescribeApplicationTriggerLogPersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeApplicationTriggerLogPersonal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DescribeApplicationTriggerLogPersonalOutcomeCallable TcrClient::DescribeApplicationTriggerLogPersonalCallable(const DescribeApplicationTriggerLogPersonalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeApplicationTriggerLogPersonalOutcome()>>(
        [this, request]()
        {
            return this->DescribeApplicationTriggerLogPersonal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DescribeApplicationTriggerPersonalOutcome TcrClient::DescribeApplicationTriggerPersonal(const DescribeApplicationTriggerPersonalRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApplicationTriggerPersonal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApplicationTriggerPersonalResponse rsp = DescribeApplicationTriggerPersonalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApplicationTriggerPersonalOutcome(rsp);
        else
            return DescribeApplicationTriggerPersonalOutcome(o.GetError());
    }
    else
    {
        return DescribeApplicationTriggerPersonalOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeApplicationTriggerPersonalAsync(const DescribeApplicationTriggerPersonalRequest& request, const DescribeApplicationTriggerPersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeApplicationTriggerPersonal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DescribeApplicationTriggerPersonalOutcomeCallable TcrClient::DescribeApplicationTriggerPersonalCallable(const DescribeApplicationTriggerPersonalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeApplicationTriggerPersonalOutcome()>>(
        [this, request]()
        {
            return this->DescribeApplicationTriggerPersonal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DescribeChartDownloadInfoOutcome TcrClient::DescribeChartDownloadInfo(const DescribeChartDownloadInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeChartDownloadInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeChartDownloadInfoResponse rsp = DescribeChartDownloadInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeChartDownloadInfoOutcome(rsp);
        else
            return DescribeChartDownloadInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeChartDownloadInfoOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeChartDownloadInfoAsync(const DescribeChartDownloadInfoRequest& request, const DescribeChartDownloadInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeChartDownloadInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DescribeChartDownloadInfoOutcomeCallable TcrClient::DescribeChartDownloadInfoCallable(const DescribeChartDownloadInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeChartDownloadInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeChartDownloadInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DescribeExternalEndpointStatusOutcome TcrClient::DescribeExternalEndpointStatus(const DescribeExternalEndpointStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeExternalEndpointStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeExternalEndpointStatusResponse rsp = DescribeExternalEndpointStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeExternalEndpointStatusOutcome(rsp);
        else
            return DescribeExternalEndpointStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeExternalEndpointStatusOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeExternalEndpointStatusAsync(const DescribeExternalEndpointStatusRequest& request, const DescribeExternalEndpointStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeExternalEndpointStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DescribeExternalEndpointStatusOutcomeCallable TcrClient::DescribeExternalEndpointStatusCallable(const DescribeExternalEndpointStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeExternalEndpointStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeExternalEndpointStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DescribeFavorRepositoryPersonalOutcome TcrClient::DescribeFavorRepositoryPersonal(const DescribeFavorRepositoryPersonalRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFavorRepositoryPersonal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFavorRepositoryPersonalResponse rsp = DescribeFavorRepositoryPersonalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFavorRepositoryPersonalOutcome(rsp);
        else
            return DescribeFavorRepositoryPersonalOutcome(o.GetError());
    }
    else
    {
        return DescribeFavorRepositoryPersonalOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeFavorRepositoryPersonalAsync(const DescribeFavorRepositoryPersonalRequest& request, const DescribeFavorRepositoryPersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFavorRepositoryPersonal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DescribeFavorRepositoryPersonalOutcomeCallable TcrClient::DescribeFavorRepositoryPersonalCallable(const DescribeFavorRepositoryPersonalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFavorRepositoryPersonalOutcome()>>(
        [this, request]()
        {
            return this->DescribeFavorRepositoryPersonal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DescribeGCJobsOutcome TcrClient::DescribeGCJobs(const DescribeGCJobsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGCJobs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGCJobsResponse rsp = DescribeGCJobsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGCJobsOutcome(rsp);
        else
            return DescribeGCJobsOutcome(o.GetError());
    }
    else
    {
        return DescribeGCJobsOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeGCJobsAsync(const DescribeGCJobsRequest& request, const DescribeGCJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGCJobs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DescribeGCJobsOutcomeCallable TcrClient::DescribeGCJobsCallable(const DescribeGCJobsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGCJobsOutcome()>>(
        [this, request]()
        {
            return this->DescribeGCJobs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DescribeImageAccelerateServiceOutcome TcrClient::DescribeImageAccelerateService(const DescribeImageAccelerateServiceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeImageAccelerateService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeImageAccelerateServiceResponse rsp = DescribeImageAccelerateServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeImageAccelerateServiceOutcome(rsp);
        else
            return DescribeImageAccelerateServiceOutcome(o.GetError());
    }
    else
    {
        return DescribeImageAccelerateServiceOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeImageAccelerateServiceAsync(const DescribeImageAccelerateServiceRequest& request, const DescribeImageAccelerateServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeImageAccelerateService(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DescribeImageAccelerateServiceOutcomeCallable TcrClient::DescribeImageAccelerateServiceCallable(const DescribeImageAccelerateServiceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeImageAccelerateServiceOutcome()>>(
        [this, request]()
        {
            return this->DescribeImageAccelerateService(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DescribeImageFilterPersonalOutcome TcrClient::DescribeImageFilterPersonal(const DescribeImageFilterPersonalRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeImageFilterPersonal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeImageFilterPersonalResponse rsp = DescribeImageFilterPersonalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeImageFilterPersonalOutcome(rsp);
        else
            return DescribeImageFilterPersonalOutcome(o.GetError());
    }
    else
    {
        return DescribeImageFilterPersonalOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeImageFilterPersonalAsync(const DescribeImageFilterPersonalRequest& request, const DescribeImageFilterPersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeImageFilterPersonal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DescribeImageFilterPersonalOutcomeCallable TcrClient::DescribeImageFilterPersonalCallable(const DescribeImageFilterPersonalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeImageFilterPersonalOutcome()>>(
        [this, request]()
        {
            return this->DescribeImageFilterPersonal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DescribeImageLifecycleGlobalPersonalOutcome TcrClient::DescribeImageLifecycleGlobalPersonal(const DescribeImageLifecycleGlobalPersonalRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeImageLifecycleGlobalPersonal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeImageLifecycleGlobalPersonalResponse rsp = DescribeImageLifecycleGlobalPersonalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeImageLifecycleGlobalPersonalOutcome(rsp);
        else
            return DescribeImageLifecycleGlobalPersonalOutcome(o.GetError());
    }
    else
    {
        return DescribeImageLifecycleGlobalPersonalOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeImageLifecycleGlobalPersonalAsync(const DescribeImageLifecycleGlobalPersonalRequest& request, const DescribeImageLifecycleGlobalPersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeImageLifecycleGlobalPersonal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DescribeImageLifecycleGlobalPersonalOutcomeCallable TcrClient::DescribeImageLifecycleGlobalPersonalCallable(const DescribeImageLifecycleGlobalPersonalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeImageLifecycleGlobalPersonalOutcome()>>(
        [this, request]()
        {
            return this->DescribeImageLifecycleGlobalPersonal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DescribeImageLifecyclePersonalOutcome TcrClient::DescribeImageLifecyclePersonal(const DescribeImageLifecyclePersonalRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeImageLifecyclePersonal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeImageLifecyclePersonalResponse rsp = DescribeImageLifecyclePersonalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeImageLifecyclePersonalOutcome(rsp);
        else
            return DescribeImageLifecyclePersonalOutcome(o.GetError());
    }
    else
    {
        return DescribeImageLifecyclePersonalOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeImageLifecyclePersonalAsync(const DescribeImageLifecyclePersonalRequest& request, const DescribeImageLifecyclePersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeImageLifecyclePersonal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DescribeImageLifecyclePersonalOutcomeCallable TcrClient::DescribeImageLifecyclePersonalCallable(const DescribeImageLifecyclePersonalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeImageLifecyclePersonalOutcome()>>(
        [this, request]()
        {
            return this->DescribeImageLifecyclePersonal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DescribeImageManifestsOutcome TcrClient::DescribeImageManifests(const DescribeImageManifestsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeImageManifests");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeImageManifestsResponse rsp = DescribeImageManifestsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeImageManifestsOutcome(rsp);
        else
            return DescribeImageManifestsOutcome(o.GetError());
    }
    else
    {
        return DescribeImageManifestsOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeImageManifestsAsync(const DescribeImageManifestsRequest& request, const DescribeImageManifestsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeImageManifests(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DescribeImageManifestsOutcomeCallable TcrClient::DescribeImageManifestsCallable(const DescribeImageManifestsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeImageManifestsOutcome()>>(
        [this, request]()
        {
            return this->DescribeImageManifests(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DescribeImagePersonalOutcome TcrClient::DescribeImagePersonal(const DescribeImagePersonalRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeImagePersonal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeImagePersonalResponse rsp = DescribeImagePersonalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeImagePersonalOutcome(rsp);
        else
            return DescribeImagePersonalOutcome(o.GetError());
    }
    else
    {
        return DescribeImagePersonalOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeImagePersonalAsync(const DescribeImagePersonalRequest& request, const DescribeImagePersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeImagePersonal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DescribeImagePersonalOutcomeCallable TcrClient::DescribeImagePersonalCallable(const DescribeImagePersonalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeImagePersonalOutcome()>>(
        [this, request]()
        {
            return this->DescribeImagePersonal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DescribeImagesOutcome TcrClient::DescribeImages(const DescribeImagesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeImages");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeImagesResponse rsp = DescribeImagesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeImagesOutcome(rsp);
        else
            return DescribeImagesOutcome(o.GetError());
    }
    else
    {
        return DescribeImagesOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeImagesAsync(const DescribeImagesRequest& request, const DescribeImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeImages(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DescribeImagesOutcomeCallable TcrClient::DescribeImagesCallable(const DescribeImagesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeImagesOutcome()>>(
        [this, request]()
        {
            return this->DescribeImages(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DescribeImmutableTagRulesOutcome TcrClient::DescribeImmutableTagRules(const DescribeImmutableTagRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeImmutableTagRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeImmutableTagRulesResponse rsp = DescribeImmutableTagRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeImmutableTagRulesOutcome(rsp);
        else
            return DescribeImmutableTagRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeImmutableTagRulesOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeImmutableTagRulesAsync(const DescribeImmutableTagRulesRequest& request, const DescribeImmutableTagRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeImmutableTagRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DescribeImmutableTagRulesOutcomeCallable TcrClient::DescribeImmutableTagRulesCallable(const DescribeImmutableTagRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeImmutableTagRulesOutcome()>>(
        [this, request]()
        {
            return this->DescribeImmutableTagRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DescribeInstanceAllNamespacesOutcome TcrClient::DescribeInstanceAllNamespaces(const DescribeInstanceAllNamespacesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceAllNamespaces");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceAllNamespacesResponse rsp = DescribeInstanceAllNamespacesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceAllNamespacesOutcome(rsp);
        else
            return DescribeInstanceAllNamespacesOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceAllNamespacesOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeInstanceAllNamespacesAsync(const DescribeInstanceAllNamespacesRequest& request, const DescribeInstanceAllNamespacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceAllNamespaces(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DescribeInstanceAllNamespacesOutcomeCallable TcrClient::DescribeInstanceAllNamespacesCallable(const DescribeInstanceAllNamespacesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceAllNamespacesOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceAllNamespaces(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DescribeInstanceCustomizedDomainOutcome TcrClient::DescribeInstanceCustomizedDomain(const DescribeInstanceCustomizedDomainRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceCustomizedDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceCustomizedDomainResponse rsp = DescribeInstanceCustomizedDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceCustomizedDomainOutcome(rsp);
        else
            return DescribeInstanceCustomizedDomainOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceCustomizedDomainOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeInstanceCustomizedDomainAsync(const DescribeInstanceCustomizedDomainRequest& request, const DescribeInstanceCustomizedDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceCustomizedDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DescribeInstanceCustomizedDomainOutcomeCallable TcrClient::DescribeInstanceCustomizedDomainCallable(const DescribeInstanceCustomizedDomainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceCustomizedDomainOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceCustomizedDomain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DescribeInstanceStatusOutcome TcrClient::DescribeInstanceStatus(const DescribeInstanceStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceStatusResponse rsp = DescribeInstanceStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceStatusOutcome(rsp);
        else
            return DescribeInstanceStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceStatusOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeInstanceStatusAsync(const DescribeInstanceStatusRequest& request, const DescribeInstanceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DescribeInstanceStatusOutcomeCallable TcrClient::DescribeInstanceStatusCallable(const DescribeInstanceStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DescribeInstanceTokenOutcome TcrClient::DescribeInstanceToken(const DescribeInstanceTokenRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceTokenResponse rsp = DescribeInstanceTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceTokenOutcome(rsp);
        else
            return DescribeInstanceTokenOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceTokenOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeInstanceTokenAsync(const DescribeInstanceTokenRequest& request, const DescribeInstanceTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceToken(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DescribeInstanceTokenOutcomeCallable TcrClient::DescribeInstanceTokenCallable(const DescribeInstanceTokenRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceTokenOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceToken(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DescribeInstancesOutcome TcrClient::DescribeInstances(const DescribeInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstancesResponse rsp = DescribeInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstancesOutcome(rsp);
        else
            return DescribeInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeInstancesOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeInstancesAsync(const DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DescribeInstancesOutcomeCallable TcrClient::DescribeInstancesCallable(const DescribeInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DescribeInternalEndpointDnsStatusOutcome TcrClient::DescribeInternalEndpointDnsStatus(const DescribeInternalEndpointDnsStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInternalEndpointDnsStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInternalEndpointDnsStatusResponse rsp = DescribeInternalEndpointDnsStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInternalEndpointDnsStatusOutcome(rsp);
        else
            return DescribeInternalEndpointDnsStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeInternalEndpointDnsStatusOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeInternalEndpointDnsStatusAsync(const DescribeInternalEndpointDnsStatusRequest& request, const DescribeInternalEndpointDnsStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInternalEndpointDnsStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DescribeInternalEndpointDnsStatusOutcomeCallable TcrClient::DescribeInternalEndpointDnsStatusCallable(const DescribeInternalEndpointDnsStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInternalEndpointDnsStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeInternalEndpointDnsStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DescribeInternalEndpointsOutcome TcrClient::DescribeInternalEndpoints(const DescribeInternalEndpointsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInternalEndpoints");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInternalEndpointsResponse rsp = DescribeInternalEndpointsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInternalEndpointsOutcome(rsp);
        else
            return DescribeInternalEndpointsOutcome(o.GetError());
    }
    else
    {
        return DescribeInternalEndpointsOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeInternalEndpointsAsync(const DescribeInternalEndpointsRequest& request, const DescribeInternalEndpointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInternalEndpoints(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DescribeInternalEndpointsOutcomeCallable TcrClient::DescribeInternalEndpointsCallable(const DescribeInternalEndpointsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInternalEndpointsOutcome()>>(
        [this, request]()
        {
            return this->DescribeInternalEndpoints(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DescribeNamespacePersonalOutcome TcrClient::DescribeNamespacePersonal(const DescribeNamespacePersonalRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNamespacePersonal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNamespacePersonalResponse rsp = DescribeNamespacePersonalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNamespacePersonalOutcome(rsp);
        else
            return DescribeNamespacePersonalOutcome(o.GetError());
    }
    else
    {
        return DescribeNamespacePersonalOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeNamespacePersonalAsync(const DescribeNamespacePersonalRequest& request, const DescribeNamespacePersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNamespacePersonal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DescribeNamespacePersonalOutcomeCallable TcrClient::DescribeNamespacePersonalCallable(const DescribeNamespacePersonalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNamespacePersonalOutcome()>>(
        [this, request]()
        {
            return this->DescribeNamespacePersonal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DescribeNamespacesOutcome TcrClient::DescribeNamespaces(const DescribeNamespacesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNamespaces");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNamespacesResponse rsp = DescribeNamespacesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNamespacesOutcome(rsp);
        else
            return DescribeNamespacesOutcome(o.GetError());
    }
    else
    {
        return DescribeNamespacesOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeNamespacesAsync(const DescribeNamespacesRequest& request, const DescribeNamespacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNamespaces(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DescribeNamespacesOutcomeCallable TcrClient::DescribeNamespacesCallable(const DescribeNamespacesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNamespacesOutcome()>>(
        [this, request]()
        {
            return this->DescribeNamespaces(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DescribeRegionsOutcome TcrClient::DescribeRegions(const DescribeRegionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRegions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRegionsResponse rsp = DescribeRegionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRegionsOutcome(rsp);
        else
            return DescribeRegionsOutcome(o.GetError());
    }
    else
    {
        return DescribeRegionsOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRegions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DescribeRegionsOutcomeCallable TcrClient::DescribeRegionsCallable(const DescribeRegionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRegionsOutcome()>>(
        [this, request]()
        {
            return this->DescribeRegions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DescribeReplicationInstanceCreateTasksOutcome TcrClient::DescribeReplicationInstanceCreateTasks(const DescribeReplicationInstanceCreateTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeReplicationInstanceCreateTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeReplicationInstanceCreateTasksResponse rsp = DescribeReplicationInstanceCreateTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeReplicationInstanceCreateTasksOutcome(rsp);
        else
            return DescribeReplicationInstanceCreateTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeReplicationInstanceCreateTasksOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeReplicationInstanceCreateTasksAsync(const DescribeReplicationInstanceCreateTasksRequest& request, const DescribeReplicationInstanceCreateTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeReplicationInstanceCreateTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DescribeReplicationInstanceCreateTasksOutcomeCallable TcrClient::DescribeReplicationInstanceCreateTasksCallable(const DescribeReplicationInstanceCreateTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeReplicationInstanceCreateTasksOutcome()>>(
        [this, request]()
        {
            return this->DescribeReplicationInstanceCreateTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DescribeReplicationInstanceSyncStatusOutcome TcrClient::DescribeReplicationInstanceSyncStatus(const DescribeReplicationInstanceSyncStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeReplicationInstanceSyncStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeReplicationInstanceSyncStatusResponse rsp = DescribeReplicationInstanceSyncStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeReplicationInstanceSyncStatusOutcome(rsp);
        else
            return DescribeReplicationInstanceSyncStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeReplicationInstanceSyncStatusOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeReplicationInstanceSyncStatusAsync(const DescribeReplicationInstanceSyncStatusRequest& request, const DescribeReplicationInstanceSyncStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeReplicationInstanceSyncStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DescribeReplicationInstanceSyncStatusOutcomeCallable TcrClient::DescribeReplicationInstanceSyncStatusCallable(const DescribeReplicationInstanceSyncStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeReplicationInstanceSyncStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeReplicationInstanceSyncStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DescribeReplicationInstancesOutcome TcrClient::DescribeReplicationInstances(const DescribeReplicationInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeReplicationInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeReplicationInstancesResponse rsp = DescribeReplicationInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeReplicationInstancesOutcome(rsp);
        else
            return DescribeReplicationInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeReplicationInstancesOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeReplicationInstancesAsync(const DescribeReplicationInstancesRequest& request, const DescribeReplicationInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeReplicationInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DescribeReplicationInstancesOutcomeCallable TcrClient::DescribeReplicationInstancesCallable(const DescribeReplicationInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeReplicationInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeReplicationInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DescribeRepositoriesOutcome TcrClient::DescribeRepositories(const DescribeRepositoriesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRepositories");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRepositoriesResponse rsp = DescribeRepositoriesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRepositoriesOutcome(rsp);
        else
            return DescribeRepositoriesOutcome(o.GetError());
    }
    else
    {
        return DescribeRepositoriesOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeRepositoriesAsync(const DescribeRepositoriesRequest& request, const DescribeRepositoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRepositories(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DescribeRepositoriesOutcomeCallable TcrClient::DescribeRepositoriesCallable(const DescribeRepositoriesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRepositoriesOutcome()>>(
        [this, request]()
        {
            return this->DescribeRepositories(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DescribeRepositoryFilterPersonalOutcome TcrClient::DescribeRepositoryFilterPersonal(const DescribeRepositoryFilterPersonalRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRepositoryFilterPersonal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRepositoryFilterPersonalResponse rsp = DescribeRepositoryFilterPersonalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRepositoryFilterPersonalOutcome(rsp);
        else
            return DescribeRepositoryFilterPersonalOutcome(o.GetError());
    }
    else
    {
        return DescribeRepositoryFilterPersonalOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeRepositoryFilterPersonalAsync(const DescribeRepositoryFilterPersonalRequest& request, const DescribeRepositoryFilterPersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRepositoryFilterPersonal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DescribeRepositoryFilterPersonalOutcomeCallable TcrClient::DescribeRepositoryFilterPersonalCallable(const DescribeRepositoryFilterPersonalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRepositoryFilterPersonalOutcome()>>(
        [this, request]()
        {
            return this->DescribeRepositoryFilterPersonal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DescribeRepositoryOwnerPersonalOutcome TcrClient::DescribeRepositoryOwnerPersonal(const DescribeRepositoryOwnerPersonalRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRepositoryOwnerPersonal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRepositoryOwnerPersonalResponse rsp = DescribeRepositoryOwnerPersonalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRepositoryOwnerPersonalOutcome(rsp);
        else
            return DescribeRepositoryOwnerPersonalOutcome(o.GetError());
    }
    else
    {
        return DescribeRepositoryOwnerPersonalOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeRepositoryOwnerPersonalAsync(const DescribeRepositoryOwnerPersonalRequest& request, const DescribeRepositoryOwnerPersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRepositoryOwnerPersonal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DescribeRepositoryOwnerPersonalOutcomeCallable TcrClient::DescribeRepositoryOwnerPersonalCallable(const DescribeRepositoryOwnerPersonalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRepositoryOwnerPersonalOutcome()>>(
        [this, request]()
        {
            return this->DescribeRepositoryOwnerPersonal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DescribeRepositoryPersonalOutcome TcrClient::DescribeRepositoryPersonal(const DescribeRepositoryPersonalRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRepositoryPersonal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRepositoryPersonalResponse rsp = DescribeRepositoryPersonalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRepositoryPersonalOutcome(rsp);
        else
            return DescribeRepositoryPersonalOutcome(o.GetError());
    }
    else
    {
        return DescribeRepositoryPersonalOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeRepositoryPersonalAsync(const DescribeRepositoryPersonalRequest& request, const DescribeRepositoryPersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRepositoryPersonal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DescribeRepositoryPersonalOutcomeCallable TcrClient::DescribeRepositoryPersonalCallable(const DescribeRepositoryPersonalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRepositoryPersonalOutcome()>>(
        [this, request]()
        {
            return this->DescribeRepositoryPersonal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DescribeSecurityPoliciesOutcome TcrClient::DescribeSecurityPolicies(const DescribeSecurityPoliciesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecurityPolicies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecurityPoliciesResponse rsp = DescribeSecurityPoliciesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecurityPoliciesOutcome(rsp);
        else
            return DescribeSecurityPoliciesOutcome(o.GetError());
    }
    else
    {
        return DescribeSecurityPoliciesOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeSecurityPoliciesAsync(const DescribeSecurityPoliciesRequest& request, const DescribeSecurityPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSecurityPolicies(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DescribeSecurityPoliciesOutcomeCallable TcrClient::DescribeSecurityPoliciesCallable(const DescribeSecurityPoliciesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSecurityPoliciesOutcome()>>(
        [this, request]()
        {
            return this->DescribeSecurityPolicies(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DescribeServiceAccountsOutcome TcrClient::DescribeServiceAccounts(const DescribeServiceAccountsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeServiceAccounts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeServiceAccountsResponse rsp = DescribeServiceAccountsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeServiceAccountsOutcome(rsp);
        else
            return DescribeServiceAccountsOutcome(o.GetError());
    }
    else
    {
        return DescribeServiceAccountsOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeServiceAccountsAsync(const DescribeServiceAccountsRequest& request, const DescribeServiceAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeServiceAccounts(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DescribeServiceAccountsOutcomeCallable TcrClient::DescribeServiceAccountsCallable(const DescribeServiceAccountsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeServiceAccountsOutcome()>>(
        [this, request]()
        {
            return this->DescribeServiceAccounts(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DescribeTagRetentionExecutionOutcome TcrClient::DescribeTagRetentionExecution(const DescribeTagRetentionExecutionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTagRetentionExecution");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTagRetentionExecutionResponse rsp = DescribeTagRetentionExecutionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTagRetentionExecutionOutcome(rsp);
        else
            return DescribeTagRetentionExecutionOutcome(o.GetError());
    }
    else
    {
        return DescribeTagRetentionExecutionOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeTagRetentionExecutionAsync(const DescribeTagRetentionExecutionRequest& request, const DescribeTagRetentionExecutionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTagRetentionExecution(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DescribeTagRetentionExecutionOutcomeCallable TcrClient::DescribeTagRetentionExecutionCallable(const DescribeTagRetentionExecutionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTagRetentionExecutionOutcome()>>(
        [this, request]()
        {
            return this->DescribeTagRetentionExecution(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DescribeTagRetentionExecutionTaskOutcome TcrClient::DescribeTagRetentionExecutionTask(const DescribeTagRetentionExecutionTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTagRetentionExecutionTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTagRetentionExecutionTaskResponse rsp = DescribeTagRetentionExecutionTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTagRetentionExecutionTaskOutcome(rsp);
        else
            return DescribeTagRetentionExecutionTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeTagRetentionExecutionTaskOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeTagRetentionExecutionTaskAsync(const DescribeTagRetentionExecutionTaskRequest& request, const DescribeTagRetentionExecutionTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTagRetentionExecutionTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DescribeTagRetentionExecutionTaskOutcomeCallable TcrClient::DescribeTagRetentionExecutionTaskCallable(const DescribeTagRetentionExecutionTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTagRetentionExecutionTaskOutcome()>>(
        [this, request]()
        {
            return this->DescribeTagRetentionExecutionTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DescribeTagRetentionRulesOutcome TcrClient::DescribeTagRetentionRules(const DescribeTagRetentionRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTagRetentionRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTagRetentionRulesResponse rsp = DescribeTagRetentionRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTagRetentionRulesOutcome(rsp);
        else
            return DescribeTagRetentionRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeTagRetentionRulesOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeTagRetentionRulesAsync(const DescribeTagRetentionRulesRequest& request, const DescribeTagRetentionRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTagRetentionRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DescribeTagRetentionRulesOutcomeCallable TcrClient::DescribeTagRetentionRulesCallable(const DescribeTagRetentionRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTagRetentionRulesOutcome()>>(
        [this, request]()
        {
            return this->DescribeTagRetentionRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DescribeUserQuotaPersonalOutcome TcrClient::DescribeUserQuotaPersonal(const DescribeUserQuotaPersonalRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserQuotaPersonal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserQuotaPersonalResponse rsp = DescribeUserQuotaPersonalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserQuotaPersonalOutcome(rsp);
        else
            return DescribeUserQuotaPersonalOutcome(o.GetError());
    }
    else
    {
        return DescribeUserQuotaPersonalOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeUserQuotaPersonalAsync(const DescribeUserQuotaPersonalRequest& request, const DescribeUserQuotaPersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUserQuotaPersonal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DescribeUserQuotaPersonalOutcomeCallable TcrClient::DescribeUserQuotaPersonalCallable(const DescribeUserQuotaPersonalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUserQuotaPersonalOutcome()>>(
        [this, request]()
        {
            return this->DescribeUserQuotaPersonal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DescribeWebhookTriggerOutcome TcrClient::DescribeWebhookTrigger(const DescribeWebhookTriggerRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWebhookTrigger");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWebhookTriggerResponse rsp = DescribeWebhookTriggerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWebhookTriggerOutcome(rsp);
        else
            return DescribeWebhookTriggerOutcome(o.GetError());
    }
    else
    {
        return DescribeWebhookTriggerOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeWebhookTriggerAsync(const DescribeWebhookTriggerRequest& request, const DescribeWebhookTriggerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWebhookTrigger(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DescribeWebhookTriggerOutcomeCallable TcrClient::DescribeWebhookTriggerCallable(const DescribeWebhookTriggerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWebhookTriggerOutcome()>>(
        [this, request]()
        {
            return this->DescribeWebhookTrigger(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DescribeWebhookTriggerLogOutcome TcrClient::DescribeWebhookTriggerLog(const DescribeWebhookTriggerLogRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWebhookTriggerLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWebhookTriggerLogResponse rsp = DescribeWebhookTriggerLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWebhookTriggerLogOutcome(rsp);
        else
            return DescribeWebhookTriggerLogOutcome(o.GetError());
    }
    else
    {
        return DescribeWebhookTriggerLogOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeWebhookTriggerLogAsync(const DescribeWebhookTriggerLogRequest& request, const DescribeWebhookTriggerLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWebhookTriggerLog(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DescribeWebhookTriggerLogOutcomeCallable TcrClient::DescribeWebhookTriggerLogCallable(const DescribeWebhookTriggerLogRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWebhookTriggerLogOutcome()>>(
        [this, request]()
        {
            return this->DescribeWebhookTriggerLog(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DownloadHelmChartOutcome TcrClient::DownloadHelmChart(const DownloadHelmChartRequest &request)
{
    auto outcome = MakeRequest(request, "DownloadHelmChart");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DownloadHelmChartResponse rsp = DownloadHelmChartResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DownloadHelmChartOutcome(rsp);
        else
            return DownloadHelmChartOutcome(o.GetError());
    }
    else
    {
        return DownloadHelmChartOutcome(outcome.GetError());
    }
}

void TcrClient::DownloadHelmChartAsync(const DownloadHelmChartRequest& request, const DownloadHelmChartAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DownloadHelmChart(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DownloadHelmChartOutcomeCallable TcrClient::DownloadHelmChartCallable(const DownloadHelmChartRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DownloadHelmChartOutcome()>>(
        [this, request]()
        {
            return this->DownloadHelmChart(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DuplicateImageOutcome TcrClient::DuplicateImage(const DuplicateImageRequest &request)
{
    auto outcome = MakeRequest(request, "DuplicateImage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DuplicateImageResponse rsp = DuplicateImageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DuplicateImageOutcome(rsp);
        else
            return DuplicateImageOutcome(o.GetError());
    }
    else
    {
        return DuplicateImageOutcome(outcome.GetError());
    }
}

void TcrClient::DuplicateImageAsync(const DuplicateImageRequest& request, const DuplicateImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DuplicateImage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DuplicateImageOutcomeCallable TcrClient::DuplicateImageCallable(const DuplicateImageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DuplicateImageOutcome()>>(
        [this, request]()
        {
            return this->DuplicateImage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DuplicateImagePersonalOutcome TcrClient::DuplicateImagePersonal(const DuplicateImagePersonalRequest &request)
{
    auto outcome = MakeRequest(request, "DuplicateImagePersonal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DuplicateImagePersonalResponse rsp = DuplicateImagePersonalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DuplicateImagePersonalOutcome(rsp);
        else
            return DuplicateImagePersonalOutcome(o.GetError());
    }
    else
    {
        return DuplicateImagePersonalOutcome(outcome.GetError());
    }
}

void TcrClient::DuplicateImagePersonalAsync(const DuplicateImagePersonalRequest& request, const DuplicateImagePersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DuplicateImagePersonal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DuplicateImagePersonalOutcomeCallable TcrClient::DuplicateImagePersonalCallable(const DuplicateImagePersonalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DuplicateImagePersonalOutcome()>>(
        [this, request]()
        {
            return this->DuplicateImagePersonal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::ManageExternalEndpointOutcome TcrClient::ManageExternalEndpoint(const ManageExternalEndpointRequest &request)
{
    auto outcome = MakeRequest(request, "ManageExternalEndpoint");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ManageExternalEndpointResponse rsp = ManageExternalEndpointResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ManageExternalEndpointOutcome(rsp);
        else
            return ManageExternalEndpointOutcome(o.GetError());
    }
    else
    {
        return ManageExternalEndpointOutcome(outcome.GetError());
    }
}

void TcrClient::ManageExternalEndpointAsync(const ManageExternalEndpointRequest& request, const ManageExternalEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ManageExternalEndpoint(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::ManageExternalEndpointOutcomeCallable TcrClient::ManageExternalEndpointCallable(const ManageExternalEndpointRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ManageExternalEndpointOutcome()>>(
        [this, request]()
        {
            return this->ManageExternalEndpoint(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::ManageImageLifecycleGlobalPersonalOutcome TcrClient::ManageImageLifecycleGlobalPersonal(const ManageImageLifecycleGlobalPersonalRequest &request)
{
    auto outcome = MakeRequest(request, "ManageImageLifecycleGlobalPersonal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ManageImageLifecycleGlobalPersonalResponse rsp = ManageImageLifecycleGlobalPersonalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ManageImageLifecycleGlobalPersonalOutcome(rsp);
        else
            return ManageImageLifecycleGlobalPersonalOutcome(o.GetError());
    }
    else
    {
        return ManageImageLifecycleGlobalPersonalOutcome(outcome.GetError());
    }
}

void TcrClient::ManageImageLifecycleGlobalPersonalAsync(const ManageImageLifecycleGlobalPersonalRequest& request, const ManageImageLifecycleGlobalPersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ManageImageLifecycleGlobalPersonal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::ManageImageLifecycleGlobalPersonalOutcomeCallable TcrClient::ManageImageLifecycleGlobalPersonalCallable(const ManageImageLifecycleGlobalPersonalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ManageImageLifecycleGlobalPersonalOutcome()>>(
        [this, request]()
        {
            return this->ManageImageLifecycleGlobalPersonal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::ManageInternalEndpointOutcome TcrClient::ManageInternalEndpoint(const ManageInternalEndpointRequest &request)
{
    auto outcome = MakeRequest(request, "ManageInternalEndpoint");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ManageInternalEndpointResponse rsp = ManageInternalEndpointResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ManageInternalEndpointOutcome(rsp);
        else
            return ManageInternalEndpointOutcome(o.GetError());
    }
    else
    {
        return ManageInternalEndpointOutcome(outcome.GetError());
    }
}

void TcrClient::ManageInternalEndpointAsync(const ManageInternalEndpointRequest& request, const ManageInternalEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ManageInternalEndpoint(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::ManageInternalEndpointOutcomeCallable TcrClient::ManageInternalEndpointCallable(const ManageInternalEndpointRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ManageInternalEndpointOutcome()>>(
        [this, request]()
        {
            return this->ManageInternalEndpoint(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::ManageReplicationOutcome TcrClient::ManageReplication(const ManageReplicationRequest &request)
{
    auto outcome = MakeRequest(request, "ManageReplication");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ManageReplicationResponse rsp = ManageReplicationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ManageReplicationOutcome(rsp);
        else
            return ManageReplicationOutcome(o.GetError());
    }
    else
    {
        return ManageReplicationOutcome(outcome.GetError());
    }
}

void TcrClient::ManageReplicationAsync(const ManageReplicationRequest& request, const ManageReplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ManageReplication(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::ManageReplicationOutcomeCallable TcrClient::ManageReplicationCallable(const ManageReplicationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ManageReplicationOutcome()>>(
        [this, request]()
        {
            return this->ManageReplication(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::ModifyApplicationTriggerPersonalOutcome TcrClient::ModifyApplicationTriggerPersonal(const ModifyApplicationTriggerPersonalRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyApplicationTriggerPersonal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyApplicationTriggerPersonalResponse rsp = ModifyApplicationTriggerPersonalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyApplicationTriggerPersonalOutcome(rsp);
        else
            return ModifyApplicationTriggerPersonalOutcome(o.GetError());
    }
    else
    {
        return ModifyApplicationTriggerPersonalOutcome(outcome.GetError());
    }
}

void TcrClient::ModifyApplicationTriggerPersonalAsync(const ModifyApplicationTriggerPersonalRequest& request, const ModifyApplicationTriggerPersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyApplicationTriggerPersonal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::ModifyApplicationTriggerPersonalOutcomeCallable TcrClient::ModifyApplicationTriggerPersonalCallable(const ModifyApplicationTriggerPersonalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyApplicationTriggerPersonalOutcome()>>(
        [this, request]()
        {
            return this->ModifyApplicationTriggerPersonal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::ModifyImmutableTagRulesOutcome TcrClient::ModifyImmutableTagRules(const ModifyImmutableTagRulesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyImmutableTagRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyImmutableTagRulesResponse rsp = ModifyImmutableTagRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyImmutableTagRulesOutcome(rsp);
        else
            return ModifyImmutableTagRulesOutcome(o.GetError());
    }
    else
    {
        return ModifyImmutableTagRulesOutcome(outcome.GetError());
    }
}

void TcrClient::ModifyImmutableTagRulesAsync(const ModifyImmutableTagRulesRequest& request, const ModifyImmutableTagRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyImmutableTagRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::ModifyImmutableTagRulesOutcomeCallable TcrClient::ModifyImmutableTagRulesCallable(const ModifyImmutableTagRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyImmutableTagRulesOutcome()>>(
        [this, request]()
        {
            return this->ModifyImmutableTagRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::ModifyInstanceOutcome TcrClient::ModifyInstance(const ModifyInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstanceResponse rsp = ModifyInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstanceOutcome(rsp);
        else
            return ModifyInstanceOutcome(o.GetError());
    }
    else
    {
        return ModifyInstanceOutcome(outcome.GetError());
    }
}

void TcrClient::ModifyInstanceAsync(const ModifyInstanceRequest& request, const ModifyInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::ModifyInstanceOutcomeCallable TcrClient::ModifyInstanceCallable(const ModifyInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyInstanceOutcome()>>(
        [this, request]()
        {
            return this->ModifyInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::ModifyInstanceTokenOutcome TcrClient::ModifyInstanceToken(const ModifyInstanceTokenRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstanceToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstanceTokenResponse rsp = ModifyInstanceTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstanceTokenOutcome(rsp);
        else
            return ModifyInstanceTokenOutcome(o.GetError());
    }
    else
    {
        return ModifyInstanceTokenOutcome(outcome.GetError());
    }
}

void TcrClient::ModifyInstanceTokenAsync(const ModifyInstanceTokenRequest& request, const ModifyInstanceTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyInstanceToken(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::ModifyInstanceTokenOutcomeCallable TcrClient::ModifyInstanceTokenCallable(const ModifyInstanceTokenRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyInstanceTokenOutcome()>>(
        [this, request]()
        {
            return this->ModifyInstanceToken(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::ModifyNamespaceOutcome TcrClient::ModifyNamespace(const ModifyNamespaceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNamespace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNamespaceResponse rsp = ModifyNamespaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNamespaceOutcome(rsp);
        else
            return ModifyNamespaceOutcome(o.GetError());
    }
    else
    {
        return ModifyNamespaceOutcome(outcome.GetError());
    }
}

void TcrClient::ModifyNamespaceAsync(const ModifyNamespaceRequest& request, const ModifyNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyNamespace(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::ModifyNamespaceOutcomeCallable TcrClient::ModifyNamespaceCallable(const ModifyNamespaceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyNamespaceOutcome()>>(
        [this, request]()
        {
            return this->ModifyNamespace(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::ModifyRepositoryOutcome TcrClient::ModifyRepository(const ModifyRepositoryRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRepository");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRepositoryResponse rsp = ModifyRepositoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRepositoryOutcome(rsp);
        else
            return ModifyRepositoryOutcome(o.GetError());
    }
    else
    {
        return ModifyRepositoryOutcome(outcome.GetError());
    }
}

void TcrClient::ModifyRepositoryAsync(const ModifyRepositoryRequest& request, const ModifyRepositoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRepository(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::ModifyRepositoryOutcomeCallable TcrClient::ModifyRepositoryCallable(const ModifyRepositoryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRepositoryOutcome()>>(
        [this, request]()
        {
            return this->ModifyRepository(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::ModifyRepositoryAccessPersonalOutcome TcrClient::ModifyRepositoryAccessPersonal(const ModifyRepositoryAccessPersonalRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRepositoryAccessPersonal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRepositoryAccessPersonalResponse rsp = ModifyRepositoryAccessPersonalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRepositoryAccessPersonalOutcome(rsp);
        else
            return ModifyRepositoryAccessPersonalOutcome(o.GetError());
    }
    else
    {
        return ModifyRepositoryAccessPersonalOutcome(outcome.GetError());
    }
}

void TcrClient::ModifyRepositoryAccessPersonalAsync(const ModifyRepositoryAccessPersonalRequest& request, const ModifyRepositoryAccessPersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRepositoryAccessPersonal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::ModifyRepositoryAccessPersonalOutcomeCallable TcrClient::ModifyRepositoryAccessPersonalCallable(const ModifyRepositoryAccessPersonalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRepositoryAccessPersonalOutcome()>>(
        [this, request]()
        {
            return this->ModifyRepositoryAccessPersonal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::ModifyRepositoryInfoPersonalOutcome TcrClient::ModifyRepositoryInfoPersonal(const ModifyRepositoryInfoPersonalRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRepositoryInfoPersonal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRepositoryInfoPersonalResponse rsp = ModifyRepositoryInfoPersonalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRepositoryInfoPersonalOutcome(rsp);
        else
            return ModifyRepositoryInfoPersonalOutcome(o.GetError());
    }
    else
    {
        return ModifyRepositoryInfoPersonalOutcome(outcome.GetError());
    }
}

void TcrClient::ModifyRepositoryInfoPersonalAsync(const ModifyRepositoryInfoPersonalRequest& request, const ModifyRepositoryInfoPersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRepositoryInfoPersonal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::ModifyRepositoryInfoPersonalOutcomeCallable TcrClient::ModifyRepositoryInfoPersonalCallable(const ModifyRepositoryInfoPersonalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRepositoryInfoPersonalOutcome()>>(
        [this, request]()
        {
            return this->ModifyRepositoryInfoPersonal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::ModifySecurityPolicyOutcome TcrClient::ModifySecurityPolicy(const ModifySecurityPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySecurityPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySecurityPolicyResponse rsp = ModifySecurityPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySecurityPolicyOutcome(rsp);
        else
            return ModifySecurityPolicyOutcome(o.GetError());
    }
    else
    {
        return ModifySecurityPolicyOutcome(outcome.GetError());
    }
}

void TcrClient::ModifySecurityPolicyAsync(const ModifySecurityPolicyRequest& request, const ModifySecurityPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySecurityPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::ModifySecurityPolicyOutcomeCallable TcrClient::ModifySecurityPolicyCallable(const ModifySecurityPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySecurityPolicyOutcome()>>(
        [this, request]()
        {
            return this->ModifySecurityPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::ModifyServiceAccountOutcome TcrClient::ModifyServiceAccount(const ModifyServiceAccountRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyServiceAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyServiceAccountResponse rsp = ModifyServiceAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyServiceAccountOutcome(rsp);
        else
            return ModifyServiceAccountOutcome(o.GetError());
    }
    else
    {
        return ModifyServiceAccountOutcome(outcome.GetError());
    }
}

void TcrClient::ModifyServiceAccountAsync(const ModifyServiceAccountRequest& request, const ModifyServiceAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyServiceAccount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::ModifyServiceAccountOutcomeCallable TcrClient::ModifyServiceAccountCallable(const ModifyServiceAccountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyServiceAccountOutcome()>>(
        [this, request]()
        {
            return this->ModifyServiceAccount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::ModifyServiceAccountPasswordOutcome TcrClient::ModifyServiceAccountPassword(const ModifyServiceAccountPasswordRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyServiceAccountPassword");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyServiceAccountPasswordResponse rsp = ModifyServiceAccountPasswordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyServiceAccountPasswordOutcome(rsp);
        else
            return ModifyServiceAccountPasswordOutcome(o.GetError());
    }
    else
    {
        return ModifyServiceAccountPasswordOutcome(outcome.GetError());
    }
}

void TcrClient::ModifyServiceAccountPasswordAsync(const ModifyServiceAccountPasswordRequest& request, const ModifyServiceAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyServiceAccountPassword(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::ModifyServiceAccountPasswordOutcomeCallable TcrClient::ModifyServiceAccountPasswordCallable(const ModifyServiceAccountPasswordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyServiceAccountPasswordOutcome()>>(
        [this, request]()
        {
            return this->ModifyServiceAccountPassword(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::ModifyTagRetentionRuleOutcome TcrClient::ModifyTagRetentionRule(const ModifyTagRetentionRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTagRetentionRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTagRetentionRuleResponse rsp = ModifyTagRetentionRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTagRetentionRuleOutcome(rsp);
        else
            return ModifyTagRetentionRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyTagRetentionRuleOutcome(outcome.GetError());
    }
}

void TcrClient::ModifyTagRetentionRuleAsync(const ModifyTagRetentionRuleRequest& request, const ModifyTagRetentionRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyTagRetentionRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::ModifyTagRetentionRuleOutcomeCallable TcrClient::ModifyTagRetentionRuleCallable(const ModifyTagRetentionRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyTagRetentionRuleOutcome()>>(
        [this, request]()
        {
            return this->ModifyTagRetentionRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::ModifyUserPasswordPersonalOutcome TcrClient::ModifyUserPasswordPersonal(const ModifyUserPasswordPersonalRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyUserPasswordPersonal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyUserPasswordPersonalResponse rsp = ModifyUserPasswordPersonalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyUserPasswordPersonalOutcome(rsp);
        else
            return ModifyUserPasswordPersonalOutcome(o.GetError());
    }
    else
    {
        return ModifyUserPasswordPersonalOutcome(outcome.GetError());
    }
}

void TcrClient::ModifyUserPasswordPersonalAsync(const ModifyUserPasswordPersonalRequest& request, const ModifyUserPasswordPersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyUserPasswordPersonal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::ModifyUserPasswordPersonalOutcomeCallable TcrClient::ModifyUserPasswordPersonalCallable(const ModifyUserPasswordPersonalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyUserPasswordPersonalOutcome()>>(
        [this, request]()
        {
            return this->ModifyUserPasswordPersonal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::ModifyWebhookTriggerOutcome TcrClient::ModifyWebhookTrigger(const ModifyWebhookTriggerRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyWebhookTrigger");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyWebhookTriggerResponse rsp = ModifyWebhookTriggerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyWebhookTriggerOutcome(rsp);
        else
            return ModifyWebhookTriggerOutcome(o.GetError());
    }
    else
    {
        return ModifyWebhookTriggerOutcome(outcome.GetError());
    }
}

void TcrClient::ModifyWebhookTriggerAsync(const ModifyWebhookTriggerRequest& request, const ModifyWebhookTriggerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyWebhookTrigger(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::ModifyWebhookTriggerOutcomeCallable TcrClient::ModifyWebhookTriggerCallable(const ModifyWebhookTriggerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyWebhookTriggerOutcome()>>(
        [this, request]()
        {
            return this->ModifyWebhookTrigger(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::RenewInstanceOutcome TcrClient::RenewInstance(const RenewInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "RenewInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RenewInstanceResponse rsp = RenewInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RenewInstanceOutcome(rsp);
        else
            return RenewInstanceOutcome(o.GetError());
    }
    else
    {
        return RenewInstanceOutcome(outcome.GetError());
    }
}

void TcrClient::RenewInstanceAsync(const RenewInstanceRequest& request, const RenewInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RenewInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::RenewInstanceOutcomeCallable TcrClient::RenewInstanceCallable(const RenewInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RenewInstanceOutcome()>>(
        [this, request]()
        {
            return this->RenewInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::ValidateNamespaceExistPersonalOutcome TcrClient::ValidateNamespaceExistPersonal(const ValidateNamespaceExistPersonalRequest &request)
{
    auto outcome = MakeRequest(request, "ValidateNamespaceExistPersonal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ValidateNamespaceExistPersonalResponse rsp = ValidateNamespaceExistPersonalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ValidateNamespaceExistPersonalOutcome(rsp);
        else
            return ValidateNamespaceExistPersonalOutcome(o.GetError());
    }
    else
    {
        return ValidateNamespaceExistPersonalOutcome(outcome.GetError());
    }
}

void TcrClient::ValidateNamespaceExistPersonalAsync(const ValidateNamespaceExistPersonalRequest& request, const ValidateNamespaceExistPersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ValidateNamespaceExistPersonal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::ValidateNamespaceExistPersonalOutcomeCallable TcrClient::ValidateNamespaceExistPersonalCallable(const ValidateNamespaceExistPersonalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ValidateNamespaceExistPersonalOutcome()>>(
        [this, request]()
        {
            return this->ValidateNamespaceExistPersonal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::ValidateRepositoryExistPersonalOutcome TcrClient::ValidateRepositoryExistPersonal(const ValidateRepositoryExistPersonalRequest &request)
{
    auto outcome = MakeRequest(request, "ValidateRepositoryExistPersonal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ValidateRepositoryExistPersonalResponse rsp = ValidateRepositoryExistPersonalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ValidateRepositoryExistPersonalOutcome(rsp);
        else
            return ValidateRepositoryExistPersonalOutcome(o.GetError());
    }
    else
    {
        return ValidateRepositoryExistPersonalOutcome(outcome.GetError());
    }
}

void TcrClient::ValidateRepositoryExistPersonalAsync(const ValidateRepositoryExistPersonalRequest& request, const ValidateRepositoryExistPersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ValidateRepositoryExistPersonal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::ValidateRepositoryExistPersonalOutcomeCallable TcrClient::ValidateRepositoryExistPersonalCallable(const ValidateRepositoryExistPersonalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ValidateRepositoryExistPersonalOutcome()>>(
        [this, request]()
        {
            return this->ValidateRepositoryExistPersonal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


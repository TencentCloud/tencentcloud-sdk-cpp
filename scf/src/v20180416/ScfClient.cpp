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

#include <tencentcloud/scf/v20180416/ScfClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Scf::V20180416;
using namespace TencentCloud::Scf::V20180416::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-04-16";
    const string ENDPOINT = "scf.tencentcloudapi.com";
}

ScfClient::ScfClient(const Credential &credential, const string &region) :
    ScfClient(credential, region, ClientProfile())
{
}

ScfClient::ScfClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


ScfClient::CopyFunctionOutcome ScfClient::CopyFunction(const CopyFunctionRequest &request)
{
    auto outcome = MakeRequest(request, "CopyFunction");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CopyFunctionResponse rsp = CopyFunctionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CopyFunctionOutcome(rsp);
        else
            return CopyFunctionOutcome(o.GetError());
    }
    else
    {
        return CopyFunctionOutcome(outcome.GetError());
    }
}

void ScfClient::CopyFunctionAsync(const CopyFunctionRequest& request, const CopyFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CopyFunction(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ScfClient::CopyFunctionOutcomeCallable ScfClient::CopyFunctionCallable(const CopyFunctionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CopyFunctionOutcome()>>(
        [this, request]()
        {
            return this->CopyFunction(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ScfClient::CreateAliasOutcome ScfClient::CreateAlias(const CreateAliasRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAlias");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAliasResponse rsp = CreateAliasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAliasOutcome(rsp);
        else
            return CreateAliasOutcome(o.GetError());
    }
    else
    {
        return CreateAliasOutcome(outcome.GetError());
    }
}

void ScfClient::CreateAliasAsync(const CreateAliasRequest& request, const CreateAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAlias(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ScfClient::CreateAliasOutcomeCallable ScfClient::CreateAliasCallable(const CreateAliasRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAliasOutcome()>>(
        [this, request]()
        {
            return this->CreateAlias(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ScfClient::CreateCustomDomainOutcome ScfClient::CreateCustomDomain(const CreateCustomDomainRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCustomDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCustomDomainResponse rsp = CreateCustomDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCustomDomainOutcome(rsp);
        else
            return CreateCustomDomainOutcome(o.GetError());
    }
    else
    {
        return CreateCustomDomainOutcome(outcome.GetError());
    }
}

void ScfClient::CreateCustomDomainAsync(const CreateCustomDomainRequest& request, const CreateCustomDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCustomDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ScfClient::CreateCustomDomainOutcomeCallable ScfClient::CreateCustomDomainCallable(const CreateCustomDomainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCustomDomainOutcome()>>(
        [this, request]()
        {
            return this->CreateCustomDomain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ScfClient::CreateFunctionOutcome ScfClient::CreateFunction(const CreateFunctionRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFunction");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFunctionResponse rsp = CreateFunctionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFunctionOutcome(rsp);
        else
            return CreateFunctionOutcome(o.GetError());
    }
    else
    {
        return CreateFunctionOutcome(outcome.GetError());
    }
}

void ScfClient::CreateFunctionAsync(const CreateFunctionRequest& request, const CreateFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateFunction(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ScfClient::CreateFunctionOutcomeCallable ScfClient::CreateFunctionCallable(const CreateFunctionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateFunctionOutcome()>>(
        [this, request]()
        {
            return this->CreateFunction(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ScfClient::CreateNamespaceOutcome ScfClient::CreateNamespace(const CreateNamespaceRequest &request)
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

void ScfClient::CreateNamespaceAsync(const CreateNamespaceRequest& request, const CreateNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateNamespace(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ScfClient::CreateNamespaceOutcomeCallable ScfClient::CreateNamespaceCallable(const CreateNamespaceRequest &request)
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

ScfClient::CreateTriggerOutcome ScfClient::CreateTrigger(const CreateTriggerRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTrigger");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTriggerResponse rsp = CreateTriggerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTriggerOutcome(rsp);
        else
            return CreateTriggerOutcome(o.GetError());
    }
    else
    {
        return CreateTriggerOutcome(outcome.GetError());
    }
}

void ScfClient::CreateTriggerAsync(const CreateTriggerRequest& request, const CreateTriggerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTrigger(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ScfClient::CreateTriggerOutcomeCallable ScfClient::CreateTriggerCallable(const CreateTriggerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTriggerOutcome()>>(
        [this, request]()
        {
            return this->CreateTrigger(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ScfClient::DeleteAliasOutcome ScfClient::DeleteAlias(const DeleteAliasRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAlias");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAliasResponse rsp = DeleteAliasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAliasOutcome(rsp);
        else
            return DeleteAliasOutcome(o.GetError());
    }
    else
    {
        return DeleteAliasOutcome(outcome.GetError());
    }
}

void ScfClient::DeleteAliasAsync(const DeleteAliasRequest& request, const DeleteAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAlias(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ScfClient::DeleteAliasOutcomeCallable ScfClient::DeleteAliasCallable(const DeleteAliasRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAliasOutcome()>>(
        [this, request]()
        {
            return this->DeleteAlias(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ScfClient::DeleteCustomDomainOutcome ScfClient::DeleteCustomDomain(const DeleteCustomDomainRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCustomDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCustomDomainResponse rsp = DeleteCustomDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCustomDomainOutcome(rsp);
        else
            return DeleteCustomDomainOutcome(o.GetError());
    }
    else
    {
        return DeleteCustomDomainOutcome(outcome.GetError());
    }
}

void ScfClient::DeleteCustomDomainAsync(const DeleteCustomDomainRequest& request, const DeleteCustomDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCustomDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ScfClient::DeleteCustomDomainOutcomeCallable ScfClient::DeleteCustomDomainCallable(const DeleteCustomDomainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCustomDomainOutcome()>>(
        [this, request]()
        {
            return this->DeleteCustomDomain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ScfClient::DeleteFunctionOutcome ScfClient::DeleteFunction(const DeleteFunctionRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteFunction");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteFunctionResponse rsp = DeleteFunctionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteFunctionOutcome(rsp);
        else
            return DeleteFunctionOutcome(o.GetError());
    }
    else
    {
        return DeleteFunctionOutcome(outcome.GetError());
    }
}

void ScfClient::DeleteFunctionAsync(const DeleteFunctionRequest& request, const DeleteFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteFunction(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ScfClient::DeleteFunctionOutcomeCallable ScfClient::DeleteFunctionCallable(const DeleteFunctionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteFunctionOutcome()>>(
        [this, request]()
        {
            return this->DeleteFunction(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ScfClient::DeleteFunctionVersionOutcome ScfClient::DeleteFunctionVersion(const DeleteFunctionVersionRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteFunctionVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteFunctionVersionResponse rsp = DeleteFunctionVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteFunctionVersionOutcome(rsp);
        else
            return DeleteFunctionVersionOutcome(o.GetError());
    }
    else
    {
        return DeleteFunctionVersionOutcome(outcome.GetError());
    }
}

void ScfClient::DeleteFunctionVersionAsync(const DeleteFunctionVersionRequest& request, const DeleteFunctionVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteFunctionVersion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ScfClient::DeleteFunctionVersionOutcomeCallable ScfClient::DeleteFunctionVersionCallable(const DeleteFunctionVersionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteFunctionVersionOutcome()>>(
        [this, request]()
        {
            return this->DeleteFunctionVersion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ScfClient::DeleteLayerVersionOutcome ScfClient::DeleteLayerVersion(const DeleteLayerVersionRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLayerVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLayerVersionResponse rsp = DeleteLayerVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLayerVersionOutcome(rsp);
        else
            return DeleteLayerVersionOutcome(o.GetError());
    }
    else
    {
        return DeleteLayerVersionOutcome(outcome.GetError());
    }
}

void ScfClient::DeleteLayerVersionAsync(const DeleteLayerVersionRequest& request, const DeleteLayerVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteLayerVersion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ScfClient::DeleteLayerVersionOutcomeCallable ScfClient::DeleteLayerVersionCallable(const DeleteLayerVersionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteLayerVersionOutcome()>>(
        [this, request]()
        {
            return this->DeleteLayerVersion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ScfClient::DeleteNamespaceOutcome ScfClient::DeleteNamespace(const DeleteNamespaceRequest &request)
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

void ScfClient::DeleteNamespaceAsync(const DeleteNamespaceRequest& request, const DeleteNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteNamespace(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ScfClient::DeleteNamespaceOutcomeCallable ScfClient::DeleteNamespaceCallable(const DeleteNamespaceRequest &request)
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

ScfClient::DeleteProvisionedConcurrencyConfigOutcome ScfClient::DeleteProvisionedConcurrencyConfig(const DeleteProvisionedConcurrencyConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteProvisionedConcurrencyConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteProvisionedConcurrencyConfigResponse rsp = DeleteProvisionedConcurrencyConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteProvisionedConcurrencyConfigOutcome(rsp);
        else
            return DeleteProvisionedConcurrencyConfigOutcome(o.GetError());
    }
    else
    {
        return DeleteProvisionedConcurrencyConfigOutcome(outcome.GetError());
    }
}

void ScfClient::DeleteProvisionedConcurrencyConfigAsync(const DeleteProvisionedConcurrencyConfigRequest& request, const DeleteProvisionedConcurrencyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteProvisionedConcurrencyConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ScfClient::DeleteProvisionedConcurrencyConfigOutcomeCallable ScfClient::DeleteProvisionedConcurrencyConfigCallable(const DeleteProvisionedConcurrencyConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteProvisionedConcurrencyConfigOutcome()>>(
        [this, request]()
        {
            return this->DeleteProvisionedConcurrencyConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ScfClient::DeleteReservedConcurrencyConfigOutcome ScfClient::DeleteReservedConcurrencyConfig(const DeleteReservedConcurrencyConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteReservedConcurrencyConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteReservedConcurrencyConfigResponse rsp = DeleteReservedConcurrencyConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteReservedConcurrencyConfigOutcome(rsp);
        else
            return DeleteReservedConcurrencyConfigOutcome(o.GetError());
    }
    else
    {
        return DeleteReservedConcurrencyConfigOutcome(outcome.GetError());
    }
}

void ScfClient::DeleteReservedConcurrencyConfigAsync(const DeleteReservedConcurrencyConfigRequest& request, const DeleteReservedConcurrencyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteReservedConcurrencyConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ScfClient::DeleteReservedConcurrencyConfigOutcomeCallable ScfClient::DeleteReservedConcurrencyConfigCallable(const DeleteReservedConcurrencyConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteReservedConcurrencyConfigOutcome()>>(
        [this, request]()
        {
            return this->DeleteReservedConcurrencyConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ScfClient::DeleteTriggerOutcome ScfClient::DeleteTrigger(const DeleteTriggerRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTrigger");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTriggerResponse rsp = DeleteTriggerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTriggerOutcome(rsp);
        else
            return DeleteTriggerOutcome(o.GetError());
    }
    else
    {
        return DeleteTriggerOutcome(outcome.GetError());
    }
}

void ScfClient::DeleteTriggerAsync(const DeleteTriggerRequest& request, const DeleteTriggerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteTrigger(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ScfClient::DeleteTriggerOutcomeCallable ScfClient::DeleteTriggerCallable(const DeleteTriggerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteTriggerOutcome()>>(
        [this, request]()
        {
            return this->DeleteTrigger(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ScfClient::GetAccountOutcome ScfClient::GetAccount(const GetAccountRequest &request)
{
    auto outcome = MakeRequest(request, "GetAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetAccountResponse rsp = GetAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetAccountOutcome(rsp);
        else
            return GetAccountOutcome(o.GetError());
    }
    else
    {
        return GetAccountOutcome(outcome.GetError());
    }
}

void ScfClient::GetAccountAsync(const GetAccountRequest& request, const GetAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetAccount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ScfClient::GetAccountOutcomeCallable ScfClient::GetAccountCallable(const GetAccountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetAccountOutcome()>>(
        [this, request]()
        {
            return this->GetAccount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ScfClient::GetAliasOutcome ScfClient::GetAlias(const GetAliasRequest &request)
{
    auto outcome = MakeRequest(request, "GetAlias");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetAliasResponse rsp = GetAliasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetAliasOutcome(rsp);
        else
            return GetAliasOutcome(o.GetError());
    }
    else
    {
        return GetAliasOutcome(outcome.GetError());
    }
}

void ScfClient::GetAliasAsync(const GetAliasRequest& request, const GetAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetAlias(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ScfClient::GetAliasOutcomeCallable ScfClient::GetAliasCallable(const GetAliasRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetAliasOutcome()>>(
        [this, request]()
        {
            return this->GetAlias(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ScfClient::GetAsyncEventStatusOutcome ScfClient::GetAsyncEventStatus(const GetAsyncEventStatusRequest &request)
{
    auto outcome = MakeRequest(request, "GetAsyncEventStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetAsyncEventStatusResponse rsp = GetAsyncEventStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetAsyncEventStatusOutcome(rsp);
        else
            return GetAsyncEventStatusOutcome(o.GetError());
    }
    else
    {
        return GetAsyncEventStatusOutcome(outcome.GetError());
    }
}

void ScfClient::GetAsyncEventStatusAsync(const GetAsyncEventStatusRequest& request, const GetAsyncEventStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetAsyncEventStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ScfClient::GetAsyncEventStatusOutcomeCallable ScfClient::GetAsyncEventStatusCallable(const GetAsyncEventStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetAsyncEventStatusOutcome()>>(
        [this, request]()
        {
            return this->GetAsyncEventStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ScfClient::GetCustomDomainOutcome ScfClient::GetCustomDomain(const GetCustomDomainRequest &request)
{
    auto outcome = MakeRequest(request, "GetCustomDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetCustomDomainResponse rsp = GetCustomDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetCustomDomainOutcome(rsp);
        else
            return GetCustomDomainOutcome(o.GetError());
    }
    else
    {
        return GetCustomDomainOutcome(outcome.GetError());
    }
}

void ScfClient::GetCustomDomainAsync(const GetCustomDomainRequest& request, const GetCustomDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetCustomDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ScfClient::GetCustomDomainOutcomeCallable ScfClient::GetCustomDomainCallable(const GetCustomDomainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetCustomDomainOutcome()>>(
        [this, request]()
        {
            return this->GetCustomDomain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ScfClient::GetFunctionOutcome ScfClient::GetFunction(const GetFunctionRequest &request)
{
    auto outcome = MakeRequest(request, "GetFunction");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetFunctionResponse rsp = GetFunctionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetFunctionOutcome(rsp);
        else
            return GetFunctionOutcome(o.GetError());
    }
    else
    {
        return GetFunctionOutcome(outcome.GetError());
    }
}

void ScfClient::GetFunctionAsync(const GetFunctionRequest& request, const GetFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetFunction(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ScfClient::GetFunctionOutcomeCallable ScfClient::GetFunctionCallable(const GetFunctionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetFunctionOutcome()>>(
        [this, request]()
        {
            return this->GetFunction(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ScfClient::GetFunctionAddressOutcome ScfClient::GetFunctionAddress(const GetFunctionAddressRequest &request)
{
    auto outcome = MakeRequest(request, "GetFunctionAddress");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetFunctionAddressResponse rsp = GetFunctionAddressResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetFunctionAddressOutcome(rsp);
        else
            return GetFunctionAddressOutcome(o.GetError());
    }
    else
    {
        return GetFunctionAddressOutcome(outcome.GetError());
    }
}

void ScfClient::GetFunctionAddressAsync(const GetFunctionAddressRequest& request, const GetFunctionAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetFunctionAddress(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ScfClient::GetFunctionAddressOutcomeCallable ScfClient::GetFunctionAddressCallable(const GetFunctionAddressRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetFunctionAddressOutcome()>>(
        [this, request]()
        {
            return this->GetFunctionAddress(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ScfClient::GetFunctionEventInvokeConfigOutcome ScfClient::GetFunctionEventInvokeConfig(const GetFunctionEventInvokeConfigRequest &request)
{
    auto outcome = MakeRequest(request, "GetFunctionEventInvokeConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetFunctionEventInvokeConfigResponse rsp = GetFunctionEventInvokeConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetFunctionEventInvokeConfigOutcome(rsp);
        else
            return GetFunctionEventInvokeConfigOutcome(o.GetError());
    }
    else
    {
        return GetFunctionEventInvokeConfigOutcome(outcome.GetError());
    }
}

void ScfClient::GetFunctionEventInvokeConfigAsync(const GetFunctionEventInvokeConfigRequest& request, const GetFunctionEventInvokeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetFunctionEventInvokeConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ScfClient::GetFunctionEventInvokeConfigOutcomeCallable ScfClient::GetFunctionEventInvokeConfigCallable(const GetFunctionEventInvokeConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetFunctionEventInvokeConfigOutcome()>>(
        [this, request]()
        {
            return this->GetFunctionEventInvokeConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ScfClient::GetFunctionLogsOutcome ScfClient::GetFunctionLogs(const GetFunctionLogsRequest &request)
{
    auto outcome = MakeRequest(request, "GetFunctionLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetFunctionLogsResponse rsp = GetFunctionLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetFunctionLogsOutcome(rsp);
        else
            return GetFunctionLogsOutcome(o.GetError());
    }
    else
    {
        return GetFunctionLogsOutcome(outcome.GetError());
    }
}

void ScfClient::GetFunctionLogsAsync(const GetFunctionLogsRequest& request, const GetFunctionLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetFunctionLogs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ScfClient::GetFunctionLogsOutcomeCallable ScfClient::GetFunctionLogsCallable(const GetFunctionLogsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetFunctionLogsOutcome()>>(
        [this, request]()
        {
            return this->GetFunctionLogs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ScfClient::GetLayerVersionOutcome ScfClient::GetLayerVersion(const GetLayerVersionRequest &request)
{
    auto outcome = MakeRequest(request, "GetLayerVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetLayerVersionResponse rsp = GetLayerVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetLayerVersionOutcome(rsp);
        else
            return GetLayerVersionOutcome(o.GetError());
    }
    else
    {
        return GetLayerVersionOutcome(outcome.GetError());
    }
}

void ScfClient::GetLayerVersionAsync(const GetLayerVersionRequest& request, const GetLayerVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetLayerVersion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ScfClient::GetLayerVersionOutcomeCallable ScfClient::GetLayerVersionCallable(const GetLayerVersionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetLayerVersionOutcome()>>(
        [this, request]()
        {
            return this->GetLayerVersion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ScfClient::GetProvisionedConcurrencyConfigOutcome ScfClient::GetProvisionedConcurrencyConfig(const GetProvisionedConcurrencyConfigRequest &request)
{
    auto outcome = MakeRequest(request, "GetProvisionedConcurrencyConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetProvisionedConcurrencyConfigResponse rsp = GetProvisionedConcurrencyConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetProvisionedConcurrencyConfigOutcome(rsp);
        else
            return GetProvisionedConcurrencyConfigOutcome(o.GetError());
    }
    else
    {
        return GetProvisionedConcurrencyConfigOutcome(outcome.GetError());
    }
}

void ScfClient::GetProvisionedConcurrencyConfigAsync(const GetProvisionedConcurrencyConfigRequest& request, const GetProvisionedConcurrencyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetProvisionedConcurrencyConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ScfClient::GetProvisionedConcurrencyConfigOutcomeCallable ScfClient::GetProvisionedConcurrencyConfigCallable(const GetProvisionedConcurrencyConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetProvisionedConcurrencyConfigOutcome()>>(
        [this, request]()
        {
            return this->GetProvisionedConcurrencyConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ScfClient::GetRequestStatusOutcome ScfClient::GetRequestStatus(const GetRequestStatusRequest &request)
{
    auto outcome = MakeRequest(request, "GetRequestStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetRequestStatusResponse rsp = GetRequestStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetRequestStatusOutcome(rsp);
        else
            return GetRequestStatusOutcome(o.GetError());
    }
    else
    {
        return GetRequestStatusOutcome(outcome.GetError());
    }
}

void ScfClient::GetRequestStatusAsync(const GetRequestStatusRequest& request, const GetRequestStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetRequestStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ScfClient::GetRequestStatusOutcomeCallable ScfClient::GetRequestStatusCallable(const GetRequestStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetRequestStatusOutcome()>>(
        [this, request]()
        {
            return this->GetRequestStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ScfClient::GetReservedConcurrencyConfigOutcome ScfClient::GetReservedConcurrencyConfig(const GetReservedConcurrencyConfigRequest &request)
{
    auto outcome = MakeRequest(request, "GetReservedConcurrencyConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetReservedConcurrencyConfigResponse rsp = GetReservedConcurrencyConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetReservedConcurrencyConfigOutcome(rsp);
        else
            return GetReservedConcurrencyConfigOutcome(o.GetError());
    }
    else
    {
        return GetReservedConcurrencyConfigOutcome(outcome.GetError());
    }
}

void ScfClient::GetReservedConcurrencyConfigAsync(const GetReservedConcurrencyConfigRequest& request, const GetReservedConcurrencyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetReservedConcurrencyConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ScfClient::GetReservedConcurrencyConfigOutcomeCallable ScfClient::GetReservedConcurrencyConfigCallable(const GetReservedConcurrencyConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetReservedConcurrencyConfigOutcome()>>(
        [this, request]()
        {
            return this->GetReservedConcurrencyConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ScfClient::InvokeOutcome ScfClient::Invoke(const InvokeRequest &request)
{
    auto outcome = MakeRequest(request, "Invoke");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InvokeResponse rsp = InvokeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InvokeOutcome(rsp);
        else
            return InvokeOutcome(o.GetError());
    }
    else
    {
        return InvokeOutcome(outcome.GetError());
    }
}

void ScfClient::InvokeAsync(const InvokeRequest& request, const InvokeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->Invoke(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ScfClient::InvokeOutcomeCallable ScfClient::InvokeCallable(const InvokeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InvokeOutcome()>>(
        [this, request]()
        {
            return this->Invoke(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ScfClient::InvokeFunctionOutcome ScfClient::InvokeFunction(const InvokeFunctionRequest &request)
{
    auto outcome = MakeRequest(request, "InvokeFunction");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InvokeFunctionResponse rsp = InvokeFunctionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InvokeFunctionOutcome(rsp);
        else
            return InvokeFunctionOutcome(o.GetError());
    }
    else
    {
        return InvokeFunctionOutcome(outcome.GetError());
    }
}

void ScfClient::InvokeFunctionAsync(const InvokeFunctionRequest& request, const InvokeFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InvokeFunction(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ScfClient::InvokeFunctionOutcomeCallable ScfClient::InvokeFunctionCallable(const InvokeFunctionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InvokeFunctionOutcome()>>(
        [this, request]()
        {
            return this->InvokeFunction(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ScfClient::ListAliasesOutcome ScfClient::ListAliases(const ListAliasesRequest &request)
{
    auto outcome = MakeRequest(request, "ListAliases");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListAliasesResponse rsp = ListAliasesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListAliasesOutcome(rsp);
        else
            return ListAliasesOutcome(o.GetError());
    }
    else
    {
        return ListAliasesOutcome(outcome.GetError());
    }
}

void ScfClient::ListAliasesAsync(const ListAliasesRequest& request, const ListAliasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListAliases(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ScfClient::ListAliasesOutcomeCallable ScfClient::ListAliasesCallable(const ListAliasesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListAliasesOutcome()>>(
        [this, request]()
        {
            return this->ListAliases(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ScfClient::ListAsyncEventsOutcome ScfClient::ListAsyncEvents(const ListAsyncEventsRequest &request)
{
    auto outcome = MakeRequest(request, "ListAsyncEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListAsyncEventsResponse rsp = ListAsyncEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListAsyncEventsOutcome(rsp);
        else
            return ListAsyncEventsOutcome(o.GetError());
    }
    else
    {
        return ListAsyncEventsOutcome(outcome.GetError());
    }
}

void ScfClient::ListAsyncEventsAsync(const ListAsyncEventsRequest& request, const ListAsyncEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListAsyncEvents(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ScfClient::ListAsyncEventsOutcomeCallable ScfClient::ListAsyncEventsCallable(const ListAsyncEventsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListAsyncEventsOutcome()>>(
        [this, request]()
        {
            return this->ListAsyncEvents(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ScfClient::ListCustomDomainsOutcome ScfClient::ListCustomDomains(const ListCustomDomainsRequest &request)
{
    auto outcome = MakeRequest(request, "ListCustomDomains");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListCustomDomainsResponse rsp = ListCustomDomainsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListCustomDomainsOutcome(rsp);
        else
            return ListCustomDomainsOutcome(o.GetError());
    }
    else
    {
        return ListCustomDomainsOutcome(outcome.GetError());
    }
}

void ScfClient::ListCustomDomainsAsync(const ListCustomDomainsRequest& request, const ListCustomDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListCustomDomains(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ScfClient::ListCustomDomainsOutcomeCallable ScfClient::ListCustomDomainsCallable(const ListCustomDomainsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListCustomDomainsOutcome()>>(
        [this, request]()
        {
            return this->ListCustomDomains(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ScfClient::ListFunctionsOutcome ScfClient::ListFunctions(const ListFunctionsRequest &request)
{
    auto outcome = MakeRequest(request, "ListFunctions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListFunctionsResponse rsp = ListFunctionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListFunctionsOutcome(rsp);
        else
            return ListFunctionsOutcome(o.GetError());
    }
    else
    {
        return ListFunctionsOutcome(outcome.GetError());
    }
}

void ScfClient::ListFunctionsAsync(const ListFunctionsRequest& request, const ListFunctionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListFunctions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ScfClient::ListFunctionsOutcomeCallable ScfClient::ListFunctionsCallable(const ListFunctionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListFunctionsOutcome()>>(
        [this, request]()
        {
            return this->ListFunctions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ScfClient::ListLayerVersionsOutcome ScfClient::ListLayerVersions(const ListLayerVersionsRequest &request)
{
    auto outcome = MakeRequest(request, "ListLayerVersions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListLayerVersionsResponse rsp = ListLayerVersionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListLayerVersionsOutcome(rsp);
        else
            return ListLayerVersionsOutcome(o.GetError());
    }
    else
    {
        return ListLayerVersionsOutcome(outcome.GetError());
    }
}

void ScfClient::ListLayerVersionsAsync(const ListLayerVersionsRequest& request, const ListLayerVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListLayerVersions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ScfClient::ListLayerVersionsOutcomeCallable ScfClient::ListLayerVersionsCallable(const ListLayerVersionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListLayerVersionsOutcome()>>(
        [this, request]()
        {
            return this->ListLayerVersions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ScfClient::ListLayersOutcome ScfClient::ListLayers(const ListLayersRequest &request)
{
    auto outcome = MakeRequest(request, "ListLayers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListLayersResponse rsp = ListLayersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListLayersOutcome(rsp);
        else
            return ListLayersOutcome(o.GetError());
    }
    else
    {
        return ListLayersOutcome(outcome.GetError());
    }
}

void ScfClient::ListLayersAsync(const ListLayersRequest& request, const ListLayersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListLayers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ScfClient::ListLayersOutcomeCallable ScfClient::ListLayersCallable(const ListLayersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListLayersOutcome()>>(
        [this, request]()
        {
            return this->ListLayers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ScfClient::ListNamespacesOutcome ScfClient::ListNamespaces(const ListNamespacesRequest &request)
{
    auto outcome = MakeRequest(request, "ListNamespaces");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListNamespacesResponse rsp = ListNamespacesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListNamespacesOutcome(rsp);
        else
            return ListNamespacesOutcome(o.GetError());
    }
    else
    {
        return ListNamespacesOutcome(outcome.GetError());
    }
}

void ScfClient::ListNamespacesAsync(const ListNamespacesRequest& request, const ListNamespacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListNamespaces(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ScfClient::ListNamespacesOutcomeCallable ScfClient::ListNamespacesCallable(const ListNamespacesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListNamespacesOutcome()>>(
        [this, request]()
        {
            return this->ListNamespaces(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ScfClient::ListTriggersOutcome ScfClient::ListTriggers(const ListTriggersRequest &request)
{
    auto outcome = MakeRequest(request, "ListTriggers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListTriggersResponse rsp = ListTriggersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListTriggersOutcome(rsp);
        else
            return ListTriggersOutcome(o.GetError());
    }
    else
    {
        return ListTriggersOutcome(outcome.GetError());
    }
}

void ScfClient::ListTriggersAsync(const ListTriggersRequest& request, const ListTriggersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListTriggers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ScfClient::ListTriggersOutcomeCallable ScfClient::ListTriggersCallable(const ListTriggersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListTriggersOutcome()>>(
        [this, request]()
        {
            return this->ListTriggers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ScfClient::ListVersionByFunctionOutcome ScfClient::ListVersionByFunction(const ListVersionByFunctionRequest &request)
{
    auto outcome = MakeRequest(request, "ListVersionByFunction");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListVersionByFunctionResponse rsp = ListVersionByFunctionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListVersionByFunctionOutcome(rsp);
        else
            return ListVersionByFunctionOutcome(o.GetError());
    }
    else
    {
        return ListVersionByFunctionOutcome(outcome.GetError());
    }
}

void ScfClient::ListVersionByFunctionAsync(const ListVersionByFunctionRequest& request, const ListVersionByFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListVersionByFunction(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ScfClient::ListVersionByFunctionOutcomeCallable ScfClient::ListVersionByFunctionCallable(const ListVersionByFunctionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListVersionByFunctionOutcome()>>(
        [this, request]()
        {
            return this->ListVersionByFunction(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ScfClient::PublishLayerVersionOutcome ScfClient::PublishLayerVersion(const PublishLayerVersionRequest &request)
{
    auto outcome = MakeRequest(request, "PublishLayerVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PublishLayerVersionResponse rsp = PublishLayerVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PublishLayerVersionOutcome(rsp);
        else
            return PublishLayerVersionOutcome(o.GetError());
    }
    else
    {
        return PublishLayerVersionOutcome(outcome.GetError());
    }
}

void ScfClient::PublishLayerVersionAsync(const PublishLayerVersionRequest& request, const PublishLayerVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->PublishLayerVersion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ScfClient::PublishLayerVersionOutcomeCallable ScfClient::PublishLayerVersionCallable(const PublishLayerVersionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<PublishLayerVersionOutcome()>>(
        [this, request]()
        {
            return this->PublishLayerVersion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ScfClient::PublishVersionOutcome ScfClient::PublishVersion(const PublishVersionRequest &request)
{
    auto outcome = MakeRequest(request, "PublishVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PublishVersionResponse rsp = PublishVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PublishVersionOutcome(rsp);
        else
            return PublishVersionOutcome(o.GetError());
    }
    else
    {
        return PublishVersionOutcome(outcome.GetError());
    }
}

void ScfClient::PublishVersionAsync(const PublishVersionRequest& request, const PublishVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->PublishVersion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ScfClient::PublishVersionOutcomeCallable ScfClient::PublishVersionCallable(const PublishVersionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<PublishVersionOutcome()>>(
        [this, request]()
        {
            return this->PublishVersion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ScfClient::PutProvisionedConcurrencyConfigOutcome ScfClient::PutProvisionedConcurrencyConfig(const PutProvisionedConcurrencyConfigRequest &request)
{
    auto outcome = MakeRequest(request, "PutProvisionedConcurrencyConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PutProvisionedConcurrencyConfigResponse rsp = PutProvisionedConcurrencyConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PutProvisionedConcurrencyConfigOutcome(rsp);
        else
            return PutProvisionedConcurrencyConfigOutcome(o.GetError());
    }
    else
    {
        return PutProvisionedConcurrencyConfigOutcome(outcome.GetError());
    }
}

void ScfClient::PutProvisionedConcurrencyConfigAsync(const PutProvisionedConcurrencyConfigRequest& request, const PutProvisionedConcurrencyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->PutProvisionedConcurrencyConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ScfClient::PutProvisionedConcurrencyConfigOutcomeCallable ScfClient::PutProvisionedConcurrencyConfigCallable(const PutProvisionedConcurrencyConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<PutProvisionedConcurrencyConfigOutcome()>>(
        [this, request]()
        {
            return this->PutProvisionedConcurrencyConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ScfClient::PutReservedConcurrencyConfigOutcome ScfClient::PutReservedConcurrencyConfig(const PutReservedConcurrencyConfigRequest &request)
{
    auto outcome = MakeRequest(request, "PutReservedConcurrencyConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PutReservedConcurrencyConfigResponse rsp = PutReservedConcurrencyConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PutReservedConcurrencyConfigOutcome(rsp);
        else
            return PutReservedConcurrencyConfigOutcome(o.GetError());
    }
    else
    {
        return PutReservedConcurrencyConfigOutcome(outcome.GetError());
    }
}

void ScfClient::PutReservedConcurrencyConfigAsync(const PutReservedConcurrencyConfigRequest& request, const PutReservedConcurrencyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->PutReservedConcurrencyConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ScfClient::PutReservedConcurrencyConfigOutcomeCallable ScfClient::PutReservedConcurrencyConfigCallable(const PutReservedConcurrencyConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<PutReservedConcurrencyConfigOutcome()>>(
        [this, request]()
        {
            return this->PutReservedConcurrencyConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ScfClient::PutTotalConcurrencyConfigOutcome ScfClient::PutTotalConcurrencyConfig(const PutTotalConcurrencyConfigRequest &request)
{
    auto outcome = MakeRequest(request, "PutTotalConcurrencyConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PutTotalConcurrencyConfigResponse rsp = PutTotalConcurrencyConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PutTotalConcurrencyConfigOutcome(rsp);
        else
            return PutTotalConcurrencyConfigOutcome(o.GetError());
    }
    else
    {
        return PutTotalConcurrencyConfigOutcome(outcome.GetError());
    }
}

void ScfClient::PutTotalConcurrencyConfigAsync(const PutTotalConcurrencyConfigRequest& request, const PutTotalConcurrencyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->PutTotalConcurrencyConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ScfClient::PutTotalConcurrencyConfigOutcomeCallable ScfClient::PutTotalConcurrencyConfigCallable(const PutTotalConcurrencyConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<PutTotalConcurrencyConfigOutcome()>>(
        [this, request]()
        {
            return this->PutTotalConcurrencyConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ScfClient::TerminateAsyncEventOutcome ScfClient::TerminateAsyncEvent(const TerminateAsyncEventRequest &request)
{
    auto outcome = MakeRequest(request, "TerminateAsyncEvent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TerminateAsyncEventResponse rsp = TerminateAsyncEventResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TerminateAsyncEventOutcome(rsp);
        else
            return TerminateAsyncEventOutcome(o.GetError());
    }
    else
    {
        return TerminateAsyncEventOutcome(outcome.GetError());
    }
}

void ScfClient::TerminateAsyncEventAsync(const TerminateAsyncEventRequest& request, const TerminateAsyncEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TerminateAsyncEvent(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ScfClient::TerminateAsyncEventOutcomeCallable ScfClient::TerminateAsyncEventCallable(const TerminateAsyncEventRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TerminateAsyncEventOutcome()>>(
        [this, request]()
        {
            return this->TerminateAsyncEvent(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ScfClient::UpdateAliasOutcome ScfClient::UpdateAlias(const UpdateAliasRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateAlias");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateAliasResponse rsp = UpdateAliasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateAliasOutcome(rsp);
        else
            return UpdateAliasOutcome(o.GetError());
    }
    else
    {
        return UpdateAliasOutcome(outcome.GetError());
    }
}

void ScfClient::UpdateAliasAsync(const UpdateAliasRequest& request, const UpdateAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateAlias(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ScfClient::UpdateAliasOutcomeCallable ScfClient::UpdateAliasCallable(const UpdateAliasRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateAliasOutcome()>>(
        [this, request]()
        {
            return this->UpdateAlias(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ScfClient::UpdateCustomDomainOutcome ScfClient::UpdateCustomDomain(const UpdateCustomDomainRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateCustomDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateCustomDomainResponse rsp = UpdateCustomDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateCustomDomainOutcome(rsp);
        else
            return UpdateCustomDomainOutcome(o.GetError());
    }
    else
    {
        return UpdateCustomDomainOutcome(outcome.GetError());
    }
}

void ScfClient::UpdateCustomDomainAsync(const UpdateCustomDomainRequest& request, const UpdateCustomDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateCustomDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ScfClient::UpdateCustomDomainOutcomeCallable ScfClient::UpdateCustomDomainCallable(const UpdateCustomDomainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateCustomDomainOutcome()>>(
        [this, request]()
        {
            return this->UpdateCustomDomain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ScfClient::UpdateFunctionCodeOutcome ScfClient::UpdateFunctionCode(const UpdateFunctionCodeRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateFunctionCode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateFunctionCodeResponse rsp = UpdateFunctionCodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateFunctionCodeOutcome(rsp);
        else
            return UpdateFunctionCodeOutcome(o.GetError());
    }
    else
    {
        return UpdateFunctionCodeOutcome(outcome.GetError());
    }
}

void ScfClient::UpdateFunctionCodeAsync(const UpdateFunctionCodeRequest& request, const UpdateFunctionCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateFunctionCode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ScfClient::UpdateFunctionCodeOutcomeCallable ScfClient::UpdateFunctionCodeCallable(const UpdateFunctionCodeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateFunctionCodeOutcome()>>(
        [this, request]()
        {
            return this->UpdateFunctionCode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ScfClient::UpdateFunctionConfigurationOutcome ScfClient::UpdateFunctionConfiguration(const UpdateFunctionConfigurationRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateFunctionConfiguration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateFunctionConfigurationResponse rsp = UpdateFunctionConfigurationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateFunctionConfigurationOutcome(rsp);
        else
            return UpdateFunctionConfigurationOutcome(o.GetError());
    }
    else
    {
        return UpdateFunctionConfigurationOutcome(outcome.GetError());
    }
}

void ScfClient::UpdateFunctionConfigurationAsync(const UpdateFunctionConfigurationRequest& request, const UpdateFunctionConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateFunctionConfiguration(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ScfClient::UpdateFunctionConfigurationOutcomeCallable ScfClient::UpdateFunctionConfigurationCallable(const UpdateFunctionConfigurationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateFunctionConfigurationOutcome()>>(
        [this, request]()
        {
            return this->UpdateFunctionConfiguration(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ScfClient::UpdateFunctionEventInvokeConfigOutcome ScfClient::UpdateFunctionEventInvokeConfig(const UpdateFunctionEventInvokeConfigRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateFunctionEventInvokeConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateFunctionEventInvokeConfigResponse rsp = UpdateFunctionEventInvokeConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateFunctionEventInvokeConfigOutcome(rsp);
        else
            return UpdateFunctionEventInvokeConfigOutcome(o.GetError());
    }
    else
    {
        return UpdateFunctionEventInvokeConfigOutcome(outcome.GetError());
    }
}

void ScfClient::UpdateFunctionEventInvokeConfigAsync(const UpdateFunctionEventInvokeConfigRequest& request, const UpdateFunctionEventInvokeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateFunctionEventInvokeConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ScfClient::UpdateFunctionEventInvokeConfigOutcomeCallable ScfClient::UpdateFunctionEventInvokeConfigCallable(const UpdateFunctionEventInvokeConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateFunctionEventInvokeConfigOutcome()>>(
        [this, request]()
        {
            return this->UpdateFunctionEventInvokeConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ScfClient::UpdateNamespaceOutcome ScfClient::UpdateNamespace(const UpdateNamespaceRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateNamespace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateNamespaceResponse rsp = UpdateNamespaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateNamespaceOutcome(rsp);
        else
            return UpdateNamespaceOutcome(o.GetError());
    }
    else
    {
        return UpdateNamespaceOutcome(outcome.GetError());
    }
}

void ScfClient::UpdateNamespaceAsync(const UpdateNamespaceRequest& request, const UpdateNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateNamespace(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ScfClient::UpdateNamespaceOutcomeCallable ScfClient::UpdateNamespaceCallable(const UpdateNamespaceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateNamespaceOutcome()>>(
        [this, request]()
        {
            return this->UpdateNamespace(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ScfClient::UpdateTriggerOutcome ScfClient::UpdateTrigger(const UpdateTriggerRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateTrigger");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateTriggerResponse rsp = UpdateTriggerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateTriggerOutcome(rsp);
        else
            return UpdateTriggerOutcome(o.GetError());
    }
    else
    {
        return UpdateTriggerOutcome(outcome.GetError());
    }
}

void ScfClient::UpdateTriggerAsync(const UpdateTriggerRequest& request, const UpdateTriggerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateTrigger(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ScfClient::UpdateTriggerOutcomeCallable ScfClient::UpdateTriggerCallable(const UpdateTriggerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateTriggerOutcome()>>(
        [this, request]()
        {
            return this->UpdateTrigger(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ScfClient::UpdateTriggerStatusOutcome ScfClient::UpdateTriggerStatus(const UpdateTriggerStatusRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateTriggerStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateTriggerStatusResponse rsp = UpdateTriggerStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateTriggerStatusOutcome(rsp);
        else
            return UpdateTriggerStatusOutcome(o.GetError());
    }
    else
    {
        return UpdateTriggerStatusOutcome(outcome.GetError());
    }
}

void ScfClient::UpdateTriggerStatusAsync(const UpdateTriggerStatusRequest& request, const UpdateTriggerStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateTriggerStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ScfClient::UpdateTriggerStatusOutcomeCallable ScfClient::UpdateTriggerStatusCallable(const UpdateTriggerStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateTriggerStatusOutcome()>>(
        [this, request]()
        {
            return this->UpdateTriggerStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


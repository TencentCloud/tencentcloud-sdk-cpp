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

